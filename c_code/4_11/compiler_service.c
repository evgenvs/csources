/* Generated by Nim Compiler v0.17.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#undef linux
#undef near
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell_1zcF9cV8XIAtbN8h5HRUB8g Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct CellSeq_Axo1XVm9aaQueTOldv8le5w CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct GcHeap_1TRH1TZMaVZTnLNcIHuNFQ GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct GcStack_7fytPA5bBsob6See21YMRA GcStack_7fytPA5bBsob6See21YMRA;
typedef struct MemRegion_x81NhDv59b8ercDZ9bi85jyg MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct SmallChunk_tXn60W2f8h3jgAYdEmy5NQ SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct LLChunk_XsENErzHIZV9bhvyJx56wGw LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct BigChunk_Rv9c70Uhp2TytkX7eH78qEg BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct IntSet_EZObFrE3NC9bIb3YMkY9crZA IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct Trunk_W0r8S0Y3UGke6T9bIUWnnuw Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct AvlNode_IaqjtwKhxLEpvDS9bct9blEw AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct TY_ujsjpB2O9cjj3uDHsXbnSzg TY_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct GcStat_0RwLoVBHZPfUAcLczmfQAg GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct CellSet_jG87P0AI9aZtss9ccTYBIISQ CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct PageDesc_fublkgIY4LG3mT51LU2WHg PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct OptParser_fe5bDDfRbVwQIuUOouExnA OptParser_fe5bDDfRbVwQIuUOouExnA;
typedef struct TNimObject TNimObject;
typedef struct BaseChunk_Sdq7WpT6qAH858F5ZEdG3w BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct FreeCell_u6M5LHprqzkn9axr04yg9bGQ FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ_Set;
typedef N_NIMCALL_PTR(void, TY_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct  TNimType  {
NI size;
TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ_Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY_ojoeKfW4VYIm36I9cpDTQIg marker;
TY_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct  TNimNode  {
TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, TY_T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
struct  Cell_1zcF9cV8XIAtbN8h5HRUB8g  {
NI refcount;
TNimType* typ;
};
struct  GcStack_7fytPA5bBsob6See21YMRA  {
void* bottom;
};
struct  CellSeq_Axo1XVm9aaQueTOldv8le5w  {
NI len;
NI cap;
Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* TY_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef Trunk_W0r8S0Y3UGke6T9bIUWnnuw* TY_lh2A89ahMmYg9bCmpVaplLbA[256];
struct  IntSet_EZObFrE3NC9bIb3YMkY9crZA  {
TY_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef AvlNode_IaqjtwKhxLEpvDS9bct9blEw* TY_0aOLqZchNi8nWtMTi8ND8w[2];
struct  AvlNode_IaqjtwKhxLEpvDS9bct9blEw  {
TY_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct TY_ujsjpB2O9cjj3uDHsXbnSzg {
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef TY_ujsjpB2O9cjj3uDHsXbnSzg TY_LzOv2eCDGiceMKQstCLmhw[30];
struct  HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg  {
NI len;
TY_LzOv2eCDGiceMKQstCLmhw chunks;
HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct  MemRegion_x81NhDv59b8ercDZ9bi85jyg  {
NI minLargeObj;
NI maxLargeObj;
TY_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI lastSize;
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* freeChunksList;
IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct  GcStat_0RwLoVBHZPfUAcLczmfQAg  {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct  CellSet_jG87P0AI9aZtss9ccTYBIISQ  {
NI counter;
NI max;
PageDesc_fublkgIY4LG3mT51LU2WHg* head;
PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct  GcHeap_1TRH1TZMaVZTnLNcIHuNFQ  {
GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
};
typedef NU8 TCmdLinePass_IiBn9cB6WYIMDHOT44O82wA;
struct  TNimObject  {
TNimType* m_type;
};
typedef NU8 CmdLineKind_XkdXq9atxjiuhkFFh0XYrSA;
struct  OptParser_fe5bDDfRbVwQIuUOouExnA  {
  TNimObject Sup;
NimStringDesc* cmd;
NI pos;
NIM_BOOL inShortState;
CmdLineKind_XkdXq9atxjiuhkFFh0XYrSA kind;
NimStringDesc* key;
NimStringDesc* val;
};
typedef NU32 TGlobalOption_RAfAEZqjnKMDumgyKKc1qw_Set;
typedef NU8 TGlobalOption_RAfAEZqjnKMDumgyKKc1qw;
typedef NU16 TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw;
typedef NimStringDesc* TY_8ZvwQIddfpj2THRVPsFzIQ[1];
struct  BaseChunk_Sdq7WpT6qAH858F5ZEdG3w  {
NI prevSize;
NI size;
};
struct  SmallChunk_tXn60W2f8h3jgAYdEmy5NQ  {
  BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* next;
SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
FreeCell_u6M5LHprqzkn9axr04yg9bGQ* freeList;
NI free;
NI acc;
NF data;
};
struct  LLChunk_XsENErzHIZV9bhvyJx56wGw  {
NI size;
NI acc;
LLChunk_XsENErzHIZV9bhvyJx56wGw* next;
};
struct  BigChunk_Rv9c70Uhp2TytkX7eH78qEg  {
  BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* next;
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NF data;
};
typedef NI TY_9a8QARi5WsUggNU9bom7kzTQ[8];
struct  Trunk_W0r8S0Y3UGke6T9bIUWnnuw  {
Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
TY_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct  PageDesc_fublkgIY4LG3mT51LU2WHg  {
PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
TY_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct  FreeCell_u6M5LHprqzkn9axr04yg9bGQ  {
FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, TM_AxyNANBXigTKyIcRAbufXw_2)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(TY_T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(CellSeq_Axo1XVm9aaQueTOldv8le5w* s, Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_NIMCALL(void, TM_AxyNANBXigTKyIcRAbufXw_4)(void);
N_NIMCALL(void, initOptParser_xt25Cv9cQqaNt3Mscl7nHFA)(NimStringDesc* cmdline, OptParser_fe5bDDfRbVwQIuUOouExnA* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(void, nponext)(OptParser_fe5bDDfRbVwQIuUOouExnA* p);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, equalMem_fmeFeLBvgmAHG9bC8ETS9bYQropes)(void* a, void* b, NI size);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NIM_BOOL, processArgument_33tMDAeUR8ND9c6ZfADVB4w)(TCmdLinePass_IiBn9cB6WYIMDHOT44O82wA pass, OptParser_fe5bDDfRbVwQIuUOouExnA* p, NI* argsCount);
N_NIMCALL(void, processSwitch_TdGOW9ciAVvdBm6nv23Sz9aA)(TCmdLinePass_IiBn9cB6WYIMDHOT44O82wA pass, OptParser_fe5bDDfRbVwQIuUOouExnA* p);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
N_NIMCALL(void, rawMessage_wSQLHRsYvHJ4DSWgdFrFaA)(TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw msg, NimStringDesc** args, NI argsLen_0);
NimStringDesc* curCaasCmd_d9bbs0fkusQpq9c9aV1N2b4Ew;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
extern GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
NimStringDesc* lastCaasCmd_XN0FKBK4eJUnsxrDhlKHzg;
extern TNimType NTI_fe5bDDfRbVwQIuUOouExnA_;
extern TGlobalOption_RAfAEZqjnKMDumgyKKc1qw_Set gGlobalOptions_j042VVDC9cT5ENYoXnmhhVg;
extern NimStringDesc* arguments_J4sVmqKDJ3MkfxziRX9cODA;
extern NimStringDesc* command_zo83h8QWwtDIGDuqkGhjqg;
STRING_LITERAL(TM_AxyNANBXigTKyIcRAbufXw_3, "", 0);
STRING_LITERAL(TM_AxyNANBXigTKyIcRAbufXw_5, " ", 1);
STRING_LITERAL(TM_AxyNANBXigTKyIcRAbufXw_6, "-", 1);
STRING_LITERAL(TM_AxyNANBXigTKyIcRAbufXw_7, "run", 3);
static N_NIMCALL(void, TM_AxyNANBXigTKyIcRAbufXw_2)(void) {
	nimGCvisit((void*)curCaasCmd_d9bbs0fkusQpq9c9aV1N2b4Ew, 0);
}

static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
	c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
}
static N_NIMCALL(void, TM_AxyNANBXigTKyIcRAbufXw_4)(void) {
	nimGCvisit((void*)lastCaasCmd_XN0FKBK4eJUnsxrDhlKHzg, 0);
}

static N_INLINE(NIM_BOOL, equalMem_fmeFeLBvgmAHG9bC8ETS9bYQropes)(void* a, void* b, NI size) {
	NIM_BOOL result;
	int T1_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = memcmp(a, b, ((size_t) (size)));
	result = (T1_ == ((NI32) 0));
	return result;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL T11_;
{	result = (NIM_BOOL)0;
	{
		if (!(a == b)) goto LA3_;
		result = NIM_TRUE;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = (a == NIM_NIL);
		if (T7_) goto LA8_;
		T7_ = (b == NIM_NIL);
		LA8_: ;
		if (!T7_) goto LA9_;
		result = NIM_FALSE;
		goto BeforeRet_;
	}
	LA9_: ;
	T11_ = (NIM_BOOL)0;
	T11_ = ((*a).Sup.len == (*b).Sup.len);
	if (!(T11_)) goto LA12_;
	T11_ = equalMem_fmeFeLBvgmAHG9bC8ETS9bYQropes(((void*) ((*a).data)), ((void*) ((*b).data)), ((NI) ((*a).Sup.len)));
	LA12_: ;
	result = T11_;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(void, processCmdLine_tw2pZl8Nisz38VPmsT5WZA)(TCmdLinePass_IiBn9cB6WYIMDHOT44O82wA pass, NimStringDesc* cmd) {
	OptParser_fe5bDDfRbVwQIuUOouExnA p;
	NI argsCount;
	memset((void*)(&p), 0, sizeof(p));
	p.Sup.m_type = (&NTI_fe5bDDfRbVwQIuUOouExnA_);
	chckNil((void*)(&p));
	memset((void*)(&p), 0, sizeof(p));
	p.Sup.m_type = (&NTI_fe5bDDfRbVwQIuUOouExnA_);
	initOptParser_xt25Cv9cQqaNt3Mscl7nHFA(cmd, (&p));
	argsCount = ((NI) 0);
	{
		while (1) {
			nponext((&p));
			switch (p.kind) {
			case ((CmdLineKind_XkdXq9atxjiuhkFFh0XYrSA) 0):
			{
				goto LA1;
			}
			break;
			case ((CmdLineKind_XkdXq9atxjiuhkFFh0XYrSA) 2):
			case ((CmdLineKind_XkdXq9atxjiuhkFFh0XYrSA) 3):
			{
				{
					if (!eqStrings(p.key, ((NimStringDesc*) &TM_AxyNANBXigTKyIcRAbufXw_5))) goto LA7_;
					p.key = copyString(((NimStringDesc*) &TM_AxyNANBXigTKyIcRAbufXw_6));
					{
						NIM_BOOL T11_;
						T11_ = (NIM_BOOL)0;
						T11_ = processArgument_33tMDAeUR8ND9c6ZfADVB4w(pass, (&p), (&argsCount));
						if (!T11_) goto LA12_;
						goto LA1;
					}
					LA12_: ;
				}
				goto LA5_;
				LA7_: ;
				{
					processSwitch_TdGOW9ciAVvdBm6nv23Sz9aA(pass, (&p));
				}
				LA5_: ;
			}
			break;
			case ((CmdLineKind_XkdXq9atxjiuhkFFh0XYrSA) 1):
			{
				{
					NIM_BOOL T18_;
					T18_ = (NIM_BOOL)0;
					T18_ = processArgument_33tMDAeUR8ND9c6ZfADVB4w(pass, (&p), (&argsCount));
					if (!T18_) goto LA19_;
					goto LA1;
				}
				LA19_: ;
			}
			break;
			}
		}
	} LA1: ;
	{
		if (!(pass == ((TCmdLinePass_IiBn9cB6WYIMDHOT44O82wA) 1))) goto LA23_;
		{
			NIM_BOOL T27_;
			NIM_BOOL T28_;
			NimStringDesc* T31_;
			TY_8ZvwQIddfpj2THRVPsFzIQ T34_;
			T27_ = (NIM_BOOL)0;
			T28_ = (NIM_BOOL)0;
			T28_ = !(((gGlobalOptions_j042VVDC9cT5ENYoXnmhhVg &(1U<<((NU)(((TGlobalOption_RAfAEZqjnKMDumgyKKc1qw) 12))&31U)))!=0));
			if (!(T28_)) goto LA29_;
			T28_ = !(((arguments_J4sVmqKDJ3MkfxziRX9cODA) && (arguments_J4sVmqKDJ3MkfxziRX9cODA)->Sup.len == 0));
			LA29_: ;
			T27_ = T28_;
			if (!(T27_)) goto LA30_;
			T31_ = (NimStringDesc*)0;
			T31_ = nsuNormalize(command_zo83h8QWwtDIGDuqkGhjqg);
			T27_ = !(eqStrings(T31_, ((NimStringDesc*) &TM_AxyNANBXigTKyIcRAbufXw_7)));
			LA30_: ;
			if (!T27_) goto LA32_;
			memset((void*)T34_, 0, sizeof(T34_));
			rawMessage_wSQLHRsYvHJ4DSWgdFrFaA(((TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw) 59), T34_, 0);
		}
		LA32_: ;
	}
	LA23_: ;
}
NIM_EXTERNC N_NOINLINE(void, compiler_serviceInit000)(void) {
	NimStringDesc* T1_;
	NimStringDesc* T2_;
nimRegisterGlobalMarker(TM_AxyNANBXigTKyIcRAbufXw_2);
nimRegisterGlobalMarker(TM_AxyNANBXigTKyIcRAbufXw_4);
	T1_ = (NimStringDesc*)0;
	T1_ = curCaasCmd_d9bbs0fkusQpq9c9aV1N2b4Ew; curCaasCmd_d9bbs0fkusQpq9c9aV1N2b4Ew = copyStringRC1(((NimStringDesc*) &TM_AxyNANBXigTKyIcRAbufXw_3));
	if (T1_) nimGCunrefNoCycle(T1_);
	T2_ = (NimStringDesc*)0;
	T2_ = lastCaasCmd_XN0FKBK4eJUnsxrDhlKHzg; lastCaasCmd_XN0FKBK4eJUnsxrDhlKHzg = copyStringRC1(((NimStringDesc*) &TM_AxyNANBXigTKyIcRAbufXw_3));
	if (T2_) nimGCunrefNoCycle(T2_);
}

NIM_EXTERNC N_NOINLINE(void, compiler_serviceDatInit000)(void) {
}

