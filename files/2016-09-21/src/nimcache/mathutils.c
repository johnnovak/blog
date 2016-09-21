/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, i386, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/john/code/Nim/lib -o /media/sf_D_DRIVE/Work/Code/nim-raytracer/src/src/nimcache/mathutils.o /media/sf_D_DRIVE/Work/Code/nim-raytracer/src/src/nimcache/mathutils.c */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <math.h>
#include <string.h>
typedef struct TY152054 TY152054;
struct TY152054 {
NF Field0;
NF Field1;
};
N_NIMCALL(NIM_BOOL, eq_152003_3942331419)(NF a0, NF b0, NF maxreldiff0);
static N_INLINE(void, nimFrame)(TFrame* s0);
N_NOINLINE(void, stackoverflow_21201_1689653243)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NIM_BOOL, eq_152013_3942331419)(NF32 a0, NF32 b0, NF32 maxreldiff0);
N_NIMCALL(NF, sign_152023_3942331419)(NF x0);
N_NIMCALL(NF, modulo_152034_3942331419)(NF x0);
N_NIMCALL(NF, quadraticdelta_152038_3942331419)(NF a0, NF b0, NF c0);
N_NIMCALL(TY152054, solvequadratic_152048_3942331419)(NF a0, NF b0, NF c0, NF delta0);
extern TFrame* frameptr_18436_1689653243;

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

N_NIMCALL(NIM_BOOL, eq_152003_3942331419)(NF a0, NF b0, NF maxreldiff0) {
	NIM_BOOL result0;
	nimfr("eq", "mathutils.nim")
	result0 = (NIM_BOOL)0;
	nimln(5, "mathutils.nim");
	result0 = ((((NF)(a0) - (NF)(b0)) > 0? (((NF)(a0) - (NF)(b0))) : -(((NF)(a0) - (NF)(b0)))) <= ((NF)((((a0 > 0? (a0) : -(a0)) >= (b0 > 0? (b0) : -(b0))) ? (a0 > 0? (a0) : -(a0)) : (b0 > 0? (b0) : -(b0)))) * (NF)(maxreldiff0)));
	popFrame();
	return result0;
}

N_NIMCALL(NIM_BOOL, eq_152013_3942331419)(NF32 a0, NF32 b0, NF32 maxreldiff0) {
	NIM_BOOL result0;
	nimfr("eq", "mathutils.nim")
	result0 = (NIM_BOOL)0;
	nimln(8, "mathutils.nim");
	result0 = ((((NF) (((NF32)(a0) - (NF32)(b0)))) > 0? (((NF) (((NF32)(a0) - (NF32)(b0))))) : -(((NF) (((NF32)(a0) - (NF32)(b0)))))) <= ((NF)((((((NF) (a0)) > 0? (((NF) (a0))) : -(((NF) (a0)))) >= (((NF) (b0)) > 0? (((NF) (b0))) : -(((NF) (b0))))) ? (((NF) (a0)) > 0? (((NF) (a0))) : -(((NF) (a0)))) : (((NF) (b0)) > 0? (((NF) (b0))) : -(((NF) (b0)))))) * (NF)(((NF) (maxreldiff0)))));
	popFrame();
	return result0;
}

N_NIMCALL(NF, sign_152023_3942331419)(NF x0) {
	NF result0;
	nimfr("sign", "mathutils.nim")
	result0 = (NF)0;
	nimln(11, "mathutils.nim");
	{
		nimln(351, "system.nim");
		if (!(0.0 < x0)) goto LA3;
		nimln(12, "mathutils.nim");
		result0 = 1.0000000000000000e+00;
	}
	goto LA1;
	LA3: ;
	{
		nimln(13, "mathutils.nim");
		if (!(x0 < 0.0)) goto LA6;
		nimln(14, "mathutils.nim");
		result0 = -1.0000000000000000e+00;
	}
	goto LA1;
	LA6: ;
	{
		nimln(16, "mathutils.nim");
		result0 = 0.0;
	}
	LA1: ;
	popFrame();
	return result0;
}

N_NIMCALL(NF, modulo_152034_3942331419)(NF x0) {
	NF result0;
	NF LOC1;
	nimfr("modulo", "mathutils.nim")
	result0 = (NF)0;
	nimln(18, "mathutils.nim");
	LOC1 = (NF)0;
	LOC1 = floor(x0);
	result0 = (((NF)(x0) - (NF)(LOC1)) > 0? (((NF)(x0) - (NF)(LOC1))) : -(((NF)(x0) - (NF)(LOC1))));
	popFrame();
	return result0;
}

N_NIMCALL(NF, quadraticdelta_152038_3942331419)(NF a0, NF b0, NF c0) {
	NF result0;
	nimfr("quadraticDelta", "mathutils.nim")
	result0 = (NF)0;
	nimln(21, "mathutils.nim");
	result0 = ((NF)(((NF)(b0) * (NF)(b0))) - (NF)(((NF)(((NF)(4.0000000000000000e+00) * (NF)(a0))) * (NF)(c0))));
	popFrame();
	return result0;
}

N_NIMCALL(TY152054, solvequadratic_152048_3942331419)(NF a0, NF b0, NF c0, NF delta0) {
	TY152054 result0;
	NF t10;
	NF LOC1;
	NF LOC2;
	NF t20;
	nimfr("solveQuadratic", "mathutils.nim")
	memset((void*)(&result0), 0, sizeof(result0));
	nimln(25, "mathutils.nim");
	LOC1 = (NF)0;
	LOC1 = sign_152023_3942331419(b0);
	LOC2 = (NF)0;
	LOC2 = sqrt(delta0);
	t10 = ((NF)(((NF)(((NF)(-(b0)) - (NF)(((NF)(LOC1) * (NF)(LOC2))))) / (NF)(2.0000000000000000e+00))) * (NF)(a0));
	nimln(26, "mathutils.nim");
	t20 = ((NF)(c0) / (NF)(((NF)(a0) * (NF)(t10))));
	nimln(27, "mathutils.nim");
	result0.Field0 = t10;
	result0.Field1 = t20;
	popFrame();
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_mathutilsInit000)(void) {
	nimfr("mathutils", "mathutils.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, HEX00_mathutilsDatInit000)(void) {
}

