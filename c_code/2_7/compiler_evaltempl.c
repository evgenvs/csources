/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct Tnode191813 Tnode191813;
typedef struct Tsym191843 Tsym191843;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype191849 Ttype191849;
typedef struct Tident167021 Tident167021;
typedef struct Tnodeseq191807 Tnodeseq191807;
typedef struct Tidobj167015 Tidobj167015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq191845 Ttypeseq191845;
typedef struct Tscope191837 Tscope191837;
typedef struct TY191944 TY191944;
typedef struct Tstrtable191817 Tstrtable191817;
typedef struct Tsymseq191815 Tsymseq191815;
typedef struct Tloc191827 Tloc191827;
typedef struct Ropeobj161009 Ropeobj161009;
typedef struct Tlib191831 Tlib191831;
typedef struct Templctx383019 Templctx383019;
typedef struct Tidtable191861 Tidtable191861;
typedef struct Tidpairseq191859 Tidpairseq191859;
typedef struct TY86145 TY86145;
typedef struct Tcell46146 Tcell46146;
typedef struct Tcellseq46162 Tcellseq46162;
typedef struct Tgcheap48016 Tgcheap48016;
typedef struct Tcellset46158 Tcellset46158;
typedef struct Tpagedesc46154 Tpagedesc46154;
typedef struct Tmemregion28010 Tmemregion28010;
typedef struct Tsmallchunk27240 Tsmallchunk27240;
typedef struct Tllchunk28004 Tllchunk28004;
typedef struct Tbigchunk27242 Tbigchunk27242;
typedef struct Tintset27217 Tintset27217;
typedef struct Ttrunk27213 Ttrunk27213;
typedef struct Tavlnode28008 Tavlnode28008;
typedef struct Tgcstat48014 Tgcstat48014;
typedef struct Tinstantiation191833 Tinstantiation191833;
typedef struct Tlistentry129022 Tlistentry129022;
typedef struct Tidpair191857 Tidpair191857;
typedef struct Tbasechunk27238 Tbasechunk27238;
typedef struct Tfreecell27230 Tfreecell27230;
typedef struct TY191933 TY191933;
struct  Tlineinfo163338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tnode191813  {
Ttype191849* typ;
Tlineinfo163338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym191843* sym;
} S4;
struct {Tident167021* ident;
} S5;
struct {Tnodeseq191807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef N_NIMCALL_PTR(void, TY3289) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj167015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable191817  {
NI counter;
Tsymseq191815* data;
};
struct  Tloc191827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype191849* t;
Ropeobj161009* r;
Ropeobj161009* heaproot;
};
struct  Tsym191843  {
  Tidobj167015 Sup;
NU8 kind;
union{
struct {Ttypeseq191845* typeinstcache;
Tscope191837* typscope;
} S1;
struct {TY191944* procinstcache;
Tsym191843* gcunsafetyreason;
} S2;
struct {TY191944* usedgenerics;
Tstrtable191817 tab;
} S3;
struct {Tsym191843* guard;
} S4;
} kindU;
NU16 magic;
Ttype191849* typ;
Tident167021* name;
Tlineinfo163338 info;
Tsym191843* owner;
NU32 flags;
Tnode191813* ast;
NU32 options;
NI position;
NI offset;
Tloc191827 loc;
Tlib191831* annex;
Tnode191813* constraint;
};
struct  Ttype191849  {
  Tidobj167015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq191845* sons;
Tnode191813* n;
Tsym191843* owner;
Tsym191843* sym;
Tsym191843* destructor;
Tsym191843* deepcopy;
Tsym191843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc191827 loc;
};
struct  Tidtable191861  {
NI counter;
Tidpairseq191859* data;
};
struct  Templctx383019  {
Tsym191843* owner;
Tsym191843* gensymowner;
NIM_BOOL instlines;
Tidtable191861 mapping;
};
struct TY86145 {
NimStringDesc* Field0;
NI Field1;
};
struct  Tcell46146  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46162  {
NI len;
NI cap;
Tcell46146** d;
};
struct  Tcellset46158  {
NI counter;
NI max;
Tpagedesc46154* head;
Tpagedesc46154** data;
};
typedef Tsmallchunk27240* TY28022[512];
typedef Ttrunk27213* Ttrunkbuckets27215[256];
struct  Tintset27217  {
Ttrunkbuckets27215 data;
};
struct  Tmemregion28010  {
NI minlargeobj;
NI maxlargeobj;
TY28022 freesmallchunks;
Tllchunk28004* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Tbigchunk27242* freechunkslist;
Tintset27217 chunkstarts;
Tavlnode28008* root;
Tavlnode28008* deleted;
Tavlnode28008* last;
Tavlnode28008* freeavlnodes;
};
struct  Tgcstat48014  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Tgcheap48016  {
void* stackbottom;
NI cyclethreshold;
Tcellseq46162 zct;
Tcellseq46162 decstack;
Tcellset46158 cycleroots;
Tcellseq46162 tempstack;
NI recgclock;
Tmemregion28010 region;
Tgcstat48014 stat;
};
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
NI h;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tscope191837  {
NI depthlevel;
Tstrtable191817 symbols;
Tnodeseq191807* usingsyms;
Tscope191837* parent;
};
struct  Ropeobj161009  {
  TNimObject Sup;
Ropeobj161009* left;
Ropeobj161009* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry129022  {
  TNimObject Sup;
Tlistentry129022* prev;
Tlistentry129022* next;
};
struct  Tlib191831  {
  Tlistentry129022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj161009* name;
Tnode191813* path;
};
struct  Tidpair191857  {
Tidobj167015* key;
TNimObject* val;
};
typedef NI TY27220[16];
struct  Tpagedesc46154  {
Tpagedesc46154* next;
NI key;
TY27220 bits;
};
struct  Tbasechunk27238  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Tsmallchunk27240  {
  Tbasechunk27238 Sup;
Tsmallchunk27240* next;
Tsmallchunk27240* prev;
Tfreecell27230* freelist;
NI free;
NI acc;
NF data;
};
struct  Tllchunk28004  {
NI size;
NI acc;
Tllchunk28004* next;
};
struct  Tbigchunk27242  {
  Tbasechunk27238 Sup;
Tbigchunk27242* next;
Tbigchunk27242* prev;
NI align;
NF data;
};
struct  Ttrunk27213  {
Ttrunk27213* next;
NI key;
TY27220 bits;
};
typedef Tavlnode28008* TY28014[2];
struct  Tavlnode28008  {
TY28014 link;
NI key;
NI upperbound;
NI level;
};
struct  Tinstantiation191833  {
Tsym191843* sym;
Ttypeseq191845* concretetypes;
TY191933* usedby;
};
struct  Tfreecell27230  {
Tfreecell27230* next;
NI zerofield;
};
struct Tnodeseq191807 {
  TGenericSeq Sup;
  Tnode191813* data[SEQ_DECL_SIZE];
};
struct Ttypeseq191845 {
  TGenericSeq Sup;
  Ttype191849* data[SEQ_DECL_SIZE];
};
struct TY191944 {
  TGenericSeq Sup;
  Tinstantiation191833* data[SEQ_DECL_SIZE];
};
struct Tsymseq191815 {
  TGenericSeq Sup;
  Tsym191843* data[SEQ_DECL_SIZE];
};
struct Tidpairseq191859 {
  TGenericSeq Sup;
  Tidpair191857 data[SEQ_DECL_SIZE];
};
struct TY191933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, globalerror_165150)(Tlineinfo163338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(Tnode191813*, evaltemplateargs_383184)(Tnode191813* n, Tsym191843* s);
N_NIMCALL(NI, sonslen_194403)(Tnode191813* n);
N_NIMCALL(NI, sonslen_194351)(Ttype191849* n);
N_NIMCALL(Tnode191813*, newnodei_193351)(NU8 kind, Tlineinfo163338 info);
N_NIMCALL(Tnode191813*, copytree_196028)(Tnode191813* src);
N_NIMCALL(void, localerror_165171)(Tlineinfo163338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, addson_193819)(Tnode191813* father, Tnode191813* son);
N_NIMCALL(void, initidtable_195057)(Tidtable191861* x);
N_NIMCALL(Tnode191813*, getbody_235648)(Tsym191843* s);
static N_INLINE(NIM_BOOL, isatom_196905)(Tnode191813* n);
N_NIMCALL(void, evaltemplateaux_383039)(Tnode191813* templ, Tnode191813* actual, Templctx383019* c, Tnode191813* result);
static N_INLINE(NI, len_192097)(Tnode191813* n);
N_NIMCALL(void, add_192164)(Tnode191813* father, Tnode191813* son);
N_NIMCALL(void, internalerror_165234)(NimStringDesc* errmsg);
N_NIMCALL(NimStringDesc*, HEX24_165322)(TY86145 x);
N_NIMCALL(TNimObject*, idtableget_199182)(Tidtable191861 t, Tidobj167015* key);
N_NIMCALL(Tsym191843*, copysym_194607)(Tsym191843* s, NIM_BOOL keepid);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46146*, usrtocell_49646)(void* usr);
static N_INLINE(void, rtladdzct_51204)(Tcell46146* c);
N_NOINLINE(void, addzct_49617)(Tcellseq46162* s, Tcell46146* c);
N_NIMCALL(void, idtableput_199196)(Tidtable191861* t, Tidobj167015* key, TNimObject* val);
N_NIMCALL(Tnode191813*, newsymnode_193338)(Tsym191843* sym, Tlineinfo163338 info);
N_NIMCALL(Tnode191813*, copynode_383027)(Templctx383019* ctx, Tnode191813* a, Tnode191813* b);
N_NIMCALL(Tnode191813*, copynode_195644)(Tnode191813* src);
N_NIMCALL(NimStringDesc*, rendertree_213058)(Tnode191813* n, NU8 renderflags);
static N_INLINE(NI, safelen_192125)(Tnode191813* n);
STRING_LITERAL(TMP2820, "", 0);
STRING_LITERAL(TMP2822, "compiler/evaltempl.nim", 22);
NIM_CONST TY86145 TMP2821 = {((NimStringDesc*) &TMP2822),
((NI) 39)}
;
NI evaltemplatecounter_383256;
extern Tgcheap48016 gch_48044;

N_NIMCALL(Tnode191813*, evaltemplateargs_383184)(Tnode191813* n, Tsym191843* s) {
	Tnode191813* result;
	NI a;
	NI f;
	result = 0;
	a = 0;
	switch ((*n).kind) {
	case ((NU8) 27):
	case ((NU8) 29):
	case ((NU8) 30):
	case ((NU8) 31):
	case ((NU8) 26):
	case ((NU8) 28):
	{
		a = sonslen_194403(n);
	}
	break;
	default:
	{
		a = ((NI) 0);
	}
	break;
	}
	f = sonslen_194351((*s).typ);
	{
		if (!(f < a)) goto LA5;
		globalerror_165150((*n).info, ((NU16) 133), ((NimStringDesc*) &TMP2820));
	}
	LA5: ;
	result = newnodei_193351(((NU8) 152), (*n).info);
	{
		NI i_383204;
		NI HEX3Atmp_383234;
		NI res_383237;
		i_383204 = 0;
		HEX3Atmp_383234 = 0;
		HEX3Atmp_383234 = (NI)(f - ((NI) 1));
		res_383237 = ((NI) 1);
		{
			while (1) {
				Tnode191813* arg;
				if (!(res_383237 <= HEX3Atmp_383234)) goto LA9;
				i_383204 = res_383237;
				{
					if (!(i_383204 < a)) goto LA12;
					arg = (*n).kindU.S6.sons->data[i_383204];
				}
				goto LA10;
				LA12: ;
				{
					arg = copytree_196028((*(*(*(*(*s).typ).n).kindU.S6.sons->data[i_383204]).kindU.S4.sym).ast);
				}
				LA10: ;
				{
					NIM_BOOL LOC17;
					LOC17 = 0;
					LOC17 = (arg == NIM_NIL);
					if (LOC17) goto LA18;
					LOC17 = ((*arg).kind == ((NU8) 1));
					LA18: ;
					if (!LOC17) goto LA19;
					localerror_165171((*n).info, ((NU16) 133), ((NimStringDesc*) &TMP2820));
				}
				LA19: ;
				addson_193819(result, arg);
				res_383237 += ((NI) 1);
			} LA9: ;
		}
	}
	return result;
}

static N_INLINE(NIM_BOOL, isatom_196905)(Tnode191813* n) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = (((NU8) 0) <= (*n).kind);
	if (!(LOC1)) goto LA2;
	LOC1 = ((*n).kind <= ((NU8) 23));
	LA2: ;
	result = LOC1;
	return result;
}

static N_INLINE(NI, len_192097)(Tnode191813* n) {
	NI result;
	result = 0;
	{
		if (!(*n).kindU.S6.sons == 0) goto LA3;
		result = ((NI) 0);
	}
	goto LA1;
	LA3: ;
	{
		result = ((*n).kindU.S6.sons ? (*n).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
	return result;
}

static N_INLINE(Tcell46146*, usrtocell_49646)(void* usr) {
	Tcell46146* result;
	result = 0;
	result = ((Tcell46146*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46146))))));
	return result;
}

static N_INLINE(void, rtladdzct_51204)(Tcell46146* c) {
	addzct_49617((&gch_48044.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Tcell46146* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49646(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Tcell46146* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_49646((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_51204(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(Tnode191813*, copynode_383027)(Templctx383019* ctx, Tnode191813* a, Tnode191813* b) {
	Tnode191813* result;
	result = 0;
	result = copynode_195644(a);
	{
		if (!(*ctx).instlines) goto LA3;
		(*result).info = (*b).info;
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, evaltemplateaux_383039)(Tnode191813* templ, Tnode191813* actual, Templctx383019* c, Tnode191813* result) {
	switch ((*templ).kind) {
	case ((NU8) 3):
	{
		Tsym191843* s;
		s = (*templ).kindU.S4.sym;
		{
			if (!((*(*s).owner).Sup.id == (*(*c).owner).Sup.id)) goto LA4;
			{
				NIM_BOOL LOC8;
				Tnode191813* x;
				LOC8 = 0;
				LOC8 = ((*s).kind == ((NU8) 3));
				if (!(LOC8)) goto LA9;
				LOC8 = !((((*s).flags &(1<<((((NU8) 31))&31)))!=0));
				LA9: ;
				if (!LOC8) goto LA10;
				x = (*actual).kindU.S6.sons->data[(*s).position];
				{
					if (!((*x).kind == ((NU8) 152))) goto LA14;
					{
						Tnode191813* y_383083;
						y_383083 = 0;
						{
							NI i_383142;
							NI HEX3Atmp_383144;
							NI LOC18;
							NI res_383146;
							i_383142 = 0;
							HEX3Atmp_383144 = 0;
							LOC18 = 0;
							LOC18 = len_192097(x);
							HEX3Atmp_383144 = (LOC18 - 1);
							res_383146 = ((NI) 0);
							{
								while (1) {
									if (!(res_383146 <= HEX3Atmp_383144)) goto LA20;
									i_383142 = res_383146;
									y_383083 = (*x).kindU.S6.sons->data[i_383142];
									add_192164(result, y_383083);
									res_383146 += ((NI) 1);
								} LA20: ;
							}
						}
					}
				}
				goto LA12;
				LA14: ;
				{
					Tnode191813* LOC22;
					LOC22 = 0;
					LOC22 = copytree_196028(x);
					add_192164(result, LOC22);
				}
				LA12: ;
			}
			goto LA6;
			LA10: ;
			{
				Tsym191843* x;
				Tidobj167015* LOC29;
				TNimObject* LOC30;
				Tlineinfo163338 LOC37;
				Tnode191813* LOC43;
				{
					NimStringDesc* LOC28;
					if (!!((((*s).flags &(1<<((((NU8) 31))&31)))!=0))) goto LA26;
					LOC28 = 0;
					LOC28 = HEX24_165322(TMP2821);
					internalerror_165234(LOC28);
				}
				LA26: ;
				LOC29 = 0;
				LOC29 = &s->Sup;
				LOC30 = 0;
				LOC30 = idtableget_199182((*c).mapping, LOC29);
				x = ((Tsym191843*) (LOC30));
				{
					Tidobj167015* LOC35;
					TNimObject* LOC36;
					if (!(x == NIM_NIL)) goto LA33;
					x = copysym_194607(s, NIM_FALSE);
					asgnRefNoCycle((void**) (&(*x).owner), (*c).gensymowner);
					LOC35 = 0;
					LOC35 = &s->Sup;
					LOC36 = 0;
					LOC36 = &x->Sup.Sup;
					idtableput_199196((&(*c).mapping), LOC35, LOC36);
				}
				LA33: ;
				{
					if (!(*c).instlines) goto LA40;
					LOC37 = (*actual).info;
				}
				goto LA38;
				LA40: ;
				{
					LOC37 = (*templ).info;
				}
				LA38: ;
				LOC43 = 0;
				LOC43 = newsymnode_193338(x, LOC37);
				add_192164(result, LOC43);
			}
			LA6: ;
		}
		goto LA2;
		LA4: ;
		{
			Tnode191813* LOC45;
			LOC45 = 0;
			LOC45 = copynode_383027((&(*c)), templ, actual);
			add_192164(result, LOC45);
		}
		LA2: ;
	}
	break;
	case ((NU8) 0) ... ((NU8) 2):
	case ((NU8) 4) ... ((NU8) 23):
	{
		Tnode191813* LOC47;
		LOC47 = 0;
		LOC47 = copynode_383027((&(*c)), templ, actual);
		add_192164(result, LOC47);
	}
	break;
	default:
	{
		Tnode191813* res;
		res = copynode_383027((&(*c)), templ, actual);
		{
			NI i_383135;
			NI HEX3Atmp_383150;
			NI LOC50;
			NI res_383153;
			i_383135 = 0;
			HEX3Atmp_383150 = 0;
			LOC50 = 0;
			LOC50 = sonslen_194403(templ);
			HEX3Atmp_383150 = (NI)(LOC50 - ((NI) 1));
			res_383153 = ((NI) 0);
			{
				while (1) {
					if (!(res_383153 <= HEX3Atmp_383150)) goto LA52;
					i_383135 = res_383153;
					evaltemplateaux_383039((*templ).kindU.S6.sons->data[i_383135], actual, c, res);
					res_383153 += ((NI) 1);
				} LA52: ;
			}
		}
		add_192164(result, res);
	}
	break;
	}
}

static N_INLINE(NI, safelen_192125)(Tnode191813* n) {
	NI result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = ((*n).kind >= ((NU8) 0) && (*n).kind <= ((NU8) 23));
		if (LOC3) goto LA4;
		LOC3 = (*n).kindU.S6.sons == 0;
		LA4: ;
		if (!LOC3) goto LA5;
		result = ((NI) 0);
	}
	goto LA1;
	LA5: ;
	{
		result = ((*n).kindU.S6.sons ? (*n).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
	return result;
}

N_NIMCALL(Tnode191813*, evaltemplate_383260)(Tnode191813* n, Tsym191843* tmpl, Tsym191843* gensymowner) {
	Tnode191813* result;
	Tnode191813* args;
	Templctx383019 ctx;
	Tnode191813* body;
	result = 0;
	evaltemplatecounter_383256 += ((NI) 1);
	{
		if (!(((NI) 100) < evaltemplatecounter_383256)) goto LA3;
		globalerror_165150((*n).info, ((NU16) 183), ((NimStringDesc*) &TMP2820));
		result = n;
	}
	LA3: ;
	args = evaltemplateargs_383184(n, tmpl);
	memset((void*)(&ctx), 0, sizeof(ctx));
	ctx.owner = tmpl;
	ctx.gensymowner = gensymowner;
	initidtable_195057((&ctx.mapping));
	body = getbody_235648(tmpl);
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = isatom_196905(body);
		if (!LOC7) goto LA8;
		result = newnodei_193351(((NU8) 37), (*body).info);
		evaltemplateaux_383039(body, args, (&ctx), result);
		{
			NI LOC12;
			LOC12 = 0;
			LOC12 = len_192097(result);
			if (!(LOC12 == ((NI) 1))) goto LA13;
			result = (*result).kindU.S6.sons->data[((NI) 0)];
		}
		goto LA10;
		LA13: ;
		{
			NimStringDesc* LOC16;
			LOC16 = 0;
			LOC16 = rendertree_213058(result, 4);
			localerror_165171((*result).info, ((NU16) 1), LOC16);
		}
		LA10: ;
	}
	goto LA5;
	LA8: ;
	{
		result = copynode_195644(body);
		ctx.instlines = !(((*body).kind == ((NU8) 115) || (*body).kind == ((NU8) 126) || (*body).kind == ((NU8) 112) || (*body).kind == ((NU8) 127)));
		{
			if (!ctx.instlines) goto LA20;
			(*result).info = (*n).info;
		}
		LA20: ;
		{
			NI i_383308;
			NI HEX3Atmp_383322;
			NI LOC23;
			NI res_383325;
			i_383308 = 0;
			HEX3Atmp_383322 = 0;
			LOC23 = 0;
			LOC23 = safelen_192125(body);
			HEX3Atmp_383322 = (NI)(LOC23 - ((NI) 1));
			res_383325 = ((NI) 0);
			{
				while (1) {
					if (!(res_383325 <= HEX3Atmp_383322)) goto LA25;
					i_383308 = res_383325;
					evaltemplateaux_383039((*body).kindU.S6.sons->data[i_383308], args, (&ctx), result);
					res_383325 += ((NI) 1);
				} LA25: ;
			}
		}
	}
	LA5: ;
	evaltemplatecounter_383256 -= ((NI) 1);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_evaltemplInit)(void) {
	evaltemplatecounter_383256 = ((NI) 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_evaltemplDatInit)(void) {
}
