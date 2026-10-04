#include "fh1_funcs.6.h"

DEFINE_REX_FUNC(sub_88050088) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r11,r11,17632
	ctx.r11.s64 = ctx.r11.s64 + 17632;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_880503E0) {
	REX_FUNC_PROLOGUE();
	// b 0x88056d68
	sub_88056D68(ctx, base);
	return;
}

DEFINE_REX_FUNC(__restgprlr_21) {
	REX_FUNC_PROLOGUE();
	// ld r21,-96(r1)
	ctx.r21.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	ctx.r22.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	ctx.r23.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	ctx.r24.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88051300) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88051338
	if (ctx.cr6.eq) goto loc_88051338;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x88052690
	ctx.lr = 0x8805132C;
	sub_88052690(ctx, base);
	// ld r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// b 0x88051348
	goto loc_88051348;
loc_88051338:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x88052738
	ctx.lr = 0x88051340;
	sub_88052738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_88051348:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880527E0) {
	REX_FUNC_PROLOGUE();
	// cmpw r3,r4
	ctx.cr0.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// beqlr- 
	if (ctx.cr0.eq) return;
	// bge+ 0x880527f0
	if (!ctx.cr0.lt) goto loc_880527F0;
	// b 0x880547a0
	sub_880547A0(ctx, base);
	return;
loc_880527F0:
	// addi r0,r5,1
	ctx.r0.s64 = ctx.r5.s64 + 1;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// b 0x88052818
	goto loc_88052818;
loc_88052804:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lbz r0,-1(r4)
	ctx.r0.u64 = REX_LOAD_U8(ctx.r4.u32 + -1);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stb r0,-1(r3)
	REX_STORE_U8(ctx.r3.u32 + -1, ctx.r0.u8);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
loc_88052818:
	// andi. r0,r3,3
	ctx.r0.u64 = ctx.r3.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// bdnzf eq,0x88052804
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0 && !ctx.cr0.eq) goto loc_88052804;
	// rlwinm. r0,r5,30,2,31
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// beq- 0x88052848
	if (ctx.cr0.eq) goto loc_88052848;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// andi. r0,r4,3
	ctx.r0.u64 = ctx.r4.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// bne- 0x8805286c
	if (!ctx.cr0.eq) goto loc_8805286C;
loc_88052834:
	// lwz r7,-4(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + -4);
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r7,-4(r3)
	REX_STORE_U32(ctx.r3.u32 + -4, ctx.r7.u32);
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// bdnz+ 0x88052834
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88052834;
loc_88052848:
	// andi. r0,r5,3
	ctx.r0.u64 = ctx.r5.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// beqlr+ 
	if (ctx.cr0.eq) return;
loc_88052854:
	// lbz r0,-1(r4)
	ctx.r0.u64 = REX_LOAD_U8(ctx.r4.u32 + -1);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stb r0,-1(r3)
	REX_STORE_U8(ctx.r3.u32 + -1, ctx.r0.u8);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// bdnz+ 0x88052854
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88052854;
	// blr 
	return;
loc_8805286C:
	// lbz r7,-1(r4)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + -1);
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// lbz r8,-2(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + -2);
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r9,-3(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + -3);
	// rlwimi r7,r9,16,8,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// lbz r10,-4(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + -4);
	// rlwimi r7,r10,24,0,7
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000) | (ctx.r7.u64 & 0xFFFFFFFF00FFFFFF);
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r7,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// bdnz 0x8805286c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8805286C;
	// b 0x88052848
	goto loc_88052848;
}

DEFINE_REX_FUNC(sub_880579D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,6736
	ctx.r10.s64 = ctx.r11.s64 + 6736;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x88062228
	ctx.lr = 0x88057A04;
	sub_88062228(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88057a24
	if (ctx.cr6.eq) goto loc_88057A24;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32773
	ctx.r4.u64 = ctx.r4.u64 | 32773;
	// bl 0x88050358
	ctx.lr = 0x88057A20;
	sub_88050358(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_88057A24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880586C8) {
	REX_FUNC_PROLOGUE();
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32810
	ctx.r4.u64 = ctx.r4.u64 | 32810;
	// b 0x88050340
	sub_88050340(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880587A0) {
	REX_FUNC_PROLOGUE();
	// lwz r10,124(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// lwz r11,128(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r8,80(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 80);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r7,31,3,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x1FFFFFFF;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_88059110) {
	REX_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88059218) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,524(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805924c
	if (ctx.cr6.eq) goto loc_8805924C;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32797
	ctx.r4.u64 = ctx.r4.u64 | 32797;
	// bl 0x88050358
	ctx.lr = 0x88059244;
	sub_88050358(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,524(r31)
	REX_STORE_U32(ctx.r31.u32 + 524, ctx.r11.u32);
loc_8805924C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88059260;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,80(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 80);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88059274;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,132(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 132);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x88059288;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8805A498) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8805A4A0;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805A4C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,76(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8805A4D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,52(r29)
	REX_STORE_U32(ctx.r29.u32 + 52, ctx.r30.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r29,672
	ctx.r28.s64 = ctx.r29.s64 + 672;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88065e48
	ctx.lr = 0x8805A4F0;
	sub_88065E48(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// bne cr6,0x8805a568
	if (!ctx.cr6.eq) goto loc_8805A568;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// stw r29,592(r11)
	REX_STORE_U32(ctx.r11.u32 + 592, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r27,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805A520;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8805a558
	if (ctx.cr6.eq) goto loc_8805A558;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805A540;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r3,0
	ctx.r9.s64 = ctx.r3.s64 + 0;
	// lwz r8,88(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// addic r7,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 & ctx.r8.u64;
	// stw r4,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r4.u32);
loc_8805A558:
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x88065ed8
	ctx.lr = 0x8805A564;
	sub_88065ED8(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
loc_8805A568:
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// stw r27,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// stw r27,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// stw r27,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r27.u32);
	// stw r27,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// bne cr6,0x8805a650
	if (!ctx.cr6.eq) goto loc_8805A650;
	// lwz r11,660(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 660);
	// addi r9,r31,96
	ctx.r9.s64 = ctx.r31.s64 + 96;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88065f08
	ctx.lr = 0x8805A5B4;
	sub_88065F08(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8805a650
	if (!ctx.cr6.eq) goto loc_8805A650;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// ble cr6,0x8805a650
	if (!ctx.cr6.gt) goto loc_8805A650;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88065bb0
	ctx.lr = 0x8805A5D4;
	sub_88065BB0(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8805a650
	if (!ctx.cr6.eq) goto loc_8805A650;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805A5F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,676(r29)
	REX_STORE_U32(ctx.r29.u32 + 676, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r27,664(r29)
	REX_STORE_U32(ctx.r29.u32 + 664, ctx.r27.u32);
	// stw r27,668(r29)
	REX_STORE_U32(ctx.r29.u32 + 668, ctx.r27.u32);
	// stw r27,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
	// bl 0x88065e48
	ctx.lr = 0x8805A610;
	sub_88065E48(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8805a650
	if (!ctx.cr6.eq) goto loc_8805A650;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// addi r9,r31,96
	ctx.r9.s64 = ctx.r31.s64 + 96;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,63
	ctx.r7.s64 = 63;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,592(r11)
	REX_STORE_U32(ctx.r11.u32 + 592, ctx.r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,660(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 660);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x88065f08
	ctx.lr = 0x8805A64C;
	sub_88065F08(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
loc_8805A650:
	// sth r27,80(r31)
	REX_STORE_U16(ctx.r31.u32 + 80, ctx.r27.u16);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8805a74c
	if (!ctx.cr6.eq) goto loc_8805A74C;
	// lwz r11,124(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 124);
	// addi r30,r29,124
	ctx.r30.s64 = ctx.r29.s64 + 124;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805A678;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r9,124(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 124);
	// lwz r8,40(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8805A690;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x88057aa8
	ctx.lr = 0x8805A69C;
	sub_88057AA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x88057ab0
	ctx.lr = 0x8805A6A8;
	sub_88057AB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,108(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x88057ac8
	ctx.lr = 0x8805A6B4;
	sub_88057AC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,108(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r6,96(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// mullw r4,r7,r6
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// bl 0x88057ab8
	ctx.lr = 0x8805A6C8;
	sub_88057AB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,124(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 124);
	// lwz r11,44(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8805A6E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88057ac0
	ctx.lr = 0x8805A6EC;
	sub_88057AC0(ctx, base);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,6732(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6732);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x88057ad8
	ctx.lr = 0x8805A6FC;
	sub_88057AD8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88057ad0
	ctx.lr = 0x8805A708;
	sub_88057AD0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x88065b60
	ctx.lr = 0x8805A714;
	sub_88065B60(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8805a74c
	if (!ctx.cr6.eq) goto loc_8805A74C;
	// lhz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8805a734
	if (!ctx.cr6.eq) goto loc_8805A734;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
loc_8805A734:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8805a74c
	if (!ctx.cr6.eq) goto loc_8805A74C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x88065b88
	ctx.lr = 0x8805A748;
	sub_88065B88(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
loc_8805A74C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805a77c
	if (ctx.cr6.eq) goto loc_8805A77C;
	// cmplwi cr6,r3,11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 11, ctx.xer);
	// ble cr6,0x8805a770
	if (!ctx.cr6.gt) goto loc_8805A770;
	// cmplwi cr6,r3,14
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 14, ctx.xer);
	// bgt cr6,0x8805a770
	if (ctx.cr6.gt) goto loc_8805A770;
	// lis r11,-16371
	ctx.r11.s64 = -1072889856;
	// ori r11,r11,10416
	ctx.r11.u64 = ctx.r11.u64 | 10416;
	// b 0x8805a780
	goto loc_8805A780;
loc_8805A770:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// b 0x8805a780
	goto loc_8805A780;
loc_8805A77C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8805A780:
	// stw r11,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8805a7a0
	goto loc_8805A7A0;
loc_8805A7A0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88062250) {
	REX_FUNC_PROLOGUE();
	// stw r4,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88062260) {
	REX_FUNC_PROLOGUE();
	// stw r4,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88062380) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,136
	ctx.r3.s64 = ctx.r3.s64 + 136;
	// stw r3,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880623A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r5,r7,10
	ctx.r5.u64 = ctx.r7.u64 | 10;
	// and r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 & ctx.r5.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88063748) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880637c8
	if (ctx.cr6.eq) goto loc_880637C8;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x880637c8
	if (ctx.cr6.eq) goto loc_880637C8;
	// lwz r11,548(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 548);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r3,608(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 608);
	// bl 0x880cb210
	ctx.lr = 0x88063784;
	sub_880CB210(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,608(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 608);
	// bl 0x880625e8
	ctx.lr = 0x88063790;
	sub_880625E8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880637b0
	if (ctx.cr6.eq) goto loc_880637B0;
	// bl 0x880cd1f0
	ctx.lr = 0x880637A0;
	sub_880CD1F0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880cb318
	ctx.lr = 0x880637B0;
	sub_880CB318(ctx, base);
loc_880637B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x880cb360
	ctx.lr = 0x880637C0;
	sub_880CB360(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x880637cc
	goto loc_880637CC;
loc_880637C8:
	// li r3,4
	ctx.r3.s64 = 4;
loc_880637CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88064ED8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x88064EE0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88064fd8
	if (ctx.cr6.eq) goto loc_88064FD8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88064fd8
	if (ctx.cr6.eq) goto loc_88064FD8;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x88064fd8
	if (ctx.cr6.eq) goto loc_88064FD8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x88064fd8
	if (ctx.cr6.eq) goto loc_88064FD8;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x88064fd8
	if (ctx.cr6.eq) goto loc_88064FD8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r10,528(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 528);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88064fd8
	if (ctx.cr6.eq) goto loc_88064FD8;
	// lwz r3,536(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 536);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88064f6c
	if (!ctx.cr6.eq) goto loc_88064F6C;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,168
	ctx.r3.u64 = ctx.r3.u64 | 168;
	// bl 0x880638b8
	ctx.lr = 0x88064F64;
	sub_880638B8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_88064F6C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x880cc2c0
	ctx.lr = 0x88064F74;
	sub_880CC2C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064fcc
	if (ctx.cr6.lt) goto loc_88064FCC;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x880cb730
	ctx.lr = 0x88064F90;
	sub_880CB730(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064fcc
	if (ctx.cr6.lt) goto loc_88064FCC;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x88064fd8
	if (!ctx.cr6.eq) goto loc_88064FD8;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88062ec8
	ctx.lr = 0x88064FCC;
	sub_88062EC8(ctx, base);
loc_88064FCC:
	// bl 0x880638b8
	ctx.lr = 0x88064FD0;
	sub_880638B8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_88064FD8:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88067658) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// addi r10,r11,10640
	ctx.r10.s64 = ctx.r11.s64 + 10640;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x880cd4f8
	sub_880CD4F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880676E8) {
	REX_FUNC_PROLOGUE();
	// b 0x88067668
	sub_88067668(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880676F0) {
	REX_FUNC_PROLOGUE();
	// stw r4,444(r3)
	REX_STORE_U32(ctx.r3.u32 + 444, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880676F8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,444(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 444);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88067708) {
	REX_FUNC_PROLOGUE();
	// lwz r3,448(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 448);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88067738) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r3,284
	ctx.r7.s64 = ctx.r3.s64 + 284;
	// li r6,40
	ctx.r6.s64 = 40;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_88067818) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88067844
	if (ctx.cr6.eq) goto loc_88067844;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32782
	ctx.r4.u64 = ctx.r4.u64 | 32782;
	// bl 0x88050358
	ctx.lr = 0x88067844;
	sub_88050358(ctx, base);
loc_88067844:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88067880
	if (ctx.cr6.eq) goto loc_88067880;
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8806787c
	if (ctx.cr6.eq) goto loc_8806787C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x88067878;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x88067880
	goto loc_88067880;
loc_8806787C:
	// bl 0x881ee958
	ctx.lr = 0x88067880;
	sub_881EE958(ctx, base);
loc_88067880:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88068260) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r4,8
	ctx.r5.s64 = ctx.r4.s64 + 8;
	// lwz r4,4(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_88068280) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_88068F40) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88068F48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lwz r10,244(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 244);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88068F68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x88068f8c
	if (!ctx.cr6.eq) goto loc_88068F8C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,248(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88068F84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x88069038
	if (ctx.cr6.eq) goto loc_88069038;
loc_88068F8C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88068FA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,180(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 180);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88068FB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,184(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 184);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x88068FC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,188(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 188);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x88068FDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,192(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88068FF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88069004;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,84(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 84);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x88069018;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x88069030;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x88069130
	if (ctx.cr6.lt) goto loc_88069130;
loc_88069038:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806904C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,288(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 288);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88069064;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,292(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 292);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8806907C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,264(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 264);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88069094;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,268(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 268);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x880690AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,244(r31)
	REX_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,248(r31)
	REX_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,252(r31)
	REX_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// stw r8,240(r31)
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r8.u32);
	// stw r30,232(r31)
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// stw r30,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// stw r30,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,228(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 228);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x880690E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,232(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 232);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x880690F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,236(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 236);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069108;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,240(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 240);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8806911C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,20(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x88069130;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069130:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8806E028) {
	REX_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,27988(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 27988);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,31544(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8806EB88) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,31032(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31032);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8806ebc8
	if (!ctx.cr6.eq) goto loc_8806EBC8;
	// lwz r11,31036(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31036);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8806ebc8
	if (!ctx.cr6.eq) goto loc_8806EBC8;
	// bl 0x881ee8e8
	ctx.lr = 0x8806EBC0;
	sub_881EE8E8(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// stw r11,1428(r31)
	REX_STORE_U32(ctx.r31.u32 + 1428, ctx.r11.u32);
loc_8806EBC8:
	// lwz r11,30868(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30868);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806ebe8
	if (ctx.cr6.eq) goto loc_8806EBE8;
	// lwz r11,6756(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6756);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8806ebe8
	if (!ctx.cr6.eq) goto loc_8806EBE8;
	// lwz r30,30924(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 30924);
	// stw r30,672(r31)
	REX_STORE_U32(ctx.r31.u32 + 672, ctx.r30.u32);
loc_8806EBE8:
	// lwz r11,30880(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30880);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806ebfc
	if (ctx.cr6.eq) goto loc_8806EBFC;
	// lwz r11,30936(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30936);
	// stw r11,1424(r31)
	REX_STORE_U32(ctx.r31.u32 + 1424, ctx.r11.u32);
loc_8806EBFC:
	// lwz r11,30892(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30892);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806ec10
	if (ctx.cr6.eq) goto loc_8806EC10;
	// lwz r11,30948(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30948);
	// stw r11,1428(r31)
	REX_STORE_U32(ctx.r31.u32 + 1428, ctx.r11.u32);
loc_8806EC10:
	// stw r30,1420(r31)
	REX_STORE_U32(ctx.r31.u32 + 1420, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// ble cr6,0x8806ec24
	if (!ctx.cr6.gt) goto loc_8806EC24;
	// stw r8,1424(r31)
	REX_STORE_U32(ctx.r31.u32 + 1424, ctx.r8.u32);
loc_8806EC24:
	// lwz r10,1432(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1432);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8806ec48
	if (!ctx.cr6.eq) goto loc_8806EC48;
	// li r11,8
	ctx.r11.s64 = 8;
	// rlwinm r9,r30,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// subfc r6,r30,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r30.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r30.u64;
	// adde r11,r9,r7
	temp.u8 = (ctx.r9.u32 + ctx.r7.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,1428(r31)
	REX_STORE_U32(ctx.r31.u32 + 1428, ctx.r11.u32);
loc_8806EC48:
	// lwz r11,1428(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1428);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806ec5c
	if (ctx.cr6.eq) goto loc_8806EC5C;
	// lwz r9,8216(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8216);
	// b 0x8806ec60
	goto loc_8806EC60;
loc_8806EC5C:
	// lwz r9,8212(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8212);
loc_8806EC60:
	// stw r9,8208(r31)
	REX_STORE_U32(ctx.r31.u32 + 8208, ctx.r9.u32);
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// bgt cr6,0x8806ec80
	if (ctx.cr6.gt) goto loc_8806EC80;
	// addi r9,r31,19828
	ctx.r9.s64 = ctx.r31.s64 + 19828;
	// addi r7,r31,19956
	ctx.r7.s64 = ctx.r31.s64 + 19956;
	// addi r6,r31,19572
	ctx.r6.s64 = ctx.r31.s64 + 19572;
	// addi r5,r31,19700
	ctx.r5.s64 = ctx.r31.s64 + 19700;
	// b 0x8806ec90
	goto loc_8806EC90;
loc_8806EC80:
	// addi r9,r31,19764
	ctx.r9.s64 = ctx.r31.s64 + 19764;
	// addi r7,r31,19892
	ctx.r7.s64 = ctx.r31.s64 + 19892;
	// addi r6,r31,19508
	ctx.r6.s64 = ctx.r31.s64 + 19508;
	// addi r5,r31,19636
	ctx.r5.s64 = ctx.r31.s64 + 19636;
loc_8806EC90:
	// stw r5,20024(r31)
	REX_STORE_U32(ctx.r31.u32 + 20024, ctx.r5.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r6,20012(r31)
	REX_STORE_U32(ctx.r31.u32 + 20012, ctx.r6.u32);
	// stw r7,20000(r31)
	REX_STORE_U32(ctx.r31.u32 + 20000, ctx.r7.u32);
	// stw r9,19988(r31)
	REX_STORE_U32(ctx.r31.u32 + 19988, ctx.r9.u32);
	// beq cr6,0x8806ecb4
	if (ctx.cr6.eq) goto loc_8806ECB4;
	// addi r11,r31,24612
	ctx.r11.s64 = ctx.r31.s64 + 24612;
	// stw r11,27940(r31)
	REX_STORE_U32(ctx.r31.u32 + 27940, ctx.r11.u32);
	// b 0x8806ecd8
	goto loc_8806ECD8;
loc_8806ECB4:
	// addi r11,r31,21284
	ctx.r11.s64 = ctx.r31.s64 + 21284;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,27940(r31)
	REX_STORE_U32(ctx.r31.u32 + 27940, ctx.r11.u32);
	// bne cr6,0x8806ecd8
	if (!ctx.cr6.eq) goto loc_8806ECD8;
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,2872
	ctx.r11.s64 = ctx.r11.s64 + 2872;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r30,-4(r10)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
loc_8806ECD8:
	// lwz r11,2336(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2336);
	// stw r30,1416(r31)
	REX_STORE_U32(ctx.r31.u32 + 1416, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r8,2340(r31)
	REX_STORE_U32(ctx.r31.u32 + 2340, ctx.r8.u32);
	// beq cr6,0x8806ed2c
	if (ctx.cr6.eq) goto loc_8806ED2C;
	// lwz r11,7864(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7864);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8806ed2c
	if (!ctx.cr6.eq) goto loc_8806ED2C;
	// cmpwi cr6,r30,9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 9, ctx.xer);
	// blt cr6,0x8806ed08
	if (ctx.cr6.lt) goto loc_8806ED08;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8806ed28
	goto loc_8806ED28;
loc_8806ED08:
	// lwz r11,2572(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806ed2c
	if (ctx.cr6.eq) goto loc_8806ED2C;
	// li r11,7
	ctx.r11.s64 = 7;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// stw r11,2340(r31)
	REX_STORE_U32(ctx.r31.u32 + 2340, ctx.r11.u32);
	// bge cr6,0x8806ed2c
	if (!ctx.cr6.lt) goto loc_8806ED2C;
	// li r11,2
	ctx.r11.s64 = 2;
loc_8806ED28:
	// stw r11,2340(r31)
	REX_STORE_U32(ctx.r31.u32 + 2340, ctx.r11.u32);
loc_8806ED2C:
	// lwz r10,1424(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,27940(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 27940);
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,2340(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2340);
	// li r4,1472
	ctx.r4.s64 = 1472;
	// mulli r11,r6,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(52));
	// lfs f0,12188(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12188);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r3,1476
	ctx.r3.s64 = 1476;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// addi r10,r11,-52
	ctx.r10.s64 = ctx.r11.s64 + -52;
	// lwz r30,-12(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + -12);
	// li r6,1468
	ctx.r6.s64 = 1468;
	// clrlwi r5,r5,31
	ctx.r5.u64 = ctx.r5.u32 & 0x1;
	// lfs f12,6708(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6708);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,12180(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12180);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r30,1456(r31)
	REX_STORE_U32(ctx.r31.u32 + 1456, ctx.r30.u32);
	// stw r30,1452(r31)
	REX_STORE_U32(ctx.r31.u32 + 1452, ctx.r30.u32);
	// lfs f11,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,19256(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r31.u32 + 19256, temp.u32);
	// fmuls f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,19252(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r31.u32 + 19252, temp.u32);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfiwx f9,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.f9.u32);
	// fmr f8,f11
	ctx.f8.f64 = ctx.f11.f64;
	// fctiwz f6,f7
	ctx.f6.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfiwx f6,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.f6.u32);
	// lwz r4,-52(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -52);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// stw r4,1460(r31)
	REX_STORE_U32(ctx.r31.u32 + 1460, ctx.r4.u32);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// stfs f3,19236(r31)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r31.u32 + 19236, temp.u32);
	// lwz r10,19236(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 19236);
	// stw r10,19244(r31)
	REX_STORE_U32(ctx.r31.u32 + 19244, ctx.r10.u32);
	// fdivs f1,f12,f3
	ctx.f1.f64 = double(float(ctx.f12.f64 / ctx.f3.f64));
	// stfs f1,19240(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r31.u32 + 19240, temp.u32);
	// fmuls f11,f3,f13
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// stw r9,19248(r31)
	REX_STORE_U32(ctx.r31.u32 + 19248, ctx.r9.u32);
	// fmuls f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmr f12,f1
	ctx.f12.f64 = ctx.f1.f64;
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfiwx f9,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.f9.u32);
	// lwz r7,-48(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + -48);
	// stw r7,1464(r31)
	REX_STORE_U32(ctx.r31.u32 + 1464, ctx.r7.u32);
	// beq cr6,0x8806ee20
	if (ctx.cr6.eq) goto loc_8806EE20;
	// lwz r11,17536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 17536);
	// sth r8,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// lwz r10,17540(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 17540);
	// sth r8,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// b 0x8806ee68
	goto loc_8806EE68;
loc_8806EE20:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f12,19252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 19252);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lwz r9,17536(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 17536);
	// lfs f0,12184(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12184);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6728(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6728);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// fctiwz f10,f11
	ctx.f10.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lhz r8,86(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// sth r8,0(r9)
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r8.u16);
	// lfs f9,19256(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 19256);
	ctx.f9.f64 = double(temp.f32);
	// lwz r7,17540(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 17540);
	// fmadds f8,f9,f0,f13
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f13.f64)));
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lhz r6,86(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// sth r6,0(r7)
	REX_STORE_U16(ctx.r7.u32 + 0, ctx.r6.u16);
loc_8806EE68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ebc80
	ctx.lr = 0x8806EE70;
	sub_880EBC80(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8807BA60) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805082c
	ctx.lr = 0x8807BA68;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// lwz r10,356(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r11,6768(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 6768);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// stw r10,2180(r3)
	REX_STORE_U32(ctx.r3.u32 + 2180, ctx.r10.u32);
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807bb0c
	if (ctx.cr6.eq) goto loc_8807BB0C;
	// lis r9,22101
	ctx.r9.s64 = 1448411136;
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// ori r8,r9,22857
	ctx.r8.u64 = ctx.r9.u64 | 22857;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8807bac8
	if (ctx.cr6.eq) goto loc_8807BAC8;
	// lis r9,12338
	ctx.r9.s64 = 808583168;
	// ori r8,r9,13385
	ctx.r8.u64 = ctx.r9.u64 | 13385;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8807bb0c
	if (!ctx.cr6.eq) goto loc_8807BB0C;
loc_8807BAC8:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8807bb0c
	if (ctx.cr6.gt) goto loc_8807BB0C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8807baf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8807BAF4;
	// bdzf 4*cr6+eq,0x8807bae8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8807BAE8;
	// bne cr6,0x8807bb00
	if (!ctx.cr6.eq) goto loc_8807BB00;
loc_8807BAE8:
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// b 0x8807bb14
	goto loc_8807BB14;
loc_8807BAF4:
	// li r29,1
	ctx.r29.s64 = 1;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x8807bb14
	goto loc_8807BB14;
loc_8807BB00:
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// b 0x8807bb14
	goto loc_8807BB14;
loc_8807BB0C:
	// lwz r28,348(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r29,340(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
loc_8807BB14:
	// lwz r11,28492(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807bb28
	if (!ctx.cr6.eq) goto loc_8807BB28;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
loc_8807BB28:
	// lwz r11,28568(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807bb44
	if (ctx.cr6.eq) goto loc_8807BB44;
	// stw r22,28572(r31)
	REX_STORE_U32(ctx.r31.u32 + 28572, ctx.r22.u32);
	// stw r22,28576(r31)
	REX_STORE_U32(ctx.r31.u32 + 28576, ctx.r22.u32);
	// stw r22,28580(r31)
	REX_STORE_U32(ctx.r31.u32 + 28580, ctx.r22.u32);
	// stw r22,28584(r31)
	REX_STORE_U32(ctx.r31.u32 + 28584, ctx.r22.u32);
loc_8807BB44:
	// lwz r11,28560(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28560);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807bb54
	if (ctx.cr6.eq) goto loc_8807BB54;
	// stw r22,30200(r31)
	REX_STORE_U32(ctx.r31.u32 + 30200, ctx.r22.u32);
loc_8807BB54:
	// lwz r11,30408(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807bb74
	if (ctx.cr6.eq) goto loc_8807BB74;
	// lwz r11,1620(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1620);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807bb74
	if (ctx.cr6.eq) goto loc_8807BB74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8807e548
	ctx.lr = 0x8807BB74;
	sub_8807E548(ctx, base);
loc_8807BB74:
	// ld r11,30520(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 30520);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// ld r11,736(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 736);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// std r10,30520(r31)
	REX_STORE_U64(ctx.r31.u32 + 30520, ctx.r10.u64);
	// std r9,736(r31)
	REX_STORE_U64(ctx.r31.u32 + 736, ctx.r9.u64);
	// bne cr6,0x8807bba4
	if (!ctx.cr6.eq) goto loc_8807BBA4;
	// ld r10,7736(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 7736);
	// ld r11,7720(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 7720);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8807bba8
	goto loc_8807BBA8;
loc_8807BBA4:
	// ld r11,304(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 304);
loc_8807BBA8:
	// std r11,7728(r31)
	REX_STORE_U64(ctx.r31.u32 + 7728, ctx.r11.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// stw r11,7700(r31)
	REX_STORE_U32(ctx.r31.u32 + 7700, ctx.r11.u32);
	// bl 0x8807a9a0
	ctx.lr = 0x8807BBBC;
	sub_8807A9A0(ctx, base);
	// lwz r11,2800(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807bbfc
	if (!ctx.cr6.eq) goto loc_8807BBFC;
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,6720(r31)
	REX_STORE_U32(ctx.r31.u32 + 6720, ctx.r11.u32);
	// stw r11,6856(r31)
	REX_STORE_U32(ctx.r31.u32 + 6856, ctx.r11.u32);
	// bl 0x8806e060
	ctx.lr = 0x8807BBDC;
	sub_8806E060(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8807bc0c
	if (ctx.cr6.eq) goto loc_8807BC0C;
	// ld r11,736(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 736);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// bne cr6,0x8807bc0c
	if (!ctx.cr6.eq) goto loc_8807BC0C;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,6720(r31)
	REX_STORE_U32(ctx.r31.u32 + 6720, ctx.r11.u32);
	// b 0x8807bc08
	goto loc_8807BC08;
loc_8807BBFC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8807bc0c
	if (!ctx.cr6.eq) goto loc_8807BC0C;
	// li r11,6
	ctx.r11.s64 = 6;
loc_8807BC08:
	// stw r11,6856(r31)
	REX_STORE_U32(ctx.r31.u32 + 6856, ctx.r11.u32);
loc_8807BC0C:
	// lwz r11,2800(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807bc4c
	if (!ctx.cr6.eq) goto loc_8807BC4C;
	// lwz r11,30408(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807bc4c
	if (ctx.cr6.eq) goto loc_8807BC4C;
	// lwz r11,30628(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807bc4c
	if (ctx.cr6.eq) goto loc_8807BC4C;
	// lwz r11,30696(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807bc4c
	if (ctx.cr6.eq) goto loc_8807BC4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r27)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r4,4(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x88083540
	ctx.lr = 0x8807BC4C;
	sub_88083540(ctx, base);
loc_8807BC4C:
	// lwz r10,2800(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8807bc8c
	if (!ctx.cr6.eq) goto loc_8807BC8C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8807bc8c
	if (!ctx.cr6.eq) goto loc_8807BC8C;
	// lwz r11,7824(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7824);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8807bc7c
	if (!ctx.cr6.eq) goto loc_8807BC7C;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x8807bc8c
	goto loc_8807BC8C;
loc_8807BC7C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8807bc88
	if (ctx.cr6.eq) goto loc_8807BC88;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_8807BC88:
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
loc_8807BC8C:
	// lbz r9,31537(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 31537);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8807bd18
	if (ctx.cr6.eq) goto loc_8807BD18;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8807bcb0
	if (!ctx.cr6.eq) goto loc_8807BCB0;
	// lbz r11,31538(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 31538);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8807bcb0
	if (ctx.cr6.lt) goto loc_8807BCB0;
	// stb r22,31538(r31)
	REX_STORE_U8(ctx.r31.u32 + 31538, ctx.r22.u8);
loc_8807BCB0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8807bcc0
	if (!ctx.cr6.eq) goto loc_8807BCC0;
	// stb r22,31539(r31)
	REX_STORE_U8(ctx.r31.u32 + 31539, ctx.r22.u8);
	// b 0x8807bd14
	goto loc_8807BD14;
loc_8807BCC0:
	// lbz r11,31539(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 31539);
	// lbz r10,31538(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 31538);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// stb r11,31539(r31)
	REX_STORE_U8(ctx.r31.u32 + 31539, ctx.r11.u8);
	// stb r8,31538(r31)
	REX_STORE_U8(ctx.r31.u32 + 31538, ctx.r8.u8);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8807bd18
	if (ctx.cr6.lt) goto loc_8807BD18;
	// lwz r10,7752(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7752);
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,860(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 860);
	// subf r7,r8,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r8.u64;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x8807bd08
	if (ctx.cr6.gt) goto loc_8807BD08;
	// lbz r11,31539(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 31539);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8807BD08:
	// rlwinm r10,r9,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8807bd18
	if (!ctx.cr6.lt) goto loc_8807BD18;
loc_8807BD14:
	// stb r22,31538(r31)
	REX_STORE_U8(ctx.r31.u32 + 31538, ctx.r22.u8);
loc_8807BD18:
	// lwz r11,31532(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807bd40
	if (ctx.cr6.eq) goto loc_8807BD40;
	// lwz r11,7596(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7596);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807bd38
	if (ctx.cr6.eq) goto loc_8807BD38;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8807bd40
	if (!ctx.cr6.eq) goto loc_8807BD40;
loc_8807BD38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e4488
	ctx.lr = 0x8807BD40;
	sub_880E4488(ctx, base);
loc_8807BD40:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,388(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r30,380(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// lwz r29,396(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r9,332(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bl 0x8807a110
	ctx.lr = 0x8807BD80;
	sub_8807A110(ctx, base);
	// stw r22,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8807c0cc
	if (!ctx.cr6.eq) goto loc_8807C0CC;
	// lwz r11,7596(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7596);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807beb0
	if (ctx.cr6.eq) goto loc_8807BEB0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8807beb0
	if (ctx.cr6.eq) goto loc_8807BEB0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8807be70
	if (ctx.cr6.eq) goto loc_8807BE70;
	// lwz r10,7188(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7188);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8807be70
	if (ctx.cr6.eq) goto loc_8807BE70;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8807bdf8
	if (!ctx.cr6.eq) goto loc_8807BDF8;
	// lwz r11,324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8807bddc
	if (ctx.cr6.lt) goto loc_8807BDDC;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bgt cr6,0x8807bddc
	if (ctx.cr6.gt) goto loc_8807BDDC;
	// stw r11,7904(r31)
	REX_STORE_U32(ctx.r31.u32 + 7904, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e4530
	ctx.lr = 0x8807BDDC;
	sub_880E4530(ctx, base);
loc_8807BDDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e44d0
	ctx.lr = 0x8807BDE4;
	sub_880E44D0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,404(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// bl 0x8807b658
	ctx.lr = 0x8807BDF4;
	sub_8807B658(ctx, base);
	// b 0x8807bf4c
	goto loc_8807BF4C;
loc_8807BDF8:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8807bf4c
	if (!ctx.cr6.eq) goto loc_8807BF4C;
	// lwz r11,7600(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7600);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8807be24
	if (!ctx.cr6.eq) goto loc_8807BE24;
	// stw r22,21084(r31)
	REX_STORE_U32(ctx.r31.u32 + 21084, ctx.r22.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,404(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// bl 0x8807b658
	ctx.lr = 0x8807BE20;
	sub_8807B658(ctx, base);
	// b 0x8807bf4c
	goto loc_8807BF4C;
loc_8807BE24:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8807bf4c
	if (!ctx.cr6.eq) goto loc_8807BF4C;
	// lwz r11,324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8807bf4c
	if (ctx.cr6.eq) goto loc_8807BF4C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8807be54
	if (ctx.cr6.lt) goto loc_8807BE54;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bgt cr6,0x8807be54
	if (ctx.cr6.gt) goto loc_8807BE54;
	// stw r11,7904(r31)
	REX_STORE_U32(ctx.r31.u32 + 7904, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e4530
	ctx.lr = 0x8807BE54;
	sub_880E4530(ctx, base);
loc_8807BE54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e44d0
	ctx.lr = 0x8807BE5C;
	sub_880E44D0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,404(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// bl 0x8807b658
	ctx.lr = 0x8807BE6C;
	sub_8807B658(ctx, base);
	// b 0x8807bf4c
	goto loc_8807BF4C;
loc_8807BE70:
	// lwz r11,7600(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7600);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8807be8c
	if (!ctx.cr6.eq) goto loc_8807BE8C;
	// lwz r11,7572(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7572);
	// stw r11,676(r31)
	REX_STORE_U32(ctx.r31.u32 + 676, ctx.r11.u32);
	// stw r11,672(r31)
	REX_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// b 0x8807bf4c
	goto loc_8807BF4C;
loc_8807BE8C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8807bf4c
	if (!ctx.cr6.eq) goto loc_8807BF4C;
	// lwz r11,31544(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,404(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807bf34
	if (ctx.cr6.eq) goto loc_8807BF34;
	// bl 0x8807b110
	ctx.lr = 0x8807BEAC;
	sub_8807B110(ctx, base);
	// b 0x8807bf38
	goto loc_8807BF38;
loc_8807BEB0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8807bed0
	if (!ctx.cr6.eq) goto loc_8807BED0;
	// lwz r11,7976(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7976);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807bed0
	if (!ctx.cr6.eq) goto loc_8807BED0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e39d0
	ctx.lr = 0x8807BED0;
	sub_880E39D0(ctx, base);
loc_8807BED0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e44d0
	ctx.lr = 0x8807BED8;
	sub_880E44D0(ctx, base);
	// lwz r11,31544(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// lwz r10,1688(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1688);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r4,404(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r11,1684(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1684);
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// beq cr6,0x8807bf24
	if (ctx.cr6.eq) goto loc_8807BF24;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r5,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 4;
	// stw r6,1692(r31)
	REX_STORE_U32(ctx.r31.u32 + 1692, ctx.r6.u32);
	// addze r11,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// stw r9,1696(r31)
	REX_STORE_U32(ctx.r31.u32 + 1696, ctx.r9.u32);
	// bl 0x8807b110
	ctx.lr = 0x8807BF20;
	sub_8807B110(ctx, base);
	// b 0x8807bf38
	goto loc_8807BF38;
loc_8807BF24:
	// srawi r7,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 4;
	// stw r8,1692(r31)
	REX_STORE_U32(ctx.r31.u32 + 1692, ctx.r8.u32);
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// stw r6,1696(r31)
	REX_STORE_U32(ctx.r31.u32 + 1696, ctx.r6.u32);
loc_8807BF34:
	// bl 0x8807ad18
	ctx.lr = 0x8807BF38;
	sub_8807AD18(ctx, base);
loc_8807BF38:
	// lwz r11,7632(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7632);
	// lwz r10,8024(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8024);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,7632(r31)
	REX_STORE_U32(ctx.r31.u32 + 7632, ctx.r9.u32);
loc_8807BF4C:
	// lbz r11,31537(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 31537);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8807bf6c
	if (ctx.cr6.eq) goto loc_8807BF6C;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807bf6c
	if (ctx.cr6.eq) goto loc_8807BF6C;
	// stb r22,31538(r31)
	REX_STORE_U8(ctx.r31.u32 + 31538, ctx.r22.u8);
	// stb r22,31539(r31)
	REX_STORE_U8(ctx.r31.u32 + 31539, ctx.r22.u8);
loc_8807BF6C:
	// lwz r11,7628(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7628);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lwz r9,1416(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1416);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r11,7868(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// lwz r6,1424(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// stw r8,7628(r31)
	REX_STORE_U32(ctx.r31.u32 + 7628, ctx.r8.u32);
	// lfd f13,12408(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 12408);
	// std r7,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// subfic r4,r5,39
	ctx.xer.ca = ctx.r5.u32 <= 39;
	ctx.r4.u64 = static_cast<uint64_t>(39) - ctx.r5.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r4,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r10,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fmul f13,f11,f13
	ctx.f13.f64 = ctx.f11.f64 * ctx.f13.f64;
	// beq cr6,0x8807bfd8
	if (ctx.cr6.eq) goto loc_8807BFD8;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lfd f12,12088(r10)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r10.u32 + 12088);
	// fadd f0,f0,f12
	ctx.f0.f64 = ctx.f0.f64 + ctx.f12.f64;
loc_8807BFD8:
	// lwz r10,1360(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1360);
	// fmul f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// lwz r9,1352(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1352);
	// lfd f12,7640(r31)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 7640);
	// fadd f11,f12,f13
	ctx.f11.f64 = ctx.f12.f64 + ctx.f13.f64;
	// stfd f11,7640(r31)
	REX_STORE_U64(ctx.r31.u32 + 7640, ctx.f11.u64);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// fdiv f8,f0,f9
	ctx.f8.f64 = ctx.f0.f64 / ctx.f9.f64;
	// stfd f8,7656(r31)
	REX_STORE_U64(ctx.r31.u32 + 7656, ctx.f8.u64);
	// lwz r6,16(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// subfic r5,r6,39
	ctx.xer.ca = ctx.r6.u32 <= 39;
	ctx.r5.u64 = static_cast<uint64_t>(39) - ctx.r6.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r5,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r21)
	REX_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// lwz r3,7192(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8807c03c
	if (ctx.cr6.eq) goto loc_8807C03C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8807c03c
	if (ctx.cr6.eq) goto loc_8807C03C;
	// bl 0x880f94a0
	ctx.lr = 0x8807C03C;
	sub_880F94A0(ctx, base);
loc_8807C03C:
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6900
	ctx.lr = 0x8807C044;
	sub_880E6900(ctx, base);
	// lwz r11,8024(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807c05c
	if (ctx.cr6.eq) goto loc_8807C05C;
	// ld r11,736(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 736);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// ble cr6,0x8807c078
	if (!ctx.cr6.gt) goto loc_8807C078;
loc_8807C05C:
	// lwz r11,6860(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6860);
	// lwz r10,2124(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2124);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,6860(r31)
	REX_STORE_U32(ctx.r31.u32 + 6860, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8807c078
	if (!ctx.cr6.gt) goto loc_8807C078;
	// stw r22,6860(r31)
	REX_STORE_U32(ctx.r31.u32 + 6860, ctx.r22.u32);
loc_8807C078:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8807c0c8
	if (ctx.cr6.eq) goto loc_8807C0C8;
	// lwz r11,27988(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 27988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807c0b0
	if (ctx.cr6.eq) goto loc_8807C0B0;
	// lwz r11,31544(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807c0b0
	if (ctx.cr6.eq) goto loc_8807C0B0;
	// lwz r11,2804(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807c0bc
	if (ctx.cr6.eq) goto loc_8807C0BC;
	// lwz r11,2808(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2808);
	// b 0x8807c0b4
	goto loc_8807C0B4;
loc_8807C0B0:
	// lwz r11,2800(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
loc_8807C0B4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807c0c8
	if (!ctx.cr6.eq) goto loc_8807C0C8;
loc_8807C0BC:
	// lwz r11,7756(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7756);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,7756(r31)
	REX_STORE_U32(ctx.r31.u32 + 7756, ctx.r11.u32);
loc_8807C0C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8807C0CC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88094A90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88094A98;
	__savegprlr_14(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,436(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r20,8(r11)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// stw r10,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// addi r5,r1,412
	ctx.r5.s64 = ctx.r1.s64 + 412;
	// addi r4,r1,404
	ctx.r4.s64 = ctx.r1.s64 + 404;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// addi r27,r30,256
	ctx.r27.s64 = ctx.r30.s64 + 256;
	// bl 0x8810a970
	ctx.lr = 0x88094AE4;
	sub_8810A970(ctx, base);
	// lwz r8,412(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// li r28,16
	ctx.r28.s64 = 16;
	// lwz r7,404(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,1380(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// srawi r10,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// lwz r23,388(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// mullw r6,r10,r4
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r10,1560(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// bne cr6,0x88094b38
	if (!ctx.cr6.eq) goto loc_88094B38;
	// lwz r3,2488(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x88094B34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x88094b50
	goto loc_88094B50;
loc_88094B38:
	// lwz r3,2496(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x88094B50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88094B50:
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r1,428
	ctx.r5.s64 = ctx.r1.s64 + 428;
	// addi r4,r1,420
	ctx.r4.s64 = ctx.r1.s64 + 420;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810a970
	ctx.lr = 0x88094B68;
	sub_8810A970(ctx, base);
	// lwz r8,428(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r4,1380(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// lwz r7,420(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bne cr6,0x88094bb4
	if (!ctx.cr6.eq) goto loc_88094BB4;
	// srawi r9,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 2;
	// lwz r3,2488(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// lwz r10,1560(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x88094BB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x88094be0
	goto loc_88094BE0;
loc_88094BB4:
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// srawi r10,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// lwz r3,2496(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// mullw r9,r10,r4
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lwz r10,1560(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x88094BE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88094BE0:
	// lwz r11,2844(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2844);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x88094C0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,28020(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88094c80
	if (ctx.cr6.eq) goto loc_88094C80;
	// addi r9,r1,132
	ctx.r9.s64 = ctx.r1.s64 + 132;
	// stw r24,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r8,r1,136
	ctx.r8.s64 = ctx.r1.s64 + 136;
	// stw r25,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x88094C5C;
	sub_88085938(ctx, base);
	// lwz r6,108(r21)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r21.u32 + 108);
	// lwz r5,136(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r7,444(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mullw r10,r6,r5
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88094C80:
	// lwz r11,28024(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88094e54
	if (ctx.cr6.eq) goto loc_88094E54;
	// subf r7,r22,r30
	ctx.r7.u64 = ctx.r30.u64 - ctx.r22.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// addi r10,r30,-16
	ctx.r10.s64 = ctx.r30.s64 + -16;
	// addi r11,r22,14
	ctx.r11.s64 = ctx.r22.s64 + 14;
	// stw r7,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// b 0x88094cac
	goto loc_88094CAC;
loc_88094CA4:
	// lwz r10,140(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r7,136(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
loc_88094CAC:
	// lbz r5,21(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 21);
	// lbz r4,-9(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + -9);
	// lbz r3,20(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 20);
	// lbz r9,-10(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -10);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// lbz r31,23(r10)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 23);
	// subf r3,r9,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r9.u64;
	// lbz r4,24(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 24);
	// mullw r9,r5,r5
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r5.s32);
	// lbz r30,25(r10)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 25);
	// lbz r5,26(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 26);
	// lbz r29,27(r10)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 27);
	// lbz r28,28(r10)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 28);
	// lbz r24,18(r10)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 18);
	// lbz r23,17(r10)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r10.u32 + 17);
	// lbz r6,22(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 22);
	// lbz r27,29(r10)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 29);
	// lbz r26,31(r10)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 31);
	// lbz r25,19(r10)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 19);
	// lbzu r22,16(r10)
	ea = 16 + ctx.r10.u32;
	ctx.r22.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// mullw r8,r3,r3
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r3.s32);
	// lbz r21,-8(r11)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + -8);
	// lbz r3,-7(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + -7);
	// lbz r20,-6(r11)
	ctx.r20.u64 = REX_LOAD_U8(ctx.r11.u32 + -6);
	// lbz r19,-5(r11)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + -5);
	// stw r10,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// stb r22,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, ctx.r22.u8);
	// lbz r22,-4(r11)
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r18,-3(r11)
	ctx.r18.u64 = REX_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r17,-2(r11)
	ctx.r17.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// subf r10,r21,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r21.u64;
	// lbz r16,-1(r11)
	ctx.r16.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzx r7,r7,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// mullw r10,r10,r10
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,1(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r21,-11(r11)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + -11);
	// lbz r15,-12(r11)
	ctx.r15.u64 = REX_LOAD_U8(ctx.r11.u32 + -12);
	// lbz r14,-13(r11)
	ctx.r14.u64 = REX_LOAD_U8(ctx.r11.u32 + -13);
	// std r11,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lbz r11,-14(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -14);
	// subf r3,r3,r31
	ctx.r3.u64 = ctx.r31.u64 - ctx.r3.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r3,r3
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r3.s32);
	// lbz r31,128(r1)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r1.u32 + 128);
	// subf r3,r20,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r20.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r3,r3
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r3.s32);
	// subf r3,r19,r30
	ctx.r3.u64 = ctx.r30.u64 - ctx.r19.u64;
	// lwz r30,132(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r3,r3
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r3.s32);
	// subf r4,r22,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r22.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r4,r4
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r4.s32);
	// subf r5,r18,r29
	ctx.r5.u64 = ctx.r29.u64 - ctx.r18.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r5,r5
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r5.s32);
	// subf r5,r17,r28
	ctx.r5.u64 = ctx.r28.u64 - ctx.r17.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r5,r5
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r5.s32);
	// subf r3,r16,r27
	ctx.r3.u64 = ctx.r27.u64 - ctx.r16.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r3,r3
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r3.s32);
	// subf r5,r8,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r8.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r5,r5
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r5.s32);
	// subf r6,r6,r26
	ctx.r6.u64 = ctx.r26.u64 - ctx.r6.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r6,r6
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r6.s32);
	// subf r6,r11,r31
	ctx.r6.u64 = ctx.r31.u64 - ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r9,r6,r6
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r6.s32);
	// subf r7,r14,r23
	ctx.r7.u64 = ctx.r23.u64 - ctx.r14.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// subf r4,r21,r25
	ctx.r4.u64 = ctx.r25.u64 - ctx.r21.u64;
	// subf r8,r15,r24
	ctx.r8.u64 = ctx.r24.u64 - ctx.r15.u64;
	// mullw r9,r7,r7
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ld r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// mullw r9,r8,r8
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r4,r4
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r4.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r10,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// bdnz 0x88094ca4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88094CA4;
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// lwz r10,444(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// std r11,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f0,12088(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 12088);
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// fadd f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fctiwz f10,f11
	ctx.f10.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.f10.u64);
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88094E54:
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r7,396(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bctrl 
	ctx.lr = 0x88094E70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,444(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880AF140) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880AF148;
	__savegprlr_14(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,476(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r10.u32);
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r18,404(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// li r20,0
	ctx.r20.s64 = 0;
	// lwz r16,460(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// li r19,4
	ctx.r19.s64 = 4;
	// lwz r30,452(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// mr r24,r18
	ctx.r24.u64 = ctx.r18.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// li r15,16
	ctx.r15.s64 = 16;
	// lwz r17,0(r11)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r23,420(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r22,412(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// lwz r14,428(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// stw r4,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r4.u32);
	// stw r5,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r5.u32);
	// stw r6,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r6.u32);
	// stw r7,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r7.u32);
	// stw r8,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r8.u32);
	// stw r9,372(r1)
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r9.u32);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
loc_880AF1A8:
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r9,4(r24)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r11,2604(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2604);
	// add r28,r10,r22
	ctx.r28.u64 = ctx.r10.u64 + ctx.r22.u64;
	// add r27,r9,r23
	ctx.r27.u64 = ctx.r9.u64 + ctx.r23.u64;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880af3f4
	if (!ctx.cr6.lt) goto loc_880AF3F4;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880af3f4
	if (ctx.cr6.lt) goto loc_880AF3F4;
	// lwz r11,2608(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2608);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880af3f4
	if (!ctx.cr6.lt) goto loc_880AF3F4;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880af3f4
	if (ctx.cr6.lt) goto loc_880AF3F4;
	// lwz r4,1380(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// srawi r10,r27,2
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r27.s32 >> 2;
	// srawi r11,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 2;
	// lwz r9,356(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// mullw r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,1560(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// cmpwi cr6,r16,1
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 1, ctx.xer);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r8,r27,30
	ctx.r8.u64 = ctx.r27.u32 & 0x3;
	// clrlwi r7,r28,30
	ctx.r7.u64 = ctx.r28.u32 & 0x3;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bne cr6,0x880af238
	if (!ctx.cr6.eq) goto loc_880AF238;
	// lwz r11,2488(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r15,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r15.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880AF234;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x880af24c
	goto loc_880AF24C;
loc_880AF238:
	// lwz r11,2496(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// stw r15,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r15.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880AF24C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880AF24C:
	// lwz r11,2844(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2844);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r5,380(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// li r8,16
	ctx.r8.s64 = 16;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x880AF278;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r3,332(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880AF298;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// stw r27,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88095050
	ctx.lr = 0x880AF2C0;
	sub_88095050(ctx, base);
	// lwz r9,28100(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r26,96(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r25,100(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// beq cr6,0x880af344
	if (ctx.cr6.eq) goto loc_880AF344;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r4,364(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880AF2FC;
	sub_8810B7F8(ctx, base);
	// lwz r11,2844(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2844);
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r5,388(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x880AF328;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,340(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// li r4,8
	ctx.r4.s64 = 8;
	// mtctr r17
	ctx.ctr.u64 = ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x880AF340;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_880AF344:
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880af3c0
	if (ctx.cr6.eq) goto loc_880AF3C0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r4,372(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880AF378;
	sub_8810B7F8(ctx, base);
	// lwz r11,2844(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2844);
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r5,396(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x880AF3A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,348(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// li r4,8
	ctx.r4.s64 = 8;
	// mtctr r17
	ctx.ctr.u64 = ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x880AF3BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_880AF3C0:
	// lwz r11,444(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,436(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// subf r5,r11,r27
	ctx.r5.u64 = ctx.r27.u64 - ctx.r11.u64;
	// lwz r6,468(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// subf r4,r10,r28
	ctx.r4.u64 = ctx.r28.u64 - ctx.r10.u64;
	// bl 0x88085820
	ctx.lr = 0x880AF3DC;
	sub_88085820(ctx, base);
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// cmpw cr6,r11,r14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r14.s32, ctx.xer);
	// bge cr6,0x880af3f4
	if (!ctx.cr6.lt) goto loc_880AF3F4;
	// lwz r21,0(r24)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// mr r14,r11
	ctx.r14.u64 = ctx.r11.u64;
	// lwz r20,4(r24)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
loc_880AF3F4:
	// addic. r19,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// addi r24,r24,8
	ctx.r24.s64 = ctx.r24.s64 + 8;
	// bne 0x880af1a8
	if (!ctx.cr0.eq) goto loc_880AF1A8;
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// add r23,r20,r23
	ctx.r23.u64 = ctx.r20.u64 + ctx.r23.u64;
	// addi r24,r18,32
	ctx.r24.s64 = ctx.r18.s64 + 32;
	// add r22,r21,r22
	ctx.r22.u64 = ctx.r21.u64 + ctx.r22.u64;
	// li r19,0
	ctx.r19.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r18,4
	ctx.r18.s64 = 4;
	// addi r21,r11,6848
	ctx.r21.s64 = ctx.r11.s64 + 6848;
loc_880AF420:
	// lwz r9,0(r24)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,4(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r11,2604(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2604);
	// add r29,r9,r22
	ctx.r29.u64 = ctx.r9.u64 + ctx.r22.u64;
	// add r28,r10,r23
	ctx.r28.u64 = ctx.r10.u64 + ctx.r23.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880af6c0
	if (!ctx.cr6.lt) goto loc_880AF6C0;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880af6c0
	if (ctx.cr6.lt) goto loc_880AF6C0;
	// lwz r11,2608(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2608);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880af6c0
	if (!ctx.cr6.lt) goto loc_880AF6C0;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880af6c0
	if (ctx.cr6.lt) goto loc_880AF6C0;
	// lwz r4,1380(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// srawi r11,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 2;
	// srawi r10,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 2;
	// lwz r9,356(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,1560(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// cmpwi cr6,r16,1
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 1, ctx.xer);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r8,r28,30
	ctx.r8.u64 = ctx.r28.u32 & 0x3;
	// clrlwi r7,r29,30
	ctx.r7.u64 = ctx.r29.u32 & 0x3;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bne cr6,0x880af4b0
	if (!ctx.cr6.eq) goto loc_880AF4B0;
	// lwz r11,2488(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r15,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r15.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880AF4AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x880af4c4
	goto loc_880AF4C4;
loc_880AF4B0:
	// lwz r11,2496(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// stw r15,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r15.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880AF4C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880AF4C4:
	// lwz r11,2844(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2844);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r5,380(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// li r8,16
	ctx.r8.s64 = 16;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x880AF4F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r3,332(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880AF510;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stw r28,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88095050
	ctx.lr = 0x880AF538;
	sub_88095050(ctx, base);
	// lwz r9,28100(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r26,96(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r25,100(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// beq cr6,0x880af5bc
	if (ctx.cr6.eq) goto loc_880AF5BC;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r4,364(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880AF574;
	sub_8810B7F8(ctx, base);
	// lwz r11,2844(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2844);
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r5,388(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x880AF5A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,340(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// li r4,8
	ctx.r4.s64 = 8;
	// mtctr r17
	ctx.ctr.u64 = ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x880AF5B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r27,r3,r27
	ctx.r27.u64 = ctx.r3.u64 + ctx.r27.u64;
loc_880AF5BC:
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880af638
	if (ctx.cr6.eq) goto loc_880AF638;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r4,372(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880AF5F0;
	sub_8810B7F8(ctx, base);
	// lwz r11,2844(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2844);
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r5,396(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x880AF61C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,348(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// li r4,8
	ctx.r4.s64 = 8;
	// mtctr r17
	ctx.ctr.u64 = ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x880AF634;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r27,r3,r27
	ctx.r27.u64 = ctx.r3.u64 + ctx.r27.u64;
loc_880AF638:
	// lwz r11,436(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r10,444(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// subf r9,r11,r29
	ctx.r9.u64 = ctx.r29.u64 - ctx.r11.u64;
	// subf r8,r10,r28
	ctx.r8.u64 = ctx.r28.u64 - ctx.r10.u64;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// srawi r6,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// xor r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// xor r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r6.u64;
	// subf r11,r7,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r10,r6,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r6.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880af69c
	if (ctx.cr6.gt) goto loc_880AF69C;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880af69c
	if (ctx.cr6.gt) goto loc_880AF69C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,468(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r21
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r21.u32);
	// lwzx r6,r8,r21
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r21.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r5,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwzx r11,r4,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880af6a8
	goto loc_880AF6A8;
loc_880AF69C:
	// lwz r11,468(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_880AF6A8:
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmpw cr6,r11,r14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r14.s32, ctx.xer);
	// bge cr6,0x880af6c0
	if (!ctx.cr6.lt) goto loc_880AF6C0;
	// lwz r20,0(r24)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// mr r14,r11
	ctx.r14.u64 = ctx.r11.u64;
	// lwz r19,4(r24)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
loc_880AF6C0:
	// addic. r18,r18,-1
	ctx.xer.ca = ctx.r18.u32 > 0;
	ctx.r18.s64 = ctx.r18.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// addi r24,r24,8
	ctx.r24.s64 = ctx.r24.s64 + 8;
	// bne 0x880af420
	if (!ctx.cr0.eq) goto loc_880AF420;
	// lwz r11,484(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// add r10,r20,r22
	ctx.r10.u64 = ctx.r20.u64 + ctx.r22.u64;
	// lwz r9,492(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// add r8,r19,r23
	ctx.r8.u64 = ctx.r19.u64 + ctx.r23.u64;
	// lwz r7,500(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r14,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r14.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BC698) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x880BC6A0;
	__savegprlr_20(ctx, base);
	// add r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r4,r6,3
	ctx.r4.s64 = ctx.r6.s64 + 3;
	// addi r30,r6,2
	ctx.r30.s64 = ctx.r6.s64 + 2;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r27,0(r10)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r25,4(r10)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r28,r30,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r8,r5
	ctx.r10.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r29,r11,3
	ctx.r29.s64 = ctx.r11.s64 + 3;
	// lwzx r30,r4,r5
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// addi r26,r11,2
	ctx.r26.s64 = ctx.r11.s64 + 2;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwzx r24,r28,r5
	ctx.r24.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r5.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lwz r28,4(r10)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// addi r22,r11,2
	ctx.r22.s64 = ctx.r11.s64 + 2;
	// rlwinm r21,r29,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r31,r5
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// rlwinm r26,r26,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,4(r9)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r20,r4,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r22,r22,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r30,r24
	ctx.r10.u64 = ctx.r30.u64 + ctx.r24.u64;
	// lwzx r4,r21,r5
	ctx.r4.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r5.u32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwzx r26,r26,r5
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r5.u32);
	// add r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 + ctx.r31.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwzx r30,r20,r5
	ctx.r30.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r5.u32);
	// lwzx r29,r22,r5
	ctx.r29.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r5.u32);
	// add r4,r4,r26
	ctx.r4.u64 = ctx.r4.u64 + ctx.r26.u64;
	// add r31,r31,r25
	ctx.r31.u64 = ctx.r31.u64 + ctx.r25.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r11,r6,4
	ctx.r11.s64 = ctx.r6.s64 + 4;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r3,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFFF;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r9,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r9.u32);
	// lwzx r8,r8,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// lwzx r4,r4,r5
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r31,r11,3
	ctx.r31.s64 = ctx.r11.s64 + 3;
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r28,4(r10)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lwz r27,0(r10)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r26,r11,3
	ctx.r26.s64 = ctx.r11.s64 + 3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r9,r5
	ctx.r29.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// addi r25,r11,2
	ctx.r25.s64 = ctx.r11.s64 + 2;
	// lwzx r3,r31,r5
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r9,r8,r4
	ctx.r9.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// rlwinm r26,r26,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r25,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r8,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,0(r10)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r22,r31,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// lwzx r8,r26,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r5.u32);
	// lwzx r31,r25,r5
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r5.u32);
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// lwzx r3,r24,r5
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r5.u32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// lwzx r28,r22,r5
	ctx.r28.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r5.u32);
	// add r29,r29,r27
	ctx.r29.u64 = ctx.r29.u64 + ctx.r27.u64;
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lwz r31,4(r10)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r10,r29,r9
	ctx.r10.u64 = ctx.r29.u64 + ctx.r9.u64;
	// add r9,r3,r31
	ctx.r9.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// addi r11,r6,8
	ctx.r11.s64 = ctx.r6.s64 + 8;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r31,r11,3
	ctx.r31.s64 = ctx.r11.s64 + 3;
	// addi r30,r11,2
	ctx.r30.s64 = ctx.r11.s64 + 2;
	// rlwinm r8,r8,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,4(r23)
	REX_STORE_U32(ctx.r23.u32 + 4, ctx.r8.u32);
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,4(r10)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r29,0(r10)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r28,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r5.u32);
	// rlwinm r28,r3,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwzx r4,r30,r5
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,0(r10)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r26,r11,3
	ctx.r26.s64 = ctx.r11.s64 + 3;
	// addi r25,r11,2
	ctx.r25.s64 = ctx.r11.s64 + 2;
	// lwzx r9,r9,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// add r10,r27,r5
	ctx.r10.u64 = ctx.r27.u64 + ctx.r5.u64;
	// lwzx r28,r28,r5
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r5.u32);
	// rlwinm r26,r26,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r25,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lwzx r8,r26,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r5.u32);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lwzx r31,r25,r5
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r5.u32);
	// add r3,r4,r3
	ctx.r3.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lwz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// addi r28,r11,2
	ctx.r28.s64 = ctx.r11.s64 + 2;
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lwzx r4,r27,r5
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r5.u32);
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lwzx r8,r31,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// addi r11,r6,12
	ctx.r11.s64 = ctx.r6.s64 + 12;
	// lwzx r6,r3,r5
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r31,r11,3
	ctx.r31.s64 = ctx.r11.s64 + 3;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r8,r9,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r23)
	REX_STORE_U32(ctx.r23.u32 + 8, ctx.r8.u32);
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// lwz r28,4(r10)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lwzx r30,r4,r5
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r27,r11,3
	ctx.r27.s64 = ctx.r11.s64 + 3;
	// lwz r31,0(r10)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r26,r27,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r29,r5
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r5.u32);
	// addi r25,r11,2
	ctx.r25.s64 = ctx.r11.s64 + 2;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwzx r27,r3,r5
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r26,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r5.u32);
	// addi r26,r11,3
	ctx.r26.s64 = ctx.r11.s64 + 3;
	// addi r24,r11,2
	ctx.r24.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r25,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r7,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwzx r7,r6,r5
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// lwzx r6,r9,r5
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwzx r9,r25,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r5.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r9,r7,r4
	ctx.r9.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r26,r26,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r24,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r29,r27
	ctx.r29.u64 = ctx.r29.u64 + ctx.r27.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lwzx r10,r26,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r5.u32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lwzx r4,r4,r5
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// add r5,r9,r31
	ctx.r5.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r31,r29,r28
	ctx.r31.u64 = ctx.r29.u64 + ctx.r28.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r3,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFFF;
	// stw r11,12(r23)
	REX_STORE_U32(ctx.r23.u32 + 12, ctx.r11.u32);
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BFBB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805082c
	ctx.lr = 0x880BFBC0;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// or r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 | ctx.r5.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880bfbec
	if (ctx.cr6.eq) goto loc_880BFBEC;
	// li r22,2
	ctx.r22.s64 = 2;
	// b 0x880bfbf8
	goto loc_880BFBF8;
loc_880BFBEC:
	// subfic r11,r26,4
	ctx.xer.ca = ctx.r26.u32 <= 4;
	ctx.r11.u64 = static_cast<uint64_t>(4) - ctx.r26.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r22,r9,31
	ctx.r22.u64 = ctx.r9.u32 & 0x1;
loc_880BFBF8:
	// cmplwi cr6,r24,7
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 7, ctx.xer);
	// bge cr6,0x880bfcd8
	if (!ctx.cr6.lt) goto loc_880BFCD8;
	// mullw r11,r24,r26
	ctx.r11.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r26.s32);
	// add r29,r23,r26
	ctx.r29.u64 = ctx.r23.u64 + ctx.r26.u64;
	// add r27,r11,r23
	ctx.r27.u64 = ctx.r11.u64 + ctx.r23.u64;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x880c00dc
	if (!ctx.cr6.lt) goto loc_880C00DC;
	// subf r28,r26,r29
	ctx.r28.u64 = ctx.r29.u64 - ctx.r26.u64;
loc_880BFC18:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r23
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r23.u32, ctx.xer);
	// ble cr6,0x880bfcc0
	if (!ctx.cr6.gt) goto loc_880BFCC0;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_880BFC28:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r21
	ctx.ctr.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x880BFC38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x880bfcc0
	if (!ctx.cr6.gt) goto loc_880BFCC0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x880bfc5c
	if (!ctx.cr6.eq) goto loc_880BFC5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x880bfcac
	goto loc_880BFCAC;
loc_880BFC5C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// bgt cr6,0x880bfc8c
	if (ctx.cr6.gt) goto loc_880BFC8C;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// addi r9,r31,-4
	ctx.r9.s64 = ctx.r31.s64 + -4;
loc_880BFC70:
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// bne 0x880bfc70
	if (!ctx.cr0.eq) goto loc_880BFC70;
	// b 0x880bfcac
	goto loc_880BFCAC;
loc_880BFC8C:
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// addi r9,r31,-1
	ctx.r9.s64 = ctx.r31.s64 + -1;
loc_880BFC94:
	// lbz r8,1(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r7,1(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// stbu r7,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r9.u32 = ea;
	// bne 0x880bfc94
	if (!ctx.cr0.eq) goto loc_880BFC94;
loc_880BFCAC:
	// subf r11,r26,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r26.u64;
	// subf r31,r26,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r26.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bgt cr6,0x880bfc28
	if (ctx.cr6.gt) goto loc_880BFC28;
loc_880BFCC0:
	// add r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 + ctx.r26.u64;
	// add r28,r28,r26
	ctx.r28.u64 = ctx.r28.u64 + ctx.r26.u64;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x880bfc18
	if (ctx.cr6.lt) goto loc_880BFC18;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
loc_880BFCD8:
	// rlwinm r11,r24,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r24,7
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 7, ctx.xer);
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// add r30,r11,r23
	ctx.r30.u64 = ctx.r11.u64 + ctx.r23.u64;
	// ble cr6,0x880bfd70
	if (!ctx.cr6.gt) goto loc_880BFD70;
	// addi r11,r24,-1
	ctx.r11.s64 = ctx.r24.s64 + -1;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// add r29,r11,r23
	ctx.r29.u64 = ctx.r11.u64 + ctx.r23.u64;
	// cmplwi cr6,r24,40
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 40, ctx.xer);
	// ble cr6,0x880bfd58
	if (!ctx.cr6.gt) goto loc_880BFD58;
	// rlwinm r11,r24,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 29) & 0x1FFFFFFF;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mullw r31,r11,r26
	ctx.r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// rlwinm r28,r31,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r31,r23
	ctx.r4.u64 = ctx.r31.u64 + ctx.r23.u64;
	// add r5,r28,r23
	ctx.r5.u64 = ctx.r28.u64 + ctx.r23.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x880bfb10
	ctx.lr = 0x880BFD24;
	sub_880BFB10(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// add r5,r31,r30
	ctx.r5.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// subf r3,r31,r30
	ctx.r3.u64 = ctx.r30.u64 - ctx.r31.u64;
	// bl 0x880bfb10
	ctx.lr = 0x880BFD3C;
	sub_880BFB10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// subf r4,r31,r29
	ctx.r4.u64 = ctx.r29.u64 - ctx.r31.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// subf r3,r28,r29
	ctx.r3.u64 = ctx.r29.u64 - ctx.r28.u64;
	// bl 0x880bfb10
	ctx.lr = 0x880BFD54;
	sub_880BFB10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_880BFD58:
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x880bfb10
	ctx.lr = 0x880BFD6C;
	sub_880BFB10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_880BFD70:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x880bfdd0
	if (ctx.cr6.eq) goto loc_880BFDD0;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// bgt cr6,0x880bfdac
	if (ctx.cr6.gt) goto loc_880BFDAC;
	// addi r10,r23,-4
	ctx.r10.s64 = ctx.r23.s64 + -4;
	// addi r9,r30,-4
	ctx.r9.s64 = ctx.r30.s64 + -4;
loc_880BFD90:
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// bne 0x880bfd90
	if (!ctx.cr0.eq) goto loc_880BFD90;
	// b 0x880bfddc
	goto loc_880BFDDC;
loc_880BFDAC:
	// addi r10,r23,-1
	ctx.r10.s64 = ctx.r23.s64 + -1;
	// addi r9,r30,-1
	ctx.r9.s64 = ctx.r30.s64 + -1;
loc_880BFDB4:
	// lbz r8,1(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r7,1(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// stbu r7,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r9.u32 = ea;
	// bne 0x880bfdb4
	if (!ctx.cr0.eq) goto loc_880BFDB4;
	// b 0x880bfddc
	goto loc_880BFDDC;
loc_880BFDD0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r25,r1,80
	ctx.r25.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_880BFDDC:
	// addi r11,r24,-1
	ctx.r11.s64 = ctx.r24.s64 + -1;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// add r27,r11,r23
	ctx.r27.u64 = ctx.r11.u64 + ctx.r23.u64;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_880BFDF4:
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x880bfe94
	if (ctx.cr6.gt) goto loc_880BFE94;
loc_880BFDFC:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mtctr r21
	ctx.ctr.u64 = ctx.r21.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x880BFE0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x880bfee8
	if (ctx.cr6.gt) goto loc_880BFEE8;
	// bne cr6,0x880bfe88
	if (!ctx.cr6.eq) goto loc_880BFE88;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x880bfe34
	if (!ctx.cr6.eq) goto loc_880BFE34;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r10,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x880bfe84
	goto loc_880BFE84;
loc_880BFE34:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// bgt cr6,0x880bfe64
	if (ctx.cr6.gt) goto loc_880BFE64;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// addi r9,r29,-4
	ctx.r9.s64 = ctx.r29.s64 + -4;
loc_880BFE48:
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// bne 0x880bfe48
	if (!ctx.cr0.eq) goto loc_880BFE48;
	// b 0x880bfe84
	goto loc_880BFE84;
loc_880BFE64:
	// addi r10,r28,-1
	ctx.r10.s64 = ctx.r28.s64 + -1;
	// addi r9,r29,-1
	ctx.r9.s64 = ctx.r29.s64 + -1;
loc_880BFE6C:
	// lbz r8,1(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r7,1(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// stbu r7,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r9.u32 = ea;
	// bne 0x880bfe6c
	if (!ctx.cr0.eq) goto loc_880BFE6C;
loc_880BFE84:
	// add r28,r28,r26
	ctx.r28.u64 = ctx.r28.u64 + ctx.r26.u64;
loc_880BFE88:
	// add r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 + ctx.r26.u64;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x880bfdfc
	if (!ctx.cr6.gt) goto loc_880BFDFC;
loc_880BFE94:
	// mullw r11,r24,r26
	ctx.r11.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r26.s32);
	// add r30,r11,r23
	ctx.r30.u64 = ctx.r11.u64 + ctx.r23.u64;
	// subf r8,r28,r29
	ctx.r8.u64 = ctx.r29.u64 - ctx.r28.u64;
	// subf r11,r23,r28
	ctx.r11.u64 = ctx.r28.u64 - ctx.r23.u64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x880bfeb0
	if (ctx.cr6.lt) goto loc_880BFEB0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_880BFEB0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880c002c
	if (ctx.cr6.eq) goto loc_880C002C;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// subf r9,r11,r29
	ctx.r9.u64 = ctx.r29.u64 - ctx.r11.u64;
	// bgt cr6,0x880c000c
	if (ctx.cr6.gt) goto loc_880C000C;
	// addi r10,r23,-4
	ctx.r10.s64 = ctx.r23.s64 + -4;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_880BFECC:
	// lwz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// stwu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// bne 0x880bfecc
	if (!ctx.cr0.eq) goto loc_880BFECC;
	// b 0x880c002c
	goto loc_880C002C;
loc_880BFEE8:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mtctr r21
	ctx.ctr.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x880BFEF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880bff84
	if (ctx.cr6.lt) goto loc_880BFF84;
	// bne cr6,0x880bff74
	if (!ctx.cr6.eq) goto loc_880BFF74;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x880bff20
	if (!ctx.cr6.eq) goto loc_880BFF20;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// b 0x880bff70
	goto loc_880BFF70;
loc_880BFF20:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// bgt cr6,0x880bff50
	if (ctx.cr6.gt) goto loc_880BFF50;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// addi r9,r27,-4
	ctx.r9.s64 = ctx.r27.s64 + -4;
loc_880BFF34:
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// bne 0x880bff34
	if (!ctx.cr0.eq) goto loc_880BFF34;
	// b 0x880bff70
	goto loc_880BFF70;
loc_880BFF50:
	// addi r10,r31,-1
	ctx.r10.s64 = ctx.r31.s64 + -1;
	// addi r9,r27,-1
	ctx.r9.s64 = ctx.r27.s64 + -1;
loc_880BFF58:
	// lbz r8,1(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r7,1(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// stbu r7,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r9.u32 = ea;
	// bne 0x880bff58
	if (!ctx.cr0.eq) goto loc_880BFF58;
loc_880BFF70:
	// subf r27,r26,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r26.u64;
loc_880BFF74:
	// subf r31,r26,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r26.u64;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x880bfee8
	if (!ctx.cr6.gt) goto loc_880BFEE8;
	// b 0x880bfe94
	goto loc_880BFE94;
loc_880BFF84:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x880bffa8
	if (!ctx.cr6.eq) goto loc_880BFFA8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// add r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 + ctx.r26.u64;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// subf r31,r26,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r26.u64;
	// b 0x880bfdf4
	goto loc_880BFDF4;
loc_880BFFA8:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// bgt cr6,0x880bffe0
	if (ctx.cr6.gt) goto loc_880BFFE0;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// addi r9,r31,-4
	ctx.r9.s64 = ctx.r31.s64 + -4;
loc_880BFFBC:
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// bne 0x880bffbc
	if (!ctx.cr0.eq) goto loc_880BFFBC;
	// add r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 + ctx.r26.u64;
	// subf r31,r26,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r26.u64;
	// b 0x880bfdf4
	goto loc_880BFDF4;
loc_880BFFE0:
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
	// addi r9,r31,-1
	ctx.r9.s64 = ctx.r31.s64 + -1;
loc_880BFFE8:
	// lbz r8,1(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r7,1(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// stbu r7,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r9.u32 = ea;
	// bne 0x880bffe8
	if (!ctx.cr0.eq) goto loc_880BFFE8;
	// add r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 + ctx.r26.u64;
	// subf r31,r26,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r26.u64;
	// b 0x880bfdf4
	goto loc_880BFDF4;
loc_880C000C:
	// addi r10,r23,-1
	ctx.r10.s64 = ctx.r23.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_880C0014:
	// lbz r7,1(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r6,1(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// stbu r7,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// stbu r6,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r9.u32 = ea;
	// bne 0x880c0014
	if (!ctx.cr0.eq) goto loc_880C0014;
loc_880C002C:
	// subf r11,r27,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r27.u64;
	// subf r31,r31,r27
	ctx.r31.u64 = ctx.r27.u64 - ctx.r31.u64;
	// subf r11,r26,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r26.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x880c0044
	if (!ctx.cr6.lt) goto loc_880C0044;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_880C0044:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880c009c
	if (ctx.cr6.eq) goto loc_880C009C;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// subf r9,r11,r30
	ctx.r9.u64 = ctx.r30.u64 - ctx.r11.u64;
	// bgt cr6,0x880c007c
	if (ctx.cr6.gt) goto loc_880C007C;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_880C0060:
	// lwz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// stwu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// bne 0x880c0060
	if (!ctx.cr0.eq) goto loc_880C0060;
	// b 0x880c009c
	goto loc_880C009C;
loc_880C007C:
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_880C0084:
	// lbz r7,1(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r6,1(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// stbu r7,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// stbu r6,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r9.u32 = ea;
	// bne 0x880c0084
	if (!ctx.cr0.eq) goto loc_880C0084;
loc_880C009C:
	// cmplw cr6,r8,r26
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x880c00bc
	if (!ctx.cr6.gt) goto loc_880C00BC;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// divwu r4,r8,r26
	ctx.r4.u64 = uint32_t(ctx.r26.u32 ? ctx.r8.u32 / ctx.r26.u32 : 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// twllei r26,0
	if (ctx.r26.s32 == 0 || ctx.r26.u32 < 0u) ppc_trap(ctx, base, 0);
	// bl 0x880bfbb8
	ctx.lr = 0x880C00BC;
	sub_880BFBB8(ctx, base);
loc_880C00BC:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x880c00dc
	if (!ctx.cr6.gt) goto loc_880C00DC;
	// subf r3,r31,r30
	ctx.r3.u64 = ctx.r30.u64 - ctx.r31.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// divwu r4,r31,r26
	ctx.r4.u64 = uint32_t(ctx.r26.u32 ? ctx.r31.u32 / ctx.r26.u32 : 0);
	// twllei r26,0
	if (ctx.r26.s32 == 0 || ctx.r26.u32 < 0u) ppc_trap(ctx, base, 0);
	// bl 0x880bfbb8
	ctx.lr = 0x880C00DC;
	sub_880BFBB8(ctx, base);
loc_880C00DC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C8CF0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x880C8CF8;
	__savegprlr_27(ctx, base);
	// lwz r11,14464(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14464);
	// lis r6,-19
	ctx.r6.s64 = -1245184;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,256
	ctx.r11.s64 = 256;
	// lis r4,0
	ctx.r4.s64 = 0;
	// lis r31,2
	ctx.r31.s64 = 131072;
	// lis r30,1
	ctx.r30.s64 = 65536;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r3,13432
	ctx.r11.s64 = ctx.r3.s64 + 13432;
	// bne cr6,0x880c8d9c
	if (!ctx.cr6.eq) goto loc_880C8D9C;
	// lis r7,-259
	ctx.r7.s64 = -16973824;
	// lis r8,-51
	ctx.r8.s64 = -3342336;
	// lis r9,-105
	ctx.r9.s64 = -6881280;
	// lis r10,-205
	ctx.r10.s64 = -13434880;
	// ori r6,r6,24240
	ctx.r6.u64 = ctx.r6.u64 | 24240;
	// ori r7,r7,52096
	ctx.r7.u64 = ctx.r7.u64 | 52096;
	// ori r8,r8,55936
	ctx.r8.u64 = ctx.r8.u64 | 55936;
	// ori r9,r9,61568
	ctx.r9.u64 = ctx.r9.u64 | 61568;
	// ori r10,r10,46464
	ctx.r10.u64 = ctx.r10.u64 | 46464;
	// ori r27,r5,39061
	ctx.r27.u64 = ctx.r5.u64 | 39061;
	// ori r28,r4,53279
	ctx.r28.u64 = ctx.r4.u64 | 53279;
	// ori r29,r31,1129
	ctx.r29.u64 = ctx.r31.u64 | 1129;
	// ori r30,r30,10773
	ctx.r30.u64 = ctx.r30.u64 | 10773;
loc_880C8D58:
	// srawi r5,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 16;
	// srawi r4,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 16;
	// srawi r31,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r31.s64 = ctx.r8.s32 >> 16;
	// stw r5,-4092(r11)
	REX_STORE_U32(ctx.r11.u32 + -4092, ctx.r5.u32);
	// srawi r5,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 16;
	// stw r4,-3068(r11)
	REX_STORE_U32(ctx.r11.u32 + -3068, ctx.r4.u32);
	// srawi r4,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 16;
	// stw r31,-2044(r11)
	REX_STORE_U32(ctx.r11.u32 + -2044, ctx.r31.u32);
	// stw r5,-1020(r11)
	REX_STORE_U32(ctx.r11.u32 + -1020, ctx.r5.u32);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// addi r8,r8,25675
	ctx.r8.s64 = ctx.r8.s64 + 25675;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// bdnz 0x880c8d58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C8D58;
	// b 0x880c8e10
	goto loc_880C8E10;
loc_880C8D9C:
	// lis r7,-272
	ctx.r7.s64 = -17825792;
	// lis r8,-69
	ctx.r8.s64 = -4521984;
	// lis r9,-28
	ctx.r9.s64 = -1835008;
	// lis r10,-231
	ctx.r10.s64 = -15138816;
	// ori r6,r6,19456
	ctx.r6.u64 = ctx.r6.u64 | 19456;
	// ori r7,r7,36224
	ctx.r7.u64 = ctx.r7.u64 | 36224;
	// ori r8,r8,34048
	ctx.r8.u64 = ctx.r8.u64 | 34048;
	// ori r9,r9,39168
	ctx.r9.u64 = ctx.r9.u64 | 39168;
	// ori r10,r10,41216
	ctx.r10.u64 = ctx.r10.u64 | 41216;
	// ori r27,r5,52414
	ctx.r27.u64 = ctx.r5.u64 | 52414;
	// ori r28,r4,35062
	ctx.r28.u64 = ctx.r4.u64 | 35062;
	// ori r29,r31,7909
	ctx.r29.u64 = ctx.r31.u64 | 7909;
	// ori r30,r30,11072
	ctx.r30.u64 = ctx.r30.u64 | 11072;
loc_880C8DD0:
	// srawi r5,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 16;
	// srawi r4,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 16;
	// srawi r31,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r31.s64 = ctx.r8.s32 >> 16;
	// stw r5,-4092(r11)
	REX_STORE_U32(ctx.r11.u32 + -4092, ctx.r5.u32);
	// srawi r5,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 16;
	// stw r4,-2044(r11)
	REX_STORE_U32(ctx.r11.u32 + -2044, ctx.r4.u32);
	// srawi r4,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 16;
	// stw r31,-3068(r11)
	REX_STORE_U32(ctx.r11.u32 + -3068, ctx.r31.u32);
	// stw r5,-1020(r11)
	REX_STORE_U32(ctx.r11.u32 + -1020, ctx.r5.u32);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// addi r9,r9,14030
	ctx.r9.s64 = ctx.r9.s64 + 14030;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// bdnz 0x880c8dd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C8DD0;
loc_880C8E10:
	// lis r10,-30680
	ctx.r10.s64 = -2010644480;
	// li r11,1068
	ctx.r11.s64 = 1068;
	// addi r10,r10,18544
	ctx.r10.s64 = ctx.r10.s64 + 18544;
	// li r9,-2136
	ctx.r9.s64 = -2136;
	// addi r8,r10,2136
	ctx.r8.s64 = ctx.r10.s64 + 2136;
	// li r10,-534
	ctx.r10.s64 = -534;
	// stw r8,14460(r3)
	REX_STORE_U32(ctx.r3.u32 + 14460, ctx.r8.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_880C8E30:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x880c8e40
	if (!ctx.cr6.lt) goto loc_880C8E40;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x880c8e50
	goto loc_880C8E50;
loc_880C8E40:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// li r11,255
	ctx.r11.s64 = 255;
	// bgt cr6,0x880c8e50
	if (ctx.cr6.gt) goto loc_880C8E50;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_880C8E50:
	// lwz r8,14460(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 14460);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r11,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x880c8e30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C8E30;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CA778) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050820
	ctx.lr = 0x880CA780;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,0(r3)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,16729
	ctx.r11.s64 = 1096351744;
	// lis r5,22870
	ctx.r5.s64 = 1498808320;
	// lis r28,12849
	ctx.r28.s64 = 842072064;
	// ori r9,r11,21846
	ctx.r9.u64 = ctx.r11.u64 | 21846;
	// lis r8,22068
	ctx.r8.s64 = 1446248448;
	// lis r30,12593
	ctx.r30.s64 = 825294848;
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// lis r25,14677
	ctx.r25.s64 = 961871872;
	// lis r23,21849
	ctx.r23.s64 = 1431896064;
	// lis r22,20532
	ctx.r22.s64 = 1345585152;
	// lis r10,22066
	ctx.r10.s64 = 1446117376;
	// lis r29,12889
	ctx.r29.s64 = 844693504;
	// lis r20,22101
	ctx.r20.s64 = 1448411136;
	// lis r19,12338
	ctx.r19.s64 = 808583168;
	// lis r18,12593
	ctx.r18.s64 = 825294848;
	// ori r4,r5,22869
	ctx.r4.u64 = ctx.r5.u64 | 22869;
	// ori r27,r28,22094
	ctx.r27.u64 = ctx.r28.u64 | 22094;
	// ori r6,r8,12592
	ctx.r6.u64 = ctx.r8.u64 | 12592;
	// ori r24,r30,13392
	ctx.r24.u64 = ctx.r30.u64 | 13392;
	// ori r28,r25,22105
	ctx.r28.u64 = ctx.r25.u64 | 22105;
	// ori r5,r23,22105
	ctx.r5.u64 = ctx.r23.u64 | 22105;
	// ori r21,r22,12850
	ctx.r21.u64 = ctx.r22.u64 | 12850;
	// ori r7,r10,12598
	ctx.r7.u64 = ctx.r10.u64 | 12598;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r8,r29,21849
	ctx.r8.u64 = ctx.r29.u64 | 21849;
	// ori r22,r20,22857
	ctx.r22.u64 = ctx.r20.u64 | 22857;
	// li r25,1
	ctx.r25.s64 = 1;
	// ori r23,r19,13385
	ctx.r23.u64 = ctx.r19.u64 | 13385;
	// ori r30,r18,22094
	ctx.r30.u64 = ctx.r18.u64 | 22094;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x880ca870
	if (ctx.cr6.gt) goto loc_880CA870;
	// beq cr6,0x880ca8e8
	if (ctx.cr6.eq) goto loc_880CA8E8;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x880ca844
	if (ctx.cr6.gt) goto loc_880CA844;
	// beq cr6,0x880ca83c
	if (ctx.cr6.eq) goto loc_880CA83C;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bgt cr6,0x880ca834
	if (ctx.cr6.gt) goto loc_880CA834;
	// beq cr6,0x880ca83c
	if (ctx.cr6.eq) goto loc_880CA83C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880ca8e8
	if (ctx.cr6.eq) goto loc_880CA8E8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x880ca8e8
	if (ctx.cr6.eq) goto loc_880CA8E8;
	// b 0x880ca8ec
	goto loc_880CA8EC;
loc_880CA834:
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x880ca8ec
	if (!ctx.cr6.eq) goto loc_880CA8EC;
loc_880CA83C:
	// stw r25,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r25.u32);
	// b 0x880ca8ec
	goto loc_880CA8EC;
loc_880CA844:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x880ca864
	if (ctx.cr6.gt) goto loc_880CA864;
	// beq cr6,0x880ca8e8
	if (ctx.cr6.eq) goto loc_880CA8E8;
	// subf. r11,r27,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x880ca83c
	if (ctx.cr0.eq) goto loc_880CA83C;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// beq cr6,0x880ca83c
	if (ctx.cr6.eq) goto loc_880CA83C;
	// b 0x880ca8ec
	goto loc_880CA8EC;
loc_880CA864:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x880ca83c
	if (ctx.cr6.eq) goto loc_880CA83C;
	// b 0x880ca8ec
	goto loc_880CA8EC;
loc_880CA870:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x880ca8c0
	if (ctx.cr6.gt) goto loc_880CA8C0;
	// beq cr6,0x880ca8e8
	if (ctx.cr6.eq) goto loc_880CA8E8;
	// lis r10,21553
	ctx.r10.s64 = 1412497408;
	// ori r10,r10,13401
	ctx.r10.u64 = ctx.r10.u64 | 13401;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x880ca8ac
	if (ctx.cr6.gt) goto loc_880CA8AC;
	// beq cr6,0x880ca8e8
	if (ctx.cr6.eq) goto loc_880CA8E8;
	// lis r10,20529
	ctx.r10.s64 = 1345388544;
	// ori r10,r10,13401
	ctx.r10.u64 = ctx.r10.u64 | 13401;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x880ca8e8
	if (ctx.cr6.eq) goto loc_880CA8E8;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x880ca83c
	if (ctx.cr6.eq) goto loc_880CA83C;
	// b 0x880ca8ec
	goto loc_880CA8EC;
loc_880CA8AC:
	// lis r10,21554
	ctx.r10.s64 = 1412562944;
	// ori r10,r10,13401
	ctx.r10.u64 = ctx.r10.u64 | 13401;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x880ca8e8
	if (ctx.cr6.eq) goto loc_880CA8E8;
	// b 0x880ca8ec
	goto loc_880CA8EC;
loc_880CA8C0:
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bgt cr6,0x880ca8e0
	if (ctx.cr6.gt) goto loc_880CA8E0;
	// beq cr6,0x880ca83c
	if (ctx.cr6.eq) goto loc_880CA83C;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x880ca8e8
	if (ctx.cr6.eq) goto loc_880CA8E8;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x880ca8e8
	if (ctx.cr6.eq) goto loc_880CA8E8;
	// b 0x880ca8ec
	goto loc_880CA8EC;
loc_880CA8E0:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x880ca8ec
	if (!ctx.cr6.eq) goto loc_880CA8EC;
loc_880CA8E8:
	// stw r31,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
loc_880CA8EC:
	// lwz r29,4(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x880ca948
	if (ctx.cr6.gt) goto loc_880CA948;
	// beq cr6,0x880ca96c
	if (ctx.cr6.eq) goto loc_880CA96C;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bgt cr6,0x880ca92c
	if (ctx.cr6.gt) goto loc_880CA92C;
	// beq cr6,0x880ca924
	if (ctx.cr6.eq) goto loc_880CA924;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880ca96c
	if (ctx.cr6.eq) goto loc_880CA96C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x880ca96c
	if (ctx.cr6.eq) goto loc_880CA96C;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x880ca970
	if (!ctx.cr6.eq) goto loc_880CA970;
loc_880CA924:
	// stw r25,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r25.u32);
	// b 0x880ca970
	goto loc_880CA970;
loc_880CA92C:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x880ca924
	if (ctx.cr6.eq) goto loc_880CA924;
	// subf. r11,r27,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x880ca924
	if (ctx.cr0.eq) goto loc_880CA924;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// beq cr6,0x880ca924
	if (ctx.cr6.eq) goto loc_880CA924;
	// b 0x880ca970
	goto loc_880CA970;
loc_880CA948:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x880ca990
	if (ctx.cr6.gt) goto loc_880CA990;
	// beq cr6,0x880ca96c
	if (ctx.cr6.eq) goto loc_880CA96C;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x880ca96c
	if (ctx.cr6.eq) goto loc_880CA96C;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x880ca924
	if (ctx.cr6.eq) goto loc_880CA924;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x880ca970
	if (!ctx.cr6.eq) goto loc_880CA970;
loc_880CA96C:
	// stw r31,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
loc_880CA970:
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r26.u32);
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880ca9ac
	if (ctx.cr6.eq) goto loc_880CA9AC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x880ca9ac
	if (ctx.cr6.eq) goto loc_880CA9AC;
	// stw r25,14468(r3)
	REX_STORE_U32(ctx.r3.u32 + 14468, ctx.r25.u32);
	// b 0x880ca9c4
	goto loc_880CA9C4;
loc_880CA990:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x880ca96c
	if (ctx.cr6.eq) goto loc_880CA96C;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x880ca924
	if (ctx.cr6.eq) goto loc_880CA924;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x880ca96c
	if (ctx.cr6.eq) goto loc_880CA96C;
	// b 0x880ca970
	goto loc_880CA970;
loc_880CA9AC:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,-1
	ctx.r11.s64 = -1;
	// bgt cr6,0x880ca9c0
	if (ctx.cr6.gt) goto loc_880CA9C0;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_880CA9C0:
	// stw r11,14468(r3)
	REX_STORE_U32(ctx.r3.u32 + 14468, ctx.r11.u32);
loc_880CA9C4:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r10,r10,22105
	ctx.r10.u64 = ctx.r10.u64 | 22105;
	// stw r11,14512(r3)
	REX_STORE_U32(ctx.r3.u32 + 14512, ctx.r11.u32);
	// lwz r9,8(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r6,r8,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// stw r6,14516(r3)
	REX_STORE_U32(ctx.r3.u32 + 14516, ctx.r6.u32);
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x880caa54
	if (ctx.cr6.gt) goto loc_880CAA54;
	// beq cr6,0x880caa6c
	if (ctx.cr6.eq) goto loc_880CAA6C;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x880caa40
	if (ctx.cr6.gt) goto loc_880CAA40;
	// beq cr6,0x880caa6c
	if (ctx.cr6.eq) goto loc_880CAA6C;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x880caa6c
	if (ctx.cr6.eq) goto loc_880CAA6C;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x880caa24
	if (!ctx.cr6.eq) goto loc_880CAA24;
loc_880CAA14:
	// lwz r11,14512(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14512);
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
loc_880CAA1C:
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// stw r8,14520(r3)
	REX_STORE_U32(ctx.r3.u32 + 14520, ctx.r8.u32);
loc_880CAA24:
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880caa78
	if (ctx.cr6.eq) goto loc_880CAA78;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x880caa78
	if (ctx.cr6.eq) goto loc_880CAA78;
	// stw r25,14472(r3)
	REX_STORE_U32(ctx.r3.u32 + 14472, ctx.r25.u32);
	// b 0x880caa90
	goto loc_880CAA90;
loc_880CAA40:
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x880caa24
	if (!ctx.cr6.eq) goto loc_880CAA24;
	// lwz r11,14512(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14512);
	// stw r11,14520(r3)
	REX_STORE_U32(ctx.r3.u32 + 14520, ctx.r11.u32);
	// b 0x880caa24
	goto loc_880CAA24;
loc_880CAA54:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x880caa14
	if (ctx.cr6.eq) goto loc_880CAA14;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x880caa6c
	if (ctx.cr6.eq) goto loc_880CAA6C;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x880caa24
	if (!ctx.cr6.eq) goto loc_880CAA24;
loc_880CAA6C:
	// lwz r11,14512(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14512);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// b 0x880caa1c
	goto loc_880CAA1C;
loc_880CAA78:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,-1
	ctx.r11.s64 = -1;
	// bgt cr6,0x880caa8c
	if (ctx.cr6.gt) goto loc_880CAA8C;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_880CAA8C:
	// stw r11,14472(r3)
	REX_STORE_U32(ctx.r3.u32 + 14472, ctx.r11.u32);
loc_880CAA90:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,14476(r3)
	REX_STORE_U32(ctx.r3.u32 + 14476, ctx.r11.u32);
	// lwz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r6,r8,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// stw r6,14480(r3)
	REX_STORE_U32(ctx.r3.u32 + 14480, ctx.r6.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x880caae0
	if (ctx.cr6.gt) goto loc_880CAAE0;
	// beq cr6,0x880caad4
	if (ctx.cr6.eq) goto loc_880CAAD4;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x880caaf8
	if (ctx.cr6.eq) goto loc_880CAAF8;
	// subf. r11,r24,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r24.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x880caaf8
	if (ctx.cr0.eq) goto loc_880CAAF8;
	// cmplwi cr6,r11,8702
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8702, ctx.xer);
	// b 0x880caaf4
	goto loc_880CAAF4;
loc_880CAAD4:
	// lwz r11,14476(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14476);
	// stw r11,14484(r3)
	REX_STORE_U32(ctx.r3.u32 + 14484, ctx.r11.u32);
	// b 0x880cab08
	goto loc_880CAB08;
loc_880CAAE0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x880caaf8
	if (ctx.cr6.eq) goto loc_880CAAF8;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x880caaf8
	if (ctx.cr6.eq) goto loc_880CAAF8;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
loc_880CAAF4:
	// bne cr6,0x880cab08
	if (!ctx.cr6.eq) goto loc_880CAB08;
loc_880CAAF8:
	// lwz r11,14476(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14476);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// stw r9,14484(r3)
	REX_STORE_U32(ctx.r3.u32 + 14484, ctx.r9.u32);
loc_880CAB08:
	// lwz r11,14632(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// bne cr6,0x880cab1c
	if (!ctx.cr6.eq) goto loc_880CAB1C;
	// lwz r7,8(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
loc_880CAB1C:
	// lwz r11,14628(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// bne cr6,0x880cab30
	if (!ctx.cr6.eq) goto loc_880CAB30;
	// lwz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
loc_880CAB30:
	// lwz r11,14624(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14624);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880cab40
	if (!ctx.cr6.eq) goto loc_880CAB40;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
loc_880CAB40:
	// lwz r4,14620(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 14620);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x880cab50
	if (!ctx.cr6.eq) goto loc_880CAB50;
	// lwz r4,4(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
loc_880CAB50:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x880c9958
	ctx.lr = 0x880CAB58;
	sub_880C9958(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D0C70) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x880D0C78;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// bne cr6,0x880d0ca0
	if (!ctx.cr6.eq) goto loc_880D0CA0;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_880D0CA0:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,428(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 428);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r29,r31,424
	ctx.r29.s64 = ctx.r31.s64 + 424;
	// addi r30,r31,496
	ctx.r30.s64 = ctx.r31.s64 + 496;
	// bl 0x8805adc8
	ctx.lr = 0x880D0CC4;
	sub_8805ADC8(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x880d0cd8
	if (ctx.cr6.eq) goto loc_880D0CD8;
loc_880D0CCC:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_880D0CD8:
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// sth r10,0(r30)
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r10.u16);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r7,r8,25
	ctx.r7.u64 = ctx.r8.u32 & 0x7F;
	// stb r7,4(r30)
	REX_STORE_U8(ctx.r30.u32 + 4, ctx.r7.u8);
	// lbz r6,1(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r6,5(r30)
	REX_STORE_U8(ctx.r30.u32 + 5, ctx.r6.u8);
	// lbz r11,29(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 29);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x880d0db8
	if (ctx.cr6.eq) goto loc_880D0DB8;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x880d0d70
	if (ctx.cr6.eq) goto loc_880D0D70;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x880d0dec
	if (!ctx.cr6.eq) goto loc_880D0DEC;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x8805adc8
	ctx.lr = 0x880D0D34;
	sub_8805ADC8(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x880d0ccc
	if (!ctx.cr6.eq) goto loc_880D0CCC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// b 0x880d0dec
	goto loc_880D0DEC;
loc_880D0D70:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x8805adc8
	ctx.lr = 0x880D0D90;
	sub_8805ADC8(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x880d0ccc
	if (!ctx.cr6.eq) goto loc_880D0CCC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r9,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// b 0x880d0dec
	goto loc_880D0DEC;
loc_880D0DB8:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x8805adc8
	ctx.lr = 0x880D0DD8;
	sub_8805ADC8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x880d0ccc
	if (!ctx.cr6.eq) goto loc_880D0CCC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
loc_880D0DEC:
	// lbz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 28);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrldi r28,r11,32
	ctx.r28.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r11,r9,r28
	ctx.r11.u64 = ctx.r9.u64 + ctx.r28.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8805adc8
	ctx.lr = 0x880D0E18;
	sub_8805ADC8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x880d0ccc
	if (!ctx.cr6.eq) goto loc_880D0CCC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stb r9,20(r30)
	REX_STORE_U8(ctx.r30.u32 + 20, ctx.r9.u8);
	// bne cr6,0x880d0eec
	if (!ctx.cr6.eq) goto loc_880D0EEC;
	// stw r26,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r26.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r10,29(r30)
	REX_STORE_U8(ctx.r30.u32 + 29, ctx.r10.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r26,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x8805adc8
	ctx.lr = 0x880D0E7C;
	sub_8805ADC8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x880d0ccc
	if (!ctx.cr6.eq) goto loc_880D0CCC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,36(r30)
	REX_STORE_U32(ctx.r30.u32 + 36, ctx.r10.u32);
	// lwz r9,24(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880d0ee4
	if (ctx.cr6.eq) goto loc_880D0EE4;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x8805adc8
	ctx.lr = 0x880D0EC0;
	sub_8805ADC8(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x880d0ccc
	if (!ctx.cr6.eq) goto loc_880D0CCC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r9,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r25,r8,16
	ctx.r25.u64 = ctx.r8.u32 & 0xFFFF;
	// b 0x880d10b4
	goto loc_880D10B4;
loc_880D0EE4:
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// b 0x880d10b4
	goto loc_880D10B4;
loc_880D0EEC:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x880d10b4
	if (ctx.cr6.lt) goto loc_880D10B4;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x8805adc8
	ctx.lr = 0x880D0F18;
	sub_8805ADC8(ctx, base);
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// bne cr6,0x880d0ccc
	if (!ctx.cr6.eq) goto loc_880D0CCC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r6,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r5,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r5.u32);
	// lbz r4,7(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// rotlwi r10,r4,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// lbz r8,6(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r9,5(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// stb r26,29(r30)
	REX_STORE_U8(ctx.r30.u32 + 29, ctx.r26.u8);
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// lwz r9,552(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 552);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880d10b4
	if (ctx.cr6.eq) goto loc_880D10B4;
	// lbz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 4);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// addi r11,r31,244
	ctx.r11.s64 = ctx.r31.s64 + 244;
loc_880D0F98:
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x880d0fb4
	if (ctx.cr6.eq) goto loc_880D0FB4;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// blt cr6,0x880d0f98
	if (ctx.cr6.lt) goto loc_880D0F98;
loc_880D0FB4:
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// beq cr6,0x880d1284
	if (ctx.cr6.eq) goto loc_880D1284;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lbz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r28,r9,-8
	ctx.r28.s64 = ctx.r9.s64 + -8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,9
	ctx.r4.s64 = ctx.r11.s64 + 9;
	// bl 0x8805adc8
	ctx.lr = 0x880D0FE8;
	sub_8805ADC8(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x880d0ccc
	if (!ctx.cr6.eq) goto loc_880D0CCC;
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,248
	ctx.r8.s64 = 248;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_880D1004:
	// add r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x880d1040
	if (!ctx.cr6.eq) goto loc_880D1040;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// blt cr6,0x880d0ccc
	if (ctx.cr6.lt) goto loc_880D0CCC;
	// lbz r11,1(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// addi r28,r28,-2
	ctx.r28.s64 = ctx.r28.s64 + -2;
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
loc_880D1040:
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x880d0ccc
	if (ctx.cr6.lt) goto loc_880D0CCC;
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880d1070
	if (!ctx.cr6.eq) goto loc_880D1070;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r8,280
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 280, ctx.xer);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// blt cr6,0x880d1004
	if (ctx.cr6.lt) goto loc_880D1004;
	// b 0x880d10b4
	goto loc_880D10B4;
loc_880D1070:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// ble cr6,0x880d1088
	if (!ctx.cr6.gt) goto loc_880D1088;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_880D1088:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x880d10b0
	if (ctx.cr6.eq) goto loc_880D10B0;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_880D1094:
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lbzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rldicr r8,r8,8,55
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x880d1094
	if (ctx.cr6.lt) goto loc_880D1094;
loc_880D10B0:
	// std r8,600(r31)
	REX_STORE_U64(ctx.r31.u32 + 600, ctx.r8.u64);
loc_880D10B4:
	// lbz r10,28(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 28);
	// lbz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 20);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,2(r30)
	REX_STORE_U16(ctx.r30.u32 + 2, ctx.r11.u16);
	// lwz r10,24(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880d11d8
	if (ctx.cr6.eq) goto loc_880D11D8;
	// lbz r10,62(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 62);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x880d11a0
	if (ctx.cr6.eq) goto loc_880D11A0;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x880d1158
	if (ctx.cr6.eq) goto loc_880D1158;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x880d10fc
	if (ctx.cr6.eq) goto loc_880D10FC;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x880d1214
	goto loc_880D1214;
loc_880D10FC:
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// clrldi r11,r11,48
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFF;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8805adc8
	ctx.lr = 0x880D1120;
	sub_8805ADC8(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x880d0ccc
	if (!ctx.cr6.eq) goto loc_880D0CCC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880d1214
	goto loc_880D1214;
loc_880D1158:
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// clrldi r11,r11,48
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFF;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8805adc8
	ctx.lr = 0x880D117C;
	sub_8805ADC8(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x880d0ccc
	if (!ctx.cr6.eq) goto loc_880D0CCC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r9,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// b 0x880d1214
	goto loc_880D1214;
loc_880D11A0:
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// clrldi r11,r11,48
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFF;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8805adc8
	ctx.lr = 0x880D11C4;
	sub_8805ADC8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x880d0ccc
	if (!ctx.cr6.eq) goto loc_880D0CCC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x880d1214
	goto loc_880D1214;
loc_880D11D8:
	// lwz r10,36(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// lwz r7,4(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880d11fc
	if (ctx.cr6.eq) goto loc_880D11FC;
	// lwz r9,52(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 52);
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// subf r6,r9,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subf r5,r8,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r8.u64;
	// b 0x880d1210
	goto loc_880D1210;
loc_880D11FC:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r8,52(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 52);
	// subf r6,r8,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r8.u64;
	// subf r5,r9,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r9.u64;
loc_880D1210:
	// subf r11,r7,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r7.u64;
loc_880D1214:
	// clrlwi r10,r25,16
	ctx.r10.u64 = ctx.r25.u32 & 0xFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880d1224
	if (!ctx.cr6.eq) goto loc_880D1224;
	// clrlwi r25,r11,16
	ctx.r25.u64 = ctx.r11.u32 & 0xFFFF;
loc_880D1224:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lhz r10,2(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 2);
	// sth r11,22(r30)
	REX_STORE_U16(ctx.r30.u32 + 22, ctx.r11.u16);
	// lbz r9,63(r29)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + 63);
	// sth r25,26(r30)
	REX_STORE_U16(ctx.r30.u32 + 26, ctx.r25.u16);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r11,2(r30)
	REX_STORE_U16(ctx.r30.u32 + 2, ctx.r11.u16);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x880d1284
	if (ctx.cr6.gt) goto loc_880D1284;
	// bne cr6,0x880d1278
	if (!ctx.cr6.eq) goto loc_880D1278;
	// lwz r11,68(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 68);
	// lwz r10,540(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 540);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x880d1284
	if (ctx.cr6.lt) goto loc_880D1284;
loc_880D1278:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_880D1284:
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DB6A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050814
	ctx.lr = 0x880DB6B0;
	__savegprlr_15(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// stw r6,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r7,52(r1)
	REX_STORE_U32(ctx.r1.u32 + 52, ctx.r7.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blt cr6,0x880db90c
	if (ctx.cr6.lt) goto loc_880DB90C;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r4,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 4;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r11,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r11.s64 = temp.s64;
	// add r6,r9,r5
	ctx.r6.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r11.u32);
	// li r31,4
	ctx.r31.s64 = 4;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r10,6
	ctx.r11.s64 = ctx.r10.s64 + 6;
	// addi r10,r8,6
	ctx.r10.s64 = ctx.r8.s64 + 6;
	// subf r29,r9,r7
	ctx.r29.u64 = ctx.r7.u64 - ctx.r9.u64;
	// addi r9,r5,6
	ctx.r9.s64 = ctx.r5.s64 + 6;
	// addi r8,r6,6
	ctx.r8.s64 = ctx.r6.s64 + 6;
loc_880DB710:
	// lbz r6,-6(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + -6);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// lbz r7,-6(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + -6);
	// lbz r4,-5(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + -5);
	// lbz r5,-5(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + -5);
	// subf r7,r7,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r7.u64;
	// lbz r6,-4(r9)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + -4);
	// subf r5,r5,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r5.u64;
	// lbz r4,-4(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + -4);
	// srawi r28,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r7.s32 >> 31;
	// lbz r30,-3(r9)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r9.u32 + -3);
	// srawi r27,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r5.s32 >> 31;
	// lbz r26,-3(r11)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + -3);
	// subf r6,r6,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r6.u64;
	// lbz r25,-2(r11)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// xor r5,r5,r27
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r27.u64;
	// lbz r4,-2(r9)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + -2);
	// xor r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r28.u64;
	// lbz r22,-1(r11)
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// subf r26,r30,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r30.u64;
	// lbz r24,-1(r9)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r9.u32 + -1);
	// srawi r23,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r6.s32 >> 31;
	// lbz r21,1(r9)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// subf r30,r27,r5
	ctx.r30.u64 = ctx.r5.u64 - ctx.r27.u64;
	// lbz r27,1(r11)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// subf r5,r28,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r28.u64;
	// lbz r28,-6(r10)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + -6);
	// xor r6,r6,r23
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r23.u64;
	// lbz r7,-6(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + -6);
	// srawi r20,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r20.s64 = ctx.r26.s32 >> 31;
	// lbz r19,-5(r8)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r8.u32 + -5);
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// lbz r18,-5(r10)
	ctx.r18.u64 = REX_LOAD_U8(ctx.r10.u32 + -5);
	// subf r4,r4,r25
	ctx.r4.u64 = ctx.r25.u64 - ctx.r4.u64;
	// lbz r25,-4(r8)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r8.u32 + -4);
	// subf r30,r23,r6
	ctx.r30.u64 = ctx.r6.u64 - ctx.r23.u64;
	// lbz r6,-4(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + -4);
	// xor r26,r26,r20
	ctx.r26.u64 = ctx.r26.u64 ^ ctx.r20.u64;
	// lbz r23,-3(r8)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r8.u32 + -3);
	// srawi r17,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r17.s64 = ctx.r4.s32 >> 31;
	// lbz r16,-3(r10)
	ctx.r16.u64 = REX_LOAD_U8(ctx.r10.u32 + -3);
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// lbz r15,-2(r8)
	ctx.r15.u64 = REX_LOAD_U8(ctx.r8.u32 + -2);
	// subf r24,r24,r22
	ctx.r24.u64 = ctx.r22.u64 - ctx.r24.u64;
	// lbz r22,-2(r10)
	ctx.r22.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// subf r30,r20,r26
	ctx.r30.u64 = ctx.r26.u64 - ctx.r20.u64;
	// xor r4,r4,r17
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r17.u64;
	// srawi r26,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r24.s32 >> 31;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r27,r21,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r21.u64;
	// subf r30,r17,r4
	ctx.r30.u64 = ctx.r4.u64 - ctx.r17.u64;
	// xor r4,r24,r26
	ctx.r4.u64 = ctx.r24.u64 ^ ctx.r26.u64;
	// srawi r24,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r24.s64 = ctx.r27.s32 >> 31;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r7,r7,r28
	ctx.r7.u64 = ctx.r28.u64 - ctx.r7.u64;
	// subf r30,r26,r4
	ctx.r30.u64 = ctx.r4.u64 - ctx.r26.u64;
	// xor r4,r27,r24
	ctx.r4.u64 = ctx.r27.u64 ^ ctx.r24.u64;
	// srawi r28,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r7.s32 >> 31;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r27,r19,r18
	ctx.r27.u64 = ctx.r18.u64 - ctx.r19.u64;
	// subf r30,r24,r4
	ctx.r30.u64 = ctx.r4.u64 - ctx.r24.u64;
	// xor r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r28.u64;
	// srawi r4,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r27.s32 >> 31;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r6,r25,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r25.u64;
	// subf r30,r28,r7
	ctx.r30.u64 = ctx.r7.u64 - ctx.r28.u64;
	// xor r7,r27,r4
	ctx.r7.u64 = ctx.r27.u64 ^ ctx.r4.u64;
	// srawi r28,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r6.s32 >> 31;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r27,r23,r16
	ctx.r27.u64 = ctx.r16.u64 - ctx.r23.u64;
	// subf r30,r4,r7
	ctx.r30.u64 = ctx.r7.u64 - ctx.r4.u64;
	// xor r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r28.u64;
	// srawi r4,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r27.s32 >> 31;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r30,r28,r6
	ctx.r30.u64 = ctx.r6.u64 - ctx.r28.u64;
	// xor r7,r27,r4
	ctx.r7.u64 = ctx.r27.u64 ^ ctx.r4.u64;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r30,r4,r7
	ctx.r30.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r6,r15,r22
	ctx.r6.u64 = ctx.r22.u64 - ctx.r15.u64;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// srawi r4,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 31;
	// xor r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r4.u64;
	// lbz r7,-1(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + -1);
	// lbz r28,-1(r10)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// subf r30,r4,r6
	ctx.r30.u64 = ctx.r6.u64 - ctx.r4.u64;
	// lbz r27,1(r8)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// subf r4,r7,r28
	ctx.r4.u64 = ctx.r28.u64 - ctx.r7.u64;
	// lbz r7,1(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// lbz r28,0(r10)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// srawi r30,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r4.s32 >> 31;
	// lbz r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// subf r7,r27,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r27.u64;
	// lbz r27,0(r9)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// xor r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r30.u64;
	// lbz r26,0(r11)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// srawi r25,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r7.s32 >> 31;
	// subf r6,r6,r28
	ctx.r6.u64 = ctx.r28.u64 - ctx.r6.u64;
	// subf r30,r30,r4
	ctx.r30.u64 = ctx.r4.u64 - ctx.r30.u64;
	// xor r4,r7,r25
	ctx.r4.u64 = ctx.r7.u64 ^ ctx.r25.u64;
	// srawi r7,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 31;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r28,r27,r26
	ctx.r28.u64 = ctx.r26.u64 - ctx.r27.u64;
	// subf r30,r25,r4
	ctx.r30.u64 = ctx.r4.u64 - ctx.r25.u64;
	// xor r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// srawi r4,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r28.s32 >> 31;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r30,r7,r6
	ctx.r30.u64 = ctx.r6.u64 - ctx.r7.u64;
	// xor r7,r28,r4
	ctx.r7.u64 = ctx.r28.u64 ^ ctx.r4.u64;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r30,r4,r7
	ctx.r30.u64 = ctx.r7.u64 - ctx.r4.u64;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// add r3,r5,r3
	ctx.r3.u64 = ctx.r5.u64 + ctx.r3.u64;
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x880db908
	if (!ctx.cr6.lt) goto loc_880DB908;
	// lwz r7,28(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r6,-160(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r7,44(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// add r29,r29,r6
	ctx.r29.u64 = ctx.r29.u64 + ctx.r6.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// bne cr6,0x880db710
	if (!ctx.cr6.eq) goto loc_880DB710;
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
loc_880DB908:
	// lwz r3,52(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
loc_880DB90C:
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DEF58) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x880DEF60;
	__savegprlr_25(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// srawi r26,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 2;
	// srawi r10,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 2;
	// li r27,8
	ctx.r27.s64 = 8;
	// mullw r11,r10,r6
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r30,r11,r5
	ctx.r30.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_880DEF80:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r30,2
	ctx.r29.s64 = ctx.r30.s64 + 2;
	// addi r28,r31,2
	ctx.r28.s64 = ctx.r31.s64 + 2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880DEF94:
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r9,1(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi. r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x880defbc
	if (!ctx.cr0.lt) goto loc_880DEFBC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x880defc8
	goto loc_880DEFC8;
loc_880DEFBC:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x880defc8
	if (!ctx.cr6.gt) goto loc_880DEFC8;
	// li r10,255
	ctx.r10.s64 = 255;
loc_880DEFC8:
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// lbz r10,2(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// lbz r9,1(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r8,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r8.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi. r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x880deff4
	if (!ctx.cr0.lt) goto loc_880DEFF4;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x880df000
	goto loc_880DF000;
loc_880DEFF4:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x880df000
	if (!ctx.cr6.gt) goto loc_880DF000;
	// li r10,255
	ctx.r10.s64 = 255;
loc_880DF000:
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stb r25,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r25.u8);
	// lbz r9,1(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi. r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x880df034
	if (!ctx.cr0.lt) goto loc_880DF034;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x880df040
	goto loc_880DF040;
loc_880DF034:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x880df040
	if (!ctx.cr6.gt) goto loc_880DF040;
	// li r10,255
	ctx.r10.s64 = 255;
loc_880DF040:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stbx r10,r28,r11
	REX_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// bdnz 0x880def94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880DEF94;
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r30,r30,r6
	ctx.r30.u64 = ctx.r30.u64 + ctx.r6.u64;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// bne 0x880def80
	if (!ctx.cr0.eq) goto loc_880DEF80;
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// addi r4,r7,640
	ctx.r4.s64 = ctx.r7.s64 + 640;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// srawi r11,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 2;
	// mullw r28,r10,r6
	ctx.r28.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r29,9
	ctx.r29.s64 = 9;
	// add r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_880DF080:
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r3,3
	ctx.r31.s64 = ctx.r3.s64 + 3;
	// addi r30,r4,3
	ctx.r30.s64 = ctx.r4.s64 + 3;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880DF094:
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbzx r9,r10,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// lbzx r10,r3,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi. r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x880df0bc
	if (!ctx.cr0.lt) goto loc_880DF0BC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x880df0c8
	goto loc_880DF0C8;
loc_880DF0BC:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x880df0c8
	if (!ctx.cr6.gt) goto loc_880DF0C8;
	// li r10,255
	ctx.r10.s64 = 255;
loc_880DF0C8:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stbx r9,r4,r11
	REX_STORE_U8(ctx.r4.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbzx r9,r10,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// lbz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi. r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x880df0fc
	if (!ctx.cr0.lt) goto loc_880DF0FC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x880df108
	goto loc_880DF108;
loc_880DF0FC:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x880df108
	if (!ctx.cr6.gt) goto loc_880DF108;
	// li r10,255
	ctx.r10.s64 = 255;
loc_880DF108:
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stb r27,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r27.u8);
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi. r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x880df140
	if (!ctx.cr0.lt) goto loc_880DF140;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x880df14c
	goto loc_880DF14C;
loc_880DF140:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x880df14c
	if (!ctx.cr6.gt) goto loc_880DF14C;
	// li r10,255
	ctx.r10.s64 = 255;
loc_880DF14C:
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stb r27,2(r9)
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r27.u8);
	// lbzx r9,r10,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi. r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x880df180
	if (!ctx.cr0.lt) goto loc_880DF180;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x880df18c
	goto loc_880DF18C;
loc_880DF180:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x880df18c
	if (!ctx.cr6.gt) goto loc_880DF18C;
	// li r10,255
	ctx.r10.s64 = 255;
loc_880DF18C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stbx r10,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x880df094
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880DF094;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// bne 0x880df080
	if (!ctx.cr0.eq) goto loc_880DF080;
	// add r11,r28,r26
	ctx.r11.u64 = ctx.r28.u64 + ctx.r26.u64;
	// addi r30,r7,1280
	ctx.r30.s64 = ctx.r7.s64 + 1280;
	// add r31,r11,r5
	ctx.r31.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r3,r6,1
	ctx.r3.s64 = ctx.r6.s64 + 1;
	// li r26,9
	ctx.r26.s64 = 9;
loc_880DF1C0:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r29,r30,1
	ctx.r29.s64 = ctx.r30.s64 + 1;
	// addi r28,r31,2
	ctx.r28.s64 = ctx.r31.s64 + 2;
	// addi r27,r30,2
	ctx.r27.s64 = ctx.r30.s64 + 2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_880DF1D8:
	// add r11,r31,r10
	ctx.r11.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lbzx r9,r3,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// lbzx r7,r11,r6
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// lbz r5,1(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// add r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// srawi. r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x880df210
	if (!ctx.cr0.lt) goto loc_880DF210;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x880df21c
	goto loc_880DF21C;
loc_880DF210:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x880df21c
	if (!ctx.cr6.gt) goto loc_880DF21C;
	// li r11,255
	ctx.r11.s64 = 255;
loc_880DF21C:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// add r11,r31,r10
	ctx.r11.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stbx r9,r10,r30
	REX_STORE_U8(ctx.r10.u32 + ctx.r30.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r4,r11,r6
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// lbzx r5,r3,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r5,r4
	ctx.r11.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r11,r8,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r8.u64;
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// srawi. r11,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x880df260
	if (!ctx.cr0.lt) goto loc_880DF260;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x880df26c
	goto loc_880DF26C;
loc_880DF260:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x880df26c
	if (!ctx.cr6.gt) goto loc_880DF26C;
	// li r11,255
	ctx.r11.s64 = 255;
loc_880DF26C:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// add r11,r28,r10
	ctx.r11.u64 = ctx.r28.u64 + ctx.r10.u64;
	// stbx r9,r29,r10
	REX_STORE_U8(ctx.r29.u32 + ctx.r10.u32, ctx.r9.u8);
	// lbzx r9,r3,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// lbzx r7,r11,r6
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// lbz r5,1(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbzx r9,r28,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r10.u32);
	// add r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r11,r8,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r8.u64;
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// srawi. r11,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x880df2ac
	if (!ctx.cr0.lt) goto loc_880DF2AC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x880df2b8
	goto loc_880DF2B8;
loc_880DF2AC:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x880df2b8
	if (!ctx.cr6.gt) goto loc_880DF2B8;
	// li r11,255
	ctx.r11.s64 = 255;
loc_880DF2B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stbx r11,r27,r10
	REX_STORE_U8(ctx.r27.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// bdnz 0x880df1d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880DF1D8;
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// add r31,r31,r6
	ctx.r31.u64 = ctx.r31.u64 + ctx.r6.u64;
	// bne 0x880df1c0
	if (!ctx.cr0.eq) goto loc_880DF1C0;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E4DD8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,7972(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 7972);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880e4e0c
	if (!ctx.cr6.eq) goto loc_880E4E0C;
	// lwz r10,7984(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 7984);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880e4e64
	if (ctx.cr6.eq) goto loc_880E4E64;
loc_880E4E0C:
	// lwz r10,31532(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 31532);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x880e4e28
	if (!ctx.cr6.eq) goto loc_880E4E28;
	// lbz r10,31536(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 31536);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880e4e50
	if (ctx.cr6.eq) goto loc_880E4E50;
loc_880E4E28:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,31552(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 31552);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x880be3d8
	ctx.lr = 0x880E4E3C;
	sub_880BE3D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880e4e50
	if (ctx.cr6.eq) goto loc_880E4E50;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lwz r10,-19960(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -19960);
	// b 0x880e4e58
	goto loc_880E4E58;
loc_880E4E50:
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lwz r10,-19940(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -19940);
loc_880E4E58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880E4E64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880E4E64:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880E68E0) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r4,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// stw r6,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r6.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880E6920) {
	REX_FUNC_PROLOGUE();
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// stw r5,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r4,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// ori r8,r10,65535
	ctx.r8.u64 = ctx.r10.u64 | 65535;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r9,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r6,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r6.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r8,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880E6C68) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880E6C70) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30693
	ctx.r11.s64 = -2011496448;
	// lis r10,-30700
	ctx.r10.s64 = -2011955200;
	// lis r9,-30693
	ctx.r9.s64 = -2011496448;
	// lis r5,-30693
	ctx.r5.s64 = -2011496448;
	// addi r8,r11,11568
	ctx.r8.s64 = ctx.r11.s64 + 11568;
	// addi r7,r10,-21912
	ctx.r7.s64 = ctx.r10.s64 + -21912;
	// addi r6,r9,9344
	ctx.r6.s64 = ctx.r9.s64 + 9344;
	// stw r8,2068(r3)
	REX_STORE_U32(ctx.r3.u32 + 2068, ctx.r8.u32);
	// addi r11,r5,10672
	ctx.r11.s64 = ctx.r5.s64 + 10672;
	// stw r7,2056(r3)
	REX_STORE_U32(ctx.r3.u32 + 2056, ctx.r7.u32);
	// rotlwi r4,r8,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r6,2060(r3)
	REX_STORE_U32(ctx.r3.u32 + 2060, ctx.r6.u32);
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r11,2064(r3)
	REX_STORE_U32(ctx.r3.u32 + 2064, ctx.r11.u32);
	// rotlwi r9,r6,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r4,2084(r3)
	REX_STORE_U32(ctx.r3.u32 + 2084, ctx.r4.u32);
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r10,2072(r3)
	REX_STORE_U32(ctx.r3.u32 + 2072, ctx.r10.u32);
	// stw r9,2076(r3)
	REX_STORE_U32(ctx.r3.u32 + 2076, ctx.r9.u32);
	// stw r8,2080(r3)
	REX_STORE_U32(ctx.r3.u32 + 2080, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880E7798) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x880E77A0;
	__savegprlr_19(ctx, base);
	// lwz r11,800(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 800);
	// lwz r10,796(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 796);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r5,720(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lwz r9,1380(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1380);
	// rlwinm r10,r11,1,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x10;
	// lwz r4,1624(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 1624);
	// rlwinm r11,r8,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// lwz r30,728(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 728);
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r29,1360(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 1360);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r28,1372(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 1372);
	// add r10,r5,r8
	ctx.r10.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lwz r6,1396(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1396);
	// lwz r7,1400(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1400);
	// xori r8,r11,24
	ctx.r8.u64 = ctx.r11.u64 ^ 24;
	// rlwinm r31,r9,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r27,r10,8,0,23
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// srawi r8,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 3;
	// stw r6,3048(r3)
	REX_STORE_U32(ctx.r3.u32 + 3048, ctx.r6.u32);
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r7,3052(r3)
	REX_STORE_U32(ctx.r3.u32 + 3052, ctx.r7.u32);
	// divwu r11,r29,r4
	ctx.r11.u64 = uint32_t(ctx.r4.u32 ? ctx.r29.u32 / ctx.r4.u32 : 0);
	// stw r31,19088(r3)
	REX_STORE_U32(ctx.r3.u32 + 19088, ctx.r31.u32);
	// divwu r10,r28,r4
	ctx.r10.u64 = uint32_t(ctx.r4.u32 ? ctx.r28.u32 / ctx.r4.u32 : 0);
	// stw r8,7996(r3)
	REX_STORE_U32(ctx.r3.u32 + 7996, ctx.r8.u32);
	// twllei r4,0
	if (ctx.r4.s32 == 0 || ctx.r4.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r30,19460(r3)
	REX_STORE_U32(ctx.r3.u32 + 19460, ctx.r30.u32);
	// twllei r4,0
	if (ctx.r4.s32 == 0 || ctx.r4.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r27,19452(r3)
	REX_STORE_U32(ctx.r3.u32 + 19452, ctx.r27.u32);
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// stw r11,3028(r3)
	REX_STORE_U32(ctx.r3.u32 + 3028, ctx.r11.u32);
	// stw r10,3036(r3)
	REX_STORE_U32(ctx.r3.u32 + 3036, ctx.r10.u32);
	// blt cr6,0x880e78d8
	if (ctx.cr6.lt) goto loc_880E78D8;
	// lwz r8,1384(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 1384);
	// mullw r9,r11,r9
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// stw r11,3992(r3)
	REX_STORE_U32(ctx.r3.u32 + 3992, ctx.r11.u32);
	// stw r10,4000(r3)
	REX_STORE_U32(ctx.r3.u32 + 4000, ctx.r10.u32);
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r10,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r27,r9,r6
	ctx.r27.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r31,3996(r3)
	REX_STORE_U32(ctx.r3.u32 + 3996, ctx.r31.u32);
	// add r26,r8,r7
	ctx.r26.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r30,4004(r3)
	REX_STORE_U32(ctx.r3.u32 + 4004, ctx.r30.u32);
	// stw r27,4016(r3)
	REX_STORE_U32(ctx.r3.u32 + 4016, ctx.r27.u32);
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// stw r26,4020(r3)
	REX_STORE_U32(ctx.r3.u32 + 4020, ctx.r26.u32);
	// bne cr6,0x880e78d8
	if (!ctx.cr6.eq) goto loc_880E78D8;
	// stw r31,4960(r3)
	REX_STORE_U32(ctx.r3.u32 + 4960, ctx.r31.u32);
	// rlwinm r31,r8,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r9,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,4968(r3)
	REX_STORE_U32(ctx.r3.u32 + 4968, ctx.r30.u32);
	// stw r28,5940(r3)
	REX_STORE_U32(ctx.r3.u32 + 5940, ctx.r28.u32);
	// rlwinm r28,r9,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r8,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r29,5932(r3)
	REX_STORE_U32(ctx.r3.u32 + 5932, ctx.r29.u32);
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// rlwinm r29,r10,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r31,r28,r6
	ctx.r31.u64 = ctx.r28.u64 + ctx.r6.u64;
	// stw r11,4964(r3)
	REX_STORE_U32(ctx.r3.u32 + 4964, ctx.r11.u32);
	// add r30,r26,r7
	ctx.r30.u64 = ctx.r26.u64 + ctx.r7.u64;
	// stw r10,4972(r3)
	REX_STORE_U32(ctx.r3.u32 + 4972, ctx.r10.u32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r31,4984(r3)
	REX_STORE_U32(ctx.r3.u32 + 4984, ctx.r31.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r30,4988(r3)
	REX_STORE_U32(ctx.r3.u32 + 4988, ctx.r30.u32);
	// stw r11,5928(r3)
	REX_STORE_U32(ctx.r3.u32 + 5928, ctx.r11.u32);
	// stw r10,5936(r3)
	REX_STORE_U32(ctx.r3.u32 + 5936, ctx.r10.u32);
	// stw r9,5952(r3)
	REX_STORE_U32(ctx.r3.u32 + 5952, ctx.r9.u32);
	// stw r8,5956(r3)
	REX_STORE_U32(ctx.r3.u32 + 5956, ctx.r8.u32);
loc_880E78D8:
	// lwz r8,724(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// li r22,0
	ctx.r22.s64 = 0;
	// divwu r11,r5,r4
	ctx.r11.u64 = uint32_t(ctx.r4.u32 ? ctx.r5.u32 / ctx.r4.u32 : 0);
	// divwu r25,r8,r4
	ctx.r25.u64 = uint32_t(ctx.r4.u32 ? ctx.r8.u32 / ctx.r4.u32 : 0);
	// stw r22,3112(r3)
	REX_STORE_U32(ctx.r3.u32 + 3112, ctx.r22.u32);
	// twllei r4,0
	if (ctx.r4.s32 == 0 || ctx.r4.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r22,3120(r3)
	REX_STORE_U32(ctx.r3.u32 + 3120, ctx.r22.u32);
	// twllei r4,0
	if (ctx.r4.s32 == 0 || ctx.r4.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r11,3628(r3)
	REX_STORE_U32(ctx.r3.u32 + 3628, ctx.r11.u32);
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// stw r25,3116(r3)
	REX_STORE_U32(ctx.r3.u32 + 3116, ctx.r25.u32);
	// bne cr6,0x880e7910
	if (!ctx.cr6.eq) goto loc_880E7910;
	// stw r8,3124(r3)
	REX_STORE_U32(ctx.r3.u32 + 3124, ctx.r8.u32);
	// b 0x880e7918
	goto loc_880E7918;
loc_880E7910:
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,3124(r3)
	REX_STORE_U32(ctx.r3.u32 + 3124, ctx.r11.u32);
loc_880E7918:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// add r23,r6,r11
	ctx.r23.u64 = ctx.r6.u64 + ctx.r11.u64;
	// stw r23,784(r3)
	REX_STORE_U32(ctx.r3.u32 + 784, ctx.r23.u32);
	// blt cr6,0x880e7fa0
	if (ctx.cr6.lt) goto loc_880E7FA0;
	// lwz r11,3124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3124);
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// stw r25,4080(r3)
	REX_STORE_U32(ctx.r3.u32 + 4080, ctx.r25.u32);
	// stw r11,4088(r3)
	REX_STORE_U32(ctx.r3.u32 + 4088, ctx.r11.u32);
	// bne cr6,0x880e795c
	if (!ctx.cr6.eq) goto loc_880E795C;
	// rlwinm r11,r8,31,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x3FFFFFFF;
	// rlwinm r10,r8,31,2,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x3FFFFFFE;
	// rlwinm r9,r5,31,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x3FFFFFFF;
	// stw r11,4084(r3)
	REX_STORE_U32(ctx.r3.u32 + 4084, ctx.r11.u32);
	// stw r10,4092(r3)
	REX_STORE_U32(ctx.r3.u32 + 4092, ctx.r10.u32);
	// stw r9,4596(r3)
	REX_STORE_U32(ctx.r3.u32 + 4596, ctx.r9.u32);
	// b 0x880e7968
	goto loc_880E7968;
loc_880E795C:
	// stw r8,4084(r3)
	REX_STORE_U32(ctx.r3.u32 + 4084, ctx.r8.u32);
	// stw r5,4596(r3)
	REX_STORE_U32(ctx.r3.u32 + 4596, ctx.r5.u32);
	// stw r8,4092(r3)
	REX_STORE_U32(ctx.r3.u32 + 4092, ctx.r8.u32);
loc_880E7968:
	// mullw r11,r25,r5
	ctx.r11.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r5.s32);
	// lwz r24,3400(r3)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 3400);
	// lwz r6,3404(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 3404);
	// lwz r31,3408(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 3408);
	// lwz r30,1608(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1608);
	// stw r11,4100(r3)
	REX_STORE_U32(ctx.r3.u32 + 4100, ctx.r11.u32);
	// stw r11,4104(r3)
	REX_STORE_U32(ctx.r3.u32 + 4104, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r29,r11,r7
	ctx.r29.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r7,r10,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,9,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// rlwinm r29,r25,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r7,r24
	ctx.r7.u64 = ctx.r7.u64 + ctx.r24.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r29,4096(r3)
	REX_STORE_U32(ctx.r3.u32 + 4096, ctx.r29.u32);
	// add r31,r31,r10
	ctx.r31.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stw r7,4368(r3)
	REX_STORE_U32(ctx.r3.u32 + 4368, ctx.r7.u32);
	// stw r6,4372(r3)
	REX_STORE_U32(ctx.r3.u32 + 4372, ctx.r6.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r31,4376(r3)
	REX_STORE_U32(ctx.r3.u32 + 4376, ctx.r31.u32);
	// beq cr6,0x880e7a60
	if (ctx.cr6.eq) goto loc_880E7A60;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r31,3412(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 3412);
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r30,3416(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 3416);
	// add r29,r11,r7
	ctx.r29.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r7,3420(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 3420);
	// add r27,r11,r6
	ctx.r27.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r6,3424(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 3424);
	// rlwinm r11,r29,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r29,3104(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 3104);
	// lwz r28,3428(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 3428);
	// rlwinm r26,r27,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// add r21,r31,r11
	ctx.r21.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r27,3432(r3)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 3432);
	// add r20,r30,r11
	ctx.r20.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r31,3436(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 3436);
	// add r19,r7,r11
	ctx.r19.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r30,3440(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 3440);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r7,3108(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 3108);
	// add r6,r29,r9
	ctx.r6.u64 = ctx.r29.u64 + ctx.r9.u64;
	// stw r21,4380(r3)
	REX_STORE_U32(ctx.r3.u32 + 4380, ctx.r21.u32);
	// add r29,r28,r10
	ctx.r29.u64 = ctx.r28.u64 + ctx.r10.u64;
	// stw r11,4392(r3)
	REX_STORE_U32(ctx.r3.u32 + 4392, ctx.r11.u32);
	// add r28,r27,r10
	ctx.r28.u64 = ctx.r27.u64 + ctx.r10.u64;
	// stw r20,4384(r3)
	REX_STORE_U32(ctx.r3.u32 + 4384, ctx.r20.u32);
	// add r31,r31,r10
	ctx.r31.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stw r19,4388(r3)
	REX_STORE_U32(ctx.r3.u32 + 4388, ctx.r19.u32);
	// add r11,r30,r10
	ctx.r11.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stw r6,4072(r3)
	REX_STORE_U32(ctx.r3.u32 + 4072, ctx.r6.u32);
	// add r10,r26,r7
	ctx.r10.u64 = ctx.r26.u64 + ctx.r7.u64;
	// stw r29,4396(r3)
	REX_STORE_U32(ctx.r3.u32 + 4396, ctx.r29.u32);
	// stw r28,4400(r3)
	REX_STORE_U32(ctx.r3.u32 + 4400, ctx.r28.u32);
	// stw r31,4404(r3)
	REX_STORE_U32(ctx.r3.u32 + 4404, ctx.r31.u32);
	// stw r11,4408(r3)
	REX_STORE_U32(ctx.r3.u32 + 4408, ctx.r11.u32);
	// stw r10,4076(r3)
	REX_STORE_U32(ctx.r3.u32 + 4076, ctx.r10.u32);
loc_880E7A60:
	// lwz r11,1404(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1404);
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// lwz r7,1408(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1408);
	// mullw r11,r11,r25
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r25.s32);
	// lwz r10,3396(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3396);
	// stw r11,4420(r3)
	REX_STORE_U32(ctx.r3.u32 + 4420, ctx.r11.u32);
	// add r4,r23,r11
	ctx.r4.u64 = ctx.r23.u64 + ctx.r11.u64;
	// mullw r6,r25,r7
	ctx.r6.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r7.s32);
	// stw r4,4412(r3)
	REX_STORE_U32(ctx.r3.u32 + 4412, ctx.r4.u32);
	// stw r6,4424(r3)
	REX_STORE_U32(ctx.r3.u32 + 4424, ctx.r6.u32);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,4364(r3)
	REX_STORE_U32(ctx.r3.u32 + 4364, ctx.r11.u32);
	// bne cr6,0x880e7fa0
	if (!ctx.cr6.eq) goto loc_880E7FA0;
	// rlwinm r9,r8,31,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x3FFFFFFF;
	// lwz r7,4092(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4092);
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r11,r5,r9
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// stw r9,5048(r3)
	REX_STORE_U32(ctx.r3.u32 + 5048, ctx.r9.u32);
	// stw r11,5068(r3)
	REX_STORE_U32(ctx.r3.u32 + 5068, ctx.r11.u32);
	// stw r11,5072(r3)
	REX_STORE_U32(ctx.r3.u32 + 5072, ctx.r11.u32);
	// stw r7,5056(r3)
	REX_STORE_U32(ctx.r3.u32 + 5056, ctx.r7.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// rlwinm r9,r6,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r7,r9,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,5052(r3)
	REX_STORE_U32(ctx.r3.u32 + 5052, ctx.r9.u32);
	// rlwinm r6,r10,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r5,r8,3,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF0;
	// stw r7,5060(r3)
	REX_STORE_U32(ctx.r3.u32 + 5060, ctx.r7.u32);
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stw r6,5564(r3)
	REX_STORE_U32(ctx.r3.u32 + 5564, ctx.r6.u32);
	// stw r5,5064(r3)
	REX_STORE_U32(ctx.r3.u32 + 5064, ctx.r5.u32);
	// stw r4,5336(r3)
	REX_STORE_U32(ctx.r3.u32 + 5336, ctx.r4.u32);
	// lwz r10,3404(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3404);
	// lwz r9,720(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r11,5048(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5048);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r8,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 9) & 0xFFFFFE00;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,5340(r3)
	REX_STORE_U32(ctx.r3.u32 + 5340, ctx.r7.u32);
	// lwz r10,3408(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3408);
	// lwz r6,5048(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r5,720(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mullw r11,r6,r5
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,5344(r3)
	REX_STORE_U32(ctx.r3.u32 + 5344, ctx.r11.u32);
	// lwz r10,1608(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1608);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880e7cb0
	if (ctx.cr6.eq) goto loc_880E7CB0;
	// lwz r9,720(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r11,5048(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r10,3412(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3412);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,5348(r3)
	REX_STORE_U32(ctx.r3.u32 + 5348, ctx.r7.u32);
	// lwz r10,3416(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3416);
	// lwz r6,5048(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r5,720(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mullw r11,r6,r5
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,5352(r3)
	REX_STORE_U32(ctx.r3.u32 + 5352, ctx.r11.u32);
	// lwz r10,3420(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3420);
	// lwz r8,720(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r9,5048(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 5048);
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,5356(r3)
	REX_STORE_U32(ctx.r3.u32 + 5356, ctx.r6.u32);
	// lwz r10,3424(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3424);
	// lwz r5,5048(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r4,720(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mullw r11,r5,r4
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,5360(r3)
	REX_STORE_U32(ctx.r3.u32 + 5360, ctx.r10.u32);
	// lwz r10,3104(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3104);
	// lwz r9,5048(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r8,720(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 9) & 0xFFFFFE00;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,5040(r3)
	REX_STORE_U32(ctx.r3.u32 + 5040, ctx.r6.u32);
	// lwz r10,3428(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3428);
	// lwz r5,5048(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r4,720(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mullw r11,r5,r4
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,5364(r3)
	REX_STORE_U32(ctx.r3.u32 + 5364, ctx.r10.u32);
	// lwz r10,3432(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3432);
	// lwz r9,5048(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r8,720(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,5368(r3)
	REX_STORE_U32(ctx.r3.u32 + 5368, ctx.r6.u32);
	// lwz r10,3436(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3436);
	// lwz r5,5048(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r4,720(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mullw r11,r5,r4
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,5372(r3)
	REX_STORE_U32(ctx.r3.u32 + 5372, ctx.r10.u32);
	// lwz r10,3440(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3440);
	// lwz r9,5048(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r8,720(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,5376(r3)
	REX_STORE_U32(ctx.r3.u32 + 5376, ctx.r6.u32);
	// lwz r5,5048(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r4,720(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r10,3108(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3108);
	// mullw r11,r5,r4
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,5044(r3)
	REX_STORE_U32(ctx.r3.u32 + 5044, ctx.r10.u32);
loc_880E7CB0:
	// lwz r11,1404(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1404);
	// lwz r10,5048(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5048);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r9,5388(r3)
	REX_STORE_U32(ctx.r3.u32 + 5388, ctx.r9.u32);
	// lwz r8,5048(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r7,1408(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1408);
	// mullw r6,r8,r7
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// stw r6,5392(r3)
	REX_STORE_U32(ctx.r3.u32 + 5392, ctx.r6.u32);
	// lwz r10,784(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 784);
	// lwz r11,5388(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5388);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,5380(r3)
	REX_STORE_U32(ctx.r3.u32 + 5380, ctx.r5.u32);
	// lwz r10,3396(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3396);
	// lwz r4,5048(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r11,720(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mullw r11,r4,r11
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,5332(r3)
	REX_STORE_U32(ctx.r3.u32 + 5332, ctx.r8.u32);
	// lwz r7,1624(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1624);
	// lwz r11,724(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r5,r6,r7
	ctx.r5.u64 = uint32_t(ctx.r7.u32 ? ctx.r6.u32 / ctx.r7.u32 : 0);
	// stw r5,6016(r3)
	REX_STORE_U32(ctx.r3.u32 + 6016, ctx.r5.u32);
	// lwz r4,5060(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 5060);
	// stw r4,6024(r3)
	REX_STORE_U32(ctx.r3.u32 + 6024, ctx.r4.u32);
	// lwz r11,724(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// stw r11,6020(r3)
	REX_STORE_U32(ctx.r3.u32 + 6020, ctx.r11.u32);
	// lwz r10,724(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// stw r10,6028(r3)
	REX_STORE_U32(ctx.r3.u32 + 6028, ctx.r10.u32);
	// lwz r9,720(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// stw r9,6532(r3)
	REX_STORE_U32(ctx.r3.u32 + 6532, ctx.r9.u32);
	// lwz r8,6016(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 6016);
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r7,6032(r3)
	REX_STORE_U32(ctx.r3.u32 + 6032, ctx.r7.u32);
	// lwz r6,720(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r5,6016(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 6016);
	// mullw r4,r6,r5
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// stw r4,6036(r3)
	REX_STORE_U32(ctx.r3.u32 + 6036, ctx.r4.u32);
	// lwz r11,720(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r10,6016(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 6016);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r9,6040(r3)
	REX_STORE_U32(ctx.r3.u32 + 6040, ctx.r9.u32);
	// lwz r10,3400(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3400);
	// lwz r8,720(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r7,6016(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 6016);
	// mullw r11,r8,r7
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,6304(r3)
	REX_STORE_U32(ctx.r3.u32 + 6304, ctx.r5.u32);
	// lwz r10,3404(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3404);
	// lwz r4,720(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r11,6016(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 6016);
	// mullw r11,r4,r11
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,6308(r3)
	REX_STORE_U32(ctx.r3.u32 + 6308, ctx.r8.u32);
	// lwz r10,3408(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3408);
	// lwz r7,6016(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 6016);
	// lwz r6,720(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mullw r11,r6,r7
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,6312(r3)
	REX_STORE_U32(ctx.r3.u32 + 6312, ctx.r4.u32);
	// lwz r11,1608(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e7f4c
	if (ctx.cr6.eq) goto loc_880E7F4C;
	// lwz r9,6016(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 6016);
	// lwz r11,720(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r10,3412(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3412);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,6316(r3)
	REX_STORE_U32(ctx.r3.u32 + 6316, ctx.r7.u32);
	// lwz r10,3416(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3416);
	// lwz r6,720(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r5,6016(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 6016);
	// mullw r11,r6,r5
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,6320(r3)
	REX_STORE_U32(ctx.r3.u32 + 6320, ctx.r11.u32);
	// lwz r10,3420(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3420);
	// lwz r9,720(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r8,6016(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 6016);
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,6324(r3)
	REX_STORE_U32(ctx.r3.u32 + 6324, ctx.r6.u32);
	// lwz r10,3424(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3424);
	// lwz r5,720(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r4,6016(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 6016);
	// mullw r11,r5,r4
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,6328(r3)
	REX_STORE_U32(ctx.r3.u32 + 6328, ctx.r10.u32);
	// lwz r10,3104(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3104);
	// lwz r9,6016(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 6016);
	// lwz r8,720(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mullw r11,r8,r9
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 9) & 0xFFFFFE00;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,6008(r3)
	REX_STORE_U32(ctx.r3.u32 + 6008, ctx.r6.u32);
	// lwz r5,720(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r4,6016(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 6016);
	// mullw r11,r5,r4
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,3428(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3428);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,6332(r3)
	REX_STORE_U32(ctx.r3.u32 + 6332, ctx.r10.u32);
	// lwz r10,3432(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3432);
	// lwz r9,720(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r8,6016(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 6016);
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,6336(r3)
	REX_STORE_U32(ctx.r3.u32 + 6336, ctx.r6.u32);
	// lwz r4,720(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r5,6016(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 6016);
	// mullw r11,r4,r5
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,3436(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3436);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,6340(r3)
	REX_STORE_U32(ctx.r3.u32 + 6340, ctx.r10.u32);
	// lwz r10,3440(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3440);
	// lwz r9,720(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r8,6016(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 6016);
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,6344(r3)
	REX_STORE_U32(ctx.r3.u32 + 6344, ctx.r6.u32);
	// lwz r5,720(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r4,6016(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 6016);
	// lwz r10,3108(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3108);
	// mullw r11,r5,r4
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,6012(r3)
	REX_STORE_U32(ctx.r3.u32 + 6012, ctx.r10.u32);
loc_880E7F4C:
	// lwz r11,1404(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1404);
	// lwz r10,6016(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 6016);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r9,6356(r3)
	REX_STORE_U32(ctx.r3.u32 + 6356, ctx.r9.u32);
	// lwz r8,1408(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 1408);
	// lwz r7,6016(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 6016);
	// mullw r6,r7,r8
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// stw r6,6360(r3)
	REX_STORE_U32(ctx.r3.u32 + 6360, ctx.r6.u32);
	// lwz r11,6356(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 6356);
	// lwz r10,784(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 784);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,6348(r3)
	REX_STORE_U32(ctx.r3.u32 + 6348, ctx.r5.u32);
	// lwz r10,3396(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3396);
	// lwz r4,6016(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 6016);
	// lwz r11,720(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,6300(r3)
	REX_STORE_U32(ctx.r3.u32 + 6300, ctx.r8.u32);
loc_880E7FA0:
	// lwz r11,31544(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e8040
	if (!ctx.cr6.eq) goto loc_880E8040;
	// lwz r10,768(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 768);
	// lwz r11,1396(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1396);
	// lwz r10,64(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,784(r3)
	REX_STORE_U32(ctx.r3.u32 + 784, ctx.r9.u32);
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// lwz r8,772(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 772);
	// lwz r10,64(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 64);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,19092(r3)
	REX_STORE_U32(ctx.r3.u32 + 19092, ctx.r7.u32);
	// lwz r6,772(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 772);
	// lwz r10,1400(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1400);
	// lwz r11,88(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 88);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,19096(r3)
	REX_STORE_U32(ctx.r3.u32 + 19096, ctx.r5.u32);
	// lwz r4,772(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 772);
	// lwz r10,1400(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1400);
	// lwz r11,112(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 112);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,19100(r3)
	REX_STORE_U32(ctx.r3.u32 + 19100, ctx.r11.u32);
	// lwz r11,1624(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1624);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x880e8040
	if (ctx.cr6.lt) goto loc_880E8040;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// lwz r10,4420(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4420);
	// lwz r11,784(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 784);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,4412(r3)
	REX_STORE_U32(ctx.r3.u32 + 4412, ctx.r11.u32);
	// blt cr6,0x880e8040
	if (ctx.cr6.lt) goto loc_880E8040;
	// lwz r10,784(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 784);
	// lwz r11,5388(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5388);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,5380(r3)
	REX_STORE_U32(ctx.r3.u32 + 5380, ctx.r11.u32);
	// lwz r11,6356(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 6356);
	// lwz r10,784(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 784);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,6348(r3)
	REX_STORE_U32(ctx.r3.u32 + 6348, ctx.r10.u32);
loc_880E8040:
	// lwz r11,2336(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2336);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e80b4
	if (ctx.cr6.eq) goto loc_880E80B4;
	// lwz r11,796(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 796);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e8064
	if (!ctx.cr6.eq) goto loc_880E8064;
	// lwz r11,720(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// b 0x880e807c
	goto loc_880E807C;
loc_880E8064:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// lwz r11,720(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// bge cr6,0x880e8078
	if (!ctx.cr6.lt) goto loc_880E8078;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// b 0x880e807c
	goto loc_880E807C;
loc_880E8078:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_880E807C:
	// stw r11,7072(r3)
	REX_STORE_U32(ctx.r3.u32 + 7072, ctx.r11.u32);
	// lwz r11,800(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 800);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e8098
	if (!ctx.cr6.eq) goto loc_880E8098;
	// lwz r11,724(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// b 0x880e80b0
	goto loc_880E80B0;
loc_880E8098:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// lwz r11,724(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// bge cr6,0x880e80ac
	if (!ctx.cr6.lt) goto loc_880E80AC;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// b 0x880e80b0
	goto loc_880E80B0;
loc_880E80AC:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_880E80B0:
	// stw r11,7076(r3)
	REX_STORE_U32(ctx.r3.u32 + 7076, ctx.r11.u32);
loc_880E80B4:
	// lwz r11,724(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x880e815c
	if (!ctx.cr6.gt) goto loc_880E815C;
loc_880E80C8:
	// lwz r10,720(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x880e814c
	if (!ctx.cr6.gt) goto loc_880E814C;
	// cntlzw r8,r6
	ctx.r8.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// mulli r10,r9,276
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(276));
	// rlwinm r5,r8,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_880E80E4:
	// lwz r8,724(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// cntlzw r4,r11
	ctx.r4.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r7,720(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r31,r8,-1
	ctx.r31.s64 = ctx.r8.s64 + -1;
	// lwz r8,7764(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 7764);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// subf r31,r6,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r6.u64;
	// subf r7,r11,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r11.u64;
	// cntlzw r31,r31
	ctx.r31.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r31,r31,28,30,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0x2;
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// or r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 | ctx.r7.u64;
	// rlwinm r4,r4,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// or r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 | ctx.r5.u64;
	// addi r10,r10,276
	ctx.r10.s64 = ctx.r10.s64 + 276;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// or r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 | ctx.r4.u64;
	// stw r4,120(r8)
	REX_STORE_U32(ctx.r8.u32 + 120, ctx.r4.u32);
	// lwz r8,720(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x880e80e4
	if (ctx.cr6.lt) goto loc_880E80E4;
loc_880E814C:
	// lwz r11,724(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x880e80c8
	if (ctx.cr6.lt) goto loc_880E80C8;
loc_880E815C:
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881025F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050814
	ctx.lr = 0x88102600;
	__savegprlr_15(ctx, base);
	// stfd f29,-168(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.f29.u64);
	// stfd f30,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.f30.u64);
	// stfd f31,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, ctx.f31.u64);
	// stwu r1,-880(r1)
	ea = -880 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// addi r9,r1,191
	ctx.r9.s64 = ctx.r1.s64 + 191;
	// mr r19,r10
	ctx.r19.u64 = ctx.r10.u64;
	// rlwinm r28,r9,0,0,26
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// mr r16,r5
	ctx.r16.u64 = ctx.r5.u64;
	// mr r15,r6
	ctx.r15.u64 = ctx.r6.u64;
	// mr r17,r7
	ctx.r17.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// addi r10,r4,152
	ctx.r10.s64 = ctx.r4.s64 + 152;
	// li r9,0
	ctx.r9.s64 = 0;
loc_88102648:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x88102648
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88102648;
	// lwz r11,2800(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 2800);
	// addi r21,r18,4
	ctx.r21.s64 = ctx.r18.s64 + 4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x88102668
	if (ctx.cr6.eq) goto loc_88102668;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8810266c
	if (!ctx.cr6.eq) goto loc_8810266C;
loc_88102668:
	// addi r21,r1,128
	ctx.r21.s64 = ctx.r1.s64 + 128;
loc_8810266C:
	// lwz r31,972(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 972);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88102680
	if (ctx.cr6.eq) goto loc_88102680;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x88102690
	if (!ctx.cr6.eq) goto loc_88102690;
loc_88102680:
	// lwz r11,2572(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 2572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88102690
	if (!ctx.cr6.eq) goto loc_88102690;
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
loc_88102690:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lwz r26,988(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 988);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r24,r11,23328
	ctx.r24.s64 = ctx.r11.s64 + 23328;
	// addi r25,r10,-2
	ctx.r25.s64 = ctx.r10.s64 + -2;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lfd f30,12088(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r11.u32 + 12088);
	// subf r22,r24,r21
	ctx.r22.u64 = ctx.r21.u64 - ctx.r24.u64;
	// lfd f29,1488(r10)
	ctx.f29.u64 = REX_LOAD_U64(ctx.r10.u32 + 1488);
	// lfd f31,19224(r9)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r9.u32 + 19224);
loc_881026C8:
	// lwz r11,8072(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8072);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881026E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// lfs f0,48(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r26.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// std r8,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r8.u64);
	// lfd f13,120(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fmul f12,f0,f13
	ctx.f12.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fmul f11,f12,f31
	ctx.f11.f64 = ctx.f12.f64 * ctx.f31.f64;
	// fcmpu cr6,f11,f29
	ctx.cr6.compare(ctx.f11.f64, ctx.f29.f64);
	// ble cr6,0x88102724
	if (!ctx.cr6.gt) goto loc_88102724;
	// fmadd f13,f0,f31,f30
	ctx.f13.f64 = std::fma(ctx.f0.f64, ctx.f31.f64, ctx.f30.f64);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x88102734
	goto loc_88102734;
loc_88102724:
	// fmsub f13,f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = std::fma(ctx.f0.f64, ctx.f31.f64, -ctx.f30.f64);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_88102734:
	// sth r11,0(r29)
	REX_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x880feb98
	ctx.lr = 0x88102758;
	sub_880FEB98(ctx, base);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r9,r24,16
	ctx.r9.s64 = ctx.r24.s64 + 16;
	// stwx r10,r22,r30
	REX_STORE_U32(ctx.r22.u32 + ctx.r30.u32, ctx.r10.u32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// sthu r10,2(r25)
	ea = 2 + ctx.r25.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r25.u32 = ea;
	// addi r29,r29,256
	ctx.r29.s64 = ctx.r29.s64 + 256;
	// add r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 + ctx.r23.u64;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x881026c8
	if (ctx.cr6.lt) goto loc_881026C8;
	// lwz r11,8072(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8072);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881027A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// lfs f0,48(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r26.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fmul f12,f0,f13
	ctx.f12.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fmul f11,f12,f31
	ctx.f11.f64 = ctx.f12.f64 * ctx.f31.f64;
	// fcmpu cr6,f11,f29
	ctx.cr6.compare(ctx.f11.f64, ctx.f29.f64);
	// ble cr6,0x881027e4
	if (!ctx.cr6.gt) goto loc_881027E4;
	// fmadd f13,f0,f31,f30
	ctx.f13.f64 = std::fma(ctx.f0.f64, ctx.f31.f64, ctx.f30.f64);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x881027f4
	goto loc_881027F4;
loc_881027E4:
	// fmsub f13,f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = std::fma(ctx.f0.f64, ctx.f31.f64, -ctx.f30.f64);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_881027F4:
	// sth r11,1024(r31)
	REX_STORE_U16(ctx.r31.u32 + 1024, ctx.r11.u16);
	// addi r4,r31,1024
	ctx.r4.s64 = ctx.r31.s64 + 1024;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x880feb98
	ctx.lr = 0x88102818;
	sub_880FEB98(ctx, base);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r9,16(r21)
	REX_STORE_U32(ctx.r21.u32 + 16, ctx.r9.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r8,8072(r27)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 8072);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8810283C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// lfs f0,48(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r26.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// std r5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fmul f12,f0,f13
	ctx.f12.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fmul f11,f12,f31
	ctx.f11.f64 = ctx.f12.f64 * ctx.f31.f64;
	// fcmpu cr6,f11,f29
	ctx.cr6.compare(ctx.f11.f64, ctx.f29.f64);
	// ble cr6,0x8810287c
	if (!ctx.cr6.gt) goto loc_8810287C;
	// fmadd f13,f0,f31,f30
	ctx.f13.f64 = std::fma(ctx.f0.f64, ctx.f31.f64, ctx.f30.f64);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8810288c
	goto loc_8810288C;
loc_8810287C:
	// fmsub f13,f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = std::fma(ctx.f0.f64, ctx.f31.f64, -ctx.f30.f64);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8810288C:
	// sth r11,1280(r31)
	REX_STORE_U16(ctx.r31.u32 + 1280, ctx.r11.u16);
	// addi r4,r31,1280
	ctx.r4.s64 = ctx.r31.s64 + 1280;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x880feb98
	ctx.lr = 0x881028B0;
	sub_880FEB98(ctx, base);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// stw r9,20(r21)
	REX_STORE_U32(ctx.r21.u32 + 20, ctx.r9.u32);
	// lwz r8,7080(r27)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 7080);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x88102ce8
	if (ctx.cr6.eq) goto loc_88102CE8;
	// lwz r11,31544(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88102ce8
	if (!ctx.cr6.eq) goto loc_88102CE8;
	// lwz r10,96(r18)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 96);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x88102ce8
	if (!ctx.cr6.gt) goto loc_88102CE8;
	// cmpwi cr6,r10,18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 18, ctx.xer);
	// bge cr6,0x88102ce8
	if (!ctx.cr6.lt) goto loc_88102CE8;
	// lhz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88102ce8
	if (!ctx.cr6.eq) goto loc_88102CE8;
	// lhz r11,98(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 98);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88102ce8
	if (!ctx.cr6.eq) goto loc_88102CE8;
	// lhz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88102ce8
	if (!ctx.cr6.eq) goto loc_88102CE8;
	// lhz r11,102(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 102);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88102ce8
	if (!ctx.cr6.eq) goto loc_88102CE8;
	// lwz r11,2800(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 2800);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881029c4
	if (!ctx.cr6.eq) goto loc_881029C4;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x88102954
	if (!ctx.cr6.eq) goto loc_88102954;
	// lwz r11,720(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 720);
	// mulli r9,r11,276
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(276));
	// subf r8,r9,r18
	ctx.r8.u64 = ctx.r18.u64 - ctx.r9.u64;
	// lwz r4,96(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 96);
	// subf r3,r10,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r10.u64;
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_88102954:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x8810296c
	if (ctx.cr6.eq) goto loc_8810296C;
	// lwz r11,-180(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + -180);
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_8810296C:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x88102ac8
	if (!ctx.cr6.eq) goto loc_88102AC8;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x88102998
	if (ctx.cr6.eq) goto loc_88102998;
	// lwz r11,720(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 720);
	// mulli r8,r11,276
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(276));
	// subf r6,r8,r18
	ctx.r6.u64 = ctx.r18.u64 - ctx.r8.u64;
	// lwz r4,-180(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + -180);
	// subf r3,r10,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r10.u64;
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_88102998:
	// lwz r11,720(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 720);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r16,r8
	ctx.cr6.compare<int32_t>(ctx.r16.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x88102ac8
	if (ctx.cr6.eq) goto loc_88102AC8;
	// mulli r11,r11,276
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(276));
	// subf r8,r11,r18
	ctx.r8.u64 = ctx.r18.u64 - ctx.r11.u64;
	// lwz r5,372(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 372);
	// subf r4,r10,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r10.u64;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r5,r3,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// b 0x88102ac8
	goto loc_88102AC8;
loc_881029C4:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x88102a04
	if (!ctx.cr6.eq) goto loc_88102A04;
	// lwz r11,720(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 720);
	// mulli r9,r11,276
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(276));
	// subf r11,r9,r18
	ctx.r11.u64 = ctx.r18.u64 - ctx.r9.u64;
	// lbz r8,88(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 88);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x88102a00
	if (!ctx.cr6.eq) goto loc_88102A00;
	// lbz r9,74(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 74);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88102a00
	if (ctx.cr6.eq) goto loc_88102A00;
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x88102a04
	if (ctx.cr6.eq) goto loc_88102A04;
loc_88102A00:
	// li r9,0
	ctx.r9.s64 = 0;
loc_88102A04:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x88102a38
	if (ctx.cr6.eq) goto loc_88102A38;
	// lbz r11,-188(r18)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r18.u32 + -188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88102a34
	if (!ctx.cr6.eq) goto loc_88102A34;
	// lbz r11,-202(r18)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r18.u32 + -202);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88102a34
	if (ctx.cr6.eq) goto loc_88102A34;
	// lwz r11,-180(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + -180);
	// li r7,1
	ctx.r7.s64 = 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x88102a38
	if (ctx.cr6.eq) goto loc_88102A38;
loc_88102A34:
	// li r7,0
	ctx.r7.s64 = 0;
loc_88102A38:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x88102ac8
	if (!ctx.cr6.eq) goto loc_88102AC8;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x88102a84
	if (ctx.cr6.eq) goto loc_88102A84;
	// lwz r11,720(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 720);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r8,r11,276
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(276));
	// subf r11,r8,r18
	ctx.r11.u64 = ctx.r18.u64 - ctx.r8.u64;
	// lbz r6,88(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 88);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x88102a80
	if (!ctx.cr6.eq) goto loc_88102A80;
	// lbz r8,74(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 74);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x88102a80
	if (ctx.cr6.eq) goto loc_88102A80;
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// li r6,1
	ctx.r6.s64 = 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x88102a84
	if (ctx.cr6.eq) goto loc_88102A84;
loc_88102A80:
	// li r6,0
	ctx.r6.s64 = 0;
loc_88102A84:
	// lwz r11,720(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 720);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r16,r8
	ctx.cr6.compare<int32_t>(ctx.r16.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x88102ac8
	if (ctx.cr6.eq) goto loc_88102AC8;
	// mulli r11,r11,276
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(276));
	// subf r11,r11,r18
	ctx.r11.u64 = ctx.r18.u64 - ctx.r11.u64;
	// lbz r8,364(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 364);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x88102ac4
	if (!ctx.cr6.eq) goto loc_88102AC4;
	// lbz r8,350(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 350);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x88102ac4
	if (ctx.cr6.eq) goto loc_88102AC4;
	// lwz r11,372(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 372);
	// li r5,1
	ctx.r5.s64 = 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x88102ac8
	if (ctx.cr6.eq) goto loc_88102AC8;
loc_88102AC4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_88102AC8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x88102ae8
	if (!ctx.cr6.eq) goto loc_88102AE8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x88102ae8
	if (!ctx.cr6.eq) goto loc_88102AE8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x88102ae8
	if (!ctx.cr6.eq) goto loc_88102AE8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x88102ce8
	if (ctx.cr6.eq) goto loc_88102CE8;
loc_88102AE8:
	// lhz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// li r11,4
	ctx.r11.s64 = 4;
	// lhz r8,256(r31)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 256);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lhz r4,512(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 512);
	// lhz r3,768(r31)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + 768);
	// sth r10,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r10.u16);
	// sth r8,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, ctx.r8.u16);
	// sth r4,100(r1)
	REX_STORE_U16(ctx.r1.u32 + 100, ctx.r4.u16);
	// sth r3,102(r1)
	REX_STORE_U16(ctx.r1.u32 + 102, ctx.r3.u16);
	// beq cr6,0x88102b4c
	if (ctx.cr6.eq) goto loc_88102B4C;
	// rlwinm r11,r15,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,720(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 720);
	// rlwinm r10,r16,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,2312(r27)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 2312);
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// li r11,6
	ctx.r11.s64 = 6;
	// mullw r9,r4,r9
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r8,32(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 32);
	// sth r9,104(r1)
	REX_STORE_U16(ctx.r1.u32 + 104, ctx.r9.u16);
	// sth r8,106(r1)
	REX_STORE_U16(ctx.r1.u32 + 106, ctx.r8.u16);
loc_88102B4C:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x88102bb4
	if (ctx.cr6.eq) goto loc_88102BB4;
	// lwz r7,720(r27)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + 720);
	// rlwinm r9,r15,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r16,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,2312(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 2312);
	// mullw r4,r7,r15
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r15.s32);
	// addi r3,r9,2
	ctx.r3.s64 = ctx.r9.s64 + 2;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r7,r3,r7
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// add r9,r9,r16
	ctx.r9.u64 = ctx.r9.u64 + ctx.r16.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r8,r9,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r9,r7,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lhz r8,-32(r4)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + -32);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r4,-32(r3)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + -32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sthx r8,r10,r9
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u16);
	// sthx r4,r7,r3
	REX_STORE_U16(ctx.r7.u32 + ctx.r3.u32, ctx.r4.u16);
loc_88102BB4:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x88102bf4
	if (ctx.cr6.eq) goto loc_88102BF4;
	// rlwinm r10,r15,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,720(r27)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + 720);
	// rlwinm r8,r16,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,2312(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 2312);
	// addi r6,r10,-2
	ctx.r6.s64 = ctx.r10.s64 + -2;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r10,r6,r7
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r6,-32(r7)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + -32);
	// sthx r6,r4,r8
	REX_STORE_U16(ctx.r4.u32 + ctx.r8.u32, ctx.r6.u16);
loc_88102BF4:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x88102c34
	if (ctx.cr6.eq) goto loc_88102C34;
	// rlwinm r10,r15,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,720(r27)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 720);
	// addi r7,r16,1
	ctx.r7.s64 = ctx.r16.s64 + 1;
	// lwz r6,2312(r27)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 2312);
	// addi r5,r10,-2
	ctx.r5.s64 = ctx.r10.s64 + -2;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r10,r5,r8
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhzx r8,r10,r6
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r6.u32);
	// sthx r8,r3,r9
	REX_STORE_U16(ctx.r3.u32 + ctx.r9.u32, ctx.r8.u16);
loc_88102C34:
	// lhz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// ble cr6,0x88102c80
	if (!ctx.cr6.gt) goto loc_88102C80;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r9,r1,98
	ctx.r9.s64 = ctx.r1.s64 + 98;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88102C58:
	// lhz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x88102c6c
	if (!ctx.cr6.lt) goto loc_88102C6C;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_88102C6C:
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x88102c78
	if (!ctx.cr6.gt) goto loc_88102C78;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
loc_88102C78:
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bdnz 0x88102c58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88102C58;
loc_88102C80:
	// subf r10,r7,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r7.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x88102ce8
	if (!ctx.cr6.eq) goto loc_88102CE8;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88102cd4
	if (!ctx.cr6.gt) goto loc_88102CD4;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_88102CA4:
	// lhz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x88102cbc
	if (!ctx.cr6.eq) goto loc_88102CBC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// b 0x88102cc0
	goto loc_88102CC0;
loc_88102CBC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_88102CC0:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x88102ca4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88102CA4;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// blt cr6,0x88102cd8
	if (ctx.cr6.lt) goto loc_88102CD8;
loc_88102CD4:
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
loc_88102CD8:
	// sth r11,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r11,256(r31)
	REX_STORE_U16(ctx.r31.u32 + 256, ctx.r11.u16);
	// sth r11,512(r31)
	REX_STORE_U16(ctx.r31.u32 + 512, ctx.r11.u16);
	// sth r11,768(r31)
	REX_STORE_U16(ctx.r31.u32 + 768, ctx.r11.u16);
loc_88102CE8:
	// lwz r11,720(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 720);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
loc_88102CF8:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x88102d24
	if (ctx.cr6.lt) goto loc_88102D24;
	// bne cr6,0x88102d14
	if (!ctx.cr6.eq) goto loc_88102D14;
	// mullw r11,r4,r15
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r15.s32);
	// lwz r6,2316(r27)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 2316);
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + ctx.r16.u64;
	// b 0x88102d48
	goto loc_88102D48;
loc_88102D14:
	// mullw r11,r4,r15
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r15.s32);
	// lwz r6,2320(r27)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 2320);
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + ctx.r16.u64;
	// b 0x88102d48
	goto loc_88102D48;
loc_88102D24:
	// rlwinm r9,r15,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,2312(r27)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 2312);
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r16,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_88102D48:
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r7,r9,r31
	ctx.r7.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r10,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// add r6,r9,r31
	ctx.r6.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lhz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r30,r8,2
	ctx.r30.s64 = ctx.r8.s64 + 2;
	// addi r29,r9,2
	ctx.r29.s64 = ctx.r9.s64 + 2;
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r28,r8,3
	ctx.r28.s64 = ctx.r8.s64 + 3;
	// sth r3,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r3.u16);
	// rlwinm r3,r29,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r29,r9,3
	ctx.r29.s64 = ctx.r9.s64 + 3;
	// rlwinm r28,r28,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r26,r8,4
	ctx.r26.s64 = ctx.r8.s64 + 4;
	// rlwinm r29,r29,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r25,r9,4
	ctx.r25.s64 = ctx.r9.s64 + 4;
	// rlwinm r26,r26,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r24,r8,5
	ctx.r24.s64 = ctx.r8.s64 + 5;
	// rlwinm r25,r25,4,0,27
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r23,r9,5
	ctx.r23.s64 = ctx.r9.s64 + 5;
	// rlwinm r24,r24,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r22,r8,6
	ctx.r22.s64 = ctx.r8.s64 + 6;
	// rlwinm r23,r23,4,0,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r21,r9,6
	ctx.r21.s64 = ctx.r9.s64 + 6;
	// rlwinm r22,r22,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r8,7
	ctx.r8.s64 = ctx.r8.s64 + 7;
	// rlwinm r21,r21,4,0,27
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r9,7
	ctx.r9.s64 = ctx.r9.s64 + 7;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lhz r20,0(r6)
	ctx.r20.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// sth r20,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r20.u16);
	// lhz r7,2(r7)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// sth r7,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// lhz r6,16(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 16);
	// sth r6,18(r11)
	REX_STORE_U16(ctx.r11.u32 + 18, ctx.r6.u16);
	// lhzx r7,r30,r31
	ctx.r7.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r31.u32);
	// sth r7,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r7.u16);
	// lhzx r6,r3,r31
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r31.u32);
	// sth r6,20(r11)
	REX_STORE_U16(ctx.r11.u32 + 20, ctx.r6.u16);
	// lhzx r3,r28,r31
	ctx.r3.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r31.u32);
	// sth r3,6(r11)
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r3.u16);
	// lhzx r7,r29,r31
	ctx.r7.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r31.u32);
	// sth r7,22(r11)
	REX_STORE_U16(ctx.r11.u32 + 22, ctx.r7.u16);
	// lhzx r6,r26,r31
	ctx.r6.u64 = REX_LOAD_U16(ctx.r26.u32 + ctx.r31.u32);
	// sth r6,8(r11)
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r6.u16);
	// lhzx r3,r25,r31
	ctx.r3.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r31.u32);
	// sth r3,24(r11)
	REX_STORE_U16(ctx.r11.u32 + 24, ctx.r3.u16);
	// lhzx r7,r24,r31
	ctx.r7.u64 = REX_LOAD_U16(ctx.r24.u32 + ctx.r31.u32);
	// sth r7,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// lhzx r6,r23,r31
	ctx.r6.u64 = REX_LOAD_U16(ctx.r23.u32 + ctx.r31.u32);
	// sth r6,26(r11)
	REX_STORE_U16(ctx.r11.u32 + 26, ctx.r6.u16);
	// lhzx r3,r22,r31
	ctx.r3.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r31.u32);
	// sth r3,12(r11)
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r3.u16);
	// lhzx r7,r21,r31
	ctx.r7.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r31.u32);
	// sth r7,28(r11)
	REX_STORE_U16(ctx.r11.u32 + 28, ctx.r7.u16);
	// lhzx r6,r8,r31
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r31.u32);
	// sth r6,14(r11)
	REX_STORE_U16(ctx.r11.u32 + 14, ctx.r6.u16);
	// lhzx r3,r9,r31
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r31.u32);
	// sth r3,30(r11)
	REX_STORE_U16(ctx.r11.u32 + 30, ctx.r3.u16);
	// blt cr6,0x88102cf8
	if (ctx.cr6.lt) goto loc_88102CF8;
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// lfd f29,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f30,-160(r1)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f31,-152(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88113C58) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88113C60;
	__savegprlr_14(ctx, base);
	// lwz r27,104(r3)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r26,108(r3)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// lwz r10,80(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r9,92(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// srawi r22,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r22.s64 = ctx.r10.s32 >> 1;
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r10,116(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// lwz r9,120(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r27,-256(r1)
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r27.u32);
	// stw r26,-260(r1)
	REX_STORE_U32(ctx.r1.u32 + -260, ctx.r26.u32);
	// stw r4,-264(r1)
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r4.u32);
	// ble cr6,0x881157f4
	if (!ctx.cr6.gt) goto loc_881157F4;
	// addi r30,r9,-1
	ctx.r30.s64 = ctx.r9.s64 + -1;
	// fsub f8,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f2.f64 - ctx.f1.f64;
	// addi r29,r10,-1
	ctx.r29.s64 = ctx.r10.s64 + -1;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r30,-312(r1)
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r30.u32);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// stw r29,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r29.u32);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// stw r7,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r7.u32);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// lis r6,-30720
	ctx.r6.s64 = -2013265920;
	// lfd f9,17600(r11)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r11.u32 + 17600);
	// li r24,16
	ctx.r24.s64 = 16;
	// lfd f11,23440(r10)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r10.u32 + 23440);
	// li r25,128
	ctx.r25.s64 = 128;
	// lfd f6,1488(r9)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r9.u32 + 1488);
	// lfd f10,12088(r8)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r8.u32 + 12088);
	// lfd f7,8624(r6)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r6.u32 + 8624);
loc_88113CE8:
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lwz r10,96(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// fmr f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f8.f64;
	// std r11,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r11.u64);
	// lfd f13,-168(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fmadd f12,f12,f3,f4
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f3.f64, ctx.f4.f64);
	// beq cr6,0x88113d18
	if (ctx.cr6.eq) goto loc_88113D18;
	// fsub f13,f3,f7
	ctx.f13.f64 = ctx.f3.f64 - ctx.f7.f64;
	// fmul f13,f13,f10
	ctx.f13.f64 = ctx.f13.f64 * ctx.f10.f64;
	// b 0x88113d1c
	goto loc_88113D1C;
loc_88113D18:
	// fmr f13,f6
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f6.f64;
loc_88113D1C:
	// fadd f13,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f13.f64 + ctx.f12.f64;
	// lwz r9,80(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r10,100(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r8,-308(r1)
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r8.u32);
	// fmul f12,f13,f10
	ctx.f12.f64 = ctx.f13.f64 * ctx.f10.f64;
	// fctiwz f5,f13
	ctx.f5.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f5,-248(r1)
	REX_STORE_U64(ctx.r1.u32 + -248, ctx.f5.u64);
	// lwz r11,-244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// rlwinm r6,r11,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// fctiwz f2,f12
	ctx.f2.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// stfd f2,-224(r1)
	REX_STORE_U64(ctx.r1.u32 + -224, ctx.f2.u64);
	// lwz r6,-220(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// rlwinm r6,r6,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// std r5,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r5.u64);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// lfd f12,-208(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// fcfid f5,f12
	ctx.f5.f64 = double(ctx.f12.s64);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// std r5,-200(r1)
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r5.u64);
	// lfd f2,-200(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// fmsub f12,f13,f11,f5
	ctx.f12.f64 = std::fma(ctx.f13.f64, ctx.f11.f64, -ctx.f5.f64);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r10,-268(r1)
	REX_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// fctiwz f5,f12
	ctx.f5.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f5,-232(r1)
	REX_STORE_U64(ctx.r1.u32 + -232, ctx.f5.u64);
	// lwz r9,-228(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// mullw r6,r9,r9
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// fcfid f2,f2
	ctx.f2.f64 = double(ctx.f2.s64);
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// mullw r9,r5,r9
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// stw r5,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r5.u32);
	// fmsub f13,f13,f9,f2
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f9.f64, -ctx.f2.f64);
	// srawi r6,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 8;
	// stw r6,-292(r1)
	REX_STORE_U32(ctx.r1.u32 + -292, ctx.r6.u32);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-248(r1)
	REX_STORE_U64(ctx.r1.u32 + -248, ctx.f12.u64);
	// lwz r6,-244(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// mullw r5,r6,r6
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r6.s32);
	// srawi r9,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 8;
	// mullw r6,r9,r6
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// stw r9,-280(r1)
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r9.u32);
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// stw r5,-276(r1)
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r5.u32);
	// ble cr6,0x88114e58
	if (!ctx.cr6.gt) goto loc_88114E58;
	// lwz r9,84(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88114e58
	if (!ctx.cr6.lt) goto loc_88114E58;
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,-284(r1)
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88115048
	if (!ctx.cr6.gt) goto loc_88115048;
loc_88113DFC:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-368(r1)
	REX_STORE_U64(ctx.r1.u32 + -368, ctx.f13.u64);
	// lwz r11,-364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// std r6,-216(r1)
	REX_STORE_U64(ctx.r1.u32 + -216, ctx.r6.u64);
	// lfd f12,-216(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -216);
	// fcfid f5,f12
	ctx.f5.f64 = double(ctx.f12.s64);
	// fmsub f2,f0,f11,f5
	ctx.f2.f64 = std::fma(ctx.f0.f64, ctx.f11.f64, -ctx.f5.f64);
	// fctiwz f13,f2
	ctx.f13.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f13,-368(r1)
	REX_STORE_U64(ctx.r1.u32 + -368, ctx.f13.u64);
	// lwz r28,-364(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// ble cr6,0x88114d34
	if (!ctx.cr6.gt) goto loc_88114D34;
	// lwz r9,80(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88114d34
	if (!ctx.cr6.lt) goto loc_88114D34;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,80(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mullw r4,r28,r28
	ctx.r4.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r28.s32);
	// lbzx r7,r6,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r9,-1(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r5,2(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r8,1(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// add r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 + ctx.r10.u64;
	// subf r27,r6,r10
	ctx.r27.u64 = ctx.r10.u64 - ctx.r6.u64;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r25,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r25.s64 = ctx.r4.s32 >> 8;
	// add r24,r6,r10
	ctx.r24.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lbz r31,1(r3)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// rotlwi r20,r11,1
	ctx.r20.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lbz r6,-1(r27)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r27.u32 + -1);
	// add r15,r7,r8
	ctx.r15.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lbz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r27.u32 + 0);
	// subf r16,r31,r7
	ctx.r16.u64 = ctx.r7.u64 - ctx.r31.u64;
	// lbz r29,1(r27)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r27.u32 + 1);
	// add r4,r31,r6
	ctx.r4.u64 = ctx.r31.u64 + ctx.r6.u64;
	// lbz r30,-1(r3)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r3.u32 + -1);
	// add r19,r9,r10
	ctx.r19.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r17,r4,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r26,-1(r24)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r24.u32 + -1);
	// subf r18,r29,r10
	ctx.r18.u64 = ctx.r10.u64 - ctx.r29.u64;
	// lbz r23,1(r24)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r24.u32 + 1);
	// lbz r21,2(r24)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r24.u32 + 2);
	// rlwinm r19,r19,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r4,0(r24)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r24.u32 + 0);
	// add r24,r20,r30
	ctx.r24.u64 = ctx.r20.u64 + ctx.r30.u64;
	// rlwinm r20,r18,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r27,2(r27)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r27.u32 + 2);
	// subf r18,r26,r17
	ctx.r18.u64 = ctx.r17.u64 - ctx.r26.u64;
	// lbz r3,2(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// add r17,r24,r29
	ctx.r17.u64 = ctx.r24.u64 + ctx.r29.u64;
	// subf r24,r19,r4
	ctx.r24.u64 = ctx.r4.u64 - ctx.r19.u64;
	// subf r20,r4,r20
	ctx.r20.u64 = ctx.r20.u64 - ctx.r4.u64;
	// subf r19,r27,r18
	ctx.r19.u64 = ctx.r18.u64 - ctx.r27.u64;
	// rlwinm r18,r17,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r20,r6,r20
	ctx.r20.u64 = ctx.r20.u64 - ctx.r6.u64;
	// rlwinm r19,r19,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r17,r23,r18
	ctx.r17.u64 = ctx.r18.u64 - ctx.r23.u64;
	// add r18,r20,r23
	ctx.r18.u64 = ctx.r20.u64 + ctx.r23.u64;
	// add r24,r24,r5
	ctx.r24.u64 = ctx.r24.u64 + ctx.r5.u64;
	// add r20,r19,r21
	ctx.r20.u64 = ctx.r19.u64 + ctx.r21.u64;
	// rlwinm r14,r24,3,0,28
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r20,-332(r1)
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r20.u32);
	// subf r20,r3,r17
	ctx.r20.u64 = ctx.r17.u64 - ctx.r3.u64;
	// subf r19,r24,r14
	ctx.r19.u64 = ctx.r14.u64 - ctx.r24.u64;
	// lwz r17,-332(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// rlwinm r24,r17,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// add r14,r18,r27
	ctx.r14.u64 = ctx.r18.u64 + ctx.r27.u64;
	// rlwinm r17,r20,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r18,r5,r16
	ctx.r18.u64 = ctx.r16.u64 - ctx.r5.u64;
	// add r16,r19,r24
	ctx.r16.u64 = ctx.r19.u64 + ctx.r24.u64;
	// add r19,r20,r17
	ctx.r19.u64 = ctx.r20.u64 + ctx.r17.u64;
	// rlwinm r20,r14,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// add r24,r18,r9
	ctx.r24.u64 = ctx.r18.u64 + ctx.r9.u64;
	// subf r18,r21,r20
	ctx.r18.u64 = ctx.r20.u64 - ctx.r21.u64;
	// add r19,r16,r19
	ctx.r19.u64 = ctx.r16.u64 + ctx.r19.u64;
	// mulli r17,r15,13
	ctx.r17.s64 = static_cast<int64_t>(ctx.r15.u64 * static_cast<uint64_t>(13));
	// rlwinm r16,r24,3,0,28
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r15,r25,r28
	ctx.r15.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r28.s32);
	// add r18,r18,r26
	ctx.r18.u64 = ctx.r18.u64 + ctx.r26.u64;
	// subf r14,r17,r19
	ctx.r14.u64 = ctx.r19.u64 - ctx.r17.u64;
	// subf r19,r24,r16
	ctx.r19.u64 = ctx.r16.u64 - ctx.r24.u64;
	// rlwinm r18,r18,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r24,r15,8
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0xFF) != 0);
	ctx.r24.s64 = ctx.r15.s32 >> 8;
	// rotlwi r16,r11,2
	ctx.r16.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// subf r20,r30,r3
	ctx.r20.u64 = ctx.r3.u64 - ctx.r30.u64;
	// srawi r15,r14,1
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x1) != 0);
	ctx.r15.s64 = ctx.r14.s32 >> 1;
	// add r16,r11,r16
	ctx.r16.u64 = ctx.r11.u64 + ctx.r16.u64;
	// add r19,r18,r19
	ctx.r19.u64 = ctx.r18.u64 + ctx.r19.u64;
	// rlwinm r17,r20,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r16,-288(r1)
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r16.u32);
	// mullw r18,r15,r25
	ctx.r18.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r25.s32);
	// stw r18,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r18.u32);
	// add r20,r20,r17
	ctx.r20.u64 = ctx.r20.u64 + ctx.r17.u64;
	// subf r14,r11,r8
	ctx.r14.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r16,r7,r31
	ctx.r16.u64 = ctx.r31.u64 - ctx.r7.u64;
	// add r20,r19,r20
	ctx.r20.u64 = ctx.r19.u64 + ctx.r20.u64;
	// subf r19,r30,r9
	ctx.r19.u64 = ctx.r9.u64 - ctx.r30.u64;
	// stw r20,-332(r1)
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r20.u32);
	// subf r20,r23,r4
	ctx.r20.u64 = ctx.r4.u64 - ctx.r23.u64;
	// rlwinm r19,r19,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r17,r3,r20
	ctx.r17.u64 = ctx.r20.u64 - ctx.r3.u64;
	// subf r20,r5,r19
	ctx.r20.u64 = ctx.r19.u64 - ctx.r5.u64;
	// subf r19,r11,r10
	ctx.r19.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subf r20,r6,r20
	ctx.r20.u64 = ctx.r20.u64 - ctx.r6.u64;
	// subf r19,r6,r19
	ctx.r19.u64 = ctx.r19.u64 - ctx.r6.u64;
	// add r18,r20,r26
	ctx.r18.u64 = ctx.r20.u64 + ctx.r26.u64;
	// rlwinm r20,r19,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// add r15,r18,r3
	ctx.r15.u64 = ctx.r18.u64 + ctx.r3.u64;
	// subf r3,r8,r16
	ctx.r3.u64 = ctx.r16.u64 - ctx.r8.u64;
	// subf r19,r4,r20
	ctx.r19.u64 = ctx.r20.u64 - ctx.r4.u64;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r19,r19,r26
	ctx.r19.u64 = ctx.r19.u64 + ctx.r26.u64;
	// rlwinm r20,r3,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r18,r9,r17
	ctx.r18.u64 = ctx.r17.u64 - ctx.r9.u64;
	// stw r20,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r20.u32);
	// add r19,r19,r7
	ctx.r19.u64 = ctx.r19.u64 + ctx.r7.u64;
	// subf r20,r4,r8
	ctx.r20.u64 = ctx.r8.u64 - ctx.r4.u64;
	// subf r17,r10,r18
	ctx.r17.u64 = ctx.r18.u64 - ctx.r10.u64;
	// stw r19,-272(r1)
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r19.u32);
	// subf r19,r31,r20
	ctx.r19.u64 = ctx.r20.u64 - ctx.r31.u64;
	// add r18,r17,r30
	ctx.r18.u64 = ctx.r17.u64 + ctx.r30.u64;
	// lwz r17,-332(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// add r19,r19,r10
	ctx.r19.u64 = ctx.r19.u64 + ctx.r10.u64;
	// rlwinm r20,r15,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// add r18,r18,r5
	ctx.r18.u64 = ctx.r18.u64 + ctx.r5.u64;
	// stw r19,-332(r1)
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r19.u32);
	// subf r15,r21,r20
	ctx.r15.u64 = ctx.r20.u64 - ctx.r21.u64;
	// add r20,r18,r29
	ctx.r20.u64 = ctx.r18.u64 + ctx.r29.u64;
	// mulli r18,r14,11
	ctx.r18.s64 = static_cast<int64_t>(ctx.r14.u64 * static_cast<uint64_t>(11));
	// stw r18,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r18.u32);
	// rlwinm r20,r20,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// add r19,r15,r27
	ctx.r19.u64 = ctx.r15.u64 + ctx.r27.u64;
	// lwz r18,-300(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// rotlwi r16,r7,1
	ctx.r16.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// stw r20,-240(r1)
	REX_STORE_U32(ctx.r1.u32 + -240, ctx.r20.u32);
	// rlwinm r19,r19,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r3,r18
	ctx.r3.u64 = ctx.r3.u64 + ctx.r18.u64;
	// lwz r14,-272(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// stw r3,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r3.u32);
	// subf r20,r8,r31
	ctx.r20.u64 = ctx.r31.u64 - ctx.r8.u64;
	// stw r19,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r19.u32);
	// rlwinm r19,r14,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r17,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r17.u32);
	// rlwinm r17,r20,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// add r18,r16,r10
	ctx.r18.u64 = ctx.r16.u64 + ctx.r10.u64;
	// lwz r3,-332(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// add r20,r20,r17
	ctx.r20.u64 = ctx.r20.u64 + ctx.r17.u64;
	// rotlwi r17,r30,2
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r30.u32, 2);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// rlwinm r14,r3,3,0,28
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r3,r29,r23
	ctx.r3.u64 = ctx.r23.u64 - ctx.r29.u64;
	// lwz r23,-296(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// add r20,r19,r20
	ctx.r20.u64 = ctx.r19.u64 + ctx.r20.u64;
	// add r19,r30,r17
	ctx.r19.u64 = ctx.r30.u64 + ctx.r17.u64;
	// lwz r17,-288(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// rotlwi r15,r9,3
	ctx.r15.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r20,r19,r20
	ctx.r20.u64 = ctx.r20.u64 - ctx.r19.u64;
	// subf r19,r16,r14
	ctx.r19.u64 = ctx.r14.u64 - ctx.r16.u64;
	// lwz r14,-300(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// stw r23,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r23.u32);
	// subf r23,r9,r15
	ctx.r23.u64 = ctx.r15.u64 - ctx.r9.u64;
	// subf r16,r11,r7
	ctx.r16.u64 = ctx.r7.u64 - ctx.r11.u64;
	// lwz r15,-296(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// add r23,r20,r23
	ctx.r23.u64 = ctx.r20.u64 + ctx.r23.u64;
	// lwz r20,-336(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// add r15,r14,r15
	ctx.r15.u64 = ctx.r14.u64 + ctx.r15.u64;
	// stw r23,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r23.u32);
	// mulli r23,r16,11
	ctx.r23.s64 = static_cast<int64_t>(ctx.r16.u64 * static_cast<uint64_t>(11));
	// lwz r14,-240(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// lwz r16,-360(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// rlwinm r18,r18,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// add r20,r20,r19
	ctx.r20.u64 = ctx.r20.u64 + ctx.r19.u64;
	// subf r18,r17,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r17.u64;
	// add r16,r14,r16
	ctx.r16.u64 = ctx.r14.u64 + ctx.r16.u64;
	// srawi r15,r15,1
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x1) != 0);
	ctx.r15.s64 = ctx.r15.s32 >> 1;
	// rlwinm r19,r3,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r14,r4,r18
	ctx.r14.u64 = ctx.r18.u64 - ctx.r4.u64;
	// lwz r18,-336(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// subf r16,r26,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r26.u64;
	// add r3,r3,r19
	ctx.r3.u64 = ctx.r3.u64 + ctx.r19.u64;
	// add r23,r20,r23
	ctx.r23.u64 = ctx.r20.u64 + ctx.r23.u64;
	// srawi r18,r18,1
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1) != 0);
	ctx.r18.s64 = ctx.r18.s32 >> 1;
	// subf r20,r27,r16
	ctx.r20.u64 = ctx.r16.u64 - ctx.r27.u64;
	// srawi r16,r14,1
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x1) != 0);
	ctx.r16.s64 = ctx.r14.s32 >> 1;
	// stw r18,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r18.u32);
	// add r14,r23,r3
	ctx.r14.u64 = ctx.r23.u64 + ctx.r3.u64;
	// lwz r3,-360(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// mullw r19,r3,r28
	ctx.r19.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r28.s32);
	// lwz r3,-304(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// mullw r18,r15,r24
	ctx.r18.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r24.s32);
	// lwz r15,-344(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// stw r3,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r3.u32);
	// add r18,r15,r18
	ctx.r18.u64 = ctx.r15.u64 + ctx.r18.u64;
	// add r3,r20,r21
	ctx.r3.u64 = ctx.r20.u64 + ctx.r21.u64;
	// subf r20,r11,r9
	ctx.r20.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r21,r18,r19
	ctx.r21.u64 = ctx.r18.u64 + ctx.r19.u64;
	// rlwinm r23,r16,8,0,23
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// srawi r19,r14,1
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x1) != 0);
	ctx.r19.s64 = ctx.r14.s32 >> 1;
	// subf r20,r6,r20
	ctx.r20.u64 = ctx.r20.u64 - ctx.r6.u64;
	// add r23,r21,r23
	ctx.r23.u64 = ctx.r21.u64 + ctx.r23.u64;
	// mullw r3,r3,r24
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r24.s32);
	// mullw r21,r19,r25
	ctx.r21.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r25.s32);
	// rlwinm r20,r20,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// add r18,r21,r3
	ctx.r18.u64 = ctx.r21.u64 + ctx.r3.u64;
	// subf r3,r5,r20
	ctx.r3.u64 = ctx.r20.u64 - ctx.r5.u64;
	// subf r21,r9,r30
	ctx.r21.u64 = ctx.r30.u64 - ctx.r9.u64;
	// subf r20,r10,r29
	ctx.r20.u64 = ctx.r29.u64 - ctx.r10.u64;
	// subf r30,r7,r31
	ctx.r30.u64 = ctx.r31.u64 - ctx.r7.u64;
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
	// rlwinm r19,r21,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r20,r20,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r21,r30,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r16,r3,r27
	ctx.r16.u64 = ctx.r3.u64 + ctx.r27.u64;
	// subf r15,r31,r20
	ctx.r15.u64 = ctx.r20.u64 - ctx.r31.u64;
	// subf r14,r26,r19
	ctx.r14.u64 = ctx.r19.u64 - ctx.r26.u64;
	// add r26,r30,r21
	ctx.r26.u64 = ctx.r30.u64 + ctx.r21.u64;
	// rotlwi r20,r8,1
	ctx.r20.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// rotlwi r21,r29,2
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r29.u32, 2);
	// subf r3,r8,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r8.u64;
	// rlwinm r19,r16,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r16,r31,r14
	ctx.r16.u64 = ctx.r14.u64 - ctx.r31.u64;
	// add r20,r20,r9
	ctx.r20.u64 = ctx.r20.u64 + ctx.r9.u64;
	// subf r15,r8,r15
	ctx.r15.u64 = ctx.r15.u64 - ctx.r8.u64;
	// rlwinm r31,r3,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r29,r21
	ctx.r29.u64 = ctx.r29.u64 + ctx.r21.u64;
	// add r26,r19,r26
	ctx.r26.u64 = ctx.r19.u64 + ctx.r26.u64;
	// subf r30,r7,r11
	ctx.r30.u64 = ctx.r11.u64 - ctx.r7.u64;
	// rotlwi r19,r10,3
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// subf r15,r9,r15
	ctx.r15.u64 = ctx.r15.u64 - ctx.r9.u64;
	// rlwinm r20,r20,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r16,r7,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r7.u64;
	// add r14,r3,r31
	ctx.r14.u64 = ctx.r3.u64 + ctx.r31.u64;
	// subf r26,r29,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r29.u64;
	// rlwinm r21,r30,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r29,r10,r19
	ctx.r29.u64 = ctx.r19.u64 - ctx.r10.u64;
	// subf r31,r27,r15
	ctx.r31.u64 = ctx.r15.u64 - ctx.r27.u64;
	// subf r20,r17,r20
	ctx.r20.u64 = ctx.r20.u64 - ctx.r17.u64;
	// subf r3,r10,r16
	ctx.r3.u64 = ctx.r16.u64 - ctx.r10.u64;
	// subf r27,r9,r14
	ctx.r27.u64 = ctx.r14.u64 - ctx.r9.u64;
	// add r29,r26,r29
	ctx.r29.u64 = ctx.r26.u64 + ctx.r29.u64;
	// add r30,r30,r21
	ctx.r30.u64 = ctx.r30.u64 + ctx.r21.u64;
	// add r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 + ctx.r4.u64;
	// subf r26,r5,r20
	ctx.r26.u64 = ctx.r20.u64 - ctx.r5.u64;
	// add r27,r27,r5
	ctx.r27.u64 = ctx.r27.u64 + ctx.r5.u64;
	// subf r30,r10,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r10.u64;
	// srawi r29,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 1;
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r31,r31,r7
	ctx.r31.u64 = ctx.r31.u64 + ctx.r7.u64;
	// srawi r26,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 1;
	// srawi r27,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 1;
	// add r30,r30,r4
	ctx.r30.u64 = ctx.r30.u64 + ctx.r4.u64;
	// add r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 + ctx.r5.u64;
	// add r4,r3,r11
	ctx.r4.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mullw r31,r26,r25
	ctx.r31.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r25.s32);
	// mullw r3,r27,r24
	ctx.r3.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r24.s32);
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// subf r27,r9,r11
	ctx.r27.u64 = ctx.r11.u64 - ctx.r9.u64;
	// lwz r16,-344(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r9,r31,r3
	ctx.r9.u64 = ctx.r31.u64 + ctx.r3.u64;
	// lwz r31,-292(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// srawi r3,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r30.s32 >> 1;
	// srawi r26,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r8.s32 >> 1;
	// add r30,r5,r6
	ctx.r30.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mullw r8,r3,r31
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r31.s32);
	// subf r5,r10,r27
	ctx.r5.u64 = ctx.r27.u64 - ctx.r10.u64;
	// subf r27,r10,r7
	ctx.r27.u64 = ctx.r7.u64 - ctx.r10.u64;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 + ctx.r6.u64;
	// mullw r9,r26,r28
	ctx.r9.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r28.s32);
	// mullw r7,r4,r28
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r28.s32);
	// add r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,-228(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// mullw r4,r30,r24
	ctx.r4.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r24.s32);
	// mullw r3,r29,r25
	ctx.r3.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r25.s32);
	// srawi r30,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r27.s32 >> 1;
	// add r5,r3,r4
	ctx.r5.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mullw r6,r8,r28
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// add r7,r18,r7
	ctx.r7.u64 = ctx.r18.u64 + ctx.r7.u64;
	// mullw r8,r30,r10
	ctx.r8.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mullw r23,r23,r16
	ctx.r23.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r16.s32);
	// mullw r7,r7,r31
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r31.s32);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// add r8,r23,r7
	ctx.r8.u64 = ctx.r23.u64 + ctx.r7.u64;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r10,r5,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 16;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x881142b8
	if (!ctx.cr6.gt) goto loc_881142B8;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x881142c4
	goto loc_881142C4;
loc_881142B8:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_881142C4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,-352(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// lwz r9,-308(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r7,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r7.u32);
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// beq cr6,0x88114cec
	if (ctx.cr6.eq) goto loc_88114CEC;
	// fmul f13,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64 * ctx.f10.f64;
	// lwz r11,-220(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// lwz r8,-256(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// addi r9,r22,1
	ctx.r9.s64 = ctx.r22.s64 + 1;
	// mullw r10,r11,r22
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r22.s32);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-368(r1)
	REX_STORE_U64(ctx.r1.u32 + -368, ctx.f12.u64);
	// lwz r11,-364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// rlwinm r7,r11,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r6,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r6.u64);
	// lfd f5,-184(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,-356(r1)
	REX_STORE_U32(ctx.r1.u32 + -356, ctx.r11.u32);
	// rlwinm r23,r22,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r24,r22,r10
	ctx.r24.u64 = ctx.r10.u64 - ctx.r22.u64;
	// addi r4,r22,-1
	ctx.r4.s64 = ctx.r22.s64 + -1;
	// addi r3,r23,-1
	ctx.r3.s64 = ctx.r23.s64 + -1;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r30,r23,1
	ctx.r30.s64 = ctx.r23.s64 + 1;
	// lbzx r26,r9,r10
	ctx.r26.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// addi r19,r23,2
	ctx.r19.s64 = ctx.r23.s64 + 2;
	// lbz r5,-1(r24)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r24.u32 + -1);
	// rotlwi r7,r11,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lbzx r27,r4,r10
	ctx.r27.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// rotlwi r6,r11,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lbz r8,0(r24)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r24.u32 + 0);
	// add r4,r26,r5
	ctx.r4.u64 = ctx.r26.u64 + ctx.r5.u64;
	// lbz r9,-1(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// add r18,r11,r7
	ctx.r18.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbzx r25,r3,r10
	ctx.r25.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// add r7,r6,r27
	ctx.r7.u64 = ctx.r6.u64 + ctx.r27.u64;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r28,1(r24)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r24.u32 + 1);
	// rlwinm r6,r4,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r31,r23,r10
	ctx.r31.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r10.u32);
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r24,2(r24)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r24.u32 + 2);
	// subf r6,r25,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r25.u64;
	// lbzx r20,r30,r10
	ctx.r20.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// add r4,r7,r28
	ctx.r4.u64 = ctx.r7.u64 + ctx.r28.u64;
	// stw r30,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r30.u32);
	// addi r29,r22,2
	ctx.r29.s64 = ctx.r22.s64 + 2;
	// lbz r30,2(r10)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// subf r7,r3,r31
	ctx.r7.u64 = ctx.r31.u64 - ctx.r3.u64;
	// lbzx r19,r19,r10
	ctx.r19.u64 = REX_LOAD_U8(ctx.r19.u32 + ctx.r10.u32);
	// subf r3,r24,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r24.u64;
	// lbzx r6,r10,r22
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r22.u32);
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r18,-288(r1)
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r18.u32);
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + ctx.r30.u64;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r21,r29,r10
	ctx.r21.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// subf r4,r20,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r20.u64;
	// lbz r10,1(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// rlwinm r29,r7,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r3,r19
	ctx.r3.u64 = ctx.r3.u64 + ctx.r19.u64;
	// subf r4,r21,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r21.u64;
	// subf r7,r7,r29
	ctx.r7.u64 = ctx.r29.u64 - ctx.r7.u64;
	// rlwinm r29,r3,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// add r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// subf r4,r28,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r28.u64;
	// mulli r3,r3,13
	ctx.r3.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(13));
	// fcfid f2,f5
	ctx.f2.f64 = double(ctx.f5.s64);
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r14,r3,r7
	ctx.r14.u64 = ctx.r7.u64 - ctx.r3.u64;
	// subf r3,r31,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r31.u64;
	// subf r18,r27,r21
	ctx.r18.u64 = ctx.r21.u64 - ctx.r27.u64;
	// fmsub f13,f0,f9,f2
	ctx.f13.f64 = std::fma(ctx.f0.f64, ctx.f9.f64, -ctx.f2.f64);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-344(r1)
	REX_STORE_U64(ctx.r1.u32 + -344, ctx.f12.u64);
	// lwz r7,-340(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// mullw r4,r7,r7
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// mullw r29,r4,r7
	ctx.r29.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// srawi r29,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 8;
	// subf r3,r5,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r5.u64;
	// stw r18,-332(r1)
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r18.u32);
	// subf r16,r31,r10
	ctx.r16.u64 = ctx.r10.u64 - ctx.r31.u64;
	// lwz r17,-288(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// add r3,r3,r20
	ctx.r3.u64 = ctx.r3.u64 + ctx.r20.u64;
	// std r23,-320(r1)
	REX_STORE_U64(ctx.r1.u32 + -320, ctx.r23.u64);
	// subf r18,r26,r16
	ctx.r18.u64 = ctx.r16.u64 - ctx.r26.u64;
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// stw r18,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r18.u32);
	// subf r15,r26,r6
	ctx.r15.u64 = ctx.r6.u64 - ctx.r26.u64;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r17,-308(r1)
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r17.u32);
	// subf r16,r11,r8
	ctx.r16.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r18,r27,r9
	ctx.r18.u64 = ctx.r9.u64 - ctx.r27.u64;
	// stw r3,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r3.u32);
	// subf r3,r30,r15
	ctx.r3.u64 = ctx.r15.u64 - ctx.r30.u64;
	// lwz r15,-344(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// subf r16,r5,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r5.u64;
	// rlwinm r18,r18,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r15,r19,r15
	ctx.r15.u64 = ctx.r15.u64 - ctx.r19.u64;
	// rlwinm r16,r16,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r18,r30,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r30.u64;
	// add r15,r15,r25
	ctx.r15.u64 = ctx.r15.u64 + ctx.r25.u64;
	// subf r16,r31,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r31.u64;
	// subf r17,r5,r18
	ctx.r17.u64 = ctx.r18.u64 - ctx.r5.u64;
	// stw r15,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r15.u32);
	// add r15,r16,r25
	ctx.r15.u64 = ctx.r16.u64 + ctx.r25.u64;
	// lwz r23,-344(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r16,r17,r25
	ctx.r16.u64 = ctx.r17.u64 + ctx.r25.u64;
	// lwz r17,-332(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// rlwinm r18,r3,3,0,28
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r16,r16,r21
	ctx.r16.u64 = ctx.r16.u64 + ctx.r21.u64;
	// subf r3,r3,r18
	ctx.r3.u64 = ctx.r18.u64 - ctx.r3.u64;
	// mr r18,r17
	ctx.r18.u64 = ctx.r17.u64;
	// stw r17,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r17.u32);
	// rlwinm r17,r23,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r17,r3
	ctx.r3.u64 = ctx.r17.u64 + ctx.r3.u64;
	// lwz r17,-344(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// stw r18,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r18.u32);
	// rlwinm r17,r17,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r18,r10,r26
	ctx.r18.u64 = ctx.r26.u64 - ctx.r10.u64;
	// stw r17,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r17.u32);
	// lwz r23,-360(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// srawi r14,r14,1
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x1) != 0);
	ctx.r14.s64 = ctx.r14.s32 >> 1;
	// rlwinm r17,r18,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r3,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r3.u32);
	// add r3,r15,r6
	ctx.r3.u64 = ctx.r15.u64 + ctx.r6.u64;
	// lwz r15,-344(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r18,r18,r17
	ctx.r18.u64 = ctx.r18.u64 + ctx.r17.u64;
	// stw r15,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r15.u32);
	// rlwinm r17,r16,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r16,-360(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r18,-240(r1)
	REX_STORE_U32(ctx.r1.u32 + -240, ctx.r18.u32);
	// subf r15,r11,r10
	ctx.r15.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r3,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r3.u32);
	// add r3,r23,r8
	ctx.r3.u64 = ctx.r23.u64 + ctx.r8.u64;
	// mulli r18,r15,11
	ctx.r18.s64 = static_cast<int64_t>(ctx.r15.u64 * static_cast<uint64_t>(11));
	// stw r18,-272(r1)
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r18.u32);
	// stw r3,-332(r1)
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r3.u32);
	// lwz r3,-344(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// subf r18,r19,r17
	ctx.r18.u64 = ctx.r17.u64 - ctx.r19.u64;
	// rotlwi r15,r9,3
	ctx.r15.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// stw r18,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r18.u32);
	// rotlwi r18,r6,1
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// rotlwi r17,r27,2
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r27.u32, 2);
	// add r23,r18,r8
	ctx.r23.u64 = ctx.r18.u64 + ctx.r8.u64;
	// lwz r18,-336(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// add r17,r27,r17
	ctx.r17.u64 = ctx.r27.u64 + ctx.r17.u64;
	// add r3,r18,r3
	ctx.r3.u64 = ctx.r18.u64 + ctx.r3.u64;
	// subf r18,r9,r15
	ctx.r18.u64 = ctx.r15.u64 - ctx.r9.u64;
	// mullw r15,r14,r4
	ctx.r15.s64 = int64_t(ctx.r14.s32) * int64_t(ctx.r4.s32);
	// lwz r14,-296(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// stw r15,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r15.u32);
	// lwz r15,-272(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// add r3,r16,r3
	ctx.r3.u64 = ctx.r16.u64 + ctx.r3.u64;
	// lwz r16,-240(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// add r16,r14,r16
	ctx.r16.u64 = ctx.r14.u64 + ctx.r16.u64;
	// lwz r14,-332(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// add r15,r3,r15
	ctx.r15.u64 = ctx.r3.u64 + ctx.r15.u64;
	// lwz r3,-300(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// srawi r15,r15,1
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x1) != 0);
	ctx.r15.s64 = ctx.r15.s32 >> 1;
	// stw r3,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r3.u32);
	// subf r3,r17,r16
	ctx.r3.u64 = ctx.r16.u64 - ctx.r17.u64;
	// rlwinm r16,r23,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r3,r18
	ctx.r3.u64 = ctx.r3.u64 + ctx.r18.u64;
	// lwz r18,-308(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// rotlwi r17,r14,0
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r14.u32, 0);
	// rlwinm r14,r14,3,0,28
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r16,r18,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r18.u64;
	// subf r18,r17,r14
	ctx.r18.u64 = ctx.r14.u64 - ctx.r17.u64;
	// lwz r14,-360(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// subf r17,r11,r6
	ctx.r17.u64 = ctx.r6.u64 - ctx.r11.u64;
	// subf r16,r31,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r31.u64;
	// mulli r17,r17,11
	ctx.r17.s64 = static_cast<int64_t>(ctx.r17.u64 * static_cast<uint64_t>(11));
	// stw r17,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r17.u32);
	// lwz r23,-344(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// stw r3,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r3.u32);
	// add r23,r23,r24
	ctx.r23.u64 = ctx.r23.u64 + ctx.r24.u64;
	// rlwinm r3,r23,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r23,-344(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// srawi r23,r23,1
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1) != 0);
	ctx.r23.s64 = ctx.r23.s32 >> 1;
	// add r18,r3,r18
	ctx.r18.u64 = ctx.r3.u64 + ctx.r18.u64;
	// lwz r3,-280(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// stw r3,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r3.u32);
	// subf r3,r28,r20
	ctx.r3.u64 = ctx.r20.u64 - ctx.r28.u64;
	// rlwinm r17,r3,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r17,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r17.u32);
	// mullw r17,r15,r29
	ctx.r17.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r29.s32);
	// add r17,r14,r17
	ctx.r17.u64 = ctx.r14.u64 + ctx.r17.u64;
	// subf r15,r20,r31
	ctx.r15.u64 = ctx.r31.u64 - ctx.r20.u64;
	// lwz r20,-360(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// srawi r14,r16,1
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x1) != 0);
	ctx.r14.s64 = ctx.r16.s32 >> 1;
	// mullw r16,r23,r7
	ctx.r16.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r7.s32);
	// lwz r23,-344(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r20,r18,r20
	ctx.r20.u64 = ctx.r18.u64 + ctx.r20.u64;
	// subf r15,r21,r15
	ctx.r15.u64 = ctx.r15.u64 - ctx.r21.u64;
	// add r18,r3,r23
	ctx.r18.u64 = ctx.r3.u64 + ctx.r23.u64;
	// add r3,r17,r16
	ctx.r3.u64 = ctx.r17.u64 + ctx.r16.u64;
	// rlwinm r21,r14,8,0,23
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 8) & 0xFFFFFF00;
	// subf r17,r9,r15
	ctx.r17.u64 = ctx.r15.u64 - ctx.r9.u64;
	// add r21,r3,r21
	ctx.r21.u64 = ctx.r3.u64 + ctx.r21.u64;
	// subf r3,r8,r17
	ctx.r3.u64 = ctx.r17.u64 - ctx.r8.u64;
	// add r18,r20,r18
	ctx.r18.u64 = ctx.r20.u64 + ctx.r18.u64;
	// add r20,r3,r27
	ctx.r20.u64 = ctx.r3.u64 + ctx.r27.u64;
	// subf r3,r6,r26
	ctx.r3.u64 = ctx.r26.u64 - ctx.r6.u64;
	// subf r16,r11,r9
	ctx.r16.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r17,r10,r3
	ctx.r17.u64 = ctx.r3.u64 - ctx.r10.u64;
	// subf r16,r5,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r5.u64;
	// subf r15,r9,r27
	ctx.r15.u64 = ctx.r27.u64 - ctx.r9.u64;
	// add r27,r17,r11
	ctx.r27.u64 = ctx.r17.u64 + ctx.r11.u64;
	// add r20,r20,r30
	ctx.r20.u64 = ctx.r20.u64 + ctx.r30.u64;
	// rlwinm r16,r16,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r14,r8,r28
	ctx.r14.u64 = ctx.r28.u64 - ctx.r8.u64;
	// rlwinm r15,r15,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r17,r27,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r20,r20,r28
	ctx.r20.u64 = ctx.r20.u64 + ctx.r28.u64;
	// subf r16,r30,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r30.u64;
	// rlwinm r14,r14,1,0,30
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r15,r25,r15
	ctx.r15.u64 = ctx.r15.u64 - ctx.r25.u64;
	// add r17,r27,r17
	ctx.r17.u64 = ctx.r27.u64 + ctx.r17.u64;
	// rlwinm r20,r20,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r14,r26,r14
	ctx.r14.u64 = ctx.r14.u64 - ctx.r26.u64;
	// add r27,r16,r10
	ctx.r27.u64 = ctx.r16.u64 + ctx.r10.u64;
	// subf r15,r26,r15
	ctx.r15.u64 = ctx.r15.u64 - ctx.r26.u64;
	// add r20,r20,r17
	ctx.r20.u64 = ctx.r20.u64 + ctx.r17.u64;
	// add r27,r27,r24
	ctx.r27.u64 = ctx.r27.u64 + ctx.r24.u64;
	// subf r16,r10,r14
	ctx.r16.u64 = ctx.r14.u64 - ctx.r10.u64;
	// rlwinm r26,r3,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r15,r6,r15
	ctx.r15.u64 = ctx.r15.u64 - ctx.r6.u64;
	// subf r14,r25,r20
	ctx.r14.u64 = ctx.r20.u64 - ctx.r25.u64;
	// rlwinm r20,r27,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r16,r9,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r9.u64;
	// add r17,r3,r26
	ctx.r17.u64 = ctx.r3.u64 + ctx.r26.u64;
	// rotlwi r25,r28,2
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r28.u32, 2);
	// subf r27,r8,r15
	ctx.r27.u64 = ctx.r15.u64 - ctx.r8.u64;
	// subf r3,r24,r16
	ctx.r3.u64 = ctx.r16.u64 - ctx.r24.u64;
	// subf r26,r24,r14
	ctx.r26.u64 = ctx.r14.u64 - ctx.r24.u64;
	// add r28,r28,r25
	ctx.r28.u64 = ctx.r28.u64 + ctx.r25.u64;
	// add r27,r27,r31
	ctx.r27.u64 = ctx.r27.u64 + ctx.r31.u64;
	// add r24,r20,r17
	ctx.r24.u64 = ctx.r20.u64 + ctx.r17.u64;
	// rotlwi r17,r8,3
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// lwz r15,-336(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// add r20,r26,r19
	ctx.r20.u64 = ctx.r26.u64 + ctx.r19.u64;
	// ld r23,-320(r1)
	ctx.r23.u64 = REX_LOAD_U64(ctx.r1.u32 + -320);
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// subf r26,r28,r24
	ctx.r26.u64 = ctx.r24.u64 - ctx.r28.u64;
	// add r25,r27,r10
	ctx.r25.u64 = ctx.r27.u64 + ctx.r10.u64;
	// subf r24,r8,r17
	ctx.r24.u64 = ctx.r17.u64 - ctx.r8.u64;
	// lwz r17,-288(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// add r27,r3,r30
	ctx.r27.u64 = ctx.r3.u64 + ctx.r30.u64;
	// add r20,r20,r5
	ctx.r20.u64 = ctx.r20.u64 + ctx.r5.u64;
	// add r24,r26,r24
	ctx.r24.u64 = ctx.r26.u64 + ctx.r24.u64;
	// srawi r3,r18,1
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r18.s32 >> 1;
	// add r26,r27,r11
	ctx.r26.u64 = ctx.r27.u64 + ctx.r11.u64;
	// subf r19,r9,r11
	ctx.r19.u64 = ctx.r11.u64 - ctx.r9.u64;
	// add r25,r25,r11
	ctx.r25.u64 = ctx.r25.u64 + ctx.r11.u64;
	// mullw r18,r3,r4
	ctx.r18.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// mullw r27,r20,r29
	ctx.r27.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r29.s32);
	// add r26,r26,r5
	ctx.r26.u64 = ctx.r26.u64 + ctx.r5.u64;
	// srawi r24,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 1;
	// add r16,r25,r5
	ctx.r16.u64 = ctx.r25.u64 + ctx.r5.u64;
	// subf r20,r8,r19
	ctx.r20.u64 = ctx.r19.u64 - ctx.r8.u64;
	// add r25,r18,r27
	ctx.r25.u64 = ctx.r18.u64 + ctx.r27.u64;
	// rotlwi r28,r10,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// subf r3,r6,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r6.u64;
	// mullw r27,r24,r4
	ctx.r27.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r4.s32);
	// mullw r26,r26,r29
	ctx.r26.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r29.s32);
	// add r5,r20,r5
	ctx.r5.u64 = ctx.r20.u64 + ctx.r5.u64;
	// add r20,r28,r9
	ctx.r20.u64 = ctx.r28.u64 + ctx.r9.u64;
	// add r27,r27,r26
	ctx.r27.u64 = ctx.r27.u64 + ctx.r26.u64;
	// rlwinm r28,r3,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r26,r5,r7
	ctx.r26.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// subf r5,r10,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mullw r24,r16,r7
	ctx.r24.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r7.s32);
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + ctx.r28.u64;
	// add r27,r27,r26
	ctx.r27.u64 = ctx.r27.u64 + ctx.r26.u64;
	// rlwinm r28,r20,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r5,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r24,r25,r24
	ctx.r24.u64 = ctx.r25.u64 + ctx.r24.u64;
	// lwz r25,-276(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -276);
	// subf r3,r8,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r8.u64;
	// subf r20,r17,r28
	ctx.r20.u64 = ctx.r28.u64 - ctx.r17.u64;
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + ctx.r26.u64;
	// add r26,r3,r31
	ctx.r26.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lwz r3,-244(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// mullw r28,r24,r25
	ctx.r28.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r25.s32);
	// mullw r21,r21,r15
	ctx.r21.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r15.s32);
	// subf r24,r30,r20
	ctx.r24.u64 = ctx.r20.u64 - ctx.r30.u64;
	// subf r5,r9,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r9.u64;
	// add r31,r21,r28
	ctx.r31.u64 = ctx.r21.u64 + ctx.r28.u64;
	// mullw r28,r27,r3
	ctx.r28.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r3.s32);
	// srawi r24,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 1;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// srawi r27,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r26.s32 >> 1;
	// add r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 + ctx.r28.u64;
	// srawi r5,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 1;
	// mullw r28,r24,r4
	ctx.r28.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r4.s32);
	// mullw r27,r27,r25
	ctx.r27.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r25.s32);
	// subf r30,r9,r10
	ctx.r30.u64 = ctx.r10.u64 - ctx.r9.u64;
	// mullw r9,r5,r29
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r29.s32);
	// add r10,r28,r27
	ctx.r10.u64 = ctx.r28.u64 + ctx.r27.u64;
	// srawi r5,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r30.s32 >> 1;
	// subf r8,r8,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r5,r7
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// srawi r6,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r6,r3
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r3.s32);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x881147e8
	if (!ctx.cr6.gt) goto loc_881147E8;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x881147f4
	goto loc_881147F4;
loc_881147E8:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_881147F4:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r11,-328(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// lwz r6,-260(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// addi r5,r23,-1
	ctx.r5.s64 = ctx.r23.s64 + -1;
	// lwz r10,-356(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -356);
	// addi r9,r22,1
	ctx.r9.s64 = ctx.r22.s64 + 1;
	// addi r3,r23,2
	ctx.r3.s64 = ctx.r23.s64 + 2;
	// std r22,-240(r1)
	REX_STORE_U64(ctx.r1.u32 + -240, ctx.r22.u64);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwz r6,-368(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// stb r8,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// addi r18,r11,1
	ctx.r18.s64 = ctx.r11.s64 + 1;
	// subf r19,r22,r10
	ctx.r19.u64 = ctx.r10.u64 - ctx.r22.u64;
	// stw r18,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r18.u32);
	// addi r20,r22,2
	ctx.r20.s64 = ctx.r22.s64 + 2;
	// lbzx r24,r5,r10
	ctx.r24.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// lbz r28,2(r10)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r31,-1(r19)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r19.u32 + -1);
	// lbzx r3,r3,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// lbz r26,1(r19)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r19.u32 + 1);
	// lbzx r30,r23,r10
	ctx.r30.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r10.u32);
	// lbzx r21,r6,r10
	ctx.r21.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// lbzx r5,r10,r22
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r22.u32);
	// lbzx r27,r9,r10
	ctx.r27.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// addi r9,r22,-1
	ctx.r9.s64 = ctx.r22.s64 + -1;
	// lbz r23,2(r19)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r19.u32 + 2);
	// subf r6,r27,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r27.u64;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r25,r9,r10
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// add r8,r27,r31
	ctx.r8.u64 = ctx.r27.u64 + ctx.r31.u64;
	// lbz r9,-1(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// rlwinm r17,r8,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,0(r19)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r19.u32 + 0);
	// subf r19,r28,r6
	ctx.r19.u64 = ctx.r6.u64 - ctx.r28.u64;
	// subf r17,r24,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r24.u64;
	// add r19,r19,r9
	ctx.r19.u64 = ctx.r19.u64 + ctx.r9.u64;
	// subf r6,r23,r17
	ctx.r6.u64 = ctx.r17.u64 - ctx.r23.u64;
	// add r16,r9,r8
	ctx.r16.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r19,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r19.u32);
	// rlwinm r17,r6,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r6,r11,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r18,r17,r3
	ctx.r18.u64 = ctx.r17.u64 + ctx.r3.u64;
	// add r6,r6,r25
	ctx.r6.u64 = ctx.r6.u64 + ctx.r25.u64;
	// rlwinm r18,r18,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// add r15,r6,r26
	ctx.r15.u64 = ctx.r6.u64 + ctx.r26.u64;
	// lbz r6,1(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// stw r18,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r18.u32);
	// rlwinm r18,r16,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r16,r26,r8
	ctx.r16.u64 = ctx.r8.u64 - ctx.r26.u64;
	// lbzx r10,r20,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r20.u32 + ctx.r10.u32);
	// subf r18,r18,r30
	ctx.r18.u64 = ctx.r30.u64 - ctx.r18.u64;
	// lwz r14,-368(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// rlwinm r20,r16,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r18,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r18.u32);
	// rlwinm r16,r15,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r20,r30,r20
	ctx.r20.u64 = ctx.r20.u64 - ctx.r30.u64;
	// subf r20,r31,r20
	ctx.r20.u64 = ctx.r20.u64 - ctx.r31.u64;
	// rlwinm r15,r19,3,0,28
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 3) & 0xFFFFFFF8;
	// add r18,r20,r21
	ctx.r18.u64 = ctx.r20.u64 + ctx.r21.u64;
	// lwz r20,-368(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// add r20,r20,r28
	ctx.r20.u64 = ctx.r20.u64 + ctx.r28.u64;
	// rotlwi r17,r19,0
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r19.u32, 0);
	// stw r20,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r20.u32);
	// subf r19,r21,r16
	ctx.r19.u64 = ctx.r16.u64 - ctx.r21.u64;
	// rlwinm r16,r20,3,0,28
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 3) & 0xFFFFFFF8;
	// add r18,r18,r23
	ctx.r18.u64 = ctx.r18.u64 + ctx.r23.u64;
	// rotlwi r20,r20,0
	ctx.r20.u64 = __builtin_rotateleft32(ctx.r20.u32, 0);
	// subf r19,r10,r19
	ctx.r19.u64 = ctx.r19.u64 - ctx.r10.u64;
	// stw r20,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r20.u32);
	// rlwinm r18,r18,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r22,-368(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// subf r20,r25,r10
	ctx.r20.u64 = ctx.r10.u64 - ctx.r25.u64;
	// stw r19,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r19.u32);
	// subf r19,r22,r16
	ctx.r19.u64 = ctx.r16.u64 - ctx.r22.u64;
	// subf r18,r3,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r3.u64;
	// lwz r16,-368(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// stw r16,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r16.u32);
	// subf r17,r17,r15
	ctx.r17.u64 = ctx.r15.u64 - ctx.r17.u64;
	// add r18,r18,r24
	ctx.r18.u64 = ctx.r18.u64 + ctx.r24.u64;
	// rlwinm r16,r20,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r15,r11,r8
	ctx.r15.u64 = ctx.r8.u64 - ctx.r11.u64;
	// stw r17,-356(r1)
	REX_STORE_U32(ctx.r1.u32 + -356, ctx.r17.u32);
	// add r17,r19,r14
	ctx.r17.u64 = ctx.r19.u64 + ctx.r14.u64;
	// stw r16,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r16.u32);
	// rlwinm r16,r18,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r19,-368(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// add r22,r5,r6
	ctx.r22.u64 = ctx.r5.u64 + ctx.r6.u64;
	// std r7,-320(r1)
	REX_STORE_U64(ctx.r1.u32 + -320, ctx.r7.u64);
	// subf r14,r11,r6
	ctx.r14.u64 = ctx.r6.u64 - ctx.r11.u64;
	// lwz r7,-344(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r20,r20,r7
	ctx.r20.u64 = ctx.r20.u64 + ctx.r7.u64;
	// lwz r18,-356(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -356);
	// mulli r22,r22,13
	ctx.r22.s64 = static_cast<int64_t>(ctx.r22.u64 * static_cast<uint64_t>(13));
	// stw r18,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r18.u32);
	// lwz r7,-368(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// rlwinm r18,r19,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r15,r31,r15
	ctx.r15.u64 = ctx.r15.u64 - ctx.r31.u64;
	// add r18,r19,r18
	ctx.r18.u64 = ctx.r19.u64 + ctx.r18.u64;
	// add r19,r16,r7
	ctx.r19.u64 = ctx.r16.u64 + ctx.r7.u64;
	// add r20,r19,r20
	ctx.r20.u64 = ctx.r19.u64 + ctx.r20.u64;
	// add r18,r17,r18
	ctx.r18.u64 = ctx.r17.u64 + ctx.r18.u64;
	// mulli r19,r14,11
	ctx.r19.s64 = static_cast<int64_t>(ctx.r14.u64 * static_cast<uint64_t>(11));
	// subf r18,r22,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r22.u64;
	// subf r17,r25,r9
	ctx.r17.u64 = ctx.r9.u64 - ctx.r25.u64;
	// add r19,r20,r19
	ctx.r19.u64 = ctx.r20.u64 + ctx.r19.u64;
	// srawi r18,r18,1
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1) != 0);
	ctx.r18.s64 = ctx.r18.s32 >> 1;
	// rlwinm r17,r17,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r19,r19,1
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x1) != 0);
	ctx.r19.s64 = ctx.r19.s32 >> 1;
	// rotlwi r20,r11,2
	ctx.r20.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// subf r14,r28,r17
	ctx.r14.u64 = ctx.r17.u64 - ctx.r28.u64;
	// add r20,r11,r20
	ctx.r20.u64 = ctx.r11.u64 + ctx.r20.u64;
	// mullw r17,r19,r29
	ctx.r17.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r29.s32);
	// stw r20,-288(r1)
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r20.u32);
	// mullw r18,r18,r4
	ctx.r18.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r4.s32);
	// subf r16,r21,r30
	ctx.r16.u64 = ctx.r30.u64 - ctx.r21.u64;
	// rlwinm r19,r15,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// add r17,r18,r17
	ctx.r17.u64 = ctx.r18.u64 + ctx.r17.u64;
	// subf r16,r10,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r10.u64;
	// subf r18,r30,r19
	ctx.r18.u64 = ctx.r19.u64 - ctx.r30.u64;
	// stw r17,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r17.u32);
	// subf r20,r31,r14
	ctx.r20.u64 = ctx.r14.u64 - ctx.r31.u64;
	// subf r15,r9,r16
	ctx.r15.u64 = ctx.r16.u64 - ctx.r9.u64;
	// add r16,r20,r24
	ctx.r16.u64 = ctx.r20.u64 + ctx.r24.u64;
	// add r18,r18,r24
	ctx.r18.u64 = ctx.r18.u64 + ctx.r24.u64;
	// subf r20,r6,r27
	ctx.r20.u64 = ctx.r27.u64 - ctx.r6.u64;
	// subf r19,r5,r27
	ctx.r19.u64 = ctx.r27.u64 - ctx.r5.u64;
	// add r14,r18,r5
	ctx.r14.u64 = ctx.r18.u64 + ctx.r5.u64;
	// rlwinm r18,r20,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// add r16,r16,r10
	ctx.r16.u64 = ctx.r16.u64 + ctx.r10.u64;
	// subf r10,r6,r19
	ctx.r10.u64 = ctx.r19.u64 - ctx.r6.u64;
	// add r20,r20,r18
	ctx.r20.u64 = ctx.r20.u64 + ctx.r18.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r20,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r20.u32);
	// subf r17,r8,r15
	ctx.r17.u64 = ctx.r15.u64 - ctx.r8.u64;
	// rlwinm r20,r10,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r17,r17,r25
	ctx.r17.u64 = ctx.r17.u64 + ctx.r25.u64;
	// stw r20,-356(r1)
	REX_STORE_U32(ctx.r1.u32 + -356, ctx.r20.u32);
	// subf r19,r30,r6
	ctx.r19.u64 = ctx.r6.u64 - ctx.r30.u64;
	// add r15,r17,r28
	ctx.r15.u64 = ctx.r17.u64 + ctx.r28.u64;
	// subf r19,r27,r19
	ctx.r19.u64 = ctx.r19.u64 - ctx.r27.u64;
	// add r20,r15,r26
	ctx.r20.u64 = ctx.r15.u64 + ctx.r26.u64;
	// rotlwi r18,r5,1
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// rlwinm r20,r20,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// add r19,r19,r8
	ctx.r19.u64 = ctx.r19.u64 + ctx.r8.u64;
	// stw r20,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r20.u32);
	// add r18,r18,r8
	ctx.r18.u64 = ctx.r18.u64 + ctx.r8.u64;
	// rlwinm r20,r16,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r19,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r19.u32);
	// rotlwi r17,r25,2
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r25.u32, 2);
	// rlwinm r15,r19,3,0,28
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r18,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r16,r14,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r20,r3,r20
	ctx.r20.u64 = ctx.r20.u64 - ctx.r3.u64;
	// rotlwi r19,r9,3
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r17,r25,r17
	ctx.r17.u64 = ctx.r25.u64 + ctx.r17.u64;
	// subf r14,r9,r25
	ctx.r14.u64 = ctx.r25.u64 - ctx.r9.u64;
	// lwz r18,-368(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// add r20,r20,r23
	ctx.r20.u64 = ctx.r20.u64 + ctx.r23.u64;
	// subf r19,r9,r19
	ctx.r19.u64 = ctx.r19.u64 - ctx.r9.u64;
	// subf r25,r11,r5
	ctx.r25.u64 = ctx.r5.u64 - ctx.r11.u64;
	// lwz r22,-356(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -356);
	// add r16,r16,r18
	ctx.r16.u64 = ctx.r16.u64 + ctx.r18.u64;
	// add r18,r10,r22
	ctx.r18.u64 = ctx.r10.u64 + ctx.r22.u64;
	// lwz r10,-344(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// stw r25,-356(r1)
	REX_STORE_U32(ctx.r1.u32 + -356, ctx.r25.u32);
	// subf r25,r17,r16
	ctx.r25.u64 = ctx.r16.u64 - ctx.r17.u64;
	// lwz r22,-360(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// rlwinm r14,r14,1,0,30
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// add r17,r25,r19
	ctx.r17.u64 = ctx.r25.u64 + ctx.r19.u64;
	// lwz r25,-288(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// add r18,r22,r18
	ctx.r18.u64 = ctx.r22.u64 + ctx.r18.u64;
	// lwz r22,-356(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -356);
	// stw r10,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r10.u32);
	// subf r10,r26,r21
	ctx.r10.u64 = ctx.r21.u64 - ctx.r26.u64;
	// rlwinm r21,r20,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r16,-336(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// subf r7,r25,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r25.u64;
	// subf r18,r24,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r24.u64;
	// mulli r19,r22,11
	ctx.r19.s64 = static_cast<int64_t>(ctx.r22.u64 * static_cast<uint64_t>(11));
	// lwz r20,-368(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// srawi r17,r17,1
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x1) != 0);
	ctx.r17.s64 = ctx.r17.s32 >> 1;
	// subf r20,r20,r15
	ctx.r20.u64 = ctx.r15.u64 - ctx.r20.u64;
	// lwz r15,-280(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// add r21,r21,r20
	ctx.r21.u64 = ctx.r21.u64 + ctx.r20.u64;
	// rlwinm r20,r10,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r21,r21,r19
	ctx.r21.u64 = ctx.r21.u64 + ctx.r19.u64;
	// add r20,r10,r20
	ctx.r20.u64 = ctx.r10.u64 + ctx.r20.u64;
	// subf r10,r30,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r30.u64;
	// ld r7,-320(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + -320);
	// subf r19,r24,r14
	ctx.r19.u64 = ctx.r14.u64 - ctx.r24.u64;
	// stw r10,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r10.u32);
	// subf r10,r23,r18
	ctx.r10.u64 = ctx.r18.u64 - ctx.r23.u64;
	// mullw r24,r17,r7
	ctx.r24.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r7.s32);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r21,r21,r20
	ctx.r21.u64 = ctx.r21.u64 + ctx.r20.u64;
	// add r3,r16,r24
	ctx.r3.u64 = ctx.r16.u64 + ctx.r24.u64;
	// subf r20,r27,r19
	ctx.r20.u64 = ctx.r19.u64 - ctx.r27.u64;
	// subf r19,r11,r9
	ctx.r19.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// subf r20,r5,r20
	ctx.r20.u64 = ctx.r20.u64 - ctx.r5.u64;
	// subf r19,r31,r19
	ctx.r19.u64 = ctx.r19.u64 - ctx.r31.u64;
	// rotlwi r16,r6,1
	ctx.r16.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// lwz r18,-368(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// add r16,r16,r9
	ctx.r16.u64 = ctx.r16.u64 + ctx.r9.u64;
	// srawi r18,r18,1
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1) != 0);
	ctx.r18.s64 = ctx.r18.s32 >> 1;
	// srawi r21,r21,1
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1) != 0);
	ctx.r21.s64 = ctx.r21.s32 >> 1;
	// rlwinm r24,r18,8,0,23
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r16,r16,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// add r24,r3,r24
	ctx.r24.u64 = ctx.r3.u64 + ctx.r24.u64;
	// mullw r3,r21,r4
	ctx.r3.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r4.s32);
	// mullw r21,r10,r29
	ctx.r21.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// subf r10,r8,r20
	ctx.r10.u64 = ctx.r20.u64 - ctx.r8.u64;
	// rlwinm r20,r19,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// add r21,r3,r21
	ctx.r21.u64 = ctx.r3.u64 + ctx.r21.u64;
	// subf r19,r8,r26
	ctx.r19.u64 = ctx.r26.u64 - ctx.r8.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// subf r3,r28,r20
	ctx.r3.u64 = ctx.r20.u64 - ctx.r28.u64;
	// rlwinm r18,r19,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// add r20,r10,r6
	ctx.r20.u64 = ctx.r10.u64 + ctx.r6.u64;
	// subf r10,r5,r27
	ctx.r10.u64 = ctx.r27.u64 - ctx.r5.u64;
	// subf r27,r27,r18
	ctx.r27.u64 = ctx.r18.u64 - ctx.r27.u64;
	// add r14,r3,r23
	ctx.r14.u64 = ctx.r3.u64 + ctx.r23.u64;
	// rlwinm r19,r10,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r27,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r27.u32);
	// subf r3,r5,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r5.u64;
	// rlwinm r18,r14,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r14,-368(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// add r17,r10,r19
	ctx.r17.u64 = ctx.r10.u64 + ctx.r19.u64;
	// rlwinm r27,r3,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r19,r26,2
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r26.u32, 2);
	// subf r10,r6,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r6.u64;
	// subf r14,r6,r14
	ctx.r14.u64 = ctx.r14.u64 - ctx.r6.u64;
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + ctx.r27.u64;
	// add r17,r18,r17
	ctx.r17.u64 = ctx.r18.u64 + ctx.r17.u64;
	// add r26,r26,r19
	ctx.r26.u64 = ctx.r26.u64 + ctx.r19.u64;
	// rlwinm r18,r10,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r27,r9,r14
	ctx.r27.u64 = ctx.r14.u64 - ctx.r9.u64;
	// rotlwi r19,r8,3
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// subf r3,r8,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r8.u64;
	// add r18,r10,r18
	ctx.r18.u64 = ctx.r10.u64 + ctx.r18.u64;
	// subf r27,r23,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r23.u64;
	// subf r26,r26,r17
	ctx.r26.u64 = ctx.r17.u64 - ctx.r26.u64;
	// subf r19,r8,r19
	ctx.r19.u64 = ctx.r19.u64 - ctx.r8.u64;
	// ld r22,-240(r1)
	ctx.r22.u64 = REX_LOAD_U64(ctx.r1.u32 + -240);
	// subf r25,r25,r16
	ctx.r25.u64 = ctx.r16.u64 - ctx.r25.u64;
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// add r10,r27,r5
	ctx.r10.u64 = ctx.r27.u64 + ctx.r5.u64;
	// subf r3,r9,r18
	ctx.r3.u64 = ctx.r18.u64 - ctx.r9.u64;
	// add r27,r26,r19
	ctx.r27.u64 = ctx.r26.u64 + ctx.r19.u64;
	// subf r26,r28,r25
	ctx.r26.u64 = ctx.r25.u64 - ctx.r28.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + ctx.r28.u64;
	// srawi r25,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r25.s64 = ctx.r27.s32 >> 1;
	// srawi r28,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r26.s32 >> 1;
	// srawi r26,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r30.s32 >> 1;
	// srawi r23,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r23.s64 = ctx.r3.s32 >> 1;
	// lwz r3,-276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -276);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r10,r28,r4
	ctx.r10.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r4.s32);
	// mullw r28,r26,r3
	ctx.r28.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r3.s32);
	// subf r6,r9,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r9.u64;
	// add r27,r20,r11
	ctx.r27.u64 = ctx.r20.u64 + ctx.r11.u64;
	// subf r20,r9,r11
	ctx.r20.u64 = ctx.r11.u64 - ctx.r9.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// mullw r9,r23,r29
	ctx.r9.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r29.s32);
	// srawi r6,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r6,r7
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r6,r27,r31
	ctx.r6.u64 = ctx.r27.u64 + ctx.r31.u64;
	// add r28,r30,r31
	ctx.r28.u64 = ctx.r30.u64 + ctx.r31.u64;
	// subf r27,r8,r5
	ctx.r27.u64 = ctx.r5.u64 - ctx.r8.u64;
	// subf r30,r8,r20
	ctx.r30.u64 = ctx.r20.u64 - ctx.r8.u64;
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,-244(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// mullw r8,r25,r4
	ctx.r8.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r4.s32);
	// mullw r6,r28,r29
	ctx.r6.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// srawi r4,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r27.s32 >> 1;
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r30,r21,r5
	ctx.r30.u64 = ctx.r21.u64 + ctx.r5.u64;
	// mullw r8,r4,r10
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// mullw r5,r31,r7
	ctx.r5.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r7.s32);
	// mullw r7,r30,r3
	ctx.r7.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r3.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r24,r24,r15
	ctx.r24.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r15.s32);
	// add r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 + ctx.r5.u64;
	// rotlwi r8,r11,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// mullw r10,r3,r10
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// add r11,r24,r7
	ctx.r11.u64 = ctx.r24.u64 + ctx.r7.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 16;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x88114ca4
	if (!ctx.cr6.gt) goto loc_88114CA4;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x88114cb0
	goto loc_88114CB0;
loc_88114CA4:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_88114CB0:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,-312(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// lwz r10,-268(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// lwz r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r27,-256(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// li r25,128
	ctx.r25.s64 = 128;
	// lwz r7,-352(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// li r24,16
	ctx.r24.s64 = 16;
	// lwz r29,-328(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// lwz r26,-260(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// stb r9,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// stw r30,-312(r1)
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r30.u32);
	// b 0x88114d10
	goto loc_88114D10;
loc_88114CEC:
	// lwz r27,-256(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// li r24,16
	ctx.r24.s64 = 16;
	// lwz r10,-268(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// li r25,128
	ctx.r25.s64 = 128;
	// lwz r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r26,-260(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// lwz r29,-328(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// lwz r30,-312(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
loc_88114D0C:
	// li r8,1
	ctx.r8.s64 = 1;
loc_88114D10:
	// lwz r9,-284(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r8,-308(r1)
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r8.u32);
	// stw r9,-284(r1)
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r9.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88113dfc
	if (ctx.cr6.lt) goto loc_88113DFC;
	// lwz r4,-264(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// b 0x88115048
	goto loc_88115048;
loc_88114D34:
	// lwz r9,80(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88114e24
	if (!ctx.cr6.lt) goto loc_88114E24;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x88114db4
	if (!ctx.cr6.lt) goto loc_88114DB4;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lbzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r5,1(r5)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// mullw r4,r5,r28
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r28.s32);
	// lbz r31,1(r9)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r23,0(r9)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lwz r9,-228(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// subf r31,r5,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r5.u64;
	// mullw r5,r23,r9
	ctx.r5.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r9.s32);
	// subf r31,r23,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r23.u64;
	// add r31,r31,r6
	ctx.r31.u64 = ctx.r31.u64 + ctx.r6.u64;
	// mullw r31,r31,r28
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r28.s32);
	// mullw r31,r31,r9
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// srawi r31,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 8;
	// subfic r28,r28,256
	ctx.xer.ca = ctx.r28.u32 <= 256;
	ctx.r28.u64 = static_cast<uint64_t>(256) - ctx.r28.u64;
	// subf r9,r9,r28
	ctx.r9.u64 = ctx.r28.u64 - ctx.r9.u64;
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r6,r9,r5
	ctx.r6.u64 = ctx.r9.u64 + ctx.r5.u64;
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// stb r5,1(r7)
	REX_STORE_U8(ctx.r7.u32 + 1, ctx.r5.u8);
	// b 0x88114ddc
	goto loc_88114DDC;
loc_88114DB4:
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,-228(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// lbzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// subfic r6,r9,256
	ctx.xer.ca = ctx.r9.u32 <= 256;
	ctx.r6.u64 = static_cast<uint64_t>(256) - ctx.r9.u64;
	// mullw r6,r4,r6
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// lbzx r5,r5,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// mullw r9,r5,r9
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// add r4,r6,r9
	ctx.r4.u64 = ctx.r6.u64 + ctx.r9.u64;
	// rlwinm r9,r4,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF;
	// stb r9,1(r7)
	REX_STORE_U8(ctx.r7.u32 + 1, ctx.r9.u8);
loc_88114DDC:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r7,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r7.u32);
	// beq cr6,0x88114d0c
	if (ctx.cr6.eq) goto loc_88114D0C;
	// lwz r9,-220(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mullw r9,r9,r22
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r22.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbzx r9,r11,r27
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// stb r9,1(r29)
	REX_STORE_U8(ctx.r29.u32 + 1, ctx.r9.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r29,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r29.u32);
	// lbzx r6,r11,r26
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// stb r6,1(r30)
	REX_STORE_U8(ctx.r30.u32 + 1, ctx.r6.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r30,-312(r1)
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r30.u32);
	// b 0x88114d10
	goto loc_88114D10;
loc_88114E24:
	// stb r24,1(r7)
	REX_STORE_U8(ctx.r7.u32 + 1, ctx.r24.u8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r7,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r7.u32);
	// beq cr6,0x88114d0c
	if (ctx.cr6.eq) goto loc_88114D0C;
	// stb r25,1(r29)
	REX_STORE_U8(ctx.r29.u32 + 1, ctx.r25.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stb r25,1(r30)
	REX_STORE_U8(ctx.r30.u32 + 1, ctx.r25.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r29.u32);
	// stw r30,-312(r1)
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r30.u32);
	// b 0x88114d10
	goto loc_88114D10;
loc_88114E58:
	// lwz r9,84(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88114ff8
	if (!ctx.cr6.lt) goto loc_88114FF8;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// bge cr6,0x88114f48
	if (!ctx.cr6.lt) goto loc_88114F48;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88115048
	if (!ctx.cr6.gt) goto loc_88115048;
loc_88114E80:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-320(r1)
	REX_STORE_U64(ctx.r1.u32 + -320, ctx.f13.u64);
	// lwz r11,-316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x88114f08
	if (ctx.cr6.lt) goto loc_88114F08;
	// lwz r9,80(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88114f08
	if (!ctx.cr6.lt) goto loc_88114F08;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,-228(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lbzx r31,r11,r10
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// subfic r8,r9,256
	ctx.xer.ca = ctx.r9.u32 <= 256;
	ctx.r8.u64 = static_cast<uint64_t>(256) - ctx.r9.u64;
	// mullw r8,r31,r8
	ctx.r8.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r8.s32);
	// lbzx r5,r5,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// mullw r9,r5,r9
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r8,r9,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// stb r8,1(r7)
	REX_STORE_U8(ctx.r7.u32 + 1, ctx.r8.u8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// beq cr6,0x88114f30
	if (ctx.cr6.eq) goto loc_88114F30;
	// lwz r9,-220(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mullw r9,r9,r22
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r22.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbzx r9,r11,r27
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// stb r9,1(r29)
	REX_STORE_U8(ctx.r29.u32 + 1, ctx.r9.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lbzx r5,r11,r26
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// stb r5,1(r30)
	REX_STORE_U8(ctx.r30.u32 + 1, ctx.r5.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x88114f34
	goto loc_88114F34;
loc_88114F08:
	// stb r24,1(r7)
	REX_STORE_U8(ctx.r7.u32 + 1, ctx.r24.u8);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// beq cr6,0x88114f30
	if (ctx.cr6.eq) goto loc_88114F30;
	// stb r25,1(r29)
	REX_STORE_U8(ctx.r29.u32 + 1, ctx.r25.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r25,1(r30)
	REX_STORE_U8(ctx.r30.u32 + 1, ctx.r25.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x88114f34
	goto loc_88114F34;
loc_88114F30:
	// li r8,1
	ctx.r8.s64 = 1;
loc_88114F34:
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88114e80
	if (ctx.cr6.lt) goto loc_88114E80;
	// b 0x8811503c
	goto loc_8811503C;
loc_88114F48:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88115048
	if (!ctx.cr6.gt) goto loc_88115048;
loc_88114F50:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-320(r1)
	REX_STORE_U64(ctx.r1.u32 + -320, ctx.f13.u64);
	// lwz r9,-316(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x88114fb8
	if (ctx.cr6.lt) goto loc_88114FB8;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88114fb8
	if (!ctx.cr6.lt) goto loc_88114FB8;
	// lbzx r11,r9,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stb r11,1(r7)
	REX_STORE_U8(ctx.r7.u32 + 1, ctx.r11.u8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// beq cr6,0x88114fe0
	if (ctx.cr6.eq) goto loc_88114FE0;
	// lwz r11,-220(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mullw r11,r11,r22
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r22.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r9,r11,r27
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// stb r9,1(r29)
	REX_STORE_U8(ctx.r29.u32 + 1, ctx.r9.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lbzx r5,r11,r26
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// stb r5,1(r30)
	REX_STORE_U8(ctx.r30.u32 + 1, ctx.r5.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x88114fe4
	goto loc_88114FE4;
loc_88114FB8:
	// stb r24,1(r7)
	REX_STORE_U8(ctx.r7.u32 + 1, ctx.r24.u8);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// beq cr6,0x88114fe0
	if (ctx.cr6.eq) goto loc_88114FE0;
	// stb r25,1(r29)
	REX_STORE_U8(ctx.r29.u32 + 1, ctx.r25.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r25,1(r30)
	REX_STORE_U8(ctx.r30.u32 + 1, ctx.r25.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x88114fe4
	goto loc_88114FE4;
loc_88114FE0:
	// li r8,1
	ctx.r8.s64 = 1;
loc_88114FE4:
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88114f50
	if (ctx.cr6.lt) goto loc_88114F50;
	// b 0x8811503c
	goto loc_8811503C;
loc_88114FF8:
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88115048
	if (!ctx.cr6.gt) goto loc_88115048;
loc_88115008:
	// stb r24,1(r7)
	REX_STORE_U8(ctx.r7.u32 + 1, ctx.r24.u8);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// beq cr6,0x88115028
	if (ctx.cr6.eq) goto loc_88115028;
	// stbu r25,1(r29)
	ea = 1 + ctx.r29.u32;
	REX_STORE_U8(ea, ctx.r25.u8);
	ctx.r29.u32 = ea;
	// li r8,0
	ctx.r8.s64 = 0;
	// stbu r25,1(r30)
	ea = 1 + ctx.r30.u32;
	REX_STORE_U8(ea, ctx.r25.u8);
	ctx.r30.u32 = ea;
	// b 0x8811502c
	goto loc_8811502C;
loc_88115028:
	// li r8,1
	ctx.r8.s64 = 1;
loc_8811502C:
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88115008
	if (ctx.cr6.lt) goto loc_88115008;
loc_8811503C:
	// stw r30,-312(r1)
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r30.u32);
	// stw r29,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r29.u32);
	// stw r7,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r7.u32);
loc_88115048:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwz r6,80(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lis r8,-30678
	ctx.r8.s64 = -2010513408;
	// lwz r5,100(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// stw r4,-264(r1)
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r4.u32);
	// fmr f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f8.f64;
	// std r10,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r10.u64);
	// lfd f13,-192(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmadd f5,f12,f3,f4
	ctx.f5.f64 = std::fma(ctx.f12.f64, ctx.f3.f64, ctx.f4.f64);
	// fctiwz f2,f5
	ctx.f2.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f2,-320(r1)
	REX_STORE_U64(ctx.r1.u32 + -320, ctx.f2.u64);
	// lwz r10,-316(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stw r9,-11900(r8)
	REX_STORE_U32(ctx.r8.u32 + -11900, ctx.r9.u32);
	// extsw r31,r9
	ctx.r31.s64 = ctx.r9.s32;
	// add r9,r6,r5
	ctx.r9.u64 = ctx.r6.u64 + ctx.r5.u64;
	// std r31,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r31.u64);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r9,-268(r1)
	REX_STORE_U32(ctx.r1.u32 + -268, ctx.r9.u32);
	// lfd f13,-176(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmsub f5,f5,f11,f12
	ctx.f5.f64 = std::fma(ctx.f5.f64, ctx.f11.f64, -ctx.f12.f64);
	// fctiwz f2,f5
	ctx.f2.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f2,-320(r1)
	REX_STORE_U64(ctx.r1.u32 + -320, ctx.f2.u64);
	// lwz r21,-316(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// mullw r8,r21,r21
	ctx.r8.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r21.s32);
	// srawi r19,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r19.s64 = ctx.r8.s32 >> 8;
	// mullw r6,r19,r21
	ctx.r6.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r21.s32);
	// srawi r18,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r18.s64 = ctx.r6.s32 >> 8;
	// ble cr6,0x881156d8
	if (!ctx.cr6.gt) goto loc_881156D8;
	// lwz r8,84(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x881156d8
	if (!ctx.cr6.lt) goto loc_881156D8;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r8,-284(r1)
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r8.u32);
	// ble cr6,0x881157e0
	if (!ctx.cr6.gt) goto loc_881157E0;
loc_881150EC:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-320(r1)
	REX_STORE_U64(ctx.r1.u32 + -320, ctx.f13.u64);
	// lwz r10,-316(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x88115698
	if (!ctx.cr6.gt) goto loc_88115698;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88115698
	if (!ctx.cr6.lt) goto loc_88115698;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r23,80(r3)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r11,r10,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// subf r28,r23,r7
	ctx.r28.u64 = ctx.r7.u64 - ctx.r23.u64;
	// add r25,r23,r7
	ctx.r25.u64 = ctx.r23.u64 + ctx.r7.u64;
	// extsw r31,r11
	ctx.r31.s64 = ctx.r11.s32;
	// lbz r4,2(r7)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 2);
	// stw r11,-11900(r10)
	REX_STORE_U32(ctx.r10.u32 + -11900, ctx.r11.u32);
	// rlwinm r10,r23,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r6,-1(r28)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r28.u32 + -1);
	// lbz r29,1(r25)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r25.u32 + 1);
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// add r3,r29,r6
	ctx.r3.u64 = ctx.r29.u64 + ctx.r6.u64;
	// lbz r30,-1(r25)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r25.u32 + -1);
	// rotlwi r5,r11,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lbz r10,-1(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + -1);
	// lbz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r28.u32 + 0);
	// rlwinm r26,r3,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// std r31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r31.u64);
	// lfd f13,-160(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// lbz r27,-1(r8)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r8.u32 + -1);
	// add r3,r5,r30
	ctx.r3.u64 = ctx.r5.u64 + ctx.r30.u64;
	// lbz r31,1(r28)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r28.u32 + 1);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// add r20,r10,r9
	ctx.r20.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r28,2(r28)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r28.u32 + 2);
	// subf r17,r27,r26
	ctx.r17.u64 = ctx.r26.u64 - ctx.r27.u64;
	// lbz r5,0(r8)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// add r15,r3,r31
	ctx.r15.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r24,2(r8)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// subf r16,r30,r10
	ctx.r16.u64 = ctx.r10.u64 - ctx.r30.u64;
	// lbz r26,1(r8)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// rlwinm r3,r20,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,1(r7)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// subf r20,r28,r17
	ctx.r20.u64 = ctx.r17.u64 - ctx.r28.u64;
	// lbzx r7,r23,r7
	ctx.r7.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r7.u32);
	// rlwinm r17,r16,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r25,2(r25)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r25.u32 + 2);
	// subf r3,r3,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r3.u64;
	// fmsub f5,f0,f11,f12
	ctx.f5.f64 = std::fma(ctx.f0.f64, ctx.f11.f64, -ctx.f12.f64);
	// rlwinm r23,r15,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r20,r20,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r17,r4,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r4.u64;
	// add r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 + ctx.r4.u64;
	// subf r23,r26,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r26.u64;
	// add r15,r20,r24
	ctx.r15.u64 = ctx.r20.u64 + ctx.r24.u64;
	// subf r20,r6,r17
	ctx.r20.u64 = ctx.r17.u64 - ctx.r6.u64;
	// rlwinm r17,r3,3,0,28
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r23,r25,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r25.u64;
	// subf r3,r3,r17
	ctx.r3.u64 = ctx.r17.u64 - ctx.r3.u64;
	// fctiwz f2,f5
	ctx.f2.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// rlwinm r16,r23,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// stfd f2,-320(r1)
	REX_STORE_U64(ctx.r1.u32 + -320, ctx.f2.u64);
	// rlwinm r15,r15,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r14,-316(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// add r20,r20,r27
	ctx.r20.u64 = ctx.r20.u64 + ctx.r27.u64;
	// add r3,r3,r15
	ctx.r3.u64 = ctx.r3.u64 + ctx.r15.u64;
	// add r23,r23,r16
	ctx.r23.u64 = ctx.r23.u64 + ctx.r16.u64;
	// subf r17,r5,r8
	ctx.r17.u64 = ctx.r8.u64 - ctx.r5.u64;
	// add r20,r20,r25
	ctx.r20.u64 = ctx.r20.u64 + ctx.r25.u64;
	// add r16,r7,r8
	ctx.r16.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r23,r3,r23
	ctx.r23.u64 = ctx.r3.u64 + ctx.r23.u64;
	// subf r3,r29,r17
	ctx.r3.u64 = ctx.r17.u64 - ctx.r29.u64;
	// rlwinm r20,r20,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r16,r16,13
	ctx.r16.s64 = static_cast<int64_t>(ctx.r16.u64 * static_cast<uint64_t>(13));
	// mullw r15,r14,r14
	ctx.r15.s64 = int64_t(ctx.r14.s32) * int64_t(ctx.r14.s32);
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// subf r20,r24,r20
	ctx.r20.u64 = ctx.r20.u64 - ctx.r24.u64;
	// subf r16,r16,r23
	ctx.r16.u64 = ctx.r23.u64 - ctx.r16.u64;
	// stw r3,-356(r1)
	REX_STORE_U32(ctx.r1.u32 + -356, ctx.r3.u32);
	// srawi r23,r15,8
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0xFF) != 0);
	ctx.r23.s64 = ctx.r15.s32 >> 8;
	// rlwinm r15,r3,3,0,28
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r20,r20,r28
	ctx.r20.u64 = ctx.r20.u64 + ctx.r28.u64;
	// srawi r3,r16,1
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r16.s32 >> 1;
	// rotlwi r17,r11,2
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stw r20,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r20.u32);
	// stw r3,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r3.u32);
	// subf r20,r7,r29
	ctx.r20.u64 = ctx.r29.u64 - ctx.r7.u64;
	// add r3,r11,r17
	ctx.r3.u64 = ctx.r11.u64 + ctx.r17.u64;
	// lwz r16,-368(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// std r3,-224(r1)
	REX_STORE_U64(ctx.r1.u32 + -224, ctx.r3.u64);
	// subf r3,r31,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r31.u64;
	// rlwinm r17,r16,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// std r22,-232(r1)
	REX_STORE_U64(ctx.r1.u32 + -232, ctx.r22.u64);
	// subf r16,r11,r10
	ctx.r16.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r22,-356(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -356);
	// stw r17,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r17.u32);
	// subf r17,r6,r16
	ctx.r17.u64 = ctx.r16.u64 - ctx.r6.u64;
	// rlwinm r16,r3,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r17,r17,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r3,r26,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r26.u64;
	// subf r17,r4,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r4.u64;
	// subf r15,r22,r15
	ctx.r15.u64 = ctx.r15.u64 - ctx.r22.u64;
	// stw r17,-356(r1)
	REX_STORE_U32(ctx.r1.u32 + -356, ctx.r17.u32);
	// subf r17,r5,r16
	ctx.r17.u64 = ctx.r16.u64 - ctx.r5.u64;
	// subf r16,r25,r3
	ctx.r16.u64 = ctx.r3.u64 - ctx.r25.u64;
	// stw r15,-292(r1)
	REX_STORE_U32(ctx.r1.u32 + -292, ctx.r15.u32);
	// subf r17,r6,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r6.u64;
	// subf r15,r10,r16
	ctx.r15.u64 = ctx.r16.u64 - ctx.r10.u64;
	// add r16,r17,r26
	ctx.r16.u64 = ctx.r17.u64 + ctx.r26.u64;
	// subf r17,r9,r15
	ctx.r17.u64 = ctx.r15.u64 - ctx.r9.u64;
	// subf r26,r31,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r31.u64;
	// add r17,r17,r30
	ctx.r17.u64 = ctx.r17.u64 + ctx.r30.u64;
	// stw r26,-276(r1)
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r26.u32);
	// subf r15,r8,r20
	ctx.r15.u64 = ctx.r20.u64 - ctx.r8.u64;
	// stw r17,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r17.u32);
	// add r17,r16,r28
	ctx.r17.u64 = ctx.r16.u64 + ctx.r28.u64;
	// subf r16,r29,r7
	ctx.r16.u64 = ctx.r7.u64 - ctx.r29.u64;
	// stw r15,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r15.u32);
	// rlwinm r26,r17,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r17,r4,r16
	ctx.r17.u64 = ctx.r16.u64 - ctx.r4.u64;
	// subf r15,r11,r7
	ctx.r15.u64 = ctx.r7.u64 - ctx.r11.u64;
	// lwz r16,-368(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// add r17,r17,r10
	ctx.r17.u64 = ctx.r17.u64 + ctx.r10.u64;
	// mulli r15,r15,11
	ctx.r15.s64 = static_cast<int64_t>(ctx.r15.u64 * static_cast<uint64_t>(11));
	// stw r17,-280(r1)
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r17.u32);
	// stw r15,-240(r1)
	REX_STORE_U32(ctx.r1.u32 + -240, ctx.r15.u32);
	// lwz r15,-344(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// lwz r17,-292(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// subf r26,r24,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r24.u64;
	// add r17,r16,r17
	ctx.r17.u64 = ctx.r16.u64 + ctx.r17.u64;
	// stw r26,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r26.u32);
	// subf r25,r30,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r30.u64;
	// lwz r26,-356(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -356);
	// rotlwi r16,r17,0
	ctx.r16.u64 = __builtin_rotateleft32(ctx.r17.u32, 0);
	// stw r17,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r17.u32);
	// mullw r17,r15,r19
	ctx.r17.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r19.s32);
	// lwz r3,-276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -276);
	// stw r17,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r17.u32);
	// lwz r15,-360(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// stw r25,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r25.u32);
	// add r26,r26,r8
	ctx.r26.u64 = ctx.r26.u64 + ctx.r8.u64;
	// lwz r17,-240(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// add r15,r15,r11
	ctx.r15.u64 = ctx.r15.u64 + ctx.r11.u64;
	// stw r26,-356(r1)
	REX_STORE_U32(ctx.r1.u32 + -356, ctx.r26.u32);
	// rlwinm r26,r20,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r15,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r15.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// add r26,r20,r26
	ctx.r26.u64 = ctx.r20.u64 + ctx.r26.u64;
	// lwz r20,-304(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// stw r17,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r17.u32);
	// rlwinm r17,r3,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r26,-272(r1)
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r26.u32);
	// add r20,r20,r4
	ctx.r20.u64 = ctx.r20.u64 + ctx.r4.u64;
	// lwz r26,-280(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// add r17,r3,r17
	ctx.r17.u64 = ctx.r3.u64 + ctx.r17.u64;
	// stw r20,-292(r1)
	REX_STORE_U32(ctx.r1.u32 + -292, ctx.r20.u32);
	// lwz r25,-336(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// stw r17,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r17.u32);
	// stw r26,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r26.u32);
	// rotlwi r26,r15,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r15.u32, 0);
	// rlwinm r20,r26,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r25,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r25.u32);
	// rotlwi r25,r31,2
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r31.u32, 2);
	// add r26,r26,r20
	ctx.r26.u64 = ctx.r26.u64 + ctx.r20.u64;
	// lwz r20,-292(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// stw r26,-292(r1)
	REX_STORE_U32(ctx.r1.u32 + -292, ctx.r26.u32);
	// add r26,r20,r31
	ctx.r26.u64 = ctx.r20.u64 + ctx.r31.u64;
	// lwz r15,-356(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -356);
	// add r15,r15,r28
	ctx.r15.u64 = ctx.r15.u64 + ctx.r28.u64;
	// rlwinm r20,r15,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r15,-304(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// rlwinm r26,r26,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,-360(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// add r17,r15,r27
	ctx.r17.u64 = ctx.r15.u64 + ctx.r27.u64;
	// stw r20,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r20.u32);
	// stw r26,-356(r1)
	REX_STORE_U32(ctx.r1.u32 + -356, ctx.r26.u32);
	// add r26,r16,r3
	ctx.r26.u64 = ctx.r16.u64 + ctx.r3.u64;
	// rlwinm r17,r17,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r15,-344(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// rotlwi r16,r20,0
	ctx.r16.u64 = __builtin_rotateleft32(ctx.r20.u32, 0);
	// lwz r20,-296(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// stw r17,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r17.u32);
	// rlwinm r15,r15,3,0,28
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r17,r20,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// std r23,-320(r1)
	REX_STORE_U64(ctx.r1.u32 + -320, ctx.r23.u64);
	// lwz r22,-280(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// add r25,r31,r25
	ctx.r25.u64 = ctx.r31.u64 + ctx.r25.u64;
	// add r20,r20,r17
	ctx.r20.u64 = ctx.r20.u64 + ctx.r17.u64;
	// stw r14,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r14.u32);
	// subf r15,r22,r15
	ctx.r15.u64 = ctx.r15.u64 - ctx.r22.u64;
	// lwz r14,-272(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// stw r20,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r20.u32);
	// rotlwi r3,r9,3
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// lwz r23,-344(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r20,r16,r14
	ctx.r20.u64 = ctx.r16.u64 + ctx.r14.u64;
	// lwz r17,-292(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// subf r31,r9,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r9.u64;
	// subf r25,r25,r20
	ctx.r25.u64 = ctx.r20.u64 - ctx.r25.u64;
	// std r4,-248(r1)
	REX_STORE_U64(ctx.r1.u32 + -248, ctx.r4.u64);
	// subf r3,r9,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r9.u64;
	// lwz r14,-300(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r3,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r3.u32);
	// subf r16,r11,r8
	ctx.r16.u64 = ctx.r8.u64 - ctx.r11.u64;
	// lwz r4,-304(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// add r4,r25,r4
	ctx.r4.u64 = ctx.r25.u64 + ctx.r4.u64;
	// lwz r22,-368(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// stw r22,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r22.u32);
	// lwz r22,-356(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -356);
	// stw r15,-356(r1)
	REX_STORE_U32(ctx.r1.u32 + -356, ctx.r15.u32);
	// lwz r15,-336(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// add r20,r22,r17
	ctx.r20.u64 = ctx.r22.u64 + ctx.r17.u64;
	// mulli r17,r16,11
	ctx.r17.s64 = static_cast<int64_t>(ctx.r16.u64 * static_cast<uint64_t>(11));
	// add r26,r26,r15
	ctx.r26.u64 = ctx.r26.u64 + ctx.r15.u64;
	// subf r15,r27,r20
	ctx.r15.u64 = ctx.r20.u64 - ctx.r27.u64;
	// srawi r3,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r26.s32 >> 1;
	// subf r20,r11,r9
	ctx.r20.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r25,r28,r15
	ctx.r25.u64 = ctx.r15.u64 - ctx.r28.u64;
	// subf r20,r6,r20
	ctx.r20.u64 = ctx.r20.u64 - ctx.r6.u64;
	// srawi r15,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r15.s64 = ctx.r4.s32 >> 1;
	// add r25,r25,r24
	ctx.r25.u64 = ctx.r25.u64 + ctx.r24.u64;
	// lwz r26,-368(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// subf r16,r10,r30
	ctx.r16.u64 = ctx.r30.u64 - ctx.r10.u64;
	// stw r20,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r20.u32);
	// add r25,r25,r6
	ctx.r25.u64 = ctx.r25.u64 + ctx.r6.u64;
	// lwz r22,-356(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -356);
	// stw r31,-356(r1)
	REX_STORE_U32(ctx.r1.u32 + -356, ctx.r31.u32);
	// add r26,r26,r22
	ctx.r26.u64 = ctx.r26.u64 + ctx.r22.u64;
	// add r20,r26,r23
	ctx.r20.u64 = ctx.r26.u64 + ctx.r23.u64;
	// mullw r26,r3,r18
	ctx.r26.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r18.s32);
	// add r20,r20,r17
	ctx.r20.u64 = ctx.r20.u64 + ctx.r17.u64;
	// add r31,r14,r26
	ctx.r31.u64 = ctx.r14.u64 + ctx.r26.u64;
	// lwz r14,-368(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// mullw r26,r15,r21
	ctx.r26.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r21.s32);
	// srawi r24,r20,1
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x1) != 0);
	ctx.r24.s64 = ctx.r20.s32 >> 1;
	// add r15,r31,r26
	ctx.r15.u64 = ctx.r31.u64 + ctx.r26.u64;
	// mullw r26,r25,r18
	ctx.r26.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r18.s32);
	// mullw r31,r24,r19
	ctx.r31.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r19.s32);
	// rlwinm r25,r14,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// add r24,r31,r26
	ctx.r24.u64 = ctx.r31.u64 + ctx.r26.u64;
	// rlwinm r26,r16,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r16,-356(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -356);
	// subf r31,r5,r25
	ctx.r31.u64 = ctx.r25.u64 - ctx.r5.u64;
	// subf r20,r27,r26
	ctx.r20.u64 = ctx.r26.u64 - ctx.r27.u64;
	// subf r25,r29,r16
	ctx.r25.u64 = ctx.r16.u64 - ctx.r29.u64;
	// add r27,r31,r27
	ctx.r27.u64 = ctx.r31.u64 + ctx.r27.u64;
	// subf r26,r8,r29
	ctx.r26.u64 = ctx.r29.u64 - ctx.r8.u64;
	// subf r25,r8,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r8.u64;
	// add r16,r27,r7
	ctx.r16.u64 = ctx.r27.u64 + ctx.r7.u64;
	// subf r29,r29,r20
	ctx.r29.u64 = ctx.r20.u64 - ctx.r29.u64;
	// rlwinm r27,r26,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// ld r4,-248(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -248);
	// subf r31,r8,r11
	ctx.r31.u64 = ctx.r11.u64 - ctx.r8.u64;
	// ld r23,-320(r1)
	ctx.r23.u64 = REX_LOAD_U64(ctx.r1.u32 + -320);
	// subf r25,r10,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r10.u64;
	// ld r3,-224(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -224);
	// subf r14,r7,r29
	ctx.r14.u64 = ctx.r29.u64 - ctx.r7.u64;
	// add r26,r26,r27
	ctx.r26.u64 = ctx.r26.u64 + ctx.r27.u64;
	// rotlwi r27,r30,2
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r30.u32, 2);
	// subf r29,r28,r25
	ctx.r29.u64 = ctx.r25.u64 - ctx.r28.u64;
	// rlwinm r17,r31,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r20,r16,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r28,r9,r14
	ctx.r28.u64 = ctx.r14.u64 - ctx.r9.u64;
	// lwz r14,-360(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// add r17,r31,r17
	ctx.r17.u64 = ctx.r31.u64 + ctx.r17.u64;
	// rotlwi r27,r10,3
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r26,r20,r26
	ctx.r26.u64 = ctx.r20.u64 + ctx.r26.u64;
	// add r31,r28,r5
	ctx.r31.u64 = ctx.r28.u64 + ctx.r5.u64;
	// subf r27,r10,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r10.u64;
	// subf r30,r30,r26
	ctx.r30.u64 = ctx.r26.u64 - ctx.r30.u64;
	// add r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 + ctx.r8.u64;
	// subf r28,r10,r17
	ctx.r28.u64 = ctx.r17.u64 - ctx.r10.u64;
	// add r29,r29,r7
	ctx.r29.u64 = ctx.r29.u64 + ctx.r7.u64;
	// add r27,r30,r27
	ctx.r27.u64 = ctx.r30.u64 + ctx.r27.u64;
	// add r30,r31,r11
	ctx.r30.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r28,r28,r4
	ctx.r28.u64 = ctx.r28.u64 + ctx.r4.u64;
	// subf r20,r10,r11
	ctx.r20.u64 = ctx.r11.u64 - ctx.r10.u64;
	// add r29,r29,r4
	ctx.r29.u64 = ctx.r29.u64 + ctx.r4.u64;
	// mullw r26,r23,r14
	ctx.r26.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r14.s32);
	// rotlwi r31,r8,1
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// add r16,r30,r6
	ctx.r16.u64 = ctx.r30.u64 + ctx.r6.u64;
	// srawi r17,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r17.s64 = ctx.r28.s32 >> 1;
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
	// subf r30,r9,r20
	ctx.r30.u64 = ctx.r20.u64 - ctx.r9.u64;
	// rotlwi r28,r7,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// srawi r26,r26,8
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xFF) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 8;
	// add r31,r31,r10
	ctx.r31.u64 = ctx.r31.u64 + ctx.r10.u64;
	// srawi r27,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 1;
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// mullw r25,r15,r23
	ctx.r25.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r23.s32);
	// add r20,r29,r6
	ctx.r20.u64 = ctx.r29.u64 + ctx.r6.u64;
	// add r8,r30,r6
	ctx.r8.u64 = ctx.r30.u64 + ctx.r6.u64;
	// add r15,r28,r9
	ctx.r15.u64 = ctx.r28.u64 + ctx.r9.u64;
	// mullw r29,r27,r19
	ctx.r29.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r19.s32);
	// mullw r28,r16,r18
	ctx.r28.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r18.s32);
	// mullw r6,r8,r21
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r21.s32);
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// add r8,r29,r28
	ctx.r8.u64 = ctx.r29.u64 + ctx.r28.u64;
	// subf r29,r4,r31
	ctx.r29.u64 = ctx.r31.u64 - ctx.r4.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r4,r10,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// subf r10,r7,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r7.u64;
	// add r28,r8,r4
	ctx.r28.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r6,r15,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r31,r20,r21
	ctx.r31.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r21.s32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r4,r5,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r5.u64;
	// add r31,r24,r31
	ctx.r31.u64 = ctx.r24.u64 + ctx.r31.u64;
	// rlwinm r30,r17,8,0,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subf r27,r9,r7
	ctx.r27.u64 = ctx.r7.u64 - ctx.r9.u64;
	// subf r8,r3,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r3.u64;
	// add r6,r31,r30
	ctx.r6.u64 = ctx.r31.u64 + ctx.r30.u64;
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subf r4,r3,r29
	ctx.r4.u64 = ctx.r29.u64 - ctx.r3.u64;
	// srawi r10,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 1;
	// mullw r6,r6,r26
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r26.s32);
	// srawi r9,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 1;
	// add r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r3,r25,r6
	ctx.r3.u64 = ctx.r25.u64 + ctx.r6.u64;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// mullw r6,r10,r19
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r19.s32);
	// mullw r4,r9,r23
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r23.s32);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r8,r6,r4
	ctx.r8.u64 = ctx.r6.u64 + ctx.r4.u64;
	// mullw r11,r7,r18
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r18.s32);
	// srawi r6,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r27.s32 >> 1;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mullw r8,r6,r21
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r21.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r22,-232(r1)
	ctx.r22.u64 = REX_LOAD_U64(ctx.r1.u32 + -232);
	// mullw r31,r28,r14
	ctx.r31.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r14.s32);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r3,r31
	ctx.r10.u64 = ctx.r3.u64 + ctx.r31.u64;
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 16;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x88115654
	if (!ctx.cr6.gt) goto loc_88115654;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x88115660
	goto loc_88115660;
loc_88115654:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_88115660:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,-352(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// lwz r30,-312(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// li r25,128
	ctx.r25.s64 = 128;
	// lwz r9,-268(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwz r29,-328(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// li r24,16
	ctx.r24.s64 = 16;
	// lwz r26,-260(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// lwz r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r27,-256(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// lwz r8,-284(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// b 0x881156b8
	goto loc_881156B8;
loc_88115698:
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x881156b0
	if (!ctx.cr6.lt) goto loc_881156B0;
	// lbzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// stb r11,1(r7)
	REX_STORE_U8(ctx.r7.u32 + 1, ctx.r11.u8);
	// b 0x881156b4
	goto loc_881156B4;
loc_881156B0:
	// stb r24,1(r7)
	REX_STORE_U8(ctx.r7.u32 + 1, ctx.r24.u8);
loc_881156B4:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_881156B8:
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r7,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r7.u32);
	// stw r8,-284(r1)
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r8.u32);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881150ec
	if (ctx.cr6.lt) goto loc_881150EC;
	// lwz r4,-264(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// b 0x881157e0
	goto loc_881157E0;
loc_881156D8:
	// lwz r8,84(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x881157bc
	if (!ctx.cr6.lt) goto loc_881157BC;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x88115764
	if (!ctx.cr6.lt) goto loc_88115764;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881157e0
	if (!ctx.cr6.gt) goto loc_881157E0;
loc_881156FC:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-320(r1)
	REX_STORE_U64(ctx.r1.u32 + -320, ctx.f13.u64);
	// lwz r11,-316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x88115748
	if (ctx.cr6.lt) goto loc_88115748;
	// lwz r10,80(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88115748
	if (!ctx.cr6.lt) goto loc_88115748;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// subfic r5,r21,256
	ctx.xer.ca = ctx.r21.u32 <= 256;
	ctx.r5.u64 = static_cast<uint64_t>(256) - ctx.r21.u64;
	// mullw r11,r6,r5
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// lbzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// mullw r10,r10,r21
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r21.s32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r6,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF;
	// stb r5,1(r7)
	REX_STORE_U8(ctx.r7.u32 + 1, ctx.r5.u8);
	// b 0x8811574c
	goto loc_8811574C;
loc_88115748:
	// stb r24,1(r7)
	REX_STORE_U8(ctx.r7.u32 + 1, ctx.r24.u8);
loc_8811574C:
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881156fc
	if (ctx.cr6.lt) goto loc_881156FC;
	// b 0x881157dc
	goto loc_881157DC;
loc_88115764:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881157e0
	if (!ctx.cr6.gt) goto loc_881157E0;
loc_88115770:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-320(r1)
	REX_STORE_U64(ctx.r1.u32 + -320, ctx.f13.u64);
	// lwz r11,-316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x881157a0
	if (ctx.cr6.lt) goto loc_881157A0;
	// lwz r8,80(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x881157a0
	if (!ctx.cr6.lt) goto loc_881157A0;
	// lbzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// stb r11,1(r7)
	REX_STORE_U8(ctx.r7.u32 + 1, ctx.r11.u8);
	// b 0x881157a4
	goto loc_881157A4;
loc_881157A0:
	// stb r24,1(r7)
	REX_STORE_U8(ctx.r7.u32 + 1, ctx.r24.u8);
loc_881157A4:
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88115770
	if (ctx.cr6.lt) goto loc_88115770;
	// b 0x881157dc
	goto loc_881157DC;
loc_881157BC:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881157e0
	if (!ctx.cr6.gt) goto loc_881157E0;
loc_881157C8:
	// stbu r24,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r24.u8);
	ctx.r7.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881157c8
	if (ctx.cr6.lt) goto loc_881157C8;
loc_881157DC:
	// stw r7,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r7.u32);
loc_881157E0:
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stw r4,-264(r1)
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r4.u32);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88113ce8
	if (ctx.cr6.lt) goto loc_88113CE8;
loc_881157F4:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88151208) {
	REX_FUNC_PROLOGUE();
	// lwz r10,3964(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 3964);
	// addi r11,r3,200
	ctx.r11.s64 = ctx.r3.s64 + 200;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r10,200(r3)
	REX_STORE_U32(ctx.r3.u32 + 200, ctx.r10.u32);
	// lwz r8,21932(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 21932);
	// stw r8,204(r3)
	REX_STORE_U32(ctx.r3.u32 + 204, ctx.r8.u32);
	// lwz r7,21864(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 21864);
	// stw r7,208(r3)
	REX_STORE_U32(ctx.r3.u32 + 208, ctx.r7.u32);
	// lfd f0,21560(r4)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r4.u32 + 21560);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.f13.u32);
	// lwz r6,3716(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 3716);
	// stw r6,216(r3)
	REX_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// lbz r5,640(r3)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + 640);
	// ori r4,r5,128
	ctx.r4.u64 = ctx.r5.u64 | 128;
	// stb r4,640(r3)
	REX_STORE_U8(ctx.r3.u32 + 640, ctx.r4.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881513A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x881513c8
	if (!ctx.cr6.eq) goto loc_881513C8;
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x88151468
	goto loc_88151468;
loc_881513C8:
	// lwz r30,24688(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 24688);
	// lwz r11,712(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881513e0
	if (ctx.cr6.eq) goto loc_881513E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x88151468
	goto loc_88151468;
loc_881513E0:
	// lwz r11,22036(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22036);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88151408
	if (!ctx.cr6.eq) goto loc_88151408;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,-7
	ctx.r10.s64 = -7;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// b 0x88151468
	goto loc_88151468;
loc_88151408:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,22032(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 22032);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// ori r8,r11,45384
	ctx.r8.u64 = ctx.r11.u64 | 45384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r5,92
	ctx.r5.s64 = 92;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwzx r7,r31,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bl 0x880547a0
	ctx.lr = 0x88151438;
	sub_880547A0(ctx, base);
	// lwz r6,21888(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 21888);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,22056(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 22056);
	// lwz r4,22060(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 22060);
	// addic r11,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// subfe r10,r11,r6
	temp.u8 = (~ctx.r11.u32 + ctx.r6.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r5,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stw r4,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r9,192(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 192);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x88151468;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88151468:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88155CA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x88155CA8;
	__savegprlr_20(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r27,28(r3)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r30,8(r8)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r29,12(r8)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// beq cr6,0x88155cec
	if (ctx.cr6.eq) goto loc_88155CEC;
	// lwz r31,12(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x88155cf0
	goto loc_88155CF0;
loc_88155CEC:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_88155CF0:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88155d04
	if (ctx.cr6.eq) goto loc_88155D04;
	// lwz r26,16(r3)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x88155d08
	goto loc_88155D08;
loc_88155D04:
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_88155D08:
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// lis r10,-32688
	ctx.r10.s64 = -2142240768;
	// ori r25,r11,3
	ctx.r25.u64 = ctx.r11.u64 | 3;
	// ori r24,r10,182
	ctx.r24.u64 = ctx.r10.u64 | 182;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x88155d5c
	if (!ctx.cr6.gt) goto loc_88155D5C;
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// lis r5,9
	ctx.r5.s64 = 589824;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// ori r5,r5,144
	ctx.r5.u64 = ctx.r5.u64 | 144;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880cafe0
	ctx.lr = 0x88155D40;
	sub_880CAFE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x88155d60
	if (!ctx.cr6.lt) goto loc_88155D60;
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x88155d58
	if (ctx.cr6.eq) goto loc_88155D58;
	// cmplw cr6,r3,r24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x88155e70
	if (!ctx.cr6.eq) goto loc_88155E70;
loc_88155D58:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
loc_88155D5C:
	// bne cr6,0x88155e68
	if (!ctx.cr6.eq) goto loc_88155E68;
loc_88155D60:
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplw cr6,r26,r29
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x88155da4
	if (!ctx.cr6.gt) goto loc_88155DA4;
	// stw r26,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// lis r5,9
	ctx.r5.s64 = 589824;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// ori r5,r5,160
	ctx.r5.u64 = ctx.r5.u64 | 160;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880cafe0
	ctx.lr = 0x88155D8C;
	sub_880CAFE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x88155dac
	if (!ctx.cr6.lt) goto loc_88155DAC;
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x88155da4
	if (ctx.cr6.eq) goto loc_88155DA4;
	// cmplw cr6,r3,r24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x88155e70
	if (!ctx.cr6.eq) goto loc_88155E70;
loc_88155DA4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x88155e68
	if (!ctx.cr6.eq) goto loc_88155E68;
loc_88155DAC:
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// lis r5,9
	ctx.r5.s64 = 589824;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,176
	ctx.r5.u64 = ctx.r5.u64 | 176;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880cafe0
	ctx.lr = 0x88155DC8;
	sub_880CAFE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88155e70
	if (ctx.cr6.lt) goto loc_88155E70;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r9,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// bne cr6,0x88155e68
	if (!ctx.cr6.eq) goto loc_88155E68;
	// clrlwi r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88155e68
	if (!ctx.cr6.eq) goto loc_88155E68;
	// cmplwi cr6,r21,12
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 12, ctx.xer);
	// bne cr6,0x88155e68
	if (!ctx.cr6.eq) goto loc_88155E68;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lis r5,9
	ctx.r5.s64 = 589824;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r7,r11,7
	ctx.r7.s64 = ctx.r11.s64 + 7;
	// ori r5,r5,112
	ctx.r5.u64 = ctx.r5.u64 | 112;
	// rlwinm r3,r7,29,3,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880cafe0
	ctx.lr = 0x88155E3C;
	sub_880CAFE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88155e70
	if (ctx.cr6.lt) goto loc_88155E70;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r8,r9,31,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1FFFFFFF;
	// stw r8,0(r20)
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r8.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_88155E68:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
loc_88155E70:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8815BAF8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8815BB00;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,22204(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22204);
	// addi r8,r5,15
	ctx.r8.s64 = ctx.r5.s64 + 15;
	// lwz r9,22208(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 22208);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r7,22212(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 22212);
	// addi r10,r4,15
	ctx.r10.s64 = ctx.r4.s64 + 15;
	// lwz r6,22216(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 22216);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r5,15536(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 15536);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r28,r10,0,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r11,22188(r3)
	REX_STORE_U32(ctx.r3.u32 + 22188, ctx.r11.u32);
	// rlwinm r27,r8,0,0,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r9,22192(r3)
	REX_STORE_U32(ctx.r3.u32 + 22192, ctx.r9.u32);
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// stw r7,22196(r3)
	REX_STORE_U32(ctx.r3.u32 + 22196, ctx.r7.u32);
	// stw r6,22200(r3)
	REX_STORE_U32(ctx.r3.u32 + 22200, ctx.r6.u32);
	// bne cr6,0x8815bb58
	if (!ctx.cr6.eq) goto loc_8815BB58;
	// lwz r11,3408(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3408);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8815bb80
	if (ctx.cr6.eq) goto loc_8815BB80;
loc_8815BB58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8814d328
	ctx.lr = 0x8815BB60;
	sub_8814D328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815bb78
	if (!ctx.cr6.eq) goto loc_8815BB78;
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// stw r11,22084(r31)
	REX_STORE_U32(ctx.r31.u32 + 22084, ctx.r11.u32);
	// stw r10,22088(r31)
	REX_STORE_U32(ctx.r31.u32 + 22088, ctx.r10.u32);
loc_8815BB78:
	// stw r30,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r29,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r29.u32);
loc_8815BB80:
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x8815bb9c
	if (!ctx.cr6.eq) goto loc_8815BB9C;
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8815bba0
	if (ctx.cr6.eq) goto loc_8815BBA0;
loc_8815BB9C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8815BBA0:
	// stw r11,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,180(r31)
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r28.u32);
	// stw r27,188(r31)
	REX_STORE_U32(ctx.r31.u32 + 188, ctx.r27.u32);
	// bl 0x8814d328
	ctx.lr = 0x8815BBB4;
	sub_8814D328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8815bbcc
	if (ctx.cr6.eq) goto loc_8815BBCC;
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r10,188(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// stw r11,22084(r31)
	REX_STORE_U32(ctx.r31.u32 + 22084, ctx.r11.u32);
	// stw r10,22088(r31)
	REX_STORE_U32(ctx.r31.u32 + 22088, ctx.r10.u32);
loc_8815BBCC:
	// li r10,-63
	ctx.r10.s64 = -63;
	// lwz r11,3980(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3980);
	// li r9,63
	ctx.r9.s64 = 63;
	// stw r28,22204(r31)
	REX_STORE_U32(ctx.r31.u32 + 22204, ctx.r28.u32);
	// stw r10,240(r31)
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,188(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// stw r9,244(r31)
	REX_STORE_U32(ctx.r31.u32 + 244, ctx.r9.u32);
	// stw r27,22208(r31)
	REX_STORE_U32(ctx.r31.u32 + 22208, ctx.r27.u32);
	// beq cr6,0x8815bc00
	if (ctx.cr6.eq) goto loc_8815BC00;
	// lwz r9,180(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// srawi r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// b 0x8815bc0c
	goto loc_8815BC0C;
loc_8815BC00:
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
loc_8815BC0C:
	// stw r11,22212(r31)
	REX_STORE_U32(ctx.r31.u32 + 22212, ctx.r11.u32);
	// stw r11,192(r31)
	REX_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// stw r10,22216(r31)
	REX_STORE_U32(ctx.r31.u32 + 22216, ctx.r10.u32);
	// stw r10,200(r31)
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r10.u32);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bge cr6,0x8815bc40
	if (!ctx.cr6.lt) goto loc_8815BC40;
	// lwz r11,22212(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22212);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r28,22188(r31)
	REX_STORE_U32(ctx.r31.u32 + 22188, ctx.r28.u32);
	// stw r27,22192(r31)
	REX_STORE_U32(ctx.r31.u32 + 22192, ctx.r27.u32);
	// stw r10,22200(r31)
	REX_STORE_U32(ctx.r31.u32 + 22200, ctx.r10.u32);
	// stw r11,22196(r31)
	REX_STORE_U32(ctx.r31.u32 + 22196, ctx.r11.u32);
loc_8815BC40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8815af68
	ctx.lr = 0x8815BC48;
	sub_8815AF68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88183cf0
	ctx.lr = 0x8815BC50;
	sub_88183CF0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8815E468) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-5
	ctx.r11.s64 = -5;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8815e498
	if (ctx.cr6.lt) goto loc_8815E498;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8815e4f8
	goto loc_8815E4F8;
loc_8815E498:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88243680
	ctx.lr = 0x8815E4A0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8815e4e8
	if (!ctx.cr6.lt) goto loc_8815E4E8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8815b9f8
	ctx.lr = 0x8815E4BC;
	sub_8815B9F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815e4e0
	if (ctx.cr6.eq) goto loc_8815E4E0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bl 0x88243680
	ctx.lr = 0x8815E4D4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88243660
	ctx.lr = 0x8815E4DC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x8815e4ec
	goto loc_8815E4EC;
loc_8815E4E0:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8815e4ec
	goto loc_8815E4EC;
loc_8815E4E8:
	// lwz r30,80(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8815E4EC:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88243660
	ctx.lr = 0x8815E4F4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8815E4F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8815FC68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8815FC70;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r28,r4,31
	ctx.r28.u64 = ctx.r4.u32 & 0x1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8815fcc4
	if (ctx.cr6.eq) goto loc_8815FCC4;
	// ld r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// lwz r9,8(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r27,r10,1,63
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r8.u64);
	// stw r11,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// bge 0x8815fcb4
	if (!ctx.cr0.lt) goto loc_8815FCB4;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x88156678
	ctx.lr = 0x8815FCB4;
	sub_88156678(ctx, base);
loc_8815FCB4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwimi r11,r27,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
loc_8815FCC4:
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x8815fdc0
	if (!ctx.cr6.lt) goto loc_8815FDC0;
	// subf r11,r28,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
loc_8815FCDC:
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r29,r10,1,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x8815fd04
	if (!ctx.cr0.lt) goto loc_8815FD04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815FD04;
	sub_88156678(ctx, base);
loc_8815FD04:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8815fd9c
	if (ctx.cr6.eq) goto loc_8815FD9C;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r29,r10,1,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x8815fd34
	if (!ctx.cr0.lt) goto loc_8815FD34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815FD34;
	sub_88156678(ctx, base);
loc_8815FD34:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8815fd50
	if (ctx.cr6.eq) goto loc_8815FD50;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// oris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 2147483648;
	// oris r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 | 2147483648;
	// b 0x8815fdac
	goto loc_8815FDAC;
loc_8815FD50:
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r29,r10,1,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x8815fd78
	if (!ctx.cr0.lt) goto loc_8815FD78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815FD78;
	sub_88156678(ctx, base);
loc_8815FD78:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// beq cr6,0x8815fd90
	if (ctx.cr6.eq) goto loc_8815FD90;
	// oris r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 | 2147483648;
	// b 0x8815fda8
	goto loc_8815FDA8;
loc_8815FD90:
	// oris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 2147483648;
	// clrlwi r8,r10,1
	ctx.r8.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// b 0x8815fdac
	goto loc_8815FDAC;
loc_8815FD9C:
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r8,r10,1
	ctx.r8.u64 = ctx.r10.u32 & 0x7FFFFFFF;
loc_8815FDA8:
	// clrlwi r9,r11,1
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFFFFF;
loc_8815FDAC:
	// stw r8,24(r30)
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r8.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r9,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// bne 0x8815fcdc
	if (!ctx.cr0.eq) goto loc_8815FCDC;
loc_8815FDC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881671B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881671C0;
	__savegprlr_14(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,224(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// lwz r9,136(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// lwz r10,220(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// lwz r4,3788(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 3788);
	// addi r15,r9,1
	ctx.r15.s64 = ctx.r9.s64 + 1;
	// lwz r3,3792(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 3792);
	// lwz r30,3796(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 3796);
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lwz r6,3780(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r7,3776(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r5,3784(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// add r14,r6,r11
	ctx.r14.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r8,15536(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// add r26,r10,r7
	ctx.r26.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r28,272(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r27,268(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 268);
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// lwz r21,1896(r31)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r31.u32 + 1896);
	// lwz r20,1900(r31)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r31.u32 + 1900);
	// stw r26,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r26.u32);
	// stw r14,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r14.u32);
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r4,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// stw r9,344(r31)
	REX_STORE_U32(ctx.r31.u32 + 344, ctx.r9.u32);
	// stw r30,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// beq cr6,0x8816725c
	if (ctx.cr6.eq) goto loc_8816725C;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// bge cr6,0x8816725c
	if (!ctx.cr6.lt) goto loc_8816725C;
	// lwz r11,2948(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2948);
	// lwz r10,2960(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2960);
	// stw r11,2916(r31)
	REX_STORE_U32(ctx.r31.u32 + 2916, ctx.r11.u32);
	// stw r10,2928(r31)
	REX_STORE_U32(ctx.r31.u32 + 2928, ctx.r10.u32);
	// b 0x881672f0
	goto loc_881672F0;
loc_8816725C:
	// lwz r11,2964(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2964);
	// lwz r9,2092(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2092);
	// addi r8,r11,735
	ctx.r8.s64 = ctx.r11.s64 + 735;
	// lwz r10,2040(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2040);
	// addi r7,r11,738
	ctx.r7.s64 = ctx.r11.s64 + 738;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r9,263
	ctx.r6.s64 = ctx.r9.s64 + 263;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r10,504
	ctx.r8.s64 = ctx.r10.s64 + 504;
	// rlwinm r4,r6,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r6,r10,253
	ctx.r6.s64 = ctx.r10.s64 + 253;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r31
	ctx.r7.u64 = ctx.r9.u64 + ctx.r31.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r6,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r3,2916(r31)
	REX_STORE_U32(ctx.r31.u32 + 2916, ctx.r3.u32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r6,r11,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r6,2920(r31)
	REX_STORE_U32(ctx.r31.u32 + 2920, ctx.r6.u32);
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r11,2924(r31)
	REX_STORE_U32(ctx.r31.u32 + 2924, ctx.r11.u32);
	// lwzx r10,r5,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// stw r10,2936(r31)
	REX_STORE_U32(ctx.r31.u32 + 2936, ctx.r10.u32);
	// stw r10,2932(r31)
	REX_STORE_U32(ctx.r31.u32 + 2932, ctx.r10.u32);
	// stw r10,2928(r31)
	REX_STORE_U32(ctx.r31.u32 + 2928, ctx.r10.u32);
	// lwzx r6,r4,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// stw r6,2096(r31)
	REX_STORE_U32(ctx.r31.u32 + 2096, ctx.r6.u32);
	// lwz r5,2108(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 2108);
	// stw r5,2100(r31)
	REX_STORE_U32(ctx.r31.u32 + 2100, ctx.r5.u32);
	// lwzx r4,r9,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// stw r4,1988(r31)
	REX_STORE_U32(ctx.r31.u32 + 1988, ctx.r4.u32);
	// lwzx r11,r8,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// stw r11,1980(r31)
	REX_STORE_U32(ctx.r31.u32 + 1980, ctx.r11.u32);
	// lwz r10,2028(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2028);
	// stw r10,1984(r31)
	REX_STORE_U32(ctx.r31.u32 + 1984, ctx.r10.u32);
loc_881672F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,248(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// addi r11,r31,248
	ctx.r11.s64 = ctx.r31.s64 + 248;
	// bl 0x8815e728
	ctx.lr = 0x88167300;
	sub_8815E728(ctx, base);
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r11,316(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 316);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r9,140(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r22,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r22.u32);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r11,308(r31)
	REX_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// mr r18,r22
	ctx.r18.u64 = ctx.r22.u64;
	// stw r10,312(r31)
	REX_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x881679f8
	if (!ctx.cr6.gt) goto loc_881679F8;
	// mr r17,r22
	ctx.r17.u64 = ctx.r22.u64;
loc_88167338:
	// addic r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// lwz r4,15532(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15532);
	// subfe r10,r11,r30
	temp.u8 = (~ctx.r11.u32 + ctx.r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// beq cr6,0x88167a58
	if (ctx.cr6.eq) goto loc_88167A58;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881aea60
	ctx.lr = 0x88167358;
	sub_881AEA60(ctx, base);
	// lwz r11,344(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 344);
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// stw r10,344(r31)
	REX_STORE_U32(ctx.r31.u32 + 344, ctx.r10.u32);
	// subfe r16,r9,r3
	temp.u8 = (~ctx.r9.u32 + ctx.r3.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r16.u64 = ~ctx.r9.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x88167384
	if (!ctx.cr6.eq) goto loc_88167384;
	// lwz r21,1896(r31)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r31.u32 + 1896);
	// lwz r20,1900(r31)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r31.u32 + 1900);
	// lwz r27,268(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 268);
loc_88167384:
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8816739c
	if (!ctx.cr6.eq) goto loc_8816739C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8816739c
	if (ctx.cr6.eq) goto loc_8816739C;
	// li r16,1
	ctx.r16.s64 = 1;
loc_8816739C:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x88167994
	if (!ctx.cr6.gt) goto loc_88167994;
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
	// lwz r9,120(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// subf r8,r14,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r14.u64;
	// subf r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r29,r28,15
	ctx.r29.s64 = ctx.r28.s64 + 15;
	// stw r8,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// stw r7,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// subf r25,r14,r9
	ctx.r25.u64 = ctx.r9.u64 - ctx.r14.u64;
loc_881673DC:
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88167410
	if (!ctx.cr6.eq) goto loc_88167410;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8816d998
	ctx.lr = 0x881673F0;
	sub_8816D998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88167410
	if (ctx.cr6.eq) goto loc_88167410;
	// addi r4,r31,248
	ctx.r4.s64 = ctx.r31.s64 + 248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8816da28
	ctx.lr = 0x88167404;
	sub_8816DA28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88167a50
	if (!ctx.cr6.eq) goto loc_88167A50;
	// mr r15,r22
	ctx.r15.u64 = ctx.r22.u64;
loc_88167410:
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// stw r15,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r15.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881ae9b0
	ctx.lr = 0x8816742C;
	sub_881AE9B0(ctx, base);
	// stw r3,328(r31)
	REX_STORE_U32(ctx.r31.u32 + 328, ctx.r3.u32);
	// lwz r11,3112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3112);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88167444;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88167a50
	if (!ctx.cr6.eq) goto loc_88167A50;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x881675bc
	if (!ctx.cr6.eq) goto loc_881675BC;
	// rlwinm r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x88167660
	if (!ctx.cr6.eq) goto loc_88167660;
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x88167528
	if (!ctx.cr6.lt) goto loc_88167528;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x88167528
	if (ctx.cr6.eq) goto loc_88167528;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x881674f4
	if (ctx.cr6.eq) goto loc_881674F4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x881674f4
	if (ctx.cr6.eq) goto loc_881674F4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88167570
	if (!ctx.cr6.eq) goto loc_88167570;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x881674b4
	if (ctx.cr6.eq) goto loc_881674B4;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r15,r11
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x881674b8
	if (!ctx.cr6.lt) goto loc_881674B8;
loc_881674B4:
	// li r8,1
	ctx.r8.s64 = 1;
loc_881674B8:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x881674cc
	if (ctx.cr6.eq) goto loc_881674CC;
	// cmplwi cr6,r15,1
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 1, ctx.xer);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// bne cr6,0x881674d0
	if (!ctx.cr6.eq) goto loc_881674D0;
loc_881674CC:
	// li r6,1
	ctx.r6.s64 = 1;
loc_881674D0:
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// subf r10,r23,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x881713e8
	ctx.lr = 0x881674F0;
	sub_881713E8(ctx, base);
	// b 0x88167568
	goto loc_88167568;
loc_881674F4:
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// cntlzw r10,r16
	ctx.r10.u64 = ctx.r16.u32 == 0 ? 32 : __builtin_clz(ctx.r16.u32);
	// cntlzw r9,r23
	ctx.r9.u64 = ctx.r23.u32 == 0 ? 32 : __builtin_clz(ctx.r23.u32);
	// subf r7,r23,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r23.u64;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r6,r9,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rlwinm r7,r5,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881713e8
	ctx.lr = 0x88167524;
	sub_881713E8(ctx, base);
	// b 0x88167568
	goto loc_88167568;
loc_88167528:
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// cntlzw r4,r23
	ctx.r4.u64 = ctx.r23.u32 == 0 ? 32 : __builtin_clz(ctx.r23.u32);
	// lwz r5,1984(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1984);
	// cntlzw r9,r16
	ctx.r9.u64 = ctx.r16.u32 == 0 ? 32 : __builtin_clz(ctx.r16.u32);
	// subf r3,r23,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r23.u64;
	// lwz r10,1980(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1980);
	// rlwinm r6,r4,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lwz r9,1988(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1988);
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881ae530
	ctx.lr = 0x88167568;
	sub_881AE530(ctx, base);
loc_88167568:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88167a50
	if (!ctx.cr6.eq) goto loc_88167A50;
loc_88167570:
	// lbz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8816758c
	if (!ctx.cr6.eq) goto loc_8816758C;
	// lbz r11,1(r27)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + 1);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88167590
	if (ctx.cr6.eq) goto loc_88167590;
loc_8816758C:
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_88167590:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// rlwimi r11,r10,29,2,2
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x20000000) | (ctx.r11.u64 & 0xFFFFFFFFDFFFFFFF);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88167600
	if (ctx.cr6.eq) goto loc_88167600;
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88167600
	if (ctx.cr6.eq) goto loc_88167600;
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_881675BC:
	// stb r22,1(r27)
	REX_STORE_U8(ctx.r27.u32 + 1, ctx.r22.u8);
	// add r5,r25,r30
	ctx.r5.u64 = ctx.r25.u64 + ctx.r30.u64;
	// stb r22,0(r27)
	REX_STORE_U8(ctx.r27.u32 + 0, ctx.r22.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,204(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r8,152(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r6,124(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,3156(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r6,r24,r6
	ctx.r6.u64 = ctx.r24.u64 + ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x881675FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x88167938
	goto loc_88167938;
loc_88167600:
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lbz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r27.u32 + 0);
	// lbz r9,1(r27)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r27.u32 + 1);
	// add r7,r25,r30
	ctx.r7.u64 = ctx.r25.u64 + ctx.r30.u64;
	// lwz r4,3096(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3096);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r5,r9
	ctx.r5.s64 = ctx.r9.s8;
	// add r8,r10,r19
	ctx.r8.u64 = ctx.r10.u64 + ctx.r19.u64;
	// lwz r11,20664(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20664);
	// add r9,r5,r17
	ctx.r9.u64 = ctx.r5.u64 + ctx.r17.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lbzx r4,r5,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r11,r4,r18
	ctx.r11.u64 = ctx.r4.u64 + ctx.r18.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x8816765C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x88167930
	goto loc_88167930;
loc_88167660:
	// stb r22,1(r27)
	REX_STORE_U8(ctx.r27.u32 + 1, ctx.r22.u8);
	// stb r22,0(r27)
	REX_STORE_U8(ctx.r27.u32 + 0, ctx.r22.u8);
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x88167824
	if (ctx.cr6.lt) goto loc_88167824;
	// addic r11,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r11.s64 = ctx.r23.s64 + -1;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// subfe r10,r11,r23
	temp.u8 = (~ctx.r11.u32 + ctx.r23.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r23.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r23.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// beq cr6,0x88167694
	if (ctx.cr6.eq) goto loc_88167694;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x88167698
	if (!ctx.cr6.eq) goto loc_88167698;
loc_88167694:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_88167698:
	// lwz r9,404(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 404);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88167734
	if (ctx.cr6.eq) goto loc_88167734;
	// lbz r8,1(r29)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r29.u32 + 1);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// lbz r6,-1(r29)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r29.u32 + -1);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,3(r29)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r29.u32 + 3);
	// lbz r15,0(r29)
	ctx.r15.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// lbz r7,2(r29)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + 2);
	// stb r8,113(r1)
	REX_STORE_U8(ctx.r1.u32 + 113, ctx.r8.u8);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// stb r6,114(r1)
	REX_STORE_U8(ctx.r1.u32 + 114, ctx.r6.u8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stb r5,115(r1)
	REX_STORE_U8(ctx.r1.u32 + 115, ctx.r5.u8);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stb r15,3(r29)
	REX_STORE_U8(ctx.r29.u32 + 3, ctx.r15.u8);
	// stb r7,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, ctx.r7.u8);
	// add r7,r25,r30
	ctx.r7.u64 = ctx.r25.u64 + ctx.r30.u64;
	// lbz r15,112(r1)
	ctx.r15.u64 = REX_LOAD_U8(ctx.r1.u32 + 112);
	// stb r15,1(r29)
	REX_STORE_U8(ctx.r29.u32 + 1, ctx.r15.u8);
	// stw r4,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r15,156(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// stw r15,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r15.u32);
	// lbz r15,113(r1)
	ctx.r15.u64 = REX_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r14,4(r29)
	ctx.r14.u64 = REX_LOAD_U8(ctx.r29.u32 + 4);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stb r15,2(r29)
	REX_STORE_U8(ctx.r29.u32 + 2, ctx.r15.u8);
	// lbz r15,114(r1)
	ctx.r15.u64 = REX_LOAD_U8(ctx.r1.u32 + 114);
	// stb r14,-1(r29)
	REX_STORE_U8(ctx.r29.u32 + -1, ctx.r14.u8);
	// stb r15,4(r29)
	REX_STORE_U8(ctx.r29.u32 + 4, ctx.r15.u8);
	// lbz r15,115(r1)
	ctx.r15.u64 = REX_LOAD_U8(ctx.r1.u32 + 115);
	// stb r15,0(r29)
	REX_STORE_U8(ctx.r29.u32 + 0, ctx.r15.u8);
	// bl 0x881bb748
	ctx.lr = 0x88167728;
	sub_881BB748(ctx, base);
	// lwz r15,160(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r14,140(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// b 0x88167930
	goto loc_88167930;
loc_88167734:
	// lbz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r8,-1(r29)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r29.u32 + -1);
	// lbz r7,4(r29)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + 4);
	// lbz r6,3(r29)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r29.u32 + 3);
	// lbz r5,1(r29)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r29.u32 + 1);
	// lbz r4,2(r29)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r29.u32 + 2);
	// stb r8,4(r29)
	REX_STORE_U8(ctx.r29.u32 + 4, ctx.r8.u8);
	// stb r7,-1(r29)
	REX_STORE_U8(ctx.r29.u32 + -1, ctx.r7.u8);
	// stb r6,0(r29)
	REX_STORE_U8(ctx.r29.u32 + 0, ctx.r6.u8);
	// stb r9,3(r29)
	REX_STORE_U8(ctx.r29.u32 + 3, ctx.r9.u8);
	// stb r4,1(r29)
	REX_STORE_U8(ctx.r29.u32 + 1, ctx.r4.u8);
	// stb r5,2(r29)
	REX_STORE_U8(ctx.r29.u32 + 2, ctx.r5.u8);
	// beq cr6,0x88167798
	if (ctx.cr6.eq) goto loc_88167798;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r8,r9,r28
	ctx.r8.u64 = ctx.r28.u64 - ctx.r9.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r6,r7,0,14,14
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8816779c
	if (ctx.cr6.eq) goto loc_8816779C;
loc_88167798:
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
loc_8816779C:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881677d0
	if (ctx.cr6.eq) goto loc_881677D0;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r11,1
	ctx.r11.s64 = 1;
	// subf r7,r9,r28
	ctx.r7.u64 = ctx.r28.u64 - ctx.r9.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r5,r6,0,14,14
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x881677d4
	if (ctx.cr6.eq) goto loc_881677D4;
loc_881677D0:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_881677D4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881677f0
	if (ctx.cr6.eq) goto loc_881677F0;
	// lwz r10,-39(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + -39);
	// rlwinm r9,r10,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x881677f4
	if (ctx.cr6.eq) goto loc_881677F4;
loc_881677F0:
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_881677F4:
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// add r7,r25,r30
	ctx.r7.u64 = ctx.r25.u64 + ctx.r30.u64;
	// stw r22,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881ba5d0
	ctx.lr = 0x88167820;
	sub_881BA5D0(ctx, base);
	// b 0x88167930
	goto loc_88167930;
loc_88167824:
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// lbz r10,-1(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + -1);
	// lbz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + 4);
	// lbz r8,3(r29)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r29.u32 + 3);
	// lbz r7,1(r29)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + 1);
	// lbz r6,2(r29)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r29.u32 + 2);
	// stb r10,4(r29)
	REX_STORE_U8(ctx.r29.u32 + 4, ctx.r10.u8);
	// stb r9,-1(r29)
	REX_STORE_U8(ctx.r29.u32 + -1, ctx.r9.u8);
	// stb r8,0(r29)
	REX_STORE_U8(ctx.r29.u32 + 0, ctx.r8.u8);
	// stb r11,3(r29)
	REX_STORE_U8(ctx.r29.u32 + 3, ctx.r11.u8);
	// stb r6,1(r29)
	REX_STORE_U8(ctx.r29.u32 + 1, ctx.r6.u8);
	// stb r7,2(r29)
	REX_STORE_U8(ctx.r29.u32 + 2, ctx.r7.u8);
	// beq cr6,0x88167878
	if (ctx.cr6.eq) goto loc_88167878;
	// lwz r11,-39(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + -39);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88167878
	if (!ctx.cr6.eq) goto loc_88167878;
	// cmplwi cr6,r15,1
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 1, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bgt cr6,0x8816787c
	if (ctx.cr6.gt) goto loc_8816787C;
loc_88167878:
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_8816787C:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x881678b4
	if (ctx.cr6.eq) goto loc_881678B4;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r7,r8,r28
	ctx.r7.u64 = ctx.r28.u64 - ctx.r8.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r5,r6,0,14,14
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x881678b4
	if (!ctx.cr6.eq) goto loc_881678B4;
	// cmplw cr6,r15,r11
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r11.u32, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// bgt cr6,0x881678b8
	if (ctx.cr6.gt) goto loc_881678B8;
loc_881678B4:
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
loc_881678B8:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x88167900
	if (ctx.cr6.eq) goto loc_88167900;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x88167900
	if (ctx.cr6.eq) goto loc_88167900;
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r6,r8,r28
	ctx.r6.u64 = ctx.r28.u64 - ctx.r8.u64;
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r4,r5,0,14,14
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x88167900
	if (!ctx.cr6.eq) goto loc_88167900;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r15,r11
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x88167904
	if (ctx.cr6.gt) goto loc_88167904;
loc_88167900:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_88167904:
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// add r7,r25,r30
	ctx.r7.u64 = ctx.r25.u64 + ctx.r30.u64;
	// stw r22,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88170ee8
	ctx.lr = 0x88167930;
	sub_88170EE8(ctx, base);
loc_88167930:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88167a50
	if (!ctx.cr6.eq) goto loc_88167A50;
loc_88167938:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// rlwinm r9,r11,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x88167958
	if (!ctx.cr6.eq) goto loc_88167958;
	// sth r22,160(r21)
	REX_STORE_U16(ctx.r21.u32 + 160, ctx.r22.u16);
	// sth r22,128(r21)
	REX_STORE_U16(ctx.r21.u32 + 128, ctx.r22.u16);
	// sth r22,0(r21)
	REX_STORE_U16(ctx.r21.u32 + 0, ctx.r22.u16);
loc_88167958:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r21,r21,192
	ctx.r21.s64 = ctx.r21.s64 + 192;
	// addi r20,r20,144
	ctx.r20.s64 = ctx.r20.s64 + 144;
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// addi r19,r19,32
	ctx.r19.s64 = ctx.r19.s64 + 32;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x881673dc
	if (ctx.cr6.lt) goto loc_881673DC;
	// lwz r26,144(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r30,136(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
loc_88167994:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// addi r18,r18,16
	ctx.r18.s64 = ctx.r18.s64 + 16;
	// lwz r9,120(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// add r14,r11,r14
	ctx.r14.u64 = ctx.r11.u64 + ctx.r14.u64;
	// lwz r8,124(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r26,r10,r26
	ctx.r26.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lwz r7,128(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r5,132(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r3,140(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r30,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// stw r14,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r14.u32);
	// addi r17,r17,32
	ctx.r17.s64 = ctx.r17.s64 + 32;
	// stw r26,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r26.u32);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// stw r6,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// stw r4,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r9,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// blt cr6,0x88167338
	if (ctx.cr6.lt) goto loc_88167338;
loc_881679F8:
	// lwz r11,3948(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88167a4c
	if (ctx.cr6.eq) goto loc_88167A4C;
	// lwz r5,140(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,3780(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,3784(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,220(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r30,3776(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x881a53b8
	ctx.lr = 0x88167A4C;
	sub_881A53B8(ctx, base);
loc_88167A4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_88167A50:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88167A58:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8817A760) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8817A768;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x881ef278
	ctx.lr = 0x8817A770;
	__savefpr_24(ctx, base);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f0,6732(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6732);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bgt cr6,0x8817a820
	if (ctx.cr6.gt) goto loc_8817A820;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8817b280
	if (!ctx.cr6.gt) goto loc_8817B280;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,6708(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6708);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// lfd f0,12088(r8)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 12088);
	// fsubs f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fadd f10,f1,f0
	ctx.f10.f64 = ctx.f1.f64 + ctx.f0.f64;
	// fadd f9,f12,f0
	ctx.f9.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fadd f8,f11,f0
	ctx.f8.f64 = ctx.f11.f64 + ctx.f0.f64;
	// fctiwz f7,f10
	ctx.f7.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f7,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.f7.u64);
	// lwz r9,-124(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -124);
	// fctiwz f6,f9
	ctx.f6.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f6,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.f6.u64);
	// fctiwz f5,f8
	ctx.f5.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f5,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f5.u64);
	// lwz r8,-124(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -124);
	// lwz r7,-116(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
loc_8817A7DC:
	// lwz r6,20(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r8,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r8.u32);
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stwx r9,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u32);
	// lwz r4,28(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// stwx r7,r4,r11
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r6,32(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// stwx r9,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r5,4(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8817a7dc
	if (ctx.cr6.lt) goto loc_8817A7DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x881ef2c4
	ctx.lr = 0x8817A81C;
	__restfpr_24(ctx, base);
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_8817A820:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// fneg f9,f3
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// lis r9,-30719
	ctx.r9.s64 = -2013200384;
	// lis r8,-30719
	ctx.r8.s64 = -2013200384;
	// lis r7,-30719
	ctx.r7.s64 = -2013200384;
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// lfd f0,12088(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 12088);
	// lis r6,-30719
	ctx.r6.s64 = -2013200384;
	// fadd f7,f1,f0
	ctx.f7.f64 = ctx.f1.f64 + ctx.f0.f64;
	// lfd f13,20152(r9)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + 20152);
	// fadd f6,f1,f0
	ctx.f6.f64 = ctx.f1.f64 + ctx.f0.f64;
	// lfd f11,20144(r8)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r8.u32 + 20144);
	// fadd f8,f1,f0
	ctx.f8.f64 = ctx.f1.f64 + ctx.f0.f64;
	// lis r4,-30719
	ctx.r4.s64 = -2013200384;
	// fadd f5,f1,f0
	ctx.f5.f64 = ctx.f1.f64 + ctx.f0.f64;
	// lfd f12,20128(r10)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r10.u32 + 20128);
	// fmul f31,f3,f13
	ctx.f31.f64 = ctx.f3.f64 * ctx.f13.f64;
	// lfd f13,20136(r7)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r7.u32 + 20136);
	// fmul f30,f9,f11
	ctx.f30.f64 = ctx.f9.f64 * ctx.f11.f64;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// fmul f28,f9,f13
	ctx.f28.f64 = ctx.f9.f64 * ctx.f13.f64;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// fmul f4,f9,f12
	ctx.f4.f64 = ctx.f9.f64 * ctx.f12.f64;
	// lfd f12,20120(r6)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r6.u32 + 20120);
	// fmul f27,f9,f12
	ctx.f27.f64 = ctx.f9.f64 * ctx.f12.f64;
	// lfd f12,20112(r4)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r4.u32 + 20112);
	// lis r5,-30719
	ctx.r5.s64 = -2013200384;
	// fadd f29,f1,f0
	ctx.f29.f64 = ctx.f1.f64 + ctx.f0.f64;
	// fctiwz f11,f7
	ctx.f11.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f11,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f11.u64);
	// lwz r9,-116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
	// fctiwz f10,f6
	ctx.f10.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// fctiwz f13,f8
	ctx.f13.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f10,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f10.u64);
	// lwz r7,-116(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
	// fctiwz f8,f5
	ctx.f8.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f8,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f8.u64);
	// lwz r6,-116(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
	// stfd f13,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.f13.u64);
	// lwz r8,-124(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -124);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// lfs f10,6728(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6728);
	ctx.f10.f64 = double(temp.f32);
	// frsp f7,f4
	ctx.f7.f64 = double(float(ctx.f4.f64));
	// lfd f11,20104(r11)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r11.u32 + 20104);
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// lfd f13,20096(r5)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r5.u32 + 20096);
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// fmul f12,f9,f12
	ctx.f12.f64 = ctx.f9.f64 * ctx.f12.f64;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// fmul f13,f9,f13
	ctx.f13.f64 = ctx.f9.f64 * ctx.f13.f64;
	// std r4,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r4.u64);
	// lfd f6,-120(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// std r9,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r9.u64);
	// lfd f5,-120(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// std r8,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r8.u64);
	// lfd f4,-120(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// std r7,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r7.u64);
	// lfd f26,-120(r1)
	ctx.f26.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// frsp f31,f31
	ctx.f31.f64 = double(float(ctx.f31.f64));
	// frsp f30,f30
	ctx.f30.f64 = double(float(ctx.f30.f64));
	// fadds f8,f7,f3
	ctx.f8.f64 = double(float(ctx.f7.f64 + ctx.f3.f64));
	// fmuls f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fcfid f8,f6
	ctx.f8.f64 = double(ctx.f6.s64);
	// fcfid f6,f5
	ctx.f6.f64 = double(ctx.f5.s64);
	// fmul f5,f9,f11
	ctx.f5.f64 = ctx.f9.f64 * ctx.f11.f64;
	// fcfid f26,f26
	ctx.f26.f64 = double(ctx.f26.s64);
	// fcfid f4,f4
	ctx.f4.f64 = double(ctx.f4.s64);
	// fctiwz f11,f29
	ctx.f11.s64 = std::isnan(ctx.f29.f64) ? int64_t(0x80000000U) : (ctx.f29.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f29.f64));
	// stfd f11,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f11.u64);
	// frsp f29,f27
	ctx.f29.f64 = double(float(ctx.f27.f64));
	// frsp f11,f28
	ctx.f11.f64 = double(float(ctx.f28.f64));
	// frsp f28,f13
	ctx.f28.f64 = double(float(ctx.f13.f64));
	// frsp f25,f8
	ctx.f25.f64 = double(float(ctx.f8.f64));
	// frsp f24,f6
	ctx.f24.f64 = double(float(ctx.f6.f64));
	// frsp f9,f5
	ctx.f9.f64 = double(float(ctx.f5.f64));
	// frsp f27,f26
	ctx.f27.f64 = double(float(ctx.f26.f64));
	// frsp f26,f12
	ctx.f26.f64 = double(float(ctx.f12.f64));
	// fsubs f5,f10,f3
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// fsubs f6,f10,f31
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f31.f64));
	// fsubs f3,f10,f30
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f30.f64));
	// frsp f12,f4
	ctx.f12.f64 = double(float(ctx.f4.f64));
	// lwz r6,-116(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
	// fadds f13,f5,f2
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// lwz r5,4(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// fadd f4,f1,f0
	ctx.f4.f64 = ctx.f1.f64 + ctx.f0.f64;
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// fsubs f30,f10,f9
	ctx.f30.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// fsubs f31,f10,f7
	ctx.f31.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// std r4,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r4.u64);
	// lfd f5,-120(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// std r11,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.r11.u64);
	// fadds f7,f3,f2
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// fadds f8,f6,f2
	ctx.f8.f64 = double(float(ctx.f6.f64 + ctx.f2.f64));
	// fadds f9,f6,f2
	ctx.f9.f64 = double(float(ctx.f6.f64 + ctx.f2.f64));
	// fadds f6,f25,f11
	ctx.f6.f64 = double(float(ctx.f25.f64 + ctx.f11.f64));
	// fadds f10,f27,f29
	ctx.f10.f64 = double(float(ctx.f27.f64 + ctx.f29.f64));
	// fctiwz f4,f4
	ctx.f4.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f4,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f4.u64);
	// lwz r10,-116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// lfd f3,-128(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f11,f5
	ctx.f11.f64 = double(ctx.f5.s64);
	// fcfid f5,f3
	ctx.f5.f64 = double(ctx.f3.s64);
	// std r9,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r9.u64);
	// lfd f4,-120(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f29,f11
	ctx.f29.f64 = double(float(ctx.f11.f64));
	// frsp f11,f5
	ctx.f11.f64 = double(float(ctx.f5.f64));
	// fadds f4,f31,f2
	ctx.f4.f64 = double(float(ctx.f31.f64 + ctx.f2.f64));
	// fadds f2,f30,f2
	ctx.f2.f64 = double(float(ctx.f30.f64 + ctx.f2.f64));
	// frsp f30,f3
	ctx.f30.f64 = double(float(ctx.f3.f64));
	// fadds f5,f24,f28
	ctx.f5.f64 = double(float(ctx.f24.f64 + ctx.f28.f64));
	// fadds f3,f29,f26
	ctx.f3.f64 = double(float(ctx.f29.f64 + ctx.f26.f64));
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bgt cr6,0x8817a9f4
	if (ctx.cr6.gt) goto loc_8817A9F4;
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
loc_8817A9F4:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// fctiwz f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f11,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f11.u64);
	// lwz r5,-116(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lfs f31,6708(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6708);
	ctx.f31.f64 = double(temp.f32);
	// blt cr6,0x8817aa6c
	if (ctx.cr6.lt) goto loc_8817AA6C;
	// fadds f11,f1,f31
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// li r10,0
	ctx.r10.s64 = 0;
	// fadd f11,f11,f0
	ctx.f11.f64 = ctx.f11.f64 + ctx.f0.f64;
	// fctiwz f11,f11
	ctx.f11.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f11,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f11.u64);
	// lwz r9,-116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
loc_8817AA30:
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// stwx r9,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r9,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r9,-4(r7)
	REX_STORE_U32(ctx.r7.u32 + -4, ctx.r9.u32);
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stwx r9,r8,r4
	REX_STORE_U32(ctx.r8.u32 + ctx.r4.u32, ctx.r9.u32);
	// blt cr6,0x8817aa30
	if (ctx.cr6.lt) goto loc_8817AA30;
loc_8817AA6C:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8817aaa8
	if (!ctx.cr6.lt) goto loc_8817AAA8;
	// fadds f11,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fadd f11,f11,f0
	ctx.f11.f64 = ctx.f11.f64 + ctx.f0.f64;
	// fctiwz f11,f11
	ctx.f11.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f11,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f11.u64);
	// lwz r9,-116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
loc_8817AA98:
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8817aa98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8817AA98;
loc_8817AAA8:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r9.u64);
	// lfd f11,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fcmpu cr6,f8,f11
	ctx.cr6.compare(ctx.f8.f64, ctx.f11.f64);
	// bgt cr6,0x8817aacc
	if (ctx.cr6.gt) goto loc_8817AACC;
	// fmr f11,f8
	ctx.f11.f64 = ctx.f8.f64;
loc_8817AACC:
	// fctiwz f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f11,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f11.u64);
	// fsubs f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// li r31,4
	ctx.r31.s64 = 4;
	// fsubs f11,f8,f13
	ctx.f11.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// li r4,-4
	ctx.r4.s64 = -4;
	// fdivs f11,f6,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 / ctx.f11.f64));
	// lwz r5,-116(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8817ac30
	if (!ctx.cr6.lt) goto loc_8817AC30;
	// subf r10,r11,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8817abe4
	if (ctx.cr6.lt) goto loc_8817ABE4;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8817AB0C:
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// extsw r30,r30
	ctx.r30.s64 = ctx.r30.s32;
	// std r8,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.r8.u64);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r30,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r30.u64);
	// lfd f28,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f28.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// std r8,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r8.u64);
	// extsw r29,r10
	ctx.r29.s64 = ctx.r10.s32;
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// std r29,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.r29.u64);
	// lfd f29,-112(r1)
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// fcfid f29,f29
	ctx.f29.f64 = double(ctx.f29.s64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfd f8,-120(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// fcfid f28,f28
	ctx.f28.f64 = double(ctx.f28.s64);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// lfd f8,-128(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// frsp f29,f29
	ctx.f29.f64 = double(float(ctx.f29.f64));
	// frsp f28,f28
	ctx.f28.f64 = double(float(ctx.f28.f64));
	// fsubs f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fsubs f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fsubs f29,f29,f13
	ctx.f29.f64 = double(float(ctx.f29.f64 - ctx.f13.f64));
	// fsubs f28,f28,f13
	ctx.f28.f64 = double(float(ctx.f28.f64 - ctx.f13.f64));
	// fmadds f6,f6,f11,f12
	ctx.f6.f64 = double(float(std::fma(ctx.f6.f64, ctx.f11.f64, ctx.f12.f64)));
	// fmadds f8,f8,f11,f12
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, ctx.f12.f64)));
	// fmadds f29,f29,f11,f12
	ctx.f29.f64 = double(float(std::fma(ctx.f29.f64, ctx.f11.f64, ctx.f12.f64)));
	// fmadds f28,f28,f11,f12
	ctx.f28.f64 = double(float(std::fma(ctx.f28.f64, ctx.f11.f64, ctx.f12.f64)));
	// fadd f6,f6,f0
	ctx.f6.f64 = ctx.f6.f64 + ctx.f0.f64;
	// fadd f8,f8,f0
	ctx.f8.f64 = ctx.f8.f64 + ctx.f0.f64;
	// fctiwz f6,f6
	ctx.f6.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfiwx f6,r9,r7
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.f6.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// fadd f6,f29,f0
	ctx.f6.f64 = ctx.f29.f64 + ctx.f0.f64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// fadd f29,f28,f0
	ctx.f29.f64 = ctx.f28.f64 + ctx.f0.f64;
	// fctiwz f8,f8
	ctx.f8.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f8,r7,r31
	REX_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.f8.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// fctiwz f6,f6
	ctx.f6.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfiwx f6,r7,r4
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.f6.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// fctiwz f8,f29
	ctx.f8.s64 = std::isnan(ctx.f29.f64) ? int64_t(0x80000000U) : (ctx.f29.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f29.f64));
	// stfiwx f8,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.f8.u32);
	// blt cr6,0x8817ab0c
	if (ctx.cr6.lt) goto loc_8817AB0C;
loc_8817ABE4:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8817ac30
	if (!ctx.cr6.lt) goto loc_8817AC30;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8817ABF8:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r9,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r9.u64);
	// lfd f8,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// frsp f8,f6
	ctx.f8.f64 = double(float(ctx.f6.f64));
	// fsubs f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fmadds f8,f6,f11,f12
	ctx.f8.f64 = double(float(std::fma(ctx.f6.f64, ctx.f11.f64, ctx.f12.f64)));
	// fadd f6,f8,f0
	ctx.f6.f64 = ctx.f8.f64 + ctx.f0.f64;
	// fctiwz f8,f6
	ctx.f8.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfiwx f8,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.f8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8817abf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8817ABF8;
loc_8817AC30:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r9.u64);
	// lfd f13,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f7,f13
	ctx.cr6.compare(ctx.f7.f64, ctx.f13.f64);
	// bgt cr6,0x8817ac54
	if (ctx.cr6.gt) goto loc_8817AC54;
	// fmr f13,f7
	ctx.f13.f64 = ctx.f7.f64;
loc_8817AC54:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f13.u64);
	// fsubs f12,f5,f10
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f10.f64));
	// fsubs f11,f7,f9
	ctx.f11.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// fdivs f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// lwz r5,-100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8817adb0
	if (!ctx.cr6.lt) goto loc_8817ADB0;
	// subf r10,r11,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8817ad64
	if (ctx.cr6.lt) goto loc_8817AD64;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8817AC8C:
	// extsw r30,r11
	ctx.r30.s64 = ctx.r11.s32;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// std r30,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.r30.u64);
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// std r8,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r8.u64);
	// extsw r8,r30
	ctx.r8.s64 = ctx.r30.s32;
	// extsw r30,r10
	ctx.r30.s64 = ctx.r10.s32;
	// std r8,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.r8.u64);
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// std r30,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r30.u64);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// lfd f12,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f11,-112(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f8,-120(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// lfd f8,-128(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// fsubs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fsubs f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fsubs f6,f6,f9
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f9.f64));
	// fsubs f8,f8,f9
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fmadds f12,f12,f13,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f11,f11,f13,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f6,f6,f13,f10
	ctx.f6.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f8,f8,f13,f10
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f10.f64)));
	// fadd f12,f12,f0
	ctx.f12.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fadd f11,f11,f0
	ctx.f11.f64 = ctx.f11.f64 + ctx.f0.f64;
	// fadd f6,f6,f0
	ctx.f6.f64 = ctx.f6.f64 + ctx.f0.f64;
	// fadd f8,f8,f0
	ctx.f8.f64 = ctx.f8.f64 + ctx.f0.f64;
	// fctiwz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// fctiwz f6,f6
	ctx.f6.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// fctiwz f8,f8
	ctx.f8.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f8,r7,r9
	REX_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.f8.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stfiwx f12,r7,r31
	REX_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.f12.u32);
	// fctiwz f12,f11
	ctx.f12.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stfiwx f6,r7,r4
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.f6.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stfiwx f12,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.f12.u32);
	// blt cr6,0x8817ac8c
	if (ctx.cr6.lt) goto loc_8817AC8C;
loc_8817AD64:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8817adb0
	if (!ctx.cr6.lt) goto loc_8817ADB0;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8817AD78:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r9,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r9.u64);
	// lfd f12,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// fsubs f6,f8,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fmadds f12,f6,f13,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f10.f64)));
	// fadd f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fctiwz f8,f11
	ctx.f8.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfiwx f8,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.f8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8817ad78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8817AD78;
loc_8817ADB0:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// fsubs f12,f4,f7
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f4.f64 - ctx.f7.f64));
	// fsubs f13,f3,f5
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f5.f64));
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r9.u64);
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// lfd f11,-104(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f12,f10
	ctx.f12.f64 = double(float(ctx.f10.f64));
	// fcmpu cr6,f4,f12
	ctx.cr6.compare(ctx.f4.f64, ctx.f12.f64);
	// bgt cr6,0x8817ade0
	if (ctx.cr6.gt) goto loc_8817ADE0;
	// fmr f12,f4
	ctx.f12.f64 = ctx.f4.f64;
loc_8817ADE0:
	// fctiwz f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f12.u64);
	// lwz r5,-100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8817af30
	if (!ctx.cr6.lt) goto loc_8817AF30;
	// subf r10,r11,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8817aee4
	if (ctx.cr6.lt) goto loc_8817AEE4;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8817AE0C:
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
	// std r8,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.r8.u64);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// extsw r30,r30
	ctx.r30.s64 = ctx.r30.s32;
	// std r8,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.r8.u64);
	// addi r29,r10,1
	ctx.r29.s64 = ctx.r10.s64 + 1;
	// std r30,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r30.u64);
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// extsw r30,r29
	ctx.r30.s64 = ctx.r29.s32;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// std r30,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r30.u64);
	// lfd f12,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfd f10,-112(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// lfd f6,-120(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f11,-128(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f12,f6
	ctx.f12.f64 = double(ctx.f6.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// fsubs f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// frsp f6,f12
	ctx.f6.f64 = double(float(ctx.f12.f64));
	// frsp f12,f10
	ctx.f12.f64 = double(float(ctx.f10.f64));
	// fmadds f11,f9,f13,f5
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f5.f64)));
	// fsubs f10,f8,f7
	ctx.f10.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fsubs f9,f6,f7
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fsubs f8,f12,f7
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// fadd f6,f11,f0
	ctx.f6.f64 = ctx.f11.f64 + ctx.f0.f64;
	// fmadds f12,f10,f13,f5
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f5.f64)));
	// fmadds f11,f9,f13,f5
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f5.f64)));
	// fmadds f10,f8,f13,f5
	ctx.f10.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f5.f64)));
	// fctiwz f9,f6
	ctx.f9.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// fadd f8,f12,f0
	ctx.f8.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fadd f6,f11,f0
	ctx.f6.f64 = ctx.f11.f64 + ctx.f0.f64;
	// fadd f12,f10,f0
	ctx.f12.f64 = ctx.f10.f64 + ctx.f0.f64;
	// fctiwz f11,f8
	ctx.f11.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f11,r7,r9
	REX_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.f11.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// fctiwz f10,f6
	ctx.f10.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfiwx f10,r7,r31
	REX_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.f10.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// fctiwz f8,f12
	ctx.f8.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f8,r7,r4
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.f8.u32);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stfiwx f9,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.f9.u32);
	// blt cr6,0x8817ae0c
	if (ctx.cr6.lt) goto loc_8817AE0C;
loc_8817AEE4:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8817af30
	if (!ctx.cr6.lt) goto loc_8817AF30;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8817AEF8:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r9,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r9.u64);
	// lfd f12,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fsubs f9,f10,f7
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// fmadds f8,f9,f13,f5
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f5.f64)));
	// fadd f6,f8,f0
	ctx.f6.f64 = ctx.f8.f64 + ctx.f0.f64;
	// fctiwz f12,f6
	ctx.f12.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfiwx f12,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.f12.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8817aef8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8817AEF8;
loc_8817AF30:
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8817af70
	if (!ctx.cr6.lt) goto loc_8817AF70;
	// fadds f13,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fadd f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f11.u64);
	// lwz r8,-100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
loc_8817AF54:
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8817af54
	if (ctx.cr6.lt) goto loc_8817AF54;
loc_8817AF70:
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// std r11,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r11.u64);
	// lfd f13,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f2,f13
	ctx.cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// bgt cr6,0x8817af90
	if (ctx.cr6.gt) goto loc_8817AF90;
	// fmr f13,f2
	ctx.f13.f64 = ctx.f2.f64;
loc_8817AF90:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f13.u64);
	// lwz r5,-100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x8817affc
	if (ctx.cr6.lt) goto loc_8817AFFC;
	// fadd f13,f1,f0
	ctx.f13.f64 = ctx.f1.f64 + ctx.f0.f64;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// li r10,0
	ctx.r10.s64 = 0;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f12.u64);
	// lwz r9,-100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
loc_8817AFC0:
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// stwx r9,r7,r10
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r9,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r9,-4(r7)
	REX_STORE_U32(ctx.r7.u32 + -4, ctx.r9.u32);
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stwx r9,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r9.u32);
	// blt cr6,0x8817afc0
	if (ctx.cr6.lt) goto loc_8817AFC0;
loc_8817AFFC:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8817b034
	if (!ctx.cr6.lt) goto loc_8817B034;
	// fadd f13,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64 + ctx.f0.f64;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f12.u64);
	// lwz r9,-100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
loc_8817B024:
	// lwz r8,24(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stwx r9,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8817b024
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8817B024;
loc_8817B034:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// fsubs f12,f2,f4
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// fsubs f13,f30,f3
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f3.f64));
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r9.u64);
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// lfd f11,-104(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f12,f10
	ctx.f12.f64 = double(float(ctx.f10.f64));
	// fcmpu cr6,f4,f12
	ctx.cr6.compare(ctx.f4.f64, ctx.f12.f64);
	// bgt cr6,0x8817b064
	if (ctx.cr6.gt) goto loc_8817B064;
	// fmr f12,f4
	ctx.f12.f64 = ctx.f4.f64;
loc_8817B064:
	// fctiwz f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f12.u64);
	// lwz r5,-100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8817b1b4
	if (!ctx.cr6.lt) goto loc_8817B1B4;
	// subf r10,r11,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8817b168
	if (ctx.cr6.lt) goto loc_8817B168;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8817B090:
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r29,r10,1
	ctx.r29.s64 = ctx.r10.s64 + 1;
	// extsw r30,r30
	ctx.r30.s64 = ctx.r30.s32;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r30,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r30.u64);
	// extsw r30,r29
	ctx.r30.s64 = ctx.r29.s32;
	// std r8,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.r8.u64);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r30,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r30.u64);
	// lfd f7,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// std r8,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.r8.u64);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// lfd f12,-104(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// lfd f10,-112(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// lfd f5,-128(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f2,f5
	ctx.f2.f64 = double(ctx.f5.s64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// frsp f10,f6
	ctx.f10.f64 = double(float(ctx.f6.f64));
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f11,f8
	ctx.f11.f64 = double(float(ctx.f8.f64));
	// fsubs f6,f10,f4
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f4.f64));
	// fsubs f12,f9,f4
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// fsubs f7,f11,f4
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f4.f64));
	// frsp f9,f2
	ctx.f9.f64 = double(float(ctx.f2.f64));
	// fmadds f11,f6,f13,f3
	ctx.f11.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f3.f64)));
	// fmadds f8,f12,f13,f3
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f3.f64)));
	// fmadds f12,f7,f13,f3
	ctx.f12.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f3.f64)));
	// fsubs f5,f9,f4
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// fadd f7,f11,f0
	ctx.f7.f64 = ctx.f11.f64 + ctx.f0.f64;
	// fadd f2,f8,f0
	ctx.f2.f64 = ctx.f8.f64 + ctx.f0.f64;
	// fadd f8,f12,f0
	ctx.f8.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fmadds f10,f5,f13,f3
	ctx.f10.f64 = double(float(std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f3.f64)));
	// fctiwz f9,f2
	ctx.f9.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// fctiwz f5,f8
	ctx.f5.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f5,r7,r9
	REX_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.f5.u32);
	// fadd f6,f10,f0
	ctx.f6.f64 = ctx.f10.f64 + ctx.f0.f64;
	// fctiwz f2,f7
	ctx.f2.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// fctiwz f12,f6
	ctx.f12.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stfiwx f2,r7,r31
	REX_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.f2.u32);
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stfiwx f12,r7,r4
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.f12.u32);
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stfiwx f9,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.f9.u32);
	// blt cr6,0x8817b090
	if (ctx.cr6.lt) goto loc_8817B090;
loc_8817B168:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8817b1b4
	if (!ctx.cr6.lt) goto loc_8817B1B4;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8817B17C:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,24(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r9,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r9.u64);
	// lfd f12,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fsubs f9,f10,f4
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f4.f64));
	// fmadds f8,f9,f13,f3
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f3.f64)));
	// fadd f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 + ctx.f0.f64;
	// fctiwz f6,f7
	ctx.f6.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfiwx f6,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.f6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8817b17c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8817B17C;
loc_8817B1B4:
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8817b1f0
	if (!ctx.cr6.lt) goto loc_8817B1F0;
	// fadd f13,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64 + ctx.f0.f64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f12.u64);
	// lwz r8,-100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
loc_8817B1D4:
	// lwz r9,24(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8817b1d4
	if (ctx.cr6.lt) goto loc_8817B1D4;
loc_8817B1F0:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8817b280
	if (!ctx.cr6.gt) goto loc_8817B280;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,12180(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12180);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
loc_8817B20C:
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,28(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r6.u64);
	// lfd f12,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fadd f8,f9,f0
	ctx.f8.f64 = ctx.f9.f64 + ctx.f0.f64;
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f7,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.f7.u32);
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r4,32(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwzx r9,r11,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.r8.u64);
	// lfd f6,-112(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fsubs f3,f13,f4
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// fadd f2,f3,f0
	ctx.f2.f64 = ctx.f3.f64 + ctx.f0.f64;
	// fctiwz f1,f2
	ctx.f1.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfiwx f1,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.f1.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8817b20c
	if (ctx.cr6.lt) goto loc_8817B20C;
loc_8817B280:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x881ef2c4
	ctx.lr = 0x8817B28C;
	__restfpr_24(ctx, base);
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88197108) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// vspltisb v0,15
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0xF)));
	// srawi. r10,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// vspltisb v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_set1_epi8(char(0x1)));
	// vslb v0,v0,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi8(0x7));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_sllv_epi8(a, shift));
	}
	// blelr 
	if (!ctx.cr0.gt) return;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// subf r10,r5,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r5.u64;
	// li r7,-32
	ctx.r7.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r9,16
	ctx.r9.s64 = 16;
loc_88197134:
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsububm v10,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v9,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsububm v8,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v7,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsububm v6,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v5,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsububm v4,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v3,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsububm v2,v5,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsububm v1,v3,v0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsrab v31,v10,v13
	ctx.v31.s8[0] = ctx.v10.s8[0] >> (ctx.v13.u8[0] & 0x7);
	ctx.v31.s8[1] = ctx.v10.s8[1] >> (ctx.v13.u8[1] & 0x7);
	ctx.v31.s8[2] = ctx.v10.s8[2] >> (ctx.v13.u8[2] & 0x7);
	ctx.v31.s8[3] = ctx.v10.s8[3] >> (ctx.v13.u8[3] & 0x7);
	ctx.v31.s8[4] = ctx.v10.s8[4] >> (ctx.v13.u8[4] & 0x7);
	ctx.v31.s8[5] = ctx.v10.s8[5] >> (ctx.v13.u8[5] & 0x7);
	ctx.v31.s8[6] = ctx.v10.s8[6] >> (ctx.v13.u8[6] & 0x7);
	ctx.v31.s8[7] = ctx.v10.s8[7] >> (ctx.v13.u8[7] & 0x7);
	ctx.v31.s8[8] = ctx.v10.s8[8] >> (ctx.v13.u8[8] & 0x7);
	ctx.v31.s8[9] = ctx.v10.s8[9] >> (ctx.v13.u8[9] & 0x7);
	ctx.v31.s8[10] = ctx.v10.s8[10] >> (ctx.v13.u8[10] & 0x7);
	ctx.v31.s8[11] = ctx.v10.s8[11] >> (ctx.v13.u8[11] & 0x7);
	ctx.v31.s8[12] = ctx.v10.s8[12] >> (ctx.v13.u8[12] & 0x7);
	ctx.v31.s8[13] = ctx.v10.s8[13] >> (ctx.v13.u8[13] & 0x7);
	ctx.v31.s8[14] = ctx.v10.s8[14] >> (ctx.v13.u8[14] & 0x7);
	ctx.v31.s8[15] = ctx.v10.s8[15] >> (ctx.v13.u8[15] & 0x7);
	// vsrab v30,v8,v13
	ctx.v30.s8[0] = ctx.v8.s8[0] >> (ctx.v13.u8[0] & 0x7);
	ctx.v30.s8[1] = ctx.v8.s8[1] >> (ctx.v13.u8[1] & 0x7);
	ctx.v30.s8[2] = ctx.v8.s8[2] >> (ctx.v13.u8[2] & 0x7);
	ctx.v30.s8[3] = ctx.v8.s8[3] >> (ctx.v13.u8[3] & 0x7);
	ctx.v30.s8[4] = ctx.v8.s8[4] >> (ctx.v13.u8[4] & 0x7);
	ctx.v30.s8[5] = ctx.v8.s8[5] >> (ctx.v13.u8[5] & 0x7);
	ctx.v30.s8[6] = ctx.v8.s8[6] >> (ctx.v13.u8[6] & 0x7);
	ctx.v30.s8[7] = ctx.v8.s8[7] >> (ctx.v13.u8[7] & 0x7);
	ctx.v30.s8[8] = ctx.v8.s8[8] >> (ctx.v13.u8[8] & 0x7);
	ctx.v30.s8[9] = ctx.v8.s8[9] >> (ctx.v13.u8[9] & 0x7);
	ctx.v30.s8[10] = ctx.v8.s8[10] >> (ctx.v13.u8[10] & 0x7);
	ctx.v30.s8[11] = ctx.v8.s8[11] >> (ctx.v13.u8[11] & 0x7);
	ctx.v30.s8[12] = ctx.v8.s8[12] >> (ctx.v13.u8[12] & 0x7);
	ctx.v30.s8[13] = ctx.v8.s8[13] >> (ctx.v13.u8[13] & 0x7);
	ctx.v30.s8[14] = ctx.v8.s8[14] >> (ctx.v13.u8[14] & 0x7);
	ctx.v30.s8[15] = ctx.v8.s8[15] >> (ctx.v13.u8[15] & 0x7);
	// vsrab v29,v6,v13
	ctx.v29.s8[0] = ctx.v6.s8[0] >> (ctx.v13.u8[0] & 0x7);
	ctx.v29.s8[1] = ctx.v6.s8[1] >> (ctx.v13.u8[1] & 0x7);
	ctx.v29.s8[2] = ctx.v6.s8[2] >> (ctx.v13.u8[2] & 0x7);
	ctx.v29.s8[3] = ctx.v6.s8[3] >> (ctx.v13.u8[3] & 0x7);
	ctx.v29.s8[4] = ctx.v6.s8[4] >> (ctx.v13.u8[4] & 0x7);
	ctx.v29.s8[5] = ctx.v6.s8[5] >> (ctx.v13.u8[5] & 0x7);
	ctx.v29.s8[6] = ctx.v6.s8[6] >> (ctx.v13.u8[6] & 0x7);
	ctx.v29.s8[7] = ctx.v6.s8[7] >> (ctx.v13.u8[7] & 0x7);
	ctx.v29.s8[8] = ctx.v6.s8[8] >> (ctx.v13.u8[8] & 0x7);
	ctx.v29.s8[9] = ctx.v6.s8[9] >> (ctx.v13.u8[9] & 0x7);
	ctx.v29.s8[10] = ctx.v6.s8[10] >> (ctx.v13.u8[10] & 0x7);
	ctx.v29.s8[11] = ctx.v6.s8[11] >> (ctx.v13.u8[11] & 0x7);
	ctx.v29.s8[12] = ctx.v6.s8[12] >> (ctx.v13.u8[12] & 0x7);
	ctx.v29.s8[13] = ctx.v6.s8[13] >> (ctx.v13.u8[13] & 0x7);
	ctx.v29.s8[14] = ctx.v6.s8[14] >> (ctx.v13.u8[14] & 0x7);
	ctx.v29.s8[15] = ctx.v6.s8[15] >> (ctx.v13.u8[15] & 0x7);
	// vsrab v28,v4,v13
	ctx.v28.s8[0] = ctx.v4.s8[0] >> (ctx.v13.u8[0] & 0x7);
	ctx.v28.s8[1] = ctx.v4.s8[1] >> (ctx.v13.u8[1] & 0x7);
	ctx.v28.s8[2] = ctx.v4.s8[2] >> (ctx.v13.u8[2] & 0x7);
	ctx.v28.s8[3] = ctx.v4.s8[3] >> (ctx.v13.u8[3] & 0x7);
	ctx.v28.s8[4] = ctx.v4.s8[4] >> (ctx.v13.u8[4] & 0x7);
	ctx.v28.s8[5] = ctx.v4.s8[5] >> (ctx.v13.u8[5] & 0x7);
	ctx.v28.s8[6] = ctx.v4.s8[6] >> (ctx.v13.u8[6] & 0x7);
	ctx.v28.s8[7] = ctx.v4.s8[7] >> (ctx.v13.u8[7] & 0x7);
	ctx.v28.s8[8] = ctx.v4.s8[8] >> (ctx.v13.u8[8] & 0x7);
	ctx.v28.s8[9] = ctx.v4.s8[9] >> (ctx.v13.u8[9] & 0x7);
	ctx.v28.s8[10] = ctx.v4.s8[10] >> (ctx.v13.u8[10] & 0x7);
	ctx.v28.s8[11] = ctx.v4.s8[11] >> (ctx.v13.u8[11] & 0x7);
	ctx.v28.s8[12] = ctx.v4.s8[12] >> (ctx.v13.u8[12] & 0x7);
	ctx.v28.s8[13] = ctx.v4.s8[13] >> (ctx.v13.u8[13] & 0x7);
	ctx.v28.s8[14] = ctx.v4.s8[14] >> (ctx.v13.u8[14] & 0x7);
	ctx.v28.s8[15] = ctx.v4.s8[15] >> (ctx.v13.u8[15] & 0x7);
	// vsrab v27,v2,v13
	ctx.v27.s8[0] = ctx.v2.s8[0] >> (ctx.v13.u8[0] & 0x7);
	ctx.v27.s8[1] = ctx.v2.s8[1] >> (ctx.v13.u8[1] & 0x7);
	ctx.v27.s8[2] = ctx.v2.s8[2] >> (ctx.v13.u8[2] & 0x7);
	ctx.v27.s8[3] = ctx.v2.s8[3] >> (ctx.v13.u8[3] & 0x7);
	ctx.v27.s8[4] = ctx.v2.s8[4] >> (ctx.v13.u8[4] & 0x7);
	ctx.v27.s8[5] = ctx.v2.s8[5] >> (ctx.v13.u8[5] & 0x7);
	ctx.v27.s8[6] = ctx.v2.s8[6] >> (ctx.v13.u8[6] & 0x7);
	ctx.v27.s8[7] = ctx.v2.s8[7] >> (ctx.v13.u8[7] & 0x7);
	ctx.v27.s8[8] = ctx.v2.s8[8] >> (ctx.v13.u8[8] & 0x7);
	ctx.v27.s8[9] = ctx.v2.s8[9] >> (ctx.v13.u8[9] & 0x7);
	ctx.v27.s8[10] = ctx.v2.s8[10] >> (ctx.v13.u8[10] & 0x7);
	ctx.v27.s8[11] = ctx.v2.s8[11] >> (ctx.v13.u8[11] & 0x7);
	ctx.v27.s8[12] = ctx.v2.s8[12] >> (ctx.v13.u8[12] & 0x7);
	ctx.v27.s8[13] = ctx.v2.s8[13] >> (ctx.v13.u8[13] & 0x7);
	ctx.v27.s8[14] = ctx.v2.s8[14] >> (ctx.v13.u8[14] & 0x7);
	ctx.v27.s8[15] = ctx.v2.s8[15] >> (ctx.v13.u8[15] & 0x7);
	// vsrab v26,v1,v13
	ctx.v26.s8[0] = ctx.v1.s8[0] >> (ctx.v13.u8[0] & 0x7);
	ctx.v26.s8[1] = ctx.v1.s8[1] >> (ctx.v13.u8[1] & 0x7);
	ctx.v26.s8[2] = ctx.v1.s8[2] >> (ctx.v13.u8[2] & 0x7);
	ctx.v26.s8[3] = ctx.v1.s8[3] >> (ctx.v13.u8[3] & 0x7);
	ctx.v26.s8[4] = ctx.v1.s8[4] >> (ctx.v13.u8[4] & 0x7);
	ctx.v26.s8[5] = ctx.v1.s8[5] >> (ctx.v13.u8[5] & 0x7);
	ctx.v26.s8[6] = ctx.v1.s8[6] >> (ctx.v13.u8[6] & 0x7);
	ctx.v26.s8[7] = ctx.v1.s8[7] >> (ctx.v13.u8[7] & 0x7);
	ctx.v26.s8[8] = ctx.v1.s8[8] >> (ctx.v13.u8[8] & 0x7);
	ctx.v26.s8[9] = ctx.v1.s8[9] >> (ctx.v13.u8[9] & 0x7);
	ctx.v26.s8[10] = ctx.v1.s8[10] >> (ctx.v13.u8[10] & 0x7);
	ctx.v26.s8[11] = ctx.v1.s8[11] >> (ctx.v13.u8[11] & 0x7);
	ctx.v26.s8[12] = ctx.v1.s8[12] >> (ctx.v13.u8[12] & 0x7);
	ctx.v26.s8[13] = ctx.v1.s8[13] >> (ctx.v13.u8[13] & 0x7);
	ctx.v26.s8[14] = ctx.v1.s8[14] >> (ctx.v13.u8[14] & 0x7);
	ctx.v26.s8[15] = ctx.v1.s8[15] >> (ctx.v13.u8[15] & 0x7);
	// vaddubm v25,v30,v0
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_add_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddubm v24,v29,v0
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_add_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddubm v23,v31,v0
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_add_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddubm v22,v28,v0
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_add_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddubm v21,v27,v0
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_add_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v25,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddubm v20,v26,v0
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_add_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v24,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v23,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v22,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stvx128 v21,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// bdnz 0x88197134
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88197134;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8819B878) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bge cr6,0x8819b89c
	if (!ctx.cr6.lt) goto loc_8819B89C;
	// addi r11,r3,2468
	ctx.r11.s64 = ctx.r3.s64 + 2468;
	// addi r10,r3,2484
	ctx.r10.s64 = ctx.r3.s64 + 2484;
	// addi r9,r3,2524
	ctx.r9.s64 = ctx.r3.s64 + 2524;
	// stw r11,2480(r3)
	REX_STORE_U32(ctx.r3.u32 + 2480, ctx.r11.u32);
	// stw r10,2520(r3)
	REX_STORE_U32(ctx.r3.u32 + 2520, ctx.r10.u32);
	// stw r9,2560(r3)
	REX_STORE_U32(ctx.r3.u32 + 2560, ctx.r9.u32);
	// blr 
	return;
loc_8819B89C:
	// cmpwi cr6,r4,13
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 13, ctx.xer);
	// bge cr6,0x8819b8c0
	if (!ctx.cr6.lt) goto loc_8819B8C0;
	// addi r11,r3,2456
	ctx.r11.s64 = ctx.r3.s64 + 2456;
	// addi r10,r3,2496
	ctx.r10.s64 = ctx.r3.s64 + 2496;
	// addi r9,r3,2536
	ctx.r9.s64 = ctx.r3.s64 + 2536;
	// stw r11,2480(r3)
	REX_STORE_U32(ctx.r3.u32 + 2480, ctx.r11.u32);
	// stw r10,2520(r3)
	REX_STORE_U32(ctx.r3.u32 + 2520, ctx.r10.u32);
	// stw r9,2560(r3)
	REX_STORE_U32(ctx.r3.u32 + 2560, ctx.r9.u32);
	// blr 
	return;
loc_8819B8C0:
	// addi r11,r3,2444
	ctx.r11.s64 = ctx.r3.s64 + 2444;
	// addi r10,r3,2508
	ctx.r10.s64 = ctx.r3.s64 + 2508;
	// addi r9,r3,2548
	ctx.r9.s64 = ctx.r3.s64 + 2548;
	// stw r11,2480(r3)
	REX_STORE_U32(ctx.r3.u32 + 2480, ctx.r11.u32);
	// stw r10,2520(r3)
	REX_STORE_U32(ctx.r3.u32 + 2520, ctx.r10.u32);
	// stw r9,2560(r3)
	REX_STORE_U32(ctx.r3.u32 + 2560, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8819C3D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8819c430
	if (ctx.cr6.eq) goto loc_8819C430;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8819c430
	if (ctx.cr6.eq) goto loc_8819C430;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x8819c430
	if (ctx.cr6.eq) goto loc_8819C430;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// beq cr6,0x8819c430
	if (ctx.cr6.eq) goto loc_8819C430;
	// li r10,16
	ctx.r10.s64 = 16;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8819C414:
	// lhzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x8819c414
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819C414;
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8819C430:
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lbz r5,-20(r7)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + -20);
	// lwz r4,6608(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 6608);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// addi r10,r11,26488
	ctx.r10.s64 = ctx.r11.s64 + 26488;
	// lbz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// rotlwi r30,r5,2
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// lhz r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// rotlwi r31,r11,2
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// li r3,3
	ctx.r3.s64 = 3;
	// lwz r31,16(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r11,r6,4
	ctx.r11.s64 = ctx.r6.s64 + 4;
	// lwz r30,16(r5)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// subf r5,r6,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r6.u64;
	// rlwinm r30,r30,2,24,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFC;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// lwzx r3,r30,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// mullw r3,r3,r31
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r31.s32);
	// mullw r4,r3,r4
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// add r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 + ctx.r8.u64;
	// srawi r4,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 18;
	// sth r4,0(r6)
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r4.u16);
loc_8819C4A4:
	// lbz r4,4(r7)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// lhz r3,2(r9)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// rlwinm r4,r4,2,24,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFC;
	// lbz r31,-20(r7)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r7.u32 + -20);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lwzx r4,r4,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// mullw r4,r4,r31
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r31.s32);
	// mullw r3,r4,r3
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// add r4,r3,r8
	ctx.r4.u64 = ctx.r3.u64 + ctx.r8.u64;
	// srawi r3,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 18;
	// sth r3,-2(r11)
	REX_STORE_U16(ctx.r11.u32 + -2, ctx.r3.u16);
	// lhzx r3,r11,r5
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r5.u32);
	// lbz r4,-20(r7)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + -20);
	// lbz r31,4(r7)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// rlwinm r31,r31,2,24,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFC;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lwzx r31,r31,r10
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mullw r3,r31,r3
	ctx.r3.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r3.s32);
	// mullw r4,r3,r4
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// add r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 + ctx.r8.u64;
	// srawi r4,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 18;
	// sth r4,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
	// lhz r4,6(r9)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + 6);
	// lbz r3,-20(r7)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + -20);
	// lbz r31,4(r7)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// rlwinm r31,r31,2,24,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFC;
	// lwzx r31,r31,r10
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mullw r3,r31,r3
	ctx.r3.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r3.s32);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// mullw r3,r3,r4
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// add r4,r3,r8
	ctx.r4.u64 = ctx.r3.u64 + ctx.r8.u64;
	// srawi r3,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 18;
	// sth r3,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r3.u16);
	// lhz r3,8(r9)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + 8);
	// lbz r4,-20(r7)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + -20);
	// lbz r31,4(r7)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// rlwinm r31,r31,2,24,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFC;
	// lwzx r31,r31,r10
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mullw r4,r31,r4
	ctx.r4.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r4.s32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// mullw r4,r4,r3
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// add r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 + ctx.r8.u64;
	// srawi r4,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 18;
	// sth r4,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r4.u16);
	// lbz r3,-20(r7)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + -20);
	// lhzu r4,10(r9)
	ea = 10 + ctx.r9.u32;
	ctx.r4.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// lbz r31,4(r7)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// rlwinm r31,r31,2,24,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFC;
	// lwzx r31,r31,r10
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// mullw r3,r31,r3
	ctx.r3.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r3.s32);
	// mullw r3,r3,r4
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// add r4,r3,r8
	ctx.r4.u64 = ctx.r3.u64 + ctx.r8.u64;
	// srawi r3,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 18;
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// sth r4,6(r11)
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r4.u16);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// bdnz 0x8819c4a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819C4A4;
	// lhz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// sth r11,16(r6)
	REX_STORE_U16(ctx.r6.u32 + 16, ctx.r11.u16);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8819D7F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8819D800;
	__savegprlr_14(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r6.u32);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// stw r8,396(r1)
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r8.u32);
	// rotlwi r8,r11,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stw r7,388(r1)
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r7.u32);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r9,404(r1)
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r9.u32);
	// lwz r30,332(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// lwz r7,6608(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 6608);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r4,14
	ctx.r3.s64 = ctx.r4.s64 + 14;
	// stw r4,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r4.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// addic r4,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r4.s64 = ctx.r30.s64 + -1;
	// lwz r14,340(r31)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r31.u32 + 340);
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// subfe r23,r4,r30
	temp.u8 = (~ctx.r4.u32 + ctx.r30.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r23.u64 = ~ctx.r4.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r29,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// rlwinm r15,r9,12,30,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x3;
	// stw r8,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8819d878
	if (ctx.cr6.eq) goto loc_8819D878;
	// rlwinm r14,r9,8,29,31
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0x7;
loc_8819D878:
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8819d8a8
	if (ctx.cr6.eq) goto loc_8819D8A8;
	// rlwinm r11,r9,10,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x3;
	// addi r9,r11,735
	ctx.r9.s64 = ctx.r11.s64 + 735;
	// addi r8,r11,738
	ctx.r8.s64 = ctx.r11.s64 + 738;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r17,r9,r31
	ctx.r17.u64 = ctx.r9.u64 + ctx.r31.u64;
	// stw r7,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// b 0x8819d8b4
	goto loc_8819D8B4;
loc_8819D8A8:
	// addi r11,r31,2916
	ctx.r11.s64 = ctx.r31.s64 + 2916;
	// addi r17,r31,2928
	ctx.r17.s64 = ctx.r31.s64 + 2928;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_8819D8B4:
	// lwz r9,420(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// rlwinm r19,r6,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,20400(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20400);
	// li r20,0
	ctx.r20.s64 = 0;
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// lwz r6,204(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// lwz r8,3788(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3788);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r25,1772(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// rlwinm r18,r5,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r10,r4,r6
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// li r16,8
	ctx.r16.s64 = 8;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// addi r11,r11,26224
	ctx.r11.s64 = ctx.r11.s64 + 26224;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
loc_8819D900:
	// lwz r10,356(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// rlwinm r9,r20,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r8,r20,1
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r20.s32 >> 1;
	// lwz r7,112(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi r21,r20,31
	ctx.r21.u64 = ctx.r20.u32 & 0x1;
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// add r27,r19,r21
	ctx.r27.u64 = ctx.r19.u64 + ctx.r21.u64;
	// lwzx r6,r9,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r26,r11,r18
	ctx.r26.u64 = ctx.r11.u64 + ctx.r18.u64;
	// lbzx r28,r20,r7
	ctx.r28.u64 = REX_LOAD_U8(ctx.r20.u32 + ctx.r7.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// rlwinm r11,r6,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x1;
	// bne cr6,0x8819d94c
	if (!ctx.cr6.eq) goto loc_8819D94C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x8819d94c
	if (!ctx.cr6.eq) goto loc_8819D94C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8819d94c
	if (!ctx.cr6.eq) goto loc_8819D94C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8819dbdc
	if (ctx.cr6.eq) goto loc_8819DBDC;
loc_8819D94C:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// beq cr6,0x8819dbdc
	if (ctx.cr6.eq) goto loc_8819DBDC;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r5,464(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 464);
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mullw r8,r9,r26
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r26.s32);
	// lwz r25,1772(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// lwz r4,364(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// add r7,r11,r27
	ctx.r7.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// rlwinm r11,r7,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// add r30,r11,r5
	ctx.r30.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x8819c7b0
	ctx.lr = 0x8819D9AC;
	sub_8819C7B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8819d9b8
	if (ctx.cr6.eq) goto loc_8819D9B8;
	// addi r29,r1,144
	ctx.r29.s64 = ctx.r1.s64 + 144;
loc_8819D9B8:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r30,364(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r9,128(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// lwz r8,132(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r16,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r16.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x881ba970
	ctx.lr = 0x8819D9F4;
	sub_881BA970(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819fd1c
	if (!ctx.cr6.eq) goto loc_8819FD1C;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8819bb40
	ctx.lr = 0x8819DA18;
	sub_8819BB40(ctx, base);
	// rotlwi r11,r30,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r9,r20,r11
	ctx.r9.u64 = ctx.r20.u64 + ctx.r11.u64;
	// stb r10,8(r9)
	REX_STORE_U8(ctx.r9.u32 + 8, ctx.r10.u8);
	// lwz r8,3004(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3004);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8819e504
	if (ctx.cr6.eq) goto loc_8819E504;
	// rlwinm r11,r20,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x2;
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// addi r6,r11,754
	ctx.r6.s64 = ctx.r11.s64 + 754;
	// rlwinm r7,r27,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r27,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r25,-2
	ctx.r6.s64 = ctx.r25.s64 + -2;
	// lwzx r8,r10,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
loc_8819DA6C:
	// lhzu r7,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x8819da6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819DA6C;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwzx r7,r10,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r25,14
	ctx.r5.s64 = ctx.r25.s64 + 14;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
loc_8819DA98:
	// lhzu r8,2(r5)
	ea = 2 + ctx.r5.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r5.u32 = ea;
	// sthu r8,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x8819da98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819DA98;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r6,r10,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r5,r25,30
	ctx.r5.s64 = ctx.r25.s64 + 30;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r8,r7,-2
	ctx.r8.s64 = ctx.r7.s64 + -2;
loc_8819DAC8:
	// lhzu r7,2(r5)
	ea = 2 + ctx.r5.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r5.u32 = ea;
	// sthu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x8819dac8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819DAC8;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r6,r10,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r5,r25,46
	ctx.r5.s64 = ctx.r25.s64 + 46;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
loc_8819DAFC:
	// lhzu r7,2(r5)
	ea = 2 + ctx.r5.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r5.u32 = ea;
	// sthu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x8819dafc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819DAFC;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r5,r25,62
	ctx.r5.s64 = ctx.r25.s64 + 62;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r8,r7,-2
	ctx.r8.s64 = ctx.r7.s64 + -2;
loc_8819DB2C:
	// lhzu r7,2(r5)
	ea = 2 + ctx.r5.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r5.u32 = ea;
	// sthu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x8819db2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819DB2C;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r5,r25,78
	ctx.r5.s64 = ctx.r25.s64 + 78;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
loc_8819DB60:
	// lhzu r7,2(r5)
	ea = 2 + ctx.r5.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r5.u32 = ea;
	// sthu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x8819db60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819DB60;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r6,r10,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r5,r25,94
	ctx.r5.s64 = ctx.r25.s64 + 94;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
loc_8819DB98:
	// lhzu r7,2(r5)
	ea = 2 + ctx.r5.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r5.u32 = ea;
	// sthu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x8819db98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819DB98;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r10,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// addi r7,r25,110
	ctx.r7.s64 = ctx.r25.s64 + 110;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_8819DBCC:
	// lhzu r10,2(r7)
	ea = 2 + ctx.r7.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8819dbcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819DBCC;
	// b 0x8819e504
	goto loc_8819E504;
loc_8819DBDC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8819e4d8
	if (ctx.cr6.eq) goto loc_8819E4D8;
	// lwz r11,364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8819dd7c
	if (ctx.cr6.eq) goto loc_8819DD7C;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x8819dd7c
	if (!ctx.cr6.eq) goto loc_8819DD7C;
	// lwz r11,2560(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2560);
	// lwz r30,84(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8819dc20
	if (!ctx.cr6.eq) goto loc_8819DC20;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// b 0x8819dd4c
	goto loc_8819DD4C;
loc_8819DC20:
	// lbz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// extsh r29,r5
	ctx.r29.s64 = ctx.r5.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8819dd0c
	if (ctx.cr6.lt) goto loc_8819DD0C;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi r9,r29,28
	ctx.r9.u64 = ctx.r29.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// bge cr6,0x8819dd04
	if (!ctx.cr6.lt) goto loc_8819DD04;
loc_8819DC6C:
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8819dc98
	if (ctx.cr6.lt) goto loc_8819DC98;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156440
	ctx.lr = 0x8819DC88;
	sub_88156440(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8819dc6c
	if (ctx.cr6.eq) goto loc_8819DC6C;
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x8819dd4c
	goto loc_8819DD4C;
loc_8819DC98:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r5,5(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r3,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// sld r11,r8,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r3.u8 & 0x7F));
	// add r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64;
	// std r7,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r7.u64);
loc_8819DD04:
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x8819dd4c
	goto loc_8819DD4C;
loc_8819DD0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156500
	ctx.lr = 0x8819DD14;
	sub_88156500(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r15,r11,32768
	ctx.r15.u64 = ctx.r11.u64 | 32768;
loc_8819DD1C:
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x88156500
	ctx.lr = 0x8819DD34;
	sub_88156500(ctx, base);
	// add r10,r29,r15
	ctx.r10.u64 = ctx.r29.u64 + ctx.r15.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r29,r8
	ctx.r29.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8819dd1c
	if (ctx.cr6.lt) goto loc_8819DD1C;
loc_8819DD4C:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8819e80c
	if (!ctx.cr6.eq) goto loc_8819E80C;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// bge cr6,0x8819e80c
	if (!ctx.cr6.lt) goto loc_8819E80C;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-32
	ctx.r9.s64 = ctx.r11.s64 + -32;
	// lwzx r15,r10,r11
	ctx.r15.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwzx r14,r10,r9
	ctx.r14.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_8819DD7C:
	// add r11,r20,r11
	ctx.r11.u64 = ctx.r20.u64 + ctx.r11.u64;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// stb r14,8(r11)
	REX_STORE_U8(ctx.r11.u32 + 8, ctx.r14.u8);
	// bne cr6,0x8819ddcc
	if (!ctx.cr6.eq) goto loc_8819DDCC;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r25,1772(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,1836(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1836);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819DDB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819fd1c
	if (!ctx.cr6.eq) goto loc_8819FD1C;
	// lwz r11,3200(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3200);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r6,1944(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1944);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// b 0x8819e474
	goto loc_8819E474;
loc_8819DDCC:
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 1, ctx.xer);
	// bne cr6,0x8819dfc0
	if (!ctx.cr6.eq) goto loc_8819DFC0;
	// lwz r25,1768(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x88052d90
	ctx.lr = 0x8819DDF0;
	sub_88052D90(ctx, base);
	// lwz r11,3408(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8819de94
	if (ctx.cr6.eq) goto loc_8819DE94;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x8819de80
	if (!ctx.cr6.eq) goto loc_8819DE80;
	// lwz r11,364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8819de80
	if (!ctx.cr6.eq) goto loc_8819DE80;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8819de40
	if (!ctx.cr0.lt) goto loc_8819DE40;
	// bl 0x88156678
	ctx.lr = 0x8819DE40;
	sub_88156678(ctx, base);
loc_8819DE40:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x8819df28
	if (!ctx.cr6.eq) goto loc_8819DF28;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8819de70
	if (!ctx.cr0.lt) goto loc_8819DE70;
	// bl 0x88156678
	ctx.lr = 0x8819DE70;
	sub_88156678(ctx, base);
loc_8819DE70:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x8819df24
	if (!ctx.cr6.eq) goto loc_8819DF24;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x8819df28
	goto loc_8819DF28;
loc_8819DE80:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r29,r15,0,30,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0x2;
	// clrlwi r28,r15,31
	ctx.r28.u64 = ctx.r15.u32 & 0x1;
	// stbx r15,r20,r11
	REX_STORE_U8(ctx.r20.u32 + ctx.r11.u32, ctx.r15.u8);
	// b 0x8819df38
	goto loc_8819DF38;
loc_8819DE94:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8819debc
	if (ctx.cr6.eq) goto loc_8819DEBC;
	// lwz r11,364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r9,12,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x3;
	// stbx r8,r20,r10
	REX_STORE_U8(ctx.r20.u32 + ctx.r10.u32, ctx.r8.u8);
	// rlwinm r29,r8,0,30,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// clrlwi r28,r8,31
	ctx.r28.u64 = ctx.r8.u32 & 0x1;
	// b 0x8819df38
	goto loc_8819DF38;
loc_8819DEBC:
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8819dee4
	if (!ctx.cr0.lt) goto loc_8819DEE4;
	// bl 0x88156678
	ctx.lr = 0x8819DEE4;
	sub_88156678(ctx, base);
loc_8819DEE4:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x8819df28
	if (!ctx.cr6.eq) goto loc_8819DF28;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8819df14
	if (!ctx.cr0.lt) goto loc_8819DF14;
	// bl 0x88156678
	ctx.lr = 0x8819DF14;
	sub_88156678(ctx, base);
loc_8819DF14:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x8819df24
	if (!ctx.cr6.eq) goto loc_8819DF24;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x8819df28
	goto loc_8819DF28;
loc_8819DF24:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8819DF28:
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// or r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 | ctx.r28.u64;
	// stbx r9,r20,r10
	REX_STORE_U8(ctx.r20.u32 + ctx.r10.u32, ctx.r9.u8);
loc_8819DF38:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8819df84
	if (ctx.cr6.eq) goto loc_8819DF84;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r5,1856(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1856);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819DF60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819fd1c
	if (!ctx.cr6.eq) goto loc_8819FD1C;
	// lwz r11,3204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3204);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819DF84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8819DF84:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8819e480
	if (ctx.cr6.eq) goto loc_8819E480;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r5,1856(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1856);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819DFAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819fd1c
	if (!ctx.cr6.eq) goto loc_8819FD1C;
	// lwz r11,3204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3204);
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8819e46c
	goto loc_8819E46C;
loc_8819DFC0:
	// cmpwi cr6,r14,2
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 2, ctx.xer);
	// bne cr6,0x8819e1b4
	if (!ctx.cr6.eq) goto loc_8819E1B4;
	// lwz r25,1768(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x88052d90
	ctx.lr = 0x8819DFE4;
	sub_88052D90(ctx, base);
	// lwz r11,3408(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8819e088
	if (ctx.cr6.eq) goto loc_8819E088;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x8819e074
	if (!ctx.cr6.eq) goto loc_8819E074;
	// lwz r11,364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8819e074
	if (!ctx.cr6.eq) goto loc_8819E074;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8819e034
	if (!ctx.cr0.lt) goto loc_8819E034;
	// bl 0x88156678
	ctx.lr = 0x8819E034;
	sub_88156678(ctx, base);
loc_8819E034:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x8819e11c
	if (!ctx.cr6.eq) goto loc_8819E11C;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8819e064
	if (!ctx.cr0.lt) goto loc_8819E064;
	// bl 0x88156678
	ctx.lr = 0x8819E064;
	sub_88156678(ctx, base);
loc_8819E064:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x8819e118
	if (!ctx.cr6.eq) goto loc_8819E118;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x8819e11c
	goto loc_8819E11C;
loc_8819E074:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r29,r15,0,30,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0x2;
	// clrlwi r28,r15,31
	ctx.r28.u64 = ctx.r15.u32 & 0x1;
	// stbx r15,r20,r11
	REX_STORE_U8(ctx.r20.u32 + ctx.r11.u32, ctx.r15.u8);
	// b 0x8819e12c
	goto loc_8819E12C;
loc_8819E088:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8819e0b0
	if (ctx.cr6.eq) goto loc_8819E0B0;
	// lwz r11,364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r9,12,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x3;
	// stbx r8,r20,r10
	REX_STORE_U8(ctx.r20.u32 + ctx.r10.u32, ctx.r8.u8);
	// rlwinm r29,r8,0,30,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// clrlwi r28,r8,31
	ctx.r28.u64 = ctx.r8.u32 & 0x1;
	// b 0x8819e12c
	goto loc_8819E12C;
loc_8819E0B0:
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8819e0d8
	if (!ctx.cr0.lt) goto loc_8819E0D8;
	// bl 0x88156678
	ctx.lr = 0x8819E0D8;
	sub_88156678(ctx, base);
loc_8819E0D8:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x8819e11c
	if (!ctx.cr6.eq) goto loc_8819E11C;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8819e108
	if (!ctx.cr0.lt) goto loc_8819E108;
	// bl 0x88156678
	ctx.lr = 0x8819E108;
	sub_88156678(ctx, base);
loc_8819E108:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x8819e118
	if (!ctx.cr6.eq) goto loc_8819E118;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x8819e11c
	goto loc_8819E11C;
loc_8819E118:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8819E11C:
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// or r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 | ctx.r28.u64;
	// stbx r9,r20,r10
	REX_STORE_U8(ctx.r20.u32 + ctx.r10.u32, ctx.r9.u8);
loc_8819E12C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8819e178
	if (ctx.cr6.eq) goto loc_8819E178;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r5,1860(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1860);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819E154;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819fd1c
	if (!ctx.cr6.eq) goto loc_8819FD1C;
	// lwz r11,3208(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3208);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819E178;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8819E178:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8819e480
	if (ctx.cr6.eq) goto loc_8819E480;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r5,1860(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1860);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819E1A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819fd1c
	if (!ctx.cr6.eq) goto loc_8819FD1C;
	// lwz r11,3208(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3208);
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8819e46c
	goto loc_8819E46C;
loc_8819E1B4:
	// cmpwi cr6,r14,4
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 4, ctx.xer);
	// bne cr6,0x8819e480
	if (!ctx.cr6.eq) goto loc_8819E480;
	// lwz r25,1768(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88052d90
	ctx.lr = 0x8819E1D0;
	sub_88052D90(ctx, base);
	// lwz r11,2480(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2480);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r30,84(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// bne cr6,0x8819e1f0
	if (!ctx.cr6.eq) goto loc_8819E1F0;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// b 0x8819e31c
	goto loc_8819E31C;
loc_8819E1F0:
	// lbz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// extsh r29,r5
	ctx.r29.s64 = ctx.r5.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8819e2dc
	if (ctx.cr6.lt) goto loc_8819E2DC;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi r9,r29,28
	ctx.r9.u64 = ctx.r29.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// bge cr6,0x8819e2d4
	if (!ctx.cr6.lt) goto loc_8819E2D4;
loc_8819E23C:
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8819e268
	if (ctx.cr6.lt) goto loc_8819E268;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156440
	ctx.lr = 0x8819E258;
	sub_88156440(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8819e23c
	if (ctx.cr6.eq) goto loc_8819E23C;
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x8819e31c
	goto loc_8819E31C;
loc_8819E268:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r5,r10,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r3,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// neg r4,r10
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r5,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rldicr r11,r7,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sld r11,r6,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r3.u8 & 0x7F));
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r5,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r5.u64);
loc_8819E2D4:
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x8819e31c
	goto loc_8819E31C;
loc_8819E2DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156500
	ctx.lr = 0x8819E2E4;
	sub_88156500(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r23,r11,32768
	ctx.r23.u64 = ctx.r11.u64 | 32768;
loc_8819E2EC:
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x88156500
	ctx.lr = 0x8819E304;
	sub_88156500(ctx, base);
	// add r10,r29,r23
	ctx.r10.u64 = ctx.r29.u64 + ctx.r23.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r29,r8
	ctx.r29.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8819e2ec
	if (ctx.cr6.lt) goto loc_8819E2EC;
loc_8819E31C:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// addi r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 1;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8819e80c
	if (!ctx.cr6.eq) goto loc_8819E80C;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r9,r30,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	// lwz r28,120(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r29,116(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stbx r30,r20,r11
	REX_STORE_U8(ctx.r20.u32 + ctx.r11.u32, ctx.r30.u8);
	// beq cr6,0x8819e390
	if (ctx.cr6.eq) goto loc_8819E390;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,1864(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1864);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819E36C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819fd1c
	if (!ctx.cr6.eq) goto loc_8819FD1C;
	// lwz r11,3212(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3212);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819E390;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8819E390:
	// rlwinm r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8819e3e0
	if (ctx.cr6.eq) goto loc_8819E3E0;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,1864(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1864);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819E3BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819fd1c
	if (!ctx.cr6.eq) goto loc_8819FD1C;
	// lwz r11,3212(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3212);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819E3E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8819E3E0:
	// rlwinm r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8819e430
	if (ctx.cr6.eq) goto loc_8819E430;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,1864(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1864);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819E40C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819fd1c
	if (!ctx.cr6.eq) goto loc_8819FD1C;
	// lwz r11,3212(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3212);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819E430;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8819E430:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8819e480
	if (ctx.cr6.eq) goto loc_8819E480;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,1864(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1864);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819E45C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819fd1c
	if (!ctx.cr6.eq) goto loc_8819FD1C;
	// lwz r11,3212(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3212);
	// li r6,3
	ctx.r6.s64 = 3;
loc_8819E46C:
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// li r4,8
	ctx.r4.s64 = 8;
loc_8819E474:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819E480;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8819E480:
	// lis r11,-30696
	ctx.r11.s64 = -2011693056;
	// lwz r10,3200(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3200);
	// addi r9,r11,11312
	ctx.r9.s64 = ctx.r11.s64 + 11312;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8819e4b4
	if (!ctx.cr6.eq) goto loc_8819E4B4;
	// li r9,64
	ctx.r9.s64 = 64;
	// addi r10,r25,-2
	ctx.r10.s64 = ctx.r25.s64 + -2;
	// addi r11,r25,-4
	ctx.r11.s64 = ctx.r25.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8819E4A4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8819e4a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819E4A4;
loc_8819E4B4:
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8819bb40
	ctx.lr = 0x8819E4D0;
	sub_8819BB40(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// b 0x8819e504
	goto loc_8819E504;
loc_8819E4D8:
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8819bb40
	ctx.lr = 0x8819E4F4;
	sub_8819BB40(ctx, base);
	// lwz r11,364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r9,r20,r11
	ctx.r9.u64 = ctx.r20.u64 + ctx.r11.u64;
	// stb r10,8(r9)
	REX_STORE_U8(ctx.r9.u32 + 8, ctx.r10.u8);
loc_8819E504:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x8819e514
	if (ctx.cr6.eq) goto loc_8819E514;
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// b 0x8819e518
	goto loc_8819E518;
loc_8819E514:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_8819E518:
	// add r22,r11,r22
	ctx.r22.u64 = ctx.r11.u64 + ctx.r22.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x8819e52c
	if (ctx.cr6.eq) goto loc_8819E52C;
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// b 0x8819e530
	goto loc_8819E530;
loc_8819E52C:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_8819E530:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmpwi cr6,r20,4
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 4, ctx.xer);
	// blt cr6,0x8819d900
	if (ctx.cr6.lt) goto loc_8819D900;
	// lwz r10,436(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r11,20404(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20404);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r22,404(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r28,396(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// mullw r10,r9,r22
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r22.s32);
	// lwz r4,208(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r3,428(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r30,1784(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 1784);
	// lwz r7,3792(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3792);
	// lwz r8,3796(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3796);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// mullw r9,r5,r4
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// srawi r6,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 1;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lhzx r9,r5,r30
	ctx.r9.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r30.u32);
	// add r27,r7,r11
	ctx.r27.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r24,r8,r11
	ctx.r24.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r4,r9,-16384
	ctx.r4.s64 = ctx.r9.s64 + -16384;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r26,r3,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8819e818
	if (ctx.cr6.eq) goto loc_8819E818;
	// lwz r9,468(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 468);
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r21,364(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// li r19,0
	ctx.r19.s64 = 0;
	// add r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,132
	ctx.r9.s64 = ctx.r1.s64 + 132;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// bl 0x8819cb88
	ctx.lr = 0x8819E5E8;
	sub_8819CB88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8819e5f4
	if (ctx.cr6.eq) goto loc_8819E5F4;
	// addi r29,r1,144
	ctx.r29.s64 = ctx.r1.s64 + 144;
loc_8819E5F4:
	// lwz r25,1772(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r17,120(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r30,112(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// lwz r18,116(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,128(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// stw r17,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r17.u32);
	// lbz r6,4(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 4);
	// lwz r8,132(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// stw r16,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r16.u32);
	// stw r19,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r19.u32);
	// bl 0x881ba970
	ctx.lr = 0x8819E63C;
	sub_881BA970(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819fd1c
	if (!ctx.cr6.eq) goto loc_8819FD1C;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r4,380(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8819c090
	ctx.lr = 0x8819E660;
	sub_8819C090(ctx, base);
	// stb r19,12(r21)
	REX_STORE_U8(ctx.r21.u32 + 12, ctx.r19.u8);
	// lwz r11,3004(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3004);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8819f160
	if (ctx.cr6.eq) goto loc_8819F160;
	// lwz r10,3028(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3028);
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r6,136(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// addi r7,r25,-2
	ctx.r7.s64 = ctx.r25.s64 + -2;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r28,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
loc_8819E69C:
	// lhzu r8,2(r7)
	ea = 2 + ctx.r7.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x8819e69c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819E69C;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,3028(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3028);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r25,14
	ctx.r6.s64 = ctx.r25.s64 + 14;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
loc_8819E6C8:
	// lhzu r9,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x8819e6c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819E6C8;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,3028(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3028);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r6,r25,30
	ctx.r6.s64 = ctx.r25.s64 + 30;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
loc_8819E6F8:
	// lhzu r8,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x8819e6f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819E6F8;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,3028(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3028);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r6,r25,46
	ctx.r6.s64 = ctx.r25.s64 + 46;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_8819E72C:
	// lhzu r8,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x8819e72c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819E72C;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,3028(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3028);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r6,r25,62
	ctx.r6.s64 = ctx.r25.s64 + 62;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
loc_8819E75C:
	// lhzu r8,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x8819e75c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819E75C;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,3028(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3028);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r6,r25,78
	ctx.r6.s64 = ctx.r25.s64 + 78;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_8819E790:
	// lhzu r8,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x8819e790
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819E790;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,3028(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3028);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r6,r25,94
	ctx.r6.s64 = ctx.r25.s64 + 94;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_8819E7C8:
	// lhzu r8,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x8819e7c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819E7C8;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,3028(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3028);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// addi r7,r25,110
	ctx.r7.s64 = ctx.r25.s64 + 110;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_8819E7FC:
	// lhzu r10,2(r7)
	ea = 2 + ctx.r7.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8819e7fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819E7FC;
	// b 0x8819f160
	goto loc_8819F160;
loc_8819E80C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_8819E818:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8819f12c
	if (ctx.cr6.eq) goto loc_8819F12C;
	// lwz r10,364(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r11,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8819e9c4
	if (ctx.cr6.eq) goto loc_8819E9C4;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x8819e9c4
	if (!ctx.cr6.eq) goto loc_8819E9C4;
	// lwz r11,2560(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2560);
	// lwz r30,84(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8819e868
	if (!ctx.cr6.eq) goto loc_8819E868;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// b 0x8819e998
	goto loc_8819E998;
loc_8819E868:
	// lbz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// extsh r29,r5
	ctx.r29.s64 = ctx.r5.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8819e954
	if (ctx.cr6.lt) goto loc_8819E954;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi r9,r29,28
	ctx.r9.u64 = ctx.r29.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// bge cr6,0x8819e94c
	if (!ctx.cr6.lt) goto loc_8819E94C;
loc_8819E8B4:
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8819e8e0
	if (ctx.cr6.lt) goto loc_8819E8E0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156440
	ctx.lr = 0x8819E8D0;
	sub_88156440(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8819e8b4
	if (ctx.cr6.eq) goto loc_8819E8B4;
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x8819e994
	goto loc_8819E994;
loc_8819E8E0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r5,r10,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r3,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// neg r4,r10
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r5,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rldicr r11,r7,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sld r11,r6,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r3.u8 & 0x7F));
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r5,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r5.u64);
loc_8819E94C:
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x8819e994
	goto loc_8819E994;
loc_8819E954:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156500
	ctx.lr = 0x8819E95C;
	sub_88156500(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r22,r11,32768
	ctx.r22.u64 = ctx.r11.u64 | 32768;
loc_8819E964:
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x88156500
	ctx.lr = 0x8819E97C;
	sub_88156500(ctx, base);
	// add r10,r29,r22
	ctx.r10.u64 = ctx.r29.u64 + ctx.r22.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r29,r8
	ctx.r29.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8819e964
	if (ctx.cr6.lt) goto loc_8819E964;
loc_8819E994:
	// lwz r10,364(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
loc_8819E998:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8819e80c
	if (!ctx.cr6.eq) goto loc_8819E80C;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// bge cr6,0x8819e80c
	if (!ctx.cr6.lt) goto loc_8819E80C;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,-32
	ctx.r8.s64 = ctx.r11.s64 + -32;
	// lwzx r15,r9,r11
	ctx.r15.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r14,r9,r8
	ctx.r14.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
loc_8819E9C4:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// stb r14,12(r10)
	REX_STORE_U8(ctx.r10.u32 + 12, ctx.r14.u8);
	// bne cr6,0x8819ea10
	if (!ctx.cr6.eq) goto loc_8819EA10;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r25,1772(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,1836(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1836);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819E9F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819fd1c
	if (!ctx.cr6.eq) goto loc_8819FD1C;
	// lwz r11,3200(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3200);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r6,1944(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1944);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// b 0x8819f0b8
	goto loc_8819F0B8;
loc_8819EA10:
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 1, ctx.xer);
	// bne cr6,0x8819ec04
	if (!ctx.cr6.eq) goto loc_8819EC04;
	// lwz r25,1768(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x88052d90
	ctx.lr = 0x8819EA34;
	sub_88052D90(ctx, base);
	// lwz r11,3408(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8819ead8
	if (ctx.cr6.eq) goto loc_8819EAD8;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x8819eac4
	if (!ctx.cr6.eq) goto loc_8819EAC4;
	// lwz r11,364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8819eac4
	if (!ctx.cr6.eq) goto loc_8819EAC4;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8819ea84
	if (!ctx.cr0.lt) goto loc_8819EA84;
	// bl 0x88156678
	ctx.lr = 0x8819EA84;
	sub_88156678(ctx, base);
loc_8819EA84:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x8819eb6c
	if (!ctx.cr6.eq) goto loc_8819EB6C;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8819eab4
	if (!ctx.cr0.lt) goto loc_8819EAB4;
	// bl 0x88156678
	ctx.lr = 0x8819EAB4;
	sub_88156678(ctx, base);
loc_8819EAB4:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x8819eb68
	if (!ctx.cr6.eq) goto loc_8819EB68;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x8819eb6c
	goto loc_8819EB6C;
loc_8819EAC4:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r29,r15,0,30,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0x2;
	// clrlwi r28,r15,31
	ctx.r28.u64 = ctx.r15.u32 & 0x1;
	// stb r15,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r15.u8);
	// b 0x8819eb7c
	goto loc_8819EB7C;
loc_8819EAD8:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8819eb00
	if (ctx.cr6.eq) goto loc_8819EB00;
	// lwz r11,364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r9,12,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x3;
	// stbx r8,r20,r10
	REX_STORE_U8(ctx.r20.u32 + ctx.r10.u32, ctx.r8.u8);
	// rlwinm r29,r8,0,30,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// clrlwi r28,r8,31
	ctx.r28.u64 = ctx.r8.u32 & 0x1;
	// b 0x8819eb7c
	goto loc_8819EB7C;
loc_8819EB00:
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8819eb28
	if (!ctx.cr0.lt) goto loc_8819EB28;
	// bl 0x88156678
	ctx.lr = 0x8819EB28;
	sub_88156678(ctx, base);
loc_8819EB28:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x8819eb6c
	if (!ctx.cr6.eq) goto loc_8819EB6C;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8819eb58
	if (!ctx.cr0.lt) goto loc_8819EB58;
	// bl 0x88156678
	ctx.lr = 0x8819EB58;
	sub_88156678(ctx, base);
loc_8819EB58:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x8819eb68
	if (!ctx.cr6.eq) goto loc_8819EB68;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x8819eb6c
	goto loc_8819EB6C;
loc_8819EB68:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8819EB6C:
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// or r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 | ctx.r28.u64;
	// stb r9,4(r10)
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r9.u8);
loc_8819EB7C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8819ebc8
	if (ctx.cr6.eq) goto loc_8819EBC8;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r5,1856(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1856);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819EBA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819fd1c
	if (!ctx.cr6.eq) goto loc_8819FD1C;
	// lwz r11,3204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3204);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819EBC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8819EBC8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8819f0c4
	if (ctx.cr6.eq) goto loc_8819F0C4;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r5,1856(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1856);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819EBF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819fd1c
	if (!ctx.cr6.eq) goto loc_8819FD1C;
	// lwz r11,3204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3204);
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8819f0b0
	goto loc_8819F0B0;
loc_8819EC04:
	// cmpwi cr6,r14,2
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 2, ctx.xer);
	// bne cr6,0x8819edf8
	if (!ctx.cr6.eq) goto loc_8819EDF8;
	// lwz r25,1768(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x88052d90
	ctx.lr = 0x8819EC28;
	sub_88052D90(ctx, base);
	// lwz r11,3408(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8819eccc
	if (ctx.cr6.eq) goto loc_8819ECCC;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x8819ecb8
	if (!ctx.cr6.eq) goto loc_8819ECB8;
	// lwz r11,364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8819ecb8
	if (!ctx.cr6.eq) goto loc_8819ECB8;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8819ec78
	if (!ctx.cr0.lt) goto loc_8819EC78;
	// bl 0x88156678
	ctx.lr = 0x8819EC78;
	sub_88156678(ctx, base);
loc_8819EC78:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x8819ed60
	if (!ctx.cr6.eq) goto loc_8819ED60;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8819eca8
	if (!ctx.cr0.lt) goto loc_8819ECA8;
	// bl 0x88156678
	ctx.lr = 0x8819ECA8;
	sub_88156678(ctx, base);
loc_8819ECA8:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x8819ed5c
	if (!ctx.cr6.eq) goto loc_8819ED5C;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x8819ed60
	goto loc_8819ED60;
loc_8819ECB8:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r29,r15,0,30,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0x2;
	// clrlwi r28,r15,31
	ctx.r28.u64 = ctx.r15.u32 & 0x1;
	// stb r15,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r15.u8);
	// b 0x8819ed70
	goto loc_8819ED70;
loc_8819ECCC:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8819ecf4
	if (ctx.cr6.eq) goto loc_8819ECF4;
	// lwz r11,364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r9,12,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x3;
	// stbx r8,r20,r10
	REX_STORE_U8(ctx.r20.u32 + ctx.r10.u32, ctx.r8.u8);
	// rlwinm r29,r8,0,30,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// clrlwi r28,r8,31
	ctx.r28.u64 = ctx.r8.u32 & 0x1;
	// b 0x8819ed70
	goto loc_8819ED70;
loc_8819ECF4:
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8819ed1c
	if (!ctx.cr0.lt) goto loc_8819ED1C;
	// bl 0x88156678
	ctx.lr = 0x8819ED1C;
	sub_88156678(ctx, base);
loc_8819ED1C:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x8819ed60
	if (!ctx.cr6.eq) goto loc_8819ED60;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8819ed4c
	if (!ctx.cr0.lt) goto loc_8819ED4C;
	// bl 0x88156678
	ctx.lr = 0x8819ED4C;
	sub_88156678(ctx, base);
loc_8819ED4C:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x8819ed5c
	if (!ctx.cr6.eq) goto loc_8819ED5C;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x8819ed60
	goto loc_8819ED60;
loc_8819ED5C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8819ED60:
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// or r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 | ctx.r28.u64;
	// stb r9,4(r10)
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r9.u8);
loc_8819ED70:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8819edbc
	if (ctx.cr6.eq) goto loc_8819EDBC;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r5,1860(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1860);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819ED98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819fd1c
	if (!ctx.cr6.eq) goto loc_8819FD1C;
	// lwz r11,3208(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3208);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819EDBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8819EDBC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8819f0c4
	if (ctx.cr6.eq) goto loc_8819F0C4;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r5,1860(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1860);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819EDE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819fd1c
	if (!ctx.cr6.eq) goto loc_8819FD1C;
	// lwz r11,3208(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3208);
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8819f0b0
	goto loc_8819F0B0;
loc_8819EDF8:
	// cmpwi cr6,r14,4
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 4, ctx.xer);
	// bne cr6,0x8819f0c4
	if (!ctx.cr6.eq) goto loc_8819F0C4;
	// lwz r25,1768(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88052d90
	ctx.lr = 0x8819EE14;
	sub_88052D90(ctx, base);
	// lwz r11,2480(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2480);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r30,84(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// bne cr6,0x8819ee34
	if (!ctx.cr6.eq) goto loc_8819EE34;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// b 0x8819ef60
	goto loc_8819EF60;
loc_8819EE34:
	// lbz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// extsh r29,r5
	ctx.r29.s64 = ctx.r5.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8819ef20
	if (ctx.cr6.lt) goto loc_8819EF20;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi r9,r29,28
	ctx.r9.u64 = ctx.r29.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// bge cr6,0x8819ef18
	if (!ctx.cr6.lt) goto loc_8819EF18;
loc_8819EE80:
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8819eeac
	if (ctx.cr6.lt) goto loc_8819EEAC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156440
	ctx.lr = 0x8819EE9C;
	sub_88156440(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8819ee80
	if (ctx.cr6.eq) goto loc_8819EE80;
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x8819ef60
	goto loc_8819EF60;
loc_8819EEAC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r5,r10,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r3,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// neg r4,r10
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r5,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rldicr r11,r7,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sld r11,r6,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r3.u8 & 0x7F));
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r5,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r5.u64);
loc_8819EF18:
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x8819ef60
	goto loc_8819EF60;
loc_8819EF20:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156500
	ctx.lr = 0x8819EF28;
	sub_88156500(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r23,r11,32768
	ctx.r23.u64 = ctx.r11.u64 | 32768;
loc_8819EF30:
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x88156500
	ctx.lr = 0x8819EF48;
	sub_88156500(ctx, base);
	// add r10,r29,r23
	ctx.r10.u64 = ctx.r29.u64 + ctx.r23.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r29,r8
	ctx.r29.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8819ef30
	if (ctx.cr6.lt) goto loc_8819EF30;
loc_8819EF60:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// addi r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 1;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8819e80c
	if (!ctx.cr6.eq) goto loc_8819E80C;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r9,r30,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	// lwz r28,120(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r29,116(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r30,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r30.u8);
	// beq cr6,0x8819efd4
	if (ctx.cr6.eq) goto loc_8819EFD4;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,1864(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1864);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819EFB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819fd1c
	if (!ctx.cr6.eq) goto loc_8819FD1C;
	// lwz r11,3212(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3212);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819EFD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8819EFD4:
	// rlwinm r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8819f024
	if (ctx.cr6.eq) goto loc_8819F024;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,1864(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1864);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819F000;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819fd1c
	if (!ctx.cr6.eq) goto loc_8819FD1C;
	// lwz r11,3212(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3212);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819F024;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8819F024:
	// rlwinm r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8819f074
	if (ctx.cr6.eq) goto loc_8819F074;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,1864(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1864);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819F050;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819fd1c
	if (!ctx.cr6.eq) goto loc_8819FD1C;
	// lwz r11,3212(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3212);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819F074;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8819F074:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8819f0c4
	if (ctx.cr6.eq) goto loc_8819F0C4;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,1864(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1864);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819F0A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819fd1c
	if (!ctx.cr6.eq) goto loc_8819FD1C;
	// lwz r11,3212(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3212);
	// li r6,3
	ctx.r6.s64 = 3;
loc_8819F0B0:
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// li r4,8
	ctx.r4.s64 = 8;
loc_8819F0B8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819F0C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8819F0C4:
	// lis r11,-30696
	ctx.r11.s64 = -2011693056;
	// lwz r10,3200(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3200);
	// addi r9,r11,11312
	ctx.r9.s64 = ctx.r11.s64 + 11312;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8819f0f8
	if (!ctx.cr6.eq) goto loc_8819F0F8;
	// li r9,64
	ctx.r9.s64 = 64;
	// addi r10,r25,-2
	ctx.r10.s64 = ctx.r25.s64 + -2;
	// addi r11,r25,-4
	ctx.r11.s64 = ctx.r25.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8819F0E8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8819f0e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819F0E8;
loc_8819F0F8:
	// lwz r22,404(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r28,396(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// lwz r4,380(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8819c090
	ctx.lr = 0x8819F11C;
	sub_8819C090(ctx, base);
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r21,364(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
	// b 0x8819f154
	goto loc_8819F154;
loc_8819F12C:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r4,380(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8819c090
	ctx.lr = 0x8819F148;
	sub_8819C090(ctx, base);
	// lwz r21,364(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// li r19,0
	ctx.r19.s64 = 0;
	// stb r19,12(r21)
	REX_STORE_U8(ctx.r21.u32 + 12, ctx.r19.u8);
loc_8819F154:
	// lwz r30,112(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r17,120(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r18,116(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
loc_8819F160:
	// addi r27,r20,1
	ctx.r27.s64 = ctx.r20.s64 + 1;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8819f3e0
	if (ctx.cr6.eq) goto loc_8819F3E0;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r23,404(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lwz r25,396(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// addi r9,r1,132
	ctx.r9.s64 = ctx.r1.s64 + 132;
	// mullw r11,r11,r23
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r23.s32);
	// lwz r6,472(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 472);
	// lwz r26,364(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// add r7,r11,r25
	ctx.r7.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// rlwinm r11,r7,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// add r29,r11,r6
	ctx.r29.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// bl 0x8819cb88
	ctx.lr = 0x8819F1BC;
	sub_8819CB88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8819f1c8
	if (ctx.cr6.eq) goto loc_8819F1C8;
	// addi r28,r1,144
	ctx.r28.s64 = ctx.r1.s64 + 144;
loc_8819F1C8:
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r30,1772(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,128(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r8,132(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// lbz r6,5(r6)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + 5);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r16,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r16.u32);
	// stw r22,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r22.u32);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// bl 0x881ba970
	ctx.lr = 0x8819F20C;
	sub_881BA970(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819fd1c
	if (!ctx.cr6.eq) goto loc_8819FD1C;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r4,388(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8819c090
	ctx.lr = 0x8819F230;
	sub_8819C090(ctx, base);
	// stb r22,13(r26)
	REX_STORE_U8(ctx.r26.u32 + 13, ctx.r22.u8);
	// lwz r11,3004(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3004);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8819fd04
	if (ctx.cr6.eq) goto loc_8819FD04;
	// lwz r7,396(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// lwz r10,3036(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3036);
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r6,136(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r30,-2
	ctx.r7.s64 = ctx.r30.s64 + -2;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
loc_8819F270:
	// lhzu r8,2(r7)
	ea = 2 + ctx.r7.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x8819f270
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819F270;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,3036(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3036);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r30,14
	ctx.r6.s64 = ctx.r30.s64 + 14;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
loc_8819F29C:
	// lhzu r9,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x8819f29c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819F29C;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,3036(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3036);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r6,r30,30
	ctx.r6.s64 = ctx.r30.s64 + 30;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
loc_8819F2CC:
	// lhzu r8,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x8819f2cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819F2CC;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,3036(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3036);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r6,r30,46
	ctx.r6.s64 = ctx.r30.s64 + 46;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_8819F300:
	// lhzu r8,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x8819f300
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819F300;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,3036(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3036);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r6,r30,62
	ctx.r6.s64 = ctx.r30.s64 + 62;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
loc_8819F330:
	// lhzu r8,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x8819f330
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819F330;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,3036(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3036);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r6,r30,78
	ctx.r6.s64 = ctx.r30.s64 + 78;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_8819F364:
	// lhzu r8,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x8819f364
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819F364;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,3036(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3036);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r6,r30,94
	ctx.r6.s64 = ctx.r30.s64 + 94;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_8819F39C:
	// lhzu r8,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x8819f39c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819F39C;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,3036(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3036);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// addi r7,r30,110
	ctx.r7.s64 = ctx.r30.s64 + 110;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_8819F3D0:
	// lhzu r10,2(r7)
	ea = 2 + ctx.r7.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8819f3d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819F3D0;
	// b 0x8819fd04
	goto loc_8819FD04;
loc_8819F3E0:
	// lbz r11,5(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8819fce4
	if (ctx.cr6.eq) goto loc_8819FCE4;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// stw r19,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r19.u32);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8819f590
	if (ctx.cr6.eq) goto loc_8819F590;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x8819f590
	if (!ctx.cr6.eq) goto loc_8819F590;
	// lwz r11,2560(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2560);
	// lwz r30,84(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8819f428
	if (!ctx.cr6.eq) goto loc_8819F428;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// stw r11,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// b 0x8819f564
	goto loc_8819F564;
loc_8819F428:
	// lbz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// extsh r29,r5
	ctx.r29.s64 = ctx.r5.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8819f514
	if (ctx.cr6.lt) goto loc_8819F514;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi r9,r29,28
	ctx.r9.u64 = ctx.r29.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// bge cr6,0x8819f50c
	if (!ctx.cr6.lt) goto loc_8819F50C;
loc_8819F474:
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8819f4a0
	if (ctx.cr6.lt) goto loc_8819F4A0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156440
	ctx.lr = 0x8819F490;
	sub_88156440(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8819f474
	if (ctx.cr6.eq) goto loc_8819F474;
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x8819f554
	goto loc_8819F554;
loc_8819F4A0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r5,r10,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r3,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// neg r4,r10
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r5,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rldicr r11,r7,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sld r11,r6,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r3.u8 & 0x7F));
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r5,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r5.u64);
loc_8819F50C:
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x8819f554
	goto loc_8819F554;
loc_8819F514:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156500
	ctx.lr = 0x8819F51C;
	sub_88156500(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r26,r11,32768
	ctx.r26.u64 = ctx.r11.u64 | 32768;
loc_8819F524:
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x88156500
	ctx.lr = 0x8819F53C;
	sub_88156500(ctx, base);
	// add r10,r29,r26
	ctx.r10.u64 = ctx.r29.u64 + ctx.r26.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r29,r8
	ctx.r29.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8819f524
	if (ctx.cr6.lt) goto loc_8819F524;
loc_8819F554:
	// lwz r18,116(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r17,120(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r21,364(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
loc_8819F564:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8819e80c
	if (!ctx.cr6.eq) goto loc_8819E80C;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// bge cr6,0x8819e80c
	if (!ctx.cr6.lt) goto loc_8819E80C;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-32
	ctx.r9.s64 = ctx.r11.s64 + -32;
	// lwzx r15,r10,r11
	ctx.r15.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r14,r10,r9
	ctx.r14.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_8819F590:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// stb r14,13(r21)
	REX_STORE_U8(ctx.r21.u32 + 13, ctx.r14.u8);
	// bne cr6,0x8819f5dc
	if (!ctx.cr6.eq) goto loc_8819F5DC;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r25,1772(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r5,1836(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1836);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819F5C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819fd1c
	if (!ctx.cr6.eq) goto loc_8819FD1C;
	// lwz r11,3200(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3200);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r6,1944(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1944);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// b 0x8819fc84
	goto loc_8819FC84;
loc_8819F5DC:
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 1, ctx.xer);
	// bne cr6,0x8819f7d0
	if (!ctx.cr6.eq) goto loc_8819F7D0;
	// lwz r25,1768(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x88052d90
	ctx.lr = 0x8819F600;
	sub_88052D90(ctx, base);
	// lwz r11,3408(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8819f6a4
	if (ctx.cr6.eq) goto loc_8819F6A4;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x8819f690
	if (!ctx.cr6.eq) goto loc_8819F690;
	// lwz r11,364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8819f690
	if (!ctx.cr6.eq) goto loc_8819F690;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8819f650
	if (!ctx.cr0.lt) goto loc_8819F650;
	// bl 0x88156678
	ctx.lr = 0x8819F650;
	sub_88156678(ctx, base);
loc_8819F650:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x8819f738
	if (!ctx.cr6.eq) goto loc_8819F738;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8819f680
	if (!ctx.cr0.lt) goto loc_8819F680;
	// bl 0x88156678
	ctx.lr = 0x8819F680;
	sub_88156678(ctx, base);
loc_8819F680:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x8819f734
	if (!ctx.cr6.eq) goto loc_8819F734;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x8819f738
	goto loc_8819F738;
loc_8819F690:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r29,r15,0,30,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0x2;
	// clrlwi r28,r15,31
	ctx.r28.u64 = ctx.r15.u32 & 0x1;
	// stb r15,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r15.u8);
	// b 0x8819f748
	goto loc_8819F748;
loc_8819F6A4:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8819f6cc
	if (ctx.cr6.eq) goto loc_8819F6CC;
	// lwz r11,364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r9,12,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x3;
	// stbx r8,r27,r10
	REX_STORE_U8(ctx.r27.u32 + ctx.r10.u32, ctx.r8.u8);
	// rlwinm r29,r8,0,30,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// clrlwi r28,r8,31
	ctx.r28.u64 = ctx.r8.u32 & 0x1;
	// b 0x8819f748
	goto loc_8819F748;
loc_8819F6CC:
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8819f6f4
	if (!ctx.cr0.lt) goto loc_8819F6F4;
	// bl 0x88156678
	ctx.lr = 0x8819F6F4;
	sub_88156678(ctx, base);
loc_8819F6F4:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x8819f738
	if (!ctx.cr6.eq) goto loc_8819F738;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8819f724
	if (!ctx.cr0.lt) goto loc_8819F724;
	// bl 0x88156678
	ctx.lr = 0x8819F724;
	sub_88156678(ctx, base);
loc_8819F724:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x8819f734
	if (!ctx.cr6.eq) goto loc_8819F734;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x8819f738
	goto loc_8819F738;
loc_8819F734:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8819F738:
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// or r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 | ctx.r28.u64;
	// stb r9,5(r10)
	REX_STORE_U8(ctx.r10.u32 + 5, ctx.r9.u8);
loc_8819F748:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8819f794
	if (ctx.cr6.eq) goto loc_8819F794;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r5,1856(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1856);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819F770;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819fd1c
	if (!ctx.cr6.eq) goto loc_8819FD1C;
	// lwz r11,3204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3204);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819F794;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8819F794:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8819fc90
	if (ctx.cr6.eq) goto loc_8819FC90;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r5,1856(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1856);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819F7BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819fd1c
	if (!ctx.cr6.eq) goto loc_8819FD1C;
	// lwz r11,3204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3204);
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8819fc7c
	goto loc_8819FC7C;
loc_8819F7D0:
	// cmpwi cr6,r14,2
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 2, ctx.xer);
	// bne cr6,0x8819f9c4
	if (!ctx.cr6.eq) goto loc_8819F9C4;
	// lwz r25,1768(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x88052d90
	ctx.lr = 0x8819F7F4;
	sub_88052D90(ctx, base);
	// lwz r11,3408(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8819f898
	if (ctx.cr6.eq) goto loc_8819F898;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x8819f884
	if (!ctx.cr6.eq) goto loc_8819F884;
	// lwz r11,364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8819f884
	if (!ctx.cr6.eq) goto loc_8819F884;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8819f844
	if (!ctx.cr0.lt) goto loc_8819F844;
	// bl 0x88156678
	ctx.lr = 0x8819F844;
	sub_88156678(ctx, base);
loc_8819F844:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x8819f92c
	if (!ctx.cr6.eq) goto loc_8819F92C;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8819f874
	if (!ctx.cr0.lt) goto loc_8819F874;
	// bl 0x88156678
	ctx.lr = 0x8819F874;
	sub_88156678(ctx, base);
loc_8819F874:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x8819f928
	if (!ctx.cr6.eq) goto loc_8819F928;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x8819f92c
	goto loc_8819F92C;
loc_8819F884:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r29,r15,0,30,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0x2;
	// clrlwi r28,r15,31
	ctx.r28.u64 = ctx.r15.u32 & 0x1;
	// stb r15,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r15.u8);
	// b 0x8819f93c
	goto loc_8819F93C;
loc_8819F898:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8819f8c0
	if (ctx.cr6.eq) goto loc_8819F8C0;
	// lwz r11,364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r9,12,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x3;
	// stbx r8,r27,r10
	REX_STORE_U8(ctx.r27.u32 + ctx.r10.u32, ctx.r8.u8);
	// rlwinm r29,r8,0,30,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// clrlwi r28,r8,31
	ctx.r28.u64 = ctx.r8.u32 & 0x1;
	// b 0x8819f93c
	goto loc_8819F93C;
loc_8819F8C0:
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8819f8e8
	if (!ctx.cr0.lt) goto loc_8819F8E8;
	// bl 0x88156678
	ctx.lr = 0x8819F8E8;
	sub_88156678(ctx, base);
loc_8819F8E8:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x8819f92c
	if (!ctx.cr6.eq) goto loc_8819F92C;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8819f918
	if (!ctx.cr0.lt) goto loc_8819F918;
	// bl 0x88156678
	ctx.lr = 0x8819F918;
	sub_88156678(ctx, base);
loc_8819F918:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x8819f928
	if (!ctx.cr6.eq) goto loc_8819F928;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x8819f92c
	goto loc_8819F92C;
loc_8819F928:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8819F92C:
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// or r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 | ctx.r28.u64;
	// stb r9,5(r10)
	REX_STORE_U8(ctx.r10.u32 + 5, ctx.r9.u8);
loc_8819F93C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8819f988
	if (ctx.cr6.eq) goto loc_8819F988;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r5,1860(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1860);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819F964;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819fd1c
	if (!ctx.cr6.eq) goto loc_8819FD1C;
	// lwz r11,3208(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3208);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819F988;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8819F988:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8819fc90
	if (ctx.cr6.eq) goto loc_8819FC90;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r5,1860(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1860);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819F9B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819fd1c
	if (!ctx.cr6.eq) goto loc_8819FD1C;
	// lwz r11,3208(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3208);
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8819fc7c
	goto loc_8819FC7C;
loc_8819F9C4:
	// cmpwi cr6,r14,4
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 4, ctx.xer);
	// bne cr6,0x8819fc90
	if (!ctx.cr6.eq) goto loc_8819FC90;
	// lwz r25,1768(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88052d90
	ctx.lr = 0x8819F9E0;
	sub_88052D90(ctx, base);
	// lwz r11,2480(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2480);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r30,84(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// bne cr6,0x8819fa00
	if (!ctx.cr6.eq) goto loc_8819FA00;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// stw r11,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// b 0x8819fb34
	goto loc_8819FB34;
loc_8819FA00:
	// lbz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// extsh r29,r5
	ctx.r29.s64 = ctx.r5.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8819faec
	if (ctx.cr6.lt) goto loc_8819FAEC;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi r9,r29,28
	ctx.r9.u64 = ctx.r29.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// bge cr6,0x8819fae4
	if (!ctx.cr6.lt) goto loc_8819FAE4;
loc_8819FA4C:
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8819fa78
	if (ctx.cr6.lt) goto loc_8819FA78;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156440
	ctx.lr = 0x8819FA68;
	sub_88156440(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8819fa4c
	if (ctx.cr6.eq) goto loc_8819FA4C;
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x8819fb2c
	goto loc_8819FB2C;
loc_8819FA78:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r5,r10,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r3,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// neg r4,r10
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r5,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rldicr r11,r7,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sld r11,r6,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r3.u8 & 0x7F));
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r5,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r5.u64);
loc_8819FAE4:
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x8819fb2c
	goto loc_8819FB2C;
loc_8819FAEC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156500
	ctx.lr = 0x8819FAF4;
	sub_88156500(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r27,r11,32768
	ctx.r27.u64 = ctx.r11.u64 | 32768;
loc_8819FAFC:
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x88156500
	ctx.lr = 0x8819FB14;
	sub_88156500(ctx, base);
	// add r10,r29,r27
	ctx.r10.u64 = ctx.r29.u64 + ctx.r27.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r29,r8
	ctx.r29.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8819fafc
	if (ctx.cr6.lt) goto loc_8819FAFC;
loc_8819FB2C:
	// lwz r18,116(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r17,120(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
loc_8819FB34:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// addi r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 1;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8819e80c
	if (!ctx.cr6.eq) goto loc_8819E80C;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r9,r30,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r30,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r30.u8);
	// beq cr6,0x8819fba0
	if (ctx.cr6.eq) goto loc_8819FBA0;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,1864(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1864);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819FB7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819fd1c
	if (!ctx.cr6.eq) goto loc_8819FD1C;
	// lwz r11,3212(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3212);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819FBA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8819FBA0:
	// rlwinm r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8819fbf0
	if (ctx.cr6.eq) goto loc_8819FBF0;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,1864(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1864);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819FBCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819fd1c
	if (!ctx.cr6.eq) goto loc_8819FD1C;
	// lwz r11,3212(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3212);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819FBF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8819FBF0:
	// rlwinm r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8819fc40
	if (ctx.cr6.eq) goto loc_8819FC40;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,1864(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1864);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819FC1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819fd1c
	if (!ctx.cr6.eq) goto loc_8819FD1C;
	// lwz r11,3212(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3212);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819FC40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8819FC40:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8819fc90
	if (ctx.cr6.eq) goto loc_8819FC90;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,1864(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1864);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819FC6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819fd1c
	if (!ctx.cr6.eq) goto loc_8819FD1C;
	// lwz r11,3212(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3212);
	// li r6,3
	ctx.r6.s64 = 3;
loc_8819FC7C:
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// li r4,8
	ctx.r4.s64 = 8;
loc_8819FC84:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819FC90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8819FC90:
	// lis r11,-30696
	ctx.r11.s64 = -2011693056;
	// lwz r10,3200(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3200);
	// addi r9,r11,11312
	ctx.r9.s64 = ctx.r11.s64 + 11312;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8819fcc4
	if (!ctx.cr6.eq) goto loc_8819FCC4;
	// li r9,64
	ctx.r9.s64 = 64;
	// addi r10,r25,-2
	ctx.r10.s64 = ctx.r25.s64 + -2;
	// addi r11,r25,-4
	ctx.r11.s64 = ctx.r25.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8819FCB4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8819fcb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819FCB4;
loc_8819FCC4:
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r7,404(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r6,396(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,388(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// bl 0x8819c090
	ctx.lr = 0x8819FCE0;
	sub_8819C090(ctx, base);
	// b 0x8819fd04
	goto loc_8819FD04;
loc_8819FCE4:
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r4,388(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8819c090
	ctx.lr = 0x8819FD00;
	sub_8819C090(ctx, base);
	// stb r19,13(r21)
	REX_STORE_U8(ctx.r21.u32 + 13, ctx.r19.u8);
loc_8819FD04:
	// lwz r11,364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,124(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r10,31,0,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x80000000) | (ctx.r9.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_8819FD1C:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881EC660) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// bge cr6,0x881ec6bc
	if (!ctx.cr6.lt) goto loc_881EC6BC;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,1152(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1152);
	// bl 0x882437c0
	ctx.lr = 0x881EC690;
	__imp__ObReferenceObjectByHandle(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x881ec6ec
	if (ctx.cr0.lt) goto loc_881EC6EC;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// slw r4,r11,r30
	ctx.r4.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// bl 0x882437e0
	ctx.lr = 0x881EC6AC;
	__imp__KeSetAffinityThread(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x882437b0
	ctx.lr = 0x881EC6B8;
	__imp__ObDereferenceObject(ctx, base);
	// b 0x881ec6c4
	goto loc_881EC6C4;
loc_881EC6BC:
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,13
	ctx.r31.u64 = ctx.r31.u64 | 13;
loc_881EC6C4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x881ec6ec
	if (ctx.cr6.lt) goto loc_881EC6EC;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881ec6e4
	if (ctx.cr6.eq) goto loc_881EC6E4;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r3,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r3.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// b 0x881ec6f8
	goto loc_881EC6F8;
loc_881EC6E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x881ec6f8
	goto loc_881EC6F8;
loc_881EC6EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881ed560
	ctx.lr = 0x881EC6F4;
	sub_881ED560(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_881EC6F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881ED210) {
	REX_FUNC_PROLOGUE();
	// b 0x88243870
	__imp__MmQueryAddressProtect(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881ED218) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lwz r11,1208(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1208);
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881ED470) {
	REX_FUNC_PROLOGUE();
	// lwz r11,336(r13)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,256(r13)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 256);
	// stw r3,352(r11)
	REX_STORE_U32(ctx.r11.u32 + 352, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881ED488) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x882436f0
	ctx.lr = 0x881ED498;
	__imp__RtlNtStatusToDosError(ctx, base);
	// lwz r11,336(r13)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881ed4ac
	if (!ctx.cr6.eq) goto loc_881ED4AC;
	// lwz r11,256(r13)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 256);
	// stw r3,352(r11)
	REX_STORE_U32(ctx.r11.u32 + 352, ctx.r3.u32);
loc_881ED4AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881ED650) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r6,16
	ctx.r6.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r10,80
	ctx.r10.s64 = 80;
	// li r11,96
	ctx.r11.s64 = 96;
	// li r12,112
	ctx.r12.s64 = 112;
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// blt cr6,0x881ed918
	if (ctx.cr6.lt) goto loc_881ED918;
loc_881ED674:
	// addi r0,r5,-1024
	ctx.r0.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r0,1024
	ctx.cr6.compare<uint32_t>(ctx.r0.u32, 1024, ctx.xer);
	// blt cr6,0x881ed684
	if (ctx.cr6.lt) goto loc_881ED684;
	// li r0,1024
	ctx.r0.s64 = 1024;
loc_881ED684:
	// lvx128 v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v4,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v9,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v14,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v15,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v16,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v17,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v18,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v19,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v20,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v21,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v22,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v23,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v24,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v25,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v26,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v27,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v28,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v29,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v30,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v31,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v32,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v33,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v34,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v35,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v36,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v37,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v39,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v40,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v41,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v42,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v43,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v44,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v45,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v47,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v48,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v49,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v51,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v57,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// stvlx128 v1,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// stvlx128 v8,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v9,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx128 v10,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// stvlx128 v11,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v11.u8[15 - i]);
	// stvlx128 v12,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// stvlx128 v13,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvlx128 v14,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v14.u8[15 - i]);
	// stvlx128 v15,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v15.u8[15 - i]);
	// stvlx128 v16,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v16.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v17,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v17.u8[15 - i]);
	// stvlx128 v18,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v18.u8[15 - i]);
	// stvlx128 v19,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v19.u8[15 - i]);
	// stvlx128 v20,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v20.u8[15 - i]);
	// stvlx128 v21,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v21.u8[15 - i]);
	// stvlx128 v22,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v22.u8[15 - i]);
	// stvlx128 v23,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v23.u8[15 - i]);
	// stvlx128 v24,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v24.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v25,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v25.u8[15 - i]);
	// stvlx128 v26,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v26.u8[15 - i]);
	// stvlx128 v27,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v27.u8[15 - i]);
	// stvlx128 v28,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v28.u8[15 - i]);
	// stvlx128 v29,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v29.u8[15 - i]);
	// stvlx128 v30,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v30.u8[15 - i]);
	// stvlx128 v31,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v31.u8[15 - i]);
	// stvlx128 v32,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v32.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v33,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v33.u8[15 - i]);
	// stvlx128 v34,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v34.u8[15 - i]);
	// stvlx128 v35,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v35.u8[15 - i]);
	// stvlx128 v36,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v36.u8[15 - i]);
	// stvlx128 v37,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v37.u8[15 - i]);
	// stvlx128 v38,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v38.u8[15 - i]);
	// stvlx128 v39,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v39.u8[15 - i]);
	// stvlx128 v40,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v40.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v41,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v41.u8[15 - i]);
	// stvlx128 v42,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v42.u8[15 - i]);
	// stvlx128 v43,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v43.u8[15 - i]);
	// stvlx128 v44,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v44.u8[15 - i]);
	// stvlx128 v45,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v45.u8[15 - i]);
	// stvlx128 v46,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v46.u8[15 - i]);
	// stvlx128 v47,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v47.u8[15 - i]);
	// stvlx128 v48,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v49,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v49.u8[15 - i]);
	// stvlx128 v50,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v50.u8[15 - i]);
	// stvlx128 v51,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// stvlx128 v52,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// stvlx128 v53,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v53.u8[15 - i]);
	// stvlx128 v54,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// stvlx128 v55,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v55.u8[15 - i]);
	// stvlx128 v56,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v56.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v57,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v57.u8[15 - i]);
	// stvlx128 v58,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// stvlx128 v59,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvlx128 v60,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvlx128 v61,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvlx128 v62,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvlx128 v63,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvlx128 v0,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-1024
	ctx.r5.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// bge cr6,0x881ed674
	if (!ctx.cr6.lt) goto loc_881ED674;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_881ED918:
	// lvx128 v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v4,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// stvlx128 v1,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// stvlx128 v8,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bgt cr6,0x881ed918
	if (ctx.cr6.gt) goto loc_881ED918;
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_105) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v105.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v106.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v107.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v108.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v109.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v110.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v111.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v112.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v113.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v114.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v115.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v116.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v117.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v118.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v119.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v120.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v121.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v122.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v123.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v124.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v125.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_120) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v120.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v121.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v122.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v123.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v124.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v125.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(__restvmx_25) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx v25,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx v26,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx v27,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx v28,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx v29,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx v30,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx v31,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(__restvmx_73) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-880
	ctx.r11.s64 = -880;
	// lvx128 v73,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v73.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-864
	ctx.r11.s64 = -864;
	// lvx128 v74,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v74.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-848
	ctx.r11.s64 = -848;
	// lvx128 v75,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v75.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-832
	ctx.r11.s64 = -832;
	// lvx128 v76,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v76.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-816
	ctx.r11.s64 = -816;
	// lvx128 v77,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v77.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-800
	ctx.r11.s64 = -800;
	// lvx128 v78,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v78.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-784
	ctx.r11.s64 = -784;
	// lvx128 v79,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v79.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-768
	ctx.r11.s64 = -768;
	// lvx128 v80,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v80.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-752
	ctx.r11.s64 = -752;
	// lvx128 v81,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v81.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-736
	ctx.r11.s64 = -736;
	// lvx128 v82,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v82.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-720
	ctx.r11.s64 = -720;
	// lvx128 v83,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v83.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-704
	ctx.r11.s64 = -704;
	// lvx128 v84,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v84.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-688
	ctx.r11.s64 = -688;
	// lvx128 v85,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v85.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-672
	ctx.r11.s64 = -672;
	// lvx128 v86,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v86.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-656
	ctx.r11.s64 = -656;
	// lvx128 v87,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v87.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-640
	ctx.r11.s64 = -640;
	// lvx128 v88,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v88.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-624
	ctx.r11.s64 = -624;
	// lvx128 v89,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v89.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-608
	ctx.r11.s64 = -608;
	// lvx128 v90,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v90.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-592
	ctx.r11.s64 = -592;
	// lvx128 v91,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v91.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-576
	ctx.r11.s64 = -576;
	// lvx128 v92,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v92.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v93.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v94.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v95.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v96.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v97.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v98.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v99.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v100.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v101.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// lvx128 v102,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v102.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// lvx128 v103,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v103.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// lvx128 v104,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v104.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// lvx128 v105,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v105.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// lvx128 v106,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v106.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// lvx128 v107,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v107.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// lvx128 v108,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v108.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// lvx128 v109,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v109.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// lvx128 v110,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v110.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx128 v111,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v111.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx128 v112,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v112.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx128 v113,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v113.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v114.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v115.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v116.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v117.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v118.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(__restvmx_107) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-336
	ctx.r11.s64 = -336;
	// lvx128 v107,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v107.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// lvx128 v108,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v108.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// lvx128 v109,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v109.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// lvx128 v110,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v110.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx128 v111,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v111.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx128 v112,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v112.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx128 v113,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v113.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v114.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v115.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v116.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v117.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v118.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(__savefpr_15) {
	REX_FUNC_PROLOGUE();
	// stfd f15,-136(r12)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r12.u32 + -136, ctx.f15.u64);
	// stfd f16,-128(r12)
	REX_STORE_U64(ctx.r12.u32 + -128, ctx.f16.u64);
	// stfd f17,-120(r12)
	REX_STORE_U64(ctx.r12.u32 + -120, ctx.f17.u64);
	// stfd f18,-112(r12)
	REX_STORE_U64(ctx.r12.u32 + -112, ctx.f18.u64);
	// stfd f19,-104(r12)
	REX_STORE_U64(ctx.r12.u32 + -104, ctx.f19.u64);
	// stfd f20,-96(r12)
	REX_STORE_U64(ctx.r12.u32 + -96, ctx.f20.u64);
	// stfd f21,-88(r12)
	REX_STORE_U64(ctx.r12.u32 + -88, ctx.f21.u64);
	// stfd f22,-80(r12)
	REX_STORE_U64(ctx.r12.u32 + -80, ctx.f22.u64);
	// stfd f23,-72(r12)
	REX_STORE_U64(ctx.r12.u32 + -72, ctx.f23.u64);
	// stfd f24,-64(r12)
	REX_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	REX_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	REX_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	REX_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	REX_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	REX_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	REX_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	REX_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881EF4A8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r3,r11,15456
	ctx.r3.s64 = ctx.r11.s64 + 15456;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881EF7B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,32752
	ctx.r10.s64 = 2146435072;
	// stfd f2,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.f2.u64);
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// stfd f1,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f1.u64);
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// lis r9,-16
	ctx.r9.s64 = -1048576;
	// fabs f0,f1
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x881ef840
	if (!ctx.cr6.eq) goto loc_881EF840;
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881ef87c
	if (!ctx.cr6.eq) goto loc_881EF87C;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f13,8624(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 8624);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x881ef824
	if (!ctx.cr6.gt) goto loc_881EF824;
loc_881EF818:
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lfd f0,16672(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 16672);
	// b 0x881ef91c
	goto loc_881EF91C;
loc_881EF824:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x881ef838
	if (!ctx.cr6.lt) goto loc_881EF838;
loc_881EF82C:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f0,1488(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 1488);
	// b 0x881ef91c
	goto loc_881EF91C;
loc_881EF838:
	// stfd f13,0(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.f13.u64);
	// b 0x881ef920
	goto loc_881EF920;
loc_881EF840:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x881ef87c
	if (!ctx.cr6.eq) goto loc_881EF87C;
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881ef87c
	if (!ctx.cr6.eq) goto loc_881EF87C;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f13,8624(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 8624);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x881ef82c
	if (ctx.cr6.gt) goto loc_881EF82C;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x881ef818
	if (ctx.cr6.lt) goto loc_881EF818;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// li r30,1
	ctx.r30.s64 = 1;
	// lfd f0,16680(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 16680);
	// b 0x881ef91c
	goto loc_881EF91C;
loc_881EF87C:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x881ef8b4
	if (!ctx.cr6.eq) goto loc_881EF8B4;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881ef920
	if (!ctx.cr6.eq) goto loc_881EF920;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f0,1488(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 1488);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x881ef818
	if (ctx.cr6.gt) goto loc_881EF818;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f13,8624(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 8624);
	// fsel f0,f31,f13,f0
	ctx.f0.f64 = ctx.f31.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// b 0x881ef91c
	goto loc_881EF91C;
loc_881EF8B4:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x881ef920
	if (!ctx.cr6.eq) goto loc_881EF920;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881ef920
	if (!ctx.cr6.eq) goto loc_881EF920;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x881ef748
	ctx.lr = 0x881EF8D0;
	sub_881EF748(ctx, base);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f0,1488(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 1488);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x881ef8f8
	if (!ctx.cr6.gt) goto loc_881EF8F8;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lfd f0,16672(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 16672);
	// bne cr6,0x881ef91c
	if (!ctx.cr6.eq) goto loc_881EF91C;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x881ef91c
	goto loc_881EF91C;
loc_881EF8F8:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x881ef914
	if (!ctx.cr6.lt) goto loc_881EF914;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x881ef91c
	if (!ctx.cr6.eq) goto loc_881EF91C;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lfd f0,16704(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 16704);
	// b 0x881ef91c
	goto loc_881EF91C;
loc_881EF914:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f0,8624(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 8624);
loc_881EF91C:
	// stfd f0,0(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.f0.u64);
loc_881EF920:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881FC190) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x881FC198;
	__savegprlr_28(ctx, base);
	// stwu r1,-1664(r1)
	ea = -1664 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,15984
	ctx.r30.s64 = ctx.r3.s64 + 15984;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x88207de0
	ctx.lr = 0x881FC1AC;
	sub_88207DE0(ctx, base);
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// addi r28,r31,22432
	ctx.r28.s64 = ctx.r31.s64 + 22432;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,24352(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24352);
	// bl 0x881fc868
	ctx.lr = 0x881FC1C0;
	sub_881FC868(ctx, base);
	// addi r29,r30,1408
	ctx.r29.s64 = ctx.r30.s64 + 1408;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88207eb8
	ctx.lr = 0x881FC1D4;
	sub_88207EB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881fc2c8
	if (!ctx.cr6.eq) goto loc_881FC2C8;
	// lhz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 52);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88242388
	ctx.lr = 0x881FC1FC;
	sub_88242388(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881fc2c8
	if (!ctx.cr6.eq) goto loc_881FC2C8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8822ece0
	ctx.lr = 0x881FC214;
	sub_8822ECE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881fc2c8
	if (!ctx.cr6.eq) goto loc_881FC2C8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x882171f8
	ctx.lr = 0x881FC22C;
	sub_882171F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881fc2c8
	if (!ctx.cr6.eq) goto loc_881FC2C8;
	// lwz r11,3948(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881fc2a4
	if (ctx.cr6.eq) goto loc_881FC2A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,272(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// bl 0x8822b460
	ctx.lr = 0x881FC24C;
	sub_8822B460(ctx, base);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r9,3784(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,3780(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,3776(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r9,220(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x8822b588
	ctx.lr = 0x881FC278;
	sub_8822B588(ctx, base);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r9,3784(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r8,3780(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,3776(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r9,220(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x8822b588
	ctx.lr = 0x881FC2A4;
	sub_8822B588(ctx, base);
loc_881FC2A4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881fcbb0
	ctx.lr = 0x881FC2B0;
	sub_881FCBB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,15624(r31)
	REX_STORE_U32(ctx.r31.u32 + 15624, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,15628(r31)
	REX_STORE_U32(ctx.r31.u32 + 15628, ctx.r10.u32);
	// stw r11,15600(r31)
	REX_STORE_U32(ctx.r31.u32 + 15600, ctx.r11.u32);
loc_881FC2C8:
	// addi r1,r1,1664
	ctx.r1.s64 = ctx.r1.s64 + 1664;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88204E38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88204E40;
	__savegprlr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r25,50(r3)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r3.u32 + 50);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r26,0(r7)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// lwz r27,348(r3)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 348);
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// stw r5,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r5.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// li r20,0
	ctx.r20.s64 = 0;
	// srawi r22,r25,1
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1) != 0);
	ctx.r22.s64 = ctx.r25.s32 >> 1;
	// beq cr6,0x88204e88
	if (ctx.cr6.eq) goto loc_88204E88;
	// lwz r11,1304(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1304);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r16,r20
	ctx.r16.u64 = ctx.r20.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88204e8c
	if (ctx.cr6.eq) goto loc_88204E8C;
loc_88204E88:
	// li r16,1
	ctx.r16.s64 = 1;
loc_88204E8C:
	// lwz r11,340(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 340);
	// lhz r24,62(r21)
	ctx.r24.u64 = REX_LOAD_U16(ctx.r21.u32 + 62);
	// lhz r19,66(r21)
	ctx.r19.u64 = REX_LOAD_U16(ctx.r21.u32 + 66);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lhz r23,64(r21)
	ctx.r23.u64 = REX_LOAD_U16(ctx.r21.u32 + 64);
	// lhz r18,68(r21)
	ctx.r18.u64 = REX_LOAD_U16(ctx.r21.u32 + 68);
	// lwz r31,0(r21)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// bne cr6,0x88204ebc
	if (!ctx.cr6.eq) goto loc_88204EBC;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x88204fe8
	goto loc_88204FE8;
loc_88204EBC:
	// lbz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// extsh r30,r5
	ctx.r30.s64 = ctx.r5.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88204fa8
	if (ctx.cr6.lt) goto loc_88204FA8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x88204fa0
	if (!ctx.cr6.lt) goto loc_88204FA0;
loc_88204F08:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x88204f34
	if (ctx.cr6.lt) goto loc_88204F34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x88204F24;
	sub_88156440(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x88204f08
	if (ctx.cr6.eq) goto loc_88204F08;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x88204fe8
	goto loc_88204FE8;
loc_88204F34:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r5,5(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// sld r11,r8,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r3.u8 & 0x7F));
	// add r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64;
	// std r7,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
loc_88204FA0:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x88204fe8
	goto loc_88204FE8;
loc_88204FA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x88204FB0;
	sub_88156500(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,32768
	ctx.r29.u64 = ctx.r11.u64 | 32768;
loc_88204FB8:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x88156500
	ctx.lr = 0x88204FD0;
	sub_88156500(ctx, base);
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88204fb8
	if (ctx.cr6.lt) goto loc_88204FB8;
loc_88204FE8:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88205004
	if (ctx.cr6.eq) goto loc_88205004;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88205004:
	// rlwinm r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88205020
	if (ctx.cr6.eq) goto loc_88205020;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,336(r21)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r21.u32 + 336);
	// bl 0x88202e58
	ctx.lr = 0x88205020;
	sub_88202E58(ctx, base);
loc_88205020:
	// stw r20,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r20.u32);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r20,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// stw r20,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r20.u32);
	// beq cr6,0x8820505c
	if (ctx.cr6.eq) goto loc_8820505C;
	// lwz r11,-24(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + -24);
	// rlwinm r9,r11,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8820505c
	if (ctx.cr6.eq) goto loc_8820505C;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
loc_8820505C:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// bne cr6,0x88205138
	if (!ctx.cr6.eq) goto loc_88205138;
	// rlwinm r9,r22,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r25,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r25.u64;
	// add r9,r22,r9
	ctx.r9.u64 = ctx.r22.u64 + ctx.r9.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r8,r8,r17
	ctx.r8.u64 = ctx.r17.u64 - ctx.r8.u64;
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r7,r9,0,14,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x882050c4
	if (ctx.cr6.eq) goto loc_882050C4;
	// rlwinm r9,r9,0,21,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x700;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r9,512
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 512, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bge cr6,0x882050b0
	if (!ctx.cr6.lt) goto loc_882050B0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lwzx r5,r9,r27
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// stwx r5,r7,r6
	REX_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r5.u32);
	// b 0x882050c4
	goto loc_882050C4;
loc_882050B0:
	// subf r9,r25,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r25.u64;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r6,r27
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// stwx r4,r7,r5
	REX_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r4.u32);
loc_882050C4:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// beq cr6,0x88205138
	if (ctx.cr6.eq) goto loc_88205138;
	// addi r9,r22,-1
	ctx.r9.s64 = ctx.r22.s64 + -1;
	// cmpw cr6,r15,r9
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x882050e4
	if (ctx.cr6.eq) goto loc_882050E4;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r9,r8,24
	ctx.r9.s64 = ctx.r8.s64 + 24;
	// b 0x882050ec
	goto loc_882050EC;
loc_882050E4:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r8,-24
	ctx.r9.s64 = ctx.r8.s64 + -24;
loc_882050EC:
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r9,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x88205138
	if (ctx.cr6.eq) goto loc_88205138;
	// rlwinm r9,r9,0,21,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r9,512
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 512, ctx.xer);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bge cr6,0x88205124
	if (!ctx.cr6.lt) goto loc_88205124;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// lwzx r7,r11,r27
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// stwx r7,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u32);
	// b 0x88205138
	goto loc_88205138;
loc_88205124:
	// subf r11,r25,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r25.u64;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r27
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	// stwx r6,r9,r7
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r6.u32);
loc_88205138:
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88205268
	if (!ctx.cr6.gt) goto loc_88205268;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
loc_8820515C:
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r4,r5,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8820517c
	if (ctx.cr6.eq) goto loc_8820517C;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stwu r5,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
	// b 0x88205184
	goto loc_88205184;
loc_8820517C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwu r5,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r8.u32 = ea;
loc_88205184:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8820515c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8820515C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88205268
	if (!ctx.cr6.gt) goto loc_88205268;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x882051c4
	if (ctx.cr6.eq) goto loc_882051C4;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x882051c4
	if (ctx.cr6.eq) goto loc_882051C4;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x882051b8
	if (ctx.cr6.lt) goto loc_882051B8;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8820526c
	goto loc_8820526C;
loc_882051B8:
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8820526c
	goto loc_8820526C;
loc_882051C4:
	// lhz r11,114(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 114);
	// lhz r10,110(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// lhz r9,106(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 106);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lhz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lhz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// extsh r31,r9
	ctx.r31.s64 = ctx.r9.s16;
	// lhz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 108);
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// subf r11,r31,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r31.u64;
	// subf r10,r7,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r9,r31,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r31.u64;
	// subf r8,r29,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r29.u64;
	// subf r28,r6,r4
	ctx.r28.u64 = ctx.r4.u64 - ctx.r6.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r14,r29,r6
	ctx.r14.u64 = ctx.r6.u64 - ctx.r29.u64;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r28,r28,r8
	ctx.r28.u64 = ctx.r28.u64 ^ ctx.r8.u64;
	// srawi r11,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 31;
	// xor r8,r14,r8
	ctx.r8.u64 = ctx.r14.u64 ^ ctx.r8.u64;
	// srawi r10,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 31;
	// srawi r9,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 31;
	// srawi r8,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 31;
	// or r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r14,r9,r8
	ctx.r14.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 & ctx.r31.u64;
	// andc r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r28.u64;
	// and r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 & ctx.r29.u64;
	// andc r6,r6,r14
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r14.u64;
	// or r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 | ctx.r10.u64;
	// and r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 & ctx.r5.u64;
	// and r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 & ctx.r4.u64;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r9,r7,r5
	ctx.r9.u64 = ctx.r7.u64 | ctx.r5.u64;
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r9,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// sth r8,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// b 0x8820526c
	goto loc_8820526C;
loc_88205268:
	// stw r20,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
loc_8820526C:
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// srawi r9,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 16;
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// rlwinm r8,r30,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r7,r11,r24
	ctx.r7.u64 = ctx.r11.u64 + ctx.r24.u64;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + ctx.r23.u64;
	// and r5,r7,r19
	ctx.r5.u64 = ctx.r7.u64 & ctx.r19.u64;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// and r4,r6,r18
	ctx.r4.u64 = ctx.r6.u64 & ctx.r18.u64;
	// subf r3,r24,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r24.u64;
	// subf r10,r23,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r23.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sth r3,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r3.u16);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// sthx r10,r11,r27
	REX_STORE_U16(ctx.r11.u32 + ctx.r27.u32, ctx.r10.u16);
	// beq cr6,0x882052cc
	if (ctx.cr6.eq) goto loc_882052CC;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,336(r21)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r21.u32 + 336);
	// bl 0x88202e58
	ctx.lr = 0x882052CC;
	sub_88202E58(ctx, base);
loc_882052CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r20,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r20.u32);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// stw r20,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bne cr6,0x882053b4
	if (!ctx.cr6.eq) goto loc_882053B4;
	// rlwinm r11,r22,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r25,r26
	ctx.r10.u64 = ctx.r26.u64 - ctx.r25.u64;
	// add r9,r22,r11
	ctx.r9.u64 = ctx.r22.u64 + ctx.r11.u64;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r7,r17
	ctx.r9.u64 = ctx.r17.u64 - ctx.r7.u64;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r6,r10,0,14,14
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x88205340
	if (ctx.cr6.eq) goto loc_88205340;
	// rlwinm r10,r10,0,21,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x700;
	// li r8,2
	ctx.r8.s64 = 2;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bge cr6,0x88205330
	if (!ctx.cr6.lt) goto loc_88205330;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r27
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// b 0x88205340
	goto loc_88205340;
loc_88205330:
	// subf r10,r25,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r25.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r27
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// stw r6,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
loc_88205340:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// beq cr6,0x882053b4
	if (ctx.cr6.eq) goto loc_882053B4;
	// addi r10,r22,-1
	ctx.r10.s64 = ctx.r22.s64 + -1;
	// cmpw cr6,r15,r10
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x88205360
	if (ctx.cr6.eq) goto loc_88205360;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r9,24
	ctx.r10.s64 = ctx.r9.s64 + 24;
	// b 0x88205368
	goto loc_88205368;
loc_88205360:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r10,r9,-24
	ctx.r10.s64 = ctx.r9.s64 + -24;
loc_88205368:
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r10,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x882053b4
	if (ctx.cr6.eq) goto loc_882053B4;
	// rlwinm r10,r10,0,21,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bge cr6,0x882053a0
	if (!ctx.cr6.lt) goto loc_882053A0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// lwzx r7,r11,r27
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// stwx r7,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u32);
	// b 0x882053b4
	goto loc_882053B4;
loc_882053A0:
	// subf r11,r25,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r25.u64;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r27
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// stwx r6,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r6.u32);
loc_882053B4:
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x882054f0
	if (!ctx.cr6.gt) goto loc_882054F0;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
loc_882053D8:
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r4,r5,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x882053f8
	if (ctx.cr6.eq) goto loc_882053F8;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// b 0x88205400
	goto loc_88205400;
loc_882053F8:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwu r5,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
loc_88205400:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x882053d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_882053D8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x882054f0
	if (!ctx.cr6.gt) goto loc_882054F0;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x88205440
	if (ctx.cr6.eq) goto loc_88205440;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x88205440
	if (ctx.cr6.eq) goto loc_88205440;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x88205434
	if (ctx.cr6.lt) goto loc_88205434;
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x882054f4
	goto loc_882054F4;
loc_88205434:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x882054f4
	goto loc_882054F4;
loc_88205440:
	// lhz r11,114(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 114);
	// lhz r10,110(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// lhz r9,106(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 106);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lhz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lhz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// extsh r29,r9
	ctx.r29.s64 = ctx.r9.s16;
	// lhz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 108);
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// std r3,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lwz r15,324(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// subf r11,r29,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r29.u64;
	// subf r10,r7,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r9,r29,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r29.u64;
	// subf r8,r28,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r28.u64;
	// subf r14,r6,r4
	ctx.r14.u64 = ctx.r4.u64 - ctx.r6.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r3,r28,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r28.u64;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r14,r14,r8
	ctx.r14.u64 = ctx.r14.u64 ^ ctx.r8.u64;
	// srawi r11,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 31;
	// xor r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 ^ ctx.r8.u64;
	// srawi r10,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 31;
	// srawi r9,r14,31
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r14.s32 >> 31;
	// srawi r8,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 31;
	// or r14,r11,r10
	ctx.r14.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 & ctx.r29.u64;
	// andc r7,r7,r14
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r14.u64;
	// andc r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r3.u64;
	// ld r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// and r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 & ctx.r28.u64;
	// or r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 | ctx.r10.u64;
	// and r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 & ctx.r5.u64;
	// and r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 & ctx.r4.u64;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r9,r7,r5
	ctx.r9.u64 = ctx.r7.u64 | ctx.r5.u64;
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r9,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// sth r8,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// b 0x882054f4
	goto loc_882054F4;
loc_882054F0:
	// stw r20,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
loc_882054F4:
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// srawi r9,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 16;
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// rlwinm r8,r30,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r7,r11,r24
	ctx.r7.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + ctx.r23.u64;
	// and r5,r7,r19
	ctx.r5.u64 = ctx.r7.u64 & ctx.r19.u64;
	// and r4,r6,r18
	ctx.r4.u64 = ctx.r6.u64 & ctx.r18.u64;
	// subf r3,r24,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r24.u64;
	// subf r11,r23,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r23.u64;
	// sth r3,6(r31)
	REX_STORE_U16(ctx.r31.u32 + 6, ctx.r3.u16);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// sth r11,4(r31)
	REX_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8820554c
	if (ctx.cr6.eq) goto loc_8820554C;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,336(r21)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r21.u32 + 336);
	// bl 0x88202e58
	ctx.lr = 0x8820554C;
	sub_88202E58(ctx, base);
loc_8820554C:
	// stw r20,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r20.u32);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// stw r20,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// stw r20,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r20.u32);
	// beq cr6,0x8820558c
	if (ctx.cr6.eq) goto loc_8820558C;
	// lwz r11,-24(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + -24);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8820558c
	if (ctx.cr6.eq) goto loc_8820558C;
	// add r11,r26,r25
	ctx.r11.u64 = ctx.r26.u64 + ctx.r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r9,-4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
loc_8820558C:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// bne cr6,0x88205620
	if (!ctx.cr6.eq) goto loc_88205620;
	// rlwinm r11,r22,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r25,r26
	ctx.r10.u64 = ctx.r26.u64 - ctx.r25.u64;
	// add r11,r22,r11
	ctx.r11.u64 = ctx.r22.u64 + ctx.r11.u64;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r9,r17
	ctx.r11.u64 = ctx.r17.u64 - ctx.r9.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r8,0,14,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x882055d0
	if (ctx.cr6.eq) goto loc_882055D0;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwzx r5,r9,r27
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// stwx r5,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r5.u32);
loc_882055D0:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// beq cr6,0x88205620
	if (ctx.cr6.eq) goto loc_88205620;
	// addi r9,r22,-1
	ctx.r9.s64 = ctx.r22.s64 + -1;
	// cmpw cr6,r15,r9
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x882055f0
	if (ctx.cr6.eq) goto loc_882055F0;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// b 0x882055f8
	goto loc_882055F8;
loc_882055F0:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
loc_882055F8:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r11,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88205620
	if (ctx.cr6.eq) goto loc_88205620;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwzx r8,r11,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
loc_88205620:
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x88205750
	if (!ctx.cr6.gt) goto loc_88205750;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
loc_88205644:
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r4,r5,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x88205664
	if (ctx.cr6.eq) goto loc_88205664;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// b 0x8820566c
	goto loc_8820566C;
loc_88205664:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwu r5,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
loc_8820566C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x88205644
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88205644;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x88205750
	if (!ctx.cr6.gt) goto loc_88205750;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x882056ac
	if (ctx.cr6.eq) goto loc_882056AC;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x882056ac
	if (ctx.cr6.eq) goto loc_882056AC;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x882056a0
	if (ctx.cr6.lt) goto loc_882056A0;
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x88205754
	goto loc_88205754;
loc_882056A0:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x88205754
	goto loc_88205754;
loc_882056AC:
	// lhz r11,114(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 114);
	// lhz r10,110(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// lhz r9,106(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 106);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lhz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lhz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// extsh r31,r9
	ctx.r31.s64 = ctx.r9.s16;
	// lhz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 108);
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// subf r11,r31,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r31.u64;
	// subf r10,r7,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r9,r31,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r31.u64;
	// subf r8,r29,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r29.u64;
	// subf r28,r6,r4
	ctx.r28.u64 = ctx.r4.u64 - ctx.r6.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r14,r29,r6
	ctx.r14.u64 = ctx.r6.u64 - ctx.r29.u64;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r28,r28,r8
	ctx.r28.u64 = ctx.r28.u64 ^ ctx.r8.u64;
	// srawi r11,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 31;
	// xor r8,r14,r8
	ctx.r8.u64 = ctx.r14.u64 ^ ctx.r8.u64;
	// srawi r10,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 31;
	// srawi r9,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 31;
	// srawi r8,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 31;
	// or r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r14,r9,r8
	ctx.r14.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 & ctx.r31.u64;
	// andc r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r28.u64;
	// and r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 & ctx.r29.u64;
	// andc r6,r6,r14
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r14.u64;
	// or r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 | ctx.r10.u64;
	// and r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 & ctx.r5.u64;
	// and r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 & ctx.r4.u64;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r9,r7,r5
	ctx.r9.u64 = ctx.r7.u64 | ctx.r5.u64;
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r9,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// sth r8,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// b 0x88205754
	goto loc_88205754;
loc_88205750:
	// stw r20,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
loc_88205754:
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// srawi r9,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 16;
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// add r31,r26,r25
	ctx.r31.u64 = ctx.r26.u64 + ctx.r25.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r11,r24
	ctx.r9.u64 = ctx.r11.u64 + ctx.r24.u64;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r23
	ctx.r8.u64 = ctx.r10.u64 + ctx.r23.u64;
	// and r7,r9,r19
	ctx.r7.u64 = ctx.r9.u64 & ctx.r19.u64;
	// and r6,r8,r18
	ctx.r6.u64 = ctx.r8.u64 & ctx.r18.u64;
	// add r29,r11,r27
	ctx.r29.u64 = ctx.r11.u64 + ctx.r27.u64;
	// subf r5,r24,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r24.u64;
	// subf r4,r23,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r23.u64;
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// sthx r4,r11,r27
	REX_STORE_U16(ctx.r11.u32 + ctx.r27.u32, ctx.r4.u16);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// sth r5,2(r29)
	REX_STORE_U16(ctx.r29.u32 + 2, ctx.r5.u16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x882057b8
	if (ctx.cr6.eq) goto loc_882057B8;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,336(r21)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r21.u32 + 336);
	// bl 0x88202e58
	ctx.lr = 0x882057B8;
	sub_88202E58(ctx, base);
loc_882057B8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r20,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r20.u32);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// stw r20,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bne cr6,0x88205860
	if (!ctx.cr6.eq) goto loc_88205860;
	// rlwinm r11,r22,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r22,r11
	ctx.r9.u64 = ctx.r22.u64 + ctx.r11.u64;
	// subf r11,r10,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r10.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// subf r11,r8,r17
	ctx.r11.u64 = ctx.r17.u64 - ctx.r8.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r7,0,14,14
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x88205810
	if (ctx.cr6.eq) goto loc_88205810;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwzx r8,r9,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
loc_88205810:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// beq cr6,0x88205860
	if (ctx.cr6.eq) goto loc_88205860;
	// addi r9,r22,-1
	ctx.r9.s64 = ctx.r22.s64 + -1;
	// cmpw cr6,r15,r9
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x88205830
	if (ctx.cr6.eq) goto loc_88205830;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// b 0x88205838
	goto loc_88205838;
loc_88205830:
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
loc_88205838:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r11,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88205860
	if (ctx.cr6.eq) goto loc_88205860;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwzx r8,r11,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
loc_88205860:
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x88205990
	if (!ctx.cr6.gt) goto loc_88205990;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
loc_88205884:
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r4,r5,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x882058a4
	if (ctx.cr6.eq) goto loc_882058A4;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// b 0x882058ac
	goto loc_882058AC;
loc_882058A4:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwu r5,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
loc_882058AC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x88205884
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88205884;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x88205990
	if (!ctx.cr6.gt) goto loc_88205990;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x882058ec
	if (ctx.cr6.eq) goto loc_882058EC;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x882058ec
	if (ctx.cr6.eq) goto loc_882058EC;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x882058e0
	if (ctx.cr6.lt) goto loc_882058E0;
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x88205994
	goto loc_88205994;
loc_882058E0:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x88205994
	goto loc_88205994;
loc_882058EC:
	// lhz r11,114(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 114);
	// lhz r10,110(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// lhz r9,106(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 106);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lhz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lhz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// extsh r31,r9
	ctx.r31.s64 = ctx.r9.s16;
	// lhz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 108);
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// subf r11,r31,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r31.u64;
	// subf r10,r7,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r9,r31,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r31.u64;
	// subf r8,r30,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r30.u64;
	// subf r28,r6,r4
	ctx.r28.u64 = ctx.r4.u64 - ctx.r6.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r27,r30,r6
	ctx.r27.u64 = ctx.r6.u64 - ctx.r30.u64;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r28,r28,r8
	ctx.r28.u64 = ctx.r28.u64 ^ ctx.r8.u64;
	// srawi r11,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 31;
	// xor r8,r27,r8
	ctx.r8.u64 = ctx.r27.u64 ^ ctx.r8.u64;
	// srawi r10,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 31;
	// srawi r9,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 31;
	// srawi r8,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 31;
	// or r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r27,r9,r8
	ctx.r27.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 & ctx.r31.u64;
	// andc r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r28.u64;
	// and r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 & ctx.r30.u64;
	// andc r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r27.u64;
	// or r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 | ctx.r10.u64;
	// and r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 & ctx.r5.u64;
	// and r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 & ctx.r4.u64;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r9,r7,r5
	ctx.r9.u64 = ctx.r7.u64 | ctx.r5.u64;
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r9,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// sth r8,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// b 0x88205994
	goto loc_88205994;
loc_88205990:
	// stw r20,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
loc_88205994:
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// srawi r9,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 16;
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r11,r24
	ctx.r9.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r8,r10,r23
	ctx.r8.u64 = ctx.r10.u64 + ctx.r23.u64;
	// and r7,r9,r19
	ctx.r7.u64 = ctx.r9.u64 & ctx.r19.u64;
	// and r6,r8,r18
	ctx.r6.u64 = ctx.r8.u64 & ctx.r18.u64;
	// subf r5,r24,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r24.u64;
	// subf r4,r23,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r23.u64;
	// sth r5,6(r29)
	REX_STORE_U16(ctx.r29.u32 + 6, ctx.r5.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r4,4(r29)
	REX_STORE_U16(ctx.r29.u32 + 4, ctx.r4.u16);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8821DCE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8821DCE8;
	__savegprlr_14(ctx, base);
	// stwu r1,-1024(r1)
	ea = -1024 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// stw r6,1068(r1)
	REX_STORE_U32(ctx.r1.u32 + 1068, ctx.r6.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r5,1060(r1)
	REX_STORE_U32(ctx.r1.u32 + 1060, ctx.r5.u32);
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// beq cr6,0x8821e190
	if (ctx.cr6.eq) goto loc_8821E190;
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// beq cr6,0x8821dfcc
	if (ctx.cr6.eq) goto loc_8821DFCC;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8821df5c
	if (!ctx.cr6.gt) goto loc_8821DF5C;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r14,-96
	ctx.r14.s64 = -96;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// li r4,-48
	ctx.r4.s64 = -48;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r6,96
	ctx.r6.s64 = 96;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r15,144
	ctx.r15.s64 = 144;
	// li r16,192
	ctx.r16.s64 = 192;
	// li r17,240
	ctx.r17.s64 = 240;
	// li r18,-80
	ctx.r18.s64 = -80;
	// li r19,-32
	ctx.r19.s64 = -32;
	// li r20,64
	ctx.r20.s64 = 64;
	// li r21,112
	ctx.r21.s64 = 112;
	// li r22,160
	ctx.r22.s64 = 160;
	// li r23,208
	ctx.r23.s64 = 208;
	// li r24,256
	ctx.r24.s64 = 256;
loc_8821DD84:
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r31,r9,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v61,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lvsl v7,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 + ctx.r8.u64;
	// lwz r28,84(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r30,r7,r9
	ctx.r30.u64 = ctx.r7.u64 + ctx.r9.u64;
	// vperm128 v5,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// add r26,r8,r9
	ctx.r26.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lvx128 v62,r8,r9
	ea = (ctx.r8.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r27,r31,r9
	ctx.r27.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r29,r30,r9
	ctx.r29.u64 = ctx.r30.u64 + ctx.r9.u64;
	// lvx128 v60,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v28,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r28,r28,r8
	ctx.r28.u64 = ctx.r28.u64 + ctx.r8.u64;
	// vmrglb v27,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r25,r29,r9
	ctx.r25.u64 = ctx.r29.u64 + ctx.r9.u64;
	// lvx128 v56,r26,r10
	ea = (ctx.r26.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r26
	temp.u32 = ctx.r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v59,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r7,r9
	ea = (ctx.r7.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v62,v56,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v57,r31,r9
	ea = (ctx.r31.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r27,r10
	ea = (ctx.r27.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v6,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v5,r0,r27
	temp.u32 = ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v4,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v11,v59,v55,v6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v3,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v10,v57,v54,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v9,v60,v53,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v51,r30,r9
	ea = (ctx.r30.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v58,v52,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvx128 v50,r29,r9
	ea = (ctx.r29.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v49,r29,r10
	ea = (ctx.r29.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v3,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v48,r25,r10
	ea = (ctx.r25.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v2,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v47,r28,r10
	ea = (ctx.r28.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v1,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v46,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v31,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v5,r0,r28
	temp.u32 = ctx.r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v30,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v7,r0,r29
	temp.u32 = ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrglb v12,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v6,r0,r25
	temp.u32 = ctx.r25.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v4,v46,v47,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v7,v51,v49,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vadduhm v23,v3,v28
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vperm128 v6,v50,v48,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vadduhm v26,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vmrglb v11,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v25,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmrghb v20,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v24,v31,v1
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vmrghb v29,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v22,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vmrghb v28,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v21,v12,v27
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v19,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrglb v14,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v16,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v18,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v17,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v15,v20,v28
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v12,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v5,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v2,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v1,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// stvx128 v16,r11,r14
	ea = (ctx.r11.u32 + ctx.r14.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v31,v8,v9
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// stvx128 v12,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v30,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// stvx128 v5,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v29,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// stvx128 v4,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v28,v14,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// stvx128 v3,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v27,v18,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// vslh v26,v17,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v19,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v15,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v27,r11,r15
	ea = (ctx.r11.u32 + ctx.r15.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v22,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v26,r11,r16
	ea = (ctx.r11.u32 + ctx.r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v21,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v24,r11,r18
	ea = (ctx.r11.u32 + ctx.r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v20,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v23,r11,r19
	ea = (ctx.r11.u32 + ctx.r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v19,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v25,r11,r17
	ea = (ctx.r11.u32 + ctx.r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v18,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v22,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v17,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v21,r11,r20
	ea = (ctx.r11.u32 + ctx.r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r11,r21
	ea = (ctx.r11.u32 + ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v19,r11,r22
	ea = (ctx.r11.u32 + ctx.r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v18,r11,r23
	ea = (ctx.r11.u32 + ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r11,r24
	ea = (ctx.r11.u32 + ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,384
	ctx.r11.s64 = ctx.r11.s64 + 384;
	// bdnz 0x8821dd84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8821DD84;
	// lwz r29,1068(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 1068);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8821DF5C:
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8821e250
	if (!ctx.cr6.gt) goto loc_8821E250;
	// addi r7,r6,-1
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r30,r10,r9
	ctx.r30.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// subf r8,r10,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r10.u64;
	// addi r9,r4,-48
	ctx.r9.s64 = ctx.r4.s64 + -48;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8821DF90:
	// lbzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lbzux r4,r8,r10
	ea = ctx.r8.u32 + ctx.r10.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lbz r31,0(r11)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// add r5,r31,r3
	ctx.r5.u64 = ctx.r31.u64 + ctx.r3.u64;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// sth r7,48(r9)
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r7.u16);
	// sthu r5,96(r9)
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r5.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x8821df90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8821DF90;
	// b 0x8821e250
	goto loc_8821E250;
loc_8821DFCC:
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v45,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v44,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r30,r3,r9
	ctx.r30.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lvx128 v43,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lvsl v2,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v6,v45,v43,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v42,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lvx128 v41,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v30,v44,v38,v2
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvx128 v40,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,192
	ctx.r28.s64 = ctx.r1.s64 + 192;
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r7,r9
	ctx.r11.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lvx128 v39,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v31,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v4,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// vperm128 v3,v42,v41,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v35,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v1,v40,v39,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v34,r8,r9
	ea = (ctx.r8.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v12,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v37,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v36,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,240
	ctx.r30.s64 = ctx.r1.s64 + 240;
	// lvx128 v62,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v11,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v33,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v10,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v32,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v5,v12,v31
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// lvx128 v63,r7,r9
	ea = (ctx.r7.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,288
	ctx.r27.s64 = ctx.r1.s64 + 288;
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lvsl v2,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vadduhm v30,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v3,v63,v37,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v4,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v28,v36,v62,v2
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vperm128 v1,v35,v33,v6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// vperm128 v31,v34,v32,v4
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vadduhm v29,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrghb v7,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v26,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v6,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v27,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v9,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r31,r1,336
	ctx.r31.s64 = ctx.r1.s64 + 336;
	// vmrghb v8,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v61,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,384
	ctx.r26.s64 = ctx.r1.s64 + 384;
	// vadduhm v3,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vadduhm v25,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// addi r25,r1,432
	ctx.r25.s64 = ctx.r1.s64 + 432;
	// vadduhm v24,v8,v9
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// stvx128 v26,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v4,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// stvx128 v27,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v2,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v1,v61,v60,v5
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vslh v31,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r4,4
	ctx.r4.s64 = 4;
	// vslh v30,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v27,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r8,r1,64
	ctx.r8.s64 = ctx.r1.s64 + 64;
	// stvx128 v2,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r4,r11,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stvx128 v31,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v26,v27,v6
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stvx128 v30,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v29,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r9,r11,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r11.u64;
	// stvx128 v28,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v25,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v25,r0,r25
	ea = (ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8821E150:
	// lbzx r5,r10,r4
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// lbzux r31,r9,r11
	ea = ctx.r9.u32 + ctx.r11.u32;
	ctx.r31.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// lbz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// add r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 + ctx.r5.u64;
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// rlwinm r7,r5,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r3,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// sth r3,48(r8)
	REX_STORE_U16(ctx.r8.u32 + 48, ctx.r3.u16);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sthu r7,96(r8)
	ea = 96 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x8821e150
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8821E150;
	// b 0x8821e250
	goto loc_8821E250;
loc_8821E190:
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v59,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// lvx128 v58,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r10,16
	ctx.r10.s64 = 16;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lvx128 v57,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lvx128 v55,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// lvx128 v54,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v5,v59,v56,v6
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v53,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,240
	ctx.r31.s64 = ctx.r1.s64 + 240;
	// lvx128 v52,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v51,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v4,v58,v52,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v3,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v12,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v2,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v1,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v31,v57,v54,v3
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vperm128 v30,v55,v53,v2
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vperm128 v29,v50,v51,v1
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmrghb v28,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v27,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v26,v12,v28
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vadduhm v25,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v24,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v23,v27,v10
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v22,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v22,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v21,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v19,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8821E250:
	// li r11,1104
	ctx.r11.s64 = 1104;
	// lwz r4,1060(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1060);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lvx128 v1,r29,r11
	ea = (ctx.r29.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8821c030
	ctx.lr = 0x8821E268;
	sub_8821C030(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88227190) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r9,1136(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 1136);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r9,228(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// vspltish v1,6
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x6)));
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// subf r3,r11,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r11.u64;
	// lvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// vsplth v2,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xD0C))));
	// bl 0x8821ec08
	ctx.lr = 0x882271D4;
	sub_8821EC08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88228A60) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88228A68;
	__savegprlr_26(ctx, base);
	// lwz r11,1148(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 1148);
	// addi r31,r1,-96
	ctx.r31.s64 = ctx.r1.s64 + -96;
	// lwz r30,1156(r7)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 1156);
	// addi r26,r1,-80
	ctx.r26.s64 = ctx.r1.s64 + -80;
	// lwz r28,84(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r29,1164(r7)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r7.u32 + 1164);
	// subf r8,r4,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r4.u64;
	// cntlzw r7,r28
	ctx.r7.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// vspltish v5,3
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x3)));
	// stw r11,-96(r1)
	REX_STORE_U32(ctx.r1.u32 + -96, ctx.r11.u32);
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// stw r30,-80(r1)
	REX_STORE_U32(ctx.r1.u32 + -80, ctx.r30.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// li r7,1
	ctx.r7.s64 = 1;
	// vspltish v26,7
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_set1_epi16(short(0x7)));
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// vspltish v3,1
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_set1_epi16(short(0x1)));
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// li r27,-32
	ctx.r27.s64 = -32;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// slw r8,r7,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// vspltish v2,5
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_set1_epi16(short(0x5)));
	// lvx128 v11,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,-16
	ctx.r28.s64 = -16;
	// lvx128 v10,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// vsplth v4,v11,1
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_set1_epi16(short(0xD0C))));
	// li r31,16
	ctx.r31.s64 = 16;
	// vsplth v25,v10,1
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_set1_epi16(short(0xD0C))));
	// add r11,r9,r4
	ctx.r11.u64 = ctx.r9.u64 + ctx.r4.u64;
	// bne cr6,0x88228c3c
	if (!ctx.cr6.eq) goto loc_88228C3C;
	// lvx128 v60,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v62,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r9,r31
	ea = (ctx.r9.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v62,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v59,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v1,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v6,v58,v59,v1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmrghb v9,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v7,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x88228e18
	if (!ctx.cr6.gt) goto loc_88228E18;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_88228B54:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v1,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor v9,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// vor v11,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vor v31,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// vor v8,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// lvx128 v57,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v10,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v6,v11,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v29,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// vperm128 v7,v56,v57,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v27,v10,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v29,v6
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vmrglb v22,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v9,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v24,v27
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vadduhm v19,v28,v11
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v18,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v8,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v23,v10
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vor v6,v22,v22
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v22.u8));
	// vadduhm v28,v21,v30
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vslh v14,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v27,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vadduhm v24,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v23,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vslh v22,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v20,v1,v14
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vadduhm v19,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vsubshs v18,v31,v29
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vadduhm v17,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vsubshs v16,v0,v22
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vsubshs v15,v0,v21
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vadduhm v14,v19,v4
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v1,v17,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v31,v20,v16
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vadduhm v30,v18,v15
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vadduhm v29,v14,v31
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vadduhm v28,v1,v30
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vsrah v27,v29,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v28,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v27,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r7,r31
	ea = (ctx.r7.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r7,48
	ctx.r7.s64 = ctx.r7.s64 + 48;
	// blt cr6,0x88228b54
	if (ctx.cr6.lt) goto loc_88228B54;
	// b 0x88228e18
	goto loc_88228E18;
loc_88228C3C:
	// li r30,32
	ctx.r30.s64 = 32;
	// lvrx128 v52,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v50,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lvlx128 v55,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v53,r31,r9
	temp.u32 = ctx.r31.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v54,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v9,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvrx128 v51,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvrx128 v49,r30,r9
	temp.u32 = ctx.r30.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v31,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// lvlx128 v48,r31,r9
	temp.u32 = ctx.r31.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v10,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vor128 v6,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v8,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v47,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v9,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v45,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v30,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v1,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v31,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v30,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v1,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x88228e18
	if (!ctx.cr6.gt) goto loc_88228E18;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r9,r29,32
	ctx.r9.s64 = ctx.r29.s64 + 32;
loc_88228CC0:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v29,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vor v28,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// vor v8,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vor128 v42,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vor v11,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v31.u8));
	// lvx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v7,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vor v10,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v30.u8));
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v27,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vslh v30,v11,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v41,r11,r30
	ea = (ctx.r11.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v31,v43,v63,v5
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vslh v24,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v6,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v21,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v10,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v19,v63,v41,v6
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vslh v20,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v18,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v17,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v31,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v16,v8,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v24,v30
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vadduhm v14,v23,v11
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v22,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vor v6,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vslh v24,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v7,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v9,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vmrghb v1,v0,v19
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v21,v20,v10
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vor v30,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v18.u8));
	// vadduhm v18,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v17,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vadduhm v16,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vslh v19,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vslh v20,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v9,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v18,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vslh v22,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v17,v28,v19
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vslh v21,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v16,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vadduhm v28,v24,v14
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vsubshs v20,v29,v20
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vadduhm v24,v23,v9
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v29,v6,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v23,v0,v22
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vsubshs v22,v0,v21
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vadduhm v19,v16,v4
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v21,v18,v4
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v14,v24,v28
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vadduhm v15,v29,v15
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vslh v18,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v29,v20,v23
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v28,v17,v22
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vadduhm v22,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vsubshs v24,v0,v18
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vsubshs v23,v27,v16
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vadduhm v20,v19,v28
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vor128 v5,v42,v42
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v42.u8));
	// vadduhm v21,v21,v29
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v19,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vadduhm v18,v22,v4
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vsrah v16,v20,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v21,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v15,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// stvx128 v16,r9,r28
	ea = (ctx.r9.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r9,r27
	ea = (ctx.r9.u32 + ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v14,v15,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// stvx128 v14,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88228cc0
	if (ctx.cr6.lt) goto loc_88228CC0;
loc_88228E18:
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// li r11,0
	ctx.r11.s64 = 0;
	// vspltish v12,-1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// vspltish v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x0)));
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// vslh v9,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// bne cr6,0x88228ea0
	if (!ctx.cr6.eq) goto loc_88228EA0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x88228f3c
	if (!ctx.cr6.gt) goto loc_88228F3C;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r10,4
	ctx.r10.s64 = 4;
loc_88228E4C:
	// lvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v40,r9,r31
	ea = (ctx.r9.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// vsldoi128 v12,v13,v40,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 12));
	// vsldoi128 v10,v13,v40,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 14));
	// vsldoi128 v8,v13,v40,6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 10));
	// vadduhm v12,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v7,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v6,v12,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v4,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vadduhm v3,v12,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v2,v3,v25
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vadduhm v1,v2,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vsrah v31,v1,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v39,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vor v11,v11,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// stvewx128 v39,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v39,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bdnz 0x88228e4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88228E4C;
	// b 0x88228f3c
	goto loc_88228F3C;
loc_88228EA0:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x88228f3c
	if (!ctx.cr6.gt) goto loc_88228F3C;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r10,r29,32
	ctx.r10.s64 = ctx.r29.s64 + 32;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
loc_88228EB8:
	// lvx128 v13,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v10,v13,v38,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 12));
	// vsldoi128 v8,v13,v38,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 14));
	// vsldoi128 v7,v13,v38,6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 10));
	// vsldoi v6,v12,v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 12));
	// vsldoi v4,v12,v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 14));
	// vadduhm v3,v8,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsldoi v2,v12,v13,6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 10));
	// vadduhm v1,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vadduhm v10,v4,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vor v13,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vadduhm v31,v12,v2
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsubshs v30,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v10,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v13,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v27,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vadduhm v24,v10,v29
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v23,v13,v28
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vadduhm v22,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vadduhm v21,v23,v25
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vadduhm v12,v22,v27
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vadduhm v20,v21,v30
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vsrah v19,v12,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v18,v20,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v37,v11,v19
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v19.u8)));
	// vpkshus128 v36,v19,v18
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vor128 v11,v37,v18
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v18.u8)));
	// stvx128 v36,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bdnz 0x88228eb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88228EB8;
loc_88228F3C:
	// vand v13,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// vcmpgtuh. v12,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), 0xFFFF);
	// mfocrf r11,2
	ctx.r11.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

