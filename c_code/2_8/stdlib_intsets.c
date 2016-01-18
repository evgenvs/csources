/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Intset212035 Intset212035;
typedef struct Trunk212031 Trunk212031;
typedef struct Trunkseq212033 Trunkseq212033;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell47504 Cell47504;
typedef struct Cellset47516 Cellset47516;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Cellseq47520 Cellseq47520;
typedef struct Pagedesc47512 Pagedesc47512;
typedef struct Memregion29687 Memregion29687;
typedef struct Smallchunk29639 Smallchunk29639;
typedef struct Llchunk29681 Llchunk29681;
typedef struct Bigchunk29641 Bigchunk29641;
typedef struct Intset29614 Intset29614;
typedef struct Trunk29610 Trunk29610;
typedef struct Avlnode29685 Avlnode29685;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Basechunk29637 Basechunk29637;
typedef struct Freecell29629 Freecell29629;
struct  Intset212035  {
NI counter;
NI max;
Trunk212031* head;
Trunkseq212033* data;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
typedef NI TY29618[16];
struct  Trunk212031  {
Trunk212031* next;
NI key;
TY29618 bits;
};
typedef N_NIMCALL_PTR(void, TY3489) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3494) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3489 marker;
TY3494 deepcopy;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Cell47504  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47520  {
NI len;
NI cap;
Cell47504** d;
};
struct  Cellset47516  {
NI counter;
NI max;
Pagedesc47512* head;
Pagedesc47512** data;
};
typedef Smallchunk29639* TY29702[512];
typedef Trunk29610* Trunkbuckets29612[256];
struct  Intset29614  {
Trunkbuckets29612 data;
};
struct  Memregion29687  {
NI minlargeobj;
NI maxlargeobj;
TY29702 freesmallchunks;
Llchunk29681* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29641* freechunkslist;
Intset29614 chunkstarts;
Avlnode29685* root;
Avlnode29685* deleted;
Avlnode29685* last;
Avlnode29685* freeavlnodes;
};
struct  Gcstat49814  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Gcheap49818  {
Gcstack49816* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47520 zct;
Cellseq47520 decstack;
Cellset47516 cycleroots;
Cellseq47520 tempstack;
NI recgclock;
Memregion29687 region;
Gcstat49814 stat;
};
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Pagedesc47512  {
Pagedesc47512* next;
NI key;
TY29618 bits;
};
struct  Basechunk29637  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29639  {
  Basechunk29637 Sup;
Smallchunk29639* next;
Smallchunk29639* prev;
Freecell29629* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29681  {
NI size;
NI acc;
Llchunk29681* next;
};
struct  Bigchunk29641  {
  Basechunk29637 Sup;
Bigchunk29641* next;
Bigchunk29641* prev;
NI align;
NF data;
};
struct  Trunk29610  {
Trunk29610* next;
NI key;
TY29618 bits;
};
typedef Avlnode29685* TY29692[2];
struct  Avlnode29685  {
TY29692 link;
NI key;
NI upperbound;
NI level;
};
struct  Freecell29629  {
Freecell29629* next;
NI zerofield;
};
struct Trunkseq212033 {
  TGenericSeq Sup;
  Trunk212031* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1124)(void* p, NI op);
N_NIMCALL(void, TMP1125)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(Trunk212031*, intsetput_212661)(Intset212035* t, NI key);
static N_INLINE(NI, nexttry_212201)(NI h, NI maxhash);
static N_INLINE(NIM_BOOL, mustrehash_212048)(NI length, NI counter);
N_NIMCALL(void, intsetenlarge_212602)(Intset212035* t);
N_NIMCALL(void, intsetrawinsert_212225)(Intset212035 t, Trunkseq212033** data, Trunk212031* desc);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_53819)(Cell47504* c);
static N_INLINE(NIM_BOOL, canbecycleroot_51458)(Cell47504* c);
static N_INLINE(void, rtladdcycleroot_52220)(Cell47504* c);
N_NOINLINE(void, incl_48247)(Cellset47516* s, Cell47504* cell);
static N_INLINE(Cell47504*, usrtocell_51440)(void* usr);
static N_INLINE(void, decref_53401)(Cell47504* c);
static N_INLINE(void, rtladdzct_53001)(Cell47504* c);
N_NOINLINE(void, addzct_51417)(Cellseq47520* s, Cell47504* c);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(Trunk212031*, intsetget_212206)(Intset212035 t, NI key);
N_NIMCALL(void, incl_212832)(Intset212035* s, NI key);
TNimType NTI212031; /* Trunk */
extern TNimType NTI104; /* int */
extern TNimType NTI29618; /* array[0..15, int] */
TNimType NTI212029; /* PTrunk */
TNimType NTI212033; /* TrunkSeq */
extern Gcheap49818 gch_49859;
TNimType NTI212035; /* IntSet */
N_NIMCALL(void, TMP1124)(void* p, NI op) {
	Trunk212031* a;
	NI LOC1;
	a = (Trunk212031*)p;
	nimGCvisit((void*)(*a).next, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 16; LOC1++) {
	}
}
N_NIMCALL(void, TMP1125)(void* p, NI op) {
	Trunkseq212033* a;
	NI LOC1;
	a = (Trunkseq212033*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

N_NIMCALL(void, initintset_212885)(Intset212035* Result) {
	unsureAsgnRef((void**) (&(*Result).data), (Trunkseq212033*) newSeq((&NTI212033), ((NI) 8)));
	(*Result).max = ((NI) 7);
	(*Result).counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*Result).head), NIM_NIL);
}

static N_INLINE(NI, nexttry_212201)(NI h, NI maxhash) {
	NI result;
	result = 0;
	result = (NI)((NI)((NI)(((NI) 5) * h) + ((NI) 1)) & maxhash);
	return result;
}

static N_INLINE(NIM_BOOL, mustrehash_212048)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = ((NI)(length * ((NI) 2)) < (NI)(counter * ((NI) 3)));
	if (LOC1) goto LA2;
	LOC1 = ((NI)(length - counter) < ((NI) 4));
	LA2: ;
	result = LOC1;
	return result;
}

static N_INLINE(NIM_BOOL, canbecycleroot_51458)(Cell47504* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).typ).flags &(1U<<((NU)(((NU8) 1))&7U)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_52220)(Cell47504* c) {
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		incl_48247((&gch_49859.cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_53819)(Cell47504* c) {
	(*c).refcount = (NI)((NU32)((*c).refcount) + (NU32)(((NI) 8)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_51458(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_52220(c);
	}
	LA4: ;
}

static N_INLINE(Cell47504*, usrtocell_51440)(void* usr) {
	Cell47504* result;
	result = 0;
	result = ((Cell47504*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Cell47504))))));
	return result;
}

static N_INLINE(void, rtladdzct_53001)(Cell47504* c) {
	addzct_51417((&gch_49859.zct), c);
}

static N_INLINE(void, decref_53401)(Cell47504* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_53001(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_51458(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_52220(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		Cell47504* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_51440(src);
		incref_53819(LOC5);
	}
	LA3: ;
	{
		Cell47504* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_51440((*dest));
		decref_53401(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(void, intsetrawinsert_212225)(Intset212035 t, Trunkseq212033** data, Trunk212031* desc) {
	NI h;
	h = (NI)((*desc).key & t.max);
	{
		while (1) {
			if (!!(((*data)->data[h] == NIM_NIL))) goto LA2;
			h = nexttry_212201(h, t.max);
		} LA2: ;
	}
	asgnRef((void**) (&(*data)->data[h]), desc);
}

N_NIMCALL(void, intsetenlarge_212602)(Intset212035* t) {
	Trunkseq212033* n;
	NI oldmax;
	Trunkseq212033* LOC8;
	n = 0;
	oldmax = (*t).max;
	(*t).max = (NI)((NI)((NI)((*t).max + ((NI) 1)) * ((NI) 2)) - ((NI) 1));
	n = (Trunkseq212033*) newSeq((&NTI212033), ((NI) ((NI)((*t).max + ((NI) 1)))));
	{
		NI i_212629;
		NI res_212657;
		i_212629 = 0;
		res_212657 = ((NI) 0);
		{
			while (1) {
				if (!(res_212657 <= oldmax)) goto LA3;
				i_212629 = res_212657;
				{
					if (!!(((*t).data->data[i_212629] == NIM_NIL))) goto LA6;
					intsetrawinsert_212225((*t), (&n), (*t).data->data[i_212629]);
				}
				LA6: ;
				res_212657 += ((NI) 1);
			} LA3: ;
		}
	}
	LOC8 = 0;
	LOC8 = (*t).data;
	unsureAsgnRef((void**) (&(*t).data), n);
	n = LOC8;
}

N_NIMCALL(Trunk212031*, intsetput_212661)(Intset212035* t, NI key) {
	Trunk212031* result;
	NI h;
{	result = 0;
	h = (NI)(key & (*t).max);
	{
		while (1) {
			if (!!(((*t).data->data[h] == NIM_NIL))) goto LA2;
			{
				if (!((*(*t).data->data[h]).key == key)) goto LA5;
				result = (*t).data->data[h];
				goto BeforeRet;
			}
			LA5: ;
			h = nexttry_212201(h, (*t).max);
		} LA2: ;
	}
	{
		NIM_BOOL LOC9;
		LOC9 = 0;
		LOC9 = mustrehash_212048((NI)((*t).max + ((NI) 1)), (*t).counter);
		if (!LOC9) goto LA10;
		intsetenlarge_212602(t);
	}
	LA10: ;
	(*t).counter += ((NI) 1);
	h = (NI)(key & (*t).max);
	{
		while (1) {
			if (!!(((*t).data->data[h] == NIM_NIL))) goto LA13;
			h = nexttry_212201(h, (*t).max);
		} LA13: ;
	}
	result = (Trunk212031*) newObj((&NTI212029), sizeof(Trunk212031));
	asgnRef((void**) (&(*result).next), (*t).head);
	(*result).key = key;
	unsureAsgnRef((void**) (&(*t).head), result);
	asgnRef((void**) (&(*t).data->data[h]), result);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, incl_212832)(Intset212035* s, NI key) {
	Trunk212031* t;
	NI u;
	t = intsetput_212661(s, (NI)((NU32)(key) >> (NU32)(((NI) 9))));
	u = (NI)(key & ((NI) 511));
	(*t).bits[((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5))))- 0] = (NI)((*t).bits[((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5))))- 0] | (NI)((NU32)(((NI) 1)) << (NU32)(((NI) ((NI)(((NI) (u)) & ((NI) 31)))))));
}

N_NIMCALL(Trunk212031*, intsetget_212206)(Intset212035 t, NI key) {
	Trunk212031* result;
	NI h;
{	result = 0;
	h = (NI)(key & t.max);
	{
		while (1) {
			if (!!((t.data->data[h] == NIM_NIL))) goto LA2;
			{
				if (!((*t.data->data[h]).key == key)) goto LA5;
				result = t.data->data[h];
				goto BeforeRet;
			}
			LA5: ;
			h = nexttry_212201(h, t.max);
		} LA2: ;
	}
	result = NIM_NIL;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, containsorincl_212862)(Intset212035* s, NI key) {
	NIM_BOOL result;
	Trunk212031* t;
	result = 0;
	t = intsetget_212206((*s), (NI)((NU32)(key) >> (NU32)(((NI) 9))));
	{
		NI u;
		if (!!((t == NIM_NIL))) goto LA3;
		u = (NI)(key & ((NI) 511));
		result = !(((NI)((*t).bits[((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5))))- 0] & (NI)((NU32)(((NI) 1)) << (NU32)(((NI) ((NI)(((NI) (u)) & ((NI) 31))))))) == ((NI) 0)));
		{
			if (!!(result)) goto LA7;
			(*t).bits[((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5))))- 0] = (NI)((*t).bits[((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5))))- 0] | (NI)((NU32)(((NI) 1)) << (NU32)(((NI) ((NI)(((NI) (u)) & ((NI) 31)))))));
		}
		LA7: ;
	}
	goto LA1;
	LA3: ;
	{
		incl_212832(s, key);
		result = NIM_FALSE;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, contains_212811)(Intset212035 s, NI key) {
	NIM_BOOL result;
	Trunk212031* t;
	result = 0;
	t = intsetget_212206(s, (NI)((NU32)(key) >> (NU32)(((NI) 9))));
	{
		NI u;
		if (!!((t == NIM_NIL))) goto LA3;
		u = (NI)(key & ((NI) 511));
		result = !(((NI)((*t).bits[((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5))))- 0] & (NI)((NU32)(((NI) 1)) << (NU32)(((NI) ((NI)(((NI) (u)) & ((NI) 31))))))) == ((NI) 0)));
	}
	goto LA1;
	LA3: ;
	{
		result = NIM_FALSE;
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, assign_212910)(Intset212035* dest, Intset212035 src) {
	Trunk212031* it;
	(*dest).counter = src.counter;
	(*dest).max = src.max;
	unsureAsgnRef((void**) (&(*dest).data), (Trunkseq212033*) newSeq((&NTI212033), ((NI) ((src.data ? src.data->Sup.len : 0)))));
	it = src.head;
	{
		while (1) {
			NI h;
			Trunk212031* n;
			if (!!((it == NIM_NIL))) goto LA2;
			h = (NI)((*it).key & (*dest).max);
			{
				while (1) {
					if (!!(((*dest).data->data[h] == NIM_NIL))) goto LA4;
					h = nexttry_212201(h, (*dest).max);
				} LA4: ;
			}
			n = 0;
			n = (Trunk212031*) newObj((&NTI212029), sizeof(Trunk212031));
			asgnRef((void**) (&(*n).next), (*dest).head);
			(*n).key = (*it).key;
			memcpy((void*)(*n).bits, (NIM_CONST void*)(*it).bits, sizeof(TY29618));
			unsureAsgnRef((void**) (&(*dest).head), n);
			asgnRef((void**) (&(*dest).data->data[h]), n);
			it = (*it).next;
		} LA2: ;
	}
}

N_NIMCALL(void, excl_212841)(Intset212035* s, NI key) {
	Trunk212031* t;
	t = intsetget_212206((*s), (NI)((NU32)(key) >> (NU32)(((NI) 9))));
	{
		NI u;
		if (!!((t == NIM_NIL))) goto LA3;
		u = (NI)(key & ((NI) 511));
		(*t).bits[((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5))))- 0] = (NI)((*t).bits[((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5))))- 0] & (NI)((NU32) ~((NI)((NU32)(((NI) 1)) << (NU32)(((NI) ((NI)(((NI) (u)) & ((NI) 31)))))))));
	}
	LA3: ;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsDatInit000)(void) {
static TNimNode* TMP1123[3];
static TNimNode* TMP1167[4];
static TNimNode TMP807[9];
NTI212031.size = sizeof(Trunk212031);
NTI212031.kind = 18;
NTI212031.base = 0;
TMP1123[0] = &TMP807[1];
TMP807[1].kind = 1;
TMP807[1].offset = offsetof(Trunk212031, next);
TMP807[1].typ = (&NTI212029);
TMP807[1].name = "next";
TMP1123[1] = &TMP807[2];
TMP807[2].kind = 1;
TMP807[2].offset = offsetof(Trunk212031, key);
TMP807[2].typ = (&NTI104);
TMP807[2].name = "key";
TMP1123[2] = &TMP807[3];
TMP807[3].kind = 1;
TMP807[3].offset = offsetof(Trunk212031, bits);
TMP807[3].typ = (&NTI29618);
TMP807[3].name = "bits";
TMP807[0].len = 3; TMP807[0].kind = 2; TMP807[0].sons = &TMP1123[0];
NTI212031.node = &TMP807[0];
NTI212029.size = sizeof(Trunk212031*);
NTI212029.kind = 22;
NTI212029.base = (&NTI212031);
NTI212029.marker = TMP1124;
NTI212033.size = sizeof(Trunkseq212033*);
NTI212033.kind = 24;
NTI212033.base = (&NTI212029);
NTI212033.flags = 2;
NTI212033.marker = TMP1125;
NTI212035.size = sizeof(Intset212035);
NTI212035.kind = 18;
NTI212035.base = 0;
NTI212035.flags = 2;
TMP1167[0] = &TMP807[5];
TMP807[5].kind = 1;
TMP807[5].offset = offsetof(Intset212035, counter);
TMP807[5].typ = (&NTI104);
TMP807[5].name = "counter";
TMP1167[1] = &TMP807[6];
TMP807[6].kind = 1;
TMP807[6].offset = offsetof(Intset212035, max);
TMP807[6].typ = (&NTI104);
TMP807[6].name = "max";
TMP1167[2] = &TMP807[7];
TMP807[7].kind = 1;
TMP807[7].offset = offsetof(Intset212035, head);
TMP807[7].typ = (&NTI212029);
TMP807[7].name = "head";
TMP1167[3] = &TMP807[8];
TMP807[8].kind = 1;
TMP807[8].offset = offsetof(Intset212035, data);
TMP807[8].typ = (&NTI212033);
TMP807[8].name = "data";
TMP807[4].len = 4; TMP807[4].kind = 2; TMP807[4].sons = &TMP1167[0];
NTI212035.node = &TMP807[4];
}
