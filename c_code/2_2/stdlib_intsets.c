/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct intset222056 intset222056;
typedef struct ttrunk222052 ttrunk222052;
typedef struct ttrunkseq222054 ttrunkseq222054;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell44735 tcell44735;
typedef struct tcellset44747 tcellset44747;
typedef struct tgcheap46816 tgcheap46816;
typedef struct tcellseq44751 tcellseq44751;
typedef struct tpagedesc44743 tpagedesc44743;
typedef struct tmemregion27010 tmemregion27010;
typedef struct tsmallchunk26240 tsmallchunk26240;
typedef struct tllchunk27004 tllchunk27004;
typedef struct tbigchunk26242 tbigchunk26242;
typedef struct tintset26217 tintset26217;
typedef struct ttrunk26213 ttrunk26213;
typedef struct tavlnode27008 tavlnode27008;
typedef struct tgcstat46814 tgcstat46814;
typedef struct tbasechunk26238 tbasechunk26238;
typedef struct tfreecell26230 tfreecell26230;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  intset222056  {
NI Counter;
NI Max;
ttrunk222052* Head;
ttrunkseq222054* Data;
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
typedef NI TY26220[8];
struct  ttrunk222052  {
ttrunk222052* Next;
NI Key;
TY26220 Bits;
};
struct  tcell44735  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq44751  {
NI Len;
NI Cap;
tcell44735** D;
};
struct  tcellset44747  {
NI Counter;
NI Max;
tpagedesc44743* Head;
tpagedesc44743** Data;
};
typedef tsmallchunk26240* TY27022[512];
typedef ttrunk26213* ttrunkbuckets26215[256];
struct  tintset26217  {
ttrunkbuckets26215 Data;
};
struct  tmemregion27010  {
NI Minlargeobj;
NI Maxlargeobj;
TY27022 Freesmallchunks;
tllchunk27004* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26242* Freechunkslist;
tintset26217 Chunkstarts;
tavlnode27008* Root;
tavlnode27008* Deleted;
tavlnode27008* Last;
tavlnode27008* Freeavlnodes;
};
struct  tgcstat46814  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap46816  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq44751 Zct;
tcellseq44751 Decstack;
tcellset44747 Cycleroots;
tcellseq44751 Tempstack;
NI Recgclock;
tmemregion27010 Region;
tgcstat46814 Stat;
};
struct  tpagedesc44743  {
tpagedesc44743* Next;
NI Key;
TY26220 Bits;
};
struct  tbasechunk26238  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26240  {
  tbasechunk26238 Sup;
tsmallchunk26240* Next;
tsmallchunk26240* Prev;
tfreecell26230* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27004  {
NI Size;
NI Acc;
tllchunk27004* Next;
};
struct  tbigchunk26242  {
  tbasechunk26238 Sup;
tbigchunk26242* Next;
tbigchunk26242* Prev;
NI Align;
NF Data;
};
struct  ttrunk26213  {
ttrunk26213* Next;
NI Key;
TY26220 Bits;
};
typedef tavlnode27008* TY27014[2];
struct  tavlnode27008  {
TY27014 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell26230  {
tfreecell26230* Next;
NI Zerofield;
};
struct ttrunkseq222054 {
  TGenericSeq Sup;
  ttrunk222052* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP964)(void* p, NI op);
N_NIMCALL(void, TMP965)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(ttrunk222052*, intsetget_222220)(intset222056* t, NI key);
static N_INLINE(NI, nexttry_222209)(NI h, NI maxhash);
N_NIMCALL(void, incl_222869)(intset222056* s, NI key);
N_NIMCALL(ttrunk222052*, intsetput_222703)(intset222056* t, NI key);
static N_INLINE(NIM_BOOL, mustrehash_222073)(NI length, NI counter);
N_NIMCALL(void, intsetenlarge_222614)(intset222056* t);
N_NIMCALL(void, intsetrawinsert_222256)(intset222056* t, ttrunkseq222054** data, ttrunk222052* desc);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_50825)(tcell44735* c);
static N_INLINE(NIM_BOOL, canbecycleroot_48467)(tcell44735* c);
static N_INLINE(void, rtladdcycleroot_49229)(tcell44735* c);
N_NOINLINE(void, incl_45471)(tcellset44747* s, tcell44735* cell);
static N_INLINE(tcell44735*, usrtocell_48446)(void* usr);
static N_INLINE(void, decref_50404)(tcell44735* c);
static N_INLINE(void, rtladdzct_50004)(tcell44735* c);
N_NOINLINE(void, addzct_48417)(tcellseq44751* s, tcell44735* c);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
TNimType NTI222056; /* IntSet */
extern TNimType NTI108; /* int */
TNimType NTI222052; /* TTrunk */
extern TNimType NTI26220; /* array[0..7, int] */
TNimType NTI222050; /* PTrunk */
TNimType NTI222054; /* TTrunkSeq */
extern tgcheap46816 gch_46844;
N_NIMCALL(void, TMP964)(void* p, NI op) {
	ttrunk222052* a;
	NI LOC1;
	a = (ttrunk222052*)p;
	nimGCvisit((void*)(*a).Next, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 8; LOC1++) {
	}
}
N_NIMCALL(void, TMP965)(void* p, NI op) {
	ttrunkseq222054* a;
	NI LOC1;
	a = (ttrunkseq222054*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

N_NIMCALL(void, initintset_222950)(intset222056* Result) {
	unsureAsgnRef((void**) &(*Result).Data, (ttrunkseq222054*) newSeq((&NTI222054), 8));
	(*Result).Max = 7;
	(*Result).Counter = 0;
	unsureAsgnRef((void**) &(*Result).Head, NIM_NIL);
}

static N_INLINE(NI, nexttry_222209)(NI h, NI maxhash) {
	NI result;
	result = 0;
	result = (NI)((NI64)((NI64)(5 * h) + 1) & maxhash);
	return result;
}

N_NIMCALL(ttrunk222052*, intsetget_222220)(intset222056* t, NI key) {
	ttrunk222052* result;
	NI h;
	result = 0;
	h = (NI)(key & (*t).Max);
	{
		while (1) {
			if (!!(((*t).Data->data[h] == NIM_NIL))) goto LA2;
			{
				if (!((*(*t).Data->data[h]).Key == key)) goto LA5;
				result = (*t).Data->data[h];
				goto BeforeRet;
			}
			LA5: ;
			h = nexttry_222209(h, (*t).Max);
		} LA2: ;
	}
	result = NIM_NIL;
	BeforeRet: ;
	return result;
}

static N_INLINE(NIM_BOOL, mustrehash_222073)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = ((NI64)(length * 2) < (NI64)(counter * 3));
	if (LOC1) goto LA2;
	LOC1 = ((NI64)(length - counter) < 4);
	LA2: ;
	result = LOC1;
	return result;
}

static N_INLINE(NIM_BOOL, canbecycleroot_48467)(tcell44735* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_49229)(tcell44735* c) {
	{
		if (!!((((NI) ((NI)((*c).Refcount & 3))) == 3))) goto LA3;
		(*c).Refcount = (NI)((NI)((*c).Refcount & -4) | 3);
		incl_45471(&gch_46844.Cycleroots, c);
	}
	LA3: ;
}

static N_INLINE(void, incref_50825)(tcell44735* c) {
	(*c).Refcount = (NI)((NU64)((*c).Refcount) + (NU64)(8));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_48467(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_49229(c);
	}
	LA4: ;
}

static N_INLINE(tcell44735*, usrtocell_48446)(void* usr) {
	tcell44735* result;
	result = 0;
	result = ((tcell44735*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell44735))))));
	return result;
}

static N_INLINE(void, rtladdzct_50004)(tcell44735* c) {
	addzct_48417(&gch_46844.Zct, c);
}

static N_INLINE(void, decref_50404)(tcell44735* c) {
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_50004(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_48467(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_49229(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tcell44735* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_48446(src);
		incref_50825(LOC5);
	}
	LA3: ;
	{
		tcell44735* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_48446((*dest));
		decref_50404(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(void, intsetrawinsert_222256)(intset222056* t, ttrunkseq222054** data, ttrunk222052* desc) {
	NI h;
	h = (NI)((*desc).Key & (*t).Max);
	{
		while (1) {
			if (!!(((*data)->data[h] == NIM_NIL))) goto LA2;
			h = nexttry_222209(h, (*t).Max);
		} LA2: ;
	}
	asgnRef((void**) &(*data)->data[h], desc);
}

N_NIMCALL(void, intsetenlarge_222614)(intset222056* t) {
	ttrunkseq222054* n;
	NI oldmax;
	ttrunkseq222054* LOC8;
	n = 0;
	oldmax = (*t).Max;
	(*t).Max = (NI64)((NI64)((NI64)((*t).Max + 1) * 2) - 1);
	n = (ttrunkseq222054*) newSeq((&NTI222054), (NI64)((*t).Max + 1));
	{
		NI i_222648;
		NI res_222686;
		i_222648 = 0;
		res_222686 = 0;
		{
			while (1) {
				if (!(res_222686 <= oldmax)) goto LA3;
				i_222648 = res_222686;
				{
					if (!!(((*t).Data->data[i_222648] == NIM_NIL))) goto LA6;
					intsetrawinsert_222256(&(*t), &n, (*t).Data->data[i_222648]);
				}
				LA6: ;
				res_222686 += 1;
			} LA3: ;
		}
	}
	LOC8 = 0;
	LOC8 = (*t).Data;
	unsureAsgnRef((void**) &(*t).Data, n);
	n = LOC8;
}

N_NIMCALL(ttrunk222052*, intsetput_222703)(intset222056* t, NI key) {
	ttrunk222052* result;
	NI h;
	result = 0;
	h = (NI)(key & (*t).Max);
	{
		while (1) {
			if (!!(((*t).Data->data[h] == NIM_NIL))) goto LA2;
			{
				if (!((*(*t).Data->data[h]).Key == key)) goto LA5;
				result = (*t).Data->data[h];
				goto BeforeRet;
			}
			LA5: ;
			h = nexttry_222209(h, (*t).Max);
		} LA2: ;
	}
	{
		NIM_BOOL LOC9;
		LOC9 = 0;
		LOC9 = mustrehash_222073((NI64)((*t).Max + 1), (*t).Counter);
		if (!LOC9) goto LA10;
		intsetenlarge_222614(t);
	}
	LA10: ;
	(*t).Counter += 1;
	h = (NI)(key & (*t).Max);
	{
		while (1) {
			if (!!(((*t).Data->data[h] == NIM_NIL))) goto LA13;
			h = nexttry_222209(h, (*t).Max);
		} LA13: ;
	}
	result = (ttrunk222052*) newObj((&NTI222050), sizeof(ttrunk222052));
	asgnRef((void**) &(*result).Next, (*t).Head);
	(*result).Key = key;
	unsureAsgnRef((void**) &(*t).Head, result);
	asgnRef((void**) &(*t).Data->data[h], result);
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, incl_222869)(intset222056* s, NI key) {
	ttrunk222052* t;
	NI u;
	t = intsetput_222703(s, (NI)((NU64)(key) >> (NU64)(9)));
	u = (NI)(key & 511);
	(*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(6)))- 0] = (NI)((*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(6)))- 0] | (NI)((NU64)(1) << (NU64)(((NI) ((NI)(((NI) (u)) & 63))))));
}

N_NIMCALL(NIM_BOOL, containsorincl_222916)(intset222056* s, NI key) {
	NIM_BOOL result;
	ttrunk222052* t;
	result = 0;
	t = intsetget_222220(&(*s), (NI)((NU64)(key) >> (NU64)(9)));
	{
		NI u;
		if (!!((t == NIM_NIL))) goto LA3;
		u = (NI)(key & 511);
		result = !(((NI)((*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(6)))- 0] & (NI)((NU64)(1) << (NU64)(((NI) ((NI)(((NI) (u)) & 63)))))) == 0));
		{
			if (!!(result)) goto LA7;
			(*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(6)))- 0] = (NI)((*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(6)))- 0] | (NI)((NU64)(1) << (NU64)(((NI) ((NI)(((NI) (u)) & 63))))));
		}
		LA7: ;
	}
	goto LA1;
	LA3: ;
	{
		incl_222869(s, key);
		result = NIM_FALSE;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, contains_222837)(intset222056* s, NI key) {
	NIM_BOOL result;
	ttrunk222052* t;
	result = 0;
	t = intsetget_222220(s, (NI)((NU64)(key) >> (NU64)(9)));
	{
		NI u;
		if (!!((t == NIM_NIL))) goto LA3;
		u = (NI)(key & 511);
		result = !(((NI)((*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(6)))- 0] & (NI)((NU64)(1) << (NU64)(((NI) ((NI)(((NI) (u)) & 63)))))) == 0));
	}
	goto LA1;
	LA3: ;
	{
		result = NIM_FALSE;
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, excl_222884)(intset222056* s, NI key) {
	ttrunk222052* t;
	t = intsetget_222220(&(*s), (NI)((NU64)(key) >> (NU64)(9)));
	{
		NI u;
		if (!!((t == NIM_NIL))) goto LA3;
		u = (NI)(key & 511);
		(*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(6)))- 0] = (NI)((*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(6)))- 0] & (NI)((NU64) ~((NI)((NU64)(1) << (NU64)(((NI) ((NI)(((NI) (u)) & 63))))))));
	}
	LA3: ;
}

N_NIMCALL(void, assign_222975)(intset222056* dest, intset222056* src) {
	ttrunk222052* it;
	(*dest).Counter = (*src).Counter;
	(*dest).Max = (*src).Max;
	unsureAsgnRef((void**) &(*dest).Data, (ttrunkseq222054*) newSeq((&NTI222054), (*src).Data->Sup.len));
	it = (*src).Head;
	{
		while (1) {
			NI h;
			ttrunk222052* n;
			if (!!((it == NIM_NIL))) goto LA2;
			h = (NI)((*it).Key & (*dest).Max);
			{
				while (1) {
					if (!!(((*dest).Data->data[h] == NIM_NIL))) goto LA4;
					h = nexttry_222209(h, (*dest).Max);
				} LA4: ;
			}
			n = 0;
			n = (ttrunk222052*) newObj((&NTI222050), sizeof(ttrunk222052));
			asgnRef((void**) &(*n).Next, (*dest).Head);
			(*n).Key = (*it).Key;
			memcpy((void*)(*n).Bits, (NIM_CONST void*)(*it).Bits, sizeof((*n).Bits));
			unsureAsgnRef((void**) &(*dest).Head, n);
			asgnRef((void**) &(*dest).Data->data[h], n);
			it = (*it).Next;
		} LA2: ;
	}
}
NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsDatInit)(void) {
static TNimNode* TMP962[4];
static TNimNode* TMP963[3];
static TNimNode TMP721[9];
NTI222056.size = sizeof(intset222056);
NTI222056.kind = 18;
NTI222056.base = 0;
NTI222056.flags = 2;
TMP962[0] = &TMP721[1];
TMP721[1].kind = 1;
TMP721[1].offset = offsetof(intset222056, Counter);
TMP721[1].typ = (&NTI108);
TMP721[1].name = "counter";
TMP962[1] = &TMP721[2];
TMP721[2].kind = 1;
TMP721[2].offset = offsetof(intset222056, Max);
TMP721[2].typ = (&NTI108);
TMP721[2].name = "max";
TMP962[2] = &TMP721[3];
NTI222052.size = sizeof(ttrunk222052);
NTI222052.kind = 18;
NTI222052.base = 0;
TMP963[0] = &TMP721[5];
TMP721[5].kind = 1;
TMP721[5].offset = offsetof(ttrunk222052, Next);
TMP721[5].typ = (&NTI222050);
TMP721[5].name = "next";
TMP963[1] = &TMP721[6];
TMP721[6].kind = 1;
TMP721[6].offset = offsetof(ttrunk222052, Key);
TMP721[6].typ = (&NTI108);
TMP721[6].name = "key";
TMP963[2] = &TMP721[7];
TMP721[7].kind = 1;
TMP721[7].offset = offsetof(ttrunk222052, Bits);
TMP721[7].typ = (&NTI26220);
TMP721[7].name = "bits";
TMP721[4].len = 3; TMP721[4].kind = 2; TMP721[4].sons = &TMP963[0];
NTI222052.node = &TMP721[4];
NTI222050.size = sizeof(ttrunk222052*);
NTI222050.kind = 22;
NTI222050.base = (&NTI222052);
NTI222050.marker = TMP964;
TMP721[3].kind = 1;
TMP721[3].offset = offsetof(intset222056, Head);
TMP721[3].typ = (&NTI222050);
TMP721[3].name = "head";
TMP962[3] = &TMP721[8];
NTI222054.size = sizeof(ttrunkseq222054*);
NTI222054.kind = 24;
NTI222054.base = (&NTI222050);
NTI222054.flags = 2;
NTI222054.marker = TMP965;
TMP721[8].kind = 1;
TMP721[8].offset = offsetof(intset222056, Data);
TMP721[8].typ = (&NTI222054);
TMP721[8].name = "data";
TMP721[0].len = 4; TMP721[0].kind = 2; TMP721[0].sons = &TMP962[0];
NTI222056.node = &TMP721[0];
}
