#include "fh1_funcs.10.h"

DEFINE_REX_FUNC(sub_880500E8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r11,r11,17632
	ctx.r11.s64 = ctx.r11.s64 + 17632;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_88050458) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x88050460;
	__savegprlr_20(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,527(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 527);
	// lwz r9,516(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// lwz r8,508(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// lwz r7,500(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// lwz r31,492(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// lwz r30,484(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// lbz r29,479(r1)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r1.u32 + 479);
	// lbz r28,471(r1)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r1.u32 + 471);
	// lbz r27,463(r1)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r1.u32 + 463);
	// lwz r26,452(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r25,444(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// lwz r24,436(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r23,428(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r22,420(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r21,412(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// lwz r20,404(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// stb r11,207(r1)
	REX_STORE_U8(ctx.r1.u32 + 207, ctx.r11.u8);
	// stw r9,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// stw r8,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r8.u32);
	// stw r7,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// stw r31,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// stw r30,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stb r29,159(r1)
	REX_STORE_U8(ctx.r1.u32 + 159, ctx.r29.u8);
	// stb r28,151(r1)
	REX_STORE_U8(ctx.r1.u32 + 151, ctx.r28.u8);
	// stb r27,143(r1)
	REX_STORE_U8(ctx.r1.u32 + 143, ctx.r27.u8);
	// stw r26,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stw r25,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// stw r24,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// stw r23,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// stw r22,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// stw r20,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// bl 0x880568a8
	ctx.lr = 0x880504E8;
	sub_880568A8(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88052A38) {
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
	// bl 0x880509a8
	ctx.lr = 0x88052A54;
	sub_880509A8(ctx, base);
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,1400
	ctx.r31.s64 = ctx.r11.s64 + 1400;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// beq 0x88052a6c
	if (ctx.cr0.eq) goto loc_88052A6C;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
loc_88052A6C:
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// bl 0x880509a8
	ctx.lr = 0x88052A74;
	sub_880509A8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// beq 0x88052a84
	if (ctx.cr0.eq) goto loc_88052A84;
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
loc_88052A84:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88052958
	ctx.lr = 0x88052A8C;
	sub_88052958(ctx, base);
	// stw r3,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_88056FC0) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x88056ffc
	if (ctx.cr6.eq) goto loc_88056FFC;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x88056fec
	if (ctx.cr6.eq) goto loc_88056FEC;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bne cr6,0x88056fec
	if (!ctx.cr6.eq) goto loc_88056FEC;
	// stw r5,268(r3)
	REX_STORE_U32(ctx.r3.u32 + 268, ctx.r5.u32);
	// stw r6,280(r3)
	REX_STORE_U32(ctx.r3.u32 + 280, ctx.r6.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_88056FEC:
	// stw r5,264(r11)
	REX_STORE_U32(ctx.r11.u32 + 264, ctx.r5.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r6,276(r11)
	REX_STORE_U32(ctx.r11.u32 + 276, ctx.r6.u32);
	// blr 
	return;
loc_88056FFC:
	// stw r5,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r5.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r6,284(r11)
	REX_STORE_U32(ctx.r11.u32 + 284, ctx.r6.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880578F8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// addi r10,r11,6736
	ctx.r10.s64 = ctx.r11.s64 + 6736;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x88062228
	sub_88062228(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88057960) {
	REX_FUNC_PROLOGUE();
	// lwz r3,64(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88057A40) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// addi r10,r11,6808
	ctx.r10.s64 = ctx.r11.s64 + 6808;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x88062228
	sub_88062228(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88057B68) {
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
	// addi r10,r11,6808
	ctx.r10.s64 = ctx.r11.s64 + 6808;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x88062228
	ctx.lr = 0x88057B94;
	sub_88062228(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88057bb4
	if (ctx.cr6.eq) goto loc_88057BB4;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32772
	ctx.r4.u64 = ctx.r4.u64 | 32772;
	// bl 0x88050358
	ctx.lr = 0x88057BB0;
	sub_88050358(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_88057BB4:
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

DEFINE_REX_FUNC(sub_880587C8) {
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
	// lwz r30,124(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,1440
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1440, ctx.xer);
	// bne cr6,0x88058800
	if (!ctx.cr6.eq) goto loc_88058800;
	// lwz r11,128(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r11,1080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1080, ctx.xer);
	// bne cr6,0x88058800
	if (!ctx.cr6.eq) goto loc_88058800;
	// li r11,1920
	ctx.r11.s64 = 1920;
	// stw r11,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
loc_88058800:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880576c8
	ctx.lr = 0x88058808;
	sub_880576C8(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x88058818
	if (ctx.cr6.eq) goto loc_88058818;
	// stw r30,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
loc_88058818:
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

DEFINE_REX_FUNC(sub_88059C18) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88059C20;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88059C48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,76(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88059C5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,52(r30)
	REX_STORE_U32(ctx.r30.u32 + 52, ctx.r29.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88064578
	ctx.lr = 0x88059C70;
	sub_88064578(ctx, base);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// stw r3,520(r30)
	REX_STORE_U32(ctx.r30.u32 + 520, ctx.r3.u32);
	// ori r8,r11,65535
	ctx.r8.u64 = ctx.r11.u64 | 65535;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 & ctx.r8.u64;
	// stw r3,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x88059cac
	goto loc_88059CAC;
loc_88059CAC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88059cbc
	if (ctx.cr6.lt) goto loc_88059CBC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880597e0
	ctx.lr = 0x88059CBC;
	sub_880597E0(ctx, base);
loc_88059CBC:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805B378) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8805B380;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805b3b8
	if (ctx.cr6.eq) goto loc_8805B3B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805B3B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
loc_8805B3B8:
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805b3d8
	if (ctx.cr6.eq) goto loc_8805B3D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805B3D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
loc_8805B3D8:
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805b3f8
	if (ctx.cr6.eq) goto loc_8805B3F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805B3F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
loc_8805B3F8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8805b418
	if (ctx.cr6.eq) goto loc_8805B418;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805B414;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
loc_8805B418:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8805b438
	if (ctx.cr6.eq) goto loc_8805B438;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805B434;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
loc_8805B438:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8805b458
	if (ctx.cr6.eq) goto loc_8805B458;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805B454;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
loc_8805B458:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805C318) {
	REX_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,44(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8805C578) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8805c5c4
	if (ctx.cr6.eq) goto loc_8805C5C4;
loc_8805C59C:
	// cmplwi cr6,r11,259
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 259, ctx.xer);
	// bge cr6,0x8805c5c4
	if (!ctx.cr6.lt) goto loc_8805C5C4;
	// lhz r31,0(r4)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// lhzu r10,2(r4)
	ea = 2 + ctx.r4.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r4.u32 = ea;
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r31,r11,r30
	REX_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r31.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x8805c59c
	if (!ctx.cr6.eq) goto loc_8805C59C;
loc_8805C5C4:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// stbx r31,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r31.u8);
	// lwz r11,108(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 108);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8805C5E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
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

DEFINE_REX_FUNC(sub_8805DF88) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,560(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 560);
	// bl 0x8807c0d8
	ctx.lr = 0x8805DFA8;
	sub_8807C0D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8805dfc8
	if (!ctx.cr6.eq) goto loc_8805DFC8;
	// li r3,-100
	ctx.r3.s64 = -100;
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
loc_8805DFC8:
	// lwz r11,568(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,568(r31)
	REX_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_880603B8) {
	REX_FUNC_PROLOGUE();
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// lis r10,12338
	ctx.r10.s64 = 808583168;
	// ori r8,r11,22857
	ctx.r8.u64 = ctx.r11.u64 | 22857;
	// lis r6,12849
	ctx.r6.s64 = 842072064;
	// lis r5,14677
	ctx.r5.s64 = 961871872;
	// lwz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// ori r7,r10,13385
	ctx.r7.u64 = ctx.r10.u64 | 13385;
	// ori r6,r6,22105
	ctx.r6.u64 = ctx.r6.u64 | 22105;
	// ori r5,r5,22105
	ctx.r5.u64 = ctx.r5.u64 | 22105;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// lis r10,12593
	ctx.r10.s64 = 825294848;
	// ori r4,r10,22094
	ctx.r4.u64 = ctx.r10.u64 | 22094;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r4,r10,22094
	ctx.r4.u64 = ctx.r10.u64 | 22094;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// lis r10,22068
	ctx.r10.s64 = 1446248448;
	// ori r4,r10,12592
	ctx.r4.u64 = ctx.r10.u64 | 12592;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// lis r10,12889
	ctx.r10.s64 = 844693504;
	// ori r4,r10,21849
	ctx.r4.u64 = ctx.r10.u64 | 21849;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// lis r10,22870
	ctx.r10.s64 = 1498808320;
	// ori r4,r10,22869
	ctx.r4.u64 = ctx.r10.u64 | 22869;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// lis r10,21849
	ctx.r10.s64 = 1431896064;
	// ori r4,r10,22105
	ctx.r4.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// lis r10,16729
	ctx.r10.s64 = 1096351744;
	// ori r4,r10,21846
	ctx.r4.u64 = ctx.r10.u64 | 21846;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// lis r10,20529
	ctx.r10.s64 = 1345388544;
	// ori r4,r10,13401
	ctx.r4.u64 = ctx.r10.u64 | 13401;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// lis r10,21553
	ctx.r10.s64 = 1412497408;
	// ori r4,r10,13401
	ctx.r4.u64 = ctx.r10.u64 | 13401;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// lis r10,21554
	ctx.r10.s64 = 1412562944;
	// ori r4,r10,13401
	ctx.r4.u64 = ctx.r10.u64 | 13401;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
loc_880604B0:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_880604B8:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x880604e0
	if (ctx.cr6.eq) goto loc_880604E0;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x880604e0
	if (ctx.cr6.eq) goto loc_880604E0;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x880604e0
	if (ctx.cr6.eq) goto loc_880604E0;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_880604E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880604f0
	if (ctx.cr6.eq) goto loc_880604F0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x88060514
	if (!ctx.cr6.eq) goto loc_88060514;
loc_880604F0:
	// lhz r9,14(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 14);
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// beq cr6,0x88060514
	if (ctx.cr6.eq) goto loc_88060514;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// beq cr6,0x88060514
	if (ctx.cr6.eq) goto loc_88060514;
	// cmplwi cr6,r9,24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 24, ctx.xer);
	// beq cr6,0x88060514
	if (ctx.cr6.eq) goto loc_88060514;
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// bne cr6,0x880604b0
	if (!ctx.cr6.eq) goto loc_880604B0;
loc_88060514:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x88060524
	if (!ctx.cr6.eq) goto loc_88060524;
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_88060524:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x88060548
	if (!ctx.cr6.eq) goto loc_88060548;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x88060548
	if (ctx.cr6.eq) goto loc_88060548;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x88060548
	if (ctx.cr6.eq) goto loc_88060548;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// li r3,5
	ctx.r3.s64 = 5;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_88060548:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88064B10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x88064B18;
	__savegprlr_23(ctx, base);
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r5,508
	ctx.r5.s64 = 508;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r24,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r24.u32);
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// bl 0x88052d90
	ctx.lr = 0x88064B40;
	sub_88052D90(ctx, base);
	// li r5,127
	ctx.r5.s64 = 127;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r24,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r24.u8);
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// bl 0x88052d90
	ctx.lr = 0x88064B54;
	sub_88052D90(ctx, base);
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x88064ec8
	if (ctx.cr6.eq) goto loc_88064EC8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88064ec8
	if (ctx.cr6.eq) goto loc_88064EC8;
	// lwz r28,0(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x88064ec8
	if (ctx.cr6.eq) goto loc_88064EC8;
	// lwz r11,528(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88064ec8
	if (ctx.cr6.eq) goto loc_88064EC8;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// li r23,1
	ctx.r23.s64 = 1;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lhz r9,36(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 36);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x88064c00
	if (!ctx.cr6.gt) goto loc_88064C00;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// li r7,2
	ctx.r7.s64 = 2;
loc_88064BAC:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x88064bcc
	if (!ctx.cr6.eq) goto loc_88064BCC;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rotlwi r5,r10,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// stwx r23,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r23.u32);
	// b 0x88064be8
	goto loc_88064BE8;
loc_88064BCC:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rotlwi r5,r10,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// bne cr6,0x88064be4
	if (!ctx.cr6.eq) goto loc_88064BE4;
	// stwx r7,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r7.u32);
	// b 0x88064be8
	goto loc_88064BE8;
loc_88064BE4:
	// stwx r24,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r24.u32);
loc_88064BE8:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88064bac
	if (ctx.cr6.lt) goto loc_88064BAC;
loc_88064C00:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// rlwinm r9,r24,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
loc_88064C10:
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r6,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x88064c50
	if (ctx.cr6.eq) goto loc_88064C50;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x88064c38
	if (!ctx.cr6.eq) goto loc_88064C38;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x88064ec8
	if (ctx.cr6.eq) goto loc_88064EC8;
loc_88064C38:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x88064c48
	if (!ctx.cr6.eq) goto loc_88064C48;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x88064ec8
	if (ctx.cr6.eq) goto loc_88064EC8;
loc_88064C48:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stbx r8,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
loc_88064C50:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x88064c10
	if (ctx.cr6.lt) goto loc_88064C10;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_88064C78:
	// lbzx r11,r26,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x88064e70
	if (!ctx.cr6.eq) goto loc_88064E70;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x880cb730
	ctx.lr = 0x88064C98;
	sub_880CB730(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064eb8
	if (ctx.cr6.lt) goto loc_88064EB8;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,128
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 128, ctx.xer);
	// bge cr6,0x88064dc0
	if (!ctx.cr6.lt) goto loc_88064DC0;
loc_88064CB4:
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// lbzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x88064db0
	if (!ctx.cr6.eq) goto loc_88064DB0;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x880cb730
	ctx.lr = 0x88064CD8;
	sub_880CB730(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064eb8
	if (ctx.cr6.lt) goto loc_88064EB8;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x88064db0
	if (!ctx.cr6.eq) goto loc_88064DB0;
	// addi r11,r26,3
	ctx.r11.s64 = ctx.r26.s64 + 3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x88064d18
	if (ctx.cr6.eq) goto loc_88064D18;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x88064d5c
	if (!ctx.cr6.eq) goto loc_88064D5C;
loc_88064D18:
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// lwzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x88064d5c
	if (!ctx.cr6.eq) goto loc_88064D5C;
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r28
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x88064d5c
	if (!ctx.cr6.eq) goto loc_88064D5C;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x88064ddc
	if (ctx.cr6.eq) goto loc_88064DDC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x88064ddc
	if (ctx.cr6.eq) goto loc_88064DDC;
loc_88064D5C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88064db0
	if (!ctx.cr6.eq) goto loc_88064DB0;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x88064d80
	if (ctx.cr6.eq) goto loc_88064D80;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x88064db0
	if (!ctx.cr6.eq) goto loc_88064DB0;
loc_88064D80:
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x88064d9c
	if (ctx.cr6.eq) goto loc_88064D9C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x88064db0
	if (!ctx.cr6.eq) goto loc_88064DB0;
loc_88064D9C:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// lwzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x88064e10
	if (ctx.cr6.eq) goto loc_88064E10;
loc_88064DB0:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,128
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 128, ctx.xer);
	// blt cr6,0x88064cb4
	if (ctx.cr6.lt) goto loc_88064CB4;
loc_88064DC0:
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88064e44
	if (!ctx.cr6.eq) goto loc_88064E44;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// b 0x88064e54
	goto loc_88064E54;
loc_88064DDC:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r25,r10,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// bl 0x880642d8
	ctx.lr = 0x88064DFC;
	sub_880642D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064eb8
	if (ctx.cr6.lt) goto loc_88064EB8;
	// stbx r24,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r24.u8);
	// b 0x88064e70
	goto loc_88064E70;
loc_88064E10:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r25,r10,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// bl 0x880642d8
	ctx.lr = 0x88064E30;
	sub_880642D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064eb8
	if (ctx.cr6.lt) goto loc_88064EB8;
	// stbx r24,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r24.u8);
	// b 0x88064e70
	goto loc_88064E70;
loc_88064E44:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r25,r10,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_88064E54:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880641f0
	ctx.lr = 0x88064E64;
	sub_880641F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064eb8
	if (ctx.cr6.lt) goto loc_88064EB8;
loc_88064E70:
	// addi r10,r26,1
	ctx.r10.s64 = ctx.r26.s64 + 1;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// clrlwi r30,r10,24
	ctx.r30.u64 = ctx.r10.u32 & 0xFF;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,128
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 128, ctx.xer);
	// blt cr6,0x88064c78
	if (ctx.cr6.lt) goto loc_88064C78;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
loc_88064E94:
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// lwzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r5,r28
	REX_STORE_U32(ctx.r5.u32 + ctx.r28.u32, ctx.r7.u32);
	// blt cr6,0x88064e94
	if (ctx.cr6.lt) goto loc_88064E94;
loc_88064EB8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880638b8
	ctx.lr = 0x88064EC0;
	sub_880638B8(ctx, base);
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_88064EC8:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8806DD70) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8806DD78;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,30408(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30408);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806dde0
	if (ctx.cr6.eq) goto loc_8806DDE0;
	// lwz r11,30432(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806e020
	if (ctx.cr6.eq) goto loc_8806E020;
	// lwz r11,30672(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30672);
	// lwz r10,30648(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 30648);
	// stw r30,1268(r3)
	REX_STORE_U32(ctx.r3.u32 + 1268, ctx.r30.u32);
	// stw r28,1272(r3)
	REX_STORE_U32(ctx.r3.u32 + 1272, ctx.r28.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r30,1276(r3)
	REX_STORE_U32(ctx.r3.u32 + 1276, ctx.r30.u32);
	// stw r30,28164(r3)
	REX_STORE_U32(ctx.r3.u32 + 28164, ctx.r30.u32);
	// stw r30,2564(r3)
	REX_STORE_U32(ctx.r3.u32 + 2564, ctx.r30.u32);
	// bne cr6,0x8806dde0
	if (!ctx.cr6.eq) goto loc_8806DDE0;
	// lwz r11,30676(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30676);
	// lwz r10,30652(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 30652);
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subfic r8,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r6,r28
	ctx.r28.u64 = ctx.r6.u64 & ctx.r28.u64;
loc_8806DDE0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x880e68e0
	ctx.lr = 0x8806DDFC;
	sub_880E68E0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1268(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1268);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DE0C;
	sub_880E6960(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1272(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1272);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DE1C;
	sub_880E6960(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1276(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1276);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DE2C;
	sub_880E6960(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,28164(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28164);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DE3C;
	sub_880E6960(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1604(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1604);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DE4C;
	sub_880E6960(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,788(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 788);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DE5C;
	sub_880E6960(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r4,2564(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2564);
	// bl 0x880e6960
	ctx.lr = 0x8806DE6C;
	sub_880E6960(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,2424(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2424);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DE7C;
	sub_880E6960(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1608(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1608);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DE8C;
	sub_880E6960(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,2336(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2336);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DE9C;
	sub_880E6960(ctx, base);
	// lwz r9,1436(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1436);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// li r5,1
	ctx.r5.s64 = 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8806dec0
	if (ctx.cr6.eq) goto loc_8806DEC0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x880e6960
	ctx.lr = 0x8806DEB8;
	sub_880E6960(ctx, base);
	// lwz r4,1428(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1428);
	// b 0x8806decc
	goto loc_8806DECC;
loc_8806DEC0:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x880e6960
	ctx.lr = 0x8806DEC8;
	sub_880E6960(ctx, base);
	// lwz r4,1440(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1440);
loc_8806DECC:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DED8;
	sub_880E6960(ctx, base);
	// lwz r11,1264(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806df18
	if (ctx.cr6.eq) goto loc_8806DF18;
	// lwz r11,1260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1260);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8806df18
	if (!ctx.cr6.gt) goto loc_8806DF18;
	// addi r29,r31,872
	ctx.r29.s64 = ctx.r31.s64 + 872;
loc_8806DEF4:
	// lwzu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x880e6960
	ctx.lr = 0x8806DF08;
	sub_880E6960(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1260);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8806def4
	if (ctx.cr6.lt) goto loc_8806DEF4;
loc_8806DF18:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x880e6960
	ctx.lr = 0x8806DF28;
	sub_880E6960(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8806df68
	if (ctx.cr6.eq) goto loc_8806DF68;
	// lwz r11,796(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x880e6960
	ctx.lr = 0x8806DF4C;
	sub_880E6960(ctx, base);
	// lwz r9,800(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x880e6960
	ctx.lr = 0x8806DF68;
	sub_880E6960(ctx, base);
loc_8806DF68:
	// lwz r11,2564(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2564);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806df84
	if (ctx.cr6.eq) goto loc_8806DF84;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,2568(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2568);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DF84;
	sub_880E6960(ctx, base);
loc_8806DF84:
	// lwz r11,30784(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30784);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// andc r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// rlwinm r4,r9,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// bl 0x880e6960
	ctx.lr = 0x8806DFA0;
	sub_880E6960(ctx, base);
	// lwz r11,30784(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30784);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8806dfbc
	if (!ctx.cr6.gt) goto loc_8806DFBC;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x880e6960
	ctx.lr = 0x8806DFBC;
	sub_880E6960(ctx, base);
loc_8806DFBC:
	// lwz r11,30788(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30788);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// andc r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// rlwinm r4,r9,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// bl 0x880e6960
	ctx.lr = 0x8806DFD8;
	sub_880E6960(ctx, base);
	// lwz r11,30788(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8806dff4
	if (!ctx.cr6.gt) goto loc_8806DFF4;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x880e6960
	ctx.lr = 0x8806DFF4;
	sub_880E6960(ctx, base);
loc_8806DFF4:
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6b40
	ctx.lr = 0x8806DFFC;
	sub_880E6B40(ctx, base);
	// lwz r11,7868(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// subfic r9,r10,39
	ctx.xer.ca = ctx.r10.u32 <= 39;
	ctx.r9.u64 = static_cast<uint64_t>(39) - ctx.r10.u64;
	// rlwinm r10,r9,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6900
	ctx.lr = 0x8806E020;
	sub_880E6900(ctx, base);
loc_8806E020:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88078110) {
	REX_FUNC_PROLOGUE();
	// lwz r10,30784(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 30784);
	// lwz r11,30792(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30792);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x88078138
	if (!ctx.cr6.eq) goto loc_88078138;
	// lwz r11,30796(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30796);
	// lwz r9,30788(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 30788);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x88078138
	if (!ctx.cr6.eq) goto loc_88078138;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x88078140
	goto loc_88078140;
loc_88078138:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,30744(r3)
	REX_STORE_U32(ctx.r3.u32 + 30744, ctx.r11.u32);
loc_88078140:
	// stw r11,30740(r3)
	REX_STORE_U32(ctx.r3.u32 + 30740, ctx.r11.u32);
	// lwz r11,30752(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30752);
	// lwz r9,30756(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 30756);
	// lwz r8,30788(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 30788);
	// stw r10,30792(r3)
	REX_STORE_U32(ctx.r3.u32 + 30792, ctx.r10.u32);
	// stw r11,30760(r3)
	REX_STORE_U32(ctx.r3.u32 + 30760, ctx.r11.u32);
	// stw r9,30764(r3)
	REX_STORE_U32(ctx.r3.u32 + 30764, ctx.r9.u32);
	// stw r8,30796(r3)
	REX_STORE_U32(ctx.r3.u32 + 30796, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88079088) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88079090;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88078478
	ctx.lr = 0x8807909C;
	sub_88078478(ctx, base);
	// lwz r4,672(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 672);
	// bl 0x8806eb88
	ctx.lr = 0x880790A4;
	sub_8806EB88(ctx, base);
	// lwz r11,1580(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1580);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880790c8
	if (ctx.cr6.eq) goto loc_880790C8;
	// lwz r11,1416(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1416);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bgt cr6,0x880790cc
	if (ctx.cr6.gt) goto loc_880790CC;
loc_880790C8:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_880790CC:
	// stw r11,1584(r31)
	REX_STORE_U32(ctx.r31.u32 + 1584, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1416(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1416);
	// bl 0x88102570
	ctx.lr = 0x880790DC;
	sub_88102570(ctx, base);
	// lwz r11,2572(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880790fc
	if (ctx.cr6.eq) goto loc_880790FC;
	// lwz r11,2424(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880790fc
	if (ctx.cr6.eq) goto loc_880790FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880eb798
	ctx.lr = 0x880790FC;
	sub_880EB798(ctx, base);
loc_880790FC:
	// lwz r11,31544(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88079124
	if (ctx.cr6.eq) goto loc_88079124;
	// lwz r11,28132(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807911c
	if (!ctx.cr6.eq) goto loc_8807911C;
	// stw r26,2632(r31)
	REX_STORE_U32(ctx.r31.u32 + 2632, ctx.r26.u32);
	// b 0x88079128
	goto loc_88079128;
loc_8807911C:
	// stw r26,2636(r31)
	REX_STORE_U32(ctx.r31.u32 + 2636, ctx.r26.u32);
	// b 0x88079128
	goto loc_88079128;
loc_88079124:
	// stw r26,2628(r31)
	REX_STORE_U32(ctx.r31.u32 + 2628, ctx.r26.u32);
loc_88079128:
	// lwz r11,6772(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6772);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88079174
	if (ctx.cr6.eq) goto loc_88079174;
	// lwz r11,1612(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1612);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88079174
	if (ctx.cr6.eq) goto loc_88079174;
	// bl 0x881ee8e8
	ctx.lr = 0x88079144;
	sub_881EE8E8(ctx, base);
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// stw r26,7212(r31)
	REX_STORE_U32(ctx.r31.u32 + 7212, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x880e7578
	ctx.lr = 0x88079158;
	sub_880E7578(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x880e6fe8
	ctx.lr = 0x88079164;
	sub_880E6FE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e7798
	ctx.lr = 0x8807916C;
	sub_880E7798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e8350
	ctx.lr = 0x88079174;
	sub_880E8350(ctx, base);
loc_88079174:
	// lwz r11,27988(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 27988);
	// li r27,3
	ctx.r27.s64 = 3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807923c
	if (ctx.cr6.eq) goto loc_8807923C;
	// lwz r11,31544(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807923c
	if (!ctx.cr6.eq) goto loc_8807923C;
	// lwz r11,2340(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2340);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x880791a4
	if (!ctx.cr6.eq) goto loc_880791A4;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,2340(r31)
	REX_STORE_U32(ctx.r31.u32 + 2340, ctx.r11.u32);
loc_880791A4:
	// lwz r11,2340(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880791fc
	if (ctx.cr6.eq) goto loc_880791FC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x880791fc
	if (ctx.cr6.eq) goto loc_880791FC;
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8807923c
	if (!ctx.cr6.gt) goto loc_8807923C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_880791CC:
	// lwz r9,7764(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7764);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r27,84(r9)
	REX_STORE_U32(ctx.r9.u32 + 84, ctx.r27.u32);
	// lwz r9,7764(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7764);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r30,124(r8)
	REX_STORE_U32(ctx.r8.u32 + 124, ctx.r30.u32);
	// addi r11,r11,276
	ctx.r11.s64 = ctx.r11.s64 + 276;
	// lwz r7,728(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x880791cc
	if (ctx.cr6.lt) goto loc_880791CC;
	// b 0x8807923c
	goto loc_8807923C;
loc_880791FC:
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8807923c
	if (!ctx.cr6.gt) goto loc_8807923C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_88079210:
	// lwz r9,7764(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7764);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r27,84(r9)
	REX_STORE_U32(ctx.r9.u32 + 84, ctx.r27.u32);
	// lwz r9,7764(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7764);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r26,124(r8)
	REX_STORE_U32(ctx.r8.u32 + 124, ctx.r26.u32);
	// addi r11,r11,276
	ctx.r11.s64 = ctx.r11.s64 + 276;
	// lwz r7,728(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x88079210
	if (ctx.cr6.lt) goto loc_88079210;
loc_8807923C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f40c0
	ctx.lr = 0x88079248;
	sub_880F40C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,672(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 672);
	// bl 0x88074338
	ctx.lr = 0x88079254;
	sub_88074338(ctx, base);
	// lwz r11,28560(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28560);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880792ac
	if (ctx.cr6.eq) goto loc_880792AC;
	// lwz r7,728(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// li r9,28564
	ctx.r9.s64 = 28564;
	// lwz r8,30200(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 30200);
	// lwz r6,1416(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1416);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// lwz r11,30204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30204);
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f10,-8(r4)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r4.u32 + -8);
	// fmul f9,f10,f12
	ctx.f9.f64 = ctx.f10.f64 * ctx.f12.f64;
	// fdiv f8,f9,f11
	ctx.f8.f64 = ctx.f9.f64 / ctx.f11.f64;
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f7,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.f7.u32);
loc_880792AC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x880793c0
	if (ctx.cr6.lt) goto loc_880793C0;
	// lwz r11,2124(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880793c0
	if (!ctx.cr6.gt) goto loc_880793C0;
	// lwz r11,2800(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x880793c0
	if (ctx.cr6.eq) goto loc_880793C0;
	// lwz r11,31544(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880792e4
	if (ctx.cr6.eq) goto loc_880792E4;
	// lwz r6,7848(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 7848);
	// b 0x880792e8
	goto loc_880792E8;
loc_880792E4:
	// lwz r6,2448(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 2448);
loc_880792E8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880792f8
	if (ctx.cr6.eq) goto loc_880792F8;
	// lwz r7,7852(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7852);
	// b 0x880792fc
	goto loc_880792FC;
loc_880792F8:
	// lwz r7,2452(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2452);
loc_880792FC:
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88079324
	if (ctx.cr6.eq) goto loc_88079324;
	// lwz r11,28132(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28132);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88079324
	if (!ctx.cr6.eq) goto loc_88079324;
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// lwz r10,720(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r28,r9,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_88079324:
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x880793c0
	if (!ctx.cr6.gt) goto loc_880793C0;
	// li r11,16384
	ctx.r11.s64 = 16384;
loc_88079338:
	// lwz r10,720(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x880793b0
	if (!ctx.cr6.gt) goto loc_880793B0;
loc_88079348:
	// lwz r9,720(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mullw r5,r9,r29
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r29.s32);
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r4,r10,r6
	ctx.r4.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r30,r10,r7
	ctx.r30.u64 = ctx.r10.u64 + ctx.r7.u64;
	// sthx r11,r9,r6
	REX_STORE_U16(ctx.r9.u32 + ctx.r6.u32, ctx.r11.u16);
	// sth r11,2(r5)
	REX_STORE_U16(ctx.r5.u32 + 2, ctx.r11.u16);
	// sthx r11,r10,r6
	REX_STORE_U16(ctx.r10.u32 + ctx.r6.u32, ctx.r11.u16);
	// sth r11,2(r4)
	REX_STORE_U16(ctx.r4.u32 + 2, ctx.r11.u16);
	// sthx r11,r9,r7
	REX_STORE_U16(ctx.r9.u32 + ctx.r7.u32, ctx.r11.u16);
	// sth r11,2(r3)
	REX_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// sthx r11,r10,r7
	REX_STORE_U16(ctx.r10.u32 + ctx.r7.u32, ctx.r11.u16);
	// sth r11,2(r30)
	REX_STORE_U16(ctx.r30.u32 + 2, ctx.r11.u16);
	// lwz r3,720(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x88079348
	if (ctx.cr6.lt) goto loc_88079348;
loc_880793B0:
	// lwz r10,724(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x88079338
	if (ctx.cr6.lt) goto loc_88079338;
loc_880793C0:
	// lwz r11,2124(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88079434
	if (!ctx.cr6.gt) goto loc_88079434;
	// lwz r11,2800(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x88079434
	if (ctx.cr6.eq) goto loc_88079434;
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x88079434
	if (!ctx.cr6.gt) goto loc_88079434;
loc_880793E8:
	// lwz r10,720(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x88079424
	if (!ctx.cr6.gt) goto loc_88079424;
loc_880793F8:
	// lwz r10,720(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r9,7788(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7788);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r10,r7,276
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(276));
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r27,84(r6)
	REX_STORE_U32(ctx.r6.u32 + 84, ctx.r27.u32);
	// lwz r5,720(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x880793f8
	if (ctx.cr6.lt) goto loc_880793F8;
loc_88079424:
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x880793e8
	if (ctx.cr6.lt) goto loc_880793E8;
loc_88079434:
	// lwz r11,1480(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88079494
	if (ctx.cr6.eq) goto loc_88079494;
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// li r4,255
	ctx.r4.s64 = 255;
	// lwz r10,720(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r3,1500(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1500);
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x88052d90
	ctx.lr = 0x8807945C;
	sub_88052D90(ctx, base);
	// lwz r8,720(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r7,724(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// li r4,255
	ctx.r4.s64 = 255;
	// lwz r3,1504(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1504);
	// mullw r6,r8,r7
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x88052d90
	ctx.lr = 0x88079478;
	sub_88052D90(ctx, base);
	// lwz r5,720(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// li r4,255
	ctx.r4.s64 = 255;
	// lwz r3,1508(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1508);
	// mullw r10,r5,r11
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x88052d90
	ctx.lr = 0x88079494;
	sub_88052D90(ctx, base);
loc_88079494:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88083858) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x88083860;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,30428(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30428);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88083880
	if (!ctx.cr6.eq) goto loc_88083880;
	// bl 0x880fe498
	ctx.lr = 0x88083878;
	sub_880FE498(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_88083880:
	// lwz r29,7044(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 7044);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwz r30,2244(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 2244);
	// bne cr6,0x8808389c
	if (!ctx.cr6.eq) goto loc_8808389C;
	// lwz r29,6792(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 6792);
	// lwz r30,2248(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 2248);
	// b 0x880838ac
	goto loc_880838AC;
loc_8808389C:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x880838ac
	if (!ctx.cr6.eq) goto loc_880838AC;
	// lwz r29,21136(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 21136);
	// lwz r30,28412(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 28412);
loc_880838AC:
	// lwz r11,2124(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880838cc
	if (!ctx.cr6.gt) goto loc_880838CC;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x880838cc
	if (!ctx.cr6.eq) goto loc_880838CC;
	// lwz r29,7836(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 7836);
	// lwz r30,2256(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 2256);
	// b 0x880838f0
	goto loc_880838F0;
loc_880838CC:
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bne cr6,0x880838e0
	if (!ctx.cr6.eq) goto loc_880838E0;
	// lwz r29,28416(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 28416);
	// lwz r30,28408(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 28408);
	// b 0x880838f0
	goto loc_880838F0;
loc_880838E0:
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x880838f0
	if (!ctx.cr6.eq) goto loc_880838F0;
	// lwz r29,28424(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 28424);
	// lwz r30,28420(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 28420);
loc_880838F0:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r28,728(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// clrlwi r4,r30,31
	ctx.r4.u64 = ctx.r30.u32 & 0x1;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x88083904;
	sub_880E6960(ctx, base);
	// srawi r30,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880e6960
	ctx.lr = 0x88083918;
	sub_880E6960(ctx, base);
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x88083f68
	if (ctx.cr6.gt) goto loc_88083F68;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8808394c
	if (ctx.cr6.eq) goto loc_8808394C;
	// bdz 0x88083948
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_88083948;
	// bdz 0x88083b54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_88083B54;
	// bdz 0x88083b50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_88083B50;
	// bdz 0x880839d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_880839D8;
	// bdz 0x88083a94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_88083A94;
	// b 0x88083f60
	goto loc_88083F60;
loc_88083948:
	// add r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 + ctx.r29.u64;
loc_8808394C:
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88083970
	if (ctx.cr6.eq) goto loc_88083970;
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x880e6960
	ctx.lr = 0x88083970;
	sub_880E6960(ctx, base);
loc_88083970:
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// clrlwi r30,r11,31
	ctx.r30.u64 = ctx.r11.u32 & 0x1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88083f68
	if (!ctx.cr6.lt) goto loc_88083F68;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// addi r26,r29,1
	ctx.r26.s64 = ctx.r29.s64 + 1;
	// addi r28,r11,23388
	ctx.r28.s64 = ctx.r11.s64 + 23388;
	// addi r27,r10,13216
	ctx.r27.s64 = ctx.r10.s64 + 13216;
loc_88083994:
	// lbzx r11,r26,r30
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r30.u32);
	// lbzx r10,r30,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r8,r27
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	// lwzx r4,r8,r28
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r28.u32);
	// bl 0x880e6960
	ctx.lr = 0x880839C0;
	sub_880E6960(ctx, base);
	// lwz r7,728(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x88083994
	if (ctx.cr6.lt) goto loc_88083994;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_880839D8:
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88083f68
	if (!ctx.cr6.gt) goto loc_88083F68;
loc_880839E8:
	// lwz r10,720(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88083a1c
	if (!ctx.cr6.gt) goto loc_88083A1C;
	// mullw r8,r10,r28
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
loc_88083A00:
	// lbzx r9,r9,r29
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r29.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x88083a1c
	if (!ctx.cr6.eq) goto loc_88083A1C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// blt cr6,0x88083a00
	if (ctx.cr6.lt) goto loc_88083A00;
loc_88083A1C:
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// bne cr6,0x88083a38
	if (!ctx.cr6.eq) goto loc_88083A38;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x880e6960
	ctx.lr = 0x88083A34;
	sub_880E6960(ctx, base);
	// b 0x88083a7c
	goto loc_88083A7C;
loc_88083A38:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x880e6960
	ctx.lr = 0x88083A40;
	sub_880E6960(ctx, base);
	// lwz r11,720(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88083a7c
	if (!ctx.cr6.gt) goto loc_88083A7C;
loc_88083A50:
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lbzx r10,r11,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// bl 0x880e6960
	ctx.lr = 0x88083A6C;
	sub_880E6960(ctx, base);
	// lwz r11,720(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88083a50
	if (ctx.cr6.lt) goto loc_88083A50;
loc_88083A7C:
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880839e8
	if (ctx.cr6.lt) goto loc_880839E8;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_88083A94:
	// lwz r9,720(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x88083f68
	if (!ctx.cr6.gt) goto loc_88083F68;
loc_88083AA4:
	// lwz r8,724(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x88083ad4
	if (!ctx.cr6.gt) goto loc_88083AD4;
loc_88083AB4:
	// mullw r10,r9,r11
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lbzx r7,r10,r29
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x88083ad4
	if (!ctx.cr6.eq) goto loc_88083AD4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88083ab4
	if (ctx.cr6.lt) goto loc_88083AB4;
loc_88083AD4:
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// bne cr6,0x88083af0
	if (!ctx.cr6.eq) goto loc_88083AF0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x880e6960
	ctx.lr = 0x88083AEC;
	sub_880E6960(ctx, base);
	// b 0x88083b38
	goto loc_88083B38;
loc_88083AF0:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x880e6960
	ctx.lr = 0x88083AF8;
	sub_880E6960(ctx, base);
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88083b38
	if (!ctx.cr6.gt) goto loc_88083B38;
loc_88083B08:
	// lwz r11,720(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbzx r9,r10,r29
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// bl 0x880e6960
	ctx.lr = 0x88083B28;
	sub_880E6960(ctx, base);
	// lwz r8,724(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88083b08
	if (ctx.cr6.lt) goto loc_88083B08;
loc_88083B38:
	// lwz r9,720(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x88083aa4
	if (ctx.cr6.lt) goto loc_88083AA4;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_88083B50:
	// add r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 + ctx.r29.u64;
loc_88083B54:
	// lis r11,-21846
	ctx.r11.s64 = -1431699456;
	// lwz r9,724(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// li r19,0
	ctx.r19.s64 = 0;
	// ori r10,r11,43691
	ctx.r10.u64 = ctx.r11.u64 | 43691;
	// mulhwu r8,r9,r10
	ctx.r8.u64 = (uint64_t(ctx.r9.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r11,r8,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subf. r6,r7,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x88083cd0
	if (!ctx.cr0.eq) goto loc_88083CD0;
	// lwz r11,720(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mulhwu r8,r11,r10
	ctx.r8.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf. r6,r7,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x88083cd0
	if (ctx.cr0.eq) goto loc_88083CD0;
	// clrlwi r20,r11,31
	ctx.r20.u64 = ctx.r11.u32 & 0x1;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x88083e1c
	if (!ctx.cr6.gt) goto loc_88083E1C;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// addi r22,r9,23356
	ctx.r22.s64 = ctx.r9.s64 + 23356;
	// addi r25,r10,12704
	ctx.r25.s64 = ctx.r10.s64 + 12704;
loc_88083BB8:
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88083cbc
	if (!ctx.cr6.lt) goto loc_88083CBC;
	// addi r27,r29,1
	ctx.r27.s64 = ctx.r29.s64 + 1;
loc_88083BC8:
	// lwz r10,720(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r28,r25,4
	ctx.r28.s64 = ctx.r25.s64 + 4;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// mullw r11,r10,r23
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r23.s32);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lbzx r9,r27,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// lbzx r8,r11,r29
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r6,r27,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r5,r11,r29
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// extsb r8,r5
	ctx.r8.s64 = ctx.r5.s8;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r7,r27,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzx r5,r11,r29
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r4,r7
	ctx.r4.s64 = ctx.r7.s8;
	// extsb r8,r5
	ctx.r8.s64 = ctx.r5.s8;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r26,r9,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r26,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r30,r25
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// lwzx r5,r30,r28
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// bl 0x880e6960
	ctx.lr = 0x88083C50;
	sub_880E6960(ctx, base);
	// lwzx r8,r30,r28
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// bne cr6,0x88083cac
	if (!ctx.cr6.eq) goto loc_88083CAC;
	// srawi r11,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 1;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// rlwinm r9,r11,2,27,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r22
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r22.u32);
	// lwzx r9,r8,r22
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r22.u32);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bne cr6,0x88083c90
	if (!ctx.cr6.eq) goto loc_88083C90;
	// li r5,5
	ctx.r5.s64 = 5;
	// clrlwi r4,r11,27
	ctx.r4.u64 = ctx.r11.u32 & 0x1F;
	// b 0x88083ca8
	goto loc_88083CA8;
loc_88083C90:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r25,4
	ctx.r10.s64 = ctx.r25.s64 + 4;
	// xori r9,r11,126
	ctx.r9.u64 = ctx.r11.u64 ^ 126;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r8,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r4,r8,r25
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r25.u32);
loc_88083CA8:
	// bl 0x880e6960
	ctx.lr = 0x88083CAC;
	sub_880E6960(ctx, base);
loc_88083CAC:
	// lwz r11,720(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88083bc8
	if (ctx.cr6.lt) goto loc_88083BC8;
loc_88083CBC:
	// lwz r10,724(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r23,r23,3
	ctx.r23.s64 = ctx.r23.s64 + 3;
	// cmpw cr6,r23,r10
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88083bb8
	if (ctx.cr6.lt) goto loc_88083BB8;
	// b 0x88083e1c
	goto loc_88083E1C;
loc_88083CD0:
	// lwz r11,720(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// clrlwi r19,r9,31
	ctx.r19.u64 = ctx.r9.u32 & 0x1;
	// mulhwu r10,r11,r10
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpw cr6,r19,r9
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r9.s32, ctx.xer);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r22,r19
	ctx.r22.u64 = ctx.r19.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r20,r9,r11
	ctx.r20.u64 = ctx.r11.u64 - ctx.r9.u64;
	// bge cr6,0x88083e1c
	if (!ctx.cr6.lt) goto loc_88083E1C;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// addi r21,r9,23356
	ctx.r21.s64 = ctx.r9.s64 + 23356;
	// addi r26,r10,12704
	ctx.r26.s64 = ctx.r10.s64 + 12704;
loc_88083D08:
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88083e0c
	if (!ctx.cr6.lt) goto loc_88083E0C;
	// addi r25,r29,2
	ctx.r25.s64 = ctx.r29.s64 + 2;
	// addi r24,r29,1
	ctx.r24.s64 = ctx.r29.s64 + 1;
loc_88083D1C:
	// lwz r10,720(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r28,r26,4
	ctx.r28.s64 = ctx.r26.s64 + 4;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// mullw r11,r10,r22
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r22.s32);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lbzx r9,r25,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r11.u32);
	// lbzx r8,r24,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r11.u32);
	// lbzx r7,r11,r29
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r8,r7
	ctx.r8.s64 = ctx.r7.s8;
	// lbzx r5,r25,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r11.u32);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r10,r24,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r11.u32);
	// extsb r9,r5
	ctx.r9.s64 = ctx.r5.s8;
	// lbzx r7,r11,r29
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r27,r4,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r27,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r30,r26
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// lwzx r5,r30,r28
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// bl 0x880e6960
	ctx.lr = 0x88083DA0;
	sub_880E6960(ctx, base);
	// lwzx r3,r30,r28
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x88083dfc
	if (!ctx.cr6.eq) goto loc_88083DFC;
	// srawi r11,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 1;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// rlwinm r9,r11,2,27,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r21
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r21.u32);
	// lwzx r9,r8,r21
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r21.u32);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bne cr6,0x88083de0
	if (!ctx.cr6.eq) goto loc_88083DE0;
	// li r5,5
	ctx.r5.s64 = 5;
	// clrlwi r4,r11,27
	ctx.r4.u64 = ctx.r11.u32 & 0x1F;
	// b 0x88083df8
	goto loc_88083DF8;
loc_88083DE0:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r26,4
	ctx.r10.s64 = ctx.r26.s64 + 4;
	// xori r9,r11,126
	ctx.r9.u64 = ctx.r11.u64 ^ 126;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r8,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r4,r8,r26
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r26.u32);
loc_88083DF8:
	// bl 0x880e6960
	ctx.lr = 0x88083DFC;
	sub_880E6960(ctx, base);
loc_88083DFC:
	// lwz r11,720(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r23,r23,3
	ctx.r23.s64 = ctx.r23.s64 + 3;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88083d1c
	if (ctx.cr6.lt) goto loc_88083D1C;
loc_88083E0C:
	// lwz r10,724(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r22,r22,2
	ctx.r22.s64 = ctx.r22.s64 + 2;
	// cmpw cr6,r22,r10
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88083d08
	if (ctx.cr6.lt) goto loc_88083D08;
loc_88083E1C:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x88083ecc
	if (!ctx.cr6.gt) goto loc_88083ECC;
loc_88083E28:
	// lwz r8,724(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x88083e5c
	if (!ctx.cr6.gt) goto loc_88083E5C;
	// lwz r9,720(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
loc_88083E3C:
	// mullw r10,r9,r11
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lbzx r7,r10,r29
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x88083e5c
	if (!ctx.cr6.eq) goto loc_88083E5C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88083e3c
	if (ctx.cr6.lt) goto loc_88083E3C;
loc_88083E5C:
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// bne cr6,0x88083e78
	if (!ctx.cr6.eq) goto loc_88083E78;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x880e6960
	ctx.lr = 0x88083E74;
	sub_880E6960(ctx, base);
	// b 0x88083ec0
	goto loc_88083EC0;
loc_88083E78:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x880e6960
	ctx.lr = 0x88083E80;
	sub_880E6960(ctx, base);
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88083ec0
	if (!ctx.cr6.gt) goto loc_88083EC0;
loc_88083E90:
	// lwz r11,720(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbzx r9,r10,r29
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// bl 0x880e6960
	ctx.lr = 0x88083EB0;
	sub_880E6960(ctx, base);
	// lwz r8,724(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88083e90
	if (ctx.cr6.lt) goto loc_88083E90;
loc_88083EC0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r20
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x88083e28
	if (ctx.cr6.lt) goto loc_88083E28;
loc_88083ECC:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x88083f68
	if (ctx.cr6.eq) goto loc_88083F68;
	// lwz r10,720(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// cmpw cr6,r20,r10
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88083efc
	if (!ctx.cr6.lt) goto loc_88083EFC;
loc_88083EE4:
	// lbzx r9,r11,r29
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x88083efc
	if (!ctx.cr6.eq) goto loc_88083EFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88083ee4
	if (ctx.cr6.lt) goto loc_88083EE4;
loc_88083EFC:
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// bne cr6,0x88083f1c
	if (!ctx.cr6.eq) goto loc_88083F1C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x880e6960
	ctx.lr = 0x88083F14;
	sub_880E6960(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_88083F1C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x880e6960
	ctx.lr = 0x88083F24;
	sub_880E6960(ctx, base);
	// lwz r11,720(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88083f68
	if (!ctx.cr6.lt) goto loc_88083F68;
loc_88083F34:
	// lbzx r11,r30,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x880e6960
	ctx.lr = 0x88083F48;
	sub_880E6960(ctx, base);
	// lwz r10,720(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88083f34
	if (ctx.cr6.lt) goto loc_88083F34;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_88083F60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88080230
	ctx.lr = 0x88083F68;
	sub_88080230(ctx, base);
loc_88083F68:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880B0090) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880B0098;
	__savegprlr_14(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stw r6,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r6.u32);
	// lwz r6,524(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// lwz r7,516(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,556(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 556);
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// stw r8,428(r1)
	REX_STORE_U32(ctx.r1.u32 + 428, ctx.r8.u32);
	// stw r9,436(r1)
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r9.u32);
	// lwz r28,2604(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 2604);
	// lwz r26,2608(r3)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 2608);
	// lwz r10,12(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r9,8(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r8,12(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// subf r6,r10,r26
	ctx.r6.u64 = ctx.r26.u64 - ctx.r10.u64;
	// lwz r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// subf r4,r9,r28
	ctx.r4.u64 = ctx.r28.u64 - ctx.r9.u64;
	// subf r3,r8,r26
	ctx.r3.u64 = ctx.r26.u64 - ctx.r8.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subf r7,r7,r28
	ctx.r7.u64 = ctx.r28.u64 - ctx.r7.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stw r5,404(r1)
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r5.u32);
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lwz r29,2612(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 2612);
	// add r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 + ctx.r8.u64;
	// lwz r5,548(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 548);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r25,2616(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 2616);
	// and r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 & ctx.r29.u64;
	// lwz r30,468(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// and r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 & ctx.r29.u64;
	// lwz r24,28020(r31)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// and r6,r6,r25
	ctx.r6.u64 = ctx.r6.u64 & ctx.r25.u64;
	// and r3,r3,r25
	ctx.r3.u64 = ctx.r3.u64 & ctx.r25.u64;
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lwz r20,0(r5)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r29,r30,256
	ctx.r29.s64 = ctx.r30.s64 + 256;
	// lwz r21,12(r5)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// stw r9,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// subf r18,r28,r7
	ctx.r18.u64 = ctx.r7.u64 - ctx.r28.u64;
	// stw r8,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// subf r17,r26,r6
	ctx.r17.u64 = ctx.r6.u64 - ctx.r26.u64;
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// subf r15,r28,r4
	ctx.r15.u64 = ctx.r4.u64 - ctx.r28.u64;
	// subf r14,r26,r3
	ctx.r14.u64 = ctx.r3.u64 - ctx.r26.u64;
	// beq cr6,0x880b05b0
	if (ctx.cr6.eq) goto loc_880B05B0;
	// lwz r20,492(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// lwz r19,484(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810a970
	ctx.lr = 0x880B0188;
	sub_8810A970(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r7,128(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r28,16
	ctx.r28.s64 = 16;
	// lwz r4,1380(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// srawi r10,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// lwz r26,508(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// mullw r6,r10,r4
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r10,1560(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// bne cr6,0x880b01dc
	if (!ctx.cr6.eq) goto loc_880B01DC;
	// lwz r3,2488(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x880B01D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x880b01f4
	goto loc_880B01F4;
loc_880B01DC:
	// lwz r3,2496(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x880B01F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B01F4:
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810a970
	ctx.lr = 0x880B020C;
	sub_8810A970(ctx, base);
	// lwz r8,140(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r4,1380(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// lwz r7,136(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bne cr6,0x880b0258
	if (!ctx.cr6.eq) goto loc_880B0258;
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
	// add r3,r11,r23
	ctx.r3.u64 = ctx.r11.u64 + ctx.r23.u64;
	// bctrl 
	ctx.lr = 0x880B0254;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x880b0284
	goto loc_880B0284;
loc_880B0258:
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
	// add r3,r11,r23
	ctx.r3.u64 = ctx.r11.u64 + ctx.r23.u64;
	// bctrl 
	ctx.lr = 0x880B0284;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B0284:
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
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x880B02B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r9,r1,164
	ctx.r9.s64 = ctx.r1.s64 + 164;
	// lwz r25,476(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// addi r8,r1,168
	ctx.r8.s64 = ctx.r1.s64 + 168;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r20,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r20.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r19,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r19.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880B02F8;
	sub_88085938(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// stw r11,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stw r10,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88095050
	ctx.lr = 0x880B0324;
	sub_88095050(ctx, base);
	// lwz r9,136(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r3,140(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,156
	ctx.r6.s64 = ctx.r1.s64 + 156;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// stw r9,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stw r3,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88095050
	ctx.lr = 0x880B0350;
	sub_88095050(ctx, base);
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// lwz r24,152(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lwz r23,148(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r22,144(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r21,156(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// beq cr6,0x880b0450
	if (ctx.cr6.eq) goto loc_880B0450;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// lwz r4,428(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880B0394;
	sub_8810B7F8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// lwz r4,452(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880B03B8;
	sub_8810B7F8(ctx, base);
	// lwz r11,2844(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2844);
	// li r10,8
	ctx.r10.s64 = 8;
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
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x880B03E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// addi r8,r1,148
	ctx.r8.s64 = ctx.r1.s64 + 148;
	// lwz r4,404(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r20,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r20.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r19,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r19.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880B0428;
	sub_88085938(ctx, base);
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r6,168(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r5,164(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,160(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// add r27,r10,r6
	ctx.r27.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwz r3,152(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// add r26,r11,r5
	ctx.r26.u64 = ctx.r11.u64 + ctx.r5.u64;
	// or r28,r3,r4
	ctx.r28.u64 = ctx.r3.u64 | ctx.r4.u64;
	// b 0x880b045c
	goto loc_880B045C;
loc_880B0450:
	// lwz r28,160(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r26,164(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r27,168(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
loc_880B045C:
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b053c
	if (ctx.cr6.eq) goto loc_880B053C;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// lwz r4,436(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880B0490;
	sub_8810B7F8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// lwz r4,460(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880B04B4;
	sub_8810B7F8(ctx, base);
	// lwz r11,2844(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2844);
	// li r10,8
	ctx.r10.s64 = 8;
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
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x880B04E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// addi r8,r1,148
	ctx.r8.s64 = ctx.r1.s64 + 148;
	// lwz r4,412(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r20,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r20.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r19,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r19.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880B0524;
	sub_88085938(ctx, base);
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r6,152(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// add r27,r10,r27
	ctx.r27.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// or r28,r6,r28
	ctx.r28.u64 = ctx.r6.u64 | ctx.r28.u64;
loc_880B053C:
	// lwz r30,500(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B0558;
	sub_88085E60(ctx, base);
	// add r29,r3,r27
	ctx.r29.u64 = ctx.r3.u64 + ctx.r27.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x880b0578
	if (!ctx.cr6.eq) goto loc_880B0578;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x880b0578
	if (!ctx.cr6.eq) goto loc_880B0578;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// beq cr6,0x880b057c
	if (ctx.cr6.eq) goto loc_880B057C;
loc_880B0578:
	// li r6,1
	ctx.r6.s64 = 1;
loc_880B057C:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B0590;
	sub_88085E60(ctx, base);
	// lwz r11,108(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 108);
	// add r10,r3,r29
	ctx.r10.u64 = ctx.r3.u64 + ctx.r29.u64;
	// lwz r9,564(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 564);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880B05B0:
	// srawi r11,r18,31
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r18.s32 >> 31;
	// srawi r9,r17,31
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r17.s32 >> 31;
	// xor r8,r18,r11
	ctx.r8.u64 = ctx.r18.u64 ^ ctx.r11.u64;
	// xor r7,r17,r9
	ctx.r7.u64 = ctx.r17.u64 ^ ctx.r9.u64;
	// subf r11,r11,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r11.u64;
	// lis r10,-30683
	ctx.r10.s64 = -2010841088;
	// subf r9,r9,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// addi r10,r10,6848
	ctx.r10.s64 = ctx.r10.s64 + 6848;
	// bgt cr6,0x880b060c
	if (ctx.cr6.gt) goto loc_880B060C;
	// cmpwi cr6,r9,158
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 158, ctx.xer);
	// bgt cr6,0x880b060c
	if (ctx.cr6.gt) goto loc_880B060C;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,540(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 540);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r5,r7,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r4,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lwzx r9,r3,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// add r28,r9,r8
	ctx.r28.u64 = ctx.r9.u64 + ctx.r8.u64;
	// b 0x880b0618
	goto loc_880B0618;
loc_880B060C:
	// lwz r11,540(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 540);
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r28,r9,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
loc_880B0618:
	// srawi r9,r15,31
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r15.s32 >> 31;
	// srawi r8,r14,31
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r14.s32 >> 31;
	// xor r7,r15,r9
	ctx.r7.u64 = ctx.r15.u64 ^ ctx.r9.u64;
	// xor r6,r14,r8
	ctx.r6.u64 = ctx.r14.u64 ^ ctx.r8.u64;
	// subf r9,r9,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r9.u64;
	// subf r8,r8,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r8.u64;
	// cmpwi cr6,r9,158
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 158, ctx.xer);
	// bgt cr6,0x880b0668
	if (ctx.cr6.gt) goto loc_880B0668;
	// cmpwi cr6,r8,158
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 158, ctx.xer);
	// bgt cr6,0x880b0668
	if (ctx.cr6.gt) goto loc_880B0668;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r6,r8,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
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
	// b 0x880b0670
	goto loc_880B0670;
loc_880B0668:
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880B0670:
	// lwz r26,492(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// lwz r25,484(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r22,r11,r28
	ctx.r22.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x8810a970
	ctx.lr = 0x880B0694;
	sub_8810A970(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r7,128(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r28,16
	ctx.r28.s64 = 16;
	// lwz r4,1380(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// srawi r11,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 2;
	// srawi r6,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// lwz r24,508(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r10,1560(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// bne cr6,0x880b06e8
	if (!ctx.cr6.eq) goto loc_880B06E8;
	// lwz r3,2488(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x880B06E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x880b0700
	goto loc_880B0700;
loc_880B06E8:
	// lwz r3,2496(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x880B0700;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B0700:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810a970
	ctx.lr = 0x880B0718;
	sub_8810A970(ctx, base);
	// lwz r8,140(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r4,1380(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// lwz r7,136(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// srawi r11,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 2;
	// lwz r10,1560(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// srawi r9,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 2;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne cr6,0x880b0764
	if (!ctx.cr6.eq) goto loc_880B0764;
	// lwz r3,2488(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r3,r11,r23
	ctx.r3.u64 = ctx.r11.u64 + ctx.r23.u64;
	// bctrl 
	ctx.lr = 0x880B0760;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x880b077c
	goto loc_880B077C;
loc_880B0764:
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,2496(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r3,r11,r23
	ctx.r3.u64 = ctx.r11.u64 + ctx.r23.u64;
	// bctrl 
	ctx.lr = 0x880B077C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B077C:
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
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x880B07A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r21
	ctx.ctr.u64 = ctx.r21.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bctrl 
	ctx.lr = 0x880B07C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,132(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// add r28,r3,r22
	ctx.r28.u64 = ctx.r3.u64 + ctx.r22.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// stw r10,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// stw r9,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r9.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88095050
	ctx.lr = 0x880B07F4;
	sub_88095050(ctx, base);
	// lwz r4,136(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r3,140(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,156
	ctx.r6.s64 = ctx.r1.s64 + 156;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// stw r4,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r4.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stw r3,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88095050
	ctx.lr = 0x880B0820;
	sub_88095050(ctx, base);
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// lwz r27,152(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lwz r26,148(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r25,144(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r24,156(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// beq cr6,0x880b08d0
	if (ctx.cr6.eq) goto loc_880B08D0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r4,428(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880B0864;
	sub_8810B7F8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r4,452(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880B0888;
	sub_8810B7F8(ctx, base);
	// lwz r11,2844(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2844);
	// li r10,8
	ctx.r10.s64 = 8;
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
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x880B08B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,404(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// li r4,8
	ctx.r4.s64 = 8;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x880B08CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
loc_880B08D0:
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b0980
	if (ctx.cr6.eq) goto loc_880B0980;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r4,436(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880B0904;
	sub_8810B7F8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r4,460(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880B0928;
	sub_8810B7F8(ctx, base);
	// lwz r11,2844(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2844);
	// li r10,8
	ctx.r10.s64 = 8;
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
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x880B0954;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,412(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// li r4,8
	ctx.r4.s64 = 8;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x880B096C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,564(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 564);
	// add r9,r3,r28
	ctx.r9.u64 = ctx.r3.u64 + ctx.r28.u64;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880B0980:
	// lwz r11,564(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 564);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BF708) {
	REX_FUNC_PROLOGUE();
	// b 0x880bf590
	sub_880BF590(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BF710) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,13600
	ctx.r10.s64 = ctx.r11.s64 + 13600;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x880bf750
	if (ctx.cr6.eq) goto loc_880BF750;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x880bf270
	ctx.lr = 0x880BF74C;
	sub_880BF270(ctx, base);
	// stw r30,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
loc_880BF750:
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880bf76c
	if (ctx.cr6.eq) goto loc_880BF76C;
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x88050358
	ctx.lr = 0x880BF768;
	sub_88050358(ctx, base);
	// stw r30,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_880BF76C:
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

DEFINE_REX_FUNC(sub_880BF9E0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x880bfa70
	if (!ctx.cr6.gt) goto loc_880BFA70;
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880BFA10:
	// lbz r3,0(r5)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// lbz r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// lbzu r9,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// lbzu r10,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// subf r7,r7,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r7.u64;
	// subf r31,r10,r9
	ctx.r31.u64 = ctx.r9.u64 - ctx.r10.u64;
	// mullw r3,r7,r7
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// lbzu r30,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r30.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// lbzu r8,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// lbzu r7,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// lbzu r9,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mullw r10,r31,r31
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r31.s32);
	// subf r3,r8,r30
	ctx.r3.u64 = ctx.r30.u64 - ctx.r8.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r10,r3,r3
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r3.s32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// subf r7,r9,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r10,r7,r7
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bdnz 0x880bfa10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880BFA10;
loc_880BFA70:
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f13,13624(r8)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r8.u32 + 13624);
	// fdiv f0,f12,f11
	ctx.f0.f64 = ctx.f12.f64 / ctx.f11.f64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x880bfac0
	if (!ctx.cr6.gt) goto loc_880BFAC0;
	// fmul f13,f1,f1
	ctx.f13.f64 = ctx.f1.f64 * ctx.f1.f64;
	// fdiv f1,f13,f0
	ctx.f1.f64 = ctx.f13.f64 / ctx.f0.f64;
	// bl 0x881ef478
	ctx.lr = 0x880BFAB0;
	sub_881EF478(ctx, base);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f0,12096(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 12096);
	// fmul f1,f1,f0
	ctx.f1.f64 = ctx.f1.f64 * ctx.f0.f64;
	// b 0x880bfac8
	goto loc_880BFAC8;
loc_880BFAC0:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f1,12320(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 12320);
loc_880BFAC8:
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

DEFINE_REX_FUNC(sub_880C1498) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880C14A0;
	__savegprlr_14(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,492(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r6,444(r1)
	REX_STORE_U32(ctx.r1.u32 + 444, ctx.r6.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r10,476(r1)
	REX_STORE_U32(ctx.r1.u32 + 476, ctx.r10.u32);
	// mulli r11,r11,276
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(276));
	// lwz r10,7764(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 7764);
	// lwz r6,31108(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 31108);
	// stw r4,428(r1)
	REX_STORE_U32(ctx.r1.u32 + 428, ctx.r4.u32);
	// stw r5,436(r1)
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r5.u32);
	// stw r7,452(r1)
	REX_STORE_U32(ctx.r1.u32 + 452, ctx.r7.u32);
	// stw r8,460(r1)
	REX_STORE_U32(ctx.r1.u32 + 460, ctx.r8.u32);
	// stw r9,468(r1)
	REX_STORE_U32(ctx.r1.u32 + 468, ctx.r9.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// add r14,r10,r11
	ctx.r14.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x880c1508
	if (ctx.cr6.eq) goto loc_880C1508;
	// lwz r11,20268(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c1508
	if (!ctx.cr6.eq) goto loc_880C1508;
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r10,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r10.u32);
loc_880C1508:
	// lwz r11,28132(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 28132);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880c153c
	if (!ctx.cr6.eq) goto loc_880C153C;
	// lwz r11,1380(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 1380);
	// lwz r6,1384(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 1384);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// srawi r11,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 1;
	// add r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r5,452(r1)
	REX_STORE_U32(ctx.r1.u32 + 452, ctx.r5.u32);
	// stw r4,460(r1)
	REX_STORE_U32(ctx.r1.u32 + 460, ctx.r4.u32);
	// stw r3,468(r1)
	REX_STORE_U32(ctx.r1.u32 + 468, ctx.r3.u32);
loc_880C153C:
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// addi r4,r29,17552
	ctx.r4.s64 = ctx.r29.s64 + 17552;
	// lwz r3,25768(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 25768);
	// bl 0x88110d00
	ctx.lr = 0x880C154C;
	sub_88110D00(ctx, base);
	// cmplw cr6,r15,r28
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x880c1834
	if (!ctx.cr6.lt) goto loc_880C1834;
	// rlwinm r11,r15,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r16,588(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 588);
	// subfic r10,r15,1
	ctx.xer.ca = ctx.r15.u32 <= 1;
	ctx.r10.u64 = static_cast<uint64_t>(1) - ctx.r15.u64;
	// lwz r17,580(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 580);
	// lwz r18,572(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 572);
	// lwz r23,564(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 564);
	// lwz r19,556(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 556);
	// lwz r24,548(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 548);
	// lwz r20,540(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 540);
	// lwz r25,532(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// lwz r21,524(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// lwz r26,516(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// lwz r22,508(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// lwz r27,500(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// stw r11,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// stw r10,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r10.u32);
	// b 0x880c159c
	goto loc_880C159C;
loc_880C1598:
	// li r31,1
	ctx.r31.s64 = 1;
loc_880C159C:
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// lwz r10,2272(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 2272);
	// lwz r28,452(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// subf r9,r15,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r15.u64;
	// lwz r30,460(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stw r7,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r7.u32);
	// beq cr6,0x880c1604
	if (ctx.cr6.eq) goto loc_880C1604;
	// lwz r11,724(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 724);
	// lwz r10,208(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r15,r11
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x880c15f0
	if (!ctx.cr6.lt) goto loc_880C15F0;
	// lwz r11,2264(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 2264);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880c15f0
	if (ctx.cr6.eq) goto loc_880C15F0;
	// stw r31,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r31.u32);
loc_880C15F0:
	// lwz r11,2264(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 2264);
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880c1604
	if (ctx.cr6.eq) goto loc_880C1604;
	// stw r31,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
loc_880C1604:
	// lwz r11,720(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 720);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x880c1718
	if (!ctx.cr6.gt) goto loc_880C1718;
	// lwz r11,460(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// lwz r10,468(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r9,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r9.u32);
loc_880C1624:
	// lwz r11,1564(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 1564);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,3
	ctx.r11.s64 = 3;
	// bne cr6,0x880c1638
	if (!ctx.cr6.eq) goto loc_880C1638;
	// lwz r11,1568(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 1568);
loc_880C1638:
	// lwz r6,224(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r6,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r6.u32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r7,476(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r7,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r7.u32);
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// lwz r3,596(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// stw r11,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// stw r3,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,484(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// std r15,240(r1)
	REX_STORE_U64(ctx.r1.u32 + 240, ctx.r15.u64);
	// lwz r4,428(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// stw r16,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r16.u32);
	// stw r17,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r17.u32);
	// stw r18,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r18.u32);
	// stw r23,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r23.u32);
	// stw r19,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r19.u32);
	// stw r24,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r24.u32);
	// stw r20,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r20.u32);
	// stw r25,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stw r21,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
	// stw r26,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r22,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// lwz r15,228(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// stw r10,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
	// lwz r11,228(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// add r10,r15,r30
	ctx.r10.u64 = ctx.r15.u64 + ctx.r30.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,232(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x880c0f10
	ctx.lr = 0x880C16C8;
	sub_880C0F10(ctx, base);
	// lwz r11,720(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 720);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// ld r15,240(r1)
	ctx.r15.u64 = REX_LOAD_U64(ctx.r1.u32 + 240);
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r27,r27,1536
	ctx.r27.s64 = ctx.r27.s64 + 1536;
	// addi r26,r26,768
	ctx.r26.s64 = ctx.r26.s64 + 768;
	// addi r25,r25,768
	ctx.r25.s64 = ctx.r25.s64 + 768;
	// addi r24,r24,768
	ctx.r24.s64 = ctx.r24.s64 + 768;
	// addi r23,r23,768
	ctx.r23.s64 = ctx.r23.s64 + 768;
	// addi r22,r22,12
	ctx.r22.s64 = ctx.r22.s64 + 12;
	// addi r21,r21,12
	ctx.r21.s64 = ctx.r21.s64 + 12;
	// addi r20,r20,12
	ctx.r20.s64 = ctx.r20.s64 + 12;
	// addi r19,r19,12
	ctx.r19.s64 = ctx.r19.s64 + 12;
	// addi r18,r18,12
	ctx.r18.s64 = ctx.r18.s64 + 12;
	// addi r17,r17,1536
	ctx.r17.s64 = ctx.r17.s64 + 1536;
	// addi r16,r16,48
	ctx.r16.s64 = ctx.r16.s64 + 48;
	// addi r14,r14,276
	ctx.r14.s64 = ctx.r14.s64 + 276;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x880c1624
	if (ctx.cr6.lt) goto loc_880C1624;
loc_880C1718:
	// lwz r11,31108(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 31108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c1758
	if (ctx.cr6.eq) goto loc_880C1758;
	// lwz r11,20268(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 20268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c1758
	if (!ctx.cr6.eq) goto loc_880C1758;
	// lwz r11,31136(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 31136);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,216(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stbx r10,r11,r15
	REX_STORE_U8(ctx.r11.u32 + ctx.r15.u32, ctx.r10.u8);
	// beq cr6,0x880c18a4
	if (ctx.cr6.eq) goto loc_880C18A4;
	// lwz r11,31128(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 31128);
	// lwz r10,208(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x881ece40
	ctx.lr = 0x880C1758;
	sub_881ECE40(ctx, base);
loc_880C1758:
	// lwz r28,436(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
loc_880C175C:
	// lwz r11,2340(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 2340);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880c17a0
	if (ctx.cr6.eq) goto loc_880C17A0;
	// subf r11,r15,r28
	ctx.r11.u64 = ctx.r28.u64 - ctx.r15.u64;
	// lwz r31,428(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,212(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r7,468(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// lwz r6,460(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r5,452(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8810c9e8
	ctx.lr = 0x880C17A0;
	sub_8810C9E8(ctx, base);
loc_880C17A0:
	// lwz r11,1408(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 1408);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,460(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// lwz r5,452(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r4,468(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,1404(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 1404);
	// lwz r3,220(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// add r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r9,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r6,460(r1)
	REX_STORE_U32(ctx.r1.u32 + 460, ctx.r6.u32);
	// stw r5,452(r1)
	REX_STORE_U32(ctx.r1.u32 + 452, ctx.r5.u32);
	// stw r7,468(r1)
	REX_STORE_U32(ctx.r1.u32 + 468, ctx.r7.u32);
	// beq cr6,0x880c1810
	if (ctx.cr6.eq) goto loc_880C1810;
	// lwz r11,2340(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 2340);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880c1810
	if (ctx.cr6.eq) goto loc_880C1810;
	// lwz r11,428(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8810c9e8
	ctx.lr = 0x880C1810;
	sub_8810C9E8(ctx, base);
loc_880C1810:
	// lwz r11,208(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// lwz r10,444(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r15,r10
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r10.u32, ctx.xer);
	// stw r9,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// rotlwi r28,r10,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// blt cr6,0x880c1598
	if (ctx.cr6.lt) goto loc_880C1598;
	// lwz r15,436(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
loc_880C1834:
	// addi r3,r29,17552
	ctx.r3.s64 = ctx.r29.s64 + 17552;
	// bl 0x88111038
	ctx.lr = 0x880C183C;
	sub_88111038(ctx, base);
	// lwz r11,31108(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 31108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c189c
	if (ctx.cr6.eq) goto loc_880C189C;
	// lwz r11,20268(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 20268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c189c
	if (!ctx.cr6.eq) goto loc_880C189C;
	// lwz r11,216(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c189c
	if (!ctx.cr6.eq) goto loc_880C189C;
	// lwz r11,31128(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 31128);
	// rlwinm r30,r15,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,-1
	ctx.r4.s64 = -1;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x881ecd98
	ctx.lr = 0x880C1878;
	sub_881ECD98(ctx, base);
	// cmpw cr6,r15,r28
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x880c189c
	if (!ctx.cr6.lt) goto loc_880C189C;
	// subf r31,r15,r28
	ctx.r31.u64 = ctx.r28.u64 - ctx.r15.u64;
loc_880C1884:
	// lwz r11,31128(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 31128);
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x881ece40
	ctx.lr = 0x880C1890;
	sub_881ECE40(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x880c1884
	if (!ctx.cr0.eq) goto loc_880C1884;
loc_880C189C:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880C18A4:
	// lwz r11,31136(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 31136);
	// lwz r28,436(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r10,-1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880c175c
	if (ctx.cr6.eq) goto loc_880C175C;
	// cmpw cr6,r28,r15
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r15.s32, ctx.xer);
	// bgt cr6,0x880c18e8
	if (ctx.cr6.gt) goto loc_880C18E8;
	// lwz r11,236(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r15
	ctx.r31.u64 = ctx.r11.u64 + ctx.r15.u64;
loc_880C18D0:
	// lwz r11,31128(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 31128);
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x881ece40
	ctx.lr = 0x880C18DC;
	sub_881ECE40(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x880c18d0
	if (!ctx.cr0.eq) goto loc_880C18D0;
loc_880C18E8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// b 0x880c175c
	goto loc_880C175C;
}

DEFINE_REX_FUNC(sub_880C8280) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x880C8288;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x880c8310
	if (ctx.cr6.eq) goto loc_880C8310;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x880c8310
	if (ctx.cr6.eq) goto loc_880C8310;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880c8310
	if (ctx.cr6.eq) goto loc_880C8310;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x880c8310
	if (ctx.cr6.eq) goto loc_880C8310;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x880c8310
	if (ctx.cr6.eq) goto loc_880C8310;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x880c83b4
	if (ctx.cr6.lt) goto loc_880C83B4;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bgt cr6,0x880c83b4
	if (ctx.cr6.gt) goto loc_880C83B4;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,44(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r4,40(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,344(r3)
	REX_STORE_U32(ctx.r3.u32 + 344, ctx.r10.u32);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x880c6ab0
	ctx.lr = 0x880C8300;
	sub_880C6AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880c831c
	if (ctx.cr6.eq) goto loc_880C831C;
loc_880C8308:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_880C8310:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_880C831C:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r5,52(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x880c6ab0
	ctx.lr = 0x880C832C;
	sub_880C6AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880c8308
	if (!ctx.cr6.eq) goto loc_880C8308;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x880c6ab0
	ctx.lr = 0x880C8344;
	sub_880C6AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880c8308
	if (!ctx.cr6.eq) goto loc_880C8308;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r5,36(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x880c6ab0
	ctx.lr = 0x880C835C;
	sub_880C6AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880c8308
	if (!ctx.cr6.eq) goto loc_880C8308;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880c6ab0
	ctx.lr = 0x880C8374;
	sub_880C6AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880c8308
	if (!ctx.cr6.eq) goto loc_880C8308;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r5,28(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x880c6ab0
	ctx.lr = 0x880C838C;
	sub_880C6AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880c8308
	if (!ctx.cr6.eq) goto loc_880C8308;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880c6e80
	ctx.lr = 0x880C839C;
	sub_880C6E80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880c83b4
	if (!ctx.cr6.eq) goto loc_880C83B4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_880C83B4:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880c80f0
	ctx.lr = 0x880C83D4;
	sub_880C80F0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CA2C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x880CA2D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x880ca32c
	if (!ctx.cr6.eq) goto loc_880CA32C;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x880ca32c
	if (!ctx.cr6.eq) goto loc_880CA32C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x880ca368
	if (!ctx.cr6.gt) goto loc_880CA368;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_880CA304:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880547a0
	ctx.lr = 0x880CA314;
	sub_880547A0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// add r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 + ctx.r26.u64;
	// bne 0x880ca304
	if (!ctx.cr0.eq) goto loc_880CA304;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_880CA32C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x880ca368
	if (!ctx.cr6.gt) goto loc_880CA368;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
loc_880CA338:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x880ca358
	if (!ctx.cr6.gt) goto loc_880CA358;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// subf r10,r8,r30
	ctx.r10.u64 = ctx.r30.u64 - ctx.r8.u64;
	// subf r11,r7,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r7.u64;
loc_880CA34C:
	// lbzux r9,r11,r7
	ea = ctx.r11.u32 + ctx.r7.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbux r9,r10,r8
	ea = ctx.r10.u32 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x880ca34c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880CA34C;
loc_880CA358:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// add r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 + ctx.r26.u64;
	// bne 0x880ca338
	if (!ctx.cr0.eq) goto loc_880CA338;
loc_880CA368:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CAC40) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x880CAC48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,16(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r29,16(r10)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x880cac70
	if (ctx.cr6.eq) goto loc_880CAC70;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bne cr6,0x880cac78
	if (!ctx.cr6.eq) goto loc_880CAC78;
loc_880CAC70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880c8e68
	ctx.lr = 0x880CAC78;
	sub_880C8E68(ctx, base);
loc_880CAC78:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x880cac88
	if (ctx.cr6.eq) goto loc_880CAC88;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// bne cr6,0x880cac90
	if (!ctx.cr6.eq) goto loc_880CAC90;
loc_880CAC88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880c8cf0
	ctx.lr = 0x880CAC90;
	sub_880C8CF0(ctx, base);
loc_880CAC90:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x880caca8
	if (!ctx.cr6.eq) goto loc_880CACA8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,14(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// beq cr6,0x880cacc0
	if (ctx.cr6.eq) goto loc_880CACC0;
loc_880CACA8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x880cacc8
	if (!ctx.cr6.eq) goto loc_880CACC8;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r10,14(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x880cacc8
	if (!ctx.cr6.eq) goto loc_880CACC8;
loc_880CACC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880c90f0
	ctx.lr = 0x880CACC8;
	sub_880C90F0(ctx, base);
loc_880CACC8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x880c94e0
	ctx.lr = 0x880CACD4;
	sub_880C94E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880cad38
	if (!ctx.cr6.eq) goto loc_880CAD38;
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm r8,r11,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// lwz r9,112(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r7,120(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// rlwinm r6,r10,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 | ctx.r11.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// or r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 | ctx.r10.u64;
	// stw r5,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r5.u32);
	// stw r9,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// stw r7,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r7.u32);
	// stw r11,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bl 0x880c94e0
	ctx.lr = 0x880CAD14;
	sub_880C94E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880cad38
	if (!ctx.cr6.eq) goto loc_880CAD38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880c9600
	ctx.lr = 0x880CAD24;
	sub_880C9600(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880cad38
	if (!ctx.cr6.eq) goto loc_880CAD38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ca778
	ctx.lr = 0x880CAD34;
	sub_880CA778(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_880CAD38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CB398) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x880CB3A0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,1524(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1524);
	// lis r24,80
	ctx.r24.s64 = 5242880;
	// lwz r26,1528(r3)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 1528);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// extsb r30,r11
	ctx.r30.s64 = ctx.r11.s8;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// ori r24,r24,14
	ctx.r24.u64 = ctx.r24.u64 | 14;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x880cb48c
	if (ctx.cr6.eq) goto loc_880CB48C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x880cb48c
	if (ctx.cr6.eq) goto loc_880CB48C;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// ble cr6,0x880cb448
	if (!ctx.cr6.gt) goto loc_880CB448;
	// addi r29,r26,4
	ctx.r29.s64 = ctx.r26.s64 + 4;
loc_880CB3F0:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x880cb40c
	if (ctx.cr6.lt) goto loc_880CB40C;
	// bne cr6,0x880cb454
	if (!ctx.cr6.eq) goto loc_880CB454;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x880cb464
	if (!ctx.cr6.eq) goto loc_880CB464;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x880cb438
	goto loc_880CB438;
loc_880CB40C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,45
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 45, ctx.xer);
	// bne cr6,0x880cb47c
	if (!ctx.cr6.eq) goto loc_880CB47C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x880cb150
	ctx.lr = 0x880CB428;
	sub_880CB150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880cb434
	if (!ctx.cr6.eq) goto loc_880CB434;
	// li r27,1
	ctx.r27.s64 = 1;
loc_880CB434:
	// li r11,1
	ctx.r11.s64 = 1;
loc_880CB438:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x880cb3f0
	if (ctx.cr6.lt) goto loc_880CB3F0;
loc_880CB448:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_880CB454:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,179
	ctx.r3.u64 = ctx.r3.u64 | 179;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_880CB464:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwzx r10,r11,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// stw r10,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_880CB47C:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,190
	ctx.r3.u64 = ctx.r3.u64 | 190;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_880CB48C:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,191
	ctx.r3.u64 = ctx.r3.u64 | 191;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CC988) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x880CC990;
	__savegprlr_29(ctx, base);
	// li r30,3
	ctx.r30.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r30.u32);
	// lwz r7,24(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x880cc9b8
	if (!ctx.cr6.eq) goto loc_880CC9B8;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_880CC9B8:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880cca74
	if (!ctx.cr6.eq) goto loc_880CCA74;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880cca74
	if (!ctx.cr6.eq) goto loc_880CCA74;
	// ld r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpd cr6,r11,r5
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r5.s64, ctx.xer);
	// blt cr6,0x880cca84
	if (ctx.cr6.lt) goto loc_880CCA84;
	// bne cr6,0x880ccaa0
	if (!ctx.cr6.eq) goto loc_880CCAA0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x880cca04
	if (!ctx.cr6.eq) goto loc_880CCA04;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// b 0x880cca64
	goto loc_880CCA64;
loc_880CCA04:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880cca50
	if (!ctx.cr6.eq) goto loc_880CCA50;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x880cca28
	if (!ctx.cr6.eq) goto loc_880CCA28;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x880cca28
	if (!ctx.cr6.eq) goto loc_880CCA28;
	// li r8,1
	ctx.r8.s64 = 1;
loc_880CCA28:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880cca50
	if (!ctx.cr6.eq) goto loc_880CCA50;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r29,16(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x880cca50
	if (!ctx.cr6.eq) goto loc_880CCA50;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x880cca60
	if (!ctx.cr6.eq) goto loc_880CCA60;
loc_880CCA50:
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880cca04
	if (!ctx.cr6.eq) goto loc_880CCA04;
	// b 0x880cca64
	goto loc_880CCA64;
loc_880CCA60:
	// li r4,1
	ctx.r4.s64 = 1;
loc_880CCA64:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880ccaa4
	if (ctx.cr6.lt) goto loc_880CCAA4;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x880cca90
	if (!ctx.cr6.eq) goto loc_880CCA90;
loc_880CCA74:
	// lwz r31,60(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x880cc9b8
	if (!ctx.cr6.eq) goto loc_880CC9B8;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_880CCA84:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_880CCA90:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_880CCAA0:
	// stw r30,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r30.u32);
loc_880CCAA4:
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CF2D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x880CF2E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bne cr6,0x880cf304
	if (!ctx.cr6.eq) goto loc_880CF304;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_880CF304:
	// addi r26,r4,-24
	ctx.r26.s64 = ctx.r4.s64 + -24;
	// cmplwi cr6,r26,8
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 8, ctx.xer);
	// bge cr6,0x880cf31c
	if (!ctx.cr6.lt) goto loc_880CF31C;
loc_880CF310:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_880CF31C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8805adc8
	ctx.lr = 0x880CF330;
	sub_8805ADC8(ctx, base);
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// bne cr6,0x880cf310
	if (!ctx.cr6.eq) goto loc_880CF310;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r28,8
	ctx.r28.s64 = 8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,3(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r8,r6,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rotlwi r30,r3,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,220(r31)
	REX_STORE_U32(ctx.r31.u32 + 220, ctx.r3.u32);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x880cf398
	if (!ctx.cr6.gt) goto loc_880CF398;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_880CF398:
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x88050340
	ctx.lr = 0x880CF3A8;
	sub_88050340(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,224(r31)
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r3.u32);
	// bne cr6,0x880cf3c0
	if (!ctx.cr6.eq) goto loc_880CF3C0;
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_880CF3C0:
	// cmplwi cr6,r30,128
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 128, ctx.xer);
	// ble cr6,0x880cf438
	if (!ctx.cr6.gt) goto loc_880CF438;
loc_880CF3C8:
	// cmplwi cr6,r30,128
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 128, ctx.xer);
	// li r29,128
	ctx.r29.s64 = 128;
	// bgt cr6,0x880cf3d8
	if (ctx.cr6.gt) goto loc_880CF3D8;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_880CF3D8:
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8805adc8
	ctx.lr = 0x880CF3F4;
	sub_8805ADC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x880cf310
	if (!ctx.cr6.eq) goto loc_880CF310;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// add r29,r27,r3
	ctx.r29.u64 = ctx.r27.u64 + ctx.r3.u64;
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
	// subf r30,r3,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r3.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x880cf310
	if (ctx.cr6.gt) goto loc_880CF310;
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x880547a0
	ctx.lr = 0x880CF428;
	sub_880547A0(ctx, base);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x880cf3c8
	if (!ctx.cr6.eq) goto loc_880CF3C8;
	// b 0x880cf468
	goto loc_880CF468;
loc_880CF438:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8805adc8
	ctx.lr = 0x880CF450;
	sub_8805ADC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x880cf310
	if (!ctx.cr6.eq) goto loc_880CF310;
	// lwz r3,224(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x880547a0
	ctx.lr = 0x880CF468;
	sub_880547A0(ctx, base);
loc_880CF468:
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r11,r26,32
	ctx.r11.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D1B38) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,356(r3)
	REX_STORE_U32(ctx.r3.u32 + 356, ctx.r9.u32);
	// lwz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// stw r10,368(r3)
	REX_STORE_U32(ctx.r3.u32 + 368, ctx.r10.u32);
	// lhz r8,110(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 110);
	// sth r8,396(r3)
	REX_STORE_U16(ctx.r3.u32 + 396, ctx.r8.u16);
	// lhz r7,110(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 110);
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r8,396(r3)
	REX_STORE_U16(ctx.r3.u32 + 396, ctx.r8.u16);
	// stw r10,356(r3)
	REX_STORE_U32(ctx.r3.u32 + 356, ctx.r10.u32);
	// lwz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// ble cr6,0x880d1b8c
	if (!ctx.cr6.gt) goto loc_880D1B8C;
	// li r10,2
	ctx.r10.s64 = 2;
loc_880D1B8C:
	// stw r10,368(r3)
	REX_STORE_U32(ctx.r3.u32 + 368, ctx.r10.u32);
	// lwz r8,88(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r9,356(r3)
	REX_STORE_U32(ctx.r3.u32 + 356, ctx.r9.u32);
	// lhz r11,110(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 110);
	// sth r11,396(r3)
	REX_STORE_U16(ctx.r3.u32 + 396, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880D2238) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x880D2240;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// bne cr6,0x880d2268
	if (!ctx.cr6.eq) goto loc_880D2268;
loc_880D2258:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_880D2268:
	// lwz r29,0(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x880d2258
	if (ctx.cr6.eq) goto loc_880D2258;
	// lwz r11,60(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x880d2284
	if (ctx.cr6.gt) goto loc_880D2284;
	// li r25,4
	ctx.r25.s64 = 4;
loc_880D2284:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x880d2544
	if (ctx.cr6.eq) goto loc_880D2544;
	// lwz r11,704(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 704);
	// stw r26,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r27,16(r31)
	REX_STORE_U16(ctx.r31.u32 + 16, ctx.r27.u16);
	// bne cr6,0x880d25e0
	if (!ctx.cr6.eq) goto loc_880D25E0;
	// lwz r11,212(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 212);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880d2320
	if (!ctx.cr6.eq) goto loc_880D2320;
	// lwz r11,60(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x880d2320
	if (ctx.cr6.gt) goto loc_880D2320;
	// stw r26,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x880d22d8
	if (!ctx.cr6.lt) goto loc_880D22D8;
	// stw r26,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r26.u32);
	// stw r27,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
loc_880D22D8:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,236(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// subf. r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x880d22f0
	if (ctx.cr0.eq) goto loc_880D22F0;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x8812bd48
	ctx.lr = 0x880D22F0;
	sub_8812BD48(ctx, base);
loc_880D22F0:
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x880d2318
	if (!ctx.cr6.eq) goto loc_880D2318;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x8812baa8
	ctx.lr = 0x880D2308;
	sub_8812BAA8(ctx, base);
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_880D2318:
	// stw r11,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// b 0x880d24b0
	goto loc_880D24B0;
loc_880D2320:
	// li r28,-2
	ctx.r28.s64 = -2;
loc_880D2324:
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880d2384
	if (!ctx.cr6.eq) goto loc_880D2384;
	// addi r30,r31,224
	ctx.r30.s64 = ctx.r31.s64 + 224;
loc_880D2334:
	// lwz r11,240(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880d236c
	if (!ctx.cr6.eq) goto loc_880D236C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8812baa8
	ctx.lr = 0x880D2348;
	sub_8812BAA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880d1290
	ctx.lr = 0x880D2350;
	sub_880D1290(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8812c398
	ctx.lr = 0x880D2360;
	sub_8812C398(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d25e4
	if (ctx.cr6.lt) goto loc_880D25E4;
	// b 0x880d2378
	goto loc_880D2378;
loc_880D236C:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// stw r26,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r26.u32);
	// stw r11,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_880D2378:
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880d2334
	if (ctx.cr6.eq) goto loc_880D2334;
loc_880D2384:
	// lwz r11,60(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// ble cr6,0x880d2470
	if (!ctx.cr6.gt) goto loc_880D2470;
	// rlwinm r10,r11,5,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	// rlwinm r9,r11,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// sth r10,18(r31)
	REX_STORE_U16(ctx.r31.u32 + 18, ctx.r10.u16);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lwz r7,8(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// subfic r6,r7,32
	ctx.xer.ca = ctx.r7.u32 <= 32;
	ctx.r6.u64 = static_cast<uint64_t>(32) - ctx.r7.u64;
	// srw r11,r9,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x880d23ec
	if (!ctx.cr6.eq) goto loc_880D23EC;
	// sth r27,16(r31)
	REX_STORE_U16(ctx.r31.u32 + 16, ctx.r27.u16);
	// lwz r9,12(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x880d2408
	if (ctx.cr6.lt) goto loc_880D2408;
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_880D23EC:
	// lwz r9,12(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// subfc r7,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// eqv r6,r9,r10
	ctx.r6.u64 = ~(ctx.r9.u64 ^ ctx.r10.u64);
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// sth r3,16(r31)
	REX_STORE_U16(ctx.r31.u32 + 16, ctx.r3.u16);
loc_880D2408:
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x880d2428
	if (!ctx.cr6.eq) goto loc_880D2428;
	// lhz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x880d2450
	if (!ctx.cr6.eq) goto loc_880D2450;
	// stw r26,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r26.u32);
	// b 0x880d2324
	goto loc_880D2324;
loc_880D2428:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x880d2450
	if (!ctx.cr6.eq) goto loc_880D2450;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x880d2450
	if (!ctx.cr6.eq) goto loc_880D2450;
	// stw r28,276(r31)
	REX_STORE_U32(ctx.r31.u32 + 276, ctx.r28.u32);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// stw r26,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r26.u32);
	// bl 0x8812baa8
	ctx.lr = 0x880D2448;
	sub_8812BAA8(ctx, base);
	// stw r27,284(r31)
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r27.u32);
	// b 0x880d2324
	goto loc_880D2324;
loc_880D2450:
	// lwz r8,12(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x880d249c
	if (ctx.cr6.lt) goto loc_880D249C;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x880d2468
	if (!ctx.cr6.eq) goto loc_880D2468;
	// stw r28,276(r31)
	REX_STORE_U32(ctx.r31.u32 + 276, ctx.r28.u32);
loc_880D2468:
	// stw r26,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r26.u32);
	// b 0x880d2324
	goto loc_880D2324;
loc_880D2470:
	// subfic r10,r25,32
	ctx.xer.ca = ctx.r25.u32 <= 32;
	ctx.r10.u64 = static_cast<uint64_t>(32) - ctx.r25.u64;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r25,4
	ctx.r9.s64 = ctx.r25.s64 + 4;
	// srw r6,r8,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// sth r6,16(r31)
	REX_STORE_U16(ctx.r31.u32 + 16, ctx.r6.u16);
	// slw r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r4,8(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// subfic r3,r4,29
	ctx.xer.ca = ctx.r4.u32 <= 29;
	ctx.r3.u64 = static_cast<uint64_t>(29) - ctx.r4.u64;
	// srw r11,r7,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r3.u8 & 0x3F));
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_880D249C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880d24ac
	if (!ctx.cr6.eq) goto loc_880D24AC;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x8812bd48
	ctx.lr = 0x880D24AC;
	sub_8812BD48(ctx, base);
loc_880D24AC:
	// stw r26,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r26.u32);
loc_880D24B0:
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880d2538
	if (!ctx.cr6.eq) goto loc_880D2538;
	// lhz r11,154(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 154);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880d25ec
	if (!ctx.cr6.eq) goto loc_880D25EC;
	// lis r11,-6790
	ctx.r11.s64 = -444989440;
	// ld r10,168(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 168);
	// lis r9,-10561
	ctx.r9.s64 = -692125696;
	// lwz r8,336(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// ori r7,r11,17085
	ctx.r7.u64 = ctx.r11.u64 | 17085;
	// ori r6,r9,38101
	ctx.r6.u64 = ctx.r9.u64 | 38101;
	// extsw r4,r8
	ctx.r4.s64 = ctx.r8.s32;
	// rldimi r7,r6,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// lis r5,152
	ctx.r5.s64 = 9961472;
	// mulhd r9,r10,r7
	ctx.r9.s64 = static_cast<int64_t>((static_cast<__int128>(static_cast<int64_t>(ctx.r10.s64)) * static_cast<__int128>(static_cast<int64_t>(ctx.r7.s64))) >> 64);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r11,r5,38528
	ctx.r11.u64 = ctx.r5.u64 | 38528;
	// sradi r9,r3,23
	ctx.xer.ca = (ctx.r3.s64 < 0) & ((ctx.r3.u64 & 0x7FFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s64 >> 23;
	// divd r6,r10,r11
	ctx.r6.s64 = (ctx.r11.s64 && !(ctx.r10.s64 == INT64_MIN && ctx.r11.s64 == -1)) ? ctx.r10.s64 / ctx.r11.s64 : 0;
	// rldicl r8,r9,1,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0x1;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulld r3,r5,r11
	ctx.r3.s64 = static_cast<int64_t>(ctx.r5.u64 * ctx.r11.u64);
	// subf r10,r3,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// mulld r11,r6,r4
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r4.u64);
	// mulld r9,r10,r4
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * ctx.r4.u64);
	// divd r10,r9,r7
	ctx.r10.s64 = (ctx.r7.s64 && !(ctx.r9.s64 == INT64_MIN && ctx.r7.s64 == -1)) ? ctx.r9.s64 / ctx.r7.s64 : 0;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r8,184(r31)
	REX_STORE_U64(ctx.r31.u32 + 184, ctx.r8.u64);
loc_880D252C:
	// sth r26,154(r31)
	REX_STORE_U16(ctx.r31.u32 + 154, ctx.r26.u16);
	// stw r26,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r26.u32);
loc_880D2534:
	// stw r27,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r27.u32);
loc_880D2538:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d25e0
	if (ctx.cr6.eq) goto loc_880D25E0;
loc_880D2544:
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// stw r27,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// ble cr6,0x880d2584
	if (!ctx.cr6.gt) goto loc_880D2584;
	// addi r30,r31,224
	ctx.r30.s64 = ctx.r31.s64 + 224;
loc_880D2558:
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8812c818
	ctx.lr = 0x880D2564;
	sub_8812C818(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d25e4
	if (ctx.cr6.lt) goto loc_880D25E4;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// cmpwi cr6,r10,24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 24, ctx.xer);
	// bgt cr6,0x880d2558
	if (ctx.cr6.gt) goto loc_880D2558;
loc_880D2584:
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x8812c818
	ctx.lr = 0x880D2590;
	sub_8812C818(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d25e4
	if (ctx.cr6.lt) goto loc_880D25E4;
	// lhz r11,34(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880d25d4
	if (ctx.cr6.eq) goto loc_880D25D4;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// li r8,32767
	ctx.r8.s64 = 32767;
loc_880D25AC:
	// lwz r9,320(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 320);
	// mulli r10,r11,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// sth r8,112(r10)
	REX_STORE_U16(ctx.r10.u32 + 112, ctx.r8.u16);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lhz r7,34(r29)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r29.u32 + 34);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x880d25ac
	if (ctx.cr6.lt) goto loc_880D25AC;
loc_880D25D4:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,72(r29)
	REX_STORE_U32(ctx.r29.u32 + 72, ctx.r11.u32);
	// stw r26,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
loc_880D25E0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_880D25E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_880D25EC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880d252c
	if (!ctx.cr6.eq) goto loc_880D252C;
	// lis r11,-6790
	ctx.r11.s64 = -444989440;
	// ld r10,168(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 168);
	// lis r9,-10561
	ctx.r9.s64 = -692125696;
	// lwz r8,336(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// ori r7,r11,17085
	ctx.r7.u64 = ctx.r11.u64 | 17085;
	// ld r6,176(r31)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r31.u32 + 176);
	// ori r5,r9,38101
	ctx.r5.u64 = ctx.r9.u64 | 38101;
	// sth r27,154(r31)
	REX_STORE_U16(ctx.r31.u32 + 154, ctx.r27.u16);
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// rldimi r7,r5,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// lis r4,152
	ctx.r4.s64 = 9961472;
	// mulhd r9,r10,r7
	ctx.r9.s64 = static_cast<int64_t>((static_cast<__int128>(static_cast<int64_t>(ctx.r10.s64)) * static_cast<__int128>(static_cast<int64_t>(ctx.r7.s64))) >> 64);
	// std r6,168(r31)
	REX_STORE_U64(ctx.r31.u32 + 168, ctx.r6.u64);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r11,r4,38528
	ctx.r11.u64 = ctx.r4.u64 | 38528;
	// sradi r9,r9,23
	ctx.xer.ca = (ctx.r9.s64 < 0) & ((ctx.r9.u64 & 0x7FFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s64 >> 23;
	// divd r6,r10,r11
	ctx.r6.s64 = (ctx.r11.s64 && !(ctx.r10.s64 == INT64_MIN && ctx.r11.s64 == -1)) ? ctx.r10.s64 / ctx.r11.s64 : 0;
	// rldicl r8,r9,1,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0x1;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulld r4,r5,r11
	ctx.r4.s64 = static_cast<int64_t>(ctx.r5.u64 * ctx.r11.u64);
	// subf r10,r4,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r4.u64;
	// mulld r11,r6,r3
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r3.u64);
	// mulld r9,r10,r3
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * ctx.r3.u64);
	// divd r10,r9,r7
	ctx.r10.s64 = (ctx.r7.s64 && !(ctx.r9.s64 == INT64_MIN && ctx.r7.s64 == -1)) ? ctx.r9.s64 / ctx.r7.s64 : 0;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r8,184(r31)
	REX_STORE_U64(ctx.r31.u32 + 184, ctx.r8.u64);
	// b 0x880d2534
	goto loc_880D2534;
}

DEFINE_REX_FUNC(sub_880DA788) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880DA790;
	__savegprlr_14(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r11,28476(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28476);
	// lwz r21,28112(r3)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r3.u32 + 28112);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r22,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r22,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r28,444(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r4,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r4.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// stw r5,388(r1)
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r5.u32);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// stw r6,396(r1)
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r6.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r7,404(r1)
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r7.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r14,r8
	ctx.r14.u64 = ctx.r8.u64;
	// stw r8,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r8.u32);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// stw r21,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// bctrl 
	ctx.lr = 0x880DA808;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,28100(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 28100);
	// lwz r25,452(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880da840
	if (ctx.cr6.eq) goto loc_880DA840;
	// lwz r11,28472(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28472);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880DA840;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880DA840:
	// lwz r11,28100(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28100);
	// lwz r29,436(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880da878
	if (ctx.cr6.eq) goto loc_880DA878;
	// lwz r11,28472(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28472);
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880DA878;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880DA878:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r20,516(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// lwz r17,524(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,132(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r5,128(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// lwz r4,148(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// stw r8,0(r20)
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r8.u32);
	// add r3,r9,r5
	ctx.r3.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r6,0(r17)
	REX_STORE_U32(ctx.r17.u32 + 0, ctx.r6.u32);
	// stw r22,256(r20)
	REX_STORE_U32(ctx.r20.u32 + 256, ctx.r22.u32);
	// stw r22,128(r20)
	REX_STORE_U32(ctx.r20.u32 + 128, ctx.r22.u32);
	// stw r22,256(r17)
	REX_STORE_U32(ctx.r17.u32 + 256, ctx.r22.u32);
	// stw r22,128(r17)
	REX_STORE_U32(ctx.r17.u32 + 128, ctx.r22.u32);
	// lwz r10,28068(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 28068);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// beq cr6,0x880da924
	if (ctx.cr6.eq) goto loc_880DA924;
	// lwz r11,28112(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r10,r20
	REX_STORE_U32(ctx.r10.u32 + ctx.r20.u32, ctx.r22.u32);
	// lwz r11,28112(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r8,r20
	REX_STORE_U32(ctx.r8.u32 + ctx.r20.u32, ctx.r22.u32);
	// lwz r11,28112(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r7,r11,64
	ctx.r7.s64 = ctx.r11.s64 + 64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r6,r17
	REX_STORE_U32(ctx.r6.u32 + ctx.r17.u32, ctx.r22.u32);
	// lwz r11,28112(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r4,r17
	REX_STORE_U32(ctx.r4.u32 + ctx.r17.u32, ctx.r22.u32);
loc_880DA924:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// stw r11,384(r20)
	REX_STORE_U32(ctx.r20.u32 + 384, ctx.r11.u32);
	// stw r10,384(r17)
	REX_STORE_U32(ctx.r17.u32 + 384, ctx.r10.u32);
	// stw r22,640(r20)
	REX_STORE_U32(ctx.r20.u32 + 640, ctx.r22.u32);
	// stw r22,512(r20)
	REX_STORE_U32(ctx.r20.u32 + 512, ctx.r22.u32);
	// stw r22,512(r17)
	REX_STORE_U32(ctx.r17.u32 + 512, ctx.r22.u32);
	// stw r22,640(r17)
	REX_STORE_U32(ctx.r17.u32 + 640, ctx.r22.u32);
	// lwz r9,28068(r23)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 28068);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880da990
	if (ctx.cr6.eq) goto loc_880DA990;
	// lwz r11,28112(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r10,r20
	REX_STORE_U32(ctx.r10.u32 + ctx.r20.u32, ctx.r22.u32);
	// lwz r11,28112(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r8,r20
	REX_STORE_U32(ctx.r8.u32 + ctx.r20.u32, ctx.r22.u32);
	// lwz r11,28112(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r7,r11,160
	ctx.r7.s64 = ctx.r11.s64 + 160;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r6,r17
	REX_STORE_U32(ctx.r6.u32 + ctx.r17.u32, ctx.r22.u32);
	// lwz r11,28112(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r5,r11,128
	ctx.r5.s64 = ctx.r11.s64 + 128;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r4,r17
	REX_STORE_U32(ctx.r4.u32 + ctx.r17.u32, ctx.r22.u32);
loc_880DA990:
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,140(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// stw r11,768(r20)
	REX_STORE_U32(ctx.r20.u32 + 768, ctx.r11.u32);
	// stw r10,768(r17)
	REX_STORE_U32(ctx.r17.u32 + 768, ctx.r10.u32);
	// stw r22,1024(r20)
	REX_STORE_U32(ctx.r20.u32 + 1024, ctx.r22.u32);
	// stw r22,896(r20)
	REX_STORE_U32(ctx.r20.u32 + 896, ctx.r22.u32);
	// stw r22,1024(r17)
	REX_STORE_U32(ctx.r17.u32 + 1024, ctx.r22.u32);
	// stw r22,896(r17)
	REX_STORE_U32(ctx.r17.u32 + 896, ctx.r22.u32);
	// lwz r9,28068(r23)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 28068);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880da9fc
	if (ctx.cr6.eq) goto loc_880DA9FC;
	// lwz r11,28112(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r10,r20
	REX_STORE_U32(ctx.r10.u32 + ctx.r20.u32, ctx.r22.u32);
	// lwz r11,28112(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r9,r11,224
	ctx.r9.s64 = ctx.r11.s64 + 224;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r8,r20
	REX_STORE_U32(ctx.r8.u32 + ctx.r20.u32, ctx.r22.u32);
	// lwz r11,28112(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r7,r11,256
	ctx.r7.s64 = ctx.r11.s64 + 256;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r6,r17
	REX_STORE_U32(ctx.r6.u32 + ctx.r17.u32, ctx.r22.u32);
	// lwz r11,28112(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r5,r11,224
	ctx.r5.s64 = ctx.r11.s64 + 224;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r4,r17
	REX_STORE_U32(ctx.r4.u32 + ctx.r17.u32, ctx.r22.u32);
loc_880DA9FC:
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// stw r11,1152(r20)
	REX_STORE_U32(ctx.r20.u32 + 1152, ctx.r11.u32);
	// stw r10,1152(r17)
	REX_STORE_U32(ctx.r17.u32 + 1152, ctx.r10.u32);
	// stw r22,1408(r20)
	REX_STORE_U32(ctx.r20.u32 + 1408, ctx.r22.u32);
	// stw r22,1280(r20)
	REX_STORE_U32(ctx.r20.u32 + 1280, ctx.r22.u32);
	// stw r22,1408(r17)
	REX_STORE_U32(ctx.r17.u32 + 1408, ctx.r22.u32);
	// stw r22,1280(r17)
	REX_STORE_U32(ctx.r17.u32 + 1280, ctx.r22.u32);
	// lwz r9,28068(r23)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 28068);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880daa68
	if (ctx.cr6.eq) goto loc_880DAA68;
	// lwz r11,28112(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r11,r11,352
	ctx.r11.s64 = ctx.r11.s64 + 352;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r10,r20
	REX_STORE_U32(ctx.r10.u32 + ctx.r20.u32, ctx.r22.u32);
	// lwz r11,28112(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r9,r11,320
	ctx.r9.s64 = ctx.r11.s64 + 320;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r8,r20
	REX_STORE_U32(ctx.r8.u32 + ctx.r20.u32, ctx.r22.u32);
	// lwz r11,28112(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r7,r11,352
	ctx.r7.s64 = ctx.r11.s64 + 352;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r6,r17
	REX_STORE_U32(ctx.r6.u32 + ctx.r17.u32, ctx.r22.u32);
	// lwz r11,28112(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r5,r11,320
	ctx.r5.s64 = ctx.r11.s64 + 320;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r4,r17
	REX_STORE_U32(ctx.r4.u32 + ctx.r17.u32, ctx.r22.u32);
loc_880DAA68:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,148(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,1536(r20)
	REX_STORE_U32(ctx.r20.u32 + 1536, ctx.r11.u32);
	// stw r10,1536(r17)
	REX_STORE_U32(ctx.r17.u32 + 1536, ctx.r10.u32);
	// stw r22,1792(r20)
	REX_STORE_U32(ctx.r20.u32 + 1792, ctx.r22.u32);
	// stw r22,1664(r20)
	REX_STORE_U32(ctx.r20.u32 + 1664, ctx.r22.u32);
	// stw r22,1792(r17)
	REX_STORE_U32(ctx.r17.u32 + 1792, ctx.r22.u32);
	// stw r22,1664(r17)
	REX_STORE_U32(ctx.r17.u32 + 1664, ctx.r22.u32);
	// lwz r9,28068(r23)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 28068);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880daad4
	if (ctx.cr6.eq) goto loc_880DAAD4;
	// lwz r11,28112(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r11,r11,448
	ctx.r11.s64 = ctx.r11.s64 + 448;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r10,r20
	REX_STORE_U32(ctx.r10.u32 + ctx.r20.u32, ctx.r22.u32);
	// lwz r11,28112(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r9,r11,416
	ctx.r9.s64 = ctx.r11.s64 + 416;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r8,r20
	REX_STORE_U32(ctx.r8.u32 + ctx.r20.u32, ctx.r22.u32);
	// lwz r11,28112(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r7,r11,448
	ctx.r7.s64 = ctx.r11.s64 + 448;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r6,r17
	REX_STORE_U32(ctx.r6.u32 + ctx.r17.u32, ctx.r22.u32);
	// lwz r11,28112(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r5,r11,416
	ctx.r5.s64 = ctx.r11.s64 + 416;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r4,r17
	REX_STORE_U32(ctx.r4.u32 + ctx.r17.u32, ctx.r22.u32);
loc_880DAAD4:
	// lwz r8,28112(r23)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// li r7,1
	ctx.r7.s64 = 1;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x880dab34
	if (!ctx.cr6.gt) goto loc_880DAB34;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// addi r9,r20,1536
	ctx.r9.s64 = ctx.r20.s64 + 1536;
	// addi r10,r17,388
	ctx.r10.s64 = ctx.r17.s64 + 388;
	// subf r6,r17,r20
	ctx.r6.u64 = ctx.r20.u64 - ctx.r17.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
loc_880DAAF8:
	// stw r11,-1532(r9)
	REX_STORE_U32(ctx.r9.u32 + -1532, ctx.r11.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r11,-384(r10)
	REX_STORE_U32(ctx.r10.u32 + -384, ctx.r11.u32);
	// stwx r11,r6,r10
	REX_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r11.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,-764(r9)
	REX_STORE_U32(ctx.r9.u32 + -764, ctx.r11.u32);
	// stw r11,384(r10)
	REX_STORE_U32(ctx.r10.u32 + 384, ctx.r11.u32);
	// stw r11,-380(r9)
	REX_STORE_U32(ctx.r9.u32 + -380, ctx.r11.u32);
	// stw r11,768(r10)
	REX_STORE_U32(ctx.r10.u32 + 768, ctx.r11.u32);
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// stw r11,1152(r10)
	REX_STORE_U32(ctx.r10.u32 + 1152, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,28112(r23)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x880daaf8
	if (ctx.cr6.lt) goto loc_880DAAF8;
loc_880DAB34:
	// lwz r11,28120(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28120);
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r16,r8,-1
	ctx.r16.s64 = ctx.r8.s64 + -1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x880dab68
	if (ctx.cr6.gt) goto loc_880DAB68;
	// lwz r10,148(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x880dab68
	if (ctx.cr6.gt) goto loc_880DAB68;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880DAB68:
	// lwz r11,500(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// lwz r8,508(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// mullw r9,r28,r11
	ctx.r9.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r11.s32);
	// mullw r10,r25,r11
	ctx.r10.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r11.s32);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r15,r10,r31
	ctx.r15.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x880dae60
	if (ctx.cr6.gt) goto loc_880DAE60;
	// subf r11,r31,r15
	ctx.r11.u64 = ctx.r15.u64 - ctx.r31.u64;
	// lwz r21,484(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,492(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
loc_880DABA4:
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x880dae38
	if (ctx.cr6.gt) goto loc_880DAE38;
loc_880DABAC:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x880dabbc
	if (!ctx.cr6.eq) goto loc_880DABBC;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x880dae28
	if (ctx.cr6.eq) goto loc_880DAE28;
loc_880DABBC:
	// lwz r10,28476(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 28476);
	// subf r11,r15,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r15.u64;
	// add r31,r21,r15
	ctx.r31.u64 = ctx.r21.u64 + ctx.r15.u64;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// add r5,r31,r11
	ctx.r5.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x880DABE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,28100(r23)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 28100);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880dac18
	if (ctx.cr6.eq) goto loc_880DAC18;
	// lwz r11,28472(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28472);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,388(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880DAC18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880DAC18:
	// lwz r11,28100(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880dac50
	if (ctx.cr6.eq) goto loc_880DAC50;
	// lwz r10,28472(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 28472);
	// subf r11,r15,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r15.u64;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// lwz r3,396(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// add r5,r31,r11
	ctx.r5.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880DAC50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880DAC50:
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r28,r27,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r29,r26,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r24,r1,180
	ctx.r24.s64 = ctx.r1.s64 + 180;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r8,176(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,196(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r5,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r5.u32);
	// subf r25,r20,r17
	ctx.r25.u64 = ctx.r17.u64 - ctx.r20.u64;
	// stw r4,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r4.u32);
	// li r19,5
	ctx.r19.s64 = 5;
loc_880DACA0:
	// lwz r31,-20(r24)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r24.u32 + -20);
	// add r30,r3,r25
	ctx.r30.u64 = ctx.r3.u64 + ctx.r25.u64;
	// lwzx r11,r3,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r29.u32);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880dad4c
	if (!ctx.cr6.lt) goto loc_880DAD4C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r3,256
	ctx.r9.s64 = ctx.r3.s64 + 256;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// addi r7,r9,-128
	ctx.r7.s64 = ctx.r9.s64 + -128;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880dace0
	if (!ctx.cr6.gt) goto loc_880DACE0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_880DACD0:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880dacd0
	if (ctx.cr6.gt) goto loc_880DACD0;
loc_880DACE0:
	// cmpw cr6,r26,r8
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x880dad2c
	if (!ctx.cr6.gt) goto loc_880DAD2C;
	// subf r4,r8,r26
	ctx.r4.u64 = ctx.r26.u64 - ctx.r8.u64;
	// add r11,r29,r7
	ctx.r11.u64 = ctx.r29.u64 + ctx.r7.u64;
	// add r10,r29,r9
	ctx.r10.u64 = ctx.r29.u64 + ctx.r9.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// subf r6,r7,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r7.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// subf r5,r7,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r7.u64;
	// subf r4,r9,r3
	ctx.r4.u64 = ctx.r3.u64 - ctx.r9.u64;
loc_880DAD08:
	// lwzx r14,r11,r6
	ctx.r14.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// stwx r14,r10,r4
	REX_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r14.u32);
	// lwz r14,0(r11)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r14,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r14.u32);
	// lwzx r14,r5,r11
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r14,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r14.u32);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bdnz 0x880dad08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880DAD08;
loc_880DAD2C:
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r26,r16
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r16.s32, ctx.xer);
	// stwx r31,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r31.u32);
	// stwx r21,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r21.u32);
	// stwx r18,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r18.u32);
	// bge cr6,0x880dad4c
	if (!ctx.cr6.lt) goto loc_880DAD4C;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_880DAD4C:
	// lwz r31,0(r24)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// lwzx r11,r28,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880dadf8
	if (!ctx.cr6.lt) goto loc_880DADF8;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r3,r25
	ctx.r11.u64 = ctx.r3.u64 + ctx.r25.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// addi r8,r30,128
	ctx.r8.s64 = ctx.r30.s64 + 128;
	// addi r7,r11,256
	ctx.r7.s64 = ctx.r11.s64 + 256;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x880dad8c
	if (!ctx.cr6.gt) goto loc_880DAD8C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_880DAD7C:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880dad7c
	if (ctx.cr6.gt) goto loc_880DAD7C;
loc_880DAD8C:
	// cmpw cr6,r27,r9
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x880dadd8
	if (!ctx.cr6.gt) goto loc_880DADD8;
	// subf r4,r9,r27
	ctx.r4.u64 = ctx.r27.u64 - ctx.r9.u64;
	// add r11,r28,r8
	ctx.r11.u64 = ctx.r28.u64 + ctx.r8.u64;
	// add r10,r28,r7
	ctx.r10.u64 = ctx.r28.u64 + ctx.r7.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// subf r6,r8,r30
	ctx.r6.u64 = ctx.r30.u64 - ctx.r8.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// subf r5,r8,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r8.u64;
	// subf r4,r7,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r7.u64;
loc_880DADB4:
	// lwzx r14,r6,r11
	ctx.r14.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// stwx r14,r4,r10
	REX_STORE_U32(ctx.r4.u32 + ctx.r10.u32, ctx.r14.u32);
	// lwz r14,0(r11)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r14,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r14.u32);
	// lwzx r14,r5,r11
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r14,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r14.u32);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bdnz 0x880dadb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880DADB4;
loc_880DADD8:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r27,r16
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r16.s32, ctx.xer);
	// stwx r31,r11,r30
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r31.u32);
	// stwx r21,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r21.u32);
	// stwx r18,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r18.u32);
	// bge cr6,0x880dadf8
	if (!ctx.cr6.lt) goto loc_880DADF8;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_880DADF8:
	// addic. r19,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// addi r3,r3,384
	ctx.r3.s64 = ctx.r3.s64 + 384;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// bne 0x880daca0
	if (!ctx.cr0.eq) goto loc_880DACA0;
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r30,100(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,492(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// lwz r24,380(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r28,444(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// lwz r25,452(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r19,404(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r14,412(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
loc_880DAE28:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880dabac
	if (!ctx.cr6.gt) goto loc_880DABAC;
	// lwz r21,484(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
loc_880DAE38:
	// lwz r10,508(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// add r30,r30,r25
	ctx.r30.u64 = ctx.r30.u64 + ctx.r25.u64;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// add r15,r15,r25
	ctx.r15.u64 = ctx.r15.u64 + ctx.r25.u64;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// cmpw cr6,r18,r10
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x880daba4
	if (!ctx.cr6.gt) goto loc_880DABA4;
	// lwz r21,104(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
loc_880DAE60:
	// lwz r11,28068(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28068);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880daeb8
	if (ctx.cr6.eq) goto loc_880DAEB8;
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// add r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 + ctx.r17.u64;
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// subf r8,r17,r20
	ctx.r8.u64 = ctx.r20.u64 - ctx.r17.u64;
loc_880DAE84:
	// lwz r7,-20(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + -20);
	// lwzx r6,r8,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x880daec4
	if (ctx.cr6.lt) goto loc_880DAEC4;
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x880daec4
	if (ctx.cr6.lt) goto loc_880DAEC4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,384
	ctx.r11.s64 = ctx.r11.s64 + 384;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// blt cr6,0x880dae84
	if (ctx.cr6.lt) goto loc_880DAE84;
loc_880DAEB8:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880DAEC4:
	// addi r3,r21,1
	ctx.r3.s64 = ctx.r21.s64 + 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E75B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x880E75C0;
	__savegprlr_19(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r30,1720(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 1720);
	// lwz r28,1724(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 1724);
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// lwz r29,19092(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 19092);
	// mullw r27,r28,r30
	ctx.r27.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r30.s32);
	// lwz r24,19096(r31)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 19096);
	// lwz r22,19100(r31)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r31.u32 + 19100);
	// srawi r26,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r30.s32 >> 1;
	// srawi r20,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r20.s64 = ctx.r28.s32 >> 1;
	// add r4,r27,r4
	ctx.r4.u64 = ctx.r27.u64 + ctx.r4.u64;
	// clrlwi r7,r9,31
	ctx.r7.u64 = ctx.r9.u32 & 0x1;
	// slw r23,r11,r8
	ctx.r23.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r8.u8 & 0x3F));
	// srawi r25,r27,2
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3) != 0);
	ctx.r25.s64 = ctx.r27.s32 >> 2;
	// slw r21,r11,r7
	ctx.r21.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r7.u8 & 0x3F));
	// add r5,r25,r4
	ctx.r5.u64 = ctx.r25.u64 + ctx.r4.u64;
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 2, ctx.xer);
	// bne cr6,0x880e7678
	if (!ctx.cr6.eq) goto loc_880E7678;
	// lwz r11,2332(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2332);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r19,2072(r31)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r31.u32 + 2072);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// stw r26,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x880E7654;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r21,2
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 2, ctx.xer);
	// bne cr6,0x880e76b8
	if (!ctx.cr6.eq) goto loc_880E76B8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r29,7232(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 7232);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// add r24,r27,r29
	ctx.r24.u64 = ctx.r27.u64 + ctx.r29.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// add r22,r25,r24
	ctx.r22.u64 = ctx.r25.u64 + ctx.r24.u64;
	// b 0x880e7680
	goto loc_880E7680;
loc_880E7678:
	// cmpwi cr6,r21,2
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 2, ctx.xer);
	// bne cr6,0x880e76b8
	if (!ctx.cr6.eq) goto loc_880E76B8;
loc_880E7680:
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r11,2332(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2332);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r27,2076(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 2076);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// stw r26,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x880E76B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880E76B8:
	// lwz r10,7232(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7232);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x880e7700
	if (!ctx.cr6.gt) goto loc_880E7700;
	// mullw r8,r30,r21
	ctx.r8.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r21.s32);
loc_880E76CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x880e76f0
	if (!ctx.cr6.gt) goto loc_880E76F0;
loc_880E76D8:
	// lbzx r7,r11,r29
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// stb r7,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// blt cr6,0x880e76d8
	if (ctx.cr6.lt) goto loc_880E76D8;
loc_880E76F0:
	// add r9,r9,r21
	ctx.r9.u64 = ctx.r9.u64 + ctx.r21.u64;
	// add r29,r8,r29
	ctx.r29.u64 = ctx.r8.u64 + ctx.r29.u64;
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x880e76cc
	if (ctx.cr6.lt) goto loc_880E76CC;
loc_880E7700:
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x880e7748
	if (!ctx.cr6.gt) goto loc_880E7748;
	// mullw r7,r26,r21
	ctx.r7.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r21.s32);
loc_880E7714:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x880e7738
	if (!ctx.cr6.gt) goto loc_880E7738;
loc_880E7720:
	// lbzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// stb r6,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// blt cr6,0x880e7720
	if (ctx.cr6.lt) goto loc_880E7720;
loc_880E7738:
	// add r8,r8,r21
	ctx.r8.u64 = ctx.r8.u64 + ctx.r21.u64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// cmpw cr6,r8,r20
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x880e7714
	if (ctx.cr6.lt) goto loc_880E7714;
loc_880E7748:
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x880e7790
	if (!ctx.cr6.gt) goto loc_880E7790;
	// mullw r7,r26,r21
	ctx.r7.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r21.s32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_880E7760:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x880e7780
	if (!ctx.cr6.gt) goto loc_880E7780;
loc_880E776C:
	// lbzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// stbu r6,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r10.u32 = ea;
	// blt cr6,0x880e776c
	if (ctx.cr6.lt) goto loc_880E776C;
loc_880E7780:
	// add r8,r8,r21
	ctx.r8.u64 = ctx.r8.u64 + ctx.r21.u64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// cmpw cr6,r8,r20
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x880e7760
	if (ctx.cr6.lt) goto loc_880E7760;
loc_880E7790:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880ED660) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30705
	ctx.r11.s64 = -2012282880;
	// lis r10,-30705
	ctx.r10.s64 = -2012282880;
	// addi r9,r11,-12056
	ctx.r9.s64 = ctx.r11.s64 + -12056;
	// addi r5,r10,-12904
	ctx.r5.s64 = ctx.r10.s64 + -12904;
	// lis r8,-30705
	ctx.r8.s64 = -2012282880;
	// stw r9,8224(r3)
	REX_STORE_U32(ctx.r3.u32 + 8224, ctx.r9.u32);
	// lis r7,-30705
	ctx.r7.s64 = -2012282880;
	// stw r5,8220(r3)
	REX_STORE_U32(ctx.r3.u32 + 8220, ctx.r5.u32);
	// rotlwi r10,r5,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r4,r8,-11240
	ctx.r4.s64 = ctx.r8.s64 + -11240;
	// stw r10,8212(r3)
	REX_STORE_U32(ctx.r3.u32 + 8212, ctx.r10.u32);
	// addi r11,r7,-16192
	ctx.r11.s64 = ctx.r7.s64 + -16192;
	// stw r6,8216(r3)
	REX_STORE_U32(ctx.r3.u32 + 8216, ctx.r6.u32);
	// stw r10,8208(r3)
	REX_STORE_U32(ctx.r3.u32 + 8208, ctx.r10.u32);
	// stw r4,8232(r3)
	REX_STORE_U32(ctx.r3.u32 + 8232, ctx.r4.u32);
	// stw r11,8228(r3)
	REX_STORE_U32(ctx.r3.u32 + 8228, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880EE4E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880EE4E8;
	__savegprlr_14(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r8,3236
	ctx.r8.s64 = 3236;
	// li r7,3225
	ctx.r7.s64 = 3225;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r8,-448(r1)
	REX_STORE_U32(ctx.r1.u32 + -448, ctx.r8.u32);
	// stw r7,-444(r1)
	REX_STORE_U32(ctx.r1.u32 + -444, ctx.r7.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,3181
	ctx.r11.s64 = 3181;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r25,-428(r1)
	REX_STORE_U32(ctx.r1.u32 + -428, ctx.r25.u32);
	// li r6,3214
	ctx.r6.s64 = 3214;
	// stw r11,-432(r1)
	REX_STORE_U32(ctx.r1.u32 + -432, ctx.r11.u32);
	// li r3,3192
	ctx.r3.s64 = 3192;
	// stw r25,-464(r1)
	REX_STORE_U32(ctx.r1.u32 + -464, ctx.r25.u32);
	// li r8,3148
	ctx.r8.s64 = 3148;
	// stw r6,-440(r1)
	REX_STORE_U32(ctx.r1.u32 + -440, ctx.r6.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r3,-436(r1)
	REX_STORE_U32(ctx.r1.u32 + -436, ctx.r3.u32);
	// stw r8,-424(r1)
	REX_STORE_U32(ctx.r1.u32 + -424, ctx.r8.u32);
	// addi r11,r1,-416
	ctx.r11.s64 = ctx.r1.s64 + -416;
	// stw r9,-460(r1)
	REX_STORE_U32(ctx.r1.u32 + -460, ctx.r9.u32);
	// rlwinm r15,r4,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r7,-456(r1)
	REX_STORE_U32(ctx.r1.u32 + -456, ctx.r7.u32);
	// stw r9,-452(r1)
	REX_STORE_U32(ctx.r1.u32 + -452, ctx.r9.u32);
loc_880EE54C:
	// lhz r8,2(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// lhz r7,10(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 10);
	// lhz r4,6(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r29,14(r10)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r10.u32 + 14);
	// extsh r31,r7
	ctx.r31.s64 = ctx.r7.s16;
	// lhz r3,8(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 8);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhz r30,12(r10)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r10.u32 + 12);
	// extsh r7,r29
	ctx.r7.s64 = ctx.r29.s16;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// add r28,r4,r9
	ctx.r28.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r29,r8,r6
	ctx.r29.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r22,r30,r31
	ctx.r22.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r23,r7,r3
	ctx.r23.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r24,r29,r28
	ctx.r24.u64 = ctx.r29.u64 + ctx.r28.u64;
	// add r21,r22,r23
	ctx.r21.u64 = ctx.r22.u64 + ctx.r23.u64;
	// rlwinm r19,r24,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r18,r21,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r20,r29,r28
	ctx.r20.u64 = ctx.r28.u64 - ctx.r29.u64;
	// add r17,r24,r19
	ctx.r17.u64 = ctx.r24.u64 + ctx.r19.u64;
	// subf r29,r8,r6
	ctx.r29.u64 = ctx.r6.u64 - ctx.r8.u64;
	// subf r26,r7,r3
	ctx.r26.u64 = ctx.r3.u64 - ctx.r7.u64;
	// add r21,r21,r18
	ctx.r21.u64 = ctx.r21.u64 + ctx.r18.u64;
	// subf r27,r30,r31
	ctx.r27.u64 = ctx.r31.u64 - ctx.r30.u64;
	// subf r24,r22,r23
	ctx.r24.u64 = ctx.r23.u64 - ctx.r22.u64;
	// subf r7,r7,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r7.u64;
	// subf r28,r4,r9
	ctx.r28.u64 = ctx.r9.u64 - ctx.r4.u64;
	// rlwinm r18,r17,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r23,r29,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r3,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r3.u64;
	// rlwinm r17,r21,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r19,r26,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r21,r27,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r20,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r16,r7,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r23,r29,r23
	ctx.r23.u64 = ctx.r29.u64 + ctx.r23.u64;
	// rlwinm r22,r28,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r8,r31,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r31.u64;
	// neg r14,r26
	ctx.r14.s64 = static_cast<int64_t>(-ctx.r26.u64);
	// add r19,r26,r19
	ctx.r19.u64 = ctx.r26.u64 + ctx.r19.u64;
	// add r4,r17,r18
	ctx.r4.u64 = ctx.r17.u64 + ctx.r18.u64;
	// subf r6,r30,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r30.u64;
	// rlwinm r30,r28,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r20,r20,r3
	ctx.r20.u64 = ctx.r20.u64 + ctx.r3.u64;
	// rlwinm r31,r24,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// add r21,r27,r21
	ctx.r21.u64 = ctx.r27.u64 + ctx.r21.u64;
	// add r26,r16,r9
	ctx.r26.u64 = ctx.r16.u64 + ctx.r9.u64;
	// rlwinm r3,r23,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r28,r22
	ctx.r28.u64 = ctx.r28.u64 + ctx.r22.u64;
	// addi r23,r4,4
	ctx.r23.s64 = ctx.r4.s64 + 4;
	// add r24,r24,r31
	ctx.r24.u64 = ctx.r24.u64 + ctx.r31.u64;
	// addi r22,r26,1
	ctx.r22.s64 = ctx.r26.s64 + 1;
	// rlwinm r21,r21,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r18,r14,4,0,27
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r3,r30
	ctx.r4.u64 = ctx.r3.u64 + ctx.r30.u64;
	// rlwinm r17,r29,4,0,27
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r27,r27,4,0,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r28,r28,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r19,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r8,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r3,r23,3
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r23.s32 >> 3;
	// rlwinm r30,r24,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r20,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// subf r29,r21,r18
	ctx.r29.u64 = ctx.r18.u64 - ctx.r21.u64;
	// subf r28,r17,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r17.u64;
	// subf r27,r19,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r19.u64;
	// rlwinm r24,r22,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r23,r6,4,0,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r26,r8,r26
	ctx.r26.u64 = ctx.r8.u64 + ctx.r26.u64;
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r4,r29,r4
	ctx.r4.u64 = ctx.r29.u64 + ctx.r4.u64;
	// add r31,r27,r28
	ctx.r31.u64 = ctx.r27.u64 + ctx.r28.u64;
	// subf r30,r6,r23
	ctx.r30.u64 = ctx.r23.u64 - ctx.r6.u64;
	// add r29,r24,r26
	ctx.r29.u64 = ctx.r24.u64 + ctx.r26.u64;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// addi r29,r4,4
	ctx.r29.s64 = ctx.r4.s64 + 4;
	// srawi r4,r30,3
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r30.s32 >> 3;
	// rlwinm r28,r8,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// srawi r30,r29,3
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r29.s32 >> 3;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r29,r28,1
	ctx.xer.ca = ctx.r28.u32 <= 1;
	ctx.r29.u64 = static_cast<uint64_t>(1) - ctx.r28.u64;
	// subf r4,r4,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r4.u64;
	// rlwinm r28,r9,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// rlwinm r30,r9,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r27,r6,r29
	ctx.r27.u64 = ctx.r29.u64 - ctx.r6.u64;
	// rlwinm r26,r9,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r29,r28,r7
	ctx.r29.u64 = ctx.r7.u64 - ctx.r28.u64;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// add r28,r9,r30
	ctx.r28.u64 = ctx.r9.u64 + ctx.r30.u64;
	// rlwinm r24,r7,4,0,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r9,r26
	ctx.r9.u64 = ctx.r26.u64 - ctx.r9.u64;
	// rlwinm r23,r8,4,0,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r30,r7,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r29,1
	ctx.r26.s64 = ctx.r29.s64 + 1;
	// subf r29,r7,r24
	ctx.r29.u64 = ctx.r24.u64 - ctx.r7.u64;
	// subf r28,r28,r27
	ctx.r28.u64 = ctx.r27.u64 - ctx.r28.u64;
	// subf r27,r8,r23
	ctx.r27.u64 = ctx.r23.u64 - ctx.r8.u64;
	// add r8,r7,r30
	ctx.r8.u64 = ctx.r7.u64 + ctx.r30.u64;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r7,r28,r29
	ctx.r7.u64 = ctx.r28.u64 + ctx.r29.u64;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r9,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 3;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// srawi r8,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 3;
	// srawi r9,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 3;
	// rlwinm r26,r26,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r6,3,0,28
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// srawi r8,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 3;
	// add r4,r26,r27
	ctx.r4.u64 = ctx.r26.u64 + ctx.r27.u64;
	// add r3,r6,r24
	ctx.r3.u64 = ctx.r6.u64 + ctx.r24.u64;
	// add r10,r15,r10
	ctx.r10.u64 = ctx.r15.u64 + ctx.r10.u64;
	// subf r7,r3,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r3.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// srawi r7,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 3;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x880ee54c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880EE54C;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r5,94
	ctx.r10.s64 = ctx.r5.s64 + 94;
	// addi r11,r1,-196
	ctx.r11.s64 = ctx.r1.s64 + -196;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880EE76C:
	// rlwinm r6,r25,2,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xC;
	// lwz r28,-220(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + -220);
	// addi r4,r1,-464
	ctx.r4.s64 = ctx.r1.s64 + -464;
	// lwz r29,-124(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + -124);
	// lwz r27,-156(r11)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + -156);
	// addi r20,r1,-448
	ctx.r20.s64 = ctx.r1.s64 + -448;
	// lwz r26,-188(r11)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + -188);
	// add r7,r29,r28
	ctx.r7.u64 = ctx.r29.u64 + ctx.r28.u64;
	// lwz r30,-92(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + -92);
	// subf r5,r29,r28
	ctx.r5.u64 = ctx.r28.u64 - ctx.r29.u64;
	// lwz r31,-60(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -60);
	// add r8,r27,r26
	ctx.r8.u64 = ctx.r27.u64 + ctx.r26.u64;
	// lwz r3,-28(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -28);
	// rlwinm r19,r5,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// subf r22,r8,r7
	ctx.r22.u64 = ctx.r7.u64 - ctx.r8.u64;
	// lwzx r4,r6,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// add r23,r3,r31
	ctx.r23.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r24,r9,r30
	ctx.r24.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r23,r24
	ctx.r7.u64 = ctx.r23.u64 + ctx.r24.u64;
	// add r8,r8,r20
	ctx.r8.u64 = ctx.r8.u64 + ctx.r20.u64;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r21,r6,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 + ctx.r4.u64;
	// subf r7,r9,r30
	ctx.r7.u64 = ctx.r30.u64 - ctx.r9.u64;
	// lwz r17,0(r8)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// add r6,r6,r21
	ctx.r6.u64 = ctx.r6.u64 + ctx.r21.u64;
	// lwz r16,4(r8)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r21,r4,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r15,12(r8)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// subf r8,r23,r24
	ctx.r8.u64 = ctx.r24.u64 - ctx.r23.u64;
	// rlwinm r23,r7,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r20,r6,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r14,r7,r23
	ctx.r14.u64 = ctx.r7.u64 + ctx.r23.u64;
	// neg r7,r7
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// subf r4,r27,r26
	ctx.r4.u64 = ctx.r26.u64 - ctx.r27.u64;
	// stw r7,-480(r1)
	REX_STORE_U32(ctx.r1.u32 + -480, ctx.r7.u32);
	// add r21,r21,r20
	ctx.r21.u64 = ctx.r21.u64 + ctx.r20.u64;
	// subf r6,r3,r31
	ctx.r6.u64 = ctx.r31.u64 - ctx.r3.u64;
	// rlwinm r18,r4,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r24,r17,r21
	ctx.r24.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r21.s32);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r21,r5,r19
	ctx.r21.u64 = ctx.r5.u64 + ctx.r19.u64;
	// rlwinm r20,r6,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r19,r4,r18
	ctx.r19.u64 = ctx.r4.u64 + ctx.r18.u64;
	// add r18,r8,r7
	ctx.r18.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r20,r6,r20
	ctx.r20.u64 = ctx.r6.u64 + ctx.r20.u64;
	// rlwinm r8,r6,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r6,r30,r29
	ctx.r6.u64 = ctx.r29.u64 - ctx.r30.u64;
	// rlwinm r30,r21,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r21,-480(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -480);
	// stw r8,-480(r1)
	REX_STORE_U32(ctx.r1.u32 + -480, ctx.r8.u32);
	// subf r9,r9,r28
	ctx.r9.u64 = ctx.r28.u64 - ctx.r9.u64;
	// rlwinm r23,r22,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r28,r24,16384
	ctx.r28.s64 = ctx.r24.s64 + 16384;
	// add r23,r22,r23
	ctx.r23.u64 = ctx.r22.u64 + ctx.r23.u64;
	// srawi r22,r28,15
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFF) != 0);
	ctx.r22.s64 = ctx.r28.s32 >> 15;
	// rlwinm r29,r20,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r24,r5,4,0,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// sth r22,-94(r10)
	REX_STORE_U16(ctx.r10.u32 + -94, ctx.r22.u16);
	// rlwinm r4,r4,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r20,r14,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r19,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r21,r21,4,0,27
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r8,r31,r27
	ctx.r8.u64 = ctx.r27.u64 - ctx.r31.u64;
	// subf r30,r4,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r4.u64;
	// add r27,r7,r6
	ctx.r27.u64 = ctx.r7.u64 + ctx.r6.u64;
	// subf r29,r29,r21
	ctx.r29.u64 = ctx.r21.u64 - ctx.r29.u64;
	// add r5,r5,r24
	ctx.r5.u64 = ctx.r5.u64 + ctx.r24.u64;
	// rlwinm r4,r18,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r3,r26
	ctx.r7.u64 = ctx.r26.u64 - ctx.r3.u64;
	// add r5,r29,r5
	ctx.r5.u64 = ctx.r29.u64 + ctx.r5.u64;
	// lwz r28,-480(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -480);
	// subf r31,r20,r28
	ctx.r31.u64 = ctx.r28.u64 - ctx.r20.u64;
	// rlwinm r28,r23,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r31,r30
	ctx.r3.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// rlwinm r31,r27,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r8,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r8,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r28,r7,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r29,r7
	ctx.r29.u64 = ctx.r29.u64 + ctx.r7.u64;
	// add r30,r8,r30
	ctx.r30.u64 = ctx.r8.u64 + ctx.r30.u64;
	// rlwinm r27,r6,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r6,4,0,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r26,r7,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r28,r28,r8
	ctx.r28.u64 = ctx.r8.u64 - ctx.r28.u64;
	// rlwinm r21,r9,4,0,27
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// mulli r20,r6,-9
	ctx.r20.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(-9));
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r19,r27,r9
	ctx.r19.u64 = ctx.r9.u64 - ctx.r27.u64;
	// subf r24,r6,r24
	ctx.r24.u64 = ctx.r24.u64 - ctx.r6.u64;
	// rlwinm r18,r8,4,0,27
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r23,r31,r30
	ctx.r23.u64 = ctx.r31.u64 + ctx.r30.u64;
	// subf r22,r7,r26
	ctx.r22.u64 = ctx.r26.u64 - ctx.r7.u64;
	// rlwinm r6,r9,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r26,r28,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r27,r9,r21
	ctx.r27.u64 = ctx.r21.u64 - ctx.r9.u64;
	// subf r28,r29,r20
	ctx.r28.u64 = ctx.r20.u64 - ctx.r29.u64;
	// subf r29,r8,r18
	ctx.r29.u64 = ctx.r18.u64 - ctx.r8.u64;
	// rlwinm r31,r7,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r30,r19,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// add r23,r23,r22
	ctx.r23.u64 = ctx.r23.u64 + ctx.r22.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r8,r26,r24
	ctx.r8.u64 = ctx.r26.u64 + ctx.r24.u64;
	// add r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 + ctx.r27.u64;
	// add r31,r7,r31
	ctx.r31.u64 = ctx.r7.u64 + ctx.r31.u64;
	// mullw r9,r23,r16
	ctx.r9.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r16.s32);
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r8,r17,r4
	ctx.r8.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r4.s32);
	// mullw r7,r28,r16
	ctx.r7.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r16.s32);
	// addi r29,r9,16384
	ctx.r29.s64 = ctx.r9.s64 + 16384;
	// subf r4,r31,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r31.u64;
	// mullw r9,r6,r16
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r16.s32);
	// addi r6,r7,16384
	ctx.r6.s64 = ctx.r7.s64 + 16384;
	// addi r31,r8,16384
	ctx.r31.s64 = ctx.r8.s64 + 16384;
	// mullw r7,r4,r16
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r16.s32);
	// addi r4,r9,16384
	ctx.r4.s64 = ctx.r9.s64 + 16384;
	// mullw r8,r15,r5
	ctx.r8.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r5.s32);
	// srawi r5,r29,15
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFF) != 0);
	ctx.r5.s64 = ctx.r29.s32 >> 15;
	// mullw r9,r15,r3
	ctx.r9.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r3.s32);
	// sth r5,-78(r10)
	REX_STORE_U16(ctx.r10.u32 + -78, ctx.r5.u16);
	// srawi r3,r6,15
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFF) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 15;
	// addi r7,r7,16384
	ctx.r7.s64 = ctx.r7.s64 + 16384;
	// srawi r6,r31,15
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFF) != 0);
	ctx.r6.s64 = ctx.r31.s32 >> 15;
	// sth r3,-46(r10)
	REX_STORE_U16(ctx.r10.u32 + -46, ctx.r3.u16);
	// addi r8,r8,16384
	ctx.r8.s64 = ctx.r8.s64 + 16384;
	// srawi r4,r4,15
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 15;
	// addi r9,r9,16384
	ctx.r9.s64 = ctx.r9.s64 + 16384;
	// srawi r7,r7,15
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 15;
	// srawi r8,r8,15
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 15;
	// srawi r9,r9,15
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 15;
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// sth r5,-14(r10)
	REX_STORE_U16(ctx.r10.u32 + -14, ctx.r5.u16);
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// sth r6,-30(r10)
	REX_STORE_U16(ctx.r10.u32 + -30, ctx.r6.u16);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// sth r4,18(r10)
	REX_STORE_U16(ctx.r10.u32 + 18, ctx.r4.u16);
	// sth r3,-62(r10)
	REX_STORE_U16(ctx.r10.u32 + -62, ctx.r3.u16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x880ee76c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880EE76C;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880F9AC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x880F9AC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// rlwinm r10,r27,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x1;
	// subfc r8,r27,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r27.u32;
	ctx.r8.u64 = ctx.r11.u64 - ctx.r27.u64;
	// lis r7,-30678
	ctx.r7.s64 = -2010513408;
	// adde r11,r10,r9
	temp.u8 = (ctx.r10.u32 + ctx.r9.u32 < ctx.r10.u32) | (ctx.r10.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r11,-22712(r7)
	REX_STORE_U32(ctx.r7.u32 + -22712, ctx.r11.u32);
	// ble cr6,0x880f9b0c
	if (!ctx.cr6.gt) goto loc_880F9B0C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// bl 0x880f9a30
	ctx.lr = 0x880F9B0C;
	sub_880F9A30(ctx, base);
loc_880F9B0C:
	// lwz r11,84(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r26,24(r30)
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r26.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r26,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r26.u32);
	// stw r11,88(r30)
	REX_STORE_U32(ctx.r30.u32 + 88, ctx.r11.u32);
	// ble cr6,0x880f9b70
	if (!ctx.cr6.gt) goto loc_880F9B70;
	// addi r28,r30,36
	ctx.r28.s64 = ctx.r30.s64 + 36;
loc_880F9B38:
	// lwzu r31,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r31.u64 = REX_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r26,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r26.u32);
	// bl 0x88052d90
	ctx.lr = 0x880F9B54;
	sub_88052D90(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8813c860
	ctx.lr = 0x880F9B60;
	sub_8813C860(ctx, base);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x880f9b38
	if (ctx.cr6.lt) goto loc_880F9B38;
loc_880F9B70:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880FAAF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x880FAAF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,12(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r7,16(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// or r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r9,24(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r27,7868(r3)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 7868);
	// or r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// or r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 | ctx.r7.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// or r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 | ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// or r29,r10,r9
	ctx.r29.u64 = ctx.r10.u64 | ctx.r9.u64;
	// bl 0x880f5e20
	ctx.lr = 0x880FAB4C;
	sub_880F5E20(ctx, base);
	// xor r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 ^ ctx.r29.u64;
	// lis r9,-30680
	ctx.r9.s64 = -2010644480;
	// lis r8,-30680
	ctx.r8.s64 = -2010644480;
	// addi r28,r9,2656
	ctx.r28.s64 = ctx.r9.s64 + 2656;
	// addi r7,r8,2400
	ctx.r7.s64 = ctx.r8.s64 + 2400;
	// rlwinm r6,r29,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbzx r5,r29,r28
	ctx.r5.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r28.u32);
	// lwzx r4,r6,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// bl 0x880e6960
	ctx.lr = 0x880FAB74;
	sub_880E6960(ctx, base);
	// lwz r5,28568(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x880fab90
	if (ctx.cr6.eq) goto loc_880FAB90;
	// lbzx r10,r29,r28
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r28.u32);
	// lwz r11,28604(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28604);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,28604(r31)
	REX_STORE_U32(ctx.r31.u32 + 28604, ctx.r11.u32);
loc_880FAB90:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x880faba8
	if (!ctx.cr6.eq) goto loc_880FABA8;
	// lwz r11,28408(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880fabb8
	if (!ctx.cr6.eq) goto loc_880FABB8;
loc_880FABA8:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,28(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x880e6960
	ctx.lr = 0x880FABB8;
	sub_880E6960(ctx, base);
loc_880FABB8:
	// lwz r11,2340(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2340);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880fabe4
	if (ctx.cr6.eq) goto loc_880FABE4;
	// lwz r11,28420(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28420);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880fabe4
	if (!ctx.cr6.eq) goto loc_880FABE4;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,124(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 124);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x880FABE4;
	sub_880E6960(ctx, base);
loc_880FABE4:
	// lwz r11,2572(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fac60
	if (ctx.cr6.eq) goto loc_880FAC60;
	// lwz r11,2428(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2428);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fac60
	if (ctx.cr6.eq) goto loc_880FAC60;
	// lwz r11,2436(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2436);
	// lwz r9,96(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880fac60
	if (!ctx.cr6.eq) goto loc_880FAC60;
	// lbz r11,2432(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2432);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x880fac4c
	if (!ctx.cr6.eq) goto loc_880FAC4C;
	// lwz r10,1416(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1416);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,1424(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// addic r6,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r4,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x880e6960
	ctx.lr = 0x880FAC44;
	sub_880E6960(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_880FAC4C:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880fa1f8
	ctx.lr = 0x880FAC60;
	sub_880FA1F8(ctx, base);
loc_880FAC60:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88100668) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805082c
	ctx.lr = 0x88100670;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r22,0(r11)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r21,4(r11)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lwz r23,40(r11)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// bl 0x88052d90
	ctx.lr = 0x881006B4;
	sub_88052D90(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x881006fc
	if (!ctx.cr6.gt) goto loc_881006FC;
	// addi r9,r30,-1
	ctx.r9.s64 = ctx.r30.s64 + -1;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881006D4:
	// lhz r8,6(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r6,r7,r29
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r5,r31
	REX_STORE_U16(ctx.r5.u32 + ctx.r31.u32, ctx.r9.u16);
	// bdnz 0x881006d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881006D4;
loc_881006FC:
	// lwz r9,720(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 720);
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,2312(r27)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 2312);
	// rlwinm r10,r24,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// blt cr6,0x88100744
	if (ctx.cr6.lt) goto loc_88100744;
	// bne cr6,0x88100730
	if (!ctx.cr6.eq) goto loc_88100730;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// lwz r6,2316(r27)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 2316);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// b 0x88100754
	goto loc_88100754;
loc_88100730:
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// lwz r6,2320(r27)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 2320);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// b 0x88100754
	goto loc_88100754;
loc_88100744:
	// clrlwi r8,r26,31
	ctx.r8.u64 = ctx.r26.u32 & 0x1;
	// srawi r7,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r26.s32 >> 1;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
loc_88100754:
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r9,28552(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 28552);
	// lwz r8,28556(r27)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 28556);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// rlwinm r11,r7,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r30,r31,2
	ctx.r30.s64 = ctx.r31.s64 + 2;
	// add r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// sth r11,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// lhz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 16);
	// sth r10,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// lhz r9,2(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// bne cr6,0x881007fc
	if (!ctx.cr6.eq) goto loc_881007FC;
	// sth r9,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r9.u16);
	// lhz r8,18(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 18);
	// sth r8,16(r31)
	REX_STORE_U16(ctx.r31.u32 + 16, ctx.r8.u16);
	// lhz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 4);
	// sth r7,4(r31)
	REX_STORE_U16(ctx.r31.u32 + 4, ctx.r7.u16);
	// lhz r6,20(r3)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + 20);
	// sth r6,32(r31)
	REX_STORE_U16(ctx.r31.u32 + 32, ctx.r6.u16);
	// lhz r5,6(r3)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r3.u32 + 6);
	// sth r5,6(r31)
	REX_STORE_U16(ctx.r31.u32 + 6, ctx.r5.u16);
	// lhz r4,22(r3)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + 22);
	// sth r4,48(r31)
	REX_STORE_U16(ctx.r31.u32 + 48, ctx.r4.u16);
	// lhz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 8);
	// sth r11,8(r31)
	REX_STORE_U16(ctx.r31.u32 + 8, ctx.r11.u16);
	// lhz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 24);
	// sth r10,64(r31)
	REX_STORE_U16(ctx.r31.u32 + 64, ctx.r10.u16);
	// lhz r9,10(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 10);
	// sth r9,10(r31)
	REX_STORE_U16(ctx.r31.u32 + 10, ctx.r9.u16);
	// lhz r8,26(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 26);
	// sth r8,80(r31)
	REX_STORE_U16(ctx.r31.u32 + 80, ctx.r8.u16);
	// lhz r7,12(r3)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 12);
	// sth r7,12(r31)
	REX_STORE_U16(ctx.r31.u32 + 12, ctx.r7.u16);
	// lhz r6,28(r3)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + 28);
	// sth r6,96(r31)
	REX_STORE_U16(ctx.r31.u32 + 96, ctx.r6.u16);
	// lhz r5,14(r3)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r3.u32 + 14);
	// sth r5,14(r31)
	REX_STORE_U16(ctx.r31.u32 + 14, ctx.r5.u16);
	// lhz r4,30(r3)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + 30);
	// sth r4,112(r31)
	REX_STORE_U16(ctx.r31.u32 + 112, ctx.r4.u16);
	// b 0x88100868
	goto loc_88100868;
loc_881007FC:
	// sth r9,16(r31)
	REX_STORE_U16(ctx.r31.u32 + 16, ctx.r9.u16);
	// lhz r8,18(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 18);
	// sth r8,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r8.u16);
	// lhz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 4);
	// sth r7,32(r31)
	REX_STORE_U16(ctx.r31.u32 + 32, ctx.r7.u16);
	// lhz r6,20(r3)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + 20);
	// sth r6,4(r31)
	REX_STORE_U16(ctx.r31.u32 + 4, ctx.r6.u16);
	// lhz r5,6(r3)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r3.u32 + 6);
	// sth r5,48(r31)
	REX_STORE_U16(ctx.r31.u32 + 48, ctx.r5.u16);
	// lhz r4,22(r3)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + 22);
	// sth r4,6(r31)
	REX_STORE_U16(ctx.r31.u32 + 6, ctx.r4.u16);
	// lhz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 8);
	// sth r11,64(r31)
	REX_STORE_U16(ctx.r31.u32 + 64, ctx.r11.u16);
	// lhz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 24);
	// sth r10,8(r31)
	REX_STORE_U16(ctx.r31.u32 + 8, ctx.r10.u16);
	// lhz r9,10(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 10);
	// sth r9,80(r31)
	REX_STORE_U16(ctx.r31.u32 + 80, ctx.r9.u16);
	// lhz r8,26(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 26);
	// sth r8,10(r31)
	REX_STORE_U16(ctx.r31.u32 + 10, ctx.r8.u16);
	// lhz r7,12(r3)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 12);
	// sth r7,96(r31)
	REX_STORE_U16(ctx.r31.u32 + 96, ctx.r7.u16);
	// lhz r6,28(r3)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + 28);
	// sth r6,12(r31)
	REX_STORE_U16(ctx.r31.u32 + 12, ctx.r6.u16);
	// lhz r5,14(r3)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r3.u32 + 14);
	// sth r5,112(r31)
	REX_STORE_U16(ctx.r31.u32 + 112, ctx.r5.u16);
	// lhz r4,30(r3)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + 30);
	// sth r4,14(r31)
	REX_STORE_U16(ctx.r31.u32 + 14, ctx.r4.u16);
loc_88100868:
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x88100874;
	sub_88052D90(ctx, base);
	// li r11,63
	ctx.r11.s64 = 63;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mullw r9,r10,r23
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r23.s32);
	// sth r9,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r9.u16);
loc_8810088C:
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881008b4
	if (ctx.cr6.eq) goto loc_881008B4;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// bgt cr6,0x881008a8
	if (ctx.cr6.gt) goto loc_881008A8;
	// neg r10,r21
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r21.u64);
loc_881008A8:
	// mullw r11,r11,r22
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r22.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r11,0(r30)
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
loc_881008B4:
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// bdnz 0x8810088c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8810088C;
	// li r3,255
	ctx.r3.s64 = 255;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88108308) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88108310;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2272(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2272);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,7764(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 7764);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,724(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// beq cr6,0x881083ec
	if (ctx.cr6.eq) goto loc_881083EC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88108480
	if (!ctx.cr6.gt) goto loc_88108480;
	// lwz r11,720(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// li r27,0
	ctx.r27.s64 = 0;
loc_88108340:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881083d0
	if (!ctx.cr6.gt) goto loc_881083D0;
loc_8810834C:
	// lwz r11,720(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 720);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mulli r10,r11,276
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(276));
	// subf r11,r10,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r10.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r8,r11,56
	ctx.r8.s64 = ctx.r11.s64 + 56;
	// beq cr6,0x8810837c
	if (ctx.cr6.eq) goto loc_8810837C;
	// lwz r11,2264(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2264);
	// lwzx r9,r11,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88108380
	if (ctx.cr6.eq) goto loc_88108380;
loc_8810837C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_88108380:
	// cntlzw r9,r29
	ctx.r9.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r7,r31,-272
	ctx.r7.s64 = ctx.r31.s64 + -272;
	// lbz r6,88(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 88);
	// rlwinm r5,r9,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// stw r5,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// addi r9,r31,-220
	ctx.r9.s64 = ctx.r31.s64 + -220;
	// addi r7,r31,56
	ctx.r7.s64 = ctx.r31.s64 + 56;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88106668
	ctx.lr = 0x881083BC;
	sub_88106668(ctx, base);
	// lwz r11,720(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 720);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,276
	ctx.r31.s64 = ctx.r31.s64 + 276;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8810834c
	if (ctx.cr6.lt) goto loc_8810834C;
loc_881083D0:
	// lwz r10,724(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 724);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88108340
	if (ctx.cr6.lt) goto loc_88108340;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_881083EC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88108480
	if (!ctx.cr6.gt) goto loc_88108480;
	// lwz r11,720(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 720);
loc_881083F8:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88108470
	if (!ctx.cr6.gt) goto loc_88108470;
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// rlwinm r27,r11,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8810840C:
	// lwz r11,720(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 720);
	// cntlzw r10,r29
	ctx.r10.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// addi r9,r31,-272
	ctx.r9.s64 = ctx.r31.s64 + -272;
	// lbz r6,88(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 88);
	// mulli r8,r11,276
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(276));
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// subf r11,r8,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r8.u64;
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r9,r31,-220
	ctx.r9.s64 = ctx.r31.s64 + -220;
	// addi r8,r11,56
	ctx.r8.s64 = ctx.r11.s64 + 56;
	// addi r7,r31,56
	ctx.r7.s64 = ctx.r31.s64 + 56;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88106668
	ctx.lr = 0x8810845C;
	sub_88106668(ctx, base);
	// lwz r11,720(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 720);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,276
	ctx.r31.s64 = ctx.r31.s64 + 276;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8810840c
	if (ctx.cr6.lt) goto loc_8810840C;
loc_88108470:
	// lwz r10,724(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 724);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881083f8
	if (ctx.cr6.lt) goto loc_881083F8;
loc_88108480:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810A148) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x8810A150;
	__savegprlr_20(ctx, base);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,82
	ctx.r11.s64 = ctx.r1.s64 + 82;
	// addi r22,r3,32
	ctx.r22.s64 = ctx.r3.s64 + 32;
	// subf r26,r3,r11
	ctx.r26.u64 = ctx.r11.u64 - ctx.r3.u64;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// li r23,14
	ctx.r23.s64 = 14;
loc_8810A168:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// li r25,14
	ctx.r25.s64 = 14;
loc_8810A170:
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lhz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lhz r5,34(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 34);
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r4,36(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 36);
	// lhz r8,32(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 32);
	// extsh r30,r7
	ctx.r30.s64 = ctx.r7.s16;
	// lhz r7,-30(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + -30);
	// extsh r29,r5
	ctx.r29.s64 = ctx.r5.s16;
	// lhz r10,-32(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + -32);
	// extsh r27,r8
	ctx.r27.s64 = ctx.r8.s16;
	// lhz r31,-28(r11)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + -28);
	// extsh r28,r4
	ctx.r28.s64 = ctx.r4.s16;
	// subf r8,r6,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r6.u64;
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// subf r7,r29,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r29.u64;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// subf r20,r27,r9
	ctx.r20.u64 = ctx.r9.u64 - ctx.r27.u64;
	// subf r21,r28,r9
	ctx.r21.u64 = ctx.r9.u64 - ctx.r28.u64;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// subf. r10,r30,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r8,r5,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r5.u64;
	// subf r9,r4,r21
	ctx.r9.u64 = ctx.r21.u64 - ctx.r4.u64;
	// subf r7,r31,r20
	ctx.r7.u64 = ctx.r20.u64 - ctx.r31.u64;
	// bge 0x8810a1e4
	if (!ctx.cr0.lt) goto loc_8810A1E4;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_8810A1E4:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x8810a1f0
	if (!ctx.cr6.lt) goto loc_8810A1F0;
	// neg r8,r8
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r8.u64);
loc_8810A1F0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x8810a1fc
	if (!ctx.cr6.lt) goto loc_8810A1FC;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_8810A1FC:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x8810a208
	if (!ctx.cr6.lt) goto loc_8810A208;
	// neg r7,r7
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r7.u64);
loc_8810A208:
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x8810a240
	if (!ctx.cr6.gt) goto loc_8810A240;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8810a228
	if (!ctx.cr6.gt) goto loc_8810A228;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x8810a258
	if (!ctx.cr6.gt) goto loc_8810A258;
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x8810a270
	goto loc_8810A270;
loc_8810A228:
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x8810a238
	if (!ctx.cr6.gt) goto loc_8810A238;
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x8810a270
	goto loc_8810A270;
loc_8810A238:
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x8810a270
	goto loc_8810A270;
loc_8810A240:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8810a260
	if (!ctx.cr6.gt) goto loc_8810A260;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x8810a258
	if (!ctx.cr6.gt) goto loc_8810A258;
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x8810a270
	goto loc_8810A270;
loc_8810A258:
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x8810a270
	goto loc_8810A270;
loc_8810A260:
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// li r10,4
	ctx.r10.s64 = 4;
	// bgt cr6,0x8810a270
	if (ctx.cr6.gt) goto loc_8810A270;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8810A270:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x8810a38c
	if (ctx.cr6.gt) goto loc_8810A38C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8810a2d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8810A2D0;
	// bdzf 4*cr6+eq,0x8810a310
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8810A310;
	// bne cr6,0x8810a350
	if (!ctx.cr6.eq) goto loc_8810A350;
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8810a2b0
	if (!ctx.cr6.gt) goto loc_8810A2B0;
	// xor r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// xor r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r10.u64;
loc_8810A2B0:
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x8810a2bc
	if (!ctx.cr6.gt) goto loc_8810A2BC;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_8810A2BC:
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8810a2c8
	if (!ctx.cr6.gt) goto loc_8810A2C8;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8810A2C8:
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// b 0x8810a388
	goto loc_8810A388;
loc_8810A2D0:
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8810a2f0
	if (!ctx.cr6.gt) goto loc_8810A2F0;
	// xor r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// xor r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r10.u64;
loc_8810A2F0:
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x8810a2fc
	if (!ctx.cr6.gt) goto loc_8810A2FC;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_8810A2FC:
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8810a2c8
	if (!ctx.cr6.gt) goto loc_8810A2C8;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// b 0x8810a388
	goto loc_8810A388;
loc_8810A310:
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8810a330
	if (!ctx.cr6.gt) goto loc_8810A330;
	// xor r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// xor r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r10.u64;
loc_8810A330:
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x8810a33c
	if (!ctx.cr6.gt) goto loc_8810A33C;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_8810A33C:
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8810a2c8
	if (!ctx.cr6.gt) goto loc_8810A2C8;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// b 0x8810a388
	goto loc_8810A388;
loc_8810A350:
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8810a370
	if (!ctx.cr6.gt) goto loc_8810A370;
	// xor r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// xor r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r10.u64;
loc_8810A370:
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x8810a37c
	if (!ctx.cr6.gt) goto loc_8810A37C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_8810A37C:
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8810a388
	if (!ctx.cr6.gt) goto loc_8810A388;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8810A388:
	// sthx r10,r11,r26
	REX_STORE_U16(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u16);
loc_8810A38C:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bne 0x8810a170
	if (!ctx.cr0.eq) goto loc_8810A170;
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// bne 0x8810a168
	if (!ctx.cr0.eq) goto loc_8810A168;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r30,r3,30
	ctx.r30.s64 = ctx.r3.s64 + 30;
	// li r8,2
	ctx.r8.s64 = 2;
loc_8810A3B4:
	// li r9,14
	ctx.r9.s64 = 14;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8810A3C0:
	// lhzu r9,32(r11)
	ea = 32 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,32(r10)
	ea = 32 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8810a3c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8810A3C0;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r10,r1,142
	ctx.r10.s64 = ctx.r1.s64 + 142;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne 0x8810a3b4
	if (!ctx.cr0.eq) goto loc_8810A3B4;
	// addi r4,r3,2
	ctx.r4.s64 = ctx.r3.s64 + 2;
	// addi r11,r1,82
	ctx.r11.s64 = ctx.r1.s64 + 82;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r31,r3,482
	ctx.r31.s64 = ctx.r3.s64 + 482;
	// li r5,2
	ctx.r5.s64 = 2;
loc_8810A3F0:
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r6,r11,-2
	ctx.r6.s64 = ctx.r11.s64 + -2;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8810A400:
	// lhz r11,-2(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + -2);
	// lhz r9,-4(r8)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + -4);
	// lhz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8810a430
	if (!ctx.cr6.gt) goto loc_8810A430;
	// xor r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r11.u64;
	// xor r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 ^ ctx.r11.u64;
	// xor r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r11.u64;
loc_8810A430:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8810a43c
	if (!ctx.cr6.gt) goto loc_8810A43C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8810A43C:
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8810a448
	if (!ctx.cr6.gt) goto loc_8810A448;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8810A448:
	// lhz r7,2(r8)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + 2);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// sth r29,2(r6)
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r29.u16);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8810a470
	if (!ctx.cr6.gt) goto loc_8810A470;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
loc_8810A470:
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x8810a47c
	if (!ctx.cr6.gt) goto loc_8810A47C;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8810A47C:
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8810a488
	if (!ctx.cr6.gt) goto loc_8810A488;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8810A488:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// sthu r11,4(r6)
	ea = 4 + ctx.r6.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r6.u32 = ea;
	// bdnz 0x8810a400
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8810A400;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r11,r1,562
	ctx.r11.s64 = ctx.r1.s64 + 562;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// bne 0x8810a3f0
	if (!ctx.cr0.eq) goto loc_8810A3F0;
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// lhz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// lhz r9,0(r22)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r22.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8810a4d4
	if (!ctx.cr6.gt) goto loc_8810A4D4;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
loc_8810A4D4:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8810a4e0
	if (!ctx.cr6.gt) goto loc_8810A4E0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8810A4E0:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8810a4ec
	if (!ctx.cr6.gt) goto loc_8810A4EC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8810A4EC:
	// lhz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 28);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lhz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// lhz r7,62(r3)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 62);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// sth r9,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8810a520
	if (!ctx.cr6.gt) goto loc_8810A520;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
loc_8810A520:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8810a52c
	if (!ctx.cr6.gt) goto loc_8810A52C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8810A52C:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8810a538
	if (!ctx.cr6.gt) goto loc_8810A538;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8810A538:
	// lhz r10,448(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 448);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lhz r8,480(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 480);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// lhz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// sth r9,110(r1)
	REX_STORE_U16(ctx.r1.u32 + 110, ctx.r9.u16);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8810a56c
	if (!ctx.cr6.gt) goto loc_8810A56C;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
loc_8810A56C:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8810a578
	if (!ctx.cr6.gt) goto loc_8810A578;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8810A578:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8810a584
	if (!ctx.cr6.gt) goto loc_8810A584;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8810A584:
	// lhz r10,508(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 508);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lhz r8,510(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 510);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// lhz r7,478(r3)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 478);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// sth r9,560(r1)
	REX_STORE_U16(ctx.r1.u32 + 560, ctx.r9.u16);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8810a5b8
	if (!ctx.cr6.gt) goto loc_8810A5B8;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
loc_8810A5B8:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8810a5c4
	if (!ctx.cr6.gt) goto loc_8810A5C4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8810A5C4:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8810a5d0
	if (!ctx.cr6.gt) goto loc_8810A5D0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8810A5D0:
	// sth r11,590(r1)
	REX_STORE_U16(ctx.r1.u32 + 590, ctx.r11.u16);
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,-19972(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -19972);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8810A5E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881108A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881108B0;
	__savegprlr_14(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,208(r1)
	REX_STORE_U8(ctx.r1.u32 + 208, ctx.r10.u8);
	// li r7,8
	ctx.r7.s64 = 8;
	// stb r10,210(r1)
	REX_STORE_U8(ctx.r1.u32 + 210, ctx.r10.u8);
	// li r8,12
	ctx.r8.s64 = 12;
	// stb r9,209(r1)
	REX_STORE_U8(ctx.r1.u32 + 209, ctx.r9.u8);
	// li r24,2
	ctx.r24.s64 = 2;
	// stb r10,212(r1)
	REX_STORE_U8(ctx.r1.u32 + 212, ctx.r10.u8);
	// li r25,6
	ctx.r25.s64 = 6;
	// stb r6,213(r1)
	REX_STORE_U8(ctx.r1.u32 + 213, ctx.r6.u8);
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r24,211(r1)
	REX_STORE_U8(ctx.r1.u32 + 211, ctx.r24.u8);
	// li r26,10
	ctx.r26.s64 = 10;
	// stb r10,214(r1)
	REX_STORE_U8(ctx.r1.u32 + 214, ctx.r10.u8);
	// li r27,14
	ctx.r27.s64 = 14;
	// stb r25,215(r1)
	REX_STORE_U8(ctx.r1.u32 + 215, ctx.r25.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,216(r1)
	REX_STORE_U8(ctx.r1.u32 + 216, ctx.r10.u8);
	// li r28,17
	ctx.r28.s64 = 17;
	// stb r7,217(r1)
	REX_STORE_U8(ctx.r1.u32 + 217, ctx.r7.u8);
	// li r29,9
	ctx.r29.s64 = 9;
	// stb r10,218(r1)
	REX_STORE_U8(ctx.r1.u32 + 218, ctx.r10.u8);
	// li r30,13
	ctx.r30.s64 = 13;
	// stb r26,219(r1)
	REX_STORE_U8(ctx.r1.u32 + 219, ctx.r26.u8);
	// li r23,3
	ctx.r23.s64 = 3;
	// stb r10,220(r1)
	REX_STORE_U8(ctx.r1.u32 + 220, ctx.r10.u8);
	// li r20,7
	ctx.r20.s64 = 7;
	// stb r8,221(r1)
	REX_STORE_U8(ctx.r1.u32 + 221, ctx.r8.u8);
	// li r31,20
	ctx.r31.s64 = 20;
	// stb r10,222(r1)
	REX_STORE_U8(ctx.r1.u32 + 222, ctx.r10.u8);
	// li r19,21
	ctx.r19.s64 = 21;
	// stb r27,223(r1)
	REX_STORE_U8(ctx.r1.u32 + 223, ctx.r27.u8);
	// li r4,24
	ctx.r4.s64 = 24;
	// stb r9,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r9.u8);
	// li r5,28
	ctx.r5.s64 = 28;
	// stb r3,97(r1)
	REX_STORE_U8(ctx.r1.u32 + 97, ctx.r3.u8);
	// li r18,25
	ctx.r18.s64 = 25;
	// stb r10,98(r1)
	REX_STORE_U8(ctx.r1.u32 + 98, ctx.r10.u8);
	// li r21,11
	ctx.r21.s64 = 11;
	// stb r28,99(r1)
	REX_STORE_U8(ctx.r1.u32 + 99, ctx.r28.u8);
	// li r22,15
	ctx.r22.s64 = 15;
	// stb r6,100(r1)
	REX_STORE_U8(ctx.r1.u32 + 100, ctx.r6.u8);
	// li r17,29
	ctx.r17.s64 = 29;
	// stb r11,101(r1)
	REX_STORE_U8(ctx.r1.u32 + 101, ctx.r11.u8);
	// stb r31,102(r1)
	REX_STORE_U8(ctx.r1.u32 + 102, ctx.r31.u8);
	// stb r19,103(r1)
	REX_STORE_U8(ctx.r1.u32 + 103, ctx.r19.u8);
	// stb r7,104(r1)
	REX_STORE_U8(ctx.r1.u32 + 104, ctx.r7.u8);
	// stb r29,105(r1)
	REX_STORE_U8(ctx.r1.u32 + 105, ctx.r29.u8);
	// stb r4,106(r1)
	REX_STORE_U8(ctx.r1.u32 + 106, ctx.r4.u8);
	// stb r18,107(r1)
	REX_STORE_U8(ctx.r1.u32 + 107, ctx.r18.u8);
	// stb r8,108(r1)
	REX_STORE_U8(ctx.r1.u32 + 108, ctx.r8.u8);
	// stb r30,109(r1)
	REX_STORE_U8(ctx.r1.u32 + 109, ctx.r30.u8);
	// stb r5,110(r1)
	REX_STORE_U8(ctx.r1.u32 + 110, ctx.r5.u8);
	// stb r17,111(r1)
	REX_STORE_U8(ctx.r1.u32 + 111, ctx.r17.u8);
	// stb r24,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, ctx.r24.u8);
	// stb r23,113(r1)
	REX_STORE_U8(ctx.r1.u32 + 113, ctx.r23.u8);
	// stb r6,114(r1)
	REX_STORE_U8(ctx.r1.u32 + 114, ctx.r6.u8);
	// stb r11,115(r1)
	REX_STORE_U8(ctx.r1.u32 + 115, ctx.r11.u8);
	// stb r25,116(r1)
	REX_STORE_U8(ctx.r1.u32 + 116, ctx.r25.u8);
	// stb r20,117(r1)
	REX_STORE_U8(ctx.r1.u32 + 117, ctx.r20.u8);
	// stb r7,118(r1)
	REX_STORE_U8(ctx.r1.u32 + 118, ctx.r7.u8);
	// stb r29,119(r1)
	REX_STORE_U8(ctx.r1.u32 + 119, ctx.r29.u8);
	// stb r26,120(r1)
	REX_STORE_U8(ctx.r1.u32 + 120, ctx.r26.u8);
	// stb r21,121(r1)
	REX_STORE_U8(ctx.r1.u32 + 121, ctx.r21.u8);
	// stb r8,122(r1)
	REX_STORE_U8(ctx.r1.u32 + 122, ctx.r8.u8);
	// stb r30,123(r1)
	REX_STORE_U8(ctx.r1.u32 + 123, ctx.r30.u8);
	// stb r27,124(r1)
	REX_STORE_U8(ctx.r1.u32 + 124, ctx.r27.u8);
	// stb r22,125(r1)
	REX_STORE_U8(ctx.r1.u32 + 125, ctx.r22.u8);
	// stb r10,126(r1)
	REX_STORE_U8(ctx.r1.u32 + 126, ctx.r10.u8);
	// stb r28,127(r1)
	REX_STORE_U8(ctx.r1.u32 + 127, ctx.r28.u8);
	// stb r9,176(r1)
	REX_STORE_U8(ctx.r1.u32 + 176, ctx.r9.u8);
	// stb r3,177(r1)
	REX_STORE_U8(ctx.r1.u32 + 177, ctx.r3.u8);
	// stb r24,178(r1)
	REX_STORE_U8(ctx.r1.u32 + 178, ctx.r24.u8);
	// stb r23,179(r1)
	REX_STORE_U8(ctx.r1.u32 + 179, ctx.r23.u8);
	// stb r6,180(r1)
	REX_STORE_U8(ctx.r1.u32 + 180, ctx.r6.u8);
	// stb r11,181(r1)
	REX_STORE_U8(ctx.r1.u32 + 181, ctx.r11.u8);
	// stb r25,182(r1)
	REX_STORE_U8(ctx.r1.u32 + 182, ctx.r25.u8);
	// stb r20,183(r1)
	REX_STORE_U8(ctx.r1.u32 + 183, ctx.r20.u8);
	// stb r10,184(r1)
	REX_STORE_U8(ctx.r1.u32 + 184, ctx.r10.u8);
	// lis r23,-30678
	ctx.r23.s64 = -2010513408;
	// stb r3,129(r1)
	REX_STORE_U8(ctx.r1.u32 + 129, ctx.r3.u8);
	// stb r11,131(r1)
	REX_STORE_U8(ctx.r1.u32 + 131, ctx.r11.u8);
	// lis r18,-30678
	ctx.r18.s64 = -2010513408;
	// addi r3,r23,-19928
	ctx.r3.s64 = ctx.r23.s64 + -19928;
	// stb r24,160(r1)
	REX_STORE_U8(ctx.r1.u32 + 160, ctx.r24.u8);
	// li r24,18
	ctx.r24.s64 = 18;
	// stb r19,189(r1)
	REX_STORE_U8(ctx.r1.u32 + 189, ctx.r19.u8);
	// addi r11,r3,15
	ctx.r11.s64 = ctx.r3.s64 + 15;
	// stb r25,162(r1)
	REX_STORE_U8(ctx.r1.u32 + 162, ctx.r25.u8);
	// lis r17,-30678
	ctx.r17.s64 = -2010513408;
	// stb r24,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r24.u8);
	// rlwinm r3,r11,0,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stb r28,185(r1)
	REX_STORE_U8(ctx.r1.u32 + 185, ctx.r28.u8);
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// stb r28,137(r1)
	REX_STORE_U8(ctx.r1.u32 + 137, ctx.r28.u8);
	// addi r23,r3,16
	ctx.r23.s64 = ctx.r3.s64 + 16;
	// stb r31,188(r1)
	REX_STORE_U8(ctx.r1.u32 + 188, ctx.r31.u8);
	// lis r16,-30678
	ctx.r16.s64 = -2010513408;
	// stb r9,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, ctx.r9.u8);
	// mr r20,r23
	ctx.r20.u64 = ctx.r23.u64;
	// stb r6,130(r1)
	REX_STORE_U8(ctx.r1.u32 + 130, ctx.r6.u8);
	// addi r23,r23,16
	ctx.r23.s64 = ctx.r23.s64 + 16;
	// stb r7,132(r1)
	REX_STORE_U8(ctx.r1.u32 + 132, ctx.r7.u8);
	// stw r20,25772(r18)
	REX_STORE_U32(ctx.r18.u32 + 25772, ctx.r20.u32);
	// lis r19,-30678
	ctx.r19.s64 = -2010513408;
	// mr r20,r23
	ctx.r20.u64 = ctx.r23.u64;
	// stw r3,25768(r11)
	REX_STORE_U32(ctx.r11.u32 + 25768, ctx.r3.u32);
	// addi r23,r23,16
	ctx.r23.s64 = ctx.r23.s64 + 16;
	// stw r19,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r19.u32);
	// stw r20,25792(r17)
	REX_STORE_U32(ctx.r17.u32 + 25792, ctx.r20.u32);
	// li r11,18
	ctx.r11.s64 = 18;
	// mr r20,r23
	ctx.r20.u64 = ctx.r23.u64;
	// stb r29,133(r1)
	REX_STORE_U8(ctx.r1.u32 + 133, ctx.r29.u8);
	// addi r23,r23,16
	ctx.r23.s64 = ctx.r23.s64 + 16;
	// stb r11,186(r1)
	REX_STORE_U8(ctx.r1.u32 + 186, ctx.r11.u8);
	// stw r20,25784(r16)
	REX_STORE_U32(ctx.r16.u32 + 25784, ctx.r20.u32);
	// li r11,19
	ctx.r11.s64 = 19;
	// mr r20,r23
	ctx.r20.u64 = ctx.r23.u64;
	// stb r8,134(r1)
	REX_STORE_U8(ctx.r1.u32 + 134, ctx.r8.u8);
	// addi r23,r23,16
	ctx.r23.s64 = ctx.r23.s64 + 16;
	// stb r11,187(r1)
	REX_STORE_U8(ctx.r1.u32 + 187, ctx.r11.u8);
	// lis r15,-30678
	ctx.r15.s64 = -2010513408;
	// stb r30,135(r1)
	REX_STORE_U8(ctx.r1.u32 + 135, ctx.r30.u8);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stb r10,136(r1)
	REX_STORE_U8(ctx.r1.u32 + 136, ctx.r10.u8);
	// li r25,23
	ctx.r25.s64 = 23;
	// stw r15,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r15.u32);
	// stw r11,25776(r19)
	REX_STORE_U32(ctx.r19.u32 + 25776, ctx.r11.u32);
	// li r11,21
	ctx.r11.s64 = 21;
	// stb r25,191(r1)
	REX_STORE_U8(ctx.r1.u32 + 191, ctx.r25.u8);
	// li r25,7
	ctx.r25.s64 = 7;
	// stb r11,139(r1)
	REX_STORE_U8(ctx.r1.u32 + 139, ctx.r11.u8);
	// li r28,22
	ctx.r28.s64 = 22;
	// stw r20,25760(r15)
	REX_STORE_U32(ctx.r15.u32 + 25760, ctx.r20.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// lbz r15,80(r1)
	ctx.r15.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// li r20,29
	ctx.r20.s64 = 29;
	// stb r25,163(r1)
	REX_STORE_U8(ctx.r1.u32 + 163, ctx.r25.u8);
	// li r25,22
	ctx.r25.s64 = 22;
	// stb r28,190(r1)
	REX_STORE_U8(ctx.r1.u32 + 190, ctx.r28.u8);
	// li r28,25
	ctx.r28.s64 = 25;
	// stb r11,161(r1)
	REX_STORE_U8(ctx.r1.u32 + 161, ctx.r11.u8);
	// li r11,19
	ctx.r11.s64 = 19;
	// stb r25,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// lis r14,-30678
	ctx.r14.s64 = -2010513408;
	// stb r31,138(r1)
	REX_STORE_U8(ctx.r1.u32 + 138, ctx.r31.u8);
	// addi r23,r23,16
	ctx.r23.s64 = ctx.r23.s64 + 16;
	// stb r4,140(r1)
	REX_STORE_U8(ctx.r1.u32 + 140, ctx.r4.u8);
	// li r19,23
	ctx.r19.s64 = 23;
	// stb r5,142(r1)
	REX_STORE_U8(ctx.r1.u32 + 142, ctx.r5.u8);
	// li r24,30
	ctx.r24.s64 = 30;
	// stb r26,164(r1)
	REX_STORE_U8(ctx.r1.u32 + 164, ctx.r26.u8);
	// li r25,31
	ctx.r25.s64 = 31;
	// stb r28,141(r1)
	REX_STORE_U8(ctx.r1.u32 + 141, ctx.r28.u8);
	// stb r20,143(r1)
	REX_STORE_U8(ctx.r1.u32 + 143, ctx.r20.u8);
	// stb r21,165(r1)
	REX_STORE_U8(ctx.r1.u32 + 165, ctx.r21.u8);
	// stb r27,166(r1)
	REX_STORE_U8(ctx.r1.u32 + 166, ctx.r27.u8);
	// stb r22,167(r1)
	REX_STORE_U8(ctx.r1.u32 + 167, ctx.r22.u8);
	// stb r15,168(r1)
	REX_STORE_U8(ctx.r1.u32 + 168, ctx.r15.u8);
	// stb r11,169(r1)
	REX_STORE_U8(ctx.r1.u32 + 169, ctx.r11.u8);
	// lbz r15,80(r1)
	ctx.r15.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r10,228(r1)
	REX_STORE_U8(ctx.r1.u32 + 228, ctx.r10.u8);
	// stb r10,236(r1)
	REX_STORE_U8(ctx.r1.u32 + 236, ctx.r10.u8);
	// addi r10,r23,16
	ctx.r10.s64 = ctx.r23.s64 + 16;
	// stw r23,25764(r14)
	REX_STORE_U32(ctx.r14.u32 + 25764, ctx.r23.u32);
	// lis r23,-30678
	ctx.r23.s64 = -2010513408;
	// stb r19,171(r1)
	REX_STORE_U8(ctx.r1.u32 + 171, ctx.r19.u8);
	// lis r19,-30678
	ctx.r19.s64 = -2010513408;
	// stb r9,224(r1)
	REX_STORE_U8(ctx.r1.u32 + 224, ctx.r9.u8);
	// stb r9,232(r1)
	REX_STORE_U8(ctx.r1.u32 + 232, ctx.r9.u8);
	// stb r9,144(r1)
	REX_STORE_U8(ctx.r1.u32 + 144, ctx.r9.u8);
	// stb r9,145(r1)
	REX_STORE_U8(ctx.r1.u32 + 145, ctx.r9.u8);
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// stb r15,170(r1)
	REX_STORE_U8(ctx.r1.u32 + 170, ctx.r15.u8);
	// li r15,26
	ctx.r15.s64 = 26;
	// stw r14,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r14.u32);
	// li r14,27
	ctx.r14.s64 = 27;
	// stw r16,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r16.u32);
	// li r16,26
	ctx.r16.s64 = 26;
	// stw r17,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r17.u32);
	// li r17,27
	ctx.r17.s64 = 27;
	// stb r4,200(r1)
	REX_STORE_U8(ctx.r1.u32 + 200, ctx.r4.u8);
	// stb r5,204(r1)
	REX_STORE_U8(ctx.r1.u32 + 204, ctx.r5.u8);
	// stb r4,230(r1)
	REX_STORE_U8(ctx.r1.u32 + 230, ctx.r4.u8);
	// stb r5,231(r1)
	REX_STORE_U8(ctx.r1.u32 + 231, ctx.r5.u8);
	// stb r4,238(r1)
	REX_STORE_U8(ctx.r1.u32 + 238, ctx.r4.u8);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// stb r5,239(r1)
	REX_STORE_U8(ctx.r1.u32 + 239, ctx.r5.u8);
	// li r5,16
	ctx.r5.s64 = 16;
	// stb r15,172(r1)
	REX_STORE_U8(ctx.r1.u32 + 172, ctx.r15.u8);
	// stb r14,173(r1)
	REX_STORE_U8(ctx.r1.u32 + 173, ctx.r14.u8);
	// stb r24,174(r1)
	REX_STORE_U8(ctx.r1.u32 + 174, ctx.r24.u8);
	// stb r25,175(r1)
	REX_STORE_U8(ctx.r1.u32 + 175, ctx.r25.u8);
	// stb r7,192(r1)
	REX_STORE_U8(ctx.r1.u32 + 192, ctx.r7.u8);
	// stb r29,193(r1)
	REX_STORE_U8(ctx.r1.u32 + 193, ctx.r29.u8);
	// stb r26,194(r1)
	REX_STORE_U8(ctx.r1.u32 + 194, ctx.r26.u8);
	// stb r21,195(r1)
	REX_STORE_U8(ctx.r1.u32 + 195, ctx.r21.u8);
	// stb r8,196(r1)
	REX_STORE_U8(ctx.r1.u32 + 196, ctx.r8.u8);
	// stb r30,197(r1)
	REX_STORE_U8(ctx.r1.u32 + 197, ctx.r30.u8);
	// stb r27,198(r1)
	REX_STORE_U8(ctx.r1.u32 + 198, ctx.r27.u8);
	// stb r22,199(r1)
	REX_STORE_U8(ctx.r1.u32 + 199, ctx.r22.u8);
	// stb r28,201(r1)
	REX_STORE_U8(ctx.r1.u32 + 201, ctx.r28.u8);
	// stb r16,202(r1)
	REX_STORE_U8(ctx.r1.u32 + 202, ctx.r16.u8);
	// stb r17,203(r1)
	REX_STORE_U8(ctx.r1.u32 + 203, ctx.r17.u8);
	// stb r20,205(r1)
	REX_STORE_U8(ctx.r1.u32 + 205, ctx.r20.u8);
	// stb r24,206(r1)
	REX_STORE_U8(ctx.r1.u32 + 206, ctx.r24.u8);
	// stb r25,207(r1)
	REX_STORE_U8(ctx.r1.u32 + 207, ctx.r25.u8);
	// stb r6,225(r1)
	REX_STORE_U8(ctx.r1.u32 + 225, ctx.r6.u8);
	// stb r7,226(r1)
	REX_STORE_U8(ctx.r1.u32 + 226, ctx.r7.u8);
	// stb r8,227(r1)
	REX_STORE_U8(ctx.r1.u32 + 227, ctx.r8.u8);
	// stb r31,229(r1)
	REX_STORE_U8(ctx.r1.u32 + 229, ctx.r31.u8);
	// stb r6,233(r1)
	REX_STORE_U8(ctx.r1.u32 + 233, ctx.r6.u8);
	// stb r7,234(r1)
	REX_STORE_U8(ctx.r1.u32 + 234, ctx.r7.u8);
	// stb r8,235(r1)
	REX_STORE_U8(ctx.r1.u32 + 235, ctx.r8.u8);
	// stb r31,237(r1)
	REX_STORE_U8(ctx.r1.u32 + 237, ctx.r31.u8);
	// stb r11,146(r1)
	REX_STORE_U8(ctx.r1.u32 + 146, ctx.r11.u8);
	// stb r11,147(r1)
	REX_STORE_U8(ctx.r1.u32 + 147, ctx.r11.u8);
	// stb r11,148(r1)
	REX_STORE_U8(ctx.r1.u32 + 148, ctx.r11.u8);
	// stb r11,149(r1)
	REX_STORE_U8(ctx.r1.u32 + 149, ctx.r11.u8);
	// stb r11,150(r1)
	REX_STORE_U8(ctx.r1.u32 + 150, ctx.r11.u8);
	// stb r11,151(r1)
	REX_STORE_U8(ctx.r1.u32 + 151, ctx.r11.u8);
	// stb r11,152(r1)
	REX_STORE_U8(ctx.r1.u32 + 152, ctx.r11.u8);
	// stb r11,153(r1)
	REX_STORE_U8(ctx.r1.u32 + 153, ctx.r11.u8);
	// stb r11,154(r1)
	REX_STORE_U8(ctx.r1.u32 + 154, ctx.r11.u8);
	// stb r11,155(r1)
	REX_STORE_U8(ctx.r1.u32 + 155, ctx.r11.u8);
	// stb r11,156(r1)
	REX_STORE_U8(ctx.r1.u32 + 156, ctx.r11.u8);
	// stb r11,157(r1)
	REX_STORE_U8(ctx.r1.u32 + 157, ctx.r11.u8);
	// stb r11,158(r1)
	REX_STORE_U8(ctx.r1.u32 + 158, ctx.r11.u8);
	// stb r11,159(r1)
	REX_STORE_U8(ctx.r1.u32 + 159, ctx.r11.u8);
	// stw r10,25788(r19)
	REX_STORE_U32(ctx.r19.u32 + 25788, ctx.r10.u32);
	// stw r9,25780(r23)
	REX_STORE_U32(ctx.r23.u32 + 25780, ctx.r9.u32);
	// bl 0x880547a0
	ctx.lr = 0x88110C60;
	sub_880547A0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,25772(r18)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r18.u32 + 25772);
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x880547a0
	ctx.lr = 0x88110C70;
	sub_880547A0(ctx, base);
	// lwz r18,252(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,25792(r18)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r18.u32 + 25792);
	// bl 0x880547a0
	ctx.lr = 0x88110C84;
	sub_880547A0(ctx, base);
	// lwz r18,240(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,25784(r18)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r18.u32 + 25784);
	// bl 0x880547a0
	ctx.lr = 0x88110C98;
	sub_880547A0(ctx, base);
	// lwz r18,244(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,25760(r18)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r18.u32 + 25760);
	// bl 0x880547a0
	ctx.lr = 0x88110CAC;
	sub_880547A0(ctx, base);
	// lwz r18,256(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,25776(r18)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r18.u32 + 25776);
	// bl 0x880547a0
	ctx.lr = 0x88110CC0;
	sub_880547A0(ctx, base);
	// lwz r18,248(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,25764(r18)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r18.u32 + 25764);
	// bl 0x880547a0
	ctx.lr = 0x88110CD4;
	sub_880547A0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r3,25788(r19)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r19.u32 + 25788);
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x880547a0
	ctx.lr = 0x88110CE4;
	sub_880547A0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,25780(r23)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 25780);
	// bl 0x880547a0
	ctx.lr = 0x88110CF4;
	sub_880547A0(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811A338) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x8811A340;
	__savegprlr_23(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,28(r3)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r23,r4,-24
	ctx.r23.s64 = ctx.r4.s64 + -24;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// lwz r3,0(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// stw r23,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// stw r30,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// sth r30,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, ctx.r30.u16);
	// stw r30,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// sth r30,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r30.u16);
	// stw r30,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stb r30,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8811A398;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// cmplwi cr6,r23,54
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 54, ctx.xer);
	// blt cr6,0x8811a834
	if (ctx.cr6.lt) goto loc_8811A834;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881196f8
	ctx.lr = 0x8811A3C0;
	sub_881196F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881196f8
	ctx.lr = 0x8811A3E0;
	sub_881196F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88119528
	ctx.lr = 0x8811A400;
	sub_88119528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88119390
	ctx.lr = 0x8811A420;
	sub_88119390(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88119390
	ctx.lr = 0x8811A440;
	sub_88119390(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88119210
	ctx.lr = 0x8811A460;
	sub_88119210(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88119390
	ctx.lr = 0x8811A480;
	sub_88119390(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lhz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lwz r3,148(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 148);
	// li r24,54
	ctx.r24.s64 = 54;
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// clrlwi r31,r11,25
	ctx.r31.u64 = ctx.r11.u32 & 0x7F;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subfe r28,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r28.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x880cb730
	ctx.lr = 0x8811A4B0;
	sub_880CB730(ctx, base);
	// lis r8,-32688
	ctx.r8.s64 = -2142240768;
	// ori r7,r8,22
	ctx.r7.u64 = ctx.r8.u64 | 22;
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8811a4d8
	if (!ctx.cr6.eq) goto loc_8811A4D8;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lwz r3,148(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 148);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x880cb648
	ctx.lr = 0x8811A4D0;
	sub_880CB648(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
loc_8811A4D8:
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// ld r26,128(r1)
	ctx.r26.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r11,r11,14024
	ctx.r11.s64 = ctx.r11.s64 + 14024;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// lwz r7,108(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// std r26,56(r7)
	REX_STORE_U64(ctx.r7.u32 + 56, ctx.r26.u64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r28,64(r6)
	REX_STORE_U32(ctx.r6.u32 + 64, ctx.r28.u32);
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r29,68(r5)
	REX_STORE_U32(ctx.r5.u32 + 68, ctx.r29.u32);
loc_8811A510:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8811a530
	if (!ctx.cr0.eq) goto loc_8811A530;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8811a510
	if (!ctx.cr6.eq) goto loc_8811A510;
loc_8811A530:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8811a844
	if (!ctx.cr6.eq) goto loc_8811A844;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x880cb648
	ctx.lr = 0x8811A54C;
	sub_880CB648(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 224);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// bl 0x880cb2c0
	ctx.lr = 0x8811A56C;
	sub_880CB2C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
loc_8811A58C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8811a58c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8811A58C;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r30,112(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lhz r9,38(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 38);
	// sth r9,44(r10)
	REX_STORE_U16(ctx.r10.u32 + 44, ctx.r9.u16);
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r29,48(r8)
	REX_STORE_U32(ctx.r8.u32 + 48, ctx.r29.u32);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// lhz r10,38(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 38);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// sth r6,38(r11)
	REX_STORE_U16(ctx.r11.u32 + 38, ctx.r6.u16);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// lhz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 36);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,36(r11)
	REX_STORE_U16(ctx.r11.u32 + 36, ctx.r10.u16);
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r29,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r29.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// std r26,16(r6)
	REX_STORE_U64(ctx.r6.u32 + 16, ctx.r26.u64);
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r28,24(r5)
	REX_STORE_U32(ctx.r5.u32 + 24, ctx.r28.u32);
	// beq cr6,0x8811a7b8
	if (ctx.cr6.eq) goto loc_8811A7B8;
	// addi r11,r30,54
	ctx.r11.s64 = ctx.r30.s64 + 54;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bgt cr6,0x8811a834
	if (ctx.cr6.gt) goto loc_8811A834;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88119210
	ctx.lr = 0x8811A61C;
	sub_88119210(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// sth r10,0(r9)
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r10.u16);
	// bl 0x88119210
	ctx.lr = 0x8811A64C;
	sub_88119210(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// sth r10,2(r9)
	REX_STORE_U16(ctx.r9.u32 + 2, ctx.r10.u16);
	// bl 0x88119390
	ctx.lr = 0x8811A67C;
	sub_88119390(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// bl 0x88119390
	ctx.lr = 0x8811A6AC;
	sub_88119390(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// bl 0x88119210
	ctx.lr = 0x8811A6DC;
	sub_88119210(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// sth r10,12(r9)
	REX_STORE_U16(ctx.r9.u32 + 12, ctx.r10.u16);
	// bl 0x88119210
	ctx.lr = 0x8811A70C;
	sub_88119210(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// sth r10,14(r9)
	REX_STORE_U16(ctx.r9.u32 + 14, ctx.r10.u16);
	// bl 0x88119210
	ctx.lr = 0x8811A73C;
	sub_88119210(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addis r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 65536;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r10,r10,-18
	ctx.r10.s64 = ctx.r10.s64 + -18;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// sth r10,16(r8)
	REX_STORE_U16(ctx.r8.u32 + 16, ctx.r10.u16);
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,224(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 224);
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// addi r6,r11,20
	ctx.r6.s64 = ctx.r11.s64 + 20;
	// lhz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// bl 0x880cb2c0
	ctx.lr = 0x8811A774;
	sub_880CB2C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// addi r31,r5,72
	ctx.r31.s64 = ctx.r5.s64 + 72;
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, ctx.xer);
	// bgt cr6,0x8811a834
	if (ctx.cr6.gt) goto loc_8811A834;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881198a8
	ctx.lr = 0x8811A7AC;
	sub_881198A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
loc_8811A7B8:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8811acb4
	if (ctx.cr6.eq) goto loc_8811ACB4;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,14008
	ctx.r11.s64 = ctx.r11.s64 + 14008;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_8811A7D4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8811a7f4
	if (!ctx.cr0.eq) goto loc_8811A7F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8811a7d4
	if (!ctx.cr6.eq) goto loc_8811A7D4;
loc_8811A7F4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8811acb4
	if (ctx.cr6.eq) goto loc_8811ACB4;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,13992
	ctx.r11.s64 = ctx.r11.s64 + 13992;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_8811A80C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8811a82c
	if (!ctx.cr0.eq) goto loc_8811A82C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8811a80c
	if (!ctx.cr6.eq) goto loc_8811A80C;
loc_8811A82C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8811acb4
	if (ctx.cr6.eq) goto loc_8811ACB4;
loc_8811A834:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_8811A844:
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,6708
	ctx.r11.s64 = ctx.r11.s64 + 6708;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_8811A854:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8811a874
	if (!ctx.cr0.eq) goto loc_8811A874;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8811a854
	if (!ctx.cr6.eq) goto loc_8811A854;
loc_8811A874:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8811ac68
	if (!ctx.cr6.eq) goto loc_8811AC68;
	// lwz r30,112(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8811a834
	if (ctx.cr6.eq) goto loc_8811A834;
	// cmplwi cr6,r30,51
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 51, ctx.xer);
	// blt cr6,0x8811a834
	if (ctx.cr6.lt) goto loc_8811A834;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x880cb648
	ctx.lr = 0x8811A8A4;
	sub_880CB648(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 224);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// bl 0x880cb2c0
	ctx.lr = 0x8811A8C4;
	sub_880CB2C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x88052d90
	ctx.lr = 0x8811A8E0;
	sub_88052D90(ctx, base);
	// lwz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lhz r11,40(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 40);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// sth r11,44(r8)
	REX_STORE_U16(ctx.r8.u32 + 44, ctx.r11.u16);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r9,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// lhz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 40);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// lhz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 36);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sth r8,36(r11)
	REX_STORE_U16(ctx.r11.u32 + 36, ctx.r8.u16);
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// std r26,16(r8)
	REX_STORE_U64(ctx.r8.u32 + 16, ctx.r26.u64);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// bl 0x88119390
	ctx.lr = 0x8811A94C;
	sub_88119390(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// bl 0x88119390
	ctx.lr = 0x8811A97C;
	sub_88119390(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// bl 0x88119100
	ctx.lr = 0x8811A9AC;
	sub_88119100(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8811a834
	if (!ctx.cr6.eq) goto loc_8811A834;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88119210
	ctx.lr = 0x8811A9D8;
	sub_88119210(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88119390
	ctx.lr = 0x8811A9F8;
	sub_88119390(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88119390
	ctx.lr = 0x8811AA18;
	sub_88119390(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// bl 0x88119390
	ctx.lr = 0x8811AA48;
	sub_88119390(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// bl 0x88119210
	ctx.lr = 0x8811AA78;
	sub_88119210(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// sth r10,16(r9)
	REX_STORE_U16(ctx.r9.u32 + 16, ctx.r10.u16);
	// bl 0x88119210
	ctx.lr = 0x8811AAA8;
	sub_88119210(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// sth r10,18(r9)
	REX_STORE_U16(ctx.r9.u32 + 18, ctx.r10.u16);
	// bl 0x88119390
	ctx.lr = 0x8811AAD8;
	sub_88119390(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,20
	ctx.r10.s64 = 20;
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stwbrx r9,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, __builtin_bswap32(ctx.r9.u32));
	// bl 0x88119390
	ctx.lr = 0x8811AB0C;
	sub_88119390(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
	// bl 0x88119390
	ctx.lr = 0x8811AB3C;
	sub_88119390(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r10.u32);
	// bl 0x88119390
	ctx.lr = 0x8811AB6C;
	sub_88119390(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,32(r9)
	REX_STORE_U32(ctx.r9.u32 + 32, ctx.r10.u32);
	// bl 0x88119390
	ctx.lr = 0x8811AB9C;
	sub_88119390(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r10.u32);
	// bl 0x88119390
	ctx.lr = 0x8811ABCC;
	sub_88119390(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r24,105
	ctx.r24.s64 = 105;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r30,51
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 51, ctx.xer);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,40(r9)
	REX_STORE_U32(ctx.r9.u32 + 40, ctx.r10.u32);
	// ble cr6,0x8811acb4
	if (!ctx.cr6.gt) goto loc_8811ACB4;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addis r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 65536;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r10,r10,-51
	ctx.r10.s64 = ctx.r10.s64 + -51;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// sth r10,48(r8)
	REX_STORE_U16(ctx.r8.u32 + 48, ctx.r10.u16);
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,224(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 224);
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// addi r6,r11,52
	ctx.r6.s64 = ctx.r11.s64 + 52;
	// lhz r5,48(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 48);
	// bl 0x880cb2c0
	ctx.lr = 0x8811AC20;
	sub_880CB2C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r5,48(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 48);
	// addi r31,r5,105
	ctx.r31.s64 = ctx.r5.s64 + 105;
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, ctx.xer);
	// bgt cr6,0x8811a834
	if (ctx.cr6.gt) goto loc_8811A834;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r4,52(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881198a8
	ctx.lr = 0x8811AC58;
	sub_881198A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// b 0x8811acb4
	goto loc_8811ACB4;
loc_8811AC68:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x880cb648
	ctx.lr = 0x8811AC7C;
	sub_880CB648(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// lhz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 36);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,36(r11)
	REX_STORE_U16(ctx.r11.u32 + 36, ctx.r9.u16);
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// std r26,16(r7)
	REX_STORE_U64(ctx.r7.u32 + 16, ctx.r26.u64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r30,48(r6)
	REX_STORE_U32(ctx.r6.u32 + 48, ctx.r30.u32);
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r30,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r30.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stb r31,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r31.u8);
loc_8811ACB4:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// lhz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 44);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,44(r11)
	REX_STORE_U16(ctx.r11.u32 + 44, ctx.r9.u16);
	// lwz r7,92(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// subf r6,r7,r23
	ctx.r6.u64 = ctx.r23.u64 - ctx.r7.u64;
	// subf. r31,r24,r6
	ctx.r31.u64 = ctx.r6.u64 - ctx.r24.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8811ad04
	if (ctx.cr0.eq) goto loc_8811AD04;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8811ACEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// ld r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r25.u32 + 8);
	// clrldi r11,r31,32
	ctx.r11.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,8(r25)
	REX_STORE_U64(ctx.r25.u32 + 8, ctx.r11.u64);
loc_8811AD04:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8812DCA8) {
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
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-11896
	ctx.r30.s64 = ctx.r11.s64 + -11896;
	// lwz r11,160(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8812dcd8
	if (!ctx.cr6.eq) goto loc_8812DCD8;
	// bl 0x8812dbe0
	ctx.lr = 0x8812DCD8;
	sub_8812DBE0(ctx, base);
loc_8812DCD8:
	// cmpwi cr6,r31,20
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 20, ctx.xer);
	// blt cr6,0x8812dd44
	if (ctx.cr6.lt) goto loc_8812DD44;
	// cmpwi cr6,r31,320
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 320, ctx.xer);
	// bge cr6,0x8812dd44
	if (!ctx.cr6.lt) goto loc_8812DD44;
	// lis r11,26214
	ctx.r11.s64 = 1717960704;
	// li r10,20
	ctx.r10.s64 = 20;
	// ori r9,r11,26215
	ctx.r9.u64 = ctx.r11.u64 | 26215;
	// divw r10,r31,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(ctx.r31.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r31.s32 / ctx.r10.s32 : 0);
	// mulhw r8,r31,r9
	ctx.r8.s64 = (int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r11,r6,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8812dd24
	if (!ctx.cr0.lt) goto loc_8812DD24;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_8812DD24:
	// addi r9,r30,80
	ctx.r9.s64 = ctx.r30.s64 + 80;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// lfsx f0,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r7,r6
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x8812dd74
	goto loc_8812DD74;
loc_8812DD44:
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,12504(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12504);
	ctx.f0.f64 = double(temp.f32);
	// lfd f1,12096(r10)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + 12096);
	// fmuls f2,f12,f0
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x881ef940
	ctx.lr = 0x8812DD70;
	sub_881EF940(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
loc_8812DD74:
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

DEFINE_REX_FUNC(sub_881342C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,6
	ctx.r9.s64 = 6;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,-8
	ctx.r10.s64 = ctx.r3.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881342D8:
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x881342d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881342D8;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881347D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x881347E0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// beq cr6,0x881349ec
	if (ctx.cr6.eq) goto loc_881349EC;
	// li r3,4100
	ctx.r3.s64 = 4100;
	// bl 0x88125e60
	ctx.lr = 0x88134814;
	sub_88125E60(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8813482c
	if (!ctx.cr6.eq) goto loc_8813482C;
loc_88134820:
	// lis r25,-32761
	ctx.r25.s64 = -2147024896;
	// ori r25,r25,14
	ctx.r25.u64 = ctx.r25.u64 | 14;
	// b 0x881349ec
	goto loc_881349EC;
loc_8813482C:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// addi r29,r26,-4
	ctx.r29.s64 = ctx.r26.s64 + -4;
	// lis r27,128
	ctx.r27.s64 = 8388608;
	// addi r28,r11,28212
	ctx.r28.s64 = ctx.r11.s64 + 28212;
loc_88134844:
	// rlwinm r4,r31,13,0,18
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 13) & 0xFFFFE000;
	// cmpw cr6,r4,r27
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x88134858
	if (!ctx.cr6.eq) goto loc_88134858;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// b 0x88134864
	goto loc_88134864;
loc_88134858:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881340b8
	ctx.lr = 0x88134860;
	sub_881340B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_88134864:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88134628
	ctx.lr = 0x8813486C;
	sub_88134628(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// cmpwi cr6,r31,1024
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1024, ctx.xer);
	// ble cr6,0x88134844
	if (!ctx.cr6.gt) goto loc_88134844;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// lis r10,320
	ctx.r10.s64 = 20971520;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88134894
	if (ctx.cr6.lt) goto loc_88134894;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_88134894:
	// li r3,4100
	ctx.r3.s64 = 4100;
	// bl 0x88125e60
	ctx.lr = 0x8813489C;
	sub_88125E60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88134820
	if (ctx.cr6.eq) goto loc_88134820;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_881348BC:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// subf. r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt 0x881348d0
	if (ctx.cr0.gt) goto loc_881348D0;
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_881348D0:
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x881348dc
	if (!ctx.cr6.gt) goto loc_881348DC;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
loc_881348DC:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x881348bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881348BC;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bgt cr6,0x881348f0
	if (ctx.cr6.gt) goto loc_881348F0;
	// li r7,2
	ctx.r7.s64 = 2;
loc_881348F0:
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x88134910
	if (!ctx.cr6.gt) goto loc_88134910;
loc_88134900:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x88134900
	if (ctx.cr6.gt) goto loc_88134900;
loc_88134910:
	// lwz r10,296(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 296);
	// rlwinm r9,r22,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r8,r11,29
	ctx.xer.ca = ctx.r11.u32 <= 29;
	ctx.r8.u64 = static_cast<uint64_t>(29) - ctx.r11.u64;
	// stwx r8,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r7,296(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 296);
	// lwzx r6,r9,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8813493c
	if (!ctx.cr6.gt) goto loc_8813493C;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x88134940
	goto loc_88134940;
loc_8813493C:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
loc_88134940:
	// lwz r6,296(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 296);
	// li r8,1024
	ctx.r8.s64 = 1024;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// subf r10,r26,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r26.u64;
	// stwx r7,r9,r6
	REX_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r7.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_88134958:
	// lwz r8,296(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 296);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subf r5,r7,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r7.u64;
	// lwzx r4,r9,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// slw r3,r5,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r4.u8 & 0x3F));
	// srawi r8,r3,13
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1FFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 13;
	// stwx r8,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// lwz r6,296(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 296);
	// ble cr6,0x881349b8
	if (!ctx.cr6.gt) goto loc_881349B8;
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r7,13,0,18
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 13) & 0xFFFFE000;
	// subf r3,r7,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r7.u64;
	// lwzx r7,r9,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// sraw r7,r3,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r7.s64 = ctx.r3.s32 >> temp.u32;
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x881349e0
	if (!ctx.cr6.gt) goto loc_881349E0;
	// b 0x881349dc
	goto loc_881349DC;
loc_881349B8:
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r8,13,0,18
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0xFFFFE000;
	// subf r3,r8,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r8.u64;
	// lwzx r8,r9,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// sraw r8,r3,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r8.s64 = ctx.r3.s32 >> temp.u32;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x881349e0
	if (!ctx.cr6.lt) goto loc_881349E0;
loc_881349DC:
	// stwx r25,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r25.u32);
loc_881349E0:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x88134958
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88134958;
	// stw r25,4096(r31)
	REX_STORE_U32(ctx.r31.u32 + 4096, ctx.r25.u32);
loc_881349EC:
	// lwz r11,268(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 268);
	// rlwinm r10,r22,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stwx r26,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r26.u32);
	// lwz r9,260(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 260);
	// stwx r23,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r23.u32);
	// lwz r8,272(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 272);
	// stwx r31,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r31.u32);
	// lwz r7,264(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 264);
	// stwx r24,r7,r10
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88138E48) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,588(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 588);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-30700
	ctx.r10.s64 = -2011955200;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-29368
	ctx.r8.s64 = ctx.r10.s64 + -29368;
	// stw r9,516(r3)
	REX_STORE_U32(ctx.r3.u32 + 516, ctx.r9.u32);
	// stw r8,484(r11)
	REX_STORE_U32(ctx.r11.u32 + 484, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881392F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805081c
	ctx.lr = 0x881392F8;
	__savegprlr_17(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// li r17,0
	ctx.r17.s64 = 0;
	// lwz r30,24(r4)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r24,0(r3)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// lwz r28,260(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// addi r31,r3,224
	ctx.r31.s64 = ctx.r3.s64 + 224;
	// lwz r29,264(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 264);
	// li r26,23
	ctx.r26.s64 = 23;
	// lwz r25,256(r3)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// mr r20,r17
	ctx.r20.u64 = ctx.r17.u64;
	// lwz r27,252(r3)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// lwz r23,272(r3)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 272);
	// lwz r22,268(r3)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// bgt cr6,0x881399f4
	if (ctx.cr6.gt) goto loc_881399F4;
	// li r18,1
	ctx.r18.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881393b8
	if (ctx.cr6.eq) goto loc_881393B8;
	// bdz 0x881399f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_881399F4;
	// bdz 0x881399f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_881399F4;
	// bdz 0x881399f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_881399F4;
	// bdz 0x88139368
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_88139368;
	// bdz 0x88139734
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_88139734;
	// b 0x8813991c
	goto loc_8813991C;
loc_88139368:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8812c528
	ctx.lr = 0x88139378;
	sub_8812C528(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881399f4
	if (ctx.cr6.lt) goto loc_881399F4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x881363c0
	ctx.lr = 0x88139398;
	sub_881363C0(ctx, base);
	// stw r17,56(r21)
	REX_STORE_U32(ctx.r21.u32 + 56, ctx.r17.u32);
	// li r26,23
	ctx.r26.s64 = 23;
	// lwz r28,36(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r29,40(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r25,32(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r27,28(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r23,48(r31)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r22,44(r31)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
loc_881393B8:
	// cmplwi cr6,r29,23
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 23, ctx.xer);
	// bge cr6,0x881394dc
	if (!ctx.cr6.lt) goto loc_881394DC;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x881393f8
	if (ctx.cr6.eq) goto loc_881393F8;
	// subfic r11,r29,32
	ctx.xer.ca = ctx.r29.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r29.u64;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x881393d8
	if (ctx.cr6.lt) goto loc_881393D8;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881393D8:
	// subf r23,r11,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r11.u64;
	// slw r9,r28,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
	// slw r10,r18,r23
	ctx.r10.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r23.u8 & 0x3F));
	// srw r8,r22,r23
	ctx.r8.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r22.u32 >> (ctx.r23.u8 & 0x3F));
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// or r28,r9,r8
	ctx.r28.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r22,r7,r22
	ctx.r22.u64 = ctx.r7.u64 & ctx.r22.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_881393F8:
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// addi r9,r11,5216
	ctx.r9.s64 = ctx.r11.s64 + 5216;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x88139440
	if (!ctx.cr6.eq) goto loc_88139440;
	// cmplwi cr6,r29,24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 24, ctx.xer);
	// bgt cr6,0x8813947c
	if (ctx.cr6.gt) goto loc_8813947C;
loc_88139414:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8813947c
	if (ctx.cr6.eq) goto loc_8813947C;
	// lbz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + 0);
	// rlwinm r10,r28,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFFFF00;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// or r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// cmplwi cr6,r29,24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 24, ctx.xer);
	// ble cr6,0x88139414
	if (!ctx.cr6.gt) goto loc_88139414;
	// b 0x8813947c
	goto loc_8813947C;
loc_88139440:
	// cmplwi cr6,r29,24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 24, ctx.xer);
	// bgt cr6,0x8813947c
	if (ctx.cr6.gt) goto loc_8813947C;
loc_88139448:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8813947c
	if (ctx.cr6.eq) goto loc_8813947C;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// lbz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r27.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88139460;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// rlwimi r3,r28,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// cmplwi cr6,r29,24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 24, ctx.xer);
	// ble cr6,0x88139448
	if (!ctx.cr6.gt) goto loc_88139448;
loc_8813947C:
	// cmplwi cr6,r29,23
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 23, ctx.xer);
	// bge cr6,0x881394dc
	if (!ctx.cr6.lt) goto loc_881394DC;
	// stw r28,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// li r5,23
	ctx.r5.s64 = 23;
	// stw r29,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r25,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r25.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// stw r23,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r23.u32);
	// stw r22,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r22.u32);
	// bl 0x8812c398
	ctx.lr = 0x881394AC;
	sub_8812C398(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881399f4
	if (ctx.cr6.lt) goto loc_881399F4;
	// lwz r29,40(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r28,36(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r25,32(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r29,23
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 23, ctx.xer);
	// lwz r27,28(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r23,48(r31)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r22,44(r31)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bge cr6,0x881394dc
	if (!ctx.cr6.lt) goto loc_881394DC;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_881394DC:
	// subf r11,r26,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r26.u64;
	// subfic r10,r26,32
	ctx.xer.ca = ctx.r26.u32 <= 32;
	ctx.r10.u64 = static_cast<uint64_t>(32) - ctx.r26.u64;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// srw r7,r28,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r8.u8 & 0x3F));
	// slw r8,r7,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r6,r8,3,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x6;
	// lhzux r11,r30,r6
	ea = ctx.r30.u32 + ctx.r6.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// rlwinm r5,r11,0,0,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x881396a8
	if (!ctx.cr6.eq) goto loc_881396A8;
	// rlwinm r9,r8,4,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0x3;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ea = ctx.r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x881396a8
	if (!ctx.cr6.eq) goto loc_881396A8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ea = ctx.r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x881396a8
	if (!ctx.cr6.eq) goto loc_881396A8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ea = ctx.r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x881396a8
	if (!ctx.cr6.eq) goto loc_881396A8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ea = ctx.r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x881396a8
	if (!ctx.cr6.eq) goto loc_881396A8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ea = ctx.r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x881396a8
	if (!ctx.cr6.eq) goto loc_881396A8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ea = ctx.r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x881396a8
	if (!ctx.cr6.eq) goto loc_881396A8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ea = ctx.r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x881396a8
	if (!ctx.cr6.eq) goto loc_881396A8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ea = ctx.r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x881396a8
	if (!ctx.cr6.eq) goto loc_881396A8;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ea = ctx.r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x881396a8
	if (!ctx.cr6.eq) goto loc_881396A8;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ea = ctx.r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x881396a8
	if (!ctx.cr6.eq) goto loc_881396A8;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ea = ctx.r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x881396a8
	if (!ctx.cr6.eq) goto loc_881396A8;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ea = ctx.r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x881396a8
	if (!ctx.cr6.eq) goto loc_881396A8;
	// rlwinm r10,r10,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r10
	ea = ctx.r30.u32 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// rlwinm r9,r11,0,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x881396a8
	if (!ctx.cr6.eq) goto loc_881396A8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
loc_881396A8:
	// rlwinm r4,r11,22,27,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1F;
	// clrlwi r26,r11,22
	ctx.r26.u64 = ctx.r11.u32 & 0x3FF;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// cmplwi cr6,r26,1020
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1020, ctx.xer);
	// blt cr6,0x881396cc
	if (ctx.cr6.lt) goto loc_881396CC;
	// clrlwi r11,r26,30
	ctx.r11.u64 = ctx.r26.u32 & 0x3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r26,r10,r30
	ctx.r26.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r30.u32);
loc_881396CC:
	// slw r30,r8,r4
	ctx.r30.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r4.u8 & 0x3F));
	// stw r28,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// stw r29,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// cmplw cr6,r29,r4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, ctx.xer);
	// stw r25,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r25.u32);
	// stw r27,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// stw r23,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r23.u32);
	// stw r22,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r22.u32);
	// bge cr6,0x8813970c
	if (!ctx.cr6.lt) goto loc_8813970C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8812c818
	ctx.lr = 0x881396F8;
	sub_8812C818(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881399f4
	if (ctx.cr6.lt) goto loc_881399F4;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// b 0x88139710
	goto loc_88139710;
loc_8813970C:
	// subf r11,r4,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r4.u64;
loc_88139710:
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x88139774
	if (!ctx.cr6.eq) goto loc_88139774;
	// lwz r11,60(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,56(r21)
	REX_STORE_U32(ctx.r21.u32 + 56, ctx.r11.u32);
	// ble cr6,0x88139734
	if (!ctx.cr6.gt) goto loc_88139734;
	// stw r17,24(r24)
	REX_STORE_U32(ctx.r24.u32 + 24, ctx.r17.u32);
loc_88139734:
	// lwz r11,60(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x88139810
	if (ctx.cr6.gt) goto loc_88139810;
	// lwz r11,52(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 52);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8812c528
	ctx.lr = 0x88139754;
	sub_8812C528(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881399f4
	if (ctx.cr6.lt) goto loc_881399F4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,20(r24)
	REX_STORE_U32(ctx.r24.u32 + 20, ctx.r11.u32);
	// stw r10,56(r21)
	REX_STORE_U32(ctx.r21.u32 + 56, ctx.r10.u32);
	// b 0x8813991c
	goto loc_8813991C;
loc_88139774:
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// bne cr6,0x881397a8
	if (!ctx.cr6.eq) goto loc_881397A8;
	// stw r17,20(r24)
	REX_STORE_U32(ctx.r24.u32 + 20, ctx.r17.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lhz r11,202(r24)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r24.u32 + 202);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// lwz r9,36(r19)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r19.u32 + 36);
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// stw r6,16(r24)
	REX_STORE_U32(ctx.r24.u32 + 16, ctx.r6.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
loc_881397A8:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881397d0
	if (!ctx.cr6.lt) goto loc_881397D0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8812c818
	ctx.lr = 0x881397BC;
	sub_8812C818(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881399f4
	if (ctx.cr6.lt) goto loc_881399F4;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// b 0x881397d4
	goto loc_881397D4;
loc_881397D0:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_881397D4:
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r10,r26,-2
	ctx.r10.s64 = ctx.r26.s64 + -2;
	// rlwinm r11,r30,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// lwz r9,28(r19)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r19.u32 + 28);
	// lhzx r5,r9,r8
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// stw r5,16(r24)
	REX_STORE_U32(ctx.r24.u32 + 16, ctx.r5.u32);
	// lwz r4,32(r19)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r19.u32 + 32);
	// lhzx r3,r4,r8
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r8.u32);
	// stw r7,24(r24)
	REX_STORE_U32(ctx.r24.u32 + 24, ctx.r7.u32);
	// stw r3,20(r24)
	REX_STORE_U32(ctx.r24.u32 + 20, ctx.r3.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
loc_88139810:
	// lwz r11,24(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881398cc
	if (!ctx.cr6.eq) goto loc_881398CC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// bl 0x88139018
	ctx.lr = 0x88139830;
	sub_88139018(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881399f4
	if (ctx.cr6.lt) goto loc_881399F4;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r17,20(r24)
	REX_STORE_U32(ctx.r24.u32 + 20, ctx.r17.u32);
	// stw r11,24(r24)
	REX_STORE_U32(ctx.r24.u32 + 24, ctx.r11.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x881398b4
	if (ctx.cr6.eq) goto loc_881398B4;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,24(r24)
	REX_STORE_U32(ctx.r24.u32 + 24, ctx.r11.u32);
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// stw r10,20(r24)
	REX_STORE_U32(ctx.r24.u32 + 20, ctx.r10.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r8,r9,0,1,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x881398b4
	if (ctx.cr6.eq) goto loc_881398B4;
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
loc_88139880:
	// lwz r11,24(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 24);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r9,20(r24)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// slw r10,r18,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r11.u8 & 0x3F));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,24(r24)
	REX_STORE_U32(ctx.r24.u32 + 24, ctx.r9.u32);
	// stw r10,20(r24)
	REX_STORE_U32(ctx.r24.u32 + 20, ctx.r10.u32);
	// srw r7,r8,r30
	ctx.r7.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r30.u8 & 0x3F));
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x88139880
	if (!ctx.cr6.eq) goto loc_88139880;
loc_881398B4:
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8812c818
	ctx.lr = 0x881398C0;
	sub_8812C818(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881399f4
	if (ctx.cr6.lt) goto loc_881399F4;
loc_881398CC:
	// lwz r11,24(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 24);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x8812c528
	ctx.lr = 0x881398E0;
	sub_8812C528(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881399f4
	if (ctx.cr6.lt) goto loc_881399F4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,6
	ctx.r9.s64 = 6;
	// lwz r10,20(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,20(r24)
	REX_STORE_U32(ctx.r24.u32 + 20, ctx.r8.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// stw r6,24(r24)
	REX_STORE_U32(ctx.r24.u32 + 24, ctx.r6.u32);
	// stw r9,56(r21)
	REX_STORE_U32(ctx.r21.u32 + 56, ctx.r9.u32);
loc_8813991C:
	// lwz r11,60(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x881399a8
	if (ctx.cr6.gt) goto loc_881399A8;
	// lwz r11,248(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 248);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8812c528
	ctx.lr = 0x88139940;
	sub_8812C528(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881399f4
	if (ctx.cr6.lt) goto loc_881399F4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,0(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lwz r11,248(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 248);
	// stw r8,24(r24)
	REX_STORE_U32(ctx.r24.u32 + 24, ctx.r8.u32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// subfic r5,r6,32
	ctx.xer.ca = ctx.r6.u32 <= 32;
	ctx.r5.u64 = static_cast<uint64_t>(32) - ctx.r6.u64;
	// srw r4,r10,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r5.u8 & 0x3F));
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// srawi r6,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 1;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// clrlwi r4,r5,1
	ctx.r4.u64 = ctx.r5.u32 & 0x7FFFFFFF;
	// stw r4,16(r24)
	REX_STORE_U32(ctx.r24.u32 + 16, ctx.r4.u32);
	// stw r17,56(r21)
	REX_STORE_U32(ctx.r21.u32 + 56, ctx.r17.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
loc_881399A8:
	// lhz r11,312(r21)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r21.u32 + 312);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x881382b0
	ctx.lr = 0x881399BC;
	sub_881382B0(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881399f4
	if (ctx.cr6.lt) goto loc_881399F4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// stw r9,16(r24)
	REX_STORE_U32(ctx.r24.u32 + 16, ctx.r9.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x881399f0
	if (!ctx.cr6.eq) goto loc_881399F0;
	// lhz r11,314(r21)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r21.u32 + 314);
	// lwz r10,20(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,20(r24)
	REX_STORE_U32(ctx.r24.u32 + 20, ctx.r10.u32);
loc_881399F0:
	// stw r17,56(r21)
	REX_STORE_U32(ctx.r21.u32 + 56, ctx.r17.u32);
loc_881399F4:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88148CA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// vspltish v12,-5
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0xFFFB)));
	// sth r8,-2(r1)
	REX_STORE_U16(ctx.r1.u32 + -2, ctx.r8.u16);
	// subf r9,r4,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r4.u64;
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// vspltisb v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_set1_epi8(char(0x0)));
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v5,1
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x1)));
	// vsrh v12,v12,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_srlv_epi16(a, shift));
	}
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lvx128 v11,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v9,v11,7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_set1_epi16(short(0x100))));
	// vspltish v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x2)));
	// vadduhm v2,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vspltish v10,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x4)));
	// li r10,16
	ctx.r10.s64 = 16;
	// vspltish v4,5
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_set1_epi16(short(0x5)));
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vspltish v3,6
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_set1_epi16(short(0x6)));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v1,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bne cr6,0x88148dbc
	if (!ctx.cr6.eq) goto loc_88148DBC;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,8
	ctx.r7.s64 = 8;
	// lvx128 v59,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v63,v59,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,4
	ctx.r9.s64 = 4;
	// lvx128 v58,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v9,v61,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// vperm128 v8,v62,v58,v1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmrghb v11,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v12,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v9,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
loc_88148D38:
	// vor v8,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v12,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// lvx128 v62,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vor v11,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vperm128 v9,v63,v62,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v8,v8,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v7,v12,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v6,v12,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v9,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vsubshs v31,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vslh v30,v11,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v29,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vadduhm v28,v1,v12
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v27,v11,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v26,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v24,v27,v30
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vsubshs v23,v9,v25
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vadduhm v8,v31,v26
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vadduhm v7,v24,v23
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v22,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v21,v22,v7
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vsrah v20,v21,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v57,v20,v20
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// stvewx128 v57,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v57,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x88148d38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88148D38;
	// blr 
	return;
loc_88148DBC:
	// lvx128 v56,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lvx128 v54,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v56,v53,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v51,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v11,v54,v52,v6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v6,v55,v51,v1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmrghb v9,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v8,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v12,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v7,v13,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v11,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v6,v13,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
loc_88148DFC:
	// vor128 v48,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// lvx128 v50,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v49,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v1,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// lvsl v3,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vor v12,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor v9,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vperm128 v7,v50,v49,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vor v31,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vor v11,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vslh v8,v12,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v12,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v27,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vslh v29,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v11,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v7,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vslh v26,v11,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v23,v30,v8
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vor v8,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vor v6,v27,v27
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v27.u8));
	// vslh v25,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v1,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v31,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v22,v29,v12
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v20,v26,v28
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vadduhm v19,v25,v11
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v31,v8,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v8,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v6,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vsubshs v18,v13,v24
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vadduhm v16,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vsubshs v15,v13,v21
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vadduhm v26,v31,v14
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vslh v28,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v9,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v7,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v24,v6,v30
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vadduhm v1,v18,v17
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v29,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vadduhm v22,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vsubshs v21,v7,v25
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vadduhm v20,v26,v24
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vadduhm v23,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v19,v29,v2
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v31,v22,v21
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// vor v1,v20,v20
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v20.u8));
	// vor128 v3,v48,v48
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v48.u8));
	// vadduhm v18,v23,v31
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vadduhm v17,v19,v1
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vsrah v16,v18,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v17,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v47,v16,v15
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// stvx128 v47,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x88148dfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88148DFC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8814D358) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8814d384
	if (!ctx.cr6.eq) goto loc_8814D384;
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8814D384:
	// lwz r11,15536(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15536);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8814d3c8
	if (ctx.cr6.eq) goto loc_8814D3C8;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8814d3c8
	if (ctx.cr6.eq) goto loc_8814D3C8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8814d3b4
	if (!ctx.cr6.eq) goto loc_8814D3B4;
	// bl 0x8815ecb0
	ctx.lr = 0x8814D3A4;
	sub_8815ECB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8814D3B4:
	// bl 0x8816fa58
	ctx.lr = 0x8814D3B8;
	sub_8816FA58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8814D3C8:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x88163620
	ctx.lr = 0x8814D3DC;
	sub_88163620(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881502F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x88150300;
	__savegprlr_25(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8815032c
	if (!ctx.cr6.eq) goto loc_8815032C;
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8815032C:
	// li r11,40
	ctx.r11.s64 = 40;
	// lwz r26,736(r3)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 736);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// stw r11,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r30,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// sth r10,188(r1)
	REX_STORE_U16(ctx.r1.u32 + 188, ctx.r10.u16);
	// stw r4,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r4.u32);
	// sth r5,190(r1)
	REX_STORE_U16(ctx.r1.u32 + 190, ctx.r5.u16);
	// beq cr6,0x8815037c
	if (ctx.cr6.eq) goto loc_8815037C;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// beq cr6,0x8815037c
	if (ctx.cr6.eq) goto loc_8815037C;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// mullw r10,r11,r29
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// mullw r9,r10,r30
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// srawi r8,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// stw r7,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r7.u32);
	// b 0x881503a8
	goto loc_881503A8;
loc_8815037C:
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// srawi r10,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 31;
	// mullw r9,r11,r29
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// srawi r8,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// xor r7,r30,r10
	ctx.r7.u64 = ctx.r30.u64 ^ ctx.r10.u64;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// subf r6,r10,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r10.u64;
	// addi r5,r11,3
	ctx.r5.s64 = ctx.r11.s64 + 3;
	// rlwinm r4,r5,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFC;
	// mullw r3,r6,r4
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// stw r3,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
loc_881503A8:
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// stw r31,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// stw r31,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r31,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stw r31,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// bl 0x88166698
	ctx.lr = 0x881503CC;
	sub_88166698(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// stw r31,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addic r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// stw r27,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r28,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// subfe r11,r31,r11
	temp.u8 = (~ctx.r31.u32 + ctx.r11.u32 < ~ctx.r31.u32) | (~ctx.r31.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r31.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88189b68
	ctx.lr = 0x8815041C;
	sub_88189B68(ctx, base);
	// lhz r8,190(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 190);
	// addi r9,r1,156
	ctx.r9.s64 = ctx.r1.s64 + 156;
	// lwz r7,372(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// mullw r11,r8,r28
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// lwz r5,196(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// mullw r10,r11,r27
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// lwz r3,144(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// srawi r8,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 3;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// bl 0x881899d0
	ctx.lr = 0x8815044C;
	sub_881899D0(ctx, base);
	// lwz r3,144(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x88188518
	ctx.lr = 0x88150454;
	sub_88188518(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88151DB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x88151DB8;
	__savegprlr_20(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// stw r21,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r27,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// bne cr6,0x88151de4
	if (!ctx.cr6.eq) goto loc_88151DE4;
loc_88151DD8:
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_88151DE4:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// lis r10,6553
	ctx.r10.s64 = 429457408;
	// lis r9,6550
	ctx.r9.s64 = 429260800;
	// ori r8,r10,4643
	ctx.r8.u64 = ctx.r10.u64 | 4643;
	// ori r7,r9,276
	ctx.r7.u64 = ctx.r9.u64 | 276;
	// ld r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// rldimi r8,r7,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// cmpld cr6,r6,r8
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r8.u64, ctx.xer);
	// bne cr6,0x88151dd8
	if (!ctx.cr6.eq) goto loc_88151DD8;
	// lwz r31,736(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 736);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88151e24
	if (ctx.cr6.eq) goto loc_88151E24;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_88151E24:
	// lwz r20,3376(r31)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// lwz r11,24688(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24688);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r28,r11,8
	ctx.r28.s64 = ctx.r11.s64 + 8;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// bl 0x88185458
	ctx.lr = 0x88151E50;
	sub_88185458(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88151f7c
	if (ctx.cr6.eq) goto loc_88151F7C;
loc_88151E5C:
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x88151eb4
	if (!ctx.cr6.eq) goto loc_88151EB4;
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r29,r5,r30
	ctx.r29.u64 = ctx.r5.u64 + ctx.r30.u64;
	// cmplwi cr6,r29,256
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 256, ctx.xer);
	// bge cr6,0x88151eb8
	if (!ctx.cr6.lt) goto loc_88151EB8;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x880547a0
	ctx.lr = 0x88151E88;
	sub_880547A0(ctx, base);
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r3,3376(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// bl 0x88185458
	ctx.lr = 0x88151EA8;
	sub_88185458(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88151e5c
	if (!ctx.cr6.eq) goto loc_88151E5C;
loc_88151EB4:
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_88151EB8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x88151f50
	if (ctx.cr6.eq) goto loc_88151F50;
	// lwz r11,23968(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 23968);
	// add r29,r5,r30
	ctx.r29.u64 = ctx.r5.u64 + ctx.r30.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88151f18
	if (!ctx.cr6.gt) goto loc_88151F18;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88151ee4
	if (ctx.cr6.eq) goto loc_88151EE4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,23972(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 23972);
	// bl 0x8815e528
	ctx.lr = 0x88151EE4;
	sub_8815E528(ctx, base);
loc_88151EE4:
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,18168
	ctx.r5.s64 = ctx.r11.s64 + 18168;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8815e468
	ctx.lr = 0x88151EF8;
	sub_8815E468(ctx, base);
	// stw r3,23972(r31)
	REX_STORE_U32(ctx.r31.u32 + 23972, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88151f14
	if (!ctx.cr6.eq) goto loc_88151F14;
	// li r3,-9
	ctx.r3.s64 = -9;
	// stw r21,23968(r31)
	REX_STORE_U32(ctx.r31.u32 + 23968, ctx.r21.u32);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_88151F14:
	// stw r29,23968(r31)
	REX_STORE_U32(ctx.r31.u32 + 23968, ctx.r29.u32);
loc_88151F18:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,23972(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 23972);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x880547a0
	ctx.lr = 0x88151F28;
	sub_880547A0(ctx, base);
	// lwz r11,23972(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 23972);
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x880547a0
	ctx.lr = 0x88151F3C;
	sub_880547A0(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r5,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// lwz r10,23972(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 23972);
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
loc_88151F50:
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88151f7c
	if (ctx.cr6.eq) goto loc_88151F7C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x88151f70
	if (ctx.cr6.eq) goto loc_88151F70;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88151f7c
	if (!ctx.cr6.eq) goto loc_88151F7C;
loc_88151F70:
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_88151F7C:
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// stw r21,22096(r31)
	REX_STORE_U32(ctx.r31.u32 + 22096, ctx.r21.u32);
	// stw r21,22112(r31)
	REX_STORE_U32(ctx.r31.u32 + 22112, ctx.r21.u32);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// stw r21,22100(r31)
	REX_STORE_U32(ctx.r31.u32 + 22100, ctx.r21.u32);
	// stw r21,22104(r31)
	REX_STORE_U32(ctx.r31.u32 + 22104, ctx.r21.u32);
	// bne cr6,0x88152040
	if (!ctx.cr6.eq) goto loc_88152040;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88151fbc
	if (ctx.cr6.eq) goto loc_88151FBC;
	// stw r27,22112(r31)
	REX_STORE_U32(ctx.r31.u32 + 22112, ctx.r27.u32);
	// stw r21,14836(r31)
	REX_STORE_U32(ctx.r31.u32 + 14836, ctx.r21.u32);
	// b 0x88151fc4
	goto loc_88151FC4;
loc_88151FBC:
	// stw r21,22112(r31)
	REX_STORE_U32(ctx.r31.u32 + 22112, ctx.r21.u32);
	// stw r27,14836(r31)
	REX_STORE_U32(ctx.r31.u32 + 14836, ctx.r27.u32);
loc_88151FC4:
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// rlwinm r9,r11,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// stw r10,22096(r31)
	REX_STORE_U32(ctx.r31.u32 + 22096, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88151fe0
	if (ctx.cr6.eq) goto loc_88151FE0;
	// stw r27,22108(r31)
	REX_STORE_U32(ctx.r31.u32 + 22108, ctx.r27.u32);
	// b 0x88151fe4
	goto loc_88151FE4;
loc_88151FE0:
	// stw r21,22108(r31)
	REX_STORE_U32(ctx.r31.u32 + 22108, ctx.r21.u32);
loc_88151FE4:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addic. r5,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r5.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r5,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// bne 0x88152024
	if (!ctx.cr0.eq) goto loc_88152024;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// lwz r3,3376(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88185458
	ctx.lr = 0x88152010;
	sub_88185458(ctx, base);
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x88152044
	goto loc_88152044;
loc_88152024:
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r9,r11,-7
	ctx.r9.s64 = ctx.r11.s64 + -7;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// b 0x8815204c
	goto loc_8815204C;
loc_88152040:
	// li r7,0
	ctx.r7.s64 = 0;
loc_88152044:
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
loc_8815204C:
	// lwz r6,120(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x88156260
	ctx.lr = 0x88152058;
	sub_88156260(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8814d358
	ctx.lr = 0x88152074;
	sub_8814D358(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88152218
	if (!ctx.cr6.eq) goto loc_88152218;
	// lwz r11,15364(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15364);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88152098
	if (!ctx.cr6.eq) goto loc_88152098;
	// lwz r11,15432(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88152210
	if (ctx.cr6.eq) goto loc_88152210;
loc_88152098:
	// lwz r3,0(r22)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r29,156(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r28,160(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r24,88(r31)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r23,92(r31)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r27,20408(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 20408);
	// lwz r26,20412(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 20412);
	// lwz r25,15300(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 15300);
	// beq cr6,0x881520dc
	if (ctx.cr6.eq) goto loc_881520DC;
	// lwz r11,736(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 736);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881520dc
	if (!ctx.cr6.eq) goto loc_881520DC;
	// lwz r30,3712(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 3712);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt cr6,0x881520e0
	if (ctx.cr6.gt) goto loc_881520E0;
loc_881520DC:
	// li r30,30
	ctx.r30.s64 = 30;
loc_881520E0:
	// lwz r11,15432(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88152140
	if (ctx.cr6.eq) goto loc_88152140;
	// bl 0x88151cf8
	ctx.lr = 0x881520F0;
	sub_88151CF8(ctx, base);
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r5,22358
	ctx.r5.s64 = 1465253888;
	// lfs f2,6732(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6732);
	ctx.f2.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r21,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r21.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// ori r5,r5,20530
	ctx.r5.u64 = ctx.r5.u64 | 20530;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x88151a70
	ctx.lr = 0x8815213C;
	sub_88151A70(ctx, base);
	// b 0x88152190
	goto loc_88152190;
loc_88152140:
	// bl 0x88151cf8
	ctx.lr = 0x88152144;
	sub_88151CF8(ctx, base);
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r5,22349
	ctx.r5.s64 = 1464664064;
	// lfs f2,6732(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6732);
	ctx.f2.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r21,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r21.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// ori r5,r5,22067
	ctx.r5.u64 = ctx.r5.u64 | 22067;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x88151a70
	ctx.lr = 0x88152190;
	sub_88151A70(ctx, base);
loc_88152190:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r31,736(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 736);
	// bne cr6,0x8815221c
	if (!ctx.cr6.eq) goto loc_8815221C;
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// stw r24,15372(r31)
	REX_STORE_U32(ctx.r31.u32 + 15372, ctx.r24.u32);
	// stw r23,15376(r31)
	REX_STORE_U32(ctx.r31.u32 + 15376, ctx.r23.u32);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// lwz r6,120(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// bne cr6,0x881521e0
	if (!ctx.cr6.eq) goto loc_881521E0;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r5,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// addi r9,r11,-7
	ctx.r9.s64 = ctx.r11.s64 + -7;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// b 0x881521ec
	goto loc_881521EC;
loc_881521E0:
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
loc_881521EC:
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x88156260
	ctx.lr = 0x881521F4;
	sub_88156260(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8814d358
	ctx.lr = 0x88152204;
	sub_8814D358(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_88152210:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881505c8
	ctx.lr = 0x88152218;
	sub_881505C8(ctx, base);
loc_88152218:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8815221C:
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881600E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x881600F0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,144(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,20688(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20688);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r9,272(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 272);
	// li r24,0
	ctx.r24.s64 = 0;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r3,140(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x881aea60
	ctx.lr = 0x88160128;
	sub_881AEA60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8816025c
	if (!ctx.cr6.eq) goto loc_8816025C;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,136(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// bl 0x881aea60
	ctx.lr = 0x8816013C;
	sub_881AEA60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8816025c
	if (ctx.cr6.eq) goto loc_8816025C;
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r10,140(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 140);
	// clrlwi r25,r11,31
	ctx.r25.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8816038c
	if (!ctx.cr6.gt) goto loc_8816038C;
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// addi r27,r10,19572
	ctx.r27.s64 = ctx.r10.s64 + 19572;
loc_88160164:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88160248
	if (!ctx.cr6.lt) goto loc_88160248;
loc_88160170:
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// lwz r3,84(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// addi r5,r27,60
	ctx.r5.s64 = ctx.r27.s64 + 60;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x8815fdc8
	ctx.lr = 0x8816018C;
	sub_8815FDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88160574
	if (!ctx.cr6.eq) goto loc_88160574;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,24(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// rlwimi r9,r10,31,0,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x80000000) | (ctx.r9.u64 & 0xFFFFFFFF7FFFFFFF);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rlwimi r8,r10,31,0,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x80000000) | (ctx.r8.u64 & 0xFFFFFFFF7FFFFFFF);
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// stw r8,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// add r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r6,24(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r5,r9,31,0,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x80000000) | (ctx.r5.u64 & 0xFFFFFFFF7FFFFFFF);
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// rlwimi r6,r9,31,0,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x80000000) | (ctx.r6.u64 & 0xFFFFFFFF7FFFFFFF);
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// stw r6,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r8,24(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r3,r9,31,0,0
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x80000000) | (ctx.r3.u64 & 0xFFFFFFFF7FFFFFFF);
	// rlwimi r8,r10,31,0,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x80000000) | (ctx.r8.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// stw r8,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88160170
	if (ctx.cr6.lt) goto loc_88160170;
loc_88160248:
	// lwz r10,140(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 140);
	// addi r26,r26,3
	ctx.r26.s64 = ctx.r26.s64 + 3;
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88160164
	if (ctx.cr6.lt) goto loc_88160164;
	// b 0x8816038c
	goto loc_8816038C;
loc_8816025C:
	// lwz r11,140(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 140);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,136(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// clrlwi r24,r11,31
	ctx.r24.u64 = ctx.r11.u32 & 0x1;
	// bl 0x881aea60
	ctx.lr = 0x88160270;
	sub_881AEA60(ctx, base);
	// lwz r10,140(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 140);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// cmpw cr6,r24,r10
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8816038c
	if (!ctx.cr6.lt) goto loc_8816038C;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// addi r27,r11,19572
	ctx.r27.s64 = ctx.r11.s64 + 19572;
loc_8816028C:
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8816037c
	if (!ctx.cr6.lt) goto loc_8816037C;
loc_8816029C:
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// lwz r3,84(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// addi r5,r27,60
	ctx.r5.s64 = ctx.r27.s64 + 60;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x8815fdc8
	ctx.lr = 0x881602B8;
	sub_8815FDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88160574
	if (!ctx.cr6.eq) goto loc_88160574;
	// rlwinm r9,r29,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r29,2
	ctx.r11.s64 = ctx.r29.s64 + 2;
	// add r9,r29,r9
	ctx.r9.u64 = ctx.r29.u64 + ctx.r9.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + ctx.r31.u64;
	// rlwinm r9,r8,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r28,r28,3
	ctx.r28.s64 = ctx.r28.s64 + 3;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,24(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// rlwimi r7,r10,31,0,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x80000000) | (ctx.r7.u64 & 0xFFFFFFFF7FFFFFFF);
	// lwzx r5,r9,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// rlwimi r6,r10,31,0,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x80000000) | (ctx.r6.u64 & 0xFFFFFFFF7FFFFFFF);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// stw r6,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// rlwimi r5,r10,31,0,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x80000000) | (ctx.r5.u64 & 0xFFFFFFFF7FFFFFFF);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// stwx r5,r9,r31
	REX_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r5.u32);
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,24(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwzx r7,r9,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r6,r10,31,0,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x80000000) | (ctx.r6.u64 & 0xFFFFFFFF7FFFFFFF);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// rlwimi r8,r10,31,0,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x80000000) | (ctx.r8.u64 & 0xFFFFFFFF7FFFFFFF);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// stw r8,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// rlwimi r7,r10,31,0,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x80000000) | (ctx.r7.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stwx r7,r9,r31
	REX_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8816029c
	if (ctx.cr6.lt) goto loc_8816029C;
loc_8816037C:
	// lwz r11,140(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 140);
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8816028c
	if (ctx.cr6.lt) goto loc_8816028C;
loc_8816038C:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x88160488
	if (!ctx.cr6.gt) goto loc_88160488;
loc_88160398:
	// lwz r3,84(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
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
	// rldicl r29,r10,1,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881603c0
	if (!ctx.cr0.lt) goto loc_881603C0;
	// bl 0x88156678
	ctx.lr = 0x881603C0;
	sub_88156678(ctx, base);
loc_881603C0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x88160438
	if (ctx.cr6.eq) goto loc_88160438;
	// lwz r11,140(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 140);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8816047c
	if (!ctx.cr6.gt) goto loc_8816047C;
loc_881603D8:
	// lwz r3,84(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
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
	// rldicl r28,r10,1,63
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88160400
	if (!ctx.cr0.lt) goto loc_88160400;
	// bl 0x88156678
	ctx.lr = 0x88160400;
	sub_88156678(ctx, base);
loc_88160400:
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// mullw r11,r29,r11
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwimi r9,r28,31,0,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x80000000) | (ctx.r9.u64 & 0xFFFFFFFF7FFFFFFF);
	// stwx r9,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r8,140(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 140);
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x881603d8
	if (ctx.cr6.lt) goto loc_881603D8;
	// b 0x8816047c
	goto loc_8816047C;
loc_88160438:
	// lwz r10,140(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 140);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8816047c
	if (!ctx.cr6.gt) goto loc_8816047C;
loc_88160448:
	// lwz r10,136(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r10,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// clrlwi r7,r8,1
	ctx.r7.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// stwx r7,r10,r31
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwz r6,140(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 140);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x88160448
	if (ctx.cr6.lt) goto loc_88160448;
loc_8816047C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r27,r25
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x88160398
	if (ctx.cr6.lt) goto loc_88160398;
loc_88160488:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x88160570
	if (ctx.cr6.eq) goto loc_88160570;
	// lwz r3,84(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
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
	// rldicl r29,r10,1,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881604b8
	if (!ctx.cr0.lt) goto loc_881604B8;
	// bl 0x88156678
	ctx.lr = 0x881604B8;
	sub_88156678(ctx, base);
loc_881604B8:
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x88160534
	if (ctx.cr6.eq) goto loc_88160534;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88160570
	if (!ctx.cr6.lt) goto loc_88160570;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,-24
	ctx.r31.s64 = ctx.r11.s64 + -24;
loc_881604E4:
	// lwz r3,84(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
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
	// rldicl r29,r10,1,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8816050c
	if (!ctx.cr0.lt) goto loc_8816050C;
	// bl 0x88156678
	ctx.lr = 0x8816050C;
	sub_88156678(ctx, base);
loc_8816050C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// rlwimi r11,r29,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stwu r11,24(r31)
	ea = 24 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r31.u32 = ea;
	// lwz r10,136(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881604e4
	if (ctx.cr6.lt) goto loc_881604E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_88160534:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88160570
	if (!ctx.cr6.lt) goto loc_88160570;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
loc_88160554:
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r8,r9,1
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// stwu r8,24(r11)
	ea = 24 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// lwz r7,136(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x88160554
	if (ctx.cr6.lt) goto loc_88160554;
loc_88160570:
	// li r3,0
	ctx.r3.s64 = 0;
loc_88160574:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881732C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lvx128 v63,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// vcsxwfp128 v61,v63,11
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// li r5,192
	ctx.r5.s64 = 192;
	// li r6,144
	ctx.r6.s64 = 144;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r8,240
	ctx.r8.s64 = 240;
	// lvx128 v62,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,224
	ctx.r9.s64 = 224;
	// lvx128 v59,r31,r5
	ea = (ctx.r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,176
	ctx.r10.s64 = 176;
	// lvx128 v55,r31,r6
	ea = (ctx.r31.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r31,r7
	ea = (ctx.r31.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v57,v59,11
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v58,r31,r4
	ea = (ctx.r31.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v53,v55,11
	simde_mm_store_ps(ctx.v53.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v55.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v52,r31,r8
	ea = (ctx.r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v56,v58,11
	simde_mm_store_ps(ctx.v56.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v50,r31,r9
	ea = (ctx.r31.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v51,v54,11
	simde_mm_store_ps(ctx.v51.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v54.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v48,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v49,v52,11
	simde_mm_store_ps(ctx.v49.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v52.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vcsxwfp128 v47,v50,11
	simde_mm_store_ps(ctx.v47.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v50.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// li r11,160
	ctx.r11.s64 = 160;
	// vcsxwfp128 v45,v48,11
	simde_mm_store_ps(ctx.v45.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v48.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v44,r30,r5
	ea = (ctx.r30.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v42,r30,r4
	ea = (ctx.r30.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v41,v44,0
	simde_mm_store_ps(ctx.v41.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v44.u32)));
	// lvx128 v39,r30,r6
	ea = (ctx.r30.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v40,v42,0
	simde_mm_store_ps(ctx.v40.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v42.u32)));
	// lvx128 v38,r30,r7
	ea = (ctx.r30.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v37,v39,0
	simde_mm_store_ps(ctx.v37.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v39.u32)));
	// lvx128 v46,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v63,v38,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v38.u32)));
	// lvx128 v35,r30,r8
	ea = (ctx.r30.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v43,v46,11
	simde_mm_store_ps(ctx.v43.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v46.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v33,r30,r9
	ea = (ctx.r30.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v36,v57,v1
	simde_mm_store_ps(ctx.v36.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v1.f32)));
	// lvx128 v32,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v59,v53,v1
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v34,v56,v1
	simde_mm_store_ps(ctx.v34.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v1.f32)));
	// li r5,80
	ctx.r5.s64 = 80;
	// vmulfp128 v58,v51,v1
	simde_mm_store_ps(ctx.v58.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v1.f32)));
	// li r6,64
	ctx.r6.s64 = 64;
	// vcsxwfp128 v57,v35,0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v35.u32)));
	// li r7,112
	ctx.r7.s64 = 112;
	// vmulfp128 v56,v49,v1
	simde_mm_store_ps(ctx.v56.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v1.f32)));
	// li r8,96
	ctx.r8.s64 = 96;
	// vcsxwfp128 v55,v33,0
	simde_mm_store_ps(ctx.v55.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v33.u32)));
	// li r9,48
	ctx.r9.s64 = 48;
	// vmulfp128 v54,v47,v1
	simde_mm_store_ps(ctx.v54.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v47.f32), simde_mm_load_ps(ctx.v1.f32)));
	// lvx128 v52,r31,r5
	ea = (ctx.r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v53,v32,0
	simde_mm_store_ps(ctx.v53.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v32.u32)));
	// lvx128 v50,r31,r6
	ea = (ctx.r31.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v51,v45,v1
	simde_mm_store_ps(ctx.v51.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_load_ps(ctx.v1.f32)));
	// li r10,32
	ctx.r10.s64 = 32;
	// vcsxwfp128 v60,v62,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// lvx128 v62,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v46,v43,v1
	simde_mm_store_ps(ctx.v46.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v1.f32)));
	// li r11,16
	ctx.r11.s64 = 16;
	// vmsum4fp128 v47,v36,v41
	simde_mm_store_ps(ctx.v47.f32, rex::ppc::guestDotProduct<true>(simde_mm_load_ps(ctx.v36.f32), simde_mm_load_ps(ctx.v41.f32)));
	// vcsxwfp128 v49,v62,0
	simde_mm_store_ps(ctx.v49.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vmsum4fp128 v43,v59,v37
	simde_mm_store_ps(ctx.v43.f32, rex::ppc::guestDotProduct<true>(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v37.f32)));
	// vcsxwfp128 v44,v52,11
	simde_mm_store_ps(ctx.v44.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v52.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vmsum4fp128 v45,v34,v40
	simde_mm_store_ps(ctx.v45.f32, rex::ppc::guestDotProduct<true>(simde_mm_load_ps(ctx.v34.f32), simde_mm_load_ps(ctx.v40.f32)));
	// vcsxwfp128 v42,v50,11
	simde_mm_store_ps(ctx.v42.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v50.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vmsum4fp128 v41,v58,v63
	simde_mm_store_ps(ctx.v41.f32, rex::ppc::guestDotProduct<true>(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v63.f32)));
	// lvx128 v48,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v40,v56,v57
	simde_mm_store_ps(ctx.v40.f32, rex::ppc::guestDotProduct<true>(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v57.f32)));
	// vmsum4fp128 v39,v54,v55
	simde_mm_store_ps(ctx.v39.f32, rex::ppc::guestDotProduct<true>(simde_mm_load_ps(ctx.v54.f32), simde_mm_load_ps(ctx.v55.f32)));
	// vmsum4fp128 v38,v51,v53
	simde_mm_store_ps(ctx.v38.f32, rex::ppc::guestDotProduct<true>(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v53.f32)));
	// vmsum4fp128 v37,v46,v49
	simde_mm_store_ps(ctx.v37.f32, rex::ppc::guestDotProduct<true>(simde_mm_load_ps(ctx.v46.f32), simde_mm_load_ps(ctx.v49.f32)));
	// vcfpuxws128 v36,v47,0
	simde_mm_store_si128((simde__m128i*)ctx.v36.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v47.f32)));
	// vcfpuxws128 v34,v43,0
	simde_mm_store_si128((simde__m128i*)ctx.v34.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v43.f32)));
	// vcfpuxws128 v35,v45,0
	simde_mm_store_si128((simde__m128i*)ctx.v35.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v45.f32)));
	// vcfpuxws128 v33,v41,0
	simde_mm_store_si128((simde__m128i*)ctx.v33.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v41.f32)));
	// vcfpuxws128 v32,v40,0
	simde_mm_store_si128((simde__m128i*)ctx.v32.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v40.f32)));
	// vcfpuxws128 v63,v39,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v39.f32)));
	// vcfpuxws128 v62,v38,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v38.f32)));
	// lvx128 v57,r31,r7
	ea = (ctx.r31.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v58,v48,11
	simde_mm_store_ps(ctx.v58.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v48.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v56,r31,r8
	ea = (ctx.r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v55,v57,11
	simde_mm_store_ps(ctx.v55.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v57.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v54,r31,r9
	ea = (ctx.r31.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v53,v56,11
	simde_mm_store_ps(ctx.v53.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v56.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v52,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v51,v54,11
	simde_mm_store_ps(ctx.v51.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v54.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vcsxwfp128 v50,v52,11
	simde_mm_store_ps(ctx.v50.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v52.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v49,r30,r5
	ea = (ctx.r30.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpuxws128 v59,v37,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v37.f32)));
	// lvx128 v48,r30,r6
	ea = (ctx.r30.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v43,v61,v1
	simde_mm_store_ps(ctx.v43.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v1.f32)));
	// lvx128 v41,r30,r7
	ea = (ctx.r30.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v36,v35,4,0
	simde_mm_store_ps(ctx.v36.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v36.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v35.f32), 228), 4));
	// lvx128 v39,r30,r8
	ea = (ctx.r30.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v38,v44,v1
	simde_mm_store_ps(ctx.v38.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_load_ps(ctx.v1.f32)));
	// lvx128 v37,r30,r9
	ea = (ctx.r30.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v47,v49,0
	simde_mm_store_ps(ctx.v47.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v49.u32)));
	// lvx128 v61,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v35,v42,v1
	simde_mm_store_ps(ctx.v35.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vcsxwfp128 v45,v48,0
	simde_mm_store_ps(ctx.v45.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v48.u32)));
	// vrlimi128 v63,v32,1,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v32.f32), 228), 1));
	// vcsxwfp128 v40,v46,0
	simde_mm_store_ps(ctx.v40.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// vrlimi128 v33,v34,4,0
	simde_mm_store_ps(ctx.v33.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v33.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v34.f32), 228), 4));
	// vmulfp128 v56,v58,v1
	simde_mm_store_ps(ctx.v56.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vcsxwfp128 v49,v61,0
	simde_mm_store_ps(ctx.v49.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// vcsxwfp128 v57,v41,0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v41.u32)));
	// vrlimi128 v36,v63,3,0
	simde_mm_store_ps(ctx.v36.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v36.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 228), 3));
	// vcsxwfp128 v54,v39,0
	simde_mm_store_ps(ctx.v54.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v39.u32)));
	// vcsxwfp128 v52,v37,0
	simde_mm_store_ps(ctx.v52.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v37.u32)));
	// vrlimi128 v59,v62,1,0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 1));
	// vmulfp128 v48,v55,v1
	simde_mm_store_ps(ctx.v48.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmsum4fp128 v41,v43,v60
	simde_mm_store_ps(ctx.v41.f32, rex::ppc::guestDotProduct<true>(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vmulfp128 v46,v53,v1
	simde_mm_store_ps(ctx.v46.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v44,v51,v1
	simde_mm_store_ps(ctx.v44.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v42,v50,v1
	simde_mm_store_ps(ctx.v42.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vrlimi128 v33,v59,3,0
	simde_mm_store_ps(ctx.v33.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v33.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v59.f32), 228), 3));
	// vmsum4fp128 v39,v38,v47
	simde_mm_store_ps(ctx.v39.f32, rex::ppc::guestDotProduct<true>(simde_mm_load_ps(ctx.v38.f32), simde_mm_load_ps(ctx.v47.f32)));
	// vmsum4fp128 v38,v35,v45
	simde_mm_store_ps(ctx.v38.f32, rex::ppc::guestDotProduct<true>(simde_mm_load_ps(ctx.v35.f32), simde_mm_load_ps(ctx.v45.f32)));
	// vpkswus128 v36,v33,v36
	simde_mm_store_si128((simde__m128i*)ctx.v36.u16, simde_mm_packus_epi32(simde_mm_load_si128((simde__m128i*)ctx.v36.s32), simde_mm_load_si128((simde__m128i*)ctx.v33.s32)));
	// vmsum4fp128 v37,v56,v40
	simde_mm_store_ps(ctx.v37.f32, rex::ppc::guestDotProduct<true>(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v40.f32)));
	// vmsum4fp128 v35,v48,v57
	simde_mm_store_ps(ctx.v35.f32, rex::ppc::guestDotProduct<true>(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v57.f32)));
	// vmsum4fp128 v34,v46,v54
	simde_mm_store_ps(ctx.v34.f32, rex::ppc::guestDotProduct<true>(simde_mm_load_ps(ctx.v46.f32), simde_mm_load_ps(ctx.v54.f32)));
	// vmsum4fp128 v33,v44,v52
	simde_mm_store_ps(ctx.v33.f32, rex::ppc::guestDotProduct<true>(simde_mm_load_ps(ctx.v44.f32), simde_mm_load_ps(ctx.v52.f32)));
	// vmsum4fp128 v32,v42,v49
	simde_mm_store_ps(ctx.v32.f32, rex::ppc::guestDotProduct<true>(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v49.f32)));
	// vcfpuxws128 v63,v41,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v41.f32)));
	// vcfpuxws128 v62,v39,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v39.f32)));
	// vcfpuxws128 v61,v38,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v38.f32)));
	// vcfpuxws128 v60,v37,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v37.f32)));
	// vcfpuxws128 v59,v35,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v35.f32)));
	// vcfpuxws128 v58,v34,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v34.f32)));
	// vcfpuxws128 v57,v33,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v33.f32)));
	// vcfpuxws128 v56,v32,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v32.f32)));
	// vrlimi128 v61,v62,4,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 4));
	// vrlimi128 v63,v60,4,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 228), 4));
	// vrlimi128 v58,v59,1,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v59.f32), 228), 1));
	// vrlimi128 v56,v57,1,0
	simde_mm_store_ps(ctx.v56.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v57.f32), 228), 1));
	// vrlimi128 v61,v58,3,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v58.f32), 228), 3));
	// vrlimi128 v63,v56,3,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v56.f32), 228), 3));
	// vpkswus128 v55,v63,v61
	simde_mm_store_si128((simde__m128i*)ctx.v55.u16, simde_mm_packus_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.s32), simde_mm_load_si128((simde__m128i*)ctx.v63.s32)));
	// vpkuhus128 v54,v55,v36
	ctx.v54.u8[15] = ctx.v55.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v55.u16[7];
	ctx.v54.u8[7] = ctx.v36.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v36.u16[7];
	ctx.v54.u8[14] = ctx.v55.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v55.u16[6];
	ctx.v54.u8[6] = ctx.v36.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v36.u16[6];
	ctx.v54.u8[13] = ctx.v55.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v55.u16[5];
	ctx.v54.u8[5] = ctx.v36.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v36.u16[5];
	ctx.v54.u8[12] = ctx.v55.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v55.u16[4];
	ctx.v54.u8[4] = ctx.v36.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v36.u16[4];
	ctx.v54.u8[11] = ctx.v55.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v55.u16[3];
	ctx.v54.u8[3] = ctx.v36.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v36.u16[3];
	ctx.v54.u8[10] = ctx.v55.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v55.u16[2];
	ctx.v54.u8[2] = ctx.v36.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v36.u16[2];
	ctx.v54.u8[9] = ctx.v55.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v55.u16[1];
	ctx.v54.u8[1] = ctx.v36.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v36.u16[1];
	ctx.v54.u8[8] = ctx.v55.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v55.u16[0];
	ctx.v54.u8[0] = ctx.v36.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v36.u16[0];
	// stvlx128 v54,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// stvrx128 v54,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v54.u8[i]);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8817CE50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x8817CE58;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,3744(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 3744);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,3760(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 3760);
	// lwz r30,616(r8)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r8.u32 + 616);
	// lwz r10,220(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r9,3776(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// lwz r6,3832(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3832);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// add r25,r9,r10
	ctx.r25.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r8,3780(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// add r26,r6,r10
	ctx.r26.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lwz r7,3784(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// lwz r5,3836(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3836);
	// add r29,r8,r11
	ctx.r29.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r4,3840(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3840);
	// add r27,r7,r11
	ctx.r27.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r30,616(r3)
	REX_STORE_U32(ctx.r3.u32 + 616, ctx.r30.u32);
	// add r30,r5,r11
	ctx.r30.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lwz r10,15964(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15964);
	// add r28,r4,r11
	ctx.r28.u64 = ctx.r4.u64 + ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8817cf1c
	if (ctx.cr6.eq) goto loc_8817CF1C;
	// lwz r11,20416(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8817cf1c
	if (!ctx.cr6.eq) goto loc_8817CF1C;
	// lwz r10,3760(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3760);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r9,592(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 592);
	// mulli r11,r9,68
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(68));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// stw r7,592(r10)
	REX_STORE_U32(ctx.r10.u32 + 592, ctx.r7.u32);
	// stw r8,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// lwz r6,3744(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3744);
	// stw r6,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r6.u32);
	// lwz r5,204(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// stw r5,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r5.u32);
	// lwz r4,208(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// stw r4,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r4.u32);
	// lwz r3,140(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// stw r3,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r3.u32);
	// lwz r10,220(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// stw r10,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// lwz r9,224(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// stw r9,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_8817CF1C:
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8817cfac
	if (!ctx.cr6.gt) goto loc_8817CFAC;
loc_8817CF2C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880547a0
	ctx.lr = 0x8817CF3C;
	sub_880547A0(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x880547a0
	ctx.lr = 0x8817CF58;
	sub_880547A0(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,204(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x880547a0
	ctx.lr = 0x8817CF74;
	sub_880547A0(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x880547a0
	ctx.lr = 0x8817CF90;
	sub_880547A0(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8817cf2c
	if (ctx.cr6.lt) goto loc_8817CF2C;
loc_8817CFAC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8817EA48) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8817EA50;
	__savegprlr_14(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lhz r11,74(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 74);
	// stw r8,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r8.u32);
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// stw r6,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r6.u32);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// stw r7,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r7.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r9,372(r1)
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r9.u32);
	// lhz r8,50(r31)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 50);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r6,52(r31)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + 52);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// lhz r9,76(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// rlwinm r24,r8,31,1,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r21,r6,31,1,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r3,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r3.u32);
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r28,15720(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 15720);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r27,15724(r3)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 15724);
	// rotlwi r23,r11,3
	ctx.r23.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// lwz r17,1356(r31)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r31.u32 + 1356);
	// rotlwi r22,r11,4
	ctx.r22.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// lwz r29,15728(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 15728);
	// rotlwi r7,r9,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwz r26,15732(r3)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 15732);
	// rotlwi r6,r9,3
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r24,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// stw r21,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// stw r23,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// stw r8,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// stw r7,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// bl 0x8817dfc8
	ctx.lr = 0x8817EAEC;
	sub_8817DFC8(ctx, base);
	// mullw r10,r24,r25
	ctx.r10.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r25.s32);
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r14,r11,r28
	ctx.r14.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r15,r11,r27
	ctx.r15.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r4,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// add r11,r10,r26
	ctx.r11.u64 = ctx.r10.u64 + ctx.r26.u64;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lwz r11,1588(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1588);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8817eb3c
	if (!ctx.cr6.eq) goto loc_8817EB3C;
	// lwz r8,20680(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20680);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8817fbb8
	if (!ctx.cr6.eq) goto loc_8817FBB8;
	// lwz r7,20684(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20684);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8817eb84
	if (ctx.cr6.eq) goto loc_8817EB84;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_8817EB3C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8817eb64
	if (!ctx.cr6.eq) goto loc_8817EB64;
	// lwz r8,20680(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20680);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x8817fbb8
	if (!ctx.cr6.eq) goto loc_8817FBB8;
	// lwz r7,20684(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20684);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8817eb84
	if (ctx.cr6.eq) goto loc_8817EB84;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_8817EB64:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8817fbb8
	if (!ctx.cr6.eq) goto loc_8817FBB8;
	// lwz r8,20680(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20680);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x8817fbb8
	if (!ctx.cr6.eq) goto loc_8817FBB8;
	// lwz r7,20684(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20684);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x8817fbb8
	if (!ctx.cr6.eq) goto loc_8817FBB8;
loc_8817EB84:
	// lhz r11,74(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// add r10,r23,r30
	ctx.r10.u64 = ctx.r23.u64 + ctx.r30.u64;
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// rotlwi r6,r11,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// neg r4,r6
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// dcbt r4,r10
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r10
	// rotlwi r29,r11,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// neg r28,r29
	ctx.r28.s64 = static_cast<int64_t>(-ctx.r29.u64);
	// dcbt r28,r10
	// neg r27,r11
	ctx.r27.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// dcbt r27,r10
	// dcbt r23,r30
	// dcbt r11,r10
	// dcbt r29,r10
	// dcbt r9,r10
	// add r10,r22,r30
	ctx.r10.u64 = ctx.r22.u64 + ctx.r30.u64;
	// dcbt r4,r10
	// dcbt r6,r10
	// dcbt r28,r10
	// dcbt r27,r10
	// dcbt r22,r30
	// dcbt r11,r10
	// dcbt r29,r10
	// dcbt r9,r10
	// dcbt r0,r30
	// dcbt r11,r30
	// dcbt r29,r30
	// dcbt r9,r30
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8817ec2c
	if (ctx.cr6.eq) goto loc_8817EC2C;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8817ec2c
	if (ctx.cr6.eq) goto loc_8817EC2C;
	// lwz r11,1372(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1372);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8817ec2c
	if (!ctx.cr6.eq) goto loc_8817EC2C;
	// lwz r10,21972(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 21972);
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8817ec30
	goto loc_8817EC30;
loc_8817EC2C:
	// lwz r11,21972(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21972);
loc_8817EC30:
	// stw r11,21968(r3)
	REX_STORE_U32(ctx.r3.u32 + 21968, ctx.r11.u32);
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r16,r30
	ctx.r16.u64 = ctx.r30.u64;
	// addi r11,r11,20448
	ctx.r11.s64 = ctx.r11.s64 + 20448;
	// cmplw cr6,r25,r5
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r5.u32, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bge cr6,0x8817f4cc
	if (!ctx.cr6.lt) goto loc_8817F4CC;
	// lwz r11,364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_8817EC5C:
	// lwz r10,324(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,21940(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 21940);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// beq cr6,0x8817eca8
	if (ctx.cr6.eq) goto loc_8817ECA8;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8817eca0
	if (!ctx.cr6.lt) goto loc_8817ECA0;
	// lwz r11,21968(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 21968);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8817eca0
	if (!ctx.cr6.eq) goto loc_8817ECA0;
	// li r23,0
	ctx.r23.s64 = 0;
	// b 0x8817ecb4
	goto loc_8817ECB4;
loc_8817ECA0:
	// li r23,1
	ctx.r23.s64 = 1;
	// b 0x8817ecb4
	goto loc_8817ECB4;
loc_8817ECA8:
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfc r11,r11,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r11.u32;
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subfze r23,r10
	temp.u8 = ~ctx.r10.u32 + ctx.xer.ca < ~ctx.r10.u32;
	ctx.r23.u64 = ~ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8817ECB4:
	// lbz r25,0(r14)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r14.u32 + 0);
	// mr r22,r16
	ctx.r22.u64 = ctx.r16.u64;
	// lbzu r26,1(r14)
	ea = 1 + ctx.r14.u32;
	ctx.r26.u64 = REX_LOAD_U8(ea);
	ctx.r14.u32 = ea;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r26,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 28) & 0xFFFFFFF;
	// lbz r29,1244(r31)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// lhz r27,74(r31)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// lwz r24,80(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r28,r16,r10
	ctx.r28.u64 = ctx.r16.u64 + ctx.r10.u64;
	// stw r23,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817ed34
	if (ctx.cr6.eq) goto loc_8817ED34;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r24,-208
	ctx.r10.s64 = ctx.r24.s64 + -208;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r30,r11,r10
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r30,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r30,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817ED0C;
	sub_881973D8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8817ed34
	if (ctx.cr6.eq) goto loc_8817ED34;
	// rlwinm r10,r30,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rlwinm r11,r10,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r10,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817ED34;
	sub_881973D8(ctx, base);
loc_8817ED34:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x8817eda4
	if (!ctx.cr6.eq) goto loc_8817EDA4;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi r11,r26,28
	ctx.r11.u64 = ctx.r26.u32 & 0xF;
	// lbz r29,1244(r31)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// lhz r27,74(r31)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// add r28,r16,r10
	ctx.r28.u64 = ctx.r16.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817eda4
	if (ctx.cr6.eq) goto loc_8817EDA4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r24,-208
	ctx.r10.s64 = ctx.r24.s64 + -208;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r30,r11,r10
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r30,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r30,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817ED7C;
	sub_881973D8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8817eda4
	if (ctx.cr6.eq) goto loc_8817EDA4;
	// rlwinm r10,r30,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rlwinm r11,r10,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r10,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817EDA4;
	sub_881973D8(ctx, base);
loc_8817EDA4:
	// lwz r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r11,r25,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 28) & 0xF;
	// lbz r29,1244(r31)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// lhz r28,74(r31)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// add r27,r16,r10
	ctx.r27.u64 = ctx.r16.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817ee0c
	if (ctx.cr6.eq) goto loc_8817EE0C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r24,-208
	ctx.r10.s64 = ctx.r24.s64 + -208;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r30,r11,r10
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r30,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r30,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817EDE4;
	sub_881973D8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8817ee0c
	if (ctx.cr6.eq) goto loc_8817EE0C;
	// rlwinm r10,r30,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rlwinm r11,r10,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r10,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817EE0C;
	sub_881973D8(ctx, base);
loc_8817EE0C:
	// lwz r10,124(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// clrlwi r11,r25,28
	ctx.r11.u64 = ctx.r25.u32 & 0xF;
	// lbz r29,1244(r31)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// lhz r28,74(r31)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// add r27,r16,r10
	ctx.r27.u64 = ctx.r16.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817ee74
	if (ctx.cr6.eq) goto loc_8817EE74;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r24,-208
	ctx.r10.s64 = ctx.r24.s64 + -208;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r30,r11,r10
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r30,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r30,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817EE4C;
	sub_881973D8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8817ee74
	if (ctx.cr6.eq) goto loc_8817EE74;
	// rlwinm r10,r30,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rlwinm r11,r10,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r10,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817EE74;
	sub_881973D8(ctx, base);
loc_8817EE74:
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8817f2cc
	if (!ctx.cr6.gt) goto loc_8817F2CC;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r29,r16,16
	ctx.r29.s64 = ctx.r16.s64 + 16;
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r8,120(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// addi r21,r10,-16
	ctx.r21.s64 = ctx.r10.s64 + -16;
	// lwz r7,124(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// addi r20,r9,-16
	ctx.r20.s64 = ctx.r9.s64 + -16;
	// addi r19,r8,-16
	ctx.r19.s64 = ctx.r8.s64 + -16;
	// addi r18,r7,-16
	ctx.r18.s64 = ctx.r7.s64 + -16;
loc_8817EEA8:
	// lbz r24,0(r14)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r14.u32 + 0);
	// addic. r23,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r23.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// lbzu r25,1(r14)
	ea = 1 + ctx.r14.u32;
	ctx.r25.u64 = REX_LOAD_U8(ea);
	ctx.r14.u32 = ea;
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// bne 0x8817ef4c
	if (!ctx.cr0.eq) goto loc_8817EF4C;
	// lhz r10,74(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// dcbt r7,r11
	// dcbt r6,r11
	// dcbt r4,r11
	// dcbt r3,r11
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// addi r11,r29,16
	ctx.r11.s64 = ctx.r29.s64 + 16;
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
loc_8817EF4C:
	// rlwinm r11,r25,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 28) & 0xF;
	// lbz r27,1244(r31)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// lhz r26,74(r31)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817efb8
	if (ctx.cr6.eq) goto loc_8817EFB8;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r21,r29
	ctx.r11.u64 = ctx.r21.u64 + ctx.r29.u64;
	// addi r8,r10,-208
	ctx.r8.s64 = ctx.r10.s64 + -208;
	// addi r28,r11,16
	ctx.r28.s64 = ctx.r11.s64 + 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwzx r30,r9,r8
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r11,r30,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r30,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817EF90;
	sub_881973D8(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8817efb8
	if (ctx.cr6.eq) goto loc_8817EFB8;
	// rlwinm r10,r30,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r11,r10,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r10,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817EFB8;
	sub_881973D8(ctx, base);
loc_8817EFB8:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8817f030
	if (!ctx.cr6.eq) goto loc_8817F030;
	// clrlwi r11,r25,28
	ctx.r11.u64 = ctx.r25.u32 & 0xF;
	// lbz r27,1244(r31)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// lhz r26,74(r31)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817f030
	if (ctx.cr6.eq) goto loc_8817F030;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r20,r29
	ctx.r11.u64 = ctx.r20.u64 + ctx.r29.u64;
	// addi r8,r10,-208
	ctx.r8.s64 = ctx.r10.s64 + -208;
	// addi r28,r11,16
	ctx.r28.s64 = ctx.r11.s64 + 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwzx r30,r9,r8
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r11,r30,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r30,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817F008;
	sub_881973D8(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8817f030
	if (ctx.cr6.eq) goto loc_8817F030;
	// rlwinm r10,r30,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r11,r10,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r10,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817F030;
	sub_881973D8(ctx, base);
loc_8817F030:
	// rlwinm r11,r24,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 28) & 0xF;
	// lbz r27,1244(r31)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// lhz r26,74(r31)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817f09c
	if (ctx.cr6.eq) goto loc_8817F09C;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r19,r29
	ctx.r11.u64 = ctx.r19.u64 + ctx.r29.u64;
	// addi r8,r10,-208
	ctx.r8.s64 = ctx.r10.s64 + -208;
	// addi r28,r11,16
	ctx.r28.s64 = ctx.r11.s64 + 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwzx r30,r9,r8
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r11,r30,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r30,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817F074;
	sub_881973D8(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8817f09c
	if (ctx.cr6.eq) goto loc_8817F09C;
	// rlwinm r10,r30,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r11,r10,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r10,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817F09C;
	sub_881973D8(ctx, base);
loc_8817F09C:
	// clrlwi r11,r24,28
	ctx.r11.u64 = ctx.r24.u32 & 0xF;
	// lbz r27,1244(r31)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// lhz r26,74(r31)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817f108
	if (ctx.cr6.eq) goto loc_8817F108;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r18,r29
	ctx.r11.u64 = ctx.r18.u64 + ctx.r29.u64;
	// addi r8,r10,-208
	ctx.r8.s64 = ctx.r10.s64 + -208;
	// addi r28,r11,16
	ctx.r28.s64 = ctx.r11.s64 + 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwzx r30,r9,r8
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r11,r30,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r30,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817F0E0;
	sub_881973D8(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8817f108
	if (ctx.cr6.eq) goto loc_8817F108;
	// rlwinm r10,r30,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r11,r10,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r10,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817F108;
	sub_881973D8(ctx, base);
loc_8817F108:
	// lbz r24,0(r15)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r15.u32 + 0);
	// lbzu r25,1(r15)
	ea = 1 + ctx.r15.u32;
	ctx.r25.u64 = REX_LOAD_U8(ea);
	ctx.r15.u32 = ea;
	// lbz r27,1244(r31)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// rlwinm r11,r25,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 28) & 0xFFFFFFF;
	// lhz r26,74(r31)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817f17c
	if (ctx.cr6.eq) goto loc_8817F17C;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r28,r29,-13
	ctx.r28.s64 = ctx.r29.s64 + -13;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r30,r11,r17
	ctx.r30.u64 = ctx.r11.u64 + ctx.r17.u64;
	// lbzx r10,r11,r17
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x88197808
	ctx.lr = 0x8817F158;
	sub_88197808(ctx, base);
	// lbz r9,1(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8817f17c
	if (ctx.cr6.lt) goto loc_8817F17C;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x88197808
	ctx.lr = 0x8817F17C;
	sub_88197808(ctx, base);
loc_8817F17C:
	// clrlwi r11,r25,28
	ctx.r11.u64 = ctx.r25.u32 & 0xF;
	// lbz r27,1244(r31)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// lhz r26,74(r31)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817f1e4
	if (ctx.cr6.eq) goto loc_8817F1E4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r28,r29,-5
	ctx.r28.s64 = ctx.r29.s64 + -5;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r30,r11,r17
	ctx.r30.u64 = ctx.r11.u64 + ctx.r17.u64;
	// lbzx r10,r11,r17
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x88197808
	ctx.lr = 0x8817F1C0;
	sub_88197808(ctx, base);
	// lbz r9,1(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8817f1e4
	if (ctx.cr6.lt) goto loc_8817F1E4;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x88197808
	ctx.lr = 0x8817F1E4;
	sub_88197808(ctx, base);
loc_8817F1E4:
	// rlwinm r11,r24,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 28) & 0xF;
	// lbz r27,1244(r31)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// lhz r26,74(r31)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817f24c
	if (ctx.cr6.eq) goto loc_8817F24C;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r28,r29,-17
	ctx.r28.s64 = ctx.r29.s64 + -17;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r30,r11,r17
	ctx.r30.u64 = ctx.r11.u64 + ctx.r17.u64;
	// lbzx r10,r11,r17
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x88197808
	ctx.lr = 0x8817F228;
	sub_88197808(ctx, base);
	// lbz r9,1(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8817f24c
	if (ctx.cr6.lt) goto loc_8817F24C;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x88197808
	ctx.lr = 0x8817F24C;
	sub_88197808(ctx, base);
loc_8817F24C:
	// clrlwi r11,r24,28
	ctx.r11.u64 = ctx.r24.u32 & 0xF;
	// lbz r27,1244(r31)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// lhz r26,74(r31)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817f2b4
	if (ctx.cr6.eq) goto loc_8817F2B4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r28,r29,-9
	ctx.r28.s64 = ctx.r29.s64 + -9;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r30,r11,r17
	ctx.r30.u64 = ctx.r11.u64 + ctx.r17.u64;
	// lbzx r10,r11,r17
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x88197808
	ctx.lr = 0x8817F290;
	sub_88197808(ctx, base);
	// lbz r9,1(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8817f2b4
	if (ctx.cr6.lt) goto loc_8817F2B4;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x88197808
	ctx.lr = 0x8817F2B4;
	sub_88197808(ctx, base);
loc_8817F2B4:
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r22,r22,16
	ctx.r22.s64 = ctx.r22.s64 + 16;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmplw cr6,r23,r10
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8817eea8
	if (ctx.cr6.lt) goto loc_8817EEA8;
loc_8817F2CC:
	// lhz r11,82(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 82);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// add r16,r11,r16
	ctx.r16.u64 = ctx.r11.u64 + ctx.r16.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8817f364
	if (!ctx.cr6.eq) goto loc_8817F364;
	// lhz r10,74(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r11,r16,r11
	ctx.r11.u64 = ctx.r16.u64 + ctx.r11.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r11,r16,r11
	ctx.r11.u64 = ctx.r16.u64 + ctx.r11.u64;
	// dcbt r7,r11
	// dcbt r6,r11
	// dcbt r4,r11
	// dcbt r3,r11
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// dcbt r0,r16
	// dcbt r10,r16
	// dcbt r5,r16
	// dcbt r9,r16
loc_8817F364:
	// lbz r26,0(r15)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r15.u32 + 0);
	// addi r29,r22,3
	ctx.r29.s64 = ctx.r22.s64 + 3;
	// lbzu r11,1(r15)
	ea = 1 + ctx.r15.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r15.u32 = ea;
	// lbz r28,1244(r31)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// lhz r27,74(r31)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817f3d8
	if (ctx.cr6.eq) goto loc_8817F3D8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r17
	ctx.r30.u64 = ctx.r11.u64 + ctx.r17.u64;
	// lbzx r10,r11,r17
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x88197808
	ctx.lr = 0x8817F3B4;
	sub_88197808(ctx, base);
	// lbz r9,1(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8817f3d8
	if (ctx.cr6.lt) goto loc_8817F3D8;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x88197808
	ctx.lr = 0x8817F3D8;
	sub_88197808(ctx, base);
loc_8817F3D8:
	// rlwinm r11,r26,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 28) & 0xF;
	// lbz r29,1244(r31)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// lhz r28,74(r31)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// addi r27,r22,-1
	ctx.r27.s64 = ctx.r22.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817f440
	if (ctx.cr6.eq) goto loc_8817F440;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r17
	ctx.r30.u64 = ctx.r11.u64 + ctx.r17.u64;
	// lbzx r10,r11,r17
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x88197808
	ctx.lr = 0x8817F41C;
	sub_88197808(ctx, base);
	// lbz r9,1(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8817f440
	if (ctx.cr6.lt) goto loc_8817F440;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x88197808
	ctx.lr = 0x8817F440;
	sub_88197808(ctx, base);
loc_8817F440:
	// clrlwi r11,r26,28
	ctx.r11.u64 = ctx.r26.u32 & 0xF;
	// lbz r29,1244(r31)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// lhz r28,74(r31)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// addi r27,r22,7
	ctx.r27.s64 = ctx.r22.s64 + 7;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817f4a8
	if (ctx.cr6.eq) goto loc_8817F4A8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r17
	ctx.r30.u64 = ctx.r11.u64 + ctx.r17.u64;
	// lbzx r10,r11,r17
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x88197808
	ctx.lr = 0x8817F484;
	sub_88197808(ctx, base);
	// lbz r9,1(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8817f4a8
	if (ctx.cr6.lt) goto loc_8817F4A8;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x88197808
	ctx.lr = 0x8817F4A8;
	sub_88197808(ctx, base);
loc_8817F4A8:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,372(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// blt cr6,0x8817ec5c
	if (ctx.cr6.lt) goto loc_8817EC5C;
loc_8817F4CC:
	// lhz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// lwz r8,348(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// rotlwi r6,r10,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// neg r5,r6
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// dcbt r5,r11
	// neg r4,r9
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r4,r11
	// rotlwi r3,r10,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r6,r3
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// dcbt r6,r11
	// neg r5,r10
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r5,r11
	// dcbt r7,r8
	// dcbt r10,r11
	// dcbt r3,r11
	// dcbt r9,r11
	// dcbt r0,r8
	// dcbt r10,r8
	// dcbt r3,r8
	// dcbt r9,r8
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// lwz r23,364(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r4,372(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// cmplw cr6,r23,r4
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x8817f848
	if (!ctx.cr6.lt) goto loc_8817F848;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r21,r23,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,132(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r20,r11,-1
	ctx.r20.s64 = ctx.r11.s64 + -1;
	// addi r26,r10,-1
	ctx.r26.s64 = ctx.r10.s64 + -1;
	// addi r24,r9,-1
	ctx.r24.s64 = ctx.r9.s64 + -1;
loc_8817F55C:
	// lwz r11,324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r10,21940(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 21940);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8817f598
	if (ctx.cr6.eq) goto loc_8817F598;
	// cmplw cr6,r23,r20
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x8817f590
	if (!ctx.cr6.lt) goto loc_8817F590;
	// lwz r11,21968(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21968);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8817f590
	if (!ctx.cr6.eq) goto loc_8817F590;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x8817f5a4
	goto loc_8817F5A4;
loc_8817F590:
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x8817f5a4
	goto loc_8817F5A4;
loc_8817F598:
	// subfc r11,r20,r23
	ctx.xer.ca = ctx.r23.u32 >= ctx.r20.u32;
	ctx.r11.u64 = ctx.r23.u64 - ctx.r20.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfze r25,r10
	temp.u8 = ~ctx.r10.u32 + ctx.xer.ca < ~ctx.r10.u32;
	ctx.r25.u64 = ~ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8817F5A4:
	// lbz r30,1(r24)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r24.u32 + 1);
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x8817f5f0
	if (!ctx.cr6.eq) goto loc_8817F5F0;
	// rlwinm r11,r30,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817f5f0
	if (ctx.cr6.eq) goto loc_8817F5F0;
	// lwz r22,80(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r17,84(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// lbzx r10,r11,r22
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r22.u32);
	// rlwinm r11,r10,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r6,r10,28
	ctx.r6.u64 = ctx.r10.u32 & 0xF;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// add r3,r11,r17
	ctx.r3.u64 = ctx.r11.u64 + ctx.r17.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817F5EC;
	sub_881973D8(ctx, base);
	// b 0x8817f5f8
	goto loc_8817F5F8;
loc_8817F5F0:
	// lwz r17,84(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r22,80(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8817F5F8:
	// rlwinm r11,r30,26,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0x3;
	// lwz r16,116(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817f628
	if (ctx.cr6.eq) goto loc_8817F628;
	// lbzx r10,r11,r22
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r22.u32);
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// rlwinm r11,r10,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// clrlwi r6,r10,28
	ctx.r6.u64 = ctx.r10.u32 & 0xF;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// add r3,r11,r16
	ctx.r3.u64 = ctx.r11.u64 + ctx.r16.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817F628;
	sub_881973D8(ctx, base);
loc_8817F628:
	// lwz r15,108(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r19,r18,8
	ctx.r19.s64 = ctx.r18.s64 + 8;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r15,1
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 1, ctx.xer);
	// ble cr6,0x8817f788
	if (!ctx.cr6.gt) goto loc_8817F788;
	// addi r29,r19,8
	ctx.r29.s64 = ctx.r19.s64 + 8;
loc_8817F640:
	// lbzu r30,1(r24)
	ea = 1 + ctx.r24.u32;
	ctx.r30.u64 = REX_LOAD_U8(ea);
	ctx.r24.u32 = ea;
	// addic. r27,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r27.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x8817f6a8
	if (!ctx.cr0.eq) goto loc_8817F6A8;
	// lhz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// add r11,r19,r17
	ctx.r11.u64 = ctx.r19.u64 + ctx.r17.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// dcbt r0,r29
	// dcbt r10,r29
	// dcbt r5,r29
	// dcbt r9,r29
loc_8817F6A8:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x8817f6dc
	if (!ctx.cr6.eq) goto loc_8817F6DC;
	// rlwinm r11,r30,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817f6dc
	if (ctx.cr6.eq) goto loc_8817F6DC;
	// lbzx r10,r11,r22
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r22.u32);
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// rlwinm r11,r10,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// clrlwi r6,r10,28
	ctx.r6.u64 = ctx.r10.u32 & 0xF;
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + ctx.r19.u64;
	// add r3,r11,r17
	ctx.r3.u64 = ctx.r11.u64 + ctx.r17.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817F6DC;
	sub_881973D8(ctx, base);
loc_8817F6DC:
	// rlwinm r11,r30,26,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817f708
	if (ctx.cr6.eq) goto loc_8817F708;
	// lbzx r10,r11,r22
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r22.u32);
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// rlwinm r11,r10,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// clrlwi r6,r10,28
	ctx.r6.u64 = ctx.r10.u32 & 0xF;
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + ctx.r19.u64;
	// add r3,r11,r16
	ctx.r3.u64 = ctx.r11.u64 + ctx.r16.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817F708;
	sub_881973D8(ctx, base);
loc_8817F708:
	// lbz r30,1(r26)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r26.u32 + 1);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// rlwinm r11,r30,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817f740
	if (ctx.cr6.eq) goto loc_8817F740;
	// lbzx r11,r11,r22
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r22.u32);
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r6,r11,28
	ctx.r6.u64 = ctx.r11.u32 & 0xF;
	// mullw r11,r10,r4
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// bl 0x88197808
	ctx.lr = 0x8817F740;
	sub_88197808(ctx, base);
loc_8817F740:
	// rlwinm r11,r30,26,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0x3;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817f770
	if (ctx.cr6.eq) goto loc_8817F770;
	// lbzx r11,r11,r22
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r22.u32);
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r6,r11,28
	ctx.r6.u64 = ctx.r11.u32 & 0xF;
	// mullw r11,r10,r4
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// bl 0x88197808
	ctx.lr = 0x8817F770;
	sub_88197808(ctx, base);
loc_8817F770:
	// addi r19,r19,8
	ctx.r19.s64 = ctx.r19.s64 + 8;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r15
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x8817f640
	if (ctx.cr6.lt) goto loc_8817F640;
loc_8817F788:
	// lhz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 84);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// add r18,r11,r18
	ctx.r18.u64 = ctx.r11.u64 + ctx.r18.u64;
	// bne cr6,0x8817f7f0
	if (!ctx.cr6.eq) goto loc_8817F7F0;
	// lhz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// add r11,r18,r17
	ctx.r11.u64 = ctx.r18.u64 + ctx.r17.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r18,r17
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// dcbt r0,r18
	// dcbt r10,r18
	// dcbt r5,r18
	// dcbt r9,r18
loc_8817F7F0:
	// lbzu r11,1(r26)
	ea = 1 + ctx.r26.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r26.u32 = ea;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817f824
	if (ctx.cr6.eq) goto loc_8817F824;
	// lbzx r11,r11,r22
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r22.u32);
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r6,r11,28
	ctx.r6.u64 = ctx.r11.u32 & 0xF;
	// mullw r11,r10,r4
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// bl 0x88197808
	ctx.lr = 0x8817F824;
	sub_88197808(ctx, base);
loc_8817F824:
	// lwz r11,372(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8817f55c
	if (ctx.cr6.lt) goto loc_8817F55C;
	// lwz r8,348(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r23,364(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8817f84c
	goto loc_8817F84C;
loc_8817F848:
	// lwz r19,136(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
loc_8817F84C:
	// lhz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// lwz r26,356(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// rotlwi r6,r10,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r11,r7,r26
	ctx.r11.u64 = ctx.r7.u64 + ctx.r26.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// neg r5,r6
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// dcbt r5,r11
	// neg r4,r9
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r4,r11
	// rotlwi r3,r10,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r6,r3
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// dcbt r6,r11
	// neg r5,r10
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r5,r11
	// dcbt r7,r26
	// dcbt r10,r11
	// dcbt r3,r11
	// dcbt r9,r11
	// dcbt r0,r8
	// dcbt r10,r8
	// dcbt r3,r8
	// dcbt r9,r8
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// lwz r11,324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r9,136(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r4,372(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// cmplw cr6,r23,r4
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r4.u32, ctx.xer);
	// lwz r10,15728(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 15728);
	// lwz r11,15732(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 15732);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bge cr6,0x8817fbb8
	if (!ctx.cr6.lt) goto loc_8817FBB8;
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r25,r11,-1
	ctx.r25.s64 = ctx.r11.s64 + -1;
	// lwz r8,364(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// addi r23,r10,-1
	ctx.r23.s64 = ctx.r10.s64 + -1;
	// lwz r14,108(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r20,r9,-1
	ctx.r20.s64 = ctx.r9.s64 + -1;
	// lwz r15,116(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r21,r8,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r16,84(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r17,80(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8817F8F8:
	// lwz r11,324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r10,21940(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 21940);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8817f934
	if (ctx.cr6.eq) goto loc_8817F934;
	// cmplw cr6,r22,r20
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x8817f92c
	if (!ctx.cr6.lt) goto loc_8817F92C;
	// lwz r11,21968(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21968);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8817f92c
	if (!ctx.cr6.eq) goto loc_8817F92C;
	// li r24,0
	ctx.r24.s64 = 0;
	// b 0x8817f940
	goto loc_8817F940;
loc_8817F92C:
	// li r24,1
	ctx.r24.s64 = 1;
	// b 0x8817f940
	goto loc_8817F940;
loc_8817F934:
	// subfc r11,r20,r22
	ctx.xer.ca = ctx.r22.u32 >= ctx.r20.u32;
	ctx.r11.u64 = ctx.r22.u64 - ctx.r20.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfze r24,r10
	temp.u8 = ~ctx.r10.u32 + ctx.xer.ca < ~ctx.r10.u32;
	ctx.r24.u64 = ~ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8817F940:
	// lbz r30,1(r23)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r23.u32 + 1);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8817f980
	if (!ctx.cr6.eq) goto loc_8817F980;
	// clrlwi r11,r30,30
	ctx.r11.u64 = ctx.r30.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817f980
	if (ctx.cr6.eq) goto loc_8817F980;
	// lbzx r10,r11,r17
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// rlwinm r11,r10,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// clrlwi r6,r10,28
	ctx.r6.u64 = ctx.r10.u32 & 0xF;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r3,r11,r16
	ctx.r3.u64 = ctx.r11.u64 + ctx.r16.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817F980;
	sub_881973D8(ctx, base);
loc_8817F980:
	// rlwinm r11,r30,28,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817f9ac
	if (ctx.cr6.eq) goto loc_8817F9AC;
	// lbzx r10,r11,r17
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// rlwinm r11,r10,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// clrlwi r6,r10,28
	ctx.r6.u64 = ctx.r10.u32 & 0xF;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r3,r11,r15
	ctx.r3.u64 = ctx.r11.u64 + ctx.r15.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817F9AC;
	sub_881973D8(ctx, base);
loc_8817F9AC:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r14,1
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 1, ctx.xer);
	// ble cr6,0x8817fb08
	if (!ctx.cr6.gt) goto loc_8817FB08;
	// addi r29,r26,8
	ctx.r29.s64 = ctx.r26.s64 + 8;
loc_8817F9BC:
	// lbzu r30,1(r23)
	ea = 1 + ctx.r23.u32;
	ctx.r30.u64 = REX_LOAD_U8(ea);
	ctx.r23.u32 = ea;
	// addic. r27,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r27.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x8817fa28
	if (!ctx.cr0.eq) goto loc_8817FA28;
	// lhz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// add r11,r29,r16
	ctx.r11.u64 = ctx.r29.u64 + ctx.r16.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// addi r11,r19,8
	ctx.r11.s64 = ctx.r19.s64 + 8;
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
loc_8817FA28:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8817fa5c
	if (!ctx.cr6.eq) goto loc_8817FA5C;
	// clrlwi r11,r30,30
	ctx.r11.u64 = ctx.r30.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817fa5c
	if (ctx.cr6.eq) goto loc_8817FA5C;
	// lbzx r10,r11,r17
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// rlwinm r11,r10,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// clrlwi r6,r10,28
	ctx.r6.u64 = ctx.r10.u32 & 0xF;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r3,r11,r16
	ctx.r3.u64 = ctx.r11.u64 + ctx.r16.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817FA5C;
	sub_881973D8(ctx, base);
loc_8817FA5C:
	// rlwinm r11,r30,28,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817fa88
	if (ctx.cr6.eq) goto loc_8817FA88;
	// lbzx r10,r11,r17
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// rlwinm r11,r10,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// clrlwi r6,r10,28
	ctx.r6.u64 = ctx.r10.u32 & 0xF;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r3,r11,r15
	ctx.r3.u64 = ctx.r11.u64 + ctx.r15.u64;
	// bl 0x881973d8
	ctx.lr = 0x8817FA88;
	sub_881973D8(ctx, base);
loc_8817FA88:
	// lbz r10,1(r25)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r25.u32 + 1);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817fac4
	if (ctx.cr6.eq) goto loc_8817FAC4;
	// lbzx r11,r11,r17
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r6,r11,28
	ctx.r6.u64 = ctx.r11.u32 & 0xF;
	// mullw r11,r10,r4
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// bl 0x88197808
	ctx.lr = 0x8817FAC4;
	sub_88197808(ctx, base);
loc_8817FAC4:
	// rlwinm r11,r30,28,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0x3;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817faf4
	if (ctx.cr6.eq) goto loc_8817FAF4;
	// lbzx r11,r11,r17
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r6,r11,28
	ctx.r6.u64 = ctx.r11.u32 & 0xF;
	// mullw r11,r10,r4
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// bl 0x88197808
	ctx.lr = 0x8817FAF4;
	sub_88197808(ctx, base);
loc_8817FAF4:
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r14
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r14.u32, ctx.xer);
	// blt cr6,0x8817f9bc
	if (ctx.cr6.lt) goto loc_8817F9BC;
loc_8817FB08:
	// lhz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 84);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bne cr6,0x8817fb70
	if (!ctx.cr6.eq) goto loc_8817FB70;
	// lhz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// add r11,r26,r16
	ctx.r11.u64 = ctx.r26.u64 + ctx.r16.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r26,r16
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// dcbt r0,r18
	// dcbt r10,r18
	// dcbt r5,r18
	// dcbt r9,r18
loc_8817FB70:
	// lbzu r11,1(r25)
	ea = 1 + ctx.r25.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r25.u32 = ea;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// rlwinm r11,r11,28,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817fba4
	if (ctx.cr6.eq) goto loc_8817FBA4;
	// lbzx r11,r11,r17
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r6,r11,28
	ctx.r6.u64 = ctx.r11.u32 & 0xF;
	// mullw r11,r10,r4
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// bl 0x88197808
	ctx.lr = 0x8817FBA4;
	sub_88197808(ctx, base);
loc_8817FBA4:
	// lwz r11,372(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8817f8f8
	if (ctx.cr6.lt) goto loc_8817F8F8;
loc_8817FBB8:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881A5898) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x881A58A0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// li r25,8
	ctx.r25.s64 = 8;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r28,4
	ctx.r28.s64 = 4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x881a58dc
	if (ctx.cr6.eq) goto loc_881A58DC;
	// li r25,12
	ctx.r25.s64 = 12;
	// li r28,0
	ctx.r28.s64 = 0;
loc_881A58DC:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x881a58ec
	if (ctx.cr6.eq) goto loc_881A58EC;
	// addi r25,r25,-4
	ctx.r25.s64 = ctx.r25.s64 + -4;
	// b 0x881a590c
	goto loc_881A590C;
loc_881A58EC:
	// lwz r11,15928(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 15928);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A5908;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_881A590C:
	// mullw r11,r28,r30
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r30.s32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r28,r11,3
	ctx.r28.s64 = ctx.r11.s64 + 3;
	// bne cr6,0x881a5994
	if (!ctx.cr6.eq) goto loc_881A5994;
	// addic. r29,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r29.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble 0x881a5970
	if (!ctx.cr0.gt) goto loc_881A5970;
	// subf r28,r31,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r31.u64;
loc_881A592C:
	// lwz r11,15928(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 15928);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A5948;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,15932(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 15932);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r28,r31
	ctx.r3.u64 = ctx.r28.u64 + ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x881A5964;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x881a592c
	if (!ctx.cr0.eq) goto loc_881A592C;
loc_881A5970:
	// lwz r11,15928(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 15928);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A598C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A598C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_881A5994:
	// addic. r31,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r31.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble 0x881a598c
	if (!ctx.cr0.gt) goto loc_881A598C;
loc_881A599C:
	// lwz r11,15932(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 15932);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A59B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// bne 0x881a599c
	if (!ctx.cr0.eq) goto loc_881A599C;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881A77A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881A77B0;
	__savegprlr_14(ctx, base);
	// lis r23,-30678
	ctx.r23.s64 = -2010513408;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r5,r8
	ctx.r3.u64 = ctx.r5.u64 + ctx.r8.u64;
	// stw r10,76(r1)
	REX_STORE_U32(ctx.r1.u32 + 76, ctx.r10.u32);
	// add r31,r4,r8
	ctx.r31.u64 = ctx.r4.u64 + ctx.r8.u64;
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// add r29,r3,r11
	ctx.r29.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r18,100(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// neg r30,r11
	ctx.r30.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// lwz r8,24536(r23)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r23.u32 + 24536);
	// addi r28,r29,-1
	ctx.r28.s64 = ctx.r29.s64 + -1;
	// clrlwi r22,r30,29
	ctx.r22.u64 = ctx.r30.u32 & 0x7;
	// rlwinm r29,r8,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r31,r11
	ctx.r30.u64 = ctx.r31.u64 + ctx.r11.u64;
	// subf r20,r8,r31
	ctx.r20.u64 = ctx.r31.u64 - ctx.r8.u64;
	// add r31,r29,r22
	ctx.r31.u64 = ctx.r29.u64 + ctx.r22.u64;
	// subf r21,r8,r3
	ctx.r21.u64 = ctx.r3.u64 - ctx.r8.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// srawi r29,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 2;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// stw r29,-156(r1)
	REX_STORE_U32(ctx.r1.u32 + -156, ctx.r29.u32);
	// mr r15,r20
	ctx.r15.u64 = ctx.r20.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// rlwinm r31,r10,0,28,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE;
	// subf r19,r8,r11
	ctx.r19.u64 = ctx.r11.u64 - ctx.r8.u64;
	// rlwinm r31,r31,0,30,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// addi r10,r31,10
	ctx.r10.s64 = ctx.r31.s64 + 10;
	// stw r10,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r10.u32);
	// bge cr6,0x881a794c
	if (!ctx.cr6.lt) goto loc_881A794C;
	// subf r17,r5,r4
	ctx.r17.u64 = ctx.r4.u64 - ctx.r5.u64;
	// subf r16,r21,r20
	ctx.r16.u64 = ctx.r20.u64 - ctx.r21.u64;
	// subf r10,r6,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r6.u64;
loc_881A783C:
	// lbzx r6,r17,r3
	ctx.r6.u64 = REX_LOAD_U8(ctx.r17.u32 + ctx.r3.u32);
	// add r31,r19,r24
	ctx.r31.u64 = ctx.r19.u64 + ctx.r24.u64;
	// lbz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r27,0(r28)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r28.u32 + 0);
	// rldicr r29,r6,8,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// rldicr r25,r4,8,63
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r4.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r14,r27,8,63
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r27.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r26,r5,8,63
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// or r6,r29,r6
	ctx.r6.u64 = ctx.r29.u64 | ctx.r6.u64;
	// or r4,r25,r4
	ctx.r4.u64 = ctx.r25.u64 | ctx.r4.u64;
	// or r29,r14,r27
	ctx.r29.u64 = ctx.r14.u64 | ctx.r27.u64;
	// or r5,r26,r5
	ctx.r5.u64 = ctx.r26.u64 | ctx.r5.u64;
	// rldicr r25,r4,16,47
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r4.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicr r14,r29,16,47
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r29.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicr r27,r6,16,47
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicr r26,r5,16,47
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r5.u64, 16) & 0xFFFFFFFFFFFF0000;
	// or r4,r25,r4
	ctx.r4.u64 = ctx.r25.u64 | ctx.r4.u64;
	// or r6,r27,r6
	ctx.r6.u64 = ctx.r27.u64 | ctx.r6.u64;
	// or r5,r26,r5
	ctx.r5.u64 = ctx.r26.u64 | ctx.r5.u64;
	// or r25,r14,r29
	ctx.r25.u64 = ctx.r14.u64 | ctx.r29.u64;
	// rldicr r26,r4,32,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r29,r6,32,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r27,r5,32,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r14,r25,32,31
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r25.u64, 32) & 0xFFFFFFFF00000000;
	// or r26,r26,r4
	ctx.r26.u64 = ctx.r26.u64 | ctx.r4.u64;
	// or r29,r29,r6
	ctx.r29.u64 = ctx.r29.u64 | ctx.r6.u64;
	// or r27,r27,r5
	ctx.r27.u64 = ctx.r27.u64 | ctx.r5.u64;
	// or r25,r14,r25
	ctx.r25.u64 = ctx.r14.u64 | ctx.r25.u64;
	// add r4,r16,r31
	ctx.r4.u64 = ctx.r16.u64 + ctx.r31.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x881a78e8
	if (!ctx.cr6.gt) goto loc_881A78E8;
	// addi r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 1;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// addi r6,r28,1
	ctx.r6.s64 = ctx.r28.s64 + 1;
loc_881A78CC:
	// lbz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + 0);
	// stbx r5,r8,r11
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r5.u8);
	// lbz r5,0(r28)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r28.u32 + 0);
	// stbx r5,r6,r11
	REX_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881a78cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A78CC;
	// lwz r8,24536(r23)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r23.u32 + 24536);
loc_881A78E8:
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x881a7928
	if (!ctx.cr6.gt) goto loc_881A7928;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// subf r5,r24,r15
	ctx.r5.u64 = ctx.r15.u64 - ctx.r24.u64;
	// subf r4,r24,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r24.u64;
	// subf r31,r24,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r24.u64;
loc_881A7904:
	// stdx r29,r5,r11
	REX_STORE_U64(ctx.r5.u32 + ctx.r11.u32, ctx.r29.u64);
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// std r27,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r27.u64);
	// stdx r26,r4,r11
	REX_STORE_U64(ctx.r4.u32 + ctx.r11.u32, ctx.r26.u64);
	// stdx r25,r31,r11
	REX_STORE_U64(ctx.r31.u32 + ctx.r11.u32, ctx.r25.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r8,24536(r23)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r23.u32 + 24536);
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x881a7904
	if (ctx.cr6.lt) goto loc_881A7904;
loc_881A7928:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r15,r15,r18
	ctx.r15.u64 = ctx.r15.u64 + ctx.r18.u64;
	// add r24,r24,r18
	ctx.r24.u64 = ctx.r24.u64 + ctx.r18.u64;
	// add r3,r3,r18
	ctx.r3.u64 = ctx.r3.u64 + ctx.r18.u64;
	// add r30,r30,r18
	ctx.r30.u64 = ctx.r30.u64 + ctx.r18.u64;
	// add r28,r28,r18
	ctx.r28.u64 = ctx.r28.u64 + ctx.r18.u64;
	// bne 0x881a783c
	if (!ctx.cr0.eq) goto loc_881A783C;
	// lwz r10,-160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// lwz r29,-156(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -156);
loc_881A794C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x881a79c0
	if (ctx.cr6.eq) goto loc_881A79C0;
	// mullw r11,r10,r18
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r18.s32);
	// subf r8,r11,r20
	ctx.r8.u64 = ctx.r20.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881a79c0
	if (!ctx.cr6.gt) goto loc_881A79C0;
	// subf r11,r20,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r20.u64;
	// neg r30,r18
	ctx.r30.s64 = static_cast<int64_t>(-ctx.r18.u64);
	// add r6,r11,r21
	ctx.r6.u64 = ctx.r11.u64 + ctx.r21.u64;
	// subf r9,r8,r21
	ctx.r9.u64 = ctx.r21.u64 - ctx.r8.u64;
	// subf r31,r21,r20
	ctx.r31.u64 = ctx.r20.u64 - ctx.r21.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_881A797C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x881a79ac
	if (!ctx.cr6.gt) goto loc_881A79AC;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// add r5,r31,r9
	ctx.r5.u64 = ctx.r31.u64 + ctx.r9.u64;
	// subf r4,r8,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r8.u64;
loc_881A7994:
	// lwzx r28,r11,r5
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lwzx r28,r11,r9
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stwx r28,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r28.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x881a7994
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A7994;
loc_881A79AC:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// add r8,r8,r18
	ctx.r8.u64 = ctx.r8.u64 + ctx.r18.u64;
	// add r6,r6,r18
	ctx.r6.u64 = ctx.r6.u64 + ctx.r18.u64;
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// bne 0x881a797c
	if (!ctx.cr0.eq) goto loc_881A797C;
loc_881A79C0:
	// lwz r11,76(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881a7a50
	if (ctx.cr6.eq) goto loc_881A7A50;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// subf r8,r18,r15
	ctx.r8.u64 = ctx.r15.u64 - ctx.r18.u64;
	// subf r9,r18,r24
	ctx.r9.u64 = ctx.r24.u64 - ctx.r18.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// neg r11,r7
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// beq cr6,0x881a79ec
	if (ctx.cr6.eq) goto loc_881A79EC;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// b 0x881a79f0
	goto loc_881A79F0;
loc_881A79EC:
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
loc_881A79F0:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881a7a50
	if (!ctx.cr6.gt) goto loc_881A7A50;
	// neg r5,r18
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r18.u64);
	// subf r10,r15,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r15.u64;
	// subf r6,r9,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r9.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_881A7A0C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x881a7a3c
	if (!ctx.cr6.gt) goto loc_881A7A3C;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// add r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 + ctx.r6.u64;
	// subf r8,r15,r24
	ctx.r8.u64 = ctx.r24.u64 - ctx.r15.u64;
loc_881A7A24:
	// lwzx r4,r9,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r3,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x881a7a24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A7A24;
loc_881A7A3C:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r15,r15,r18
	ctx.r15.u64 = ctx.r15.u64 + ctx.r18.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r24,r24,r18
	ctx.r24.u64 = ctx.r24.u64 + ctx.r18.u64;
	// bne 0x881a7a0c
	if (!ctx.cr0.eq) goto loc_881A7A0C;
loc_881A7A50:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881AB9F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881AB9F8;
	__savegprlr_14(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r15,128(r3)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r14,132(r3)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r11,3772(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3772);
	// lwz r27,156(r3)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// lwz r26,160(r3)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r15,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r15.u32);
	// stw r14,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r14.u32);
	// bne cr6,0x881aba30
	if (!ctx.cr6.eq) goto loc_881ABA30;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881ABA30:
	// lwz r8,3772(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3772);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r9,220(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r6,22144(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 22144);
	// lwz r7,8(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// add r16,r7,r11
	ctx.r16.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r17,r9,r10
	ctx.r17.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r23,r8,r11
	ctx.r23.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r16,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r16.u32);
	// bne cr6,0x881aba94
	if (!ctx.cr6.eq) goto loc_881ABA94;
	// lwz r28,22160(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 22160);
	// lwz r29,22168(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 22168);
	// lwz r30,22164(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 22164);
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r29,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r22,22148(r31)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r31.u32 + 22148);
	// lwz r21,22152(r31)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r31.u32 + 22152);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r20,22156(r31)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r31.u32 + 22156);
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r9,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// b 0x881abacc
	goto loc_881ABACC;
loc_881ABA94:
	// lwz r9,15692(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 15692);
	// lwz r10,15716(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15716);
	// lwz r7,15708(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 15708);
	// add r22,r9,r4
	ctx.r22.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lwz r11,15688(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15688);
	// lwz r8,15640(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 15640);
	// lwz r9,15644(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 15644);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r28,15684(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 15684);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// add r21,r8,r22
	ctx.r21.u64 = ctx.r8.u64 + ctx.r22.u64;
	// stw r7,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// add r20,r9,r22
	ctx.r20.u64 = ctx.r9.u64 + ctx.r22.u64;
	// stw r10,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
loc_881ABACC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// bl 0x8814d328
	ctx.lr = 0x881ABAD8;
	sub_8814D328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881abae8
	if (ctx.cr6.eq) goto loc_881ABAE8;
	// lwz r27,15372(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 15372);
	// lwz r26,15376(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 15376);
loc_881ABAE8:
	// lwz r11,15960(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15960);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881abb70
	if (ctx.cr6.eq) goto loc_881ABB70;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r7,96(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bctrl 
	ctx.lr = 0x881ABB14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,15960(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15960);
	// rlwinm r28,r27,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r7,108(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm r27,r26,31,1,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x881ABB40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,15960(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15960);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r7,108(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x881ABB64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881ABB70:
	// li r19,0
	ctx.r19.s64 = 0;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x881abd64
	if (ctx.cr6.eq) goto loc_881ABD64;
loc_881ABB7C:
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// li r18,0
	ctx.r18.s64 = 0;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x881abd28
	if (ctx.cr6.eq) goto loc_881ABD28;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// subf r27,r23,r16
	ctx.r27.u64 = ctx.r16.u64 - ctx.r23.u64;
	// subf r26,r23,r20
	ctx.r26.u64 = ctx.r20.u64 - ctx.r23.u64;
	// subf r25,r23,r21
	ctx.r25.u64 = ctx.r21.u64 - ctx.r23.u64;
	// subf r24,r17,r22
	ctx.r24.u64 = ctx.r22.u64 - ctx.r17.u64;
loc_881ABBA0:
	// addi r29,r15,-1
	ctx.r29.s64 = ctx.r15.s64 + -1;
	// cmplw cr6,r18,r29
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x881abc08
	if (ctx.cr6.eq) goto loc_881ABC08;
	// addi r11,r14,-1
	ctx.r11.s64 = ctx.r14.s64 + -1;
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x881abc08
	if (ctx.cr6.eq) goto loc_881ABC08;
	// lwz r11,15688(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15688);
	// add r9,r27,r30
	ctx.r9.u64 = ctx.r27.u64 + ctx.r30.u64;
	// lwz r10,15948(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15948);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r29,15684(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 15684);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r14,108(r31)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// add r6,r26,r30
	ctx.r6.u64 = ctx.r26.u64 + ctx.r30.u64;
	// add r5,r25,r30
	ctx.r5.u64 = ctx.r25.u64 + ctx.r30.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// add r4,r24,r28
	ctx.r4.u64 = ctx.r24.u64 + ctx.r28.u64;
	// stw r10,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r14,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// bctrl 
	ctx.lr = 0x881ABC04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x881abd10
	goto loc_881ABD10;
loc_881ABC08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8814d328
	ctx.lr = 0x881ABC10;
	sub_8814D328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881abc58
	if (ctx.cr6.eq) goto loc_881ABC58;
	// cmplw cr6,r18,r29
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x881abc28
	if (ctx.cr6.eq) goto loc_881ABC28;
	// li r29,16
	ctx.r29.s64 = 16;
	// b 0x881abc38
	goto loc_881ABC38;
loc_881ABC28:
	// lwz r11,15372(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15372);
	// lwz r10,15380(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15380);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
loc_881ABC38:
	// addi r11,r14,-1
	ctx.r11.s64 = ctx.r14.s64 + -1;
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x881abc4c
	if (ctx.cr6.eq) goto loc_881ABC4C;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x881abcb4
	goto loc_881ABCB4;
loc_881ABC4C:
	// lwz r11,15384(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15384);
	// lwz r10,15376(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15376);
	// b 0x881abc94
	goto loc_881ABC94;
loc_881ABC58:
	// cmplw cr6,r18,r29
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x881abc68
	if (ctx.cr6.eq) goto loc_881ABC68;
	// li r29,16
	ctx.r29.s64 = 16;
	// b 0x881abc78
	goto loc_881ABC78;
loc_881ABC68:
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r10,180(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
loc_881ABC78:
	// addi r11,r14,-1
	ctx.r11.s64 = ctx.r14.s64 + -1;
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x881abc8c
	if (ctx.cr6.eq) goto loc_881ABC8C;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x881abcb4
	goto loc_881ABCB4;
loc_881ABC8C:
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
loc_881ABC94:
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// subfic r11,r7,16
	ctx.xer.ca = ctx.r7.u32 <= 16;
	ctx.r11.u64 = static_cast<uint64_t>(16) - ctx.r7.u64;
	// srawi r6,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 31;
	// xor r5,r10,r6
	ctx.r5.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// subf r10,r6,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r6.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_881ABCB4:
	// lwz r16,15688(r31)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r31.u32 + 15688);
	// add r9,r27,r30
	ctx.r9.u64 = ctx.r27.u64 + ctx.r30.u64;
	// lwz r10,15952(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15952);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r15,15684(r31)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r31.u32 + 15684);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r14,108(r31)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// add r6,r26,r30
	ctx.r6.u64 = ctx.r26.u64 + ctx.r30.u64;
	// add r5,r25,r30
	ctx.r5.u64 = ctx.r25.u64 + ctx.r30.u64;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r16,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r16.u32);
	// add r4,r24,r28
	ctx.r4.u64 = ctx.r24.u64 + ctx.r28.u64;
	// stw r10,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r16,148(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r15,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r15.u32);
	// stw r14,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// bctrl 
	ctx.lr = 0x881ABD08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r16,144(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r15,152(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
loc_881ABD10:
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// lwz r14,128(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r18,r15
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x881abba0
	if (ctx.cr6.lt) goto loc_881ABBA0;
loc_881ABD28:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r9,132(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// add r16,r11,r16
	ctx.r16.u64 = ctx.r11.u64 + ctx.r16.u64;
	// lwz r8,136(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// add r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lwz r7,140(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// add r22,r9,r22
	ctx.r22.u64 = ctx.r9.u64 + ctx.r22.u64;
	// add r17,r10,r17
	ctx.r17.u64 = ctx.r10.u64 + ctx.r17.u64;
	// stw r16,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r16.u32);
	// add r21,r8,r21
	ctx.r21.u64 = ctx.r8.u64 + ctx.r21.u64;
	// add r20,r7,r20
	ctx.r20.u64 = ctx.r7.u64 + ctx.r20.u64;
	// cmplw cr6,r19,r14
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r14.u32, ctx.xer);
	// blt cr6,0x881abb7c
	if (ctx.cr6.lt) goto loc_881ABB7C;
loc_881ABD64:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881B10E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x881B10E8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881b1184
	if (!ctx.cr6.gt) goto loc_881B1184;
	// lwz r27,260(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// subf r30,r11,r6
	ctx.r30.u64 = ctx.r6.u64 - ctx.r11.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_881B1120:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x881b1144
	if (!ctx.cr6.gt) goto loc_881B1144;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_881B1134:
	// lbzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x881b1134
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B1134;
loc_881B1144:
	// bl 0x881b0d38
	ctx.lr = 0x881B1148;
	sub_881B0D38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x881b1178
	if (!ctx.cr6.gt) goto loc_881B1178;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
loc_881B1160:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stbx r8,r9,r31
	REX_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u8);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bdnz 0x881b1160
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B1160;
loc_881B1178:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// bne 0x881b1120
	if (!ctx.cr0.eq) goto loc_881B1120;
loc_881B1184:
	// lwz r29,252(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// lwz r27,268(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r4,244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x881b1208
	if (!ctx.cr6.gt) goto loc_881B1208;
	// subf r30,r28,r26
	ctx.r30.u64 = ctx.r26.u64 - ctx.r28.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_881B11A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x881b11c8
	if (!ctx.cr6.gt) goto loc_881B11C8;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_881B11B8:
	// lbzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x881b11b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B11B8;
loc_881B11C8:
	// bl 0x881b0d38
	ctx.lr = 0x881B11CC;
	sub_881B0D38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x881b11fc
	if (!ctx.cr6.gt) goto loc_881B11FC;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
loc_881B11E4:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stbx r8,r9,r31
	REX_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u8);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bdnz 0x881b11e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B11E4;
loc_881B11FC:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// bne 0x881b11a4
	if (!ctx.cr0.eq) goto loc_881B11A4;
loc_881B1208:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x881b127c
	if (!ctx.cr6.gt) goto loc_881B127C;
	// subf r30,r25,r24
	ctx.r30.u64 = ctx.r24.u64 - ctx.r25.u64;
loc_881B1218:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x881b123c
	if (!ctx.cr6.gt) goto loc_881B123C;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_881B122C:
	// lbzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x881b122c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B122C;
loc_881B123C:
	// bl 0x881b0d38
	ctx.lr = 0x881B1240;
	sub_881B0D38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x881b1270
	if (!ctx.cr6.gt) goto loc_881B1270;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
loc_881B1258:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stbx r8,r9,r31
	REX_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u8);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bdnz 0x881b1258
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B1258;
loc_881B1270:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// bne 0x881b1218
	if (!ctx.cr0.eq) goto loc_881B1218;
loc_881B127C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881B2D30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881B2D38;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r30,332(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// stw r4,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r4.u32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// stw r5,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// stw r8,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r8.u32);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// stw r9,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r9.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x881b308c
	if (!ctx.cr6.gt) goto loc_881B308C;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r7,-3
	ctx.r4.s64 = ctx.r7.s64 + -3;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r10,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r9,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r9.u64;
	// addi r19,r7,-4
	ctx.r19.s64 = ctx.r7.s64 + -4;
	// addi r8,r7,-2
	ctx.r8.s64 = ctx.r7.s64 + -2;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r7,-8
	ctx.r31.s64 = ctx.r7.s64 + -8;
	// addi r29,r7,-6
	ctx.r29.s64 = ctx.r7.s64 + -6;
	// rlwinm r15,r4,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r9,r27
	ctx.r6.u64 = ctx.r27.u64 - ctx.r9.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r16,r19,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r18,r5,r30
	ctx.r18.u64 = ctx.r5.u64 + ctx.r30.u64;
	// mullw r17,r31,r10
	ctx.r17.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r10.s32);
	// mullw r22,r8,r10
	ctx.r22.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// mullw r21,r19,r10
	ctx.r21.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r10.s32);
	// mullw r20,r29,r10
	ctx.r20.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r10.s32);
	// add r23,r9,r11
	ctx.r23.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r27,255
	ctx.r27.s64 = 255;
loc_881B2DD0:
	// lbz r8,0(r23)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r23.u32 + 0);
	// add r3,r6,r23
	ctx.r3.u64 = ctx.r6.u64 + ctx.r23.u64;
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r19,4
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 4, ctx.xer);
	// rotlwi r31,r8,1
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lbzx r29,r6,r23
	ctx.r29.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r23.u32);
	// mulli r24,r5,34
	ctx.r24.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(34));
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r5,r5,r23
	ctx.r5.u64 = ctx.r5.u64 + ctx.r23.u64;
	// subf r8,r8,r24
	ctx.r8.u64 = ctx.r24.u64 - ctx.r8.u64;
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r8,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 5;
	// stw r8,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r29,0(r23)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r23.u32 + 0);
	// rotlwi r24,r29,3
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r29.u32, 3);
	// mulli r31,r8,25
	ctx.r31.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(25));
	// subf r8,r29,r24
	ctx.r8.u64 = ctx.r24.u64 - ctx.r29.u64;
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r8,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 5;
	// stw r8,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// lbzx r8,r6,r23
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r23.u32);
	// lbz r24,0(r23)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r23.u32 + 0);
	// lbz r29,0(r5)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// lbz r31,0(r11)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r31,r31,1
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// subf r8,r8,r31
	ctx.r8.u64 = ctx.r31.u64 - ctx.r8.u64;
	// rotlwi r14,r24,3
	ctx.r14.u64 = __builtin_rotateleft32(ctx.r24.u32, 3);
	// rlwinm r31,r8,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r24,r24,r14
	ctx.r24.u64 = ctx.r14.u64 - ctx.r24.u64;
	// add r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 + ctx.r31.u64;
	// rlwinm r8,r24,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r8,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 5;
	// stw r8,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// lbzx r8,r6,r23
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r23.u32);
	// lbz r24,0(r11)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r31,0(r23)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r23.u32 + 0);
	// rotlwi r14,r31,3
	ctx.r14.u64 = __builtin_rotateleft32(ctx.r31.u32, 3);
	// rotlwi r29,r8,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// subf r31,r31,r14
	ctx.r31.u64 = ctx.r14.u64 - ctx.r31.u64;
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// subf r8,r24,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r24.u64;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r8,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 5;
	// stw r8,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// ble cr6,0x881b2f74
	if (!ctx.cr6.gt) goto loc_881B2F74;
	// addi r8,r19,-5
	ctx.r8.s64 = ctx.r19.s64 + -5;
	// rlwinm r31,r10,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r28,r9,r31
	ctx.r28.u64 = ctx.r31.u64 - ctx.r9.u64;
	// addi r29,r8,1
	ctx.r29.s64 = ctx.r8.s64 + 1;
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// subf r27,r9,r11
	ctx.r27.u64 = ctx.r11.u64 - ctx.r9.u64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// add r28,r28,r11
	ctx.r28.u64 = ctx.r28.u64 + ctx.r11.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_881B2ED4:
	// lbz r29,0(r8)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// lbz r25,0(r3)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// rotlwi r29,r29,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// lbz r24,0(r5)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// rotlwi r14,r25,3
	ctx.r14.u64 = __builtin_rotateleft32(ctx.r25.u32, 3);
	// lbzux r26,r28,r9
	ea = ctx.r28.u32 + ctx.r9.u32;
	ctx.r26.u64 = REX_LOAD_U8(ea);
	ctx.r28.u32 = ea;
	// subf r29,r24,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r24.u64;
	// subf r25,r25,r14
	ctx.r25.u64 = ctx.r14.u64 - ctx.r25.u64;
	// rlwinm r24,r29,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r25,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r29,r24
	ctx.r29.u64 = ctx.r29.u64 + ctx.r24.u64;
	// add r29,r29,r25
	ctx.r29.u64 = ctx.r29.u64 + ctx.r25.u64;
	// add r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 + ctx.r26.u64;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// srawi r29,r29,5
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1F) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 5;
	// stw r29,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// lbz r29,0(r8)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r24,0(r3)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// lbzux r26,r27,r9
	ea = ctx.r27.u32 + ctx.r9.u32;
	ctx.r26.u64 = REX_LOAD_U8(ea);
	ctx.r27.u32 = ea;
	// lbz r25,0(r5)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// rotlwi r25,r25,1
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r25.u32, 1);
	// subf r29,r29,r25
	ctx.r29.u64 = ctx.r25.u64 - ctx.r29.u64;
	// rotlwi r14,r24,3
	ctx.r14.u64 = __builtin_rotateleft32(ctx.r24.u32, 3);
	// rlwinm r25,r29,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r24,r24,r14
	ctx.r24.u64 = ctx.r14.u64 - ctx.r24.u64;
	// add r29,r29,r25
	ctx.r29.u64 = ctx.r29.u64 + ctx.r25.u64;
	// rlwinm r25,r24,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r29,r29,r25
	ctx.r29.u64 = ctx.r29.u64 + ctx.r25.u64;
	// add r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 + ctx.r26.u64;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// srawi r29,r29,5
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1F) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 5;
	// stwu r29,8(r31)
	ea = 8 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r31.u32 = ea;
	// bdnz 0x881b2ed4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B2ED4;
	// lwz r28,80(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r27,255
	ctx.r27.s64 = 255;
	// lwz r25,300(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r26,308(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
loc_881B2F74:
	// lbzx r3,r21,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r11.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lbzx r8,r20,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r20.u32 + ctx.r11.u32);
	// rotlwi r31,r3,3
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r3.u32, 3);
	// lbzx r29,r22,r11
	ctx.r29.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r11.u32);
	// rotlwi r5,r8,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// subf r3,r3,r31
	ctx.r3.u64 = ctx.r31.u64 - ctx.r3.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// rlwinm r5,r3,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// subf r8,r29,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r29.u64;
	// addi r5,r8,8
	ctx.r5.s64 = ctx.r8.s64 + 8;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r8,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 5;
	// stwx r8,r16,r30
	REX_STORE_U32(ctx.r16.u32 + ctx.r30.u32, ctx.r8.u32);
	// lbzx r5,r20,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r20.u32 + ctx.r11.u32);
	// lbzx r31,r21,r11
	ctx.r31.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r11.u32);
	// lbzx r3,r17,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r17.u32 + ctx.r11.u32);
	// lbzx r8,r22,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r11.u32);
	// rotlwi r8,r8,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// rotlwi r29,r31,3
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r31.u32, 3);
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r31,r31,r29
	ctx.r31.u64 = ctx.r29.u64 - ctx.r31.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r5,r8,16
	ctx.r5.s64 = ctx.r8.s64 + 16;
	// srawi r3,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 5;
	// stwx r3,r15,r30
	REX_STORE_U32(ctx.r15.u32 + ctx.r30.u32, ctx.r3.u32);
	// lbzx r8,r22,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r11.u32);
	// lbzx r5,r21,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r11.u32);
	// rotlwi r3,r5,3
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 3);
	// subf r5,r5,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r5.u64;
	// mulli r8,r8,25
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(25));
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r5,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 5;
	// stwx r5,r4,r30
	REX_STORE_U32(ctx.r4.u32 + ctx.r30.u32, ctx.r5.u32);
	// lbzx r3,r22,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r11.u32);
	// lbzx r8,r21,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r11.u32);
	// rotlwi r5,r8,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lbzx r5,r20,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r20.u32 + ctx.r11.u32);
	// mulli r3,r3,34
	ctx.r3.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(34));
	// subf r8,r8,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r8.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r5,r8,16
	ctx.r5.s64 = ctx.r8.s64 + 16;
	// srawi r3,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 5;
	// stw r3,-4(r18)
	REX_STORE_U32(ctx.r18.u32 + -4, ctx.r3.u32);
	// ble cr6,0x881b3078
	if (!ctx.cr6.gt) goto loc_881B3078;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// subf r3,r10,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_881B3050:
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// ble cr6,0x881b3068
	if (!ctx.cr6.gt) goto loc_881B3068;
	// rlwinm r8,r8,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 & ctx.r27.u64;
loc_881B3068:
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// stbux r8,r3,r10
	ea = ctx.r3.u32 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r3.u32 = ea;
	// bdnz 0x881b3050
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B3050;
loc_881B3078:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// bne 0x881b2dd0
	if (!ctx.cr0.eq) goto loc_881B2DD0;
loc_881B308C:
	// lwz r7,324(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x881b30e8
	if (!ctx.cr6.gt) goto loc_881B30E8;
	// lwz r3,268(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_881B30A0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8813acb0
	ctx.lr = 0x881B30B0;
	sub_8813ACB0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne 0x881b30a0
	if (!ctx.cr0.eq) goto loc_881B30A0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x881b30e8
	if (!ctx.cr6.gt) goto loc_881B30E8;
	// lwz r3,276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_881B30CC:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8813acb0
	ctx.lr = 0x881B30DC;
	sub_8813ACB0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne 0x881b30cc
	if (!ctx.cr0.eq) goto loc_881B30CC;
loc_881B30E8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881C1C38) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x881C1C40;
	__savegprlr_29(ctx, base);
	// rlwinm r30,r6,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r6,0(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r31,0(r4)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r29,r7,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r6,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	// srawi r10,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 2;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r7,140(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// srawi r9,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 2;
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// beq cr6,0x881c1c94
	if (ctx.cr6.eq) goto loc_881C1C94;
	// li r10,-17
	ctx.r10.s64 = -17;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x881c1c98
	goto loc_881C1C98;
loc_881C1C94:
	// li r10,-18
	ctx.r10.s64 = -18;
loc_881C1C98:
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x881c1ca8
	if (!ctx.cr6.lt) goto loc_881C1CA8;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// b 0x881c1cb4
	goto loc_881C1CB4;
loc_881C1CA8:
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x881c1cb8
	if (!ctx.cr6.gt) goto loc_881C1CB8;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_881C1CB4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_881C1CB8:
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x881c1ccc
	if (!ctx.cr6.lt) goto loc_881C1CCC;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x881c1ce8
	goto loc_881C1CE8;
loc_881C1CCC:
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x881c1ce0
	if (!ctx.cr6.gt) goto loc_881C1CE0;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x881c1ce8
	goto loc_881C1CE8;
loc_881C1CE0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881c1d10
	if (ctx.cr6.eq) goto loc_881C1D10;
loc_881C1CE8:
	// subf r11,r30,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r30.u64;
	// subf r10,r29,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r29.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r8,r31,30
	ctx.r8.u64 = ctx.r31.u32 & 0x3;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r6,30
	ctx.r10.u64 = ctx.r6.u32 & 0x3;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stw r8,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
loc_881C1D10:
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881C35A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x881C35A8;
	__savegprlr_19(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// lhz r30,6(r8)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r8.u32 + 6);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r26,4(r8)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r8.u32 + 4);
	// subf r8,r4,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r4.u64;
	// add r29,r4,r11
	ctx.r29.u64 = ctx.r4.u64 + ctx.r11.u64;
	// extsh r28,r30
	ctx.r28.s64 = ctx.r30.s16;
	// lhz r3,2(r31)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// rlwinm r27,r4,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r26,r26
	ctx.r26.s64 = ctx.r26.s16;
	// extsh r25,r3
	ctx.r25.s64 = ctx.r3.s16;
	// extsh r24,r11
	ctx.r24.s64 = ctx.r11.s16;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r23,r8,-1
	ctx.r23.s64 = ctx.r8.s64 + -1;
loc_881C35E8:
	// li r3,11
	ctx.r3.s64 = 11;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
loc_881C35F8:
	// lbzx r3,r11,r27
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// add r22,r30,r8
	ctx.r22.u64 = ctx.r30.u64 + ctx.r8.u64;
	// lbzx r31,r11,r29
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// addi r21,r1,16
	ctx.r21.s64 = ctx.r1.s64 + 16;
	// mullw r3,r3,r26
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r26.s32);
	// lbzx r20,r11,r4
	ctx.r20.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbz r19,0(r11)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mullw r31,r31,r28
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r28.s32);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// mullw r31,r20,r25
	ctx.r31.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r25.s32);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// mullw r31,r19,r24
	ctx.r31.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r24.s32);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// rlwinm r31,r22,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// sraw r3,r3,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r3.s64 = ctx.r3.s32 >> temp.u32;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sthx r3,r31,r21
	REX_STORE_U16(ctx.r31.u32 + ctx.r21.u32, ctx.r3.u16);
	// bdnz 0x881c35f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881C35F8;
	// addi r30,r30,35
	ctx.r30.s64 = ctx.r30.s64 + 35;
	// add r23,r23,r4
	ctx.r23.u64 = ctx.r23.u64 + ctx.r4.u64;
	// cmpwi cr6,r30,280
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 280, ctx.xer);
	// blt cr6,0x881c35e8
	if (ctx.cr6.lt) goto loc_881C35E8;
	// lwz r3,772(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 772);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r5,2
	ctx.r29.s64 = ctx.r5.s64 + 2;
loc_881C3668:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r28,r29,-1
	ctx.r28.s64 = ctx.r29.s64 + -1;
	// addi r26,r29,1
	ctx.r26.s64 = ctx.r29.s64 + 1;
	// addi r10,r1,22
	ctx.r10.s64 = ctx.r1.s64 + 22;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r8,r1,20
	ctx.r8.s64 = ctx.r1.s64 + 20;
loc_881C3684:
	// add r11,r27,r9
	ctx.r11.u64 = ctx.r27.u64 + ctx.r9.u64;
	// lhz r5,0(r7)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// addi r4,r1,16
	ctx.r4.s64 = ctx.r1.s64 + 16;
	// lhz r31,4(r7)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r7.u32 + 4);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r30,6(r7)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r7.u32 + 6);
	// addi r25,r1,18
	ctx.r25.s64 = ctx.r1.s64 + 18;
	// lhz r24,2(r7)
	ctx.r24.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// lhzx r4,r11,r4
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// extsh r24,r24
	ctx.r24.s64 = ctx.r24.s16;
	// lhzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lhzx r25,r11,r25
	ctx.r25.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r25.u32);
	// mullw r5,r4,r5
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// mullw r31,r31,r8
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r8.s32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// mullw r31,r30,r10
	ctx.r31.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// extsh r4,r25
	ctx.r4.s64 = ctx.r25.s16;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// mullw r31,r24,r4
	ctx.r31.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r4.s32);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// srawi. r5,r5,7
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x881c3704
	if (!ctx.cr0.lt) goto loc_881C3704;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x881c3710
	goto loc_881C3710;
loc_881C3704:
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// ble cr6,0x881c3710
	if (!ctx.cr6.gt) goto loc_881C3710;
	// li r5,255
	ctx.r5.s64 = 255;
loc_881C3710:
	// add r31,r29,r9
	ctx.r31.u64 = ctx.r29.u64 + ctx.r9.u64;
	// addi r30,r1,24
	ctx.r30.s64 = ctx.r1.s64 + 24;
	// stb r5,-2(r31)
	REX_STORE_U8(ctx.r31.u32 + -2, ctx.r5.u8);
	// lhz r5,4(r7)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + 4);
	// lhz r25,6(r7)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r7.u32 + 6);
	// lhz r24,2(r7)
	ctx.r24.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// lhz r31,0(r7)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lhzx r30,r11,r30
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// mullw r31,r31,r4
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r4.s32);
	// mullw r4,r5,r10
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// extsh r5,r30
	ctx.r5.s64 = ctx.r30.s16;
	// extsh r30,r25
	ctx.r30.s64 = ctx.r25.s16;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// mullw r31,r30,r5
	ctx.r31.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r5.s32);
	// extsh r30,r24
	ctx.r30.s64 = ctx.r24.s16;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// mullw r31,r30,r8
	ctx.r31.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r8.s32);
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// srawi. r4,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x881c3774
	if (!ctx.cr0.lt) goto loc_881C3774;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x881c3780
	goto loc_881C3780;
loc_881C3774:
	// cmpwi cr6,r4,255
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 255, ctx.xer);
	// ble cr6,0x881c3780
	if (!ctx.cr6.gt) goto loc_881C3780;
	// li r4,255
	ctx.r4.s64 = 255;
loc_881C3780:
	// stbx r4,r28,r9
	REX_STORE_U8(ctx.r28.u32 + ctx.r9.u32, ctx.r4.u8);
	// addi r31,r1,26
	ctx.r31.s64 = ctx.r1.s64 + 26;
	// lhz r23,4(r7)
	ctx.r23.u64 = REX_LOAD_U16(ctx.r7.u32 + 4);
	// lhz r4,0(r7)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// extsh r24,r4
	ctx.r24.s64 = ctx.r4.s16;
	// lhzx r31,r11,r31
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// mullw r8,r24,r8
	ctx.r8.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r8.s32);
	// lhz r25,6(r7)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r7.u32 + 6);
	// lhz r30,2(r7)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// extsh r4,r31
	ctx.r4.s64 = ctx.r31.s16;
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// extsh r31,r23
	ctx.r31.s64 = ctx.r23.s16;
	// extsh r22,r30
	ctx.r22.s64 = ctx.r30.s16;
	// mullw r31,r31,r5
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r5.s32);
	// mullw r30,r25,r4
	ctx.r30.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r4.s32);
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// mullw r31,r22,r10
	ctx.r31.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r10.s32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// srawi. r8,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x881c37e0
	if (!ctx.cr0.lt) goto loc_881C37E0;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x881c37ec
	goto loc_881C37EC;
loc_881C37E0:
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// ble cr6,0x881c37ec
	if (!ctx.cr6.gt) goto loc_881C37EC;
	// li r8,255
	ctx.r8.s64 = 255;
loc_881C37EC:
	// stbx r8,r29,r9
	REX_STORE_U8(ctx.r29.u32 + ctx.r9.u32, ctx.r8.u8);
	// addi r31,r1,28
	ctx.r31.s64 = ctx.r1.s64 + 28;
	// lhzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhz r8,0(r7)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// lhz r25,2(r7)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// extsh r24,r8
	ctx.r24.s64 = ctx.r8.s16;
	// lhz r8,4(r7)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + 4);
	// lhz r30,6(r7)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r7.u32 + 6);
	// extsh r31,r25
	ctx.r31.s64 = ctx.r25.s16;
	// extsh r25,r8
	ctx.r25.s64 = ctx.r8.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// mullw r8,r31,r5
	ctx.r8.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r5.s32);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// mullw r5,r25,r4
	ctx.r5.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mullw r10,r24,r10
	ctx.r10.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// srawi. r11,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x881c384c
	if (!ctx.cr0.lt) goto loc_881C384C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x881c3858
	goto loc_881C3858;
loc_881C384C:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x881c3858
	if (!ctx.cr6.gt) goto loc_881C3858;
	// li r11,255
	ctx.r11.s64 = 255;
loc_881C3858:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r1,22
	ctx.r10.s64 = ctx.r1.s64 + 22;
	// stbx r11,r26,r9
	REX_STORE_U8(ctx.r26.u32 + ctx.r9.u32, ctx.r11.u8);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r8,r1,20
	ctx.r8.s64 = ctx.r1.s64 + 20;
	// bdnz 0x881c3684
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881C3684;
	// addi r27,r27,35
	ctx.r27.s64 = ctx.r27.s64 + 35;
	// add r29,r29,r6
	ctx.r29.u64 = ctx.r29.u64 + ctx.r6.u64;
	// cmpwi cr6,r27,280
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 280, ctx.xer);
	// blt cr6,0x881c3668
	if (ctx.cr6.lt) goto loc_881C3668;
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881C9618) {
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
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// ble cr6,0x881c9634
	if (!ctx.cr6.gt) goto loc_881C9634;
	// li r4,3
	ctx.r4.s64 = 3;
loc_881C9634:
	// lwz r11,21704(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r11,r11,14136
	ctx.r11.s64 = ctx.r11.s64 + 14136;
	// bne cr6,0x881c96b8
	if (!ctx.cr6.eq) goto loc_881C96B8;
	// mulli r8,r4,28
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(28));
	// addi r7,r11,-112
	ctx.r7.s64 = ctx.r11.s64 + -112;
	// addi r10,r11,-112
	ctx.r10.s64 = ctx.r11.s64 + -112;
	// addi r9,r11,-112
	ctx.r9.s64 = ctx.r11.s64 + -112;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// addi r10,r11,-112
	ctx.r10.s64 = ctx.r11.s64 + -112;
	// lwzx r5,r8,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r7,r9,8
	ctx.r7.s64 = ctx.r9.s64 + 8;
	// addi r9,r11,-112
	ctx.r9.s64 = ctx.r11.s64 + -112;
	// addi r31,r10,12
	ctx.r31.s64 = ctx.r10.s64 + 12;
	// addi r10,r11,-112
	ctx.r10.s64 = ctx.r11.s64 + -112;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stw r5,21820(r3)
	REX_STORE_U32(ctx.r3.u32 + 21820, ctx.r5.u32);
	// addi r11,r11,-112
	ctx.r11.s64 = ctx.r11.s64 + -112;
	// lwzx r6,r8,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// addi r5,r10,20
	ctx.r5.s64 = ctx.r10.s64 + 20;
	// stw r6,21824(r3)
	REX_STORE_U32(ctx.r3.u32 + 21824, ctx.r6.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwzx r10,r8,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r10,21828(r3)
	REX_STORE_U32(ctx.r3.u32 + 21828, ctx.r10.u32);
	// lwzx r7,r8,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// stw r7,21832(r3)
	REX_STORE_U32(ctx.r3.u32 + 21832, ctx.r7.u32);
	// lwzx r6,r8,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stw r6,21836(r3)
	REX_STORE_U32(ctx.r3.u32 + 21836, ctx.r6.u32);
	// lwzx r5,r8,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// stw r5,21840(r3)
	REX_STORE_U32(ctx.r3.u32 + 21840, ctx.r5.u32);
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// b 0x881c9708
	goto loc_881C9708;
loc_881C96B8:
	// mulli r10,r4,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(28));
	// lwzx r6,r10,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// stw r6,21820(r3)
	REX_STORE_U32(ctx.r3.u32 + 21820, ctx.r6.u32);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// addi r31,r11,20
	ctx.r31.s64 = ctx.r11.s64 + 20;
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r9,21824(r3)
	REX_STORE_U32(ctx.r3.u32 + 21824, ctx.r9.u32);
	// lwzx r8,r10,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stw r8,21828(r3)
	REX_STORE_U32(ctx.r3.u32 + 21828, ctx.r8.u32);
	// lwzx r7,r10,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// stw r7,21832(r3)
	REX_STORE_U32(ctx.r3.u32 + 21832, ctx.r7.u32);
	// lwzx r6,r10,r5
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// stw r6,21836(r3)
	REX_STORE_U32(ctx.r3.u32 + 21836, ctx.r6.u32);
	// lwzx r5,r10,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// stw r5,21840(r3)
	REX_STORE_U32(ctx.r3.u32 + 21840, ctx.r5.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_881C9708:
	// stw r11,21844(r3)
	REX_STORE_U32(ctx.r3.u32 + 21844, ctx.r11.u32);
	// bl 0x881c8f90
	ctx.lr = 0x881C9710;
	sub_881C8F90(ctx, base);
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

DEFINE_REX_FUNC(sub_881CA338) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x881CA340;
	__savegprlr_23(ctx, base);
	// lwz r26,100(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r23,108(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpw cr6,r26,r23
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x881ca358
	if (ctx.cr6.lt) goto loc_881CA358;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
loc_881CA358:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r31,92(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r9,0
	ctx.r9.s64 = 0;
	// subf r30,r11,r10
	ctx.r30.u64 = ctx.r10.u64 - ctx.r11.u64;
	// xoris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 ^ 2147483648;
	// subf r28,r9,r31
	ctx.r28.u64 = ctx.r31.u64 - ctx.r9.u64;
	// addc r11,r30,r11
	ctx.xer.ca = ctx.r30.u32 + ctx.r11.u32 < ctx.r30.u32;
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// xoris r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 ^ 2147483648;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addc r9,r28,r9
	ctx.xer.ca = ctx.r28.u32 + ctx.r9.u32 < ctx.r28.u32;
	ctx.r9.u64 = ctx.r28.u64 + ctx.r9.u64;
	// and r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 & ctx.r10.u64;
	// subfe r10,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r11,0
	ctx.r11.s64 = 0;
	// and r27,r10,r31
	ctx.r27.u64 = ctx.r10.u64 & ctx.r31.u64;
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x881ca620
	if (!ctx.cr6.lt) goto loc_881CA620;
	// lwz r24,84(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r24,r23
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x881ca3a8
	if (ctx.cr6.lt) goto loc_881CA3A8;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
loc_881CA3A8:
	// cmpw cr6,r30,r24
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x881ca5a8
	if (!ctx.cr6.lt) goto loc_881CA5A8;
	// cmpw cr6,r27,r24
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r24.s32, ctx.xer);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// blt cr6,0x881ca3c0
	if (ctx.cr6.lt) goto loc_881CA3C0;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_881CA3C0:
	// cmpw cr6,r26,r30
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r30.s32, ctx.xer);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// bgt cr6,0x881ca3d0
	if (ctx.cr6.gt) goto loc_881CA3D0;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_881CA3D0:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// lfd f0,1488(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 1488);
	// bge cr6,0x881ca4a0
	if (!ctx.cr6.lt) goto loc_881CA4A0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x881ca41c
	if (!ctx.cr6.gt) goto loc_881CA41C;
	// mullw. r9,r8,r30
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// ble 0x881ca414
	if (!ctx.cr0.gt) goto loc_881CA414;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r31,r3,r7
	ctx.r31.u64 = ctx.r7.u64 - ctx.r3.u64;
loc_881CA3FC:
	// lbzx r29,r31,r11
	ctx.r29.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stb r29,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// blt cr6,0x881ca3fc
	if (ctx.cr6.lt) goto loc_881CA3FC;
loc_881CA414:
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_881CA41C:
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x881ca464
	if (!ctx.cr6.lt) goto loc_881CA464;
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// add r31,r29,r4
	ctx.r31.u64 = ctx.r29.u64 + ctx.r4.u64;
	// bge cr6,0x881ca434
	if (!ctx.cr6.lt) goto loc_881CA434;
	// add r31,r29,r6
	ctx.r31.u64 = ctx.r29.u64 + ctx.r6.u64;
loc_881CA434:
	// subf r10,r11,r28
	ctx.r10.u64 = ctx.r28.u64 - ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mullw. r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x881ca45c
	if (!ctx.cr0.gt) goto loc_881CA45C;
	// add r9,r29,r3
	ctx.r9.u64 = ctx.r29.u64 + ctx.r3.u64;
loc_881CA448:
	// lbzx r30,r31,r11
	ctx.r30.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// stbx r30,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r30.u8);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881ca448
	if (ctx.cr6.lt) goto loc_881CA448;
loc_881CA45C:
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_881CA464:
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x881ca4dc
	if (!ctx.cr6.lt) goto loc_881CA4DC;
	// subf r10,r11,r27
	ctx.r10.u64 = ctx.r27.u64 - ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mullw. r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x881ca498
	if (!ctx.cr0.gt) goto loc_881CA498;
	// add r9,r29,r7
	ctx.r9.u64 = ctx.r29.u64 + ctx.r7.u64;
	// add r31,r29,r3
	ctx.r31.u64 = ctx.r29.u64 + ctx.r3.u64;
loc_881CA484:
	// lbzx r30,r9,r11
	ctx.r30.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r30,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u8);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881ca484
	if (ctx.cr6.lt) goto loc_881CA484;
loc_881CA498:
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// b 0x881ca4d8
	goto loc_881CA4D8;
loc_881CA4A0:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x881ca4dc
	if (!ctx.cr6.gt) goto loc_881CA4DC;
	// mullw. r9,r8,r27
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r27.s32);
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// ble 0x881ca4d4
	if (!ctx.cr0.gt) goto loc_881CA4D4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r31,r3,r7
	ctx.r31.u64 = ctx.r7.u64 - ctx.r3.u64;
loc_881CA4BC:
	// lbzx r30,r11,r31
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stb r30,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// blt cr6,0x881ca4bc
	if (ctx.cr6.lt) goto loc_881CA4BC;
loc_881CA4D4:
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
loc_881CA4D8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_881CA4DC:
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x881ca518
	if (!ctx.cr6.lt) goto loc_881CA518;
	// subf r10,r11,r26
	ctx.r10.u64 = ctx.r26.u64 - ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mullw. r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x881ca510
	if (!ctx.cr0.gt) goto loc_881CA510;
	// add r9,r29,r5
	ctx.r9.u64 = ctx.r29.u64 + ctx.r5.u64;
	// add r5,r29,r3
	ctx.r5.u64 = ctx.r29.u64 + ctx.r3.u64;
loc_881CA4FC:
	// lbzx r31,r9,r11
	ctx.r31.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r31,r5,r11
	REX_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r31.u8);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881ca4fc
	if (ctx.cr6.lt) goto loc_881CA4FC;
loc_881CA510:
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_881CA518:
	// cmpw cr6,r24,r26
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x881ca6c8
	if (!ctx.cr6.gt) goto loc_881CA6C8;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x881ca55c
	if (!ctx.cr6.lt) goto loc_881CA55C;
	// subf r10,r11,r25
	ctx.r10.u64 = ctx.r25.u64 - ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mullw. r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x881ca554
	if (!ctx.cr0.gt) goto loc_881CA554;
	// add r9,r29,r7
	ctx.r9.u64 = ctx.r29.u64 + ctx.r7.u64;
	// add r5,r29,r3
	ctx.r5.u64 = ctx.r29.u64 + ctx.r3.u64;
loc_881CA540:
	// lbzx r31,r9,r11
	ctx.r31.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r31,r5,r11
	REX_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r31.u8);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881ca540
	if (ctx.cr6.lt) goto loc_881CA540;
loc_881CA554:
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_881CA55C:
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x881ca6c8
	if (!ctx.cr6.lt) goto loc_881CA6C8;
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x881ca574
	if (ctx.cr6.lt) goto loc_881CA574;
	// add r6,r29,r4
	ctx.r6.u64 = ctx.r29.u64 + ctx.r4.u64;
	// b 0x881ca578
	goto loc_881CA578;
loc_881CA574:
	// add r6,r29,r6
	ctx.r6.u64 = ctx.r29.u64 + ctx.r6.u64;
loc_881CA578:
	// subf r10,r11,r24
	ctx.r10.u64 = ctx.r24.u64 - ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mullw. r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x881ca5a0
	if (!ctx.cr0.gt) goto loc_881CA5A0;
	// add r9,r29,r3
	ctx.r9.u64 = ctx.r29.u64 + ctx.r3.u64;
loc_881CA58C:
	// lbzx r5,r11,r6
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// stbx r5,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r5.u8);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881ca58c
	if (ctx.cr6.lt) goto loc_881CA58C;
loc_881CA5A0:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x881ca6c4
	goto loc_881CA6C4;
loc_881CA5A8:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x881ca5e4
	if (!ctx.cr6.gt) goto loc_881CA5E4;
	// mullw. r9,r8,r27
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r27.s32);
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// ble 0x881ca5dc
	if (!ctx.cr0.gt) goto loc_881CA5DC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r6,r3,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r3.u64;
loc_881CA5C4:
	// lbzx r4,r11,r6
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stb r4,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// blt cr6,0x881ca5c4
	if (ctx.cr6.lt) goto loc_881CA5C4;
loc_881CA5DC:
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_881CA5E4:
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x881ca6c8
	if (!ctx.cr6.lt) goto loc_881CA6C8;
	// subf r10,r11,r26
	ctx.r10.u64 = ctx.r26.u64 - ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mullw. r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x881ca618
	if (!ctx.cr0.gt) goto loc_881CA618;
	// add r9,r29,r5
	ctx.r9.u64 = ctx.r29.u64 + ctx.r5.u64;
	// add r6,r29,r3
	ctx.r6.u64 = ctx.r29.u64 + ctx.r3.u64;
loc_881CA604:
	// lbzx r5,r9,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r5,r6,r11
	REX_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r5.u8);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881ca604
	if (ctx.cr6.lt) goto loc_881CA604;
loc_881CA618:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x881ca6c4
	goto loc_881CA6C4;
loc_881CA620:
	// lwz r31,84(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r31,r23
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x881ca630
	if (ctx.cr6.lt) goto loc_881CA630;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_881CA630:
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x881ca6c8
	if (!ctx.cr6.lt) goto loc_881CA6C8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x881ca674
	if (!ctx.cr6.gt) goto loc_881CA674;
	// mullw. r9,r8,r30
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// ble 0x881ca66c
	if (!ctx.cr0.gt) goto loc_881CA66C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r5,r3,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r3.u64;
loc_881CA654:
	// lbzx r29,r11,r5
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stb r29,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// blt cr6,0x881ca654
	if (ctx.cr6.lt) goto loc_881CA654;
loc_881CA66C:
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_881CA674:
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x881ca6c8
	if (!ctx.cr6.lt) goto loc_881CA6C8;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lfd f0,1488(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 1488);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x881ca694
	if (ctx.cr6.lt) goto loc_881CA694;
	// add r6,r29,r4
	ctx.r6.u64 = ctx.r29.u64 + ctx.r4.u64;
	// b 0x881ca698
	goto loc_881CA698;
loc_881CA694:
	// add r6,r29,r6
	ctx.r6.u64 = ctx.r29.u64 + ctx.r6.u64;
loc_881CA698:
	// subf r10,r11,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mullw. r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x881ca6c0
	if (!ctx.cr0.gt) goto loc_881CA6C0;
	// add r9,r29,r3
	ctx.r9.u64 = ctx.r29.u64 + ctx.r3.u64;
loc_881CA6AC:
	// lbzx r5,r11,r6
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// stbx r5,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r5.u8);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881ca6ac
	if (ctx.cr6.lt) goto loc_881CA6AC;
loc_881CA6C0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_881CA6C4:
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
loc_881CA6C8:
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x881ca6fc
	if (!ctx.cr6.lt) goto loc_881CA6FC;
	// subf r10,r11,r23
	ctx.r10.u64 = ctx.r23.u64 - ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mullw. r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x881ca6fc
	if (!ctx.cr0.gt) goto loc_881CA6FC;
	// add r9,r29,r7
	ctx.r9.u64 = ctx.r29.u64 + ctx.r7.u64;
	// add r7,r29,r3
	ctx.r7.u64 = ctx.r29.u64 + ctx.r3.u64;
loc_881CA6E8:
	// lbzx r6,r9,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r6,r7,r11
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r6.u8);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881ca6e8
	if (ctx.cr6.lt) goto loc_881CA6E8;
loc_881CA6FC:
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881D1A40) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881D1A48;
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
	// stw r27,-264(r1)
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r27.u32);
	// stw r26,-268(r1)
	REX_STORE_U32(ctx.r1.u32 + -268, ctx.r26.u32);
	// stw r4,-248(r1)
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r4.u32);
	// ble cr6,0x881d35a8
	if (!ctx.cr6.gt) goto loc_881D35A8;
	// addi r30,r9,-1
	ctx.r30.s64 = ctx.r9.s64 + -1;
	// fsub f8,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f2.f64 - ctx.f1.f64;
	// addi r29,r10,-1
	ctx.r29.s64 = ctx.r10.s64 + -1;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r30,-316(r1)
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r30.u32);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// stw r29,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r29.u32);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// stw r8,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r8.u32);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
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
	// lfd f10,12088(r7)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r7.u32 + 12088);
	// lfd f7,8624(r6)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r6.u32 + 8624);
loc_881D1AD0:
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lwz r10,96(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f8.f64;
	// std r11,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r11.u64);
	// lfd f13,-168(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// stw r7,-312(r1)
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r7.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fmadd f12,f12,f3,f4
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f3.f64, ctx.f4.f64);
	// beq cr6,0x881d1b08
	if (ctx.cr6.eq) goto loc_881D1B08;
	// fsub f13,f3,f7
	ctx.f13.f64 = ctx.f3.f64 - ctx.f7.f64;
	// fmul f13,f13,f10
	ctx.f13.f64 = ctx.f13.f64 * ctx.f10.f64;
	// b 0x881d1b0c
	goto loc_881D1B0C;
loc_881D1B08:
	// fmr f13,f6
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f6.f64;
loc_881D1B0C:
	// fadd f13,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f13.f64 + ctx.f12.f64;
	// lwz r9,80(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r10,100(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// fmul f12,f13,f10
	ctx.f12.f64 = ctx.f13.f64 * ctx.f10.f64;
	// fctiwz f5,f13
	ctx.f5.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f5,-224(r1)
	REX_STORE_U64(ctx.r1.u32 + -224, ctx.f5.u64);
	// lwz r11,-220(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// fctiwz f2,f12
	ctx.f2.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f2,-240(r1)
	REX_STORE_U64(ctx.r1.u32 + -240, ctx.f2.u64);
	// lwz r6,-236(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// rlwinm r6,r6,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// stw r10,-260(r1)
	REX_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// std r5,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r5.u64);
	// lfd f12,-208(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// std r6,-200(r1)
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r6.u64);
	// fcfid f5,f12
	ctx.f5.f64 = double(ctx.f12.s64);
	// lfd f12,-200(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// fmsub f2,f13,f9,f5
	ctx.f2.f64 = std::fma(ctx.f13.f64, ctx.f9.f64, -ctx.f5.f64);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// fctiwz f2,f2
	ctx.f2.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f2,-224(r1)
	REX_STORE_U64(ctx.r1.u32 + -224, ctx.f2.u64);
	// lwz r9,-220(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// mullw r31,r9,r9
	ctx.r31.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// fcfid f5,f12
	ctx.f5.f64 = double(ctx.f12.s64);
	// fmsub f13,f13,f11,f5
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f11.f64, -ctx.f5.f64);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-232(r1)
	REX_STORE_U64(ctx.r1.u32 + -232, ctx.f12.u64);
	// lwz r6,-228(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// mullw r5,r6,r6
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r6.s32);
	// srawi r5,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 8;
	// mullw r6,r5,r6
	ctx.r6.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// stw r5,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r5.u32);
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// srawi r6,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r31.s32 >> 8;
	// stw r5,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r5.u32);
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// stw r6,-280(r1)
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r6.u32);
	// srawi r6,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 8;
	// stw r6,-272(r1)
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r6.u32);
	// ble cr6,0x881d2c24
	if (!ctx.cr6.gt) goto loc_881D2C24;
	// lwz r9,84(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881d2c24
	if (!ctx.cr6.lt) goto loc_881D2C24;
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,-276(r1)
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881d2e14
	if (!ctx.cr6.gt) goto loc_881D2E14;
loc_881D1BE4:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-360(r1)
	REX_STORE_U64(ctx.r1.u32 + -360, ctx.f13.u64);
	// lwz r11,-356(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -356);
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
	// stfd f13,-360(r1)
	REX_STORE_U64(ctx.r1.u32 + -360, ctx.f13.u64);
	// lwz r28,-356(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -356);
	// ble cr6,0x881d2b00
	if (!ctx.cr6.gt) goto loc_881D2B00;
	// lwz r9,80(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881d2b00
	if (!ctx.cr6.lt) goto loc_881D2B00;
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
	// stw r20,-364(r1)
	REX_STORE_U32(ctx.r1.u32 + -364, ctx.r20.u32);
	// subf r20,r3,r17
	ctx.r20.u64 = ctx.r17.u64 - ctx.r3.u64;
	// subf r19,r24,r14
	ctx.r19.u64 = ctx.r14.u64 - ctx.r24.u64;
	// lwz r17,-364(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
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
	// stw r20,-364(r1)
	REX_STORE_U32(ctx.r1.u32 + -364, ctx.r20.u32);
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
	// stw r20,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r20.u32);
	// add r19,r19,r7
	ctx.r19.u64 = ctx.r19.u64 + ctx.r7.u64;
	// subf r20,r4,r8
	ctx.r20.u64 = ctx.r8.u64 - ctx.r4.u64;
	// subf r17,r10,r18
	ctx.r17.u64 = ctx.r18.u64 - ctx.r10.u64;
	// stw r19,-284(r1)
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r19.u32);
	// subf r19,r31,r20
	ctx.r19.u64 = ctx.r20.u64 - ctx.r31.u64;
	// add r18,r17,r30
	ctx.r18.u64 = ctx.r17.u64 + ctx.r30.u64;
	// lwz r17,-364(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// add r19,r19,r10
	ctx.r19.u64 = ctx.r19.u64 + ctx.r10.u64;
	// rlwinm r20,r15,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// add r18,r18,r5
	ctx.r18.u64 = ctx.r18.u64 + ctx.r5.u64;
	// stw r19,-364(r1)
	REX_STORE_U32(ctx.r1.u32 + -364, ctx.r19.u32);
	// subf r15,r21,r20
	ctx.r15.u64 = ctx.r20.u64 - ctx.r21.u64;
	// add r20,r18,r29
	ctx.r20.u64 = ctx.r18.u64 + ctx.r29.u64;
	// mulli r18,r14,11
	ctx.r18.s64 = static_cast<int64_t>(ctx.r14.u64 * static_cast<uint64_t>(11));
	// stw r18,-308(r1)
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r18.u32);
	// rlwinm r20,r20,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// add r19,r15,r27
	ctx.r19.u64 = ctx.r15.u64 + ctx.r27.u64;
	// lwz r18,-304(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// rotlwi r16,r7,1
	ctx.r16.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// stw r20,-256(r1)
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r20.u32);
	// rlwinm r19,r19,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r3,r18
	ctx.r3.u64 = ctx.r3.u64 + ctx.r18.u64;
	// lwz r14,-284(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// stw r3,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r3.u32);
	// subf r20,r8,r31
	ctx.r20.u64 = ctx.r31.u64 - ctx.r8.u64;
	// stw r19,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r19.u32);
	// rlwinm r19,r14,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r17,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r17.u32);
	// rlwinm r17,r20,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// add r18,r16,r10
	ctx.r18.u64 = ctx.r16.u64 + ctx.r10.u64;
	// lwz r3,-364(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
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
	// lwz r23,-308(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
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
	// lwz r14,-304(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// stw r23,-308(r1)
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r23.u32);
	// subf r23,r9,r15
	ctx.r23.u64 = ctx.r15.u64 - ctx.r9.u64;
	// subf r16,r11,r7
	ctx.r16.u64 = ctx.r7.u64 - ctx.r11.u64;
	// lwz r15,-308(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// add r23,r20,r23
	ctx.r23.u64 = ctx.r20.u64 + ctx.r23.u64;
	// lwz r20,-296(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// add r15,r14,r15
	ctx.r15.u64 = ctx.r14.u64 + ctx.r15.u64;
	// stw r23,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r23.u32);
	// mulli r23,r16,11
	ctx.r23.s64 = static_cast<int64_t>(ctx.r16.u64 * static_cast<uint64_t>(11));
	// lwz r14,-256(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// lwz r16,-368(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
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
	// lwz r18,-296(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
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
	// stw r18,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r18.u32);
	// add r14,r23,r3
	ctx.r14.u64 = ctx.r23.u64 + ctx.r3.u64;
	// lwz r3,-368(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// mullw r19,r3,r28
	ctx.r19.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r28.s32);
	// lwz r3,-300(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
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
	// lwz r31,-336(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
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
	// ble cr6,0x881d20a0
	if (!ctx.cr6.gt) goto loc_881D20A0;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x881d20ac
	goto loc_881D20AC;
loc_881D20A0:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_881D20AC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,-352(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// lwz r9,-312(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r8.u32);
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// beq cr6,0x881d2ab8
	if (ctx.cr6.eq) goto loc_881D2AB8;
	// fmul f13,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64 * ctx.f10.f64;
	// lwz r11,-236(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// lwz r8,-264(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// addi r9,r22,1
	ctx.r9.s64 = ctx.r22.s64 + 1;
	// mullw r10,r11,r22
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r22.s32);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-360(r1)
	REX_STORE_U64(ctx.r1.u32 + -360, ctx.f12.u64);
	// lwz r11,-356(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -356);
	// rlwinm r7,r11,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r6,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r6.u64);
	// rlwinm r23,r22,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r11.u32);
	// addi r4,r22,-1
	ctx.r4.s64 = ctx.r22.s64 + -1;
	// subf r24,r22,r10
	ctx.r24.u64 = ctx.r10.u64 - ctx.r22.u64;
	// addi r3,r23,-1
	ctx.r3.s64 = ctx.r23.s64 + -1;
	// addi r30,r23,1
	ctx.r30.s64 = ctx.r23.s64 + 1;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r29,r22,2
	ctx.r29.s64 = ctx.r22.s64 + 2;
	// lbzx r26,r9,r10
	ctx.r26.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// addi r19,r23,2
	ctx.r19.s64 = ctx.r23.s64 + 2;
	// lbz r5,-1(r24)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r24.u32 + -1);
	// rotlwi r7,r11,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lbz r8,0(r24)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r24.u32 + 0);
	// rotlwi r6,r11,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lbz r9,-1(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// add r31,r26,r5
	ctx.r31.u64 = ctx.r26.u64 + ctx.r5.u64;
	// lbzx r27,r4,r10
	ctx.r27.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r21,r9,r8
	ctx.r21.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r25,r3,r10
	ctx.r25.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// lbz r28,1(r24)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r24.u32 + 1);
	// add r7,r6,r27
	ctx.r7.u64 = ctx.r6.u64 + ctx.r27.u64;
	// rlwinm r3,r31,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r31,r23,r10
	ctx.r31.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r10.u32);
	// rlwinm r6,r21,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r20,r30,r10
	ctx.r20.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// add r18,r7,r28
	ctx.r18.u64 = ctx.r7.u64 + ctx.r28.u64;
	// lbz r24,2(r24)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r24.u32 + 2);
	// subf r3,r25,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r25.u64;
	// lbz r30,2(r10)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// subf r7,r6,r31
	ctx.r7.u64 = ctx.r31.u64 - ctx.r6.u64;
	// stw r4,-288(r1)
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r4.u32);
	// rlwinm r18,r18,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r21,r29,r10
	ctx.r21.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// lfd f5,-184(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// subf r3,r24,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r24.u64;
	// fcfid f2,f5
	ctx.f2.f64 = double(ctx.f5.s64);
	// add r4,r7,r30
	ctx.r4.u64 = ctx.r7.u64 + ctx.r30.u64;
	// subf r7,r20,r18
	ctx.r7.u64 = ctx.r18.u64 - ctx.r20.u64;
	// lbzx r19,r19,r10
	ctx.r19.u64 = REX_LOAD_U8(ctx.r19.u32 + ctx.r10.u32);
	// rlwinm r29,r3,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r6,r10,r22
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r22.u32);
	// rlwinm r18,r4,3,0,28
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r10,1(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// subf r3,r21,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r21.u64;
	// add r17,r29,r19
	ctx.r17.u64 = ctx.r29.u64 + ctx.r19.u64;
	// subf r29,r4,r18
	ctx.r29.u64 = ctx.r18.u64 - ctx.r4.u64;
	// rlwinm r4,r3,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r18,r17,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 + ctx.r4.u64;
	// fmsub f13,f0,f9,f2
	ctx.f13.f64 = std::fma(ctx.f0.f64, ctx.f9.f64, -ctx.f2.f64);
	// subf r7,r28,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r28.u64;
	// add r29,r29,r18
	ctx.r29.u64 = ctx.r29.u64 + ctx.r18.u64;
	// add r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r29,r3
	ctx.r3.u64 = ctx.r29.u64 + ctx.r3.u64;
	// mulli r4,r4,13
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(13));
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-344(r1)
	REX_STORE_U64(ctx.r1.u32 + -344, ctx.f12.u64);
	// subf r18,r31,r7
	ctx.r18.u64 = ctx.r7.u64 - ctx.r31.u64;
	// lwz r7,-340(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// subf r3,r4,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r4.u64;
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
	// srawi r14,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r14.s64 = ctx.r3.s32 >> 1;
	// subf r3,r27,r21
	ctx.r3.u64 = ctx.r21.u64 - ctx.r27.u64;
	// stw r3,-364(r1)
	REX_STORE_U32(ctx.r1.u32 + -364, ctx.r3.u32);
	// subf r3,r5,r18
	ctx.r3.u64 = ctx.r18.u64 - ctx.r5.u64;
	// subf r16,r31,r10
	ctx.r16.u64 = ctx.r10.u64 - ctx.r31.u64;
	// lwz r17,-288(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// add r3,r3,r20
	ctx.r3.u64 = ctx.r3.u64 + ctx.r20.u64;
	// std r23,-328(r1)
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.r23.u64);
	// subf r18,r26,r16
	ctx.r18.u64 = ctx.r16.u64 - ctx.r26.u64;
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// stw r18,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r18.u32);
	// subf r15,r26,r6
	ctx.r15.u64 = ctx.r6.u64 - ctx.r26.u64;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r17,-312(r1)
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r17.u32);
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
	// lwz r17,-364(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
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
	// stw r18,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r18.u32);
	// rlwinm r17,r17,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r18,r10,r26
	ctx.r18.u64 = ctx.r26.u64 - ctx.r10.u64;
	// stw r17,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r17.u32);
	// lwz r23,-368(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// rlwinm r17,r18,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r3,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r3.u32);
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
	// lwz r16,-368(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r18,-256(r1)
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r18.u32);
	// subf r15,r11,r10
	ctx.r15.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r3,-308(r1)
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r3.u32);
	// add r3,r23,r8
	ctx.r3.u64 = ctx.r23.u64 + ctx.r8.u64;
	// mulli r18,r15,11
	ctx.r18.s64 = static_cast<int64_t>(ctx.r15.u64 * static_cast<uint64_t>(11));
	// stw r18,-284(r1)
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r18.u32);
	// stw r3,-364(r1)
	REX_STORE_U32(ctx.r1.u32 + -364, ctx.r3.u32);
	// lwz r15,-344(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// subf r18,r19,r17
	ctx.r18.u64 = ctx.r17.u64 - ctx.r19.u64;
	// rotlwi r3,r9,3
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// stw r18,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r18.u32);
	// rotlwi r18,r6,1
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// rotlwi r17,r27,2
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r27.u32, 2);
	// add r23,r18,r8
	ctx.r23.u64 = ctx.r18.u64 + ctx.r8.u64;
	// subf r18,r9,r3
	ctx.r18.u64 = ctx.r3.u64 - ctx.r9.u64;
	// lwz r3,-296(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// std r22,-296(r1)
	REX_STORE_U64(ctx.r1.u32 + -296, ctx.r22.u64);
	// add r17,r27,r17
	ctx.r17.u64 = ctx.r27.u64 + ctx.r17.u64;
	// add r3,r3,r15
	ctx.r3.u64 = ctx.r3.u64 + ctx.r15.u64;
	// mullw r15,r14,r4
	ctx.r15.s64 = int64_t(ctx.r14.s32) * int64_t(ctx.r4.s32);
	// lwz r14,-256(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// lwz r22,-308(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// stw r15,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r15.u32);
	// lwz r15,-284(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// add r3,r16,r3
	ctx.r3.u64 = ctx.r16.u64 + ctx.r3.u64;
	// add r16,r22,r14
	ctx.r16.u64 = ctx.r22.u64 + ctx.r14.u64;
	// lwz r14,-364(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// add r15,r3,r15
	ctx.r15.u64 = ctx.r3.u64 + ctx.r15.u64;
	// subf r3,r17,r16
	ctx.r3.u64 = ctx.r16.u64 - ctx.r17.u64;
	// lwz r17,-304(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// rlwinm r16,r23,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r22,-312(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// add r3,r3,r18
	ctx.r3.u64 = ctx.r3.u64 + ctx.r18.u64;
	// stw r3,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r3.u32);
	// add r17,r17,r24
	ctx.r17.u64 = ctx.r17.u64 + ctx.r24.u64;
	// mr r23,r14
	ctx.r23.u64 = ctx.r14.u64;
	// rlwinm r14,r14,3,0,28
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r3,r17,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r18,r23,r14
	ctx.r18.u64 = ctx.r14.u64 - ctx.r23.u64;
	// lwz r14,-344(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// subf r17,r11,r6
	ctx.r17.u64 = ctx.r6.u64 - ctx.r11.u64;
	// lwz r23,-280(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// add r18,r3,r18
	ctx.r18.u64 = ctx.r3.u64 + ctx.r18.u64;
	// mulli r17,r17,11
	ctx.r17.s64 = static_cast<int64_t>(ctx.r17.u64 * static_cast<uint64_t>(11));
	// stw r17,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r17.u32);
	// subf r3,r28,r20
	ctx.r3.u64 = ctx.r20.u64 - ctx.r28.u64;
	// subf r16,r22,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r22.u64;
	// rlwinm r17,r3,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r15,r15,1
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x1) != 0);
	ctx.r15.s64 = ctx.r15.s32 >> 1;
	// lwz r22,-368(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// subf r16,r31,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r31.u64;
	// stw r17,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r17.u32);
	// mullw r17,r15,r29
	ctx.r17.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r29.s32);
	// srawi r22,r22,1
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1) != 0);
	ctx.r22.s64 = ctx.r22.s32 >> 1;
	// add r17,r14,r17
	ctx.r17.u64 = ctx.r14.u64 + ctx.r17.u64;
	// subf r15,r20,r31
	ctx.r15.u64 = ctx.r31.u64 - ctx.r20.u64;
	// lwz r20,-344(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// srawi r14,r16,1
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x1) != 0);
	ctx.r14.s64 = ctx.r16.s32 >> 1;
	// mullw r16,r22,r7
	ctx.r16.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r7.s32);
	// lwz r22,-368(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// add r20,r18,r20
	ctx.r20.u64 = ctx.r18.u64 + ctx.r20.u64;
	// subf r15,r21,r15
	ctx.r15.u64 = ctx.r15.u64 - ctx.r21.u64;
	// add r18,r3,r22
	ctx.r18.u64 = ctx.r3.u64 + ctx.r22.u64;
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
	// subf r15,r9,r27
	ctx.r15.u64 = ctx.r27.u64 - ctx.r9.u64;
	// subf r16,r5,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r5.u64;
	// add r27,r17,r11
	ctx.r27.u64 = ctx.r17.u64 + ctx.r11.u64;
	// add r20,r20,r30
	ctx.r20.u64 = ctx.r20.u64 + ctx.r30.u64;
	// subf r14,r8,r28
	ctx.r14.u64 = ctx.r28.u64 - ctx.r8.u64;
	// rlwinm r16,r16,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r17,r27,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r20,r20,r28
	ctx.r20.u64 = ctx.r20.u64 + ctx.r28.u64;
	// rlwinm r15,r15,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r14,r14,1,0,30
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r16,r30,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r30.u64;
	// add r17,r27,r17
	ctx.r17.u64 = ctx.r27.u64 + ctx.r17.u64;
	// subf r14,r26,r14
	ctx.r14.u64 = ctx.r14.u64 - ctx.r26.u64;
	// subf r15,r25,r15
	ctx.r15.u64 = ctx.r15.u64 - ctx.r25.u64;
	// rlwinm r20,r20,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// add r27,r16,r10
	ctx.r27.u64 = ctx.r16.u64 + ctx.r10.u64;
	// add r20,r20,r17
	ctx.r20.u64 = ctx.r20.u64 + ctx.r17.u64;
	// subf r15,r26,r15
	ctx.r15.u64 = ctx.r15.u64 - ctx.r26.u64;
	// subf r16,r10,r14
	ctx.r16.u64 = ctx.r14.u64 - ctx.r10.u64;
	// add r27,r27,r24
	ctx.r27.u64 = ctx.r27.u64 + ctx.r24.u64;
	// rlwinm r26,r3,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r14,r25,r20
	ctx.r14.u64 = ctx.r20.u64 - ctx.r25.u64;
	// subf r15,r6,r15
	ctx.r15.u64 = ctx.r15.u64 - ctx.r6.u64;
	// subf r16,r9,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r9.u64;
	// add r17,r3,r26
	ctx.r17.u64 = ctx.r3.u64 + ctx.r26.u64;
	// rlwinm r20,r27,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r3,r24,r16
	ctx.r3.u64 = ctx.r16.u64 - ctx.r24.u64;
	// subf r26,r24,r14
	ctx.r26.u64 = ctx.r14.u64 - ctx.r24.u64;
	// rotlwi r25,r28,2
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r28.u32, 2);
	// subf r27,r8,r15
	ctx.r27.u64 = ctx.r15.u64 - ctx.r8.u64;
	// add r24,r20,r17
	ctx.r24.u64 = ctx.r20.u64 + ctx.r17.u64;
	// add r28,r28,r25
	ctx.r28.u64 = ctx.r28.u64 + ctx.r25.u64;
	// add r27,r27,r31
	ctx.r27.u64 = ctx.r27.u64 + ctx.r31.u64;
	// rotlwi r17,r8,3
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// add r20,r26,r19
	ctx.r20.u64 = ctx.r26.u64 + ctx.r19.u64;
	// subf r26,r28,r24
	ctx.r26.u64 = ctx.r24.u64 - ctx.r28.u64;
	// lwz r16,-288(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// add r25,r27,r10
	ctx.r25.u64 = ctx.r27.u64 + ctx.r10.u64;
	// ld r22,-296(r1)
	ctx.r22.u64 = REX_LOAD_U64(ctx.r1.u32 + -296);
	// subf r24,r8,r17
	ctx.r24.u64 = ctx.r17.u64 - ctx.r8.u64;
	// add r27,r3,r30
	ctx.r27.u64 = ctx.r3.u64 + ctx.r30.u64;
	// add r20,r20,r5
	ctx.r20.u64 = ctx.r20.u64 + ctx.r5.u64;
	// add r24,r26,r24
	ctx.r24.u64 = ctx.r26.u64 + ctx.r24.u64;
	// rotlwi r28,r10,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// srawi r3,r18,1
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r18.s32 >> 1;
	// add r26,r27,r11
	ctx.r26.u64 = ctx.r27.u64 + ctx.r11.u64;
	// subf r19,r9,r11
	ctx.r19.u64 = ctx.r11.u64 - ctx.r9.u64;
	// add r25,r25,r11
	ctx.r25.u64 = ctx.r25.u64 + ctx.r11.u64;
	// add r17,r28,r9
	ctx.r17.u64 = ctx.r28.u64 + ctx.r9.u64;
	// mullw r18,r3,r4
	ctx.r18.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// mullw r27,r20,r29
	ctx.r27.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r29.s32);
	// add r28,r26,r5
	ctx.r28.u64 = ctx.r26.u64 + ctx.r5.u64;
	// srawi r24,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 1;
	// add r15,r25,r5
	ctx.r15.u64 = ctx.r25.u64 + ctx.r5.u64;
	// subf r20,r8,r19
	ctx.r20.u64 = ctx.r19.u64 - ctx.r8.u64;
	// add r25,r18,r27
	ctx.r25.u64 = ctx.r18.u64 + ctx.r27.u64;
	// mullw r26,r28,r29
	ctx.r26.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// subf r3,r6,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r6.u64;
	// mullw r27,r24,r4
	ctx.r27.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r4.s32);
	// add r5,r20,r5
	ctx.r5.u64 = ctx.r20.u64 + ctx.r5.u64;
	// add r27,r27,r26
	ctx.r27.u64 = ctx.r27.u64 + ctx.r26.u64;
	// rlwinm r28,r3,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r26,r5,r7
	ctx.r26.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// subf r5,r10,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mullw r24,r15,r7
	ctx.r24.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r7.s32);
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + ctx.r28.u64;
	// add r27,r27,r26
	ctx.r27.u64 = ctx.r27.u64 + ctx.r26.u64;
	// rlwinm r28,r17,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r5,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r24,r25,r24
	ctx.r24.u64 = ctx.r25.u64 + ctx.r24.u64;
	// lwz r25,-272(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// subf r3,r8,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r8.u64;
	// subf r20,r16,r28
	ctx.r20.u64 = ctx.r28.u64 - ctx.r16.u64;
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + ctx.r26.u64;
	// add r26,r3,r31
	ctx.r26.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lwz r3,-220(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// mullw r28,r24,r25
	ctx.r28.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r25.s32);
	// mullw r21,r21,r23
	ctx.r21.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r23.s32);
	// ld r23,-328(r1)
	ctx.r23.u64 = REX_LOAD_U64(ctx.r1.u32 + -328);
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
	// ble cr6,0x881d25c4
	if (!ctx.cr6.gt) goto loc_881D25C4;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x881d25d0
	goto loc_881D25D0;
loc_881D25C4:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_881D25D0:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r11,-320(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// lwz r10,-360(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// addi r6,r22,-1
	ctx.r6.s64 = ctx.r22.s64 + -1;
	// lwz r5,-268(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// addi r9,r22,1
	ctx.r9.s64 = ctx.r22.s64 + 1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stb r8,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// subf r20,r22,r10
	ctx.r20.u64 = ctx.r10.u64 - ctx.r22.u64;
	// stw r3,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r3.u32);
	// lbzx r26,r9,r10
	ctx.r26.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// lbzx r5,r10,r22
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r22.u32);
	// lbz r30,2(r10)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r9,-1(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r8,0(r20)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r20.u32 + 0);
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r3,r11,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lbzx r27,r6,r10
	ctx.r27.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// addi r6,r23,1
	ctx.r6.s64 = ctx.r23.s64 + 1;
	// lbz r28,1(r20)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r20.u32 + 1);
	// add r24,r3,r27
	ctx.r24.u64 = ctx.r3.u64 + ctx.r27.u64;
	// lbz r31,-1(r20)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r20.u32 + -1);
	// subf r3,r26,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r26.u64;
	// add r18,r24,r28
	ctx.r18.u64 = ctx.r24.u64 + ctx.r28.u64;
	// lbz r24,2(r20)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r20.u32 + 2);
	// lbzx r21,r6,r10
	ctx.r21.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// addi r6,r23,-1
	ctx.r6.s64 = ctx.r23.s64 + -1;
	// subf r19,r30,r3
	ctx.r19.u64 = ctx.r3.u64 - ctx.r30.u64;
	// rlwinm r3,r18,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// add r19,r19,r9
	ctx.r19.u64 = ctx.r19.u64 + ctx.r9.u64;
	// add r16,r26,r31
	ctx.r16.u64 = ctx.r26.u64 + ctx.r31.u64;
	// lbzx r25,r6,r10
	ctx.r25.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// addi r6,r23,2
	ctx.r6.s64 = ctx.r23.s64 + 2;
	// rlwinm r17,r19,3,0,28
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r18,r21,r3
	ctx.r18.u64 = ctx.r3.u64 - ctx.r21.u64;
	// rlwinm r16,r16,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r20,r6,r10
	ctx.r20.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// addi r6,r22,2
	ctx.r6.s64 = ctx.r22.s64 + 2;
	// lbzx r3,r6,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// subf r6,r3,r18
	ctx.r6.u64 = ctx.r18.u64 - ctx.r3.u64;
	// stw r6,-364(r1)
	REX_STORE_U32(ctx.r1.u32 + -364, ctx.r6.u32);
	// subf r6,r19,r17
	ctx.r6.u64 = ctx.r17.u64 - ctx.r19.u64;
	// subf r18,r28,r8
	ctx.r18.u64 = ctx.r8.u64 - ctx.r28.u64;
	// lwz r19,-364(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// stw r6,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r6.u32);
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// rlwinm r18,r18,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r6.u32);
	// add r17,r9,r8
	ctx.r17.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r6,1(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// mr r14,r19
	ctx.r14.u64 = ctx.r19.u64;
	// lbzx r10,r23,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r10.u32);
	// subf r23,r10,r18
	ctx.r23.u64 = ctx.r18.u64 - ctx.r10.u64;
	// subf r18,r31,r23
	ctx.r18.u64 = ctx.r23.u64 - ctx.r31.u64;
	// rlwinm r17,r17,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// add r18,r18,r21
	ctx.r18.u64 = ctx.r18.u64 + ctx.r21.u64;
	// subf r23,r17,r10
	ctx.r23.u64 = ctx.r10.u64 - ctx.r17.u64;
	// add r18,r18,r24
	ctx.r18.u64 = ctx.r18.u64 + ctx.r24.u64;
	// subf r17,r25,r16
	ctx.r17.u64 = ctx.r16.u64 - ctx.r25.u64;
	// rlwinm r18,r18,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r17,r24,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r24.u64;
	// subf r18,r20,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r20.u64;
	// add r23,r23,r30
	ctx.r23.u64 = ctx.r23.u64 + ctx.r30.u64;
	// rlwinm r17,r17,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// add r18,r18,r25
	ctx.r18.u64 = ctx.r18.u64 + ctx.r25.u64;
	// rlwinm r16,r23,3,0,28
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r18,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r18.u32);
	// add r17,r17,r20
	ctx.r17.u64 = ctx.r17.u64 + ctx.r20.u64;
	// subf r18,r23,r16
	ctx.r18.u64 = ctx.r16.u64 - ctx.r23.u64;
	// rlwinm r16,r19,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r19,-360(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// subf r23,r27,r3
	ctx.r23.u64 = ctx.r3.u64 - ctx.r27.u64;
	// rlwinm r15,r17,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r17,r19,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r23,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// add r16,r14,r16
	ctx.r16.u64 = ctx.r14.u64 + ctx.r16.u64;
	// stw r19,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r19.u32);
	// subf r14,r11,r8
	ctx.r14.u64 = ctx.r8.u64 - ctx.r11.u64;
	// add r19,r5,r6
	ctx.r19.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r16,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r16.u32);
	// add r18,r18,r15
	ctx.r18.u64 = ctx.r18.u64 + ctx.r15.u64;
	// lwz r15,-344(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// stw r19,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r19.u32);
	// subf r16,r11,r6
	ctx.r16.u64 = ctx.r6.u64 - ctx.r11.u64;
	// add r19,r17,r15
	ctx.r19.u64 = ctx.r17.u64 + ctx.r15.u64;
	// lwz r17,-360(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// std r22,-256(r1)
	REX_STORE_U64(ctx.r1.u32 + -256, ctx.r22.u64);
	// add r23,r23,r17
	ctx.r23.u64 = ctx.r23.u64 + ctx.r17.u64;
	// lwz r22,-368(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// lwz r15,-344(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// mulli r15,r15,13
	ctx.r15.s64 = static_cast<int64_t>(ctx.r15.u64 * static_cast<uint64_t>(13));
	// add r23,r19,r23
	ctx.r23.u64 = ctx.r19.u64 + ctx.r23.u64;
	// std r6,-328(r1)
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.r6.u64);
	// add r18,r18,r22
	ctx.r18.u64 = ctx.r18.u64 + ctx.r22.u64;
	// mulli r19,r16,11
	ctx.r19.s64 = static_cast<int64_t>(ctx.r16.u64 * static_cast<uint64_t>(11));
	// subf r18,r15,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r15.u64;
	// add r23,r23,r19
	ctx.r23.u64 = ctx.r23.u64 + ctx.r19.u64;
	// subf r19,r27,r9
	ctx.r19.u64 = ctx.r9.u64 - ctx.r27.u64;
	// srawi r18,r18,1
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1) != 0);
	ctx.r18.s64 = ctx.r18.s32 >> 1;
	// srawi r17,r23,1
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1) != 0);
	ctx.r17.s64 = ctx.r23.s32 >> 1;
	// rlwinm r16,r19,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r23,r18,r4
	ctx.r23.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r4.s32);
	// mullw r19,r17,r29
	ctx.r19.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r29.s32);
	// subf r17,r30,r16
	ctx.r17.u64 = ctx.r16.u64 - ctx.r30.u64;
	// add r19,r23,r19
	ctx.r19.u64 = ctx.r23.u64 + ctx.r19.u64;
	// subf r23,r31,r17
	ctx.r23.u64 = ctx.r17.u64 - ctx.r31.u64;
	// subf r18,r21,r10
	ctx.r18.u64 = ctx.r10.u64 - ctx.r21.u64;
	// stw r19,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r19.u32);
	// add r17,r23,r25
	ctx.r17.u64 = ctx.r23.u64 + ctx.r25.u64;
	// subf r16,r3,r18
	ctx.r16.u64 = ctx.r18.u64 - ctx.r3.u64;
	// add r3,r17,r3
	ctx.r3.u64 = ctx.r17.u64 + ctx.r3.u64;
	// subf r23,r9,r16
	ctx.r23.u64 = ctx.r16.u64 - ctx.r9.u64;
	// subf r16,r5,r26
	ctx.r16.u64 = ctx.r26.u64 - ctx.r5.u64;
	// stw r3,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r3.u32);
	// rotlwi r18,r11,2
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// subf r3,r6,r16
	ctx.r3.u64 = ctx.r16.u64 - ctx.r6.u64;
	// add r19,r11,r18
	ctx.r19.u64 = ctx.r11.u64 + ctx.r18.u64;
	// subf r18,r8,r23
	ctx.r18.u64 = ctx.r23.u64 - ctx.r8.u64;
	// subf r23,r10,r6
	ctx.r23.u64 = ctx.r6.u64 - ctx.r10.u64;
	// stw r19,-288(r1)
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r19.u32);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r17,r18,r27
	ctx.r17.u64 = ctx.r18.u64 + ctx.r27.u64;
	// subf r18,r26,r23
	ctx.r18.u64 = ctx.r23.u64 - ctx.r26.u64;
	// rlwinm r19,r3,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r23,r18,r8
	ctx.r23.u64 = ctx.r18.u64 + ctx.r8.u64;
	// stw r19,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r19.u32);
	// add r15,r17,r30
	ctx.r15.u64 = ctx.r17.u64 + ctx.r30.u64;
	// subf r19,r31,r14
	ctx.r19.u64 = ctx.r14.u64 - ctx.r31.u64;
	// stw r23,-364(r1)
	REX_STORE_U32(ctx.r1.u32 + -364, ctx.r23.u32);
	// add r23,r15,r28
	ctx.r23.u64 = ctx.r15.u64 + ctx.r28.u64;
	// rlwinm r19,r19,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r23,r23,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r19,r10,r19
	ctx.r19.u64 = ctx.r19.u64 - ctx.r10.u64;
	// stw r23,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r23.u32);
	// subf r23,r6,r26
	ctx.r23.u64 = ctx.r26.u64 - ctx.r6.u64;
	// add r19,r19,r25
	ctx.r19.u64 = ctx.r19.u64 + ctx.r25.u64;
	// rotlwi r18,r27,2
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r27.u32, 2);
	// add r17,r19,r5
	ctx.r17.u64 = ctx.r19.u64 + ctx.r5.u64;
	// lwz r14,-360(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// rlwinm r19,r23,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r15,r14,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// add r16,r23,r19
	ctx.r16.u64 = ctx.r23.u64 + ctx.r19.u64;
	// rotlwi r19,r5,1
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// subf r23,r20,r15
	ctx.r23.u64 = ctx.r15.u64 - ctx.r20.u64;
	// add r14,r19,r8
	ctx.r14.u64 = ctx.r19.u64 + ctx.r8.u64;
	// add r15,r27,r18
	ctx.r15.u64 = ctx.r27.u64 + ctx.r18.u64;
	// rotlwi r18,r9,3
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// rlwinm r17,r17,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// add r23,r23,r24
	ctx.r23.u64 = ctx.r23.u64 + ctx.r24.u64;
	// lwz r19,-344(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r17,r17,r16
	ctx.r17.u64 = ctx.r17.u64 + ctx.r16.u64;
	// lwz r22,-364(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// subf r27,r9,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r9.u64;
	// lwz r16,-288(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// stw r19,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r19.u32);
	// subf r19,r9,r18
	ctx.r19.u64 = ctx.r18.u64 - ctx.r9.u64;
	// rotlwi r18,r22,0
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r22.u32, 0);
	// lwz r6,-360(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// rlwinm r22,r22,3,0,28
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r18,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r18.u32);
	// add r18,r3,r6
	ctx.r18.u64 = ctx.r3.u64 + ctx.r6.u64;
	// stw r27,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r27.u32);
	// subf r3,r28,r21
	ctx.r3.u64 = ctx.r21.u64 - ctx.r28.u64;
	// rlwinm r27,r23,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r23,-360(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// subf r21,r15,r17
	ctx.r21.u64 = ctx.r17.u64 - ctx.r15.u64;
	// lwz r6,-368(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// rlwinm r17,r14,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r23,r23,r22
	ctx.r23.u64 = ctx.r22.u64 - ctx.r23.u64;
	// subf r15,r11,r5
	ctx.r15.u64 = ctx.r5.u64 - ctx.r11.u64;
	// add r19,r21,r19
	ctx.r19.u64 = ctx.r21.u64 + ctx.r19.u64;
	// add r18,r6,r18
	ctx.r18.u64 = ctx.r6.u64 + ctx.r18.u64;
	// lwz r6,-280(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// add r23,r27,r23
	ctx.r23.u64 = ctx.r27.u64 + ctx.r23.u64;
	// mulli r21,r15,11
	ctx.r21.s64 = static_cast<int64_t>(ctx.r15.u64 * static_cast<uint64_t>(11));
	// lwz r15,-296(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// stw r6,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r6.u32);
	// ld r6,-328(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + -328);
	// rlwinm r27,r3,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r18,r25,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r25.u64;
	// subf r17,r16,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r16.u64;
	// lwz r14,-344(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// rlwinm r14,r14,1,0,30
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r14,r25,r14
	ctx.r14.u64 = ctx.r14.u64 - ctx.r25.u64;
	// add r25,r23,r21
	ctx.r25.u64 = ctx.r23.u64 + ctx.r21.u64;
	// add r23,r3,r27
	ctx.r23.u64 = ctx.r3.u64 + ctx.r27.u64;
	// subf r27,r10,r17
	ctx.r27.u64 = ctx.r17.u64 - ctx.r10.u64;
	// srawi r21,r19,1
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x1) != 0);
	ctx.r21.s64 = ctx.r19.s32 >> 1;
	// subf r3,r24,r18
	ctx.r3.u64 = ctx.r18.u64 - ctx.r24.u64;
	// srawi r18,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r18.s64 = ctx.r27.s32 >> 1;
	// mullw r27,r21,r7
	ctx.r27.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r7.s32);
	// subf r19,r26,r14
	ctx.r19.u64 = ctx.r14.u64 - ctx.r26.u64;
	// add r23,r25,r23
	ctx.r23.u64 = ctx.r25.u64 + ctx.r23.u64;
	// add r3,r3,r20
	ctx.r3.u64 = ctx.r3.u64 + ctx.r20.u64;
	// add r27,r15,r27
	ctx.r27.u64 = ctx.r15.u64 + ctx.r27.u64;
	// rlwinm r25,r18,8,0,23
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 8) & 0xFFFFFF00;
	// subf r21,r11,r9
	ctx.r21.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r20,r5,r19
	ctx.r20.u64 = ctx.r19.u64 - ctx.r5.u64;
	// srawi r23,r23,1
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1) != 0);
	ctx.r23.s64 = ctx.r23.s32 >> 1;
	// add r19,r3,r31
	ctx.r19.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r25,r27,r25
	ctx.r25.u64 = ctx.r27.u64 + ctx.r25.u64;
	// subf r21,r31,r21
	ctx.r21.u64 = ctx.r21.u64 - ctx.r31.u64;
	// subf r3,r8,r20
	ctx.r3.u64 = ctx.r20.u64 - ctx.r8.u64;
	// mullw r27,r23,r4
	ctx.r27.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r4.s32);
	// mullw r23,r19,r29
	ctx.r23.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r29.s32);
	// rlwinm r21,r21,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r23,r27,r23
	ctx.r23.u64 = ctx.r27.u64 + ctx.r23.u64;
	// subf r27,r30,r21
	ctx.r27.u64 = ctx.r21.u64 - ctx.r30.u64;
	// subf r20,r8,r28
	ctx.r20.u64 = ctx.r28.u64 - ctx.r8.u64;
	// add r21,r3,r6
	ctx.r21.u64 = ctx.r3.u64 + ctx.r6.u64;
	// subf r3,r5,r26
	ctx.r3.u64 = ctx.r26.u64 - ctx.r5.u64;
	// rlwinm r19,r20,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// add r27,r27,r6
	ctx.r27.u64 = ctx.r27.u64 + ctx.r6.u64;
	// rlwinm r20,r3,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r15,r27,r24
	ctx.r15.u64 = ctx.r27.u64 + ctx.r24.u64;
	// add r18,r3,r20
	ctx.r18.u64 = ctx.r3.u64 + ctx.r20.u64;
	// subf r26,r26,r19
	ctx.r26.u64 = ctx.r19.u64 - ctx.r26.u64;
	// rotlwi r20,r28,2
	ctx.r20.u64 = __builtin_rotateleft32(ctx.r28.u32, 2);
	// rlwinm r17,r6,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r15,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r27,r5,r11
	ctx.r27.u64 = ctx.r11.u64 - ctx.r5.u64;
	// subf r3,r6,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r6.u64;
	// add r28,r28,r20
	ctx.r28.u64 = ctx.r28.u64 + ctx.r20.u64;
	// subf r15,r6,r26
	ctx.r15.u64 = ctx.r26.u64 - ctx.r6.u64;
	// add r17,r17,r9
	ctx.r17.u64 = ctx.r17.u64 + ctx.r9.u64;
	// add r20,r19,r18
	ctx.r20.u64 = ctx.r19.u64 + ctx.r18.u64;
	// rlwinm r26,r27,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r3,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r18,r8,3
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// rlwinm r17,r17,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r15,r9,r15
	ctx.r15.u64 = ctx.r15.u64 - ctx.r9.u64;
	// add r27,r27,r26
	ctx.r27.u64 = ctx.r27.u64 + ctx.r26.u64;
	// subf r26,r28,r20
	ctx.r26.u64 = ctx.r20.u64 - ctx.r28.u64;
	// add r3,r3,r19
	ctx.r3.u64 = ctx.r3.u64 + ctx.r19.u64;
	// subf r28,r24,r15
	ctx.r28.u64 = ctx.r15.u64 - ctx.r24.u64;
	// subf r20,r8,r18
	ctx.r20.u64 = ctx.r18.u64 - ctx.r8.u64;
	// subf r19,r16,r17
	ctx.r19.u64 = ctx.r17.u64 - ctx.r16.u64;
	// subf r27,r8,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r8.u64;
	// add r26,r26,r20
	ctx.r26.u64 = ctx.r26.u64 + ctx.r20.u64;
	// subf r24,r30,r19
	ctx.r24.u64 = ctx.r19.u64 - ctx.r30.u64;
	// add r28,r28,r5
	ctx.r28.u64 = ctx.r28.u64 + ctx.r5.u64;
	// subf r3,r9,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r9.u64;
	// lwz r15,-360(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// add r20,r27,r10
	ctx.r20.u64 = ctx.r27.u64 + ctx.r10.u64;
	// lwz r27,-272(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// ld r22,-256(r1)
	ctx.r22.u64 = REX_LOAD_U64(ctx.r1.u32 + -256);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// srawi r26,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 1;
	// srawi r30,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r24.s32 >> 1;
	// add r28,r21,r11
	ctx.r28.u64 = ctx.r21.u64 + ctx.r11.u64;
	// srawi r24,r20,1
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x1) != 0);
	ctx.r24.s64 = ctx.r20.s32 >> 1;
	// srawi r21,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r21.s64 = ctx.r3.s32 >> 1;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r10,r30,r4
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r4.s32);
	// mullw r30,r24,r27
	ctx.r30.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r27.s32);
	// subf r6,r9,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r9.u64;
	// subf r20,r9,r11
	ctx.r20.u64 = ctx.r11.u64 - ctx.r9.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// mullw r9,r21,r29
	ctx.r9.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r29.s32);
	// srawi r6,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r6,r7
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r30,r3,r31
	ctx.r30.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r28,r28,r31
	ctx.r28.u64 = ctx.r28.u64 + ctx.r31.u64;
	// subf r24,r8,r5
	ctx.r24.u64 = ctx.r5.u64 - ctx.r8.u64;
	// subf r3,r8,r20
	ctx.r3.u64 = ctx.r20.u64 - ctx.r8.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,-220(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// mullw r8,r26,r4
	ctx.r8.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r4.s32);
	// mullw r5,r28,r7
	ctx.r5.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r7.s32);
	// mullw r6,r30,r29
	ctx.r6.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r29.s32);
	// srawi r4,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r24.s32 >> 1;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r31,r23,r5
	ctx.r31.u64 = ctx.r23.u64 + ctx.r5.u64;
	// mullw r8,r4,r10
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// mullw r5,r3,r7
	ctx.r5.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// mullw r25,r25,r15
	ctx.r25.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r15.s32);
	// mullw r7,r31,r27
	ctx.r7.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r27.s32);
	// rotlwi r8,r11,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// add r11,r25,r7
	ctx.r11.u64 = ctx.r25.u64 + ctx.r7.u64;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r5,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 16;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x881d2a70
	if (!ctx.cr6.gt) goto loc_881D2A70;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x881d2a7c
	goto loc_881D2A7C;
loc_881D2A70:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_881D2A7C:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,-316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// lwz r10,-260(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// lwz r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r27,-264(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// li r25,128
	ctx.r25.s64 = 128;
	// lwz r8,-352(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// li r24,16
	ctx.r24.s64 = 16;
	// lwz r29,-320(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// lwz r26,-268(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// stb r9,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// stw r30,-316(r1)
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r30.u32);
	// b 0x881d2adc
	goto loc_881D2ADC;
loc_881D2AB8:
	// lwz r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// li r24,16
	ctx.r24.s64 = 16;
	// lwz r10,-260(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// li r25,128
	ctx.r25.s64 = 128;
	// lwz r26,-268(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// lwz r29,-320(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// lwz r30,-316(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// lwz r27,-264(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
loc_881D2AD8:
	// li r7,1
	ctx.r7.s64 = 1;
loc_881D2ADC:
	// lwz r9,-276(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -276);
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r7,-312(r1)
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r7.u32);
	// stw r9,-276(r1)
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r9.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881d1be4
	if (ctx.cr6.lt) goto loc_881D1BE4;
	// lwz r4,-248(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// b 0x881d2e14
	goto loc_881D2E14;
loc_881D2B00:
	// lwz r9,80(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881d2bf0
	if (!ctx.cr6.lt) goto loc_881D2BF0;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x881d2b80
	if (!ctx.cr6.lt) goto loc_881D2B80;
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
	// stb r5,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r5.u8);
	// b 0x881d2ba8
	goto loc_881D2BA8;
loc_881D2B80:
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
	// stb r9,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r9.u8);
loc_881D2BA8:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r8,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r8.u32);
	// beq cr6,0x881d2ad8
	if (ctx.cr6.eq) goto loc_881D2AD8;
	// lwz r9,-236(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// li r7,0
	ctx.r7.s64 = 0;
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
	// stw r29,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r29.u32);
	// lbzx r6,r11,r26
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// stb r6,1(r30)
	REX_STORE_U8(ctx.r30.u32 + 1, ctx.r6.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r30,-316(r1)
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r30.u32);
	// b 0x881d2adc
	goto loc_881D2ADC;
loc_881D2BF0:
	// stb r24,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r24.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r8,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r8.u32);
	// beq cr6,0x881d2ad8
	if (ctx.cr6.eq) goto loc_881D2AD8;
	// stb r25,1(r29)
	REX_STORE_U8(ctx.r29.u32 + 1, ctx.r25.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stb r25,1(r30)
	REX_STORE_U8(ctx.r30.u32 + 1, ctx.r25.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r29,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r29.u32);
	// stw r30,-316(r1)
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r30.u32);
	// b 0x881d2adc
	goto loc_881D2ADC;
loc_881D2C24:
	// lwz r9,84(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881d2dc4
	if (!ctx.cr6.lt) goto loc_881D2DC4;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// bge cr6,0x881d2d14
	if (!ctx.cr6.lt) goto loc_881D2D14;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881d2e14
	if (!ctx.cr6.gt) goto loc_881D2E14;
loc_881D2C4C:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-328(r1)
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.f13.u64);
	// lwz r11,-324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x881d2cd4
	if (ctx.cr6.lt) goto loc_881D2CD4;
	// lwz r9,80(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881d2cd4
	if (!ctx.cr6.lt) goto loc_881D2CD4;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,-228(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lbzx r31,r11,r10
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// subfic r7,r9,256
	ctx.xer.ca = ctx.r9.u32 <= 256;
	ctx.r7.u64 = static_cast<uint64_t>(256) - ctx.r9.u64;
	// mullw r7,r31,r7
	ctx.r7.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r7.s32);
	// lbzx r5,r5,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// mullw r9,r5,r9
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r7,r9,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// stb r7,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r7.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// beq cr6,0x881d2cfc
	if (ctx.cr6.eq) goto loc_881D2CFC;
	// lwz r9,-236(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// li r7,0
	ctx.r7.s64 = 0;
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
	// b 0x881d2d00
	goto loc_881D2D00;
loc_881D2CD4:
	// stb r24,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r24.u8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// beq cr6,0x881d2cfc
	if (ctx.cr6.eq) goto loc_881D2CFC;
	// stb r25,1(r29)
	REX_STORE_U8(ctx.r29.u32 + 1, ctx.r25.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r25,1(r30)
	REX_STORE_U8(ctx.r30.u32 + 1, ctx.r25.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x881d2d00
	goto loc_881D2D00;
loc_881D2CFC:
	// li r7,1
	ctx.r7.s64 = 1;
loc_881D2D00:
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881d2c4c
	if (ctx.cr6.lt) goto loc_881D2C4C;
	// b 0x881d2e08
	goto loc_881D2E08;
loc_881D2D14:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881d2e14
	if (!ctx.cr6.gt) goto loc_881D2E14;
loc_881D2D1C:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-328(r1)
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.f13.u64);
	// lwz r9,-324(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x881d2d84
	if (ctx.cr6.lt) goto loc_881D2D84;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x881d2d84
	if (!ctx.cr6.lt) goto loc_881D2D84;
	// lbzx r11,r9,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r11,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r11.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// beq cr6,0x881d2dac
	if (ctx.cr6.eq) goto loc_881D2DAC;
	// lwz r11,-236(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// li r7,0
	ctx.r7.s64 = 0;
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
	// b 0x881d2db0
	goto loc_881D2DB0;
loc_881D2D84:
	// stb r24,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r24.u8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// beq cr6,0x881d2dac
	if (ctx.cr6.eq) goto loc_881D2DAC;
	// stb r25,1(r29)
	REX_STORE_U8(ctx.r29.u32 + 1, ctx.r25.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r25,1(r30)
	REX_STORE_U8(ctx.r30.u32 + 1, ctx.r25.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x881d2db0
	goto loc_881D2DB0;
loc_881D2DAC:
	// li r7,1
	ctx.r7.s64 = 1;
loc_881D2DB0:
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881d2d1c
	if (ctx.cr6.lt) goto loc_881D2D1C;
	// b 0x881d2e08
	goto loc_881D2E08;
loc_881D2DC4:
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881d2e14
	if (!ctx.cr6.gt) goto loc_881D2E14;
loc_881D2DD4:
	// stb r24,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r24.u8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// beq cr6,0x881d2df4
	if (ctx.cr6.eq) goto loc_881D2DF4;
	// stbu r25,1(r29)
	ea = 1 + ctx.r29.u32;
	REX_STORE_U8(ea, ctx.r25.u8);
	ctx.r29.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// stbu r25,1(r30)
	ea = 1 + ctx.r30.u32;
	REX_STORE_U8(ea, ctx.r25.u8);
	ctx.r30.u32 = ea;
	// b 0x881d2df8
	goto loc_881D2DF8;
loc_881D2DF4:
	// li r7,1
	ctx.r7.s64 = 1;
loc_881D2DF8:
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881d2dd4
	if (ctx.cr6.lt) goto loc_881D2DD4;
loc_881D2E08:
	// stw r30,-316(r1)
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r30.u32);
	// stw r29,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r29.u32);
	// stw r8,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r8.u32);
loc_881D2E14:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwz r6,80(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lis r7,-30678
	ctx.r7.s64 = -2010513408;
	// lwz r5,100(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// stw r4,-248(r1)
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r4.u32);
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
	// stfd f2,-328(r1)
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.f2.u64);
	// lwz r10,-324(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// extsw r31,r9
	ctx.r31.s64 = ctx.r9.s32;
	// stw r9,8228(r7)
	REX_STORE_U32(ctx.r7.u32 + 8228, ctx.r9.u32);
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// std r31,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r31.u64);
	// add r9,r6,r5
	ctx.r9.u64 = ctx.r6.u64 + ctx.r5.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r9,-260(r1)
	REX_STORE_U32(ctx.r1.u32 + -260, ctx.r9.u32);
	// lfd f13,-176(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmsub f5,f5,f11,f12
	ctx.f5.f64 = std::fma(ctx.f5.f64, ctx.f11.f64, -ctx.f12.f64);
	// fctiwz f2,f5
	ctx.f2.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f2,-328(r1)
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.f2.u64);
	// lwz r21,-324(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// mullw r7,r21,r21
	ctx.r7.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r21.s32);
	// srawi r19,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r19.s64 = ctx.r7.s32 >> 8;
	// mullw r6,r19,r21
	ctx.r6.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r21.s32);
	// srawi r18,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r18.s64 = ctx.r6.s32 >> 8;
	// ble cr6,0x881d348c
	if (!ctx.cr6.gt) goto loc_881D348C;
	// lwz r7,84(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x881d348c
	if (!ctx.cr6.lt) goto loc_881D348C;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r7,-276(r1)
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r7.u32);
	// ble cr6,0x881d3594
	if (!ctx.cr6.gt) goto loc_881D3594;
loc_881D2EB8:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-328(r1)
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.f13.u64);
	// lwz r10,-324(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x881d344c
	if (!ctx.cr6.gt) goto loc_881D344C;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x881d344c
	if (!ctx.cr6.lt) goto loc_881D344C;
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
	// stw r11,8228(r10)
	REX_STORE_U32(ctx.r10.u32 + 8228, ctx.r11.u32);
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
	// stfd f2,-328(r1)
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.f2.u64);
	// rlwinm r15,r15,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r14,-324(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
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
	// stw r3,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r3.u32);
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
	// stw r20,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r20.u32);
	// stw r3,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r3.u32);
	// subf r20,r7,r29
	ctx.r20.u64 = ctx.r29.u64 - ctx.r7.u64;
	// add r3,r11,r17
	ctx.r3.u64 = ctx.r11.u64 + ctx.r17.u64;
	// lwz r16,-360(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// std r3,-240(r1)
	REX_STORE_U64(ctx.r1.u32 + -240, ctx.r3.u64);
	// subf r3,r26,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r26.u64;
	// rlwinm r17,r16,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// std r22,-232(r1)
	REX_STORE_U64(ctx.r1.u32 + -232, ctx.r22.u64);
	// subf r16,r31,r9
	ctx.r16.u64 = ctx.r9.u64 - ctx.r31.u64;
	// lwz r22,-336(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// stw r17,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r17.u32);
	// rlwinm r17,r16,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r14,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r14.u32);
	// subf r16,r25,r3
	ctx.r16.u64 = ctx.r3.u64 - ctx.r25.u64;
	// std r4,-224(r1)
	REX_STORE_U64(ctx.r1.u32 + -224, ctx.r4.u64);
	// subf r17,r5,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r5.u64;
	// subf r3,r10,r16
	ctx.r3.u64 = ctx.r16.u64 - ctx.r10.u64;
	// subf r17,r6,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r6.u64;
	// subf r15,r22,r15
	ctx.r15.u64 = ctx.r15.u64 - ctx.r22.u64;
	// add r16,r17,r26
	ctx.r16.u64 = ctx.r17.u64 + ctx.r26.u64;
	// subf r17,r9,r3
	ctx.r17.u64 = ctx.r3.u64 - ctx.r9.u64;
	// stw r15,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r15.u32);
	// subf r15,r11,r10
	ctx.r15.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r3,-368(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// add r17,r17,r30
	ctx.r17.u64 = ctx.r17.u64 + ctx.r30.u64;
	// subf r15,r6,r15
	ctx.r15.u64 = ctx.r15.u64 - ctx.r6.u64;
	// stw r17,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r17.u32);
	// subf r17,r8,r20
	ctx.r17.u64 = ctx.r20.u64 - ctx.r8.u64;
	// rlwinm r15,r15,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r26,r31,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r31.u64;
	// stw r17,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r17.u32);
	// subf r17,r4,r15
	ctx.r17.u64 = ctx.r15.u64 - ctx.r4.u64;
	// stw r26,-272(r1)
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r26.u32);
	// subf r26,r29,r7
	ctx.r26.u64 = ctx.r7.u64 - ctx.r29.u64;
	// stw r17,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r17.u32);
	// add r16,r16,r28
	ctx.r16.u64 = ctx.r16.u64 + ctx.r28.u64;
	// subf r17,r4,r26
	ctx.r17.u64 = ctx.r26.u64 - ctx.r4.u64;
	// rlwinm r16,r16,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// add r17,r17,r10
	ctx.r17.u64 = ctx.r17.u64 + ctx.r10.u64;
	// lwz r26,-360(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// subf r16,r24,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r24.u64;
	// stw r17,-280(r1)
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r17.u32);
	// subf r15,r11,r7
	ctx.r15.u64 = ctx.r7.u64 - ctx.r11.u64;
	// stw r16,-256(r1)
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r16.u32);
	// subf r25,r30,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r30.u64;
	// mulli r15,r15,11
	ctx.r15.s64 = static_cast<int64_t>(ctx.r15.u64 * static_cast<uint64_t>(11));
	// stw r15,-308(r1)
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r15.u32);
	// lwz r17,-336(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// add r17,r26,r17
	ctx.r17.u64 = ctx.r26.u64 + ctx.r17.u64;
	// stw r17,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r17.u32);
	// rlwinm r26,r20,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r16,-300(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// lwz r15,-344(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r26,r20,r26
	ctx.r26.u64 = ctx.r20.u64 + ctx.r26.u64;
	// stw r25,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r25.u32);
	// mullw r20,r3,r19
	ctx.r20.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r19.s32);
	// lwz r22,-272(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// stw r26,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r26.u32);
	// stw r20,-284(r1)
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r20.u32);
	// lwz r25,-280(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// lwz r20,-256(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// add r17,r16,r4
	ctx.r17.u64 = ctx.r16.u64 + ctx.r4.u64;
	// lwz r4,-308(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// add r15,r15,r11
	ctx.r15.u64 = ctx.r15.u64 + ctx.r11.u64;
	// stw r25,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r25.u32);
	// rotlwi r3,r17,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r17.u32, 0);
	// rotlwi r26,r15,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r15.u32, 0);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// rotlwi r14,r22,0
	ctx.r14.u64 = __builtin_rotateleft32(ctx.r22.u32, 0);
	// lwz r16,-360(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// rotlwi r25,r31,2
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r31.u32, 2);
	// stw r17,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r17.u32);
	// lwz r17,-296(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// stw r15,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r15.u32);
	// stw r20,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r20.u32);
	// add r17,r17,r8
	ctx.r17.u64 = ctx.r17.u64 + ctx.r8.u64;
	// rlwinm r20,r26,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r17,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r17.u32);
	// rlwinm r17,r22,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r26,r20
	ctx.r26.u64 = ctx.r26.u64 + ctx.r20.u64;
	// lwz r15,-336(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// add r20,r15,r28
	ctx.r20.u64 = ctx.r15.u64 + ctx.r28.u64;
	// rlwinm r15,r3,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r26,-256(r1)
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r26.u32);
	// rlwinm r26,r20,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r15,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r15.u32);
	// add r20,r14,r17
	ctx.r20.u64 = ctx.r14.u64 + ctx.r17.u64;
	// lwz r15,-360(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// lwz r22,-368(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// add r25,r31,r25
	ctx.r25.u64 = ctx.r31.u64 + ctx.r25.u64;
	// stw r20,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r20.u32);
	// add r17,r15,r27
	ctx.r17.u64 = ctx.r15.u64 + ctx.r27.u64;
	// lwz r20,-344(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// rotlwi r15,r26,0
	ctx.r15.u64 = __builtin_rotateleft32(ctx.r26.u32, 0);
	// rlwinm r3,r17,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// std r23,-328(r1)
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.r23.u64);
	// rlwinm r17,r20,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,-300(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// stw r26,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r26.u32);
	// add r26,r16,r4
	ctx.r26.u64 = ctx.r16.u64 + ctx.r4.u64;
	// add r20,r20,r17
	ctx.r20.u64 = ctx.r20.u64 + ctx.r17.u64;
	// lwz r4,-280(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// rlwinm r14,r14,3,0,28
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r17,-256(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// stw r20,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r20.u32);
	// rotlwi r16,r9,3
	ctx.r16.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// lwz r23,-368(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// subf r14,r4,r14
	ctx.r14.u64 = ctx.r14.u64 - ctx.r4.u64;
	// subf r16,r9,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r9.u64;
	// lwz r4,-296(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// stw r14,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r14.u32);
	// add r20,r15,r22
	ctx.r20.u64 = ctx.r15.u64 + ctx.r22.u64;
	// stw r16,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r16.u32);
	// subf r31,r9,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r9.u64;
	// subf r25,r25,r20
	ctx.r25.u64 = ctx.r20.u64 - ctx.r25.u64;
	// stw r3,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r3.u32);
	// add r20,r4,r17
	ctx.r20.u64 = ctx.r4.u64 + ctx.r17.u64;
	// lwz r14,-284(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// lwz r15,-360(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r16,r11,r8
	ctx.r16.u64 = ctx.r8.u64 - ctx.r11.u64;
	// add r26,r26,r15
	ctx.r26.u64 = ctx.r26.u64 + ctx.r15.u64;
	// stw r31,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r31.u32);
	// subf r15,r27,r20
	ctx.r15.u64 = ctx.r20.u64 - ctx.r27.u64;
	// srawi r4,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r26.s32 >> 1;
	// subf r20,r11,r9
	ctx.r20.u64 = ctx.r9.u64 - ctx.r11.u64;
	// rotlwi r26,r3,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r3,-300(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// subf r22,r6,r20
	ctx.r22.u64 = ctx.r20.u64 - ctx.r6.u64;
	// lwz r20,-344(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r26,r26,r3
	ctx.r26.u64 = ctx.r26.u64 + ctx.r3.u64;
	// add r3,r25,r20
	ctx.r3.u64 = ctx.r25.u64 + ctx.r20.u64;
	// add r20,r26,r23
	ctx.r20.u64 = ctx.r26.u64 + ctx.r23.u64;
	// mulli r17,r16,11
	ctx.r17.s64 = static_cast<int64_t>(ctx.r16.u64 * static_cast<uint64_t>(11));
	// subf r25,r28,r15
	ctx.r25.u64 = ctx.r15.u64 - ctx.r28.u64;
	// mullw r26,r4,r18
	ctx.r26.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r18.s32);
	// srawi r15,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r15.s64 = ctx.r3.s32 >> 1;
	// add r25,r25,r24
	ctx.r25.u64 = ctx.r25.u64 + ctx.r24.u64;
	// add r20,r20,r17
	ctx.r20.u64 = ctx.r20.u64 + ctx.r17.u64;
	// add r31,r14,r26
	ctx.r31.u64 = ctx.r14.u64 + ctx.r26.u64;
	// mullw r26,r15,r21
	ctx.r26.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r21.s32);
	// add r25,r25,r6
	ctx.r25.u64 = ctx.r25.u64 + ctx.r6.u64;
	// srawi r24,r20,1
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x1) != 0);
	ctx.r24.s64 = ctx.r20.s32 >> 1;
	// add r15,r31,r26
	ctx.r15.u64 = ctx.r31.u64 + ctx.r26.u64;
	// mullw r26,r25,r18
	ctx.r26.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r18.s32);
	// mullw r31,r24,r19
	ctx.r31.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r19.s32);
	// subf r16,r10,r30
	ctx.r16.u64 = ctx.r30.u64 - ctx.r10.u64;
	// add r24,r31,r26
	ctx.r24.u64 = ctx.r31.u64 + ctx.r26.u64;
	// rlwinm r26,r16,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r16,-360(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// rlwinm r25,r22,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r20,r27,r26
	ctx.r20.u64 = ctx.r26.u64 - ctx.r27.u64;
	// subf r31,r5,r25
	ctx.r31.u64 = ctx.r25.u64 - ctx.r5.u64;
	// subf r25,r29,r16
	ctx.r25.u64 = ctx.r16.u64 - ctx.r29.u64;
	// add r27,r31,r27
	ctx.r27.u64 = ctx.r31.u64 + ctx.r27.u64;
	// subf r26,r8,r29
	ctx.r26.u64 = ctx.r29.u64 - ctx.r8.u64;
	// subf r25,r8,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r8.u64;
	// subf r29,r29,r20
	ctx.r29.u64 = ctx.r20.u64 - ctx.r29.u64;
	// add r16,r27,r7
	ctx.r16.u64 = ctx.r27.u64 + ctx.r7.u64;
	// rlwinm r27,r26,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r25,r10,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r10.u64;
	// subf r14,r7,r29
	ctx.r14.u64 = ctx.r29.u64 - ctx.r7.u64;
	// subf r31,r8,r11
	ctx.r31.u64 = ctx.r11.u64 - ctx.r8.u64;
	// add r26,r26,r27
	ctx.r26.u64 = ctx.r26.u64 + ctx.r27.u64;
	// subf r29,r28,r25
	ctx.r29.u64 = ctx.r25.u64 - ctx.r28.u64;
	// rotlwi r27,r30,2
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r30.u32, 2);
	// ld r4,-224(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -224);
	// rlwinm r17,r31,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// ld r23,-328(r1)
	ctx.r23.u64 = REX_LOAD_U64(ctx.r1.u32 + -328);
	// rlwinm r20,r16,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// ld r3,-240(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -240);
	// subf r28,r9,r14
	ctx.r28.u64 = ctx.r14.u64 - ctx.r9.u64;
	// lwz r14,-304(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
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
	// subf r8,r3,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r3.u64;
	// subf r27,r9,r7
	ctx.r27.u64 = ctx.r7.u64 - ctx.r9.u64;
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
	// ld r22,-232(r1)
	ctx.r22.u64 = REX_LOAD_U64(ctx.r1.u32 + -232);
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x881d3408
	if (!ctx.cr6.gt) goto loc_881D3408;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x881d3414
	goto loc_881D3414;
loc_881D3408:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_881D3414:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,-352(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// lwz r9,-260(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// li r25,128
	ctx.r25.s64 = 128;
	// lwz r27,-264(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r30,-316(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// li r24,16
	ctx.r24.s64 = 16;
	// lwz r29,-320(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// lwz r26,-268(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// lwz r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r7,-276(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -276);
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// b 0x881d346c
	goto loc_881D346C;
loc_881D344C:
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x881d3464
	if (!ctx.cr6.lt) goto loc_881D3464;
	// lbzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// stb r11,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r11.u8);
	// b 0x881d3468
	goto loc_881D3468;
loc_881D3464:
	// stb r24,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r24.u8);
loc_881D3468:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_881D346C:
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r8,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r8.u32);
	// stw r7,-276(r1)
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r7.u32);
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881d2eb8
	if (ctx.cr6.lt) goto loc_881D2EB8;
	// lwz r4,-248(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// b 0x881d3594
	goto loc_881D3594;
loc_881D348C:
	// lwz r7,84(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x881d3570
	if (!ctx.cr6.lt) goto loc_881D3570;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x881d3518
	if (!ctx.cr6.lt) goto loc_881D3518;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881d3594
	if (!ctx.cr6.gt) goto loc_881D3594;
loc_881D34B0:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-328(r1)
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.f13.u64);
	// lwz r11,-324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x881d34fc
	if (ctx.cr6.lt) goto loc_881D34FC;
	// lwz r10,80(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x881d34fc
	if (!ctx.cr6.lt) goto loc_881D34FC;
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
	// stb r5,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r5.u8);
	// b 0x881d3500
	goto loc_881D3500;
loc_881D34FC:
	// stb r24,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r24.u8);
loc_881D3500:
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881d34b0
	if (ctx.cr6.lt) goto loc_881D34B0;
	// b 0x881d3590
	goto loc_881D3590;
loc_881D3518:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881d3594
	if (!ctx.cr6.gt) goto loc_881D3594;
loc_881D3524:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-328(r1)
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.f13.u64);
	// lwz r11,-324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x881d3554
	if (ctx.cr6.lt) goto loc_881D3554;
	// lwz r7,80(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x881d3554
	if (!ctx.cr6.lt) goto loc_881D3554;
	// lbzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// stb r11,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r11.u8);
	// b 0x881d3558
	goto loc_881D3558;
loc_881D3554:
	// stb r24,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r24.u8);
loc_881D3558:
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881d3524
	if (ctx.cr6.lt) goto loc_881D3524;
	// b 0x881d3590
	goto loc_881D3590;
loc_881D3570:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881d3594
	if (!ctx.cr6.gt) goto loc_881D3594;
loc_881D357C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r24,1(r8)
	ea = 1 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r24.u8);
	ctx.r8.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881d357c
	if (ctx.cr6.lt) goto loc_881D357C;
loc_881D3590:
	// stw r8,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r8.u32);
loc_881D3594:
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stw r4,-248(r1)
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r4.u32);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881d1ad0
	if (ctx.cr6.lt) goto loc_881D1AD0;
loc_881D35A8:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(__restfpr_15) {
	REX_FUNC_PROLOGUE();
	// lfd f15,-136(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f15.u64 = REX_LOAD_U64(ctx.r12.u32 + -136);
	// lfd f16,-128(r12)
	ctx.f16.u64 = REX_LOAD_U64(ctx.r12.u32 + -128);
	// lfd f17,-120(r12)
	ctx.f17.u64 = REX_LOAD_U64(ctx.r12.u32 + -120);
	// lfd f18,-112(r12)
	ctx.f18.u64 = REX_LOAD_U64(ctx.r12.u32 + -112);
	// lfd f19,-104(r12)
	ctx.f19.u64 = REX_LOAD_U64(ctx.r12.u32 + -104);
	// lfd f20,-96(r12)
	ctx.f20.u64 = REX_LOAD_U64(ctx.r12.u32 + -96);
	// lfd f21,-88(r12)
	ctx.f21.u64 = REX_LOAD_U64(ctx.r12.u32 + -88);
	// lfd f22,-80(r12)
	ctx.f22.u64 = REX_LOAD_U64(ctx.r12.u32 + -80);
	// lfd f23,-72(r12)
	ctx.f23.u64 = REX_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	ctx.f24.u64 = REX_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = REX_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = REX_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = REX_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = REX_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = REX_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881F0928) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r28,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lwz r28,80(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r30,r11,24320
	ctx.r30.s64 = ctx.r11.s64 + 24320;
	// b 0x881f0970
	goto loc_881F0970;
loc_881F0970:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x881ef720
	ctx.lr = 0x881F0984;
	sub_881EF720(ctx, base);
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// lwz r28,80(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// addi r30,r10,24320
	ctx.r30.s64 = ctx.r10.s64 + 24320;
	// addi r10,r11,24324
	ctx.r10.s64 = ctx.r11.s64 + 24324;
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r28,-24(r1)
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881F1590) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x881F1598;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x881f15dc
	if (!ctx.cr6.eq) goto loc_881F15DC;
	// bl 0x88052a00
	ctx.lr = 0x881F15BC;
	sub_88052A00(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x880529c8
	ctx.lr = 0x881F15C8;
	sub_880529C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x881f16ac
	goto loc_881F16AC;
loc_881F15DC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881f15f4
	if (ctx.cr6.lt) goto loc_881F15F4;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lwz r11,24036(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24036);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x881f1618
	if (ctx.cr6.lt) goto loc_881F1618;
loc_881F15F4:
	// bl 0x88052a00
	ctx.lr = 0x881F15F8;
	sub_88052A00(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x880529c8
	ctx.lr = 0x881F1604;
	sub_880529C8(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x880523e8
	ctx.lr = 0x881F1610;
	sub_880523E8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x881f16ac
	goto loc_881F16AC;
loc_881F1618:
	// srawi r11,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 5;
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,24064
	ctx.r28.s64 = ctx.r10.s64 + 24064;
	// clrlwi r11,r30,27
	ctx.r11.u64 = ctx.r30.u32 & 0x1F;
	// mulli r29,r11,72
	ctx.r29.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r11,r27,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881f15f4
	if (ctx.cr0.eq) goto loc_881F15F4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881f1b20
	ctx.lr = 0x881F164C;
	sub_881F1B20(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881f167c
	if (ctx.cr0.eq) goto loc_881F167C;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881f1348
	ctx.lr = 0x881F1674;
	sub_881F1348(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// b 0x881f169c
	goto loc_881F169C;
loc_881F167C:
	// bl 0x880529c8
	ctx.lr = 0x881F1680;
	sub_880529C8(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x88052a00
	ctx.lr = 0x881F168C;
	sub_88052A00(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
loc_881F169C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x881f16d4
	ctx.lr = 0x881F16A8;
	sub_881F16D4(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
loc_881F16AC:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881FCBB0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// stvx128 v127,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v126,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v125,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v125.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v124,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v124.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v123,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v123.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v122,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v122.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v121,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v121.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v120,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v120.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v119,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v119.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v118,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v118.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v117,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v117.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v116,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v116.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v115,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v115.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v114,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v114.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v113,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v113.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v112,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v112.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v111,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v111.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v110,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v110.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v109,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v109.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v108,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v108.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v107,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v107.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v106,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v106.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v105,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v105.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v104,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v104.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v103,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v103.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v102,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v102.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v101,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v101.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v100,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v100.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v99,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v99.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v98,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v98.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v97,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v97.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v96,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v96.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v95,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v95.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v94,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v94.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v93,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v93.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v92,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v92.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v91,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v91.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v90,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v90.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v89,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v89.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v88,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v88.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v87,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v87.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v86,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v86.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v85,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v85.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v84,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v84.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v83,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v83.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v82,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v82.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v81,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v81.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v80,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v80.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v79,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v79.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v78,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v78.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v77,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v77.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v76,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v76.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v75,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v75.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v74,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v74.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v73,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v73.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v72,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v72.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v71,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v71.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v70,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v70.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v69,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v69.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v68,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v68.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v67,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v67.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v66,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v66.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v65,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v65.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v64,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v64.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v63,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v62,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v61,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v60,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v59,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v58,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v57,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v56,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v55,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v54,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v53,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v52,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v51,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v50,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v49,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v48,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v47,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v46,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v45,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v44,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v43,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v42,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v41,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v40,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v39,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v38,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v37,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v36,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v35,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v34,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v33,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v32,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v127,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v126,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v125,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v124,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v123,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v122,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v121,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v120,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v119,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v118,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v118.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v117,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v117.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v116,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v116.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v115,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v115.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v114,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v114.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v113,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v113.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v112,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v112.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v111,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v111.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v110,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v110.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v109,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v109.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v108,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v108.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v107,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v107.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v106,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v106.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v105,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v105.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v104,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v104.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v103,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v103.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v102,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v102.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v101,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v101.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v100,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v100.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v99,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v99.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v98,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v98.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v97,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v97.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v96,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v96.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v95,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v95.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v94,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v94.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v93,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v93.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v92,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v92.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v91,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v91.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v90,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v90.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v89,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v89.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v88,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v88.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v87,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v87.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v86,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v86.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v85,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v85.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v84,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v84.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v83,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v83.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v82,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v82.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v81,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v81.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v80,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v80.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v79,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v79.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v78,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v78.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v77,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v77.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v76,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v76.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v75,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v75.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v74,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v74.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v73,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v73.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v72,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v72.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v71,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v71.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v70,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v70.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v69,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v69.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v68,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v68.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v67,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v67.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v66,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v66.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v65,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v65.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v64,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v64.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v62,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v61,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v60,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v59,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v58,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v57,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v56,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v55,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v54,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v53,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v52,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v51,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v50,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v49,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v48,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v47,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v46,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v45,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v44,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v43,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v42,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v41,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v40,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v39,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v38,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v37,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v36,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v35,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v34,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v33,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v32,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8821DA20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8821DA28;
	__savegprlr_29(ctx, base);
	// stwu r1,-880(r1)
	ea = -880 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm r29,r11,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x8821b4b8
	ctx.lr = 0x8821DA4C;
	sub_8821B4B8(ctx, base);
	// li r10,1104
	ctx.r10.s64 = 1104;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v1,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8821bd90
	ctx.lr = 0x8821DA68;
	sub_8821BD90(ctx, base);
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8821E270) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8821E278;
	__savegprlr_29(ctx, base);
	// stwu r1,-880(r1)
	ea = -880 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm r29,r11,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x8821b4b8
	ctx.lr = 0x8821E29C;
	sub_8821B4B8(ctx, base);
	// li r10,1104
	ctx.r10.s64 = 1104;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v1,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8821c030
	ctx.lr = 0x8821E2B8;
	sub_8821C030(ctx, base);
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8821E2C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r6,48
	ctx.r6.s64 = 48;
	// lvx128 v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,96
	ctx.r7.s64 = 96;
	// li r8,144
	ctx.r8.s64 = 144;
	// vpkshus v24,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// li r9,192
	ctx.r9.s64 = 192;
	// li r10,240
	ctx.r10.s64 = 240;
	// li r11,288
	ctx.r11.s64 = 288;
	// lvx128 v2,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,336
	ctx.r12.s64 = 336;
	// lvx128 v3,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v4,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v25,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// lvx128 v5,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v26,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// lvx128 v6,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r6,r5,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v7,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v27,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// lvx128 v8,r4,r12
	ea = (ctx.r4.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// stvewx v24,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v24.u32[3 - ((ea & 0xF) >> 2)]);
	// add r7,r5,r6
	ctx.r7.u64 = ctx.r5.u64 + ctx.r6.u64;
	// vpkshus v28,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// vpkshus v29,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// add r9,r5,r8
	ctx.r9.u64 = ctx.r5.u64 + ctx.r8.u64;
	// vpkshus v30,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// stvewx v24,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v24.u32[3 - ((ea & 0xF) >> 2)]);
	// add r10,r6,r8
	ctx.r10.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stvewx v25,r3,r5
	ea = (ctx.r3.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v25.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus v31,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// stvewx v25,r4,r5
	ea = (ctx.r4.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v25.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stvewx v26,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v26.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v26,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v26.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v27,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v27.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v27,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v27.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v28,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v28.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v28,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v28.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v29.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v29.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v30,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v30.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v30,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v30.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v31.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v31.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8821E488) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lvsl v0,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r11,16
	ctx.r11.s64 = 16;
	// bne cr6,0x8821e5c4
	if (!ctx.cr6.eq) goto loc_8821E5C4;
	// lis r9,-30678
	ctx.r9.s64 = -2010513408;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvx128 v61,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r31,4
	ctx.r31.s64 = 4;
	// vperm128 v63,v63,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r7,r4,4
	ctx.r7.s64 = ctx.r4.s64 + 4;
	// lwz r9,25784(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 25784);
	// lvx128 v60,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vperm128 v62,v62,v60,v7
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// add r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// vperm128 v59,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 + ctx.r4.u64;
	// vperm128 v58,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v5,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvewx128 v59,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v59,r5,r31
	ea = (ctx.r5.u32 + ctx.r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v58,r5,r4
	ea = (ctx.r5.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v58,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v57,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lvx128 v54,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v54,v55,v6
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v62,v56,v57,v5
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// add r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 + ctx.r4.u64;
	// vperm128 v53,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v4,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r3,0
	ctx.r3.s64 = 0;
	// vperm128 v52,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v3,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvewx128 v53,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v53.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v53,r8,r31
	ea = (ctx.r8.u32 + ctx.r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v53.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v52,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v52,r8,r7
	ea = (ctx.r8.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lvx128 v51,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v49,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v48,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v48,v49,v4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vperm128 v62,v50,v51,v3
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// vperm128 v47,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// vperm128 v46,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v2,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvewx128 v47,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v47,r8,r31
	ea = (ctx.r8.u32 + ctx.r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v46,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v46,r8,r7
	ea = (ctx.r8.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v45,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v44,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// vperm128 v63,v44,v45,v2
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvsl v1,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v43,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v42,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v41,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v62,v42,v41,v1
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vperm128 v40,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvewx128 v43,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r10,r31
	ea = (ctx.r10.u32 + ctx.r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8821E5C4:
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvx128 v39,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v37,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v38,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v35,v39,v37,v0
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r7,r10,r5
	ctx.r7.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lvx128 v36,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// vperm128 v34,v38,v36,v7
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvx128 v35,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v0,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvx128 v34,r4,r5
	ea = (ctx.r4.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v33,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lvx128 v32,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v61,v32,v33,v6
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v60,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// stvx128 v61,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,0
	ctx.r3.s64 = 0;
	// lvsl v5,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v0,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvx128 v60,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lvx128 v63,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v57,v58,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v56,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v57,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvsl v4,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvx128 v56,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lvsl v0,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v63,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v53,v55,v54,v4
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vperm128 v52,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stvx128 v53,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvsl v3,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvx128 v52,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lvx128 v63,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v0,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v51,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v49,v51,v50,v3
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvx128 v62,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v48,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stvx128 v49,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v48,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v63,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v2,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v0,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v47,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lvx128 v62,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v45,v47,v46,v2
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vperm128 v44,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 + ctx.r4.u64;
	// stvx128 v45,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v1,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v0,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvx128 v44,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v43,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lvx128 v42,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lvx128 v62,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v41,v42,v43,v1
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// add r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 + ctx.r4.u64;
	// vperm128 v40,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v0,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvx128 v41,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v40,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v36,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v39,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v37,v39,v38,v7
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// stvx128 v37,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v36,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_882243B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// li r9,1104
	ctx.r9.s64 = 1104;
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lvx128 v1,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x88222908
	sub_88222908(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88224620) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88224628;
	__savegprlr_14(ctx, base);
	// stwu r1,-1024(r1)
	ea = -1024 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// stw r5,1060(r1)
	REX_STORE_U32(ctx.r1.u32 + 1060, ctx.r5.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r6,1068(r1)
	REX_STORE_U32(ctx.r1.u32 + 1068, ctx.r6.u32);
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// beq cr6,0x88224ad0
	if (ctx.cr6.eq) goto loc_88224AD0;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// beq cr6,0x8822490c
	if (ctx.cr6.eq) goto loc_8822490C;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x88224898
	if (!ctx.cr6.gt) goto loc_88224898;
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
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
	// li r5,-48
	ctx.r5.s64 = -48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r7,96
	ctx.r7.s64 = 96;
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
loc_882246C0:
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r31,r4,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v61,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r31,r31,r9
	ctx.r31.u64 = ctx.r31.u64 + ctx.r9.u64;
	// lwz r28,84(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r30,r8,r4
	ctx.r30.u64 = ctx.r8.u64 + ctx.r4.u64;
	// vperm128 v5,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// add r26,r9,r4
	ctx.r26.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v62,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r27,r31,r4
	ctx.r27.u64 = ctx.r31.u64 + ctx.r4.u64;
	// add r29,r30,r4
	ctx.r29.u64 = ctx.r30.u64 + ctx.r4.u64;
	// lvx128 v60,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v28,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r28,r28,r9
	ctx.r28.u64 = ctx.r28.u64 + ctx.r9.u64;
	// vmrglb v27,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r25,r29,r4
	ctx.r25.u64 = ctx.r29.u64 + ctx.r4.u64;
	// lvx128 v56,r26,r10
	ea = (ctx.r26.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r26
	temp.u32 = ctx.r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v59,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v62,v56,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v57,r31,r4
	ea = (ctx.r31.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r27,r10
	ea = (ctx.r27.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
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
	// lvsl v4,r0,r8
	temp.u32 = ctx.r8.u32;
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
	// lvx128 v51,r30,r4
	ea = (ctx.r30.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v58,v52,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvx128 v50,r29,r4
	ea = (ctx.r29.u32 + ctx.r4.u32) & ~0xF;
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
	// stvx128 v12,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v30,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// stvx128 v5,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v29,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// stvx128 v4,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v28,v14,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// stvx128 v3,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v27,v18,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
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
	// bdnz 0x882246c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_882246C0;
	// lwz r28,1068(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 1068);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88224898:
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x88224b90
	if (!ctx.cr6.gt) goto loc_88224B90;
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r29,r10,r4
	ctx.r29.u64 = ctx.r4.u64 - ctx.r10.u64;
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r9,r3,-48
	ctx.r9.s64 = ctx.r3.s64 + -48;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_882248CC:
	// lbzx r6,r29,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbzux r3,r8,r10
	ea = ctx.r8.u32 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lbz r30,0(r11)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// add r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r3,r30,r6
	ctx.r3.u64 = ctx.r30.u64 + ctx.r6.u64;
	// rlwinm r6,r5,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r3,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// sth r3,48(r9)
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r3.u16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sthu r6,96(r9)
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r6.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x882248cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_882248CC;
	// b 0x88224b90
	goto loc_88224B90;
loc_8822490C:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v45,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v44,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r30,r3,r4
	ctx.r30.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v43,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lvsl v2,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v6,v45,v43,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v42,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lvx128 v41,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v30,v44,v38,v2
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvx128 v40,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,192
	ctx.r29.s64 = ctx.r1.s64 + 192;
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v39,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v31,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v4,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vperm128 v3,v42,v41,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v35,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v1,v40,v39,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v34,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v12,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v37,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v36,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,240
	ctx.r30.s64 = ctx.r1.s64 + 240;
	// lvx128 v62,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v11,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v33,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v10,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v32,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v5,v12,v31
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// lvx128 v63,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,288
	ctx.r27.s64 = ctx.r1.s64 + 288;
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lvsl v2,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vadduhm v30,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v3,v63,v37,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v4,r0,r8
	temp.u32 = ctx.r8.u32;
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
	// stvx128 v26,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v4,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// stvx128 v27,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
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
	// li r5,4
	ctx.r5.s64 = 4;
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
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r9,r1,64
	ctx.r9.s64 = ctx.r1.s64 + 64;
	// stvx128 v2,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stvx128 v31,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v26,v27,v6
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// stvx128 v30,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v29,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r5,r11,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r11.u64;
	// stvx128 v28,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
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
loc_88224A90:
	// lbzx r6,r10,r5
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// lbzux r30,r8,r11
	ea = ctx.r8.u32 + ctx.r11.u32;
	ctx.r30.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// lbz r31,0(r10)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// add r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 + ctx.r6.u64;
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// sth r6,48(r9)
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r6.u16);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sthu r3,96(r9)
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x88224a90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88224A90;
	// b 0x88224b90
	goto loc_88224B90;
loc_88224AD0:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v59,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v58,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r10,16
	ctx.r10.s64 = 16;
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v57,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lvx128 v56,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
	// lvx128 v55,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,192
	ctx.r30.s64 = ctx.r1.s64 + 192;
	// lvx128 v54,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,240
	ctx.r29.s64 = ctx.r1.s64 + 240;
	// lvx128 v53,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v51,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v6,v59,v52,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v5,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v4,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v3,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v2,v58,v54,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvsl v1,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v31,v57,v55,v4
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vperm128 v30,v56,v53,v3
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vperm128 v29,v50,v51,v1
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmrghb v12,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v28,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v27,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v26,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v25,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v24,v12,v28
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
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
	// stvx128 v22,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v21,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v19,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_88224B90:
	// li r11,1104
	ctx.r11.s64 = 1104;
	// lwz r5,1060(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1060);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v1,r28,r11
	ea = (ctx.r28.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x88223088
	ctx.lr = 0x88224BA8;
	sub_88223088(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

