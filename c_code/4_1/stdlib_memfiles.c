/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <fcntl.h>

#include <sys/stat.h>

#include <unistd.h>

#include <sys/types.h>

#include <sys/time.h>

#include <sys/mman.h>
typedef struct memfile273208 memfile273208;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct  memfile273208  {
void* Mem;
NI Size;
int Handle;
};
typedef N_NIMCALL_PTR(void, TY3089) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3094) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3089 marker;
TY3094 deepcopy;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, raiseoserror_114609)(NI32 errorcode);
N_NIMCALL(NI32, oslasterror_114641)(void);
TNimType NTI273208; /* MemFile */
extern TNimType NTI153; /* pointer */
extern TNimType NTI108; /* int */
extern TNimType NTI5611; /* cint */
extern int mappopulate_106522;

N_NIMCALL(memfile273208, open_273807)(NimStringDesc* filename, NU8 mode, NI mappedsize, NI offset, NI newfilesize) {
	memfile273208 result;
	NIM_BOOL readonly;
	int flags;
	int LOC53;
	NI32 LOC59;
	memset((void*)&result, 0, sizeof(result));
	readonly = (mode == ((NU8) 0));
	{
		if (!readonly) goto LA3;
		flags = O_RDONLY;
	}
	goto LA1;
	LA3: ;
	{
		flags = O_RDWR;
	}
	LA1: ;
	{
		NI32 permissionsmode;
		if (!!((newfilesize == -1))) goto LA8;
		flags = (NI32)((NI32)(flags | O_CREAT) | O_TRUNC);
		permissionsmode = (NI32)(S_IRUSR | S_IWUSR);
		result.Handle = open(filename->data, flags, permissionsmode);
	}
	goto LA6;
	LA8: ;
	{
		result.Handle = open(filename->data, flags);
	}
	LA6: ;
	{
		NI32 LOC20;
		if (!(result.Handle == ((NI32) -1))) goto LA13;
		result.Mem = NIM_NIL;
		result.Size = 0;
		{
			int LOC19;
			if (!!((result.Handle == ((NI32) 0)))) goto LA17;
			LOC19 = 0;
			LOC19 = close(result.Handle);
		}
		LA17: ;
		LOC20 = 0;
		LOC20 = oslasterror_114641();
		raiseoserror_114609(LOC20);
	}
	LA13: ;
	{
		if (!!((newfilesize == -1))) goto LA23;
		{
			int LOC27;
			NI32 LOC35;
			LOC27 = 0;
			LOC27 = ftruncate(result.Handle, ((off_t) (newfilesize)));
			if (!(LOC27 == ((NI32) -1))) goto LA28;
			result.Mem = NIM_NIL;
			result.Size = 0;
			{
				int LOC34;
				if (!!((result.Handle == ((NI32) 0)))) goto LA32;
				LOC34 = 0;
				LOC34 = close(result.Handle);
			}
			LA32: ;
			LOC35 = 0;
			LOC35 = oslasterror_114641();
			raiseoserror_114609(LOC35);
		}
		LA28: ;
	}
	LA23: ;
	{
		if (!!((mappedsize == -1))) goto LA38;
		result.Size = mappedsize;
	}
	goto LA36;
	LA38: ;
	{
		struct stat stat;
		memset((void*)&stat, 0, sizeof(stat));
		{
			int LOC43;
			LOC43 = 0;
			LOC43 = fstat(result.Handle, &stat);
			if (!!((LOC43 == ((NI32) -1)))) goto LA44;
			result.Size = ((NI) (stat.st_size));
		}
		goto LA41;
		LA44: ;
		{
			NI32 LOC52;
			result.Mem = NIM_NIL;
			result.Size = 0;
			{
				int LOC51;
				if (!!((result.Handle == ((NI32) 0)))) goto LA49;
				LOC51 = 0;
				LOC51 = close(result.Handle);
			}
			LA49: ;
			LOC52 = 0;
			LOC52 = oslasterror_114641();
			raiseoserror_114609(LOC52);
		}
		LA41: ;
	}
	LA36: ;
	LOC53 = 0;
	{
		if (!readonly) goto LA56;
		LOC53 = PROT_READ;
	}
	goto LA54;
	LA56: ;
	{
		LOC53 = (NI32)(PROT_READ | PROT_WRITE);
	}
	LA54: ;
	LOC59 = 0;
	{
		if (!readonly) goto LA62;
		LOC59 = (NI32)(MAP_PRIVATE | mappopulate_106522);
	}
	goto LA60;
	LA62: ;
	{
		LOC59 = (NI32)(MAP_SHARED | mappopulate_106522);
	}
	LA60: ;
	result.Mem = mmap(NIM_NIL, result.Size, LOC53, LOC59, result.Handle, ((off_t) (offset)));
	{
		NI32 LOC74;
		if (!(result.Mem == ((void*) (MAP_FAILED)))) goto LA67;
		result.Mem = NIM_NIL;
		result.Size = 0;
		{
			int LOC73;
			if (!!((result.Handle == ((NI32) 0)))) goto LA71;
			LOC73 = 0;
			LOC73 = close(result.Handle);
		}
		LA71: ;
		LOC74 = 0;
		LOC74 = oslasterror_114641();
		raiseoserror_114609(LOC74);
	}
	LA67: ;
	return result;
}

N_NIMCALL(void, close_274248)(memfile273208* f) {
	NIM_BOOL error;
	NI32 lasterr;
	error = NIM_FALSE;
	lasterr = 0;
	{
		int LOC5;
		NIM_BOOL LOC6;
		int LOC7;
		if (!!(((*f).Handle == ((NI32) 0)))) goto LA3;
		LOC5 = 0;
		LOC5 = munmap((*f).Mem, (*f).Size);
		error = !((LOC5 == ((NI32) 0)));
		lasterr = oslasterror_114641();
		LOC6 = 0;
		LOC7 = 0;
		LOC7 = close((*f).Handle);
		LOC6 = !((LOC7 == ((NI32) 0)));
		if (LOC6) goto LA8;
		LOC6 = error;
		LA8: ;
		error = LOC6;
	}
	LA3: ;
	(*f).Size = 0;
	(*f).Mem = NIM_NIL;
	(*f).Handle = ((int) 0);
	{
		if (!error) goto LA11;
		raiseoserror_114609(lasterr);
	}
	LA11: ;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_memfilesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_memfilesDatInit)(void) {
static TNimNode* TMP825[3];
static TNimNode TMP809[4];
NTI273208.size = sizeof(memfile273208);
NTI273208.kind = 18;
NTI273208.base = 0;
NTI273208.flags = 3;
TMP825[0] = &TMP809[1];
TMP809[1].kind = 1;
TMP809[1].offset = offsetof(memfile273208, Mem);
TMP809[1].typ = (&NTI153);
TMP809[1].name = "mem";
TMP825[1] = &TMP809[2];
TMP809[2].kind = 1;
TMP809[2].offset = offsetof(memfile273208, Size);
TMP809[2].typ = (&NTI108);
TMP809[2].name = "size";
TMP825[2] = &TMP809[3];
TMP809[3].kind = 1;
TMP809[3].offset = offsetof(memfile273208, Handle);
TMP809[3].typ = (&NTI5611);
TMP809[3].name = "handle";
TMP809[0].len = 3; TMP809[0].kind = 2; TMP809[0].sons = &TMP825[0];
NTI273208.node = &TMP809[0];
}
