/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tinfocpu174463 tinfocpu174463;
typedef struct tinfoos174048 tinfoos174048;
typedef struct tcell44735 tcell44735;
typedef struct TNimType TNimType;
typedef struct tcellseq44751 tcellseq44751;
typedef struct tgcheap46816 tgcheap46816;
typedef struct tcellset44747 tcellset44747;
typedef struct tpagedesc44743 tpagedesc44743;
typedef struct tmemregion27010 tmemregion27010;
typedef struct tsmallchunk26240 tsmallchunk26240;
typedef struct tllchunk27004 tllchunk27004;
typedef struct tbigchunk26242 tbigchunk26242;
typedef struct tintset26217 tintset26217;
typedef struct ttrunk26213 ttrunk26213;
typedef struct tavlnode27008 tavlnode27008;
typedef struct tgcstat46814 tgcstat46814;
typedef struct TNimNode TNimNode;
typedef struct tbasechunk26238 tbasechunk26238;
typedef struct tfreecell26230 tfreecell26230;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tinfocpu174463 {
NimStringDesc* Field0;
NI Field1;
NU8 Field2;
NI Field3;
NI Field4;
};
typedef tinfocpu174463 TY174481[14];
struct tinfoos174048 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
NimStringDesc* Field3;
NimStringDesc* Field4;
NimStringDesc* Field5;
NimStringDesc* Field6;
NimStringDesc* Field7;
NimStringDesc* Field8;
NimStringDesc* Field9;
NimStringDesc* Field10;
NimStringDesc* Field11;
NU8 Field12;
};
typedef tinfoos174048 TY174070[23];
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
typedef NimStringDesc* TY174475[2];
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
typedef NI TY26220[8];
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tfreecell26230  {
tfreecell26230* Next;
NI Zerofield;
};
N_NIMCALL(NU8, nametocpu_174604)(NimStringDesc* name);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NU8, nametoos_174598)(NimStringDesc* name);
N_NIMCALL(void, settarget_174621)(NU8 o, NU8 c);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44735*, usrtocell_48446)(void* usr);
static N_INLINE(void, rtladdzct_50004)(tcell44735* c);
N_NOINLINE(void, addzct_48417)(tcellseq44751* s, tcell44735* c);
STRING_LITERAL(TMP59, "i386", 4);
STRING_LITERAL(TMP60, "m68k", 4);
STRING_LITERAL(TMP61, "alpha", 5);
STRING_LITERAL(TMP62, "powerpc", 7);
STRING_LITERAL(TMP63, "powerpc64", 9);
STRING_LITERAL(TMP64, "sparc", 5);
STRING_LITERAL(TMP65, "vm", 2);
STRING_LITERAL(TMP66, "ia64", 4);
STRING_LITERAL(TMP67, "amd64", 5);
STRING_LITERAL(TMP68, "mips", 4);
STRING_LITERAL(TMP69, "arm", 3);
STRING_LITERAL(TMP70, "js", 2);
STRING_LITERAL(TMP71, "nimrodvm", 8);
STRING_LITERAL(TMP72, "avr", 3);
NIM_CONST TY174481 cpu_174480 = {{((NimStringDesc*) &TMP59),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP60),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP61),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP62),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP63),
64,
((NU8) 1),
64,
64}
,
{((NimStringDesc*) &TMP64),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP65),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP66),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP67),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP68),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP69),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP70),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP71),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP72),
16,
((NU8) 0),
32,
16}
}
;
STRING_LITERAL(TMP73, "DOS", 3);
STRING_LITERAL(TMP74, "..", 2);
STRING_LITERAL(TMP75, "$1.dll", 6);
STRING_LITERAL(TMP76, "/", 1);
STRING_LITERAL(TMP77, ".obj", 4);
STRING_LITERAL(TMP78, "\015\012", 2);
STRING_LITERAL(TMP79, ";", 1);
STRING_LITERAL(TMP80, "\\", 1);
STRING_LITERAL(TMP81, ".bat", 4);
STRING_LITERAL(TMP82, ".", 1);
STRING_LITERAL(TMP83, ".exe", 4);
STRING_LITERAL(TMP84, "Windows", 7);
STRING_LITERAL(TMP85, "OS2", 3);
STRING_LITERAL(TMP86, "Linux", 5);
STRING_LITERAL(TMP87, "lib$1.so", 8);
STRING_LITERAL(TMP88, ".o", 2);
STRING_LITERAL(TMP89, "\012", 1);
STRING_LITERAL(TMP90, ":", 1);
STRING_LITERAL(TMP91, ".sh", 3);
STRING_LITERAL(TMP92, "", 0);
STRING_LITERAL(TMP93, "MorphOS", 7);
STRING_LITERAL(TMP94, "SkyOS", 5);
STRING_LITERAL(TMP95, "Solaris", 7);
STRING_LITERAL(TMP96, "Irix", 4);
STRING_LITERAL(TMP97, "NetBSD", 6);
STRING_LITERAL(TMP98, "FreeBSD", 7);
STRING_LITERAL(TMP99, "OpenBSD", 7);
STRING_LITERAL(TMP100, "AIX", 3);
STRING_LITERAL(TMP101, "PalmOS", 6);
STRING_LITERAL(TMP102, "QNX", 3);
STRING_LITERAL(TMP103, "Amiga", 5);
STRING_LITERAL(TMP104, "$1.library", 10);
STRING_LITERAL(TMP105, "Atari", 5);
STRING_LITERAL(TMP106, ".tpp", 4);
STRING_LITERAL(TMP107, "Netware", 7);
STRING_LITERAL(TMP108, "$1.nlm", 6);
STRING_LITERAL(TMP109, ".nlm", 4);
STRING_LITERAL(TMP110, "MacOS", 5);
STRING_LITERAL(TMP111, "::", 2);
STRING_LITERAL(TMP112, "$1Lib", 5);
STRING_LITERAL(TMP113, "\015", 1);
STRING_LITERAL(TMP114, ",", 1);
STRING_LITERAL(TMP115, "MacOSX", 6);
STRING_LITERAL(TMP116, "lib$1.dylib", 11);
STRING_LITERAL(TMP117, "Haiku", 5);
STRING_LITERAL(TMP118, "JS", 2);
STRING_LITERAL(TMP119, "NimrodVM", 8);
STRING_LITERAL(TMP120, "Standalone", 10);
NIM_CONST TY174070 os_174069 = {{((NimStringDesc*) &TMP73),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP75),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP77),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP79),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP81),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP83),
((NimStringDesc*) &TMP82),
2}
,
{((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP75),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP77),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP79),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP81),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP83),
((NimStringDesc*) &TMP82),
2}
,
{((NimStringDesc*) &TMP85),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP75),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP77),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP79),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP81),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP83),
((NimStringDesc*) &TMP82),
2}
,
{((NimStringDesc*) &TMP86),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
5}
,
{((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
5}
,
{((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
5}
,
{((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
5}
,
{((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
5}
,
{((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
5}
,
{((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
5}
,
{((NimStringDesc*) &TMP99),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
5}
,
{((NimStringDesc*) &TMP100),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
5}
,
{((NimStringDesc*) &TMP101),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
1}
,
{((NimStringDesc*) &TMP102),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
5}
,
{((NimStringDesc*) &TMP103),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP104),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
1}
,
{((NimStringDesc*) &TMP105),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP75),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP106),
((NimStringDesc*) &TMP82),
1}
,
{((NimStringDesc*) &TMP107),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP109),
((NimStringDesc*) &TMP82),
2}
,
{((NimStringDesc*) &TMP110),
((NimStringDesc*) &TMP111),
((NimStringDesc*) &TMP112),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP113),
((NimStringDesc*) &TMP114),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
2}
,
{((NimStringDesc*) &TMP115),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP116),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
13}
,
{((NimStringDesc*) &TMP117),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
13}
,
{((NimStringDesc*) &TMP118),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
0}
,
{((NimStringDesc*) &TMP119),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
0}
,
{((NimStringDesc*) &TMP120),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
0}
}
;
STRING_LITERAL(TMP121, "netbsd", 6);
STRING_LITERAL(TMP1444, "littleEndian", 12);
STRING_LITERAL(TMP1445, "bigEndian", 9);
NIM_CONST TY174475 endiantostr_174474 = {((NimStringDesc*) &TMP1444),
((NimStringDesc*) &TMP1445)}
;
NU8 targetcpu_174587;
NU8 hostcpu_174588;
NU8 targetos_174589;
NU8 hostos_174590;
NI intsize_174610;
NI floatsize_174611;
NI ptrsize_174612;
NimStringDesc* tnl_174613;
extern tgcheap46816 gch_46844;

N_NIMCALL(NU8, nametocpu_174604)(NimStringDesc* name) {
	NU8 result;
	result = 0;
	{
		NU8 i_175157;
		NU8 res_175162;
		i_175157 = 0;
		res_175162 = ((NU8) 1);
		{
			while (1) {
				if (!(res_175162 <= ((NU8) 14))) goto LA3;
				i_175157 = res_175162;
				{
					NI LOC6;
					LOC6 = 0;
					LOC6 = nsuCmpIgnoreStyle(name, cpu_174480[(i_175157)- 1].Field0);
					if (!(LOC6 == 0)) goto LA7;
					result = i_175157;
					goto BeforeRet;
				}
				LA7: ;
				res_175162 += 1;
			} LA3: ;
		}
	}
	result = ((NU8) 0);
	BeforeRet: ;
	return result;
}

N_NIMCALL(NU8, nametoos_174598)(NimStringDesc* name) {
	NU8 result;
	result = 0;
	{
		NU8 i_175071;
		NU8 res_175076;
		i_175071 = 0;
		res_175076 = ((NU8) 1);
		{
			while (1) {
				if (!(res_175076 <= ((NU8) 23))) goto LA3;
				i_175071 = res_175076;
				{
					NI LOC6;
					LOC6 = 0;
					LOC6 = nsuCmpIgnoreStyle(name, os_174069[(i_175071)- 1].Field0);
					if (!(LOC6 == 0)) goto LA7;
					result = i_175071;
					goto BeforeRet;
				}
				LA7: ;
				res_175076 += 1;
			} LA3: ;
		}
	}
	result = ((NU8) 0);
	BeforeRet: ;
	return result;
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell44735* c;
	c = usrtocell_48446(p);
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_50004(c);
	}
	LA3: ;
}

N_NIMCALL(void, settarget_174621)(NU8 o, NU8 c) {
	NimStringDesc* LOC1;
	targetcpu_174587 = c;
	targetos_174589 = o;
	intsize_174610 = (NI64)(cpu_174480[(c)- 1].Field1 / 8);
	floatsize_174611 = (NI64)(cpu_174480[(c)- 1].Field3 / 8);
	ptrsize_174612 = (NI64)(cpu_174480[(c)- 1].Field4 / 8);
	LOC1 = 0;
	LOC1 = tnl_174613; tnl_174613 = copyStringRC1(os_174069[(o)- 1].Field5);
	if (LOC1) nimGCunrefNoCycle(LOC1);
}
NIM_EXTERNC N_NOINLINE(void, HEX00_platformInit)(void) {
	hostcpu_174588 = nametocpu_174604(((NimStringDesc*) &TMP67));
	hostos_174590 = nametoos_174598(((NimStringDesc*) &TMP121));
	settarget_174621(hostos_174590, hostcpu_174588);
}

NIM_EXTERNC N_NOINLINE(void, HEX00_platformDatInit)(void) {
}
