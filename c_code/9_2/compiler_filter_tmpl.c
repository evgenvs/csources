/* Generated by Nim Compiler v0.17.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
#undef linux
#undef near
typedef struct TLLStream_IHsOGFu33dIY69a9bLlFHlHw TLLStream_IHsOGFu33dIY69a9bLlFHlHw;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNode_bROa11lyF5vxEN9aYNbHmhw TNode_bROa11lyF5vxEN9aYNbHmhw;
typedef struct TTmplParser_hVXV9cC75rOvsaODz9bp1zeg TTmplParser_hVXV9cC75rOvsaODz9bp1zeg;
typedef struct TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TType_LTUWCZolpovw9cWE3JBWSUw TType_LTUWCZolpovw9cWE3JBWSUw;
typedef struct TSym_AXG7xcvKqaxY6koRX1xkCw TSym_AXG7xcvKqaxY6koRX1xkCw;
typedef struct TIdent_4umxGerWTHGPwUms7Yqu3g TIdent_4umxGerWTHGPwUms7Yqu3g;
typedef struct TY_ehmV9bTklH2Gt9cXHV9c0HLeQ TY_ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct TIdObj_raN9cHVgzmvaXisezY9aGg9cg TIdObj_raN9cHVgzmvaXisezY9aGg9cg;
typedef struct TY_zuqP4Riz26Oi5fWgPYVEgA TY_zuqP4Riz26Oi5fWgPYVEgA;
typedef struct TY_iGkpo9aKQdr3NWelKC4cnJA TY_iGkpo9aKQdr3NWelKC4cnJA;
typedef struct TLoc_EtHNvCB0bgfu9bFjzx9cb6aA TLoc_EtHNvCB0bgfu9bFjzx9cb6aA;
typedef struct RopeObj_HF4qJnb6xiOddgPmsxodtQ RopeObj_HF4qJnb6xiOddgPmsxodtQ;
typedef struct TY_DXS6mEo7PVUFJkirsQ9bNQA TY_DXS6mEo7PVUFJkirsQ9bNQA;
typedef struct TStrTable_f07aOS3dr28kGa5wcE29aFA TStrTable_f07aOS3dr28kGa5wcE29aFA;
typedef struct TY_sksVpmPRIkNR9axiwtD1Guw TY_sksVpmPRIkNR9axiwtD1Guw;
typedef struct TLib_NBMxlJ6g3utqUlplqTTHkA TLib_NBMxlJ6g3utqUlplqTTHkA;
typedef struct TY_a09bGTAl9ceOKTAytYdkbyKg TY_a09bGTAl9ceOKTAytYdkbyKg;
typedef struct TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 TParseState_TMyoReN7VAtsUpVF9bL9cXRQ;
struct  TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw  {
NI16 line;
NI16 col;
NI32 fileIndex;
};
struct  TTmplParser_hVXV9cC75rOvsaODz9bp1zeg  {
TLLStream_IHsOGFu33dIY69a9bLlFHlHw* inp;
TParseState_TMyoReN7VAtsUpVF9bL9cXRQ state;
TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info;
NI indent;
NI emitPar;
NimStringDesc* x;
TLLStream_IHsOGFu33dIY69a9bLlFHlHw* outp;
NIM_CHAR subsChar;
NIM_CHAR nimDirective;
NimStringDesc* emit;
NimStringDesc* conc;
NimStringDesc* toStr;
NI curly;
NI bracket;
NI par;
NIM_BOOL pendingExprLine;
};
typedef NU16 TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw;
typedef NU8 TY_nmiMWKVIe46vacnhAFrQvw_Set[32];
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
struct  TNimObject  {
TNimType* m_type;
};
typedef NU8 TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ;
struct  TLLStream_IHsOGFu33dIY69a9bLlFHlHw  {
  TNimObject Sup;
TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineOffset;
};
typedef NU16 TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg_Set;
typedef NU8 TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw;
struct  TNode_bROa11lyF5vxEN9aYNbHmhw  {
TType_LTUWCZolpovw9cWE3JBWSUw* typ;
TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info;
TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg_Set flags;
TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw kind;
union{
struct {NI64 intVal;
} S1;
struct {NF floatVal;
} S2;
struct {NimStringDesc* strVal;
} S3;
struct {TSym_AXG7xcvKqaxY6koRX1xkCw* sym;
} S4;
struct {TIdent_4umxGerWTHGPwUms7Yqu3g* ident;
} S5;
struct {TY_ehmV9bTklH2Gt9cXHV9c0HLeQ* sons;
} S6;
} kindU;
NimStringDesc* comment;
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
struct  TIdObj_raN9cHVgzmvaXisezY9aGg9cg  {
  TNimObject Sup;
NI id;
};
typedef NU8 TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag;
typedef NU8 TCallingConvention_yjAJ8w0h1PBaSwSGJ3P7IA;
typedef NU64 TTypeFlag_x2m5g1NpbmDig4wLT3Ylhw_Set;
typedef NU8 TLocKind_O7PRFZKuiBBWbku09cayVBg;
typedef NU8 TStorageLoc_JK9cKMX3XnqHaUky9b6gkGEw;
typedef NU16 TLocFlag_o2bqJgR4ceIupnUSpxiudA_Set;
struct  TLoc_EtHNvCB0bgfu9bFjzx9cb6aA  {
TLocKind_O7PRFZKuiBBWbku09cayVBg k;
TStorageLoc_JK9cKMX3XnqHaUky9b6gkGEw s;
TLocFlag_o2bqJgR4ceIupnUSpxiudA_Set flags;
TType_LTUWCZolpovw9cWE3JBWSUw* t;
RopeObj_HF4qJnb6xiOddgPmsxodtQ* r;
};
struct  TType_LTUWCZolpovw9cWE3JBWSUw  {
  TIdObj_raN9cHVgzmvaXisezY9aGg9cg Sup;
TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag kind;
TCallingConvention_yjAJ8w0h1PBaSwSGJ3P7IA callConv;
TTypeFlag_x2m5g1NpbmDig4wLT3Ylhw_Set flags;
TY_zuqP4Riz26Oi5fWgPYVEgA* sons;
TNode_bROa11lyF5vxEN9aYNbHmhw* n;
TSym_AXG7xcvKqaxY6koRX1xkCw* owner;
TSym_AXG7xcvKqaxY6koRX1xkCw* sym;
TSym_AXG7xcvKqaxY6koRX1xkCw* destructor;
TSym_AXG7xcvKqaxY6koRX1xkCw* deepCopy;
TSym_AXG7xcvKqaxY6koRX1xkCw* assignment;
TY_iGkpo9aKQdr3NWelKC4cnJA* methods;
NI64 size;
NI16 align;
NI16 lockLevel;
TLoc_EtHNvCB0bgfu9bFjzx9cb6aA loc;
TType_LTUWCZolpovw9cWE3JBWSUw* typeInst;
};
typedef NU8 TSymKind_cNCW9acsSznmEccl1fgQwkw;
struct  TStrTable_f07aOS3dr28kGa5wcE29aFA  {
NI counter;
TY_sksVpmPRIkNR9axiwtD1Guw* data;
};
typedef NU16 TMagic_shZhZOdbVC5nnFvcXQAImg;
typedef NU64 TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw_Set;
typedef NU32 TOption_WspMeQySXNP2XoTWR5MTgg_Set;
struct  TSym_AXG7xcvKqaxY6koRX1xkCw  {
  TIdObj_raN9cHVgzmvaXisezY9aGg9cg Sup;
TSymKind_cNCW9acsSznmEccl1fgQwkw kind;
union{
struct {TY_zuqP4Riz26Oi5fWgPYVEgA* typeInstCache;
} S1;
struct {TY_DXS6mEo7PVUFJkirsQ9bNQA* procInstCache;
TSym_AXG7xcvKqaxY6koRX1xkCw* gcUnsafetyReason;
} S2;
struct {TY_DXS6mEo7PVUFJkirsQ9bNQA* usedGenerics;
TStrTable_f07aOS3dr28kGa5wcE29aFA tab;
} S3;
struct {TSym_AXG7xcvKqaxY6koRX1xkCw* guard;
NI bitsize;
} S4;
} kindU;
TMagic_shZhZOdbVC5nnFvcXQAImg magic;
TType_LTUWCZolpovw9cWE3JBWSUw* typ;
TIdent_4umxGerWTHGPwUms7Yqu3g* name;
TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info;
TSym_AXG7xcvKqaxY6koRX1xkCw* owner;
TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw_Set flags;
TNode_bROa11lyF5vxEN9aYNbHmhw* ast;
TOption_WspMeQySXNP2XoTWR5MTgg_Set options;
NI position;
NI offset;
TLoc_EtHNvCB0bgfu9bFjzx9cb6aA loc;
TLib_NBMxlJ6g3utqUlplqTTHkA* annex;
TNode_bROa11lyF5vxEN9aYNbHmhw* constraint;
};
struct  TIdent_4umxGerWTHGPwUms7Yqu3g  {
  TIdObj_raN9cHVgzmvaXisezY9aGg9cg Sup;
NimStringDesc* s;
TIdent_4umxGerWTHGPwUms7Yqu3g* next;
NI h;
};
struct TY_a09bGTAl9ceOKTAytYdkbyKg {
NI Field0;
TSym_AXG7xcvKqaxY6koRX1xkCw* Field1;
};
struct  RopeObj_HF4qJnb6xiOddgPmsxodtQ  {
  TNimObject Sup;
RopeObj_HF4qJnb6xiOddgPmsxodtQ* left;
RopeObj_HF4qJnb6xiOddgPmsxodtQ* right;
NI length;
NimStringDesc* data;
};
typedef NU8 TLibKind_9b8v60kso59bBaw9cp8B9a9apKQ;
struct  TLib_NBMxlJ6g3utqUlplqTTHkA  {
TLibKind_9b8v60kso59bBaw9cp8B9a9apKQ kind;
NIM_BOOL generated;
NIM_BOOL isOverriden;
RopeObj_HF4qJnb6xiOddgPmsxodtQ* name;
TNode_bROa11lyF5vxEN9aYNbHmhw* path;
};
struct  TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA  {
TSym_AXG7xcvKqaxY6koRX1xkCw* sym;
TY_zuqP4Riz26Oi5fWgPYVEgA* concreteTypes;
NI compilesId;
};
struct TY_ehmV9bTklH2Gt9cXHV9c0HLeQ {
  TGenericSeq Sup;
  TNode_bROa11lyF5vxEN9aYNbHmhw* data[SEQ_DECL_SIZE];
};
struct TY_zuqP4Riz26Oi5fWgPYVEgA {
  TGenericSeq Sup;
  TType_LTUWCZolpovw9cWE3JBWSUw* data[SEQ_DECL_SIZE];
};
struct TY_iGkpo9aKQdr3NWelKC4cnJA {
  TGenericSeq Sup;
  TY_a09bGTAl9ceOKTAytYdkbyKg data[SEQ_DECL_SIZE];
};
struct TY_DXS6mEo7PVUFJkirsQ9bNQA {
  TGenericSeq Sup;
  TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA* data[SEQ_DECL_SIZE];
};
struct TY_sksVpmPRIkNR9axiwtD1Guw {
  TGenericSeq Sup;
  TSym_AXG7xcvKqaxY6koRX1xkCw* data[SEQ_DECL_SIZE];
};
static N_INLINE(TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw, newLineInfo_ma5QosTA48Uq0vvBD9bm6fwfilter_tmpl)(NimStringDesc* filename, NI line, NI col);
N_NIMCALL(TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw, newLineInfo_Shbbzc11c9bnWkBc9b42npzA)(NI32 fileInfoIdx, NI line, NI col);
N_NIMCALL(NI32, fileInfoIdx_RXxXBoV2drjjVnQa9abo19cQ)(NimStringDesc* filename);
N_NIMCALL(TLLStream_IHsOGFu33dIY69a9bLlFHlHw*, llStreamOpen_HQSZA6kzdilYF0Pf022dhA)(NimStringDesc* data);
N_NIMCALL(NIM_CHAR, charArg_9a2s5yGJN0q64pYjhEbI1pQ)(TNode_bROa11lyF5vxEN9aYNbHmhw* n, NimStringDesc* name, NI pos, NIM_CHAR default_0);
N_NIMCALL(NimStringDesc*, strArg_hrsET2VpzHuUBdZObITwmQ)(TNode_bROa11lyF5vxEN9aYNbHmhw* n, NimStringDesc* name, NI pos, NimStringDesc* default_0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llStreamReadLine_Qwm1ilRhcaI3znjOGn4xBg)(TLLStream_IHsOGFu33dIY69a9bLlFHlHw* s, NimStringDesc** line);
N_NIMCALL(void, parseLine_Seop6SJMf7a68kj2jl0nsQ)(TTmplParser_hVXV9cC75rOvsaODz9bp1zeg* p);
N_NIMCALL(void, newLine_P1DA7WwGEY1zF3DfWYV6Pg)(TTmplParser_hVXV9cC75rOvsaODz9bp1zeg* p);
N_NIMCALL(void, llStreamWrite_p1fwzwO1YKdwAKg6V27RTw)(TLLStream_IHsOGFu33dIY69a9bLlFHlHw* s, NimStringDesc* data);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NIM_CHAR c, NI count);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, scanPar_UZozihWMkEBOt7RUxfUnzw)(TTmplParser_hVXV9cC75rOvsaODz9bp1zeg* p, NI d);
static N_INLINE(NIM_BOOL, withInExpr_mIMrfOlUE4GDY8Q9bMpiZowfilter_tmpl)(TTmplParser_hVXV9cC75rOvsaODz9bp1zeg* p);
N_NIMCALL(NIM_BOOL, endsWithOpr_PeZavdQq7bAHwH9b808pP4g)(NimStringDesc* x);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, equalMem_fmeFeLBvgmAHG9bC8ETS9bYQropes)(void* a, void* b, NI size);
N_NIMCALL(NI, hashString)(NimStringDesc* s);
N_NIMCALL(void, localError_VpilfPWbplGz6ny7O9cfr2g)(TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info, TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NIM_BOOL, contains_m1TSS3QwQPclQATuiRuVZg)(NimStringDesc* s, TY_nmiMWKVIe46vacnhAFrQvw_Set chars);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
N_NIMCALL(void, llStreamWrite_qahxCxkD1WgPXDAm4CZKqw)(TLLStream_IHsOGFu33dIY69a9bLlFHlHw* s, NIM_CHAR data);
N_NIMCALL(void, llStreamClose_TQe1mwqs39ccgay5ywsr9azw)(TLLStream_IHsOGFu33dIY69a9bLlFHlHw* s);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_2, "", 0);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_3, "subschar", 8);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_4, "metachar", 8);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_5, "emit", 4);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_6, "result.add", 10);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_7, "conc", 4);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_8, " & ", 3);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_9, "tostring", 8);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_10, "$", 1);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_11, "\012", 1);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_12, "end", 3);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_13, "if", 2);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_14, "when", 4);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_15, "try", 3);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_16, "while", 5);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_17, "for", 3);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_18, "block", 5);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_19, "case", 4);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_20, "proc", 4);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_21, "iterator", 8);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_22, "converter", 9);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_23, "macro", 5);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_24, "template", 8);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_25, "method", 6);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_26, "elif", 4);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_27, "of", 2);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_28, "else", 4);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_29, "except", 6);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_30, "finally", 7);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_31, "wLet", 4);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_32, "wVar", 4);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_33, "wConst", 6);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_34, "wType", 5);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_35, "#end", 4);
static NIM_CONST TY_nmiMWKVIe46vacnhAFrQvw_Set TM_paI0W78l0CRDBLjAHJxn6w_36 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_37, "\"", 1);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_38, "(\"", 2);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_39, "\\x", 2);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_40, "\\\\", 2);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_41, "\\\'", 2);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_42, "\\\"", 2);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_43, "}", 1);
STRING_LITERAL(TM_paI0W78l0CRDBLjAHJxn6w_44, "\\n\"", 3);

static N_INLINE(TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw, newLineInfo_ma5QosTA48Uq0vvBD9bm6fwfilter_tmpl)(NimStringDesc* filename, NI line, NI col) {
	TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw result;
	NI32 T1_;
	memset((void*)(&result), 0, sizeof(result));
	T1_ = (NI32)0;
	T1_ = fileInfoIdx_RXxXBoV2drjjVnQa9abo19cQ(filename);
	result = newLineInfo_Shbbzc11c9bnWkBc9b42npzA(T1_, line, col);
	return result;
}

N_NIMCALL(void, newLine_P1DA7WwGEY1zF3DfWYV6Pg)(TTmplParser_hVXV9cC75rOvsaODz9bp1zeg* p) {
	NimStringDesc* T1_;
	T1_ = (NimStringDesc*)0;
	T1_ = nsuRepeatChar(41, ((NI) ((*p).emitPar)));
	llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, T1_);
	(*p).emitPar = ((NI) 0);
	{
		if (!(((NI16) 1) < (*p).info.line)) goto LA4_;
		llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_11));
	}
	LA4_: ;
	{
		NimStringDesc* T10_;
		if (!(*p).pendingExprLine) goto LA8_;
		T10_ = (NimStringDesc*)0;
		T10_ = nsuRepeatChar(32, ((NI) 2));
		llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, T10_);
		(*p).pendingExprLine = NIM_FALSE;
	}
	LA8_: ;
}

N_NIMCALL(void, scanPar_UZozihWMkEBOt7RUxfUnzw)(TTmplParser_hVXV9cC75rOvsaODz9bp1zeg* p, NI d) {
	NI i;
	i = d;
	{
		while (1) {
			switch (((NU8)((*p).x->data[i]))) {
			case 0:
			{
				goto LA1;
			}
			break;
			case 40:
			{
				(*p).par += ((NI) 1);
			}
			break;
			case 41:
			{
				(*p).par -= ((NI) 1);
			}
			break;
			case 91:
			{
				(*p).bracket += ((NI) 1);
			}
			break;
			case 93:
			{
				(*p).bracket -= ((NI) 1);
			}
			break;
			case 123:
			{
				(*p).curly += ((NI) 1);
			}
			break;
			case 125:
			{
				(*p).curly -= ((NI) 1);
			}
			break;
			default:
			{
			}
			break;
			}
			i += ((NI) 1);
		}
	} LA1: ;
}

static N_INLINE(NIM_BOOL, withInExpr_mIMrfOlUE4GDY8Q9bMpiZowfilter_tmpl)(TTmplParser_hVXV9cC75rOvsaODz9bp1zeg* p) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	NIM_BOOL T2_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T2_ = (NIM_BOOL)0;
	T2_ = (((NI) 0) < (*p).par);
	if (T2_) goto LA3_;
	T2_ = (((NI) 0) < (*p).bracket);
	LA3_: ;
	T1_ = T2_;
	if (T1_) goto LA4_;
	T1_ = (((NI) 0) < (*p).curly);
	LA4_: ;
	result = T1_;
	return result;
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

N_NIMCALL(void, parseLine_Seop6SJMf7a68kj2jl0nsQ)(TTmplParser_hVXV9cC75rOvsaODz9bp1zeg* p) {
	NI j;
	j = ((NI) 0);
	{
		while (1) {
			if (!((NU8)((*p).x->data[j]) == (NU8)(32))) goto LA2;
			j += ((NI) 1);
		} LA2: ;
	}
	{
		NIM_BOOL T5_;
		T5_ = (NIM_BOOL)0;
		T5_ = ((NU8)((*p).x->data[((NI) 0)]) == (NU8)((*p).nimDirective));
		if (!(T5_)) goto LA6_;
		T5_ = ((NU8)((*p).x->data[((NI) 1)]) == (NU8)(63));
		LA6_: ;
		if (!T5_) goto LA7_;
		newLine_P1DA7WwGEY1zF3DfWYV6Pg(p);
	}
	goto LA3_;
	LA7_: ;
	{
		NI d;
		NimStringDesc* keyw;
		NIM_BOOL T16_;
		if (!((NU8)((*p).x->data[j]) == (NU8)((*p).nimDirective))) goto LA10_;
		newLine_P1DA7WwGEY1zF3DfWYV6Pg(p);
		j += ((NI) 1);
		{
			while (1) {
				if (!((NU8)((*p).x->data[j]) == (NU8)(32))) goto LA13;
				j += ((NI) 1);
			} LA13: ;
		}
		d = j;
		keyw = copyString(((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_2));
		{
			while (1) {
				if (!(((NU8)((*p).x->data[j])) >= ((NU8)(97)) && ((NU8)((*p).x->data[j])) <= ((NU8)(122)) || ((NU8)((*p).x->data[j])) >= ((NU8)(65)) && ((NU8)((*p).x->data[j])) <= ((NU8)(90)) || ((NU8)((*p).x->data[j])) >= ((NU8)(48)) && ((NU8)((*p).x->data[j])) <= ((NU8)(57)) || ((NU8)((*p).x->data[j])) >= ((NU8)(128)) && ((NU8)((*p).x->data[j])) <= ((NU8)(255)) || ((NU8)((*p).x->data[j])) == ((NU8)(46)) || ((NU8)((*p).x->data[j])) == ((NU8)(95)))) goto LA15;
				keyw = addChar(keyw, (*p).x->data[j]);
				j += ((NI) 1);
			} LA15: ;
		}
		scanPar_UZozihWMkEBOt7RUxfUnzw(p, j);
		T16_ = (NIM_BOOL)0;
		T16_ = withInExpr_mIMrfOlUE4GDY8Q9bMpiZowfilter_tmpl((&(*p)));
		if (T16_) goto LA17_;
		T16_ = endsWithOpr_PeZavdQq7bAHwH9b808pP4g((*p).x);
		LA17_: ;
		(*p).pendingExprLine = T16_;
		switch (hashString(keyw) & 31) {
		case 1: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_16))) goto LA19_;
break;
		case 3: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_27))) goto LA20_;
break;
		case 6: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_19))) goto LA19_;
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_23))) goto LA19_;
break;
		case 7: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_13))) goto LA19_;
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_25))) goto LA19_;
break;
		case 9: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_29))) goto LA20_;
break;
		case 10: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_20))) goto LA19_;
break;
		case 16: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_14))) goto LA19_;
break;
		case 17: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_21))) goto LA19_;
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_26))) goto LA20_;
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_32))) goto LA21_;
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_34))) goto LA21_;
break;
		case 18: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_24))) goto LA19_;
break;
		case 19: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_17))) goto LA19_;
break;
		case 21: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_28))) goto LA20_;
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_31))) goto LA21_;
break;
		case 23: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_12))) goto LA18_;
break;
		case 24: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_22))) goto LA19_;
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_30))) goto LA20_;
break;
		case 27: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_15))) goto LA19_;
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_33))) goto LA21_;
break;
		case 29: 
if (eqStrings(keyw, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_18))) goto LA19_;
break;
		}
		goto LA22_;
		LA18_: ;
		{
			NimStringDesc* T30_;
			{
				if (!(((NI) 2) <= (*p).indent)) goto LA27_;
				(*p).indent -= ((NI) 2);
			}
			goto LA25_;
			LA27_: ;
			{
				(*p).info.col = ((NI16) (j));
				localError_VpilfPWbplGz6ny7O9cfr2g((*p).info, ((TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw) 168), ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_12));
			}
			LA25_: ;
			T30_ = (NimStringDesc*)0;
			T30_ = nsuRepeatChar(32, ((NI) ((*p).indent)));
			llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, T30_);
			llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_35));
		}
		goto LA23_;
		LA19_: ;
		{
			NimStringDesc* T32_;
			NimStringDesc* T33_;
			T32_ = (NimStringDesc*)0;
			T32_ = nsuRepeatChar(32, ((NI) ((*p).indent)));
			llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, T32_);
			T33_ = (NimStringDesc*)0;
			T33_ = copyStr((*p).x, d);
			llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, T33_);
			(*p).indent += ((NI) 2);
		}
		goto LA23_;
		LA20_: ;
		{
			NimStringDesc* T35_;
			NimStringDesc* T36_;
			T35_ = (NimStringDesc*)0;
			T35_ = nsuRepeatChar(32, ((NI) ((NI)((*p).indent - ((NI) 2)))));
			llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, T35_);
			T36_ = (NimStringDesc*)0;
			T36_ = copyStr((*p).x, d);
			llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, T36_);
		}
		goto LA23_;
		LA21_: ;
		{
			NimStringDesc* T38_;
			NimStringDesc* T39_;
			T38_ = (NimStringDesc*)0;
			T38_ = nsuRepeatChar(32, ((NI) ((*p).indent)));
			llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, T38_);
			T39_ = (NimStringDesc*)0;
			T39_ = copyStr((*p).x, d);
			llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, T39_);
			{
				NIM_BOOL T42_;
				T42_ = (NIM_BOOL)0;
				T42_ = contains_m1TSS3QwQPclQATuiRuVZg((*p).x, TM_paI0W78l0CRDBLjAHJxn6w_36);
				if (!!(T42_)) goto LA43_;
				(*p).indent += ((NI) 2);
			}
			LA43_: ;
		}
		goto LA23_;
		LA22_: ;
		{
			NimStringDesc* T46_;
			NimStringDesc* T47_;
			T46_ = (NimStringDesc*)0;
			T46_ = nsuRepeatChar(32, ((NI) ((*p).indent)));
			llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, T46_);
			T47_ = (NimStringDesc*)0;
			T47_ = copyStr((*p).x, d);
			llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, T47_);
		}
		LA23_: ;
		(*p).state = ((TParseState_TMyoReN7VAtsUpVF9bL9cXRQ) 0);
	}
	goto LA3_;
	LA10_: ;
	{
		(*p).par = ((NI) 0);
		(*p).curly = ((NI) 0);
		(*p).bracket = ((NI) 0);
		j = ((NI) 0);
		switch ((*p).state) {
		case ((TParseState_TMyoReN7VAtsUpVF9bL9cXRQ) 1):
		{
			NimStringDesc* T50_;
			llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, (*p).conc);
			llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_11));
			T50_ = (NimStringDesc*)0;
			T50_ = nsuRepeatChar(32, ((NI) ((NI)((*p).indent + ((NI) 2)))));
			llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, T50_);
			llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_37));
		}
		break;
		case ((TParseState_TMyoReN7VAtsUpVF9bL9cXRQ) 0):
		{
			NimStringDesc* T52_;
			newLine_P1DA7WwGEY1zF3DfWYV6Pg(p);
			T52_ = (NimStringDesc*)0;
			T52_ = nsuRepeatChar(32, ((NI) ((*p).indent)));
			llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, T52_);
			llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, (*p).emit);
			llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_38));
			(*p).emitPar += ((NI) 1);
		}
		break;
		}
		(*p).state = ((TParseState_TMyoReN7VAtsUpVF9bL9cXRQ) 1);
		{
			while (1) {
				switch (((NU8)((*p).x->data[j]))) {
				case 0:
				{
					goto LA53;
				}
				break;
				case 1 ... 31:
				case 128 ... 255:
				{
					NimStringDesc* T57_;
					llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_39));
					T57_ = (NimStringDesc*)0;
					T57_ = nsuToHex(((NI64) (((NU8)((*p).x->data[j])))), ((NI) 2));
					llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, T57_);
					j += ((NI) 1);
				}
				break;
				case 92:
				{
					llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_40));
					j += ((NI) 1);
				}
				break;
				case 39:
				{
					llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_41));
					j += ((NI) 1);
				}
				break;
				case 34:
				{
					llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_42));
					j += ((NI) 1);
				}
				break;
				default:
				{
					{
						if (!((NU8)((*p).x->data[j]) == (NU8)((*p).subsChar))) goto LA64_;
						j += ((NI) 1);
						switch (((NU8)((*p).x->data[j]))) {
						case 123:
						{
							NI curly;
							(*p).info.col = ((NI16) (j));
							llStreamWrite_qahxCxkD1WgPXDAm4CZKqw((*p).outp, 34);
							llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, (*p).conc);
							llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, (*p).toStr);
							llStreamWrite_qahxCxkD1WgPXDAm4CZKqw((*p).outp, 40);
							j += ((NI) 1);
							curly = ((NI) 0);
							{
								while (1) {
									switch (((NU8)((*p).x->data[j]))) {
									case 0:
									{
										localError_VpilfPWbplGz6ny7O9cfr2g((*p).info, ((TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw) 194), ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_43));
										goto LA67;
									}
									break;
									case 123:
									{
										j += ((NI) 1);
										curly += ((NI) 1);
										llStreamWrite_qahxCxkD1WgPXDAm4CZKqw((*p).outp, 123);
									}
									break;
									case 125:
									{
										j += ((NI) 1);
										{
											if (!(curly == ((NI) 0))) goto LA74_;
											goto LA67;
										}
										LA74_: ;
										{
											if (!(((NI) 0) < curly)) goto LA78_;
											curly -= ((NI) 1);
										}
										LA78_: ;
										llStreamWrite_qahxCxkD1WgPXDAm4CZKqw((*p).outp, 125);
									}
									break;
									default:
									{
										llStreamWrite_qahxCxkD1WgPXDAm4CZKqw((*p).outp, (*p).x->data[j]);
										j += ((NI) 1);
									}
									break;
									}
								}
							} LA67: ;
							llStreamWrite_qahxCxkD1WgPXDAm4CZKqw((*p).outp, 41);
							llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, (*p).conc);
							llStreamWrite_qahxCxkD1WgPXDAm4CZKqw((*p).outp, 34);
						}
						break;
						case 97 ... 122:
						case 65 ... 90:
						case 128 ... 255:
						{
							llStreamWrite_qahxCxkD1WgPXDAm4CZKqw((*p).outp, 34);
							llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, (*p).conc);
							llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, (*p).toStr);
							llStreamWrite_qahxCxkD1WgPXDAm4CZKqw((*p).outp, 40);
							{
								while (1) {
									if (!(((NU8)((*p).x->data[j])) >= ((NU8)(97)) && ((NU8)((*p).x->data[j])) <= ((NU8)(122)) || ((NU8)((*p).x->data[j])) >= ((NU8)(65)) && ((NU8)((*p).x->data[j])) <= ((NU8)(90)) || ((NU8)((*p).x->data[j])) >= ((NU8)(48)) && ((NU8)((*p).x->data[j])) <= ((NU8)(57)) || ((NU8)((*p).x->data[j])) >= ((NU8)(128)) && ((NU8)((*p).x->data[j])) <= ((NU8)(255)) || ((NU8)((*p).x->data[j])) == ((NU8)(46)) || ((NU8)((*p).x->data[j])) == ((NU8)(95)))) goto LA83;
									llStreamWrite_qahxCxkD1WgPXDAm4CZKqw((*p).outp, (*p).x->data[j]);
									j += ((NI) 1);
								} LA83: ;
							}
							llStreamWrite_qahxCxkD1WgPXDAm4CZKqw((*p).outp, 41);
							llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, (*p).conc);
							llStreamWrite_qahxCxkD1WgPXDAm4CZKqw((*p).outp, 34);
						}
						break;
						default:
						{
							{
								if (!((NU8)((*p).x->data[j]) == (NU8)((*p).subsChar))) goto LA87_;
								llStreamWrite_qahxCxkD1WgPXDAm4CZKqw((*p).outp, (*p).subsChar);
								j += ((NI) 1);
							}
							goto LA85_;
							LA87_: ;
							{
								(*p).info.col = ((NI16) (j));
								localError_VpilfPWbplGz6ny7O9cfr2g((*p).info, ((TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw) 172), ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_10));
							}
							LA85_: ;
						}
						break;
						}
					}
					goto LA62_;
					LA64_: ;
					{
						llStreamWrite_qahxCxkD1WgPXDAm4CZKqw((*p).outp, (*p).x->data[j]);
						j += ((NI) 1);
					}
					LA62_: ;
				}
				break;
				}
			}
		} LA53: ;
		llStreamWrite_p1fwzwO1YKdwAKg6V27RTw((*p).outp, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_44));
	}
	LA3_: ;
}

N_NIMCALL(TLLStream_IHsOGFu33dIY69a9bLlFHlHw*, filterTmpl_JvVu6X7Xrt789cwD0XA6mWg)(TLLStream_IHsOGFu33dIY69a9bLlFHlHw* stdin_0, NimStringDesc* filename, TNode_bROa11lyF5vxEN9aYNbHmhw* call) {
	TLLStream_IHsOGFu33dIY69a9bLlFHlHw* result;
	TTmplParser_hVXV9cC75rOvsaODz9bp1zeg p;
	result = (TLLStream_IHsOGFu33dIY69a9bLlFHlHw*)0;
	memset((void*)(&p), 0, sizeof(p));
	p.info = newLineInfo_ma5QosTA48Uq0vvBD9bm6fwfilter_tmpl(filename, ((NI) 0), ((NI) 0));
	p.outp = llStreamOpen_HQSZA6kzdilYF0Pf022dhA(((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_2));
	p.inp = stdin_0;
	p.subsChar = charArg_9a2s5yGJN0q64pYjhEbI1pQ(call, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_3), ((NI) 1), 36);
	p.nimDirective = charArg_9a2s5yGJN0q64pYjhEbI1pQ(call, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_4), ((NI) 2), 35);
	p.emit = strArg_hrsET2VpzHuUBdZObITwmQ(call, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_5), ((NI) 3), ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_6));
	p.conc = strArg_hrsET2VpzHuUBdZObITwmQ(call, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_7), ((NI) 4), ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_8));
	p.toStr = strArg_hrsET2VpzHuUBdZObITwmQ(call, ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_9), ((NI) 5), ((NimStringDesc*) &TM_paI0W78l0CRDBLjAHJxn6w_10));
	p.x = rawNewString(((NI) 120));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = llStreamReadLine_Qwm1ilRhcaI3znjOGn4xBg(p.inp, (&p.x));
		if (!T3_) goto LA4_;
		p.info.line = (NI16)(p.info.line + ((NI16) 1));
	}
	LA4_: ;
	{
		while (1) {
			NIM_BOOL T8_;
			T8_ = (NIM_BOOL)0;
			T8_ = llStreamReadLine_Qwm1ilRhcaI3znjOGn4xBg(p.inp, (&p.x));
			if (!T8_) goto LA7;
			p.info.line = (NI16)(p.info.line + ((NI16) 1));
			parseLine_Seop6SJMf7a68kj2jl0nsQ((&p));
		} LA7: ;
	}
	newLine_P1DA7WwGEY1zF3DfWYV6Pg((&p));
	result = p.outp;
	llStreamClose_TQe1mwqs39ccgay5ywsr9azw(p.inp);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_filter_tmplInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_filter_tmplDatInit000)(void) {
}
