/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, i386, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/john/code/Nim/lib -o /media/sf_D_DRIVE/Work/Code/nim-raytracer/src/src/nimcache/stdlib_macros.o /media/sf_D_DRIVE/Work/Code/nim-raytracer/src/src/nimcache/stdlib_macros.c */
#define NIM_INTBITS 32

#include "nimbase.h"
typedef struct Nimnodeobj91604 Nimnodeobj91604;
typedef struct Nimsymobj112460 Nimsymobj112460;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef NU8 Nimnodekind112203Set[20];
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 Nimnodekind112203;
typedef NU8 Tnimkind3203;
typedef NU8 Tnimtypeflag3209Set;
typedef N_NIMCALL_PTR(void, TY3289) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p0);
struct  TNimType  {
NI size;
Tnimkind3203 kind;
Tnimtypeflag3209Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
typedef NU8 Tnimnodekind3205;
struct  TNimNode  {
Tnimnodekind3205 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Nimnodeobj91604  {
char dummy;
};
struct  Nimsymobj112460  {
char dummy;
};
N_NIMCALL(Nimnodeobj91604*, getimpl_112597_2552477683)(Nimsymobj112460* s0);
static N_INLINE(void, nimFrame)(TFrame* s0);
N_NOINLINE(void, stackoverflow_21201_1689653243)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NimStringDesc*, HEX24_113378_1689653243)(Nimnodekind112203Set x0);
N_NIMCALL(NimStringDesc*, collectiontostring_113386_1689653243)(Nimnodekind112203Set x0, NimStringDesc* b0, NimStringDesc* e0);
N_NIMCALL(NI, cmpignorestyle_115206_2552477683)(NCSTRING a0, NCSTRING b0);
static N_INLINE(NI, addInt)(NI a0, NI b0);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NIM_CHAR, tolower_115211_2552477683)(NIM_CHAR c0);
static N_INLINE(NI, chckRange)(NI i0, NI a0, NI b0);
N_NOINLINE(void, raiseRangeError)(NI64 val0);
static N_INLINE(NI, subInt)(NI a0, NI b0);
N_NIMCALL(NIM_BOOL, eqident_115312_2552477683)(NimStringDesc* a0, NimStringDesc* b0);
NIM_CONST Nimnodekind112203Set nnkliterals_112470_2552477683 = {
0xE0, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
NIM_CONST Nimnodekind112203Set nnkcallkinds_112472_2552477683 = {
0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
NIM_CONST Nimnodekind112203Set Routinenodes_113356_2552477683 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00,
0x00, 0x80, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
NIM_CONST Nimnodekind112203Set Atomicnodes_113358_2552477683 = {
0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
NIM_CONST Nimnodekind112203Set Callnodes_113360_2552477683 = {
0x00, 0x00, 0x00, 0xFC, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
extern TFrame* frameptr_18436_1689653243;
TNimType NTI112203; /* NimNodeKind */

static N_INLINE(void, nimFrame)(TFrame* s0) {
	NI LOC1;
	LOC1 = (NI)0;
	{
		if (!(frameptr_18436_1689653243 == NIM_NIL)) goto LA4;
		LOC1 = ((NI) 0);
	}
	goto LA2;
	LA4: ;
	{
		LOC1 = ((NI) ((NI16)((*frameptr_18436_1689653243).calldepth + ((NI16) 1))));
	}
	LA2: ;
	(*s0).calldepth = ((NI16) (LOC1));
	(*s0).prev = frameptr_18436_1689653243;
	frameptr_18436_1689653243 = s0;
	{
		if (!((*s0).calldepth == ((NI16) 2000))) goto LA9;
		stackoverflow_21201_1689653243();
	}
	LA9: ;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_18436_1689653243 = (*frameptr_18436_1689653243).prev;
}

N_NIMCALL(Nimnodeobj91604*, getimpl_112597_2552477683)(Nimsymobj112460* s0) {
	Nimnodeobj91604* result0;
	nimfr("getImpl", "macros.nim")
	result0 = (Nimnodeobj91604*)0;
	popFrame();
	return result0;
}

static N_INLINE(NI, addInt)(NI a0, NI b0) {
	NI result0;
{	result0 = (NI)0;
	result0 = (NI)((NU32)(a0) + (NU32)(b0));
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = (((NI) 0) <= (NI)(result0 ^ a0));
		if (LOC3) goto LA4;
		LOC3 = (((NI) 0) <= (NI)(result0 ^ b0));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	}BeforeRet: ;
	return result0;
}

static N_INLINE(NI, chckRange)(NI i0, NI a0, NI b0) {
	NI result0;
{	result0 = (NI)0;
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = (a0 <= i0);
		if (!(LOC3)) goto LA4;
		LOC3 = (i0 <= b0);
		LA4: ;
		if (!LOC3) goto LA5;
		result0 = i0;
		goto BeforeRet;
	}
	goto LA1;
	LA5: ;
	{
		raiseRangeError(((NI64) (i0)));
	}
	LA1: ;
	}BeforeRet: ;
	return result0;
}

static N_INLINE(NIM_CHAR, tolower_115211_2552477683)(NIM_CHAR c0) {
	NIM_CHAR result0;
	nimfr("toLower", "macros.nim")
	result0 = (NIM_CHAR)0;
	nimln(829, "macros.nim");
	{
		NI T2552477683_7;
		nimln(1095, "system.nim");
		if (!(((NU8)(c0)) >= ((NU8)(65)) && ((NU8)(c0)) <= ((NU8)(90)))) goto LA3;
		nimln(829, "macros.nim");
		T2552477683_7 = addInt(((NI) (((NU8)(c0)))), ((NI) 32));
		result0 = ((NIM_CHAR) (((NI)chckRange((NI)(T2552477683_7), ((NI) 0), ((NI) 255)))));
	}
	goto LA1;
	LA3: ;
	{
		nimln(830, "macros.nim");
		result0 = c0;
	}
	LA1: ;
	popFrame();
	return result0;
}

static N_INLINE(NI, subInt)(NI a0, NI b0) {
	NI result0;
{	result0 = (NI)0;
	result0 = (NI)((NU32)(a0) - (NU32)(b0));
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = (((NI) 0) <= (NI)(result0 ^ a0));
		if (LOC3) goto LA4;
		LOC3 = (((NI) 0) <= (NI)(result0 ^ (NI)((NU32) ~(b0))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NI, cmpignorestyle_115206_2552477683)(NCSTRING a0, NCSTRING b0) {
	NI result0;
	NI i0;
	NI j0;
	nimfr("cmpIgnoreStyle", "macros.nim")
{	result0 = (NI)0;
	nimln(831, "macros.nim");
	i0 = ((NI) 0);
	nimln(832, "macros.nim");
	j0 = ((NI) 0);
	nimln(834, "macros.nim");
	{
		nimln(343, "system.nim");
		if (!!(((NU8)(a0[((NI) 0)]) == (NU8)(b0[((NI) 0)])))) goto LA3;
		nimln(834, "macros.nim");
		result0 = ((NI) 1);
		goto BeforeRet;
	}
	LA3: ;
	{
		nimln(835, "macros.nim");
		while (1) {
			NIM_CHAR aa0;
			NIM_CHAR bb0;
			NI T2552477683_8;
			NI T2552477683_9;
			NI T2552477683_10;
			{
				nimln(836, "macros.nim");
				while (1) {
					NI T2552477683_5;
					if (!((NU8)(a0[i0]) == (NU8)(95))) goto LA8;
					T2552477683_5 = addInt(i0, ((NI) 1));
					i0 = (NI)(T2552477683_5);
				} LA8: ;
			}
			{
				nimln(837, "macros.nim");
				while (1) {
					NI T2552477683_6;
					if (!((NU8)(b0[j0]) == (NU8)(95))) goto LA10;
					T2552477683_6 = addInt(j0, ((NI) 1));
					j0 = (NI)(T2552477683_6);
				} LA10: ;
			}
			nimln(838, "macros.nim");
			aa0 = tolower_115211_2552477683(a0[i0]);
			nimln(839, "macros.nim");
			bb0 = tolower_115211_2552477683(b0[j0]);
			nimln(840, "macros.nim");
			T2552477683_8 = subInt(((NI) (((NU8)(aa0)))), ((NI) (((NU8)(bb0)))));
			result0 = (NI)(T2552477683_8);
			nimln(841, "macros.nim");
			{
				NIM_BOOL LOC13;
				LOC13 = (NIM_BOOL)0;
				nimln(343, "system.nim");
				LOC13 = !((result0 == ((NI) 0)));
				if (LOC13) goto LA14;
				nimln(841, "macros.nim");
				LOC13 = ((NU8)(aa0) == (NU8)(0));
				LA14: ;
				if (!LOC13) goto LA15;
				goto LA5;
			}
			LA15: ;
			nimln(842, "macros.nim");
			T2552477683_9 = addInt(i0, ((NI) 1));
			i0 = (NI)(T2552477683_9);
			nimln(843, "macros.nim");
			T2552477683_10 = addInt(j0, ((NI) 1));
			j0 = (NI)(T2552477683_10);
		}
	} LA5: ;
	}BeforeRet: ;
	popFrame();
	return result0;
}

N_NIMCALL(NIM_BOOL, eqident_115312_2552477683)(NimStringDesc* a0, NimStringDesc* b0) {
	NIM_BOOL result0;
	NI LOC1;
	nimfr("eqIdent", "macros.nim")
	result0 = (NIM_BOOL)0;
	nimln(845, "macros.nim");
	LOC1 = (NI)0;
	LOC1 = cmpignorestyle_115206_2552477683(a0->data, b0->data);
	result0 = (LOC1 == ((NI) 0));
	popFrame();
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_macrosInit000)(void) {
	nimfr("macros", "macros.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_macrosDatInit000)(void) {
static TNimNode* T2552477683_2[159];
NI T2552477683_4;
static char* NIM_CONST T2552477683_3[159] = {
"nnkNone", 
"nnkEmpty", 
"nnkIdent", 
"nnkSym", 
"nnkType", 
"nnkCharLit", 
"nnkIntLit", 
"nnkInt8Lit", 
"nnkInt16Lit", 
"nnkInt32Lit", 
"nnkInt64Lit", 
"nnkUIntLit", 
"nnkUInt8Lit", 
"nnkUInt16Lit", 
"nnkUInt32Lit", 
"nnkUInt64Lit", 
"nnkFloatLit", 
"nnkFloat32Lit", 
"nnkFloat64Lit", 
"nnkFloat128Lit", 
"nnkStrLit", 
"nnkRStrLit", 
"nnkTripleStrLit", 
"nnkNilLit", 
"nnkMetaNode", 
"nnkDotCall", 
"nnkCommand", 
"nnkCall", 
"nnkCallStrLit", 
"nnkInfix", 
"nnkPrefix", 
"nnkPostfix", 
"nnkHiddenCallConv", 
"nnkExprEqExpr", 
"nnkExprColonExpr", 
"nnkIdentDefs", 
"nnkVarTuple", 
"nnkPar", 
"nnkObjConstr", 
"nnkCurly", 
"nnkCurlyExpr", 
"nnkBracket", 
"nnkBracketExpr", 
"nnkPragmaExpr", 
"nnkRange", 
"nnkDotExpr", 
"nnkCheckedFieldExpr", 
"nnkDerefExpr", 
"nnkIfExpr", 
"nnkElifExpr", 
"nnkElseExpr", 
"nnkLambda", 
"nnkDo", 
"nnkAccQuoted", 
"nnkTableConstr", 
"nnkBind", 
"nnkClosedSymChoice", 
"nnkOpenSymChoice", 
"nnkHiddenStdConv", 
"nnkHiddenSubConv", 
"nnkConv", 
"nnkCast", 
"nnkStaticExpr", 
"nnkAddr", 
"nnkHiddenAddr", 
"nnkHiddenDeref", 
"nnkObjDownConv", 
"nnkObjUpConv", 
"nnkChckRangeF", 
"nnkChckRange64", 
"nnkChckRange", 
"nnkStringToCString", 
"nnkCStringToString", 
"nnkAsgn", 
"nnkFastAsgn", 
"nnkGenericParams", 
"nnkFormalParams", 
"nnkOfInherit", 
"nnkImportAs", 
"nnkProcDef", 
"nnkMethodDef", 
"nnkConverterDef", 
"nnkMacroDef", 
"nnkTemplateDef", 
"nnkIteratorDef", 
"nnkOfBranch", 
"nnkElifBranch", 
"nnkExceptBranch", 
"nnkElse", 
"nnkAsmStmt", 
"nnkPragma", 
"nnkPragmaBlock", 
"nnkIfStmt", 
"nnkWhenStmt", 
"nnkForStmt", 
"nnkParForStmt", 
"nnkWhileStmt", 
"nnkCaseStmt", 
"nnkTypeSection", 
"nnkVarSection", 
"nnkLetSection", 
"nnkConstSection", 
"nnkConstDef", 
"nnkTypeDef", 
"nnkYieldStmt", 
"nnkDefer", 
"nnkTryStmt", 
"nnkFinally", 
"nnkRaiseStmt", 
"nnkReturnStmt", 
"nnkBreakStmt", 
"nnkContinueStmt", 
"nnkBlockStmt", 
"nnkStaticStmt", 
"nnkDiscardStmt", 
"nnkStmtList", 
"nnkImportStmt", 
"nnkImportExceptStmt", 
"nnkExportStmt", 
"nnkExportExceptStmt", 
"nnkFromStmt", 
"nnkIncludeStmt", 
"nnkBindStmt", 
"nnkMixinStmt", 
"nnkUsingStmt", 
"nnkCommentStmt", 
"nnkStmtListExpr", 
"nnkBlockExpr", 
"nnkStmtListType", 
"nnkBlockType", 
"nnkWith", 
"nnkWithout", 
"nnkTypeOfExpr", 
"nnkObjectTy", 
"nnkTupleTy", 
"nnkTupleClassTy", 
"nnkTypeClassTy", 
"nnkStaticTy", 
"nnkRecList", 
"nnkRecCase", 
"nnkRecWhen", 
"nnkRefTy", 
"nnkPtrTy", 
"nnkVarTy", 
"nnkConstTy", 
"nnkMutableTy", 
"nnkDistinctTy", 
"nnkProcTy", 
"nnkIteratorTy", 
"nnkSharedTy", 
"nnkEnumTy", 
"nnkEnumFieldDef", 
"nnkArglist", 
"nnkPattern", 
"nnkReturnToken", 
"nnkClosure", 
"nnkGotoState", 
"nnkState", 
"nnkBreakState"};
static TNimNode T2552477683_0[160];
NTI112203.size = sizeof(Nimnodekind112203);
NTI112203.kind = 14;
NTI112203.base = 0;
NTI112203.flags = 3;
for (T2552477683_4 = 0; T2552477683_4 < 159; T2552477683_4++) {
T2552477683_0[T2552477683_4+0].kind = 1;
T2552477683_0[T2552477683_4+0].offset = T2552477683_4;
T2552477683_0[T2552477683_4+0].name = T2552477683_3[T2552477683_4];
T2552477683_2[T2552477683_4] = &T2552477683_0[T2552477683_4+0];
}
T2552477683_0[159].len = 159; T2552477683_0[159].kind = 2; T2552477683_0[159].sons = &T2552477683_2[0];
NTI112203.node = &T2552477683_0[159];
}
