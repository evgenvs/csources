/* Generated by Nim Compiler v0.17.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#undef linux
#undef near
typedef struct TNode_bROa11lyF5vxEN9aYNbHmhw TNode_bROa11lyF5vxEN9aYNbHmhw;
typedef struct TType_LTUWCZolpovw9cWE3JBWSUw TType_LTUWCZolpovw9cWE3JBWSUw;
typedef struct TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TSym_AXG7xcvKqaxY6koRX1xkCw TSym_AXG7xcvKqaxY6koRX1xkCw;
typedef struct TIdent_4umxGerWTHGPwUms7Yqu3g TIdent_4umxGerWTHGPwUms7Yqu3g;
typedef struct TY_ehmV9bTklH2Gt9cXHV9c0HLeQ TY_ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct TIdObj_raN9cHVgzmvaXisezY9aGg9cg TIdObj_raN9cHVgzmvaXisezY9aGg9cg;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY_zuqP4Riz26Oi5fWgPYVEgA TY_zuqP4Riz26Oi5fWgPYVEgA;
typedef struct TY_DXS6mEo7PVUFJkirsQ9bNQA TY_DXS6mEo7PVUFJkirsQ9bNQA;
typedef struct TStrTable_f07aOS3dr28kGa5wcE29aFA TStrTable_f07aOS3dr28kGa5wcE29aFA;
typedef struct TY_sksVpmPRIkNR9axiwtD1Guw TY_sksVpmPRIkNR9axiwtD1Guw;
typedef struct TLoc_EtHNvCB0bgfu9bFjzx9cb6aA TLoc_EtHNvCB0bgfu9bFjzx9cb6aA;
typedef struct RopeObj_HF4qJnb6xiOddgPmsxodtQ RopeObj_HF4qJnb6xiOddgPmsxodtQ;
typedef struct TLib_NBMxlJ6g3utqUlplqTTHkA TLib_NBMxlJ6g3utqUlplqTTHkA;
typedef struct IntSet_PQrmFm4BXFkFSVOUl1ojSg IntSet_PQrmFm4BXFkFSVOUl1ojSg;
typedef struct Trunk_ul49aWfv9aes8cutmeltT3gQ Trunk_ul49aWfv9aes8cutmeltT3gQ;
typedef struct TY_9brg1xNurxcus33lU4IE1Dw TY_9brg1xNurxcus33lU4IE1Dw;
typedef struct TY_iGkpo9aKQdr3NWelKC4cnJA TY_iGkpo9aKQdr3NWelKC4cnJA;
typedef struct TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA;
typedef struct TY_a09bGTAl9ceOKTAytYdkbyKg TY_a09bGTAl9ceOKTAytYdkbyKg;
typedef NU8 TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w;
struct  TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw  {
NI16 line;
NI16 col;
NI32 fileIndex;
};
typedef NU16 TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg_Set;
typedef NU8 TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
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
struct  TIdObj_raN9cHVgzmvaXisezY9aGg9cg  {
  TNimObject Sup;
NI id;
};
typedef NU8 TSymKind_cNCW9acsSznmEccl1fgQwkw;
struct  TStrTable_f07aOS3dr28kGa5wcE29aFA  {
NI counter;
TY_sksVpmPRIkNR9axiwtD1Guw* data;
};
typedef NU16 TMagic_shZhZOdbVC5nnFvcXQAImg;
typedef NU64 TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw_Set;
typedef NU32 TOption_WspMeQySXNP2XoTWR5MTgg_Set;
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
struct  IntSet_PQrmFm4BXFkFSVOUl1ojSg  {
NI counter;
NI max;
Trunk_ul49aWfv9aes8cutmeltT3gQ* head;
TY_9brg1xNurxcus33lU4IE1Dw* data;
};
typedef NU8 TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag;
typedef NU8 TCallingConvention_yjAJ8w0h1PBaSwSGJ3P7IA;
typedef NU64 TTypeFlag_x2m5g1NpbmDig4wLT3Ylhw_Set;
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
typedef NU8 TDistinctCompare_9bNKHGs63atuMFXnAleTveg;
typedef NU8 TTypeCmpFlag_72pgRXSg7774cr9aCWVPORw_Set;
typedef NU64 TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag_Set;
struct  TIdent_4umxGerWTHGPwUms7Yqu3g  {
  TIdObj_raN9cHVgzmvaXisezY9aGg9cg Sup;
NimStringDesc* s;
TIdent_4umxGerWTHGPwUms7Yqu3g* next;
NI h;
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
typedef NI TY_9agrCtWKhCnWWMJpKKugJag[16];
struct  Trunk_ul49aWfv9aes8cutmeltT3gQ  {
Trunk_ul49aWfv9aes8cutmeltT3gQ* next;
NI key;
TY_9agrCtWKhCnWWMJpKKugJag bits;
};
struct TY_a09bGTAl9ceOKTAytYdkbyKg {
NI Field0;
TSym_AXG7xcvKqaxY6koRX1xkCw* Field1;
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
struct TY_DXS6mEo7PVUFJkirsQ9bNQA {
  TGenericSeq Sup;
  TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA* data[SEQ_DECL_SIZE];
};
struct TY_sksVpmPRIkNR9axiwtD1Guw {
  TGenericSeq Sup;
  TSym_AXG7xcvKqaxY6koRX1xkCw* data[SEQ_DECL_SIZE];
};
struct TY_9brg1xNurxcus33lU4IE1Dw {
  TGenericSeq Sup;
  Trunk_ul49aWfv9aes8cutmeltT3gQ* data[SEQ_DECL_SIZE];
};
struct TY_iGkpo9aKQdr3NWelKC4cnJA {
  TGenericSeq Sup;
  TY_a09bGTAl9ceOKTAytYdkbyKg data[SEQ_DECL_SIZE];
};
N_NIMCALL(TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w, isPartOf_u09cNzf0XUG9bfJ6APE4BeUw)(TType_LTUWCZolpovw9cWE3JBWSUw* a, TType_LTUWCZolpovw9cWE3JBWSUw* b);
N_NIMCALL(void, initIntSet_a9a80eJplB17xrdZJ41Baww)(IntSet_PQrmFm4BXFkFSVOUl1ojSg* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w, isPartOfAux_J1LKkswOWytqHgN0uw2sxg)(TType_LTUWCZolpovw9cWE3JBWSUw* a, TType_LTUWCZolpovw9cWE3JBWSUw* b, IntSet_PQrmFm4BXFkFSVOUl1ojSg* marker);
N_NIMCALL(NIM_BOOL, containsOrIncl_B0EhVMrh5BBBZOOtYjAvVg)(IntSet_PQrmFm4BXFkFSVOUl1ojSg* s, NI key);
N_NIMCALL(NIM_BOOL, compareTypes_Wiat9a9c5vPvjDreVawQ2qgA)(TType_LTUWCZolpovw9cWE3JBWSUw* x, TType_LTUWCZolpovw9cWE3JBWSUw* y, TDistinctCompare_9bNKHGs63atuMFXnAleTveg cmp, TTypeCmpFlag_72pgRXSg7774cr9aCWVPORw_Set flags);
N_NIMCALL(TType_LTUWCZolpovw9cWE3JBWSUw*, skipTypes_pLCdCGDuirMe9cspwviV9aVA)(TType_LTUWCZolpovw9cWE3JBWSUw* t, TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag_Set kinds);
N_NIMCALL(TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w, isPartOfAux_DGcZvjcCgNIoFFnEYkWJWw)(TNode_bROa11lyF5vxEN9aYNbHmhw* n, TType_LTUWCZolpovw9cWE3JBWSUw* b, IntSet_PQrmFm4BXFkFSVOUl1ojSg* marker);
N_NIMCALL(NI, sonsLen_qPWPHw7WgJeEVYUdcaRIig)(TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_NIMCALL(TNode_bROa11lyF5vxEN9aYNbHmhw*, lastSon_esDJA7239bJDiq4UrX9aHCjg)(TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_NIMCALL(void, internalError_5XY9cUy7hZmUusM38U9cYYdw)(NimStringDesc* errMsg);
N_NIMCALL(void, internalError_MXmtqrCmYwtOPkDCFgUWKQ)(TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info, NimStringDesc* errMsg);
N_NIMCALL(TType_LTUWCZolpovw9cWE3JBWSUw*, lastSon_E41DMKHtT9c6sAMyyvhmSIw)(TType_LTUWCZolpovw9cWE3JBWSUw* n);
N_NIMCALL(NI, sonsLen_gG7hUAX9cA629ahMLVL3xN4w)(TType_LTUWCZolpovw9cWE3JBWSUw* n);
N_NIMCALL(TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w, isPartOf_1otDDZAmvFsmbqPyFytXFg)(TNode_bROa11lyF5vxEN9aYNbHmhw* a, TNode_bROa11lyF5vxEN9aYNbHmhw* b);
static N_INLINE(NI, len_CdME9baJhvveuPEDZE9bXoxAlambdalifting)(TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_NIMCALL(NIM_BOOL, isDeepConstExpr_FTbvAnf1y9b9c3Krp9bsHDTiw_2)(TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_NIMCALL(NIM_BOOL, sameValue_1Qdwg1ZguEjbL3mmgPJD3w)(TNode_bROa11lyF5vxEN9aYNbHmhw* a, TNode_bROa11lyF5vxEN9aYNbHmhw* b);
STRING_LITERAL(TM_1vgML9aM876J0EHbm6P1O8A_2, "isPartOfAux(record case branch)", 31);
STRING_LITERAL(TM_1vgML9aM876J0EHbm6P1O8A_3, "isPartOfAux()", 13);

N_NIMCALL(TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w, isPartOfAux_DGcZvjcCgNIoFFnEYkWJWw)(TNode_bROa11lyF5vxEN9aYNbHmhw* n, TType_LTUWCZolpovw9cWE3JBWSUw* b, IntSet_PQrmFm4BXFkFSVOUl1ojSg* marker) {
	TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w result;
{	result = (TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w)0;
	result = ((TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0);
	switch ((*n).kind) {
	case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 138):
	{
		{
			NI i;
			NI colontmp_;
			NI T3_;
			NI res;
			i = (NI)0;
			colontmp_ = (NI)0;
			T3_ = (NI)0;
			T3_ = sonsLen_qPWPHw7WgJeEVYUdcaRIig(n);
			colontmp_ = (NI)(T3_ - ((NI) 1));
			res = ((NI) 0);
			{
				while (1) {
					if (!(res <= colontmp_)) goto LA5;
					i = res;
					result = isPartOfAux_DGcZvjcCgNIoFFnEYkWJWw((*n).kindU.S6.sons->data[i], b, marker);
					{
						if (!(result == ((TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 2))) goto LA8_;
						goto BeforeRet_;
					}
					LA8_: ;
					res += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 139):
	{
		result = isPartOfAux_DGcZvjcCgNIoFFnEYkWJWw((*n).kindU.S6.sons->data[((NI) 0)], b, marker);
		{
			if (!(result == ((TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 2))) goto LA13_;
			goto BeforeRet_;
		}
		LA13_: ;
		{
			NI i_2;
			NI colontmp__2;
			NI T16_;
			NI res_2;
			i_2 = (NI)0;
			colontmp__2 = (NI)0;
			T16_ = (NI)0;
			T16_ = sonsLen_qPWPHw7WgJeEVYUdcaRIig(n);
			colontmp__2 = (NI)(T16_ - ((NI) 1));
			res_2 = ((NI) 1);
			{
				while (1) {
					if (!(res_2 <= colontmp__2)) goto LA18;
					i_2 = res_2;
					switch ((*(*n).kindU.S6.sons->data[i_2]).kind) {
					case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 85):
					case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 88):
					{
						TNode_bROa11lyF5vxEN9aYNbHmhw* T20_;
						T20_ = (TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
						T20_ = lastSon_esDJA7239bJDiq4UrX9aHCjg((*n).kindU.S6.sons->data[i_2]);
						result = isPartOfAux_DGcZvjcCgNIoFFnEYkWJWw(T20_, b, marker);
						{
							if (!(result == ((TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 2))) goto LA23_;
							goto BeforeRet_;
						}
						LA23_: ;
					}
					break;
					default:
					{
						internalError_5XY9cUy7hZmUusM38U9cYYdw(((NimStringDesc*) &TM_1vgML9aM876J0EHbm6P1O8A_2));
					}
					break;
					}
					res_2 += ((NI) 1);
				} LA18: ;
			}
		}
	}
	break;
	case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 3):
	{
		result = isPartOfAux_J1LKkswOWytqHgN0uw2sxg((*(*n).kindU.S4.sym).typ, b, marker);
	}
	break;
	default:
	{
		internalError_MXmtqrCmYwtOPkDCFgUWKQ((*n).info, ((NimStringDesc*) &TM_1vgML9aM876J0EHbm6P1O8A_3));
	}
	break;
	}
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w, isPartOfAux_J1LKkswOWytqHgN0uw2sxg)(TType_LTUWCZolpovw9cWE3JBWSUw* a, TType_LTUWCZolpovw9cWE3JBWSUw* b, IntSet_PQrmFm4BXFkFSVOUl1ojSg* marker) {
	TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w result;
{	result = (TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w)0;
	result = ((TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0);
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (a == NIM_NIL);
		if (T3_) goto LA4_;
		T3_ = (b == NIM_NIL);
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	{
		NIM_BOOL T9_;
		T9_ = (NIM_BOOL)0;
		T9_ = containsOrIncl_B0EhVMrh5BBBZOOtYjAvVg(marker, (*a).Sup.id);
		if (!T9_) goto LA10_;
		goto BeforeRet_;
	}
	LA10_: ;
	{
		NIM_BOOL T14_;
		T14_ = (NIM_BOOL)0;
		T14_ = compareTypes_Wiat9a9c5vPvjDreVawQ2qgA(a, b, ((TDistinctCompare_9bNKHGs63atuMFXnAleTveg) 1), 0);
		if (!T14_) goto LA15_;
		result = ((TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 2);
		goto BeforeRet_;
	}
	LA15_: ;
	switch ((*a).kind) {
	case ((TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag) 17):
	{
		{
			TType_LTUWCZolpovw9cWE3JBWSUw* T22_;
			if (!!(((*a).sons->data[((NI) 0)] == NIM_NIL))) goto LA20_;
			T22_ = (TType_LTUWCZolpovw9cWE3JBWSUw*)0;
			T22_ = skipTypes_pLCdCGDuirMe9cspwviV9aVA((*a).sons->data[((NI) 0)], IL64(36028797033646352));
			result = isPartOfAux_J1LKkswOWytqHgN0uw2sxg(T22_, b, marker);
		}
		LA20_: ;
		{
			if (!(result == ((TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0))) goto LA25_;
			result = isPartOfAux_DGcZvjcCgNIoFFnEYkWJWw((*a).n, b, marker);
		}
		LA25_: ;
	}
	break;
	case ((TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag) 11):
	case ((TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag) 13):
	case ((TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag) 4):
	{
		TType_LTUWCZolpovw9cWE3JBWSUw* T28_;
		T28_ = (TType_LTUWCZolpovw9cWE3JBWSUw*)0;
		T28_ = lastSon_E41DMKHtT9c6sAMyyvhmSIw(a);
		result = isPartOfAux_J1LKkswOWytqHgN0uw2sxg(T28_, b, marker);
	}
	break;
	case ((TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag) 16):
	case ((TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag) 19):
	case ((TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag) 18):
	{
		{
			NI i;
			NI colontmp_;
			NI T31_;
			NI res;
			i = (NI)0;
			colontmp_ = (NI)0;
			T31_ = (NI)0;
			T31_ = sonsLen_gG7hUAX9cA629ahMLVL3xN4w(a);
			colontmp_ = (NI)(T31_ - ((NI) 1));
			res = ((NI) 0);
			{
				while (1) {
					if (!(res <= colontmp_)) goto LA33;
					i = res;
					result = isPartOfAux_J1LKkswOWytqHgN0uw2sxg((*a).sons->data[i], b, marker);
					{
						if (!(result == ((TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 2))) goto LA36_;
						goto BeforeRet_;
					}
					LA36_: ;
					res += ((NI) 1);
				} LA33: ;
			}
		}
	}
	break;
	default:
	{
	}
	break;
	}
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w, isPartOf_u09cNzf0XUG9bfJ6APE4BeUw)(TType_LTUWCZolpovw9cWE3JBWSUw* a, TType_LTUWCZolpovw9cWE3JBWSUw* b) {
	TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w result;
	IntSet_PQrmFm4BXFkFSVOUl1ojSg marker;
	result = (TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w)0;
	memset((void*)(&marker), 0, sizeof(marker));
	chckNil((void*)(&marker));
	memset((void*)(&marker), 0, sizeof(marker));
	initIntSet_a9a80eJplB17xrdZJ41Baww((&marker));
	result = isPartOfAux_J1LKkswOWytqHgN0uw2sxg(b, a, (&marker));
	return result;
}

static N_INLINE(NI, len_CdME9baJhvveuPEDZE9bXoxAlambdalifting)(TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	NI result;
	result = (NI)0;
	{
		if (!((*n).kindU.S6.sons == 0)) goto LA3_;
		result = ((NI) 0);
	}
	goto LA1_;
	LA3_: ;
	{
		result = ((*n).kindU.S6.sons ? (*n).kindU.S6.sons->Sup.len : 0);
	}
	LA1_: ;
	return result;
}

N_NIMCALL(TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w, isPartOf_1otDDZAmvFsmbqPyFytXFg)(TNode_bROa11lyF5vxEN9aYNbHmhw* a, TNode_bROa11lyF5vxEN9aYNbHmhw* b) {
	TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w result;
	result = (TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w)0;
	{
		if (!((*a).kind == (*b).kind)) goto LA3_;
		switch ((*a).kind) {
		case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 3):
		{
			{
				if (!((*(*a).kindU.S4.sym).Sup.id == (*(*b).kindU.S4.sym).Sup.id)) goto LA8_;
				result = ((TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 2);
			}
			goto LA6_;
			LA8_: ;
			{
				NIM_BOOL T11_;
				T11_ = (NIM_BOOL)0;
				T11_ = ((4384 &(1U<<((NU)((*(*a).kindU.S4.sym).kind)&31U)))!=0);
				if (T11_) goto LA12_;
				T11_ = ((4384 &(1U<<((NU)((*(*b).kindU.S4.sym).kind)&31U)))!=0);
				LA12_: ;
				if (!T11_) goto LA13_;
				result = ((TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0);
			}
			goto LA6_;
			LA13_: ;
			{
				{
					TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w T18_;
					T18_ = (TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w)0;
					T18_ = isPartOf_u09cNzf0XUG9bfJ6APE4BeUw((*(*a).kindU.S4.sym).typ, (*(*b).kindU.S4.sym).typ);
					if (!!((T18_ == ((TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0)))) goto LA19_;
					result = ((TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 1);
				}
				LA19_: ;
			}
			LA6_: ;
		}
		break;
		case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 42):
		{
			result = isPartOf_1otDDZAmvFsmbqPyFytXFg((*a).kindU.S6.sons->data[((NI) 0)], (*b).kindU.S6.sons->data[((NI) 0)]);
			{
				NIM_BOOL T24_;
				NI T25_;
				NI T27_;
				T24_ = (NIM_BOOL)0;
				T25_ = (NI)0;
				T25_ = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting(a);
				T24_ = (((NI) 2) <= T25_);
				if (!(T24_)) goto LA26_;
				T27_ = (NI)0;
				T27_ = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting(b);
				T24_ = (((NI) 2) <= T27_);
				LA26_: ;
				if (!T24_) goto LA28_;
				{
					NIM_BOOL T32_;
					NIM_BOOL T33_;
					TNode_bROa11lyF5vxEN9aYNbHmhw* x;
					TNode_bROa11lyF5vxEN9aYNbHmhw* y;
					T32_ = (NIM_BOOL)0;
					T33_ = (NIM_BOOL)0;
					T33_ = (result == ((TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 2));
					if (!(T33_)) goto LA34_;
					T33_ = isDeepConstExpr_FTbvAnf1y9b9c3Krp9bsHDTiw_2((*a).kindU.S6.sons->data[((NI) 1)]);
					LA34_: ;
					T32_ = T33_;
					if (!(T32_)) goto LA35_;
					T32_ = isDeepConstExpr_FTbvAnf1y9b9c3Krp9bsHDTiw_2((*b).kindU.S6.sons->data[((NI) 1)]);
					LA35_: ;
					if (!T32_) goto LA36_;
					{
						if (!((*(*a).kindU.S6.sons->data[((NI) 1)]).kind == ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 58))) goto LA40_;
						x = (*(*a).kindU.S6.sons->data[((NI) 1)]).kindU.S6.sons->data[((NI) 1)];
					}
					goto LA38_;
					LA40_: ;
					{
						x = (*a).kindU.S6.sons->data[((NI) 1)];
					}
					LA38_: ;
					{
						if (!((*(*b).kindU.S6.sons->data[((NI) 1)]).kind == ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 58))) goto LA45_;
						y = (*(*b).kindU.S6.sons->data[((NI) 1)]).kindU.S6.sons->data[((NI) 1)];
					}
					goto LA43_;
					LA45_: ;
					{
						y = (*b).kindU.S6.sons->data[((NI) 1)];
					}
					LA43_: ;
					{
						NIM_BOOL T50_;
						T50_ = (NIM_BOOL)0;
						T50_ = sameValue_1Qdwg1ZguEjbL3mmgPJD3w(x, y);
						if (!T50_) goto LA51_;
						result = ((TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 2);
					}
					goto LA48_;
					LA51_: ;
					{
						result = ((TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0);
					}
					LA48_: ;
				}
				LA36_: ;
			}
			goto LA22_;
			LA28_: ;
			{
				{
					if (!!((result == ((TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 2)))) goto LA57_;
					{
						TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w T61_;
						T61_ = (TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w)0;
						T61_ = isPartOf_u09cNzf0XUG9bfJ6APE4BeUw((*a).typ, (*b).typ);
						if (!!((T61_ == ((TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0)))) goto LA62_;
						result = ((TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 1);
					}
					LA62_: ;
				}
				LA57_: ;
			}
			LA22_: ;
		}
		break;
		case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 45):
		{
			result = isPartOf_1otDDZAmvFsmbqPyFytXFg((*a).kindU.S6.sons->data[((NI) 0)], (*b).kindU.S6.sons->data[((NI) 0)]);
			{
				if (!!((result == ((TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0)))) goto LA67_;
				{
					if (!!(((*(*(*a).kindU.S6.sons->data[((NI) 1)]).kindU.S4.sym).Sup.id == (*(*(*b).kindU.S6.sons->data[((NI) 1)]).kindU.S4.sym).Sup.id))) goto LA71_;
					result = ((TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0);
				}
				LA71_: ;
			}
			LA67_: ;
		}
		break;
		case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 65):
		case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 47):
		{
			result = isPartOf_1otDDZAmvFsmbqPyFytXFg((*a).kindU.S6.sons->data[((NI) 0)], (*b).kindU.S6.sons->data[((NI) 0)]);
			{
				if (!!((result == ((TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 2)))) goto LA76_;
				{
					TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w T80_;
					T80_ = (TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w)0;
					T80_ = isPartOf_u09cNzf0XUG9bfJ6APE4BeUw((*a).typ, (*b).typ);
					if (!!((T80_ == ((TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0)))) goto LA81_;
					result = ((TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 1);
				}
				LA81_: ;
			}
			LA76_: ;
		}
		break;
		case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 58):
		case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 59):
		case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 60):
		{
			result = isPartOf_1otDDZAmvFsmbqPyFytXFg((*a).kindU.S6.sons->data[((NI) 1)], (*b).kindU.S6.sons->data[((NI) 1)]);
		}
		break;
		case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 67):
		case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 66):
		case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 46):
		{
			result = isPartOf_1otDDZAmvFsmbqPyFytXFg((*a).kindU.S6.sons->data[((NI) 0)], (*b).kindU.S6.sons->data[((NI) 0)]);
		}
		break;
		default:
		{
		}
		break;
		}
	}
	goto LA1_;
	LA3_: ;
	{
		switch ((*b).kind) {
		case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 45):
		case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 42):
		case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 67):
		case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 66):
		case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 46):
		case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 64):
		{
			result = isPartOf_1otDDZAmvFsmbqPyFytXFg(a, (*b).kindU.S6.sons->data[((NI) 0)]);
		}
		break;
		case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 65):
		case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 47):
		{
			{
				TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w T91_;
				T91_ = (TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w)0;
				T91_ = isPartOf_u09cNzf0XUG9bfJ6APE4BeUw((*a).typ, (*b).typ);
				if (!!((T91_ == ((TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0)))) goto LA92_;
				result = isPartOf_1otDDZAmvFsmbqPyFytXFg(a, (*b).kindU.S6.sons->data[((NI) 0)]);
				{
					if (!(result == ((TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0))) goto LA96_;
					result = ((TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 1);
				}
				LA96_: ;
			}
			LA92_: ;
		}
		break;
		case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 58):
		case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 59):
		case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 60):
		{
			result = isPartOf_1otDDZAmvFsmbqPyFytXFg(a, (*b).kindU.S6.sons->data[((NI) 1)]);
		}
		break;
		case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 3):
		{
			switch ((*a).kind) {
			case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 45):
			case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 42):
			case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 67):
			case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 66):
			case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 46):
			case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 64):
			{
				result = isPartOf_1otDDZAmvFsmbqPyFytXFg((*a).kindU.S6.sons->data[((NI) 0)], b);
			}
			break;
			case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 58):
			case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 59):
			case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 60):
			{
				result = isPartOf_1otDDZAmvFsmbqPyFytXFg((*a).kindU.S6.sons->data[((NI) 1)], b);
			}
			break;
			case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 65):
			case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 47):
			{
				{
					TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w T105_;
					T105_ = (TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w)0;
					T105_ = isPartOf_u09cNzf0XUG9bfJ6APE4BeUw((*a).typ, (*b).typ);
					if (!!((T105_ == ((TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0)))) goto LA106_;
					result = isPartOf_1otDDZAmvFsmbqPyFytXFg((*a).kindU.S6.sons->data[((NI) 0)], b);
					{
						if (!(result == ((TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0))) goto LA110_;
						result = ((TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 1);
					}
					LA110_: ;
				}
				LA106_: ;
			}
			break;
			default:
			{
			}
			break;
			}
		}
		break;
		default:
		{
		}
		break;
		}
	}
	LA1_: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_aliasesInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_aliasesDatInit000)(void) {
}
