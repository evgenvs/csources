/* Generated by Nim Compiler v0.17.2 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef powerpc
#undef unix
typedef struct tyObject_NdiFile_9cEuXfAnHp9bnWFK409cMtsEw tyObject_NdiFile_9cEuXfAnHp9bnWFK409cMtsEw;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw;
typedef struct tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg;
typedef struct RootObj RootObj;
typedef struct tySequence_zuqP4Riz26Oi5fWgPYVEgA tySequence_zuqP4Riz26Oi5fWgPYVEgA;
typedef struct tySequence_DXS6mEo7PVUFJkirsQ9bNQA tySequence_DXS6mEo7PVUFJkirsQ9bNQA;
typedef struct tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA;
typedef struct tySequence_sksVpmPRIkNR9axiwtD1Guw tySequence_sksVpmPRIkNR9axiwtD1Guw;
typedef struct tyObject_TType_LTUWCZolpovw9cWE3JBWSUw tyObject_TType_LTUWCZolpovw9cWE3JBWSUw;
typedef struct tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g;
typedef struct tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw;
typedef struct tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw;
typedef struct tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA;
typedef struct tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ;
typedef struct tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA;
typedef struct tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA;
typedef struct tySequence_iGkpo9aKQdr3NWelKC4cnJA tySequence_iGkpo9aKQdr3NWelKC4cnJA;
typedef struct tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct tyTuple_a09bGTAl9ceOKTAytYdkbyKg tyTuple_a09bGTAl9ceOKTAytYdkbyKg;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_NdiFile_9cEuXfAnHp9bnWFK409cMtsEw {
NIM_BOOL enabled;
FILE* f;
NimStringDesc* buf;
};
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NU8 tyEnum_FileMode_fVUBHvW79bXUw1j55Oo9avSQ;
struct RootObj {
TNimType* m_type;
};
struct tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg {
  RootObj Sup;
NI id;
};
typedef NU8 tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw;
struct tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA {
NI counter;
tySequence_sksVpmPRIkNR9axiwtD1Guw* data;
};
typedef NU16 tyEnum_TMagic_shZhZOdbVC5nnFvcXQAImg;
struct tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw {
NI16 line;
NI16 col;
NI32 fileIndex;
};
typedef NU64 tySet_tyEnum_TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw;
typedef NU32 tySet_tyEnum_TOption_WspMeQySXNP2XoTWR5MTgg;
typedef NU8 tyEnum_TLocKind_O7PRFZKuiBBWbku09cayVBg;
typedef NU8 tyEnum_TStorageLoc_JK9cKMX3XnqHaUky9b6gkGEw;
typedef NU16 tySet_tyEnum_TLocFlag_o2bqJgR4ceIupnUSpxiudA;
struct tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA {
tyEnum_TLocKind_O7PRFZKuiBBWbku09cayVBg k;
tyEnum_TStorageLoc_JK9cKMX3XnqHaUky9b6gkGEw s;
tySet_tyEnum_TLocFlag_o2bqJgR4ceIupnUSpxiudA flags;
tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* t;
tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ* r;
};
struct tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw {
  tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg Sup;
tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw kind;
union{
struct {tySequence_zuqP4Riz26Oi5fWgPYVEgA* typeInstCache;
} S1;
struct {tySequence_DXS6mEo7PVUFJkirsQ9bNQA* procInstCache;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* gcUnsafetyReason;
} S2;
struct {tySequence_DXS6mEo7PVUFJkirsQ9bNQA* usedGenerics;
tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA tab;
} S3;
struct {tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* guard;
NI bitsize;
} S4;
} kindU;
tyEnum_TMagic_shZhZOdbVC5nnFvcXQAImg magic;
tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* typ;
tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* name;
tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* owner;
tySet_tyEnum_TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw flags;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* ast;
tySet_tyEnum_TOption_WspMeQySXNP2XoTWR5MTgg options;
NI position;
NI offset;
tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA loc;
tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA* annex;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* constraint;
};
typedef NimStringDesc* tyArray_Re75IspeoxXy2oCZHwcRrA[2];
struct tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g {
  tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg Sup;
NimStringDesc* s;
tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* next;
NI h;
};
typedef NimStringDesc* tyArray_sMpvt1sOxOJ3LFGulnbeMQ[4];
typedef NU8 tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag;
typedef NU8 tyEnum_TCallingConvention_yjAJ8w0h1PBaSwSGJ3P7IA;
typedef NU64 tySet_tyEnum_TTypeFlag_x2m5g1NpbmDig4wLT3Ylhw;
struct tyObject_TType_LTUWCZolpovw9cWE3JBWSUw {
  tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg Sup;
tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag kind;
tyEnum_TCallingConvention_yjAJ8w0h1PBaSwSGJ3P7IA callConv;
tySet_tyEnum_TTypeFlag_x2m5g1NpbmDig4wLT3Ylhw flags;
tySequence_zuqP4Riz26Oi5fWgPYVEgA* sons;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* owner;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* sym;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* destructor;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* deepCopy;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* assignment;
tySequence_iGkpo9aKQdr3NWelKC4cnJA* methods;
NI64 size;
NI16 align;
NI16 lockLevel;
tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA loc;
tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* typeInst;
};
typedef NU32 tySet_tyEnum_TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg;
typedef NU8 tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw;
struct tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw {
tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* typ;
tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info;
tySet_tyEnum_TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg flags;
tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw kind;
union{
struct {NI64 intVal;
} S1;
struct {NF floatVal;
} S2;
struct {NimStringDesc* strVal;
} S3;
struct {tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* sym;
} S4;
struct {tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* ident;
} S5;
struct {tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ {
  RootObj Sup;
tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ* left;
tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ* right;
NI length;
NimStringDesc* data;
};
typedef NU8 tyEnum_TLibKind_9b8v60kso59bBaw9cp8B9a9apKQ;
struct tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA {
tyEnum_TLibKind_9b8v60kso59bBaw9cp8B9a9apKQ kind;
NIM_BOOL generated;
NIM_BOOL isOverriden;
tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ* name;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* path;
};
struct tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA {
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* sym;
tySequence_zuqP4Riz26Oi5fWgPYVEgA* concreteTypes;
NI compilesId;
};
struct tyTuple_a09bGTAl9ceOKTAytYdkbyKg {
NI Field0;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* Field1;
};
struct tySequence_zuqP4Riz26Oi5fWgPYVEgA {
  TGenericSeq Sup;
  tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* data[SEQ_DECL_SIZE];
};
struct tySequence_DXS6mEo7PVUFJkirsQ9bNQA {
  TGenericSeq Sup;
  tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA* data[SEQ_DECL_SIZE];
};
struct tySequence_sksVpmPRIkNR9axiwtD1Guw {
  TGenericSeq Sup;
  tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* data[SEQ_DECL_SIZE];
};
struct tySequence_iGkpo9aKQdr3NWelKC4cnJA {
  TGenericSeq Sup;
  tyTuple_a09bGTAl9ceOKTAytYdkbyKg data[SEQ_DECL_SIZE];
};
struct tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ {
  TGenericSeq Sup;
  tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* data[SEQ_DECL_SIZE];
};
N_NIMCALL(FILE*, open_hqzpWQbdA2B8l9a6wwNoP4g)(NimStringDesc* filename, tyEnum_FileMode_fVUBHvW79bXUw1j55Oo9avSQ mode, NI bufSize);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_NIMCALL(void, add_IbYQ9cTcoQ89aIwM2IEYGMng)(NimStringDesc** result, NI64 x);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(void, write_OG3BP9aaTiau0tBdonibGTg)(FILE* f, NimStringDesc** a, NI aLen_0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(void, writeRope_PkOcWnH9aQsX1yfnD0BW2Dg)(FILE* f, tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ* r);
static N_INLINE(void, writeLine_rBQVO3cm3BhnA9aEFD7PG6Qmsgs)(FILE* f, NimStringDesc** x, NI xLen_0);
N_NIMCALL(void, write_c4mGyJBvK73pdM22jiweKQ)(FILE* f, NimStringDesc* s);
N_NIMCALL(NimStringDesc*, toFullPath_7s19cb7WBgztz9aqEBzwwuqA)(NI32 fileIdx);
N_NIMCALL(void, close_BWnr8V7RERYno9bIdPmw8Hw_3)(FILE* f);
TNimType NTI_9cEuXfAnHp9bnWFK409cMtsEw_;
extern TNimType NTI_VaVACK0bpYmqIQ0mKcHfQQ_;
extern TNimType NTI_7BHnQsEj49a9c6QtudqWTo1w_;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
STRING_LITERAL(TM_QVKrxgdkvZgAHGFrhgVOcA_3, "\011", 1);
STRING_LITERAL(TM_QVKrxgdkvZgAHGFrhgVOcA_4, "\012", 1);

N_NIMCALL(void, open_2anm3CRiB23rDhf0nK6NqQ)(tyObject_NdiFile_9cEuXfAnHp9bnWFK409cMtsEw* f, NimStringDesc* filename) {
	(*f).enabled = (((NI) 0) < (filename ? filename->Sup.len : 0));
	{
		if (!(*f).enabled) goto LA3_;
		(*f).f = open_hqzpWQbdA2B8l9a6wwNoP4g(filename, ((tyEnum_FileMode_fVUBHvW79bXUw1j55Oo9avSQ) 1), ((NI) 8000));
		unsureAsgnRef((void**) (&(*f).buf), rawNewString(((NI) 20)));
	}
	LA3_: ;
}

static N_INLINE(void, copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, writeLine_rBQVO3cm3BhnA9aEFD7PG6Qmsgs)(FILE* f, NimStringDesc** x, NI xLen_0) {
	{
		NimStringDesc* i;
		NI i_2;
		i = (NimStringDesc*)0;
		i_2 = ((NI) 0);
		{
			while (1) {
				if (!(i_2 < xLen_0)) goto LA3;
				i = x[i_2];
				write_c4mGyJBvK73pdM22jiweKQ(f, i);
				i_2 += ((NI) 1);
			} LA3: ;
		}
	}
	write_c4mGyJBvK73pdM22jiweKQ(f, ((NimStringDesc*) &TM_QVKrxgdkvZgAHGFrhgVOcA_4));
}

N_NIMCALL(void, doWrite_usDiNMDhSohTaN2WVO09ccA)(tyObject_NdiFile_9cEuXfAnHp9bnWFK409cMtsEw* f, tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* s) {
	tyArray_Re75IspeoxXy2oCZHwcRrA T1_;
	tyArray_sMpvt1sOxOJ3LFGulnbeMQ T2_;
	(*f).buf = setLengthStr((*f).buf, ((NI) 0));
	add_IbYQ9cTcoQ89aIwM2IEYGMng((&(*f).buf), ((NI64) (((NI) ((*s).info.line)))));
	(*f).buf = resizeString((*f).buf, 1);
appendString((*f).buf, ((NimStringDesc*) &TM_QVKrxgdkvZgAHGFrhgVOcA_3));
	add_IbYQ9cTcoQ89aIwM2IEYGMng((&(*f).buf), ((NI64) (((NI) ((*s).info.col)))));
	memset((void*)T1_, 0, sizeof(T1_));
	T1_[0] = copyString((*(*s).name).s);
	T1_[1] = copyString(((NimStringDesc*) &TM_QVKrxgdkvZgAHGFrhgVOcA_3));
	write_OG3BP9aaTiau0tBdonibGTg((*f).f, T1_, 2);
	writeRope_PkOcWnH9aQsX1yfnD0BW2Dg((*f).f, (*s).loc.r);
	memset((void*)T2_, 0, sizeof(T2_));
	T2_[0] = copyString(((NimStringDesc*) &TM_QVKrxgdkvZgAHGFrhgVOcA_3));
	T2_[1] = toFullPath_7s19cb7WBgztz9aqEBzwwuqA((*s).info.fileIndex);
	T2_[2] = copyString(((NimStringDesc*) &TM_QVKrxgdkvZgAHGFrhgVOcA_3));
	T2_[3] = copyString((*f).buf);
	writeLine_rBQVO3cm3BhnA9aEFD7PG6Qmsgs((*f).f, T2_, 4);
}

N_NIMCALL(void, close_9b6I81M9agpKe5u9cmzSmOaGA)(tyObject_NdiFile_9cEuXfAnHp9bnWFK409cMtsEw* f) {
	{
		if (!(*f).enabled) goto LA3_;
		close_BWnr8V7RERYno9bIdPmw8Hw_3((*f).f);
	}
	LA3_: ;
}
NIM_EXTERNC N_NOINLINE(void, compiler_ndiInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_ndiDatInit000)(void) {
static TNimNode* TM_QVKrxgdkvZgAHGFrhgVOcA_2[3];
static TNimNode TM_QVKrxgdkvZgAHGFrhgVOcA_0[4];
NTI_9cEuXfAnHp9bnWFK409cMtsEw_.size = sizeof(tyObject_NdiFile_9cEuXfAnHp9bnWFK409cMtsEw);
NTI_9cEuXfAnHp9bnWFK409cMtsEw_.kind = 18;
NTI_9cEuXfAnHp9bnWFK409cMtsEw_.base = 0;
NTI_9cEuXfAnHp9bnWFK409cMtsEw_.flags = 2;
TM_QVKrxgdkvZgAHGFrhgVOcA_2[0] = &TM_QVKrxgdkvZgAHGFrhgVOcA_0[1];
TM_QVKrxgdkvZgAHGFrhgVOcA_0[1].kind = 1;
TM_QVKrxgdkvZgAHGFrhgVOcA_0[1].offset = offsetof(tyObject_NdiFile_9cEuXfAnHp9bnWFK409cMtsEw, enabled);
TM_QVKrxgdkvZgAHGFrhgVOcA_0[1].typ = (&NTI_VaVACK0bpYmqIQ0mKcHfQQ_);
TM_QVKrxgdkvZgAHGFrhgVOcA_0[1].name = "enabled";
TM_QVKrxgdkvZgAHGFrhgVOcA_2[1] = &TM_QVKrxgdkvZgAHGFrhgVOcA_0[2];
TM_QVKrxgdkvZgAHGFrhgVOcA_0[2].kind = 1;
TM_QVKrxgdkvZgAHGFrhgVOcA_0[2].offset = offsetof(tyObject_NdiFile_9cEuXfAnHp9bnWFK409cMtsEw, f);
TM_QVKrxgdkvZgAHGFrhgVOcA_0[2].typ = (&NTI_7BHnQsEj49a9c6QtudqWTo1w_);
TM_QVKrxgdkvZgAHGFrhgVOcA_0[2].name = "f";
TM_QVKrxgdkvZgAHGFrhgVOcA_2[2] = &TM_QVKrxgdkvZgAHGFrhgVOcA_0[3];
TM_QVKrxgdkvZgAHGFrhgVOcA_0[3].kind = 1;
TM_QVKrxgdkvZgAHGFrhgVOcA_0[3].offset = offsetof(tyObject_NdiFile_9cEuXfAnHp9bnWFK409cMtsEw, buf);
TM_QVKrxgdkvZgAHGFrhgVOcA_0[3].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_QVKrxgdkvZgAHGFrhgVOcA_0[3].name = "buf";
TM_QVKrxgdkvZgAHGFrhgVOcA_0[0].len = 3; TM_QVKrxgdkvZgAHGFrhgVOcA_0[0].kind = 2; TM_QVKrxgdkvZgAHGFrhgVOcA_0[0].sons = &TM_QVKrxgdkvZgAHGFrhgVOcA_2[0];
NTI_9cEuXfAnHp9bnWFK409cMtsEw_.node = &TM_QVKrxgdkvZgAHGFrhgVOcA_0[0];
}

