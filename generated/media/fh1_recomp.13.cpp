#include "fh1_funcs.13.h"

DEFINE_REX_FUNC(sub_88050130) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r11,r11,17632
	ctx.r11.s64 = ctx.r11.s64 + 17632;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_88050508) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r5,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r5.u32);
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x880505c0
	if (!ctx.cr6.eq) goto loc_880505C0;
	// bl 0x881e8f40
	ctx.lr = 0x88050534;
	sub_881E8F40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x88050544
	if (!ctx.cr0.eq) goto loc_88050544;
loc_8805053C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x88050584
	goto loc_88050584;
loc_88050544:
	// bl 0x88050bf0
	ctx.lr = 0x88050548;
	sub_88050BF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x88050558
	if (!ctx.cr0.eq) goto loc_88050558;
loc_88050550:
	// bl 0x881e8ee0
	ctx.lr = 0x88050554;
	sub_881E8EE0(ctx, base);
	// b 0x8805053c
	goto loc_8805053C;
loc_88050558:
	// bl 0x881e8e68
	ctx.lr = 0x8805055C;
	sub_881E8E68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8805059c
	if (!ctx.cr0.eq) goto loc_8805059C;
	// bl 0x881e8d88
	ctx.lr = 0x88050568;
	sub_881E8D88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8805059c
	if (!ctx.cr0.eq) goto loc_8805059C;
	// lis r10,-30680
	ctx.r10.s64 = -2010644480;
	// lwz r11,17888(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 17888);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,17888(r10)
	REX_STORE_U32(ctx.r10.u32 + 17888, ctx.r11.u32);
loc_88050580:
	// li r3,1
	ctx.r3.s64 = 1;
loc_88050584:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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
loc_8805059C:
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lwz r10,16712(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16712);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880505b8
	if (ctx.cr6.eq) goto loc_880505B8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880505B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880505B8:
	// bl 0x88050960
	ctx.lr = 0x880505BC;
	sub_88050960(ctx, base);
	// b 0x88050550
	goto loc_88050550;
loc_880505C0:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x88050580
	if (!ctx.cr6.eq) goto loc_88050580;
	// lis r10,-30680
	ctx.r10.s64 = -2010644480;
	// lwz r11,17888(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 17888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8805053c
	if (!ctx.cr6.gt) goto loc_8805053C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,17888(r10)
	REX_STORE_U32(ctx.r10.u32 + 17888, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lwz r11,17916(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 17916);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880505f8
	if (!ctx.cr6.eq) goto loc_880505F8;
	// bl 0x88050f48
	ctx.lr = 0x880505F8;
	sub_88050F48(ctx, base);
loc_880505F8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x88050624
	if (!ctx.cr6.eq) goto loc_88050624;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lwz r10,16712(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16712);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8805061c
	if (ctx.cr6.eq) goto loc_8805061C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8805061C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805061C:
	// bl 0x88050960
	ctx.lr = 0x88050620;
	sub_88050960(ctx, base);
	// bl 0x881e8ee0
	ctx.lr = 0x88050624;
	sub_881E8EE0(ctx, base);
loc_88050624:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	ctx.r12.s64 = ctx.r31.s64 + 112;
	// bl 0x88050654
	ctx.lr = 0x88050630;
	sub_88050654(ctx, base);
	// b 0x88050580
	goto loc_88050580;
}

DEFINE_REX_FUNC(sub_88057078) {
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
	// beq cr6,0x880570b0
	if (ctx.cr6.eq) goto loc_880570B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880570A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
loc_880570B0:
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

DEFINE_REX_FUNC(sub_88057AC8) {
	REX_FUNC_PROLOGUE();
	// stw r4,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88057BE0) {
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
	// bl 0x88062210
	ctx.lr = 0x88057BFC;
	sub_88062210(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,576
	ctx.r5.s64 = 576;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,640(r31)
	REX_STORE_U32(ctx.r31.u32 + 640, ctx.r30.u32);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// stw r30,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,636(r31)
	REX_STORE_U32(ctx.r31.u32 + 636, ctx.r30.u32);
	// stw r30,644(r31)
	REX_STORE_U32(ctx.r31.u32 + 644, ctx.r30.u32);
	// stw r30,648(r31)
	REX_STORE_U32(ctx.r31.u32 + 648, ctx.r30.u32);
	// stw r30,652(r31)
	REX_STORE_U32(ctx.r31.u32 + 652, ctx.r30.u32);
	// bl 0x88052d90
	ctx.lr = 0x88057C28;
	sub_88052D90(ctx, base);
	// stw r30,656(r31)
	REX_STORE_U32(ctx.r31.u32 + 656, ctx.r30.u32);
	// stw r30,660(r31)
	REX_STORE_U32(ctx.r31.u32 + 660, ctx.r30.u32);
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

DEFINE_REX_FUNC(sub_880588B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x880588C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88058954
	if (ctx.cr6.eq) goto loc_88058954;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88050000
	ctx.lr = 0x880588F0;
	sub_88050000(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x88050130
	ctx.lr = 0x880588FC;
	sub_88050130(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x880500e8
	ctx.lr = 0x88058908;
	sub_880500E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x880500d0
	ctx.lr = 0x88058914;
	sub_880500D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x88050118
	ctx.lr = 0x88058920;
	sub_88050118(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// rldicr r29,r11,63,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
loc_8805892C:
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// srd r6,r29,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r29.u64 >> (ctx.r10.u8 & 0x7F));
	// bl 0x88050058
	ctx.lr = 0x88058948;
	sub_88050058(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// blt cr6,0x8805892c
	if (ctx.cr6.lt) goto loc_8805892C;
loc_88058954:
	// li r28,72
	ctx.r28.s64 = 72;
loc_88058958:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_8805895C:
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r30,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88058978
	if (ctx.cr6.eq) goto loc_88058978;
	// bl 0x88050298
	ctx.lr = 0x88058974;
	sub_88050298(ctx, base);
	// stwx r27,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r27.u32);
loc_88058978:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// blt cr6,0x8805895c
	if (ctx.cr6.lt) goto loc_8805895C;
	// addi r28,r28,3
	ctx.r28.s64 = ctx.r28.s64 + 3;
	// cmplwi cr6,r28,81
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 81, ctx.xer);
	// blt cr6,0x88058958
	if (ctx.cr6.lt) goto loc_88058958;
	// lwz r3,324(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 324);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880589a4
	if (ctx.cr6.eq) goto loc_880589A4;
	// bl 0x88050298
	ctx.lr = 0x880589A0;
	sub_88050298(ctx, base);
	// stw r27,324(r31)
	REX_STORE_U32(ctx.r31.u32 + 324, ctx.r27.u32);
loc_880589A4:
	// lwz r3,328(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 328);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880589b8
	if (ctx.cr6.eq) goto loc_880589B8;
	// bl 0x88050298
	ctx.lr = 0x880589B4;
	sub_88050298(ctx, base);
	// stw r27,328(r31)
	REX_STORE_U32(ctx.r31.u32 + 328, ctx.r27.u32);
loc_880589B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88057110
	ctx.lr = 0x880589C0;
	sub_88057110(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805B658) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8805B660;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// beq cr6,0x8805b698
	if (ctx.cr6.eq) goto loc_8805B698;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805B68C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8805b728
	if (ctx.cr6.lt) goto loc_8805B728;
loc_8805B698:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805b6b8
	if (ctx.cr6.eq) goto loc_8805B6B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805B6B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8805B6B8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8805b728
	if (ctx.cr6.lt) goto loc_8805B728;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805b6e0
	if (ctx.cr6.eq) goto loc_8805B6E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805B6DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8805B6E0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8805b728
	if (ctx.cr6.lt) goto loc_8805B728;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x88067be8
	ctx.lr = 0x8805B6F0;
	sub_88067BE8(ctx, base);
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x88067be8
	ctx.lr = 0x8805B6F8;
	sub_88067BE8(ctx, base);
	// addi r3,r31,212
	ctx.r3.s64 = ctx.r31.s64 + 212;
	// bl 0x88067be8
	ctx.lr = 0x8805B700;
	sub_88067BE8(ctx, base);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// std r29,288(r31)
	REX_STORE_U64(ctx.r31.u32 + 288, ctx.r29.u64);
	// std r29,304(r31)
	REX_STORE_U64(ctx.r31.u32 + 304, ctx.r29.u64);
	// std r29,296(r31)
	REX_STORE_U64(ctx.r31.u32 + 296, ctx.r29.u64);
	// stw r29,316(r31)
	REX_STORE_U32(ctx.r31.u32 + 316, ctx.r29.u32);
	// stw r29,320(r31)
	REX_STORE_U32(ctx.r31.u32 + 320, ctx.r29.u32);
	// lfs f0,6708(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6708);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,324(r31)
	REX_STORE_U32(ctx.r31.u32 + 324, ctx.r29.u32);
	// stfs f0,340(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 340, temp.u32);
	// stw r29,328(r31)
	REX_STORE_U32(ctx.r31.u32 + 328, ctx.r29.u32);
loc_8805B728:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805C340) {
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
	// bl 0x88061fb8
	ctx.lr = 0x8805C358;
	sub_88061FB8(ctx, base);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,9296
	ctx.r9.s64 = ctx.r10.s64 + 9296;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8805D938) {
	REX_FUNC_PROLOGUE();
	// lis r10,22358
	ctx.r10.s64 = 1465253888;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,17201
	ctx.r9.u64 = ctx.r10.u64 | 17201;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8805d968
	if (!ctx.cr6.eq) goto loc_8805D968;
	// lis r10,22349
	ctx.r10.s64 = 1464664064;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r8,r10,22081
	ctx.r8.u64 = ctx.r10.u64 | 22081;
	// stw r9,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r8,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// blr 
	return;
loc_8805D968:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8805DDC0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r3,2792(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 2792);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8805DDF0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,2272(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 2272);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,2284(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 2284);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8805E948) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,560(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 560);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8805e9c8
	if (ctx.cr6.eq) goto loc_8805E9C8;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8805e9c8
	if (ctx.cr0.lt) goto loc_8805E9C8;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8807c288
	ctx.lr = 0x8805E980;
	sub_8807C288(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8805e9c8
	if (ctx.cr6.eq) goto loc_8805E9C8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8805e9c8
	if (ctx.cr6.eq) goto loc_8805E9C8;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,564(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// bl 0x8807ce58
	ctx.lr = 0x8805E9A0;
	sub_8807CE58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8805e9c8
	if (!ctx.cr6.eq) goto loc_8805E9C8;
	// lwz r3,564(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// bl 0x8807da70
	ctx.lr = 0x8805E9B0;
	sub_8807DA70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_8805E9C8:
	// li r3,-100
	ctx.r3.s64 = -100;
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

DEFINE_REX_FUNC(sub_88062010) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
loc_88062014:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x88062014
	if (!ctx.cr0.eq) goto loc_88062014;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88062210) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88062258) {
	REX_FUNC_PROLOGUE();
	// stw r4,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88062320) {
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
	// bl 0x88065588
	ctx.lr = 0x88062338;
	sub_88065588(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806234C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,504(r31)
	REX_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// stw r10,500(r31)
	REX_STORE_U32(ctx.r31.u32 + 500, ctx.r10.u32);
	// stw r11,508(r31)
	REX_STORE_U32(ctx.r31.u32 + 508, ctx.r11.u32);
	// stw r10,512(r31)
	REX_STORE_U32(ctx.r31.u32 + 512, ctx.r10.u32);
	// std r11,128(r31)
	REX_STORE_U64(ctx.r31.u32 + 128, ctx.r11.u64);
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

DEFINE_REX_FUNC(sub_880637E8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,13
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 13, ctx.xer);
	// bgt cr6,0x880638b0
	if (ctx.cr6.gt) goto loc_880638B0;
	// lis r12,-30714
	ctx.r12.s64 = -2012872704;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,14344
	ctx.r12.s64 = ctx.r12.s64 + 14344;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u32) {
	case 0:
		goto loc_88063840;
	case 1:
		goto loc_88063848;
	case 2:
		goto loc_88063850;
	case 3:
		goto loc_88063858;
	case 4:
		goto loc_88063860;
	case 5:
		goto loc_88063868;
	case 6:
		goto loc_88063870;
	case 7:
		goto loc_88063878;
	case 8:
		goto loc_88063880;
	case 9:
		goto loc_88063888;
	case 10:
		goto loc_88063890;
	case 11:
		goto loc_88063898;
	case 12:
		goto loc_880638A0;
	case 13:
		goto loc_880638A8;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_88063840:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_88063848:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_88063850:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_88063858:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_88063860:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_88063868:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_88063870:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_88063878:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_88063880:
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
loc_88063888:
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_88063890:
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
loc_88063898:
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
loc_880638A0:
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
loc_880638A8:
	// li r3,14
	ctx.r3.s64 = 14;
	// blr 
	return;
loc_880638B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88064A10) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bne cr6,0x88064a4c
	if (!ctx.cr6.eq) goto loc_88064A4C;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x88064af4
	goto loc_88064AF4;
loc_88064A4C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x880cb758
	ctx.lr = 0x88064A60;
	sub_880CB758(ctx, base);
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r30,r11,22
	ctx.r30.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x88064ae4
	if (ctx.cr6.eq) goto loc_88064AE4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064af0
	if (ctx.cr6.lt) goto loc_88064AF0;
loc_88064A78:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064af0
	if (ctx.cr6.lt) goto loc_88064AF0;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x88064ac8
	if (!ctx.cr6.eq) goto loc_88064AC8;
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x88064ac8
	if (!ctx.cr6.eq) goto loc_88064AC8;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lbz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r3,572(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 572);
	// bl 0x880cb730
	ctx.lr = 0x88064AAC;
	sub_880CB730(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064af0
	if (ctx.cr6.lt) goto loc_88064AF0;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x880cc918
	ctx.lr = 0x88064AC0;
	sub_880CC918(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064af0
	if (ctx.cr6.lt) goto loc_88064AF0;
loc_88064AC8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x880cb7c0
	ctx.lr = 0x88064ADC;
	sub_880CB7C0(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x88064a78
	if (!ctx.cr6.eq) goto loc_88064A78;
loc_88064AE4:
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// bl 0x880cb828
	ctx.lr = 0x88064AF0;
	sub_880CB828(ctx, base);
loc_88064AF0:
	// bl 0x880638b8
	ctx.lr = 0x88064AF4;
	sub_880638B8(ctx, base);
loc_88064AF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

DEFINE_REX_FUNC(sub_880672E8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x88066988
	ctx.lr = 0x88067318;
	sub_88066988(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88067700) {
	REX_FUNC_PROLOGUE();
	// stw r4,448(r3)
	REX_STORE_U32(ctx.r3.u32 + 448, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88067718) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r3,364
	ctx.r7.s64 = ctx.r3.s64 + 364;
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

DEFINE_REX_FUNC(sub_88067810) {
	REX_FUNC_PROLOGUE();
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880678B8) {
	REX_FUNC_PROLOGUE();
	// lwz r10,64(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r10,r10,60
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(60));
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,52(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 52);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_88067B18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r10,52(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x88067b5c
	if (ctx.cr6.lt) goto loc_88067B5C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r3,68
	ctx.r8.s64 = ctx.r3.s64 + 68;
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
loc_88067B3C:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x88067b3c
	if (!ctx.cr0.eq) goto loc_88067B3C;
	// blr 
	return;
loc_88067B5C:
	// addi r11,r3,68
	ctx.r11.s64 = ctx.r3.s64 + 68;
loc_88067B60:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x88067b60
	if (!ctx.cr0.eq) goto loc_88067B60;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88069140) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,252(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806916C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,31
	ctx.r9.u64 = ctx.r3.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x880691a8
	if (!ctx.cr6.eq) goto loc_880691A8;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069194;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x880691a8
	if (!ctx.cr6.gt) goto loc_880691A8;
	// addi r3,r11,-5
	ctx.r3.s64 = ctx.r11.s64 + -5;
	// bl 0x881ec8a8
	ctx.lr = 0x880691A8;
	sub_881EC8A8(ctx, base);
loc_880691A8:
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880691BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,240(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 240);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880691d8
	if (ctx.cr6.eq) goto loc_880691D8;
	// lwz r3,272(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// bl 0x881ec5b8
	ctx.lr = 0x880691D0;
	sub_881EC5B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,240(r31)
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
loc_880691D8:
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

DEFINE_REX_FUNC(sub_8806BEF8) {
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
	// addi r10,r11,10896
	ctx.r10.s64 = ctx.r11.s64 + 10896;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8806a140
	ctx.lr = 0x8806BF24;
	sub_8806A140(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88062000
	ctx.lr = 0x8806BF2C;
	sub_88062000(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8806bf4c
	if (ctx.cr6.eq) goto loc_8806BF4C;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32818
	ctx.r4.u64 = ctx.r4.u64 | 32818;
	// bl 0x88050358
	ctx.lr = 0x8806BF48;
	sub_88050358(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8806BF4C:
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

DEFINE_REX_FUNC(sub_8806CA38) {
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
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lwz r11,18412(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8806cb24
	if (!ctx.cr6.eq) goto loc_8806CB24;
	// lwz r11,800(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 800);
	// lfd f13,7896(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r3.u32 + 7896);
	// lwz r10,796(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 796);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lwz r5,7936(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 7936);
	// mullw r7,r11,r10
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lfd f0,9656(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 9656);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// fmul f9,f10,f13
	ctx.f9.f64 = ctx.f10.f64 * ctx.f13.f64;
	// fdiv f1,f9,f8
	ctx.f1.f64 = ctx.f9.f64 / ctx.f8.f64;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8806cb24
	if (!ctx.cr6.lt) goto loc_8806CB24;
	// lwz r11,30408(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806cb1c
	if (ctx.cr6.eq) goto loc_8806CB1C;
	// lwz r11,31012(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31012);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806cacc
	if (ctx.cr6.eq) goto loc_8806CACC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,30724(r3)
	REX_STORE_U32(ctx.r3.u32 + 30724, ctx.r11.u32);
	// stw r11,30720(r3)
	REX_STORE_U32(ctx.r3.u32 + 30720, ctx.r11.u32);
	// stw r11,30732(r3)
	REX_STORE_U32(ctx.r3.u32 + 30732, ctx.r11.u32);
	// b 0x8806cad8
	goto loc_8806CAD8;
loc_8806CACC:
	// stw r10,30724(r3)
	REX_STORE_U32(ctx.r3.u32 + 30724, ctx.r10.u32);
	// stw r10,30720(r3)
	REX_STORE_U32(ctx.r3.u32 + 30720, ctx.r10.u32);
	// stw r10,30732(r3)
	REX_STORE_U32(ctx.r3.u32 + 30732, ctx.r10.u32);
loc_8806CAD8:
	// lwz r11,31016(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31016);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806caf8
	if (ctx.cr6.eq) goto loc_8806CAF8;
	// lwz r11,30624(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30624);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,30628(r3)
	REX_STORE_U32(ctx.r3.u32 + 30628, ctx.r9.u32);
	// b 0x8806cafc
	goto loc_8806CAFC;
loc_8806CAF8:
	// stw r10,30628(r3)
	REX_STORE_U32(ctx.r3.u32 + 30628, ctx.r10.u32);
loc_8806CAFC:
	// lwz r11,8104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8806cb24
	if (!ctx.cr6.gt) goto loc_8806CB24;
	// bl 0x8807e080
	ctx.lr = 0x8806CB0C;
	sub_8807E080(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8806CB1C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2812(r3)
	REX_STORE_U32(ctx.r3.u32 + 2812, ctx.r11.u32);
loc_8806CB24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8806F670) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,5003
	ctx.r11.s64 = ctx.r4.s64 + 5003;
	// addi r10,r4,5006
	ctx.r10.s64 = ctx.r4.s64 + 5006;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r3
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// lwzx r6,r8,r3
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// lwz r5,0(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stw r5,20140(r3)
	REX_STORE_U32(ctx.r3.u32 + 20140, ctx.r5.u32);
	// lwz r4,4(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r4,20144(r3)
	REX_STORE_U32(ctx.r3.u32 + 20144, ctx.r4.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,20148(r3)
	REX_STORE_U32(ctx.r3.u32 + 20148, ctx.r11.u32);
	// lwz r10,16(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// stw r10,20132(r3)
	REX_STORE_U32(ctx.r3.u32 + 20132, ctx.r10.u32);
	// lwz r9,20(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// stw r9,20136(r3)
	REX_STORE_U32(ctx.r3.u32 + 20136, ctx.r9.u32);
	// lwz r8,0(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r8,20164(r3)
	REX_STORE_U32(ctx.r3.u32 + 20164, ctx.r8.u32);
	// lwz r7,4(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stw r7,20168(r3)
	REX_STORE_U32(ctx.r3.u32 + 20168, ctx.r7.u32);
	// lwz r5,8(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// stw r5,20172(r3)
	REX_STORE_U32(ctx.r3.u32 + 20172, ctx.r5.u32);
	// lwz r4,12(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// stw r4,20176(r3)
	REX_STORE_U32(ctx.r3.u32 + 20176, ctx.r4.u32);
	// lwz r11,16(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// stw r11,20152(r3)
	REX_STORE_U32(ctx.r3.u32 + 20152, ctx.r11.u32);
	// lwz r10,20(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// stw r10,20156(r3)
	REX_STORE_U32(ctx.r3.u32 + 20156, ctx.r10.u32);
	// lwz r9,24(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// stw r9,20160(r3)
	REX_STORE_U32(ctx.r3.u32 + 20160, ctx.r9.u32);
	// lwz r8,28(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 28);
	// stw r8,20180(r3)
	REX_STORE_U32(ctx.r3.u32 + 20180, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8806FD80) {
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
	// lwz r11,632(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,624(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 624);
	// lwz r9,2572(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 2572);
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,1352(r3)
	REX_STORE_U32(ctx.r3.u32 + 1352, ctx.r8.u32);
	// lwz r7,648(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 648);
	// lwz r6,640(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 640);
	// subf r5,r6,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r6.u64;
	// stw r5,1364(r3)
	REX_STORE_U32(ctx.r3.u32 + 1364, ctx.r5.u32);
	// lwz r9,1352(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1352);
	// lwz r8,1364(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1364);
	// lwz r4,636(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 636);
	// lwz r3,628(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 628);
	// subf r11,r3,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r3.u64;
	// stw r11,1360(r31)
	REX_STORE_U32(ctx.r31.u32 + 1360, ctx.r11.u32);
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r6,644(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 644);
	// lwz r10,652(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 652);
	// subf r5,r6,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r6.u64;
	// rotlwi r6,r5,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,1372(r31)
	REX_STORE_U32(ctx.r31.u32 + 1372, ctx.r5.u32);
	// stw r9,816(r31)
	REX_STORE_U32(ctx.r31.u32 + 816, ctx.r9.u32);
	// stw r8,820(r31)
	REX_STORE_U32(ctx.r31.u32 + 820, ctx.r8.u32);
	// stw r7,824(r31)
	REX_STORE_U32(ctx.r31.u32 + 824, ctx.r7.u32);
	// stw r6,828(r31)
	REX_STORE_U32(ctx.r31.u32 + 828, ctx.r6.u32);
	// beq cr6,0x8806fe30
	if (ctx.cr6.eq) goto loc_8806FE30;
	// lwz r10,796(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// lwz r11,800(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// srawi r10,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,820(r31)
	REX_STORE_U32(ctx.r31.u32 + 820, ctx.r11.u32);
	// rlwinm r3,r10,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,828(r31)
	REX_STORE_U32(ctx.r31.u32 + 828, ctx.r10.u32);
	// stw r4,816(r31)
	REX_STORE_U32(ctx.r31.u32 + 816, ctx.r4.u32);
	// stw r3,824(r31)
	REX_STORE_U32(ctx.r31.u32 + 824, ctx.r3.u32);
loc_8806FE30:
	// lwz r10,816(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 816);
	// mullw r5,r7,r9
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// lwz r11,820(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 820);
	// lwz r4,796(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// stw r5,1376(r31)
	REX_STORE_U32(ctx.r31.u32 + 1376, ctx.r5.u32);
	// addi r3,r10,32
	ctx.r3.s64 = ctx.r10.s64 + 32;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r3,1356(r31)
	REX_STORE_U32(ctx.r31.u32 + 1356, ctx.r3.u32);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// stw r11,1368(r31)
	REX_STORE_U32(ctx.r31.u32 + 1368, ctx.r11.u32);
	// bne cr6,0x8806fe6c
	if (!ctx.cr6.eq) goto loc_8806FE6C;
	// lwz r11,800(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8806fe70
	if (ctx.cr6.eq) goto loc_8806FE70;
loc_8806FE6C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8806FE70:
	// stw r10,832(r31)
	REX_STORE_U32(ctx.r31.u32 + 832, ctx.r10.u32);
	// addi r10,r9,64
	ctx.r10.s64 = ctx.r9.s64 + 64;
	// addi r11,r8,32
	ctx.r11.s64 = ctx.r8.s64 + 32;
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// stw r10,1380(r31)
	REX_STORE_U32(ctx.r31.u32 + 1380, ctx.r10.u32);
	// srawi r8,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 4;
	// stw r11,1384(r31)
	REX_STORE_U32(ctx.r31.u32 + 1384, ctx.r11.u32);
	// stw r9,720(r31)
	REX_STORE_U32(ctx.r31.u32 + 720, ctx.r9.u32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mullw r3,r8,r9
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// stw r8,724(r31)
	REX_STORE_U32(ctx.r31.u32 + 724, ctx.r8.u32);
	// stw r3,728(r31)
	REX_STORE_U32(ctx.r31.u32 + 728, ctx.r3.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r7,64
	ctx.r8.s64 = ctx.r7.s64 + 64;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stw r9,732(r31)
	REX_STORE_U32(ctx.r31.u32 + 732, ctx.r9.u32);
	// addi r7,r6,32
	ctx.r7.s64 = ctx.r6.s64 + 32;
	// stw r8,1388(r31)
	REX_STORE_U32(ctx.r31.u32 + 1388, ctx.r8.u32);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r6,r10,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r7,1392(r31)
	REX_STORE_U32(ctx.r31.u32 + 1392, ctx.r7.u32);
	// rlwinm r9,r4,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r3,1408(r31)
	REX_STORE_U32(ctx.r31.u32 + 1408, ctx.r3.u32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r6,1404(r31)
	REX_STORE_U32(ctx.r31.u32 + 1404, ctx.r6.u32);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r9,1400(r31)
	REX_STORE_U32(ctx.r31.u32 + 1400, ctx.r9.u32);
	// stw r11,1412(r31)
	REX_STORE_U32(ctx.r31.u32 + 1412, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,1396(r31)
	REX_STORE_U32(ctx.r31.u32 + 1396, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e6cc8
	ctx.lr = 0x8806FEF0;
	sub_880E6CC8(ctx, base);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bne cr6,0x8806ff04
	if (!ctx.cr6.eq) goto loc_8806FF04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f5b50
	ctx.lr = 0x8806FF04;
	sub_880F5B50(ctx, base);
loc_8806FF04:
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

DEFINE_REX_FUNC(sub_88077A88) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88077A90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,676(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 676);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8806e7b8
	ctx.lr = 0x88077AA4;
	sub_8806E7B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1416(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1416);
	// bl 0x88102570
	ctx.lr = 0x88077AB0;
	sub_88102570(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1416(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1416);
	// bl 0x880daed0
	ctx.lr = 0x88077ABC;
	sub_880DAED0(ctx, base);
	// lwz r11,2424(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2424);
	// stw r3,20900(r31)
	REX_STORE_U32(ctx.r31.u32 + 20900, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88077ad4
	if (ctx.cr6.eq) goto loc_88077AD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880eb798
	ctx.lr = 0x88077AD4;
	sub_880EB798(ctx, base);
loc_88077AD4:
	// lwz r4,31544(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x88077aec
	if (!ctx.cr6.eq) goto loc_88077AEC;
	// lwz r11,27988(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 27988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88077af4
	if (!ctx.cr6.eq) goto loc_88077AF4;
loc_88077AEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880706a8
	ctx.lr = 0x88077AF4;
	sub_880706A8(ctx, base);
loc_88077AF4:
	// lwz r11,2648(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2648);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88077b08
	if (!ctx.cr6.eq) goto loc_88077B08;
	// lwz r10,2592(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2592);
	// stw r10,2588(r31)
	REX_STORE_U32(ctx.r31.u32 + 2588, ctx.r10.u32);
loc_88077B08:
	// lwz r10,2564(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2564);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88077b78
	if (ctx.cr6.eq) goto loc_88077B78;
	// lwz r10,6784(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6784);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88077b3c
	if (ctx.cr6.eq) goto loc_88077B3C;
	// lwz r10,28136(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28136);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x88077b3c
	if (ctx.cr6.eq) goto loc_88077B3C;
	// bl 0x881ee8e8
	ctx.lr = 0x88077B30;
	sub_881EE8E8(ctx, base);
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// stw r11,2588(r31)
	REX_STORE_U32(ctx.r31.u32 + 2588, ctx.r11.u32);
	// b 0x88077b58
	goto loc_88077B58;
loc_88077B3C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88077b58
	if (ctx.cr6.eq) goto loc_88077B58;
	// lwz r11,20256(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88077b58
	if (ctx.cr6.eq) goto loc_88077B58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880713e0
	ctx.lr = 0x88077B58;
	sub_880713E0(ctx, base);
loc_88077B58:
	// lwz r11,2624(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2624);
	// lwz r10,2588(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2588);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88077b6c
	if (!ctx.cr6.gt) goto loc_88077B6C;
	// stw r11,2588(r31)
	REX_STORE_U32(ctx.r31.u32 + 2588, ctx.r11.u32);
loc_88077B6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,2588(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2588);
	// bl 0x88071bf0
	ctx.lr = 0x88077B78;
	sub_88071BF0(ctx, base);
loc_88077B78:
	// lwz r11,31544(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88077ba4
	if (ctx.cr6.eq) goto loc_88077BA4;
	// lwz r11,28132(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,2588(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2588);
	// bne cr6,0x88077b9c
	if (!ctx.cr6.eq) goto loc_88077B9C;
	// stw r11,2632(r31)
	REX_STORE_U32(ctx.r31.u32 + 2632, ctx.r11.u32);
	// b 0x88077bac
	goto loc_88077BAC;
loc_88077B9C:
	// stw r11,2636(r31)
	REX_STORE_U32(ctx.r31.u32 + 2636, ctx.r11.u32);
	// b 0x88077bac
	goto loc_88077BAC;
loc_88077BA4:
	// lwz r11,2588(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2588);
	// stw r11,2628(r31)
	REX_STORE_U32(ctx.r31.u32 + 2628, ctx.r11.u32);
loc_88077BAC:
	// lwz r11,28048(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28048);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88077bf8
	if (ctx.cr6.eq) goto loc_88077BF8;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r29,28044(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 28044);
	// lwz r10,7056(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7056);
	// stw r11,28044(r31)
	REX_STORE_U32(ctx.r31.u32 + 28044, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88077BD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r3,19456(r31)
	REX_STORE_U32(ctx.r31.u32 + 19456, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,28044(r31)
	REX_STORE_U32(ctx.r31.u32 + 28044, ctx.r9.u32);
	// lwz r8,7056(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7056);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88077BF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,28044(r31)
	REX_STORE_U32(ctx.r31.u32 + 28044, ctx.r29.u32);
	// b 0x88077c04
	goto loc_88077C04;
loc_88077BF8:
	// lwz r11,7056(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7056);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88077C04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88077C04:
	// lwz r11,2564(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2564);
	// stw r3,19456(r31)
	REX_STORE_U32(ctx.r31.u32 + 19456, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88077c1c
	if (ctx.cr6.eq) goto loc_88077C1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88071c78
	ctx.lr = 0x88077C1C;
	sub_88071C78(ctx, base);
loc_88077C1C:
	// lwz r11,1692(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1692);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x88077d44
	if (ctx.cr6.lt) goto loc_88077D44;
	// lwz r11,1696(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x88077d44
	if (ctx.cr6.lt) goto loc_88077D44;
	// lwz r11,28004(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28004);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88077c48
	if (ctx.cr6.eq) goto loc_88077C48;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x88077c5c
	goto loc_88077C5C;
loc_88077C48:
	// lwz r11,28132(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28132);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
loc_88077C5C:
	// lwz r10,720(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88077d44
	if (ctx.cr6.eq) goto loc_88077D44;
loc_88077C70:
	// lwz r10,1692(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1692);
	// lwz r7,720(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r9,2548(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// mullw r6,r10,r7
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r10,r9
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r4,16384
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16384, ctx.xer);
	// beq cr6,0x88077c9c
	if (ctx.cr6.eq) goto loc_88077C9C;
	// sthx r8,r10,r9
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u16);
loc_88077C9C:
	// lwz r10,1692(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1692);
	// lwz r7,720(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,2548(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r10,r9
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,16384
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16384, ctx.xer);
	// beq cr6,0x88077cd0
	if (ctx.cr6.eq) goto loc_88077CD0;
	// sthx r8,r10,r9
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u16);
loc_88077CD0:
	// lwz r10,1696(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1696);
	// lwz r7,720(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r9,2548(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// mullw r6,r10,r7
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r10,r9
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r4,16384
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16384, ctx.xer);
	// beq cr6,0x88077cfc
	if (ctx.cr6.eq) goto loc_88077CFC;
	// sthx r8,r10,r9
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u16);
loc_88077CFC:
	// lwz r10,1696(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1696);
	// lwz r7,720(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,2548(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r10,r9
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,16384
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16384, ctx.xer);
	// beq cr6,0x88077d30
	if (ctx.cr6.eq) goto loc_88077D30;
	// sthx r8,r10,r9
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u16);
loc_88077D30:
	// lwz r10,720(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x88077c70
	if (ctx.cr6.lt) goto loc_88077C70;
loc_88077D44:
	// lwz r11,31108(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88077d6c
	if (ctx.cr6.eq) goto loc_88077D6C;
	// lwz r11,20268(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88077d6c
	if (!ctx.cr6.eq) goto loc_88077D6C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,724(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// lwz r3,31136(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 31136);
	// bl 0x88052d90
	ctx.lr = 0x88077D6C;
	sub_88052D90(ctx, base);
loc_88077D6C:
	// lwz r11,7140(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88077d80
	if (ctx.cr6.eq) goto loc_88077D80;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x88077d98
	if (!ctx.cr6.eq) goto loc_88077D98;
loc_88077D80:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f40c0
	ctx.lr = 0x88077D8C;
	sub_880F40C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,676(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 676);
	// bl 0x88074338
	ctx.lr = 0x88077D98;
	sub_88074338(ctx, base);
loc_88077D98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8807EEE8) {
	REX_FUNC_PROLOGUE();
	// subf r11,r5,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r5.u64;
	// lwz r10,1376(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1376);
	// lfd f0,30768(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r3.u32 + 30768);
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lfd f9,30776(r3)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r3.u32 + 30776);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// fsub f8,f0,f9
	ctx.f8.f64 = ctx.f0.f64 - ctx.f9.f64;
	// std r9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r7,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f13,1488(r8)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r8.u32 + 1488);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fdiv f7,f12,f10
	ctx.f7.f64 = ctx.f12.f64 / ctx.f10.f64;
	// fdiv f0,f7,f8
	ctx.f0.f64 = ctx.f7.f64 / ctx.f8.f64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfd f0,30800(r3)
	REX_STORE_U64(ctx.r3.u32 + 30800, ctx.f0.u64);
	// stw r11,30748(r3)
	REX_STORE_U32(ctx.r3.u32 + 30748, ctx.r11.u32);
	// stw r11,30632(r3)
	REX_STORE_U32(ctx.r3.u32 + 30632, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8807FB50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8807FB58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,728(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 728);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r8,3412(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 3412);
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,1380(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 1380);
	// lwz r30,3104(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 3104);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r29,1624(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// rlwinm r10,r3,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r8,3416(r31)
	REX_STORE_U32(ctx.r31.u32 + 3416, ctx.r8.u32);
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stw r7,3420(r31)
	REX_STORE_U32(ctx.r31.u32 + 3420, ctx.r7.u32);
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// stw r6,3424(r31)
	REX_STORE_U32(ctx.r31.u32 + 3424, ctx.r6.u32);
	// rlwinm r8,r8,9,0,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 9) & 0xFFFFFE00;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,3428(r31)
	REX_STORE_U32(ctx.r31.u32 + 3428, ctx.r10.u32);
	// addi r7,r3,-8
	ctx.r7.s64 = ctx.r3.s64 + -8;
	// add r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 + ctx.r9.u64;
	// stw r5,3432(r31)
	REX_STORE_U32(ctx.r31.u32 + 3432, ctx.r5.u32);
	// rlwinm r6,r11,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r7,19088(r31)
	REX_STORE_U32(ctx.r31.u32 + 19088, ctx.r7.u32);
	// add r5,r4,r9
	ctx.r5.u64 = ctx.r4.u64 + ctx.r9.u64;
	// stw r4,3436(r31)
	REX_STORE_U32(ctx.r31.u32 + 3436, ctx.r4.u32);
	// add r4,r8,r30
	ctx.r4.u64 = ctx.r8.u64 + ctx.r30.u64;
	// stw r6,19460(r31)
	REX_STORE_U32(ctx.r31.u32 + 19460, ctx.r6.u32);
	// stw r5,3440(r31)
	REX_STORE_U32(ctx.r31.u32 + 3440, ctx.r5.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r4,3108(r31)
	REX_STORE_U32(ctx.r31.u32 + 3108, ctx.r4.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// ble cr6,0x8807fcf4
	if (!ctx.cr6.gt) goto loc_8807FCF4;
	// addi r11,r31,2084
	ctx.r11.s64 = ctx.r31.s64 + 2084;
loc_8807FC00:
	// lwz r8,1360(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1360);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwz r7,1624(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// mullw r6,r10,r8
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// divwu r5,r6,r7
	ctx.r5.u64 = uint32_t(ctx.r7.u32 ? ctx.r6.u32 / ctx.r7.u32 : 0);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r5,940(r11)
	REX_STORE_U32(ctx.r11.u32 + 940, ctx.r5.u32);
	// lwz r4,1624(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// lwz r3,1360(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1360);
	// mullw r8,r9,r3
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r3.s32);
	// divwu r7,r8,r4
	ctx.r7.u64 = uint32_t(ctx.r4.u32 ? ctx.r8.u32 / ctx.r4.u32 : 0);
	// twllei r4,0
	if (ctx.r4.s32 == 0 || ctx.r4.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r7,944(r11)
	REX_STORE_U32(ctx.r11.u32 + 944, ctx.r7.u32);
	// lwz r6,1624(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// lwz r5,1372(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1372);
	// mullw r4,r5,r10
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// divwu r3,r4,r6
	ctx.r3.u64 = uint32_t(ctx.r6.u32 ? ctx.r4.u32 / ctx.r6.u32 : 0);
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r3,948(r11)
	REX_STORE_U32(ctx.r11.u32 + 948, ctx.r3.u32);
	// lwz r8,1624(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// lwz r7,1372(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1372);
	// mullw r6,r7,r9
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// divwu r5,r6,r8
	ctx.r5.u64 = uint32_t(ctx.r8.u32 ? ctx.r6.u32 / ctx.r8.u32 : 0);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r5,952(r11)
	REX_STORE_U32(ctx.r11.u32 + 952, ctx.r5.u32);
	// lwz r4,1624(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// lwz r3,800(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// mullw r8,r3,r10
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// divwu r7,r8,r4
	ctx.r7.u64 = uint32_t(ctx.r4.u32 ? ctx.r8.u32 / ctx.r4.u32 : 0);
	// twllei r4,0
	if (ctx.r4.s32 == 0 || ctx.r4.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r7,956(r11)
	REX_STORE_U32(ctx.r11.u32 + 956, ctx.r7.u32);
	// lwz r6,1624(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// lwz r5,800(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// mullw r4,r9,r5
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// divwu r3,r4,r6
	ctx.r3.u64 = uint32_t(ctx.r6.u32 ? ctx.r4.u32 / ctx.r6.u32 : 0);
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r3,960(r11)
	REX_STORE_U32(ctx.r11.u32 + 960, ctx.r3.u32);
	// lwz r7,1360(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1360);
	// lwz r6,1624(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// lwz r8,1396(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1396);
	// lwz r5,1380(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mullw r4,r10,r5
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// mullw r3,r4,r7
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// divwu r7,r3,r6
	ctx.r7.u64 = uint32_t(ctx.r6.u32 ? ctx.r3.u32 / ctx.r6.u32 : 0);
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r8,964(r11)
	REX_STORE_U32(ctx.r11.u32 + 964, ctx.r8.u32);
	// lwz r7,1624(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// lwz r8,1400(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1400);
	// lwz r6,1372(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1372);
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mullw r4,r6,r5
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// mullw r3,r4,r10
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r7,r3,r7
	ctx.r7.u64 = uint32_t(ctx.r7.u32 ? ctx.r3.u32 / ctx.r7.u32 : 0);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stwu r8,968(r11)
	ea = 968 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// lwz r8,1624(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8807fc00
	if (ctx.cr6.lt) goto loc_8807FC00;
loc_8807FCF4:
	// lwz r11,1396(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1396);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,772(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 772);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,1400(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1400);
	// lwz r6,1624(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// stw r7,784(r31)
	REX_STORE_U32(ctx.r31.u32 + 784, ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lwz r9,64(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 64);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r5,19092(r31)
	REX_STORE_U32(ctx.r31.u32 + 19092, ctx.r5.u32);
	// lwz r11,88(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 88);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,19096(r31)
	REX_STORE_U32(ctx.r31.u32 + 19096, ctx.r4.u32);
	// lwz r11,112(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 112);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,19100(r31)
	REX_STORE_U32(ctx.r31.u32 + 19100, ctx.r3.u32);
	// ble cr6,0x8808008c
	if (!ctx.cr6.gt) goto loc_8808008C;
loc_8807FD40:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8807fd54
	if (!ctx.cr6.eq) goto loc_8807FD54;
	// stw r28,3112(r31)
	REX_STORE_U32(ctx.r31.u32 + 3112, ctx.r28.u32);
	// stw r28,3120(r31)
	REX_STORE_U32(ctx.r31.u32 + 3120, ctx.r28.u32);
	// b 0x8807fd78
	goto loc_8807FD78;
loc_8807FD54:
	// mulli r11,r29,968
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(968));
	// lwz r9,1624(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// lwz r10,724(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// divwu r8,r10,r9
	ctx.r8.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r7,2156(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 2156);
	// stw r8,3112(r11)
	REX_STORE_U32(ctx.r11.u32 + 3112, ctx.r8.u32);
	// stw r7,3120(r11)
	REX_STORE_U32(ctx.r11.u32 + 3120, ctx.r7.u32);
loc_8807FD78:
	// lwz r10,1624(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8807fdac
	if (!ctx.cr6.eq) goto loc_8807FDAC;
	// mulli r11,r29,968
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(968));
	// lwz r10,724(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,3116(r30)
	REX_STORE_U32(ctx.r30.u32 + 3116, ctx.r10.u32);
	// lwz r9,724(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// stw r9,3124(r30)
	REX_STORE_U32(ctx.r30.u32 + 3124, ctx.r9.u32);
	// lwz r8,720(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// stw r8,3628(r30)
	REX_STORE_U32(ctx.r30.u32 + 3628, ctx.r8.u32);
	// b 0x8807fdec
	goto loc_8807FDEC;
loc_8807FDAC:
	// lwz r8,724(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// mulli r9,r29,968
	ctx.r9.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(968));
	// add r30,r9,r31
	ctx.r30.u64 = ctx.r9.u64 + ctx.r31.u64;
	// mullw r7,r11,r8
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// divwu r6,r7,r10
	ctx.r6.u64 = uint32_t(ctx.r10.u32 ? ctx.r7.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r6,3116(r30)
	REX_STORE_U32(ctx.r30.u32 + 3116, ctx.r6.u32);
	// rlwinm r5,r6,0,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r5,3124(r30)
	REX_STORE_U32(ctx.r30.u32 + 3124, ctx.r5.u32);
	// lwz r4,720(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mullw r3,r11,r4
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r11,1624(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// divwu r10,r3,r11
	ctx.r10.u64 = uint32_t(ctx.r11.u32 ? ctx.r3.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r10,3628(r30)
	REX_STORE_U32(ctx.r30.u32 + 3628, ctx.r10.u32);
loc_8807FDEC:
	// lwz r11,3112(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 3112);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r10,3128(r30)
	REX_STORE_U32(ctx.r30.u32 + 3128, ctx.r10.u32);
	// lwz r9,720(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mullw r8,r11,r9
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// stw r8,3132(r30)
	REX_STORE_U32(ctx.r30.u32 + 3132, ctx.r8.u32);
	// lwz r7,720(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mullw r6,r11,r7
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// stw r6,3136(r30)
	REX_STORE_U32(ctx.r30.u32 + 3136, ctx.r6.u32);
	// beq cr6,0x8807ffd8
	if (ctx.cr6.eq) goto loc_8807FFD8;
	// lwz r10,720(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r8,3400(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3400);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r8,3400(r30)
	REX_STORE_U32(ctx.r30.u32 + 3400, ctx.r8.u32);
	// lwz r8,3404(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3404);
	// lwz r7,720(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r6,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 9) & 0xFFFFFE00;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r5,3404(r30)
	REX_STORE_U32(ctx.r30.u32 + 3404, ctx.r5.u32);
	// lwz r9,3408(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3408);
	// lwz r4,720(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,3408(r30)
	REX_STORE_U32(ctx.r30.u32 + 3408, ctx.r10.u32);
	// lwz r8,720(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mullw r10,r11,r8
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,3396(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3396);
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r7,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 9) & 0xFFFFFE00;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,3396(r30)
	REX_STORE_U32(ctx.r30.u32 + 3396, ctx.r6.u32);
	// lwz r5,720(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mullw r10,r11,r5
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,3412(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3412);
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r4,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r3,3412(r30)
	REX_STORE_U32(ctx.r30.u32 + 3412, ctx.r3.u32);
	// lwz r10,720(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,3416(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3416);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r8,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,3416(r30)
	REX_STORE_U32(ctx.r30.u32 + 3416, ctx.r7.u32);
	// lwz r9,3420(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3420);
	// lwz r6,720(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mullw r10,r11,r6
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r5,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r4,3420(r30)
	REX_STORE_U32(ctx.r30.u32 + 3420, ctx.r4.u32);
	// lwz r9,3424(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3424);
	// lwz r3,720(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mullw r10,r11,r3
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r9,3424(r30)
	REX_STORE_U32(ctx.r30.u32 + 3424, ctx.r9.u32);
	// lwz r9,3104(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3104);
	// lwz r8,720(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mullw r10,r11,r8
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r7,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 9) & 0xFFFFFE00;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,3104(r30)
	REX_STORE_U32(ctx.r30.u32 + 3104, ctx.r6.u32);
	// lwz r9,3428(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3428);
	// lwz r5,720(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mullw r10,r11,r5
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r3,3428(r30)
	REX_STORE_U32(ctx.r30.u32 + 3428, ctx.r3.u32);
	// lwz r10,720(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r9,3432(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3432);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,3432(r30)
	REX_STORE_U32(ctx.r30.u32 + 3432, ctx.r7.u32);
	// lwz r6,720(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r9,3436(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3436);
	// mullw r10,r11,r6
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r4,3436(r30)
	REX_STORE_U32(ctx.r30.u32 + 3436, ctx.r4.u32);
	// lwz r9,3440(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3440);
	// lwz r3,720(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mullw r10,r11,r3
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r9,3440(r30)
	REX_STORE_U32(ctx.r30.u32 + 3440, ctx.r9.u32);
	// lwz r9,3108(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3108);
	// lwz r8,720(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mullw r10,r11,r8
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,3108(r30)
	REX_STORE_U32(ctx.r30.u32 + 3108, ctx.r6.u32);
loc_8807FFD8:
	// lwz r10,1404(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1404);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,3460(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 3460);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r3,3464(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 3464);
	// stw r8,3452(r30)
	REX_STORE_U32(ctx.r30.u32 + 3452, ctx.r8.u32);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,1408(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1408);
	// mullw r6,r11,r7
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// stw r6,3456(r30)
	REX_STORE_U32(ctx.r30.u32 + 3456, ctx.r6.u32);
	// lwz r11,784(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 784);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,3444(r30)
	REX_STORE_U32(ctx.r30.u32 + 3444, ctx.r5.u32);
	// lwz r11,64(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 64);
	// stw r11,3468(r30)
	REX_STORE_U32(ctx.r30.u32 + 3468, ctx.r11.u32);
	// lwz r10,88(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 88);
	// stw r10,3472(r30)
	REX_STORE_U32(ctx.r30.u32 + 3472, ctx.r10.u32);
	// lwz r9,112(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 112);
	// stw r9,3476(r30)
	REX_STORE_U32(ctx.r30.u32 + 3476, ctx.r9.u32);
	// bl 0x880f8a10
	ctx.lr = 0x88080028;
	sub_880F8A10(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,3464(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 3464);
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,3480(r30)
	REX_STORE_U32(ctx.r30.u32 + 3480, ctx.r7.u32);
	// bl 0x880f8a10
	ctx.lr = 0x88080040;
	sub_880F8A10(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,3464(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 3464);
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r5,3484(r30)
	REX_STORE_U32(ctx.r30.u32 + 3484, ctx.r5.u32);
	// bl 0x880f8a10
	ctx.lr = 0x88080058;
	sub_880F8A10(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,3492(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 3492);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r4,3488(r30)
	REX_STORE_U32(ctx.r30.u32 + 3488, ctx.r4.u32);
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// stw r11,3496(r30)
	REX_STORE_U32(ctx.r30.u32 + 3496, ctx.r11.u32);
	// lwz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// stw r10,3500(r30)
	REX_STORE_U32(ctx.r30.u32 + 3500, ctx.r10.u32);
	// lwz r9,112(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// stw r9,3504(r30)
	REX_STORE_U32(ctx.r30.u32 + 3504, ctx.r9.u32);
	// lwz r8,1624(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8807fd40
	if (ctx.cr6.lt) goto loc_8807FD40;
loc_8808008C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880A0010) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880A0018;
	__savegprlr_14(ctx, base);
	// stwu r1,-1584(r1)
	ea = -1584 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// stw r10,1660(r1)
	REX_STORE_U32(ctx.r1.u32 + 1660, ctx.r10.u32);
	// lwz r11,28088(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28088);
	// addi r10,r1,1167
	ctx.r10.s64 = ctx.r1.s64 + 1167;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// stw r8,1644(r1)
	REX_STORE_U32(ctx.r1.u32 + 1644, ctx.r8.u32);
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// stw r9,1652(r1)
	REX_STORE_U32(ctx.r1.u32 + 1652, ctx.r9.u32);
	// rlwinm r9,r10,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r3,1604(r1)
	REX_STORE_U32(ctx.r1.u32 + 1604, ctx.r3.u32);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// stw r4,1612(r1)
	REX_STORE_U32(ctx.r1.u32 + 1612, ctx.r4.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r5,1620(r1)
	REX_STORE_U32(ctx.r1.u32 + 1620, ctx.r5.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// stw r6,1628(r1)
	REX_STORE_U32(ctx.r1.u32 + 1628, ctx.r6.u32);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// stw r7,1636(r1)
	REX_STORE_U32(ctx.r1.u32 + 1636, ctx.r7.u32);
	// stw r9,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880a0078
	if (ctx.cr6.eq) goto loc_880A0078;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x880a008c
	goto loc_880A008C;
loc_880A0078:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// lwz r5,1756(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1756);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880a008c
	if (!ctx.cr6.eq) goto loc_880A008C;
	// li r5,0
	ctx.r5.s64 = 0;
loc_880A008C:
	// lwz r28,1748(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 1748);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x880e2660
	ctx.lr = 0x880A009C;
	sub_880E2660(ctx, base);
	// stw r3,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// srawi r11,r19,2
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r19.s32 >> 2;
	// lwz r10,724(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 724);
	// lwz r7,4(r28)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// lwz r6,0(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mullw r11,r10,r30
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// lwz r5,16(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r9,7764(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 7764);
	// lwz r4,1716(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// stw r7,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r7.u32);
	// stw r6,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r6.u32);
	// stw r5,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r5.u32);
	// lwz r24,1676(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1676);
	// lwz r5,1732(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1732);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// srawi r10,r26,2
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r26.s32 >> 2;
	// mulli r11,r3,276
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(276));
	// lwz r22,1668(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 1668);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// stw r9,312(r1)
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r9.u32);
	// srawi r6,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 2;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x880a0180
	if (ctx.cr6.eq) goto loc_880A0180;
	// srawi r11,r22,2
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r22.s32 >> 2;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// srawi r11,r24,2
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r24.s32 >> 2;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// ble cr6,0x880a0158
	if (!ctx.cr6.gt) goto loc_880A0158;
	// addi r11,r27,256
	ctx.r11.s64 = ctx.r27.s64 + 256;
loc_880A0130:
	// lwz r4,-128(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -128);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x880a0148
	if (!ctx.cr6.eq) goto loc_880A0148;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x880a0158
	if (ctx.cr6.eq) goto loc_880A0158;
loc_880A0148:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x880a0130
	if (ctx.cr6.lt) goto loc_880A0130;
loc_880A0158:
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x880a0180
	if (!ctx.cr6.eq) goto loc_880A0180;
	// addi r11,r8,32
	ctx.r11.s64 = ctx.r8.s64 + 32;
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r5,1732(r1)
	REX_STORE_U32(ctx.r1.u32 + 1732, ctx.r5.u32);
	// stwx r10,r4,r27
	REX_STORE_U32(ctx.r4.u32 + ctx.r27.u32, ctx.r10.u32);
	// stwx r9,r3,r27
	REX_STORE_U32(ctx.r3.u32 + ctx.r27.u32, ctx.r9.u32);
loc_880A0180:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x880a01b8
	if (!ctx.cr6.gt) goto loc_880A01B8;
	// addi r10,r27,256
	ctx.r10.s64 = ctx.r27.s64 + 256;
loc_880A0190:
	// lwz r9,-128(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -128);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x880a01a8
	if (!ctx.cr6.eq) goto loc_880A01A8;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x880a01b8
	if (ctx.cr6.eq) goto loc_880A01B8;
loc_880A01A8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x880a0190
	if (ctx.cr6.lt) goto loc_880A0190;
loc_880A01B8:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x880a01e0
	if (!ctx.cr6.eq) goto loc_880A01E0;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// addi r9,r11,64
	ctx.r9.s64 = ctx.r11.s64 + 64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r5,1732(r1)
	REX_STORE_U32(ctx.r1.u32 + 1732, ctx.r5.u32);
	// stwx r7,r8,r27
	REX_STORE_U32(ctx.r8.u32 + ctx.r27.u32, ctx.r7.u32);
	// stwx r6,r4,r27
	REX_STORE_U32(ctx.r4.u32 + ctx.r27.u32, ctx.r6.u32);
loc_880A01E0:
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// lwz r21,1740(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 1740);
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// stw r25,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r25.u32);
	// ori r23,r10,65535
	ctx.r23.u64 = ctx.r10.u64 | 65535;
	// addi r9,r1,960
	ctx.r9.s64 = ctx.r1.s64 + 960;
	// addi r8,r1,544
	ctx.r8.s64 = ctx.r1.s64 + 544;
	// stw r23,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r23.u32);
	// addi r7,r1,752
	ctx.r7.s64 = ctx.r1.s64 + 752;
	// stw r9,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r9.u32);
	// addi r27,r11,6848
	ctx.r27.s64 = ctx.r11.s64 + 6848;
	// stw r8,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r8.u32);
	// mr r18,r23
	ctx.r18.u64 = ctx.r23.u64;
	// stw r7,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r7.u32);
	// stw r27,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r27.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x880a0bec
	if (!ctx.cr6.gt) goto loc_880A0BEC;
	// addi r11,r1,383
	ctx.r11.s64 = ctx.r1.s64 + 383;
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r10,320(r1)
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r10.u32);
loc_880A0230:
	// lwz r6,288(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r5,1628(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1628);
	// addi r11,r6,64
	ctx.r11.s64 = ctx.r6.s64 + 64;
	// lwz r27,1604(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// addi r9,r6,32
	ctx.r9.s64 = ctx.r6.s64 + 32;
	// lwz r7,1724(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1724);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r26,1620(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1620);
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// neg r11,r7
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// lwz r25,1380(r27)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r11,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// lwzx r9,r8,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lwzx r8,r4,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r7.u32);
	// mullw r11,r3,r25
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r25.s32);
	// stw r7,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r7.u32);
	// stw r3,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r3.u32);
	// stw r4,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r4.u32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r26,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r26.u32);
	// ble cr6,0x880a0354
	if (!ctx.cr6.gt) goto loc_880A0354;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x880a0354
	if (ctx.cr6.eq) goto loc_880A0354;
	// addi r11,r6,31
	ctx.r11.s64 = ctx.r6.s64 + 31;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r5
	ctx.r7.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_880A02C8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880a0344
	if (ctx.cr6.eq) goto loc_880A0344;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x880a0308
	if (!ctx.cr6.eq) goto loc_880A0308;
	// lwz r11,128(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 128);
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x880a02f4
	if (!ctx.cr6.eq) goto loc_880A02F4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
loc_880A02F4:
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x880a033c
	if (!ctx.cr6.eq) goto loc_880A033C;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// b 0x880a0338
	goto loc_880A0338;
loc_880A0308:
	// lwz r6,128(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 128);
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x880a033c
	if (!ctx.cr6.eq) goto loc_880A033C;
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x880a0328
	if (!ctx.cr6.eq) goto loc_880A0328;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
loc_880A0328:
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x880a033c
	if (!ctx.cr6.eq) goto loc_880A033C;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_880A0338:
	// li r10,0
	ctx.r10.s64 = 0;
loc_880A033C:
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// bdnz 0x880a02c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880A02C8;
loc_880A0344:
	// stw r29,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r29.u32);
	// stw r28,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r28.u32);
	// stw r30,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r30.u32);
	// stw r31,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r31.u32);
loc_880A0354:
	// lwz r11,1684(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1684);
	// add r10,r30,r4
	ctx.r10.u64 = ctx.r30.u64 + ctx.r4.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880a036c
	if (!ctx.cr6.lt) goto loc_880A036C;
	// subf r30,r4,r11
	ctx.r30.u64 = ctx.r11.u64 - ctx.r4.u64;
	// stw r30,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r30.u32);
loc_880A036C:
	// lwz r11,1692(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1692);
	// add r10,r31,r4
	ctx.r10.u64 = ctx.r31.u64 + ctx.r4.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880a0384
	if (!ctx.cr6.gt) goto loc_880A0384;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// stw r11,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
loc_880A0384:
	// lwz r11,1700(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1700);
	// add r10,r29,r3
	ctx.r10.u64 = ctx.r29.u64 + ctx.r3.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880a039c
	if (!ctx.cr6.lt) goto loc_880A039C;
	// subf r29,r3,r11
	ctx.r29.u64 = ctx.r11.u64 - ctx.r3.u64;
	// stw r29,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r29.u32);
loc_880A039C:
	// lwz r11,1708(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1708);
	// add r10,r28,r3
	ctx.r10.u64 = ctx.r28.u64 + ctx.r3.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880a03b4
	if (!ctx.cr6.gt) goto loc_880A03B4;
	// subf r28,r3,r11
	ctx.r28.u64 = ctx.r11.u64 - ctx.r3.u64;
	// stw r28,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r28.u32);
loc_880A03B4:
	// lwz r11,7100(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 7100);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r4,1612(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// lwz r3,320(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880A03CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,1380(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// lwz r10,1716(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// mullw r11,r29,r9
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r8,r11,r26
	ctx.r8.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r8,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r8.u32);
	// beq cr6,0x880a087c
	if (ctx.cr6.eq) goto loc_880A087C;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x880a0b28
	if (ctx.cr6.gt) goto loc_880A0B28;
	// lwz r11,220(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// li r16,0
	ctx.r16.s64 = 0;
	// lwz r10,292(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r9,280(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r8,252(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,1676(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1676);
	// lwz r15,308(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// subf r6,r9,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r9.u64;
	// lwz r5,1660(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1660);
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,284(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// clrlwi r19,r6,31
	ctx.r19.u64 = ctx.r6.u32 & 0x1;
	// subf r20,r11,r4
	ctx.r20.u64 = ctx.r4.u64 - ctx.r11.u64;
	// subf r14,r5,r11
	ctx.r14.u64 = ctx.r11.u64 - ctx.r5.u64;
	// subf r17,r15,r3
	ctx.r17.u64 = ctx.r3.u64 - ctx.r15.u64;
loc_880A0434:
	// lwz r9,1604(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r22,316(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 1, ctx.xer);
	// lwz r31,280(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r11,1380(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 1380);
	// add r11,r22,r11
	ctx.r11.u64 = ctx.r22.u64 + ctx.r11.u64;
	// stw r11,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r11.u32);
	// beq cr6,0x880a05b8
	if (ctx.cr6.eq) goto loc_880A05B8;
	// lwz r6,1380(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 1380);
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// lwz r10,304(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// li r4,16
	ctx.r4.s64 = 16;
	// mullw r11,r6,r29
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r29.s32);
	// lwz r9,340(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r3,1612(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x880A0484;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,228(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r7,1652(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1652);
	// add r6,r14,r20
	ctx.r6.u64 = ctx.r14.u64 + ctx.r20.u64;
	// add r5,r31,r8
	ctx.r5.u64 = ctx.r31.u64 + ctx.r8.u64;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r4,r7,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r7.u64;
	// srawi r11,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 31;
	// srawi r10,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 31;
	// xor r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// xor r7,r6,r10
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r10.u64;
	// subf r11,r11,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r10,r10,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880a04f4
	if (ctx.cr6.gt) goto loc_880A04F4;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880a04f4
	if (ctx.cr6.gt) goto loc_880A04F4;
	// lwz r8,216(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r6,r10,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r21
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r21.u32);
	// lwzx r10,r4,r21
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r21.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x880a0500
	goto loc_880A0500;
loc_880A04F4:
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// lwz r8,216(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A0500:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x880a0524
	if (!ctx.cr6.lt) goto loc_880A0524;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// addi r18,r23,1
	ctx.r18.s64 = ctx.r23.s64 + 1;
	// stw r29,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// stw r10,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r10.u32);
loc_880A0524:
	// lwz r10,1668(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1668);
	// stwx r11,r17,r15
	REX_STORE_U32(ctx.r17.u32 + ctx.r15.u32, ctx.r11.u32);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// srawi r6,r20,31
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r20.s32 >> 31;
	// xor r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// xor r4,r20,r6
	ctx.r4.u64 = ctx.r20.u64 ^ ctx.r6.u64;
	// subf r11,r7,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r10,r6,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r6.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880a0580
	if (ctx.cr6.gt) goto loc_880A0580;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880a0580
	if (ctx.cr6.gt) goto loc_880A0580;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r8,r10,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r21
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r21.u32);
	// lwzx r10,r6,r21
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r21.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x880a0588
	goto loc_880A0588;
loc_880A0580:
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A0588:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x880a05ac
	if (!ctx.cr6.lt) goto loc_880A05AC;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// addi r18,r23,1
	ctx.r18.s64 = ctx.r23.s64 + 1;
	// stw r29,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// stw r10,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r10.u32);
loc_880A05AC:
	// stw r11,0(r15)
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r11.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// li r10,1
	ctx.r10.s64 = 1;
loc_880A05B8:
	// lwz r11,252(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x880a085c
	if (ctx.cr6.gt) goto loc_880A085C;
	// lwz r11,228(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// srawi r8,r20,31
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r20.s32 >> 31;
	// lwz r9,1668(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1668);
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r10,1652(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1652);
	// lwz r6,1676(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 1676);
	// xor r5,r20,r8
	ctx.r5.u64 = ctx.r20.u64 ^ ctx.r8.u64;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r20,r6
	ctx.r25.u64 = ctx.r20.u64 + ctx.r6.u64;
	// subf r11,r9,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r9.u64;
	// subf r26,r8,r5
	ctx.r26.u64 = ctx.r5.u64 - ctx.r8.u64;
	// subf r28,r10,r4
	ctx.r28.u64 = ctx.r4.u64 - ctx.r10.u64;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// subf r24,r10,r9
	ctx.r24.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_880A0600:
	// lwz r11,1604(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// addi r6,r1,328
	ctx.r6.s64 = ctx.r1.s64 + 328;
	// lwz r10,296(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r3,320(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// lwz r5,1380(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 1380);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880A0620;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,1660(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1660);
	// srawi r8,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r28.s32 >> 31;
	// addi r22,r22,2
	ctx.r22.s64 = ctx.r22.s64 + 2;
	// subf r7,r9,r25
	ctx.r7.u64 = ctx.r25.u64 - ctx.r9.u64;
	// xor r6,r28,r8
	ctx.r6.u64 = ctx.r28.u64 ^ ctx.r8.u64;
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// subf r11,r8,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r8.u64;
	// xor r4,r7,r5
	ctx.r4.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// subf r7,r5,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r5.u64;
	// bgt cr6,0x880a0680
	if (ctx.cr6.gt) goto loc_880A0680;
	// cmpwi cr6,r7,158
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 158, ctx.xer);
	// bgt cr6,0x880a0680
	if (ctx.cr6.gt) goto loc_880A0680;
	// lwz r5,216(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwzx r8,r10,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r21
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r21.u32);
	// lwzx r10,r4,r21
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r21.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x880a068c
	goto loc_880A068C;
loc_880A0680:
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// lwz r5,216(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A068C:
	// lwz r8,328(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x880a06b4
	if (!ctx.cr6.lt) goto loc_880A06B4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// addi r18,r23,1
	ctx.r18.s64 = ctx.r23.s64 + 1;
	// stw r29,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// stw r10,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r10.u32);
loc_880A06B4:
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// lwz r6,284(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// add r4,r27,r16
	ctx.r4.u64 = ctx.r27.u64 + ctx.r16.u64;
	// srawi r3,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 31;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// xor r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r3.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// subf r10,r3,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// bgt cr6,0x880a0710
	if (ctx.cr6.gt) goto loc_880A0710;
	// cmpwi cr6,r26,158
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 158, ctx.xer);
	// bgt cr6,0x880a0710
	if (ctx.cr6.gt) goto loc_880A0710;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r5
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwzx r3,r10,r5
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r21
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// lwzx r10,r10,r21
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r21.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x880a0718
	goto loc_880A0718;
loc_880A0710:
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A0718:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x880a073c
	if (!ctx.cr6.lt) goto loc_880A073C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// addi r18,r23,1
	ctx.r18.s64 = ctx.r23.s64 + 1;
	// stw r29,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// stw r10,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r10.u32);
loc_880A073C:
	// add r10,r24,r30
	ctx.r10.u64 = ctx.r24.u64 + ctx.r30.u64;
	// lwz r8,308(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// srawi r4,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 31;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// xor r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880a0790
	if (ctx.cr6.gt) goto loc_880A0790;
	// cmpwi cr6,r7,158
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 158, ctx.xer);
	// bgt cr6,0x880a0790
	if (ctx.cr6.gt) goto loc_880A0790;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwzx r7,r10,r5
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r21
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r21.u32);
	// lwzx r10,r3,r21
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r21.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x880a0798
	goto loc_880A0798;
loc_880A0790:
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A0798:
	// lwz r9,332(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x880a07c4
	if (!ctx.cr6.lt) goto loc_880A07C4;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// stw r29,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r18,r23,1
	ctx.r18.s64 = ctx.r23.s64 + 1;
	// stw r10,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r10.u32);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// stw r7,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r7.u32);
loc_880A07C4:
	// srawi r10,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 31;
	// stw r11,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// xor r7,r30,r10
	ctx.r7.u64 = ctx.r30.u64 ^ ctx.r10.u64;
	// subf r11,r10,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880a080c
	if (ctx.cr6.gt) goto loc_880A080C;
	// cmpwi cr6,r26,158
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 158, ctx.xer);
	// bgt cr6,0x880a080c
	if (ctx.cr6.gt) goto loc_880A080C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r5
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwzx r6,r10,r5
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r21
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r21.u32);
	// lwzx r10,r4,r21
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r21.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x880a0814
	goto loc_880A0814;
loc_880A080C:
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A0814:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x880a083c
	if (!ctx.cr6.lt) goto loc_880A083C;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// stw r29,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r18,r23,1
	ctx.r18.s64 = ctx.r23.s64 + 1;
	// stw r10,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r10.u32);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// stw r9,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r9.u32);
loc_880A083C:
	// lwz r10,252(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x880a0600
	if (!ctx.cr6.gt) goto loc_880A0600;
loc_880A085C:
	// lwz r11,224(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// addi r16,r16,7
	ctx.r16.s64 = ctx.r16.s64 + 7;
	// addi r15,r15,28
	ctx.r15.s64 = ctx.r15.s64 + 28;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880a0434
	if (!ctx.cr6.gt) goto loc_880A0434;
	// b 0x880a0b28
	goto loc_880A0B28;
loc_880A087C:
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x880a0b28
	if (ctx.cr6.gt) goto loc_880A0B28;
	// lwz r11,220(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r10,292(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r9,280(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r8,252(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,1660(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 1660);
	// subf r5,r9,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r9.u64;
	// lwz r22,284(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r20,r5,31
	ctx.r20.u64 = ctx.r5.u32 & 0x1;
	// subf r24,r6,r4
	ctx.r24.u64 = ctx.r4.u64 - ctx.r6.u64;
loc_880A08B8:
	// lwz r11,1604(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r27,316(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 1, ctx.xer);
	// lwz r31,280(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r6,1380(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 1380);
	// add r10,r6,r27
	ctx.r10.u64 = ctx.r6.u64 + ctx.r27.u64;
	// stw r10,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r10.u32);
	// beq cr6,0x880a0994
	if (ctx.cr6.eq) goto loc_880A0994;
	// lwz r11,304(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,1612(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880A08F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,228(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r9,1652(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1652);
	// add r8,r31,r10
	ctx.r8.u64 = ctx.r31.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r9,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r9.u64;
	// srawi r5,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// srawi r4,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r24.s32 >> 31;
	// xor r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// xor r10,r24,r4
	ctx.r10.u64 = ctx.r24.u64 ^ ctx.r4.u64;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// subf r10,r4,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r4.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880a0964
	if (ctx.cr6.gt) goto loc_880A0964;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880a0964
	if (ctx.cr6.gt) goto loc_880A0964;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,216(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r6,r8,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r21
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r21.u32);
	// lwzx r10,r4,r21
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r21.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x880a096c
	goto loc_880A096C;
loc_880A0964:
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A096C:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x880a0988
	if (!ctx.cr6.lt) goto loc_880A0988;
	// addi r18,r23,1
	ctx.r18.s64 = ctx.r23.s64 + 1;
	// stw r31,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// stw r25,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r25.u32);
loc_880A0988:
	// stw r11,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// li r29,1
	ctx.r29.s64 = 1;
loc_880A0994:
	// lwz r11,252(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x880a0b0c
	if (ctx.cr6.gt) goto loc_880A0B0C;
	// lwz r11,228(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// srawi r10,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r24.s32 >> 31;
	// lwz r9,1652(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1652);
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r17,284(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// xor r7,r24,r10
	ctx.r7.u64 = ctx.r24.u64 ^ ctx.r10.u64;
	// lwz r19,216(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,296(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r16,252(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// subf r28,r10,r7
	ctx.r28.u64 = ctx.r7.u64 - ctx.r10.u64;
	// lwz r15,320(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// subf r30,r9,r6
	ctx.r30.u64 = ctx.r6.u64 - ctx.r9.u64;
loc_880A09D4:
	// lwz r11,1604(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// addi r6,r1,328
	ctx.r6.s64 = ctx.r1.s64 + 328;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mtctr r14
	ctx.ctr.u64 = ctx.r14.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r5,1380(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 1380);
	// bctrl 
	ctx.lr = 0x880A09F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// srawi r10,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 31;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// xor r9,r30,r10
	ctx.r9.u64 = ctx.r30.u64 ^ ctx.r10.u64;
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880a0a38
	if (ctx.cr6.gt) goto loc_880A0A38;
	// cmpwi cr6,r28,158
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 158, ctx.xer);
	// bgt cr6,0x880a0a38
	if (ctx.cr6.gt) goto loc_880A0A38;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r19
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r19.u32);
	// lwzx r8,r10,r19
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r19.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r21
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r21.u32);
	// lwzx r10,r6,r21
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r21.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x880a0a40
	goto loc_880A0A40;
loc_880A0A38:
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A0A40:
	// lwz r10,328(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,328(r1)
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r10.u32);
	// cmpw cr6,r10,r23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x880a0a64
	if (!ctx.cr6.lt) goto loc_880A0A64;
	// addi r18,r23,1
	ctx.r18.s64 = ctx.r23.s64 + 1;
	// stw r31,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// stw r25,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r25.u32);
loc_880A0A64:
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// add r11,r26,r29
	ctx.r11.u64 = ctx.r26.u64 + ctx.r29.u64;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// xor r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// subf r11,r7,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r7.u64;
	// addi r7,r29,1
	ctx.r7.s64 = ctx.r29.s64 + 1;
	// stwx r10,r6,r17
	REX_STORE_U32(ctx.r6.u32 + ctx.r17.u32, ctx.r10.u32);
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880a0ac0
	if (ctx.cr6.gt) goto loc_880A0AC0;
	// cmpwi cr6,r28,158
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 158, ctx.xer);
	// bgt cr6,0x880a0ac0
	if (ctx.cr6.gt) goto loc_880A0AC0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r19
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r19.u32);
	// lwzx r5,r10,r19
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r19.u32);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r21
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r21.u32);
	// lwzx r10,r3,r21
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r21.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x880a0ac8
	goto loc_880A0AC8;
loc_880A0AC0:
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A0AC8:
	// lwz r10,332(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r11.u32);
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x880a0aec
	if (!ctx.cr6.lt) goto loc_880A0AEC;
	// addi r18,r23,1
	ctx.r18.s64 = ctx.r23.s64 + 1;
	// stw r8,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r8.u32);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// stw r25,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r25.u32);
loc_880A0AEC:
	// add r10,r26,r7
	ctx.r10.u64 = ctx.r26.u64 + ctx.r7.u64;
	// addi r31,r8,1
	ctx.r31.s64 = ctx.r8.s64 + 1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r9,4
	ctx.r30.s64 = ctx.r9.s64 + 4;
	// addi r29,r7,1
	ctx.r29.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r31,r16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r16.s32, ctx.xer);
	// stwx r11,r8,r17
	REX_STORE_U32(ctx.r8.u32 + ctx.r17.u32, ctx.r11.u32);
	// ble cr6,0x880a09d4
	if (!ctx.cr6.gt) goto loc_880A09D4;
loc_880A0B0C:
	// lwz r11,224(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r26,r26,7
	ctx.r26.s64 = ctx.r26.s64 + 7;
	// addi r22,r22,28
	ctx.r22.s64 = ctx.r22.s64 + 28;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880a08b8
	if (!ctx.cr6.gt) goto loc_880A08B8;
loc_880A0B28:
	// lwz r11,232(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880a0bac
	if (!ctx.cr6.lt) goto loc_880A0BAC;
	// lwz r10,292(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r11,228(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r9,268(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r8,208(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r7,280(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r6,220(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r5,252(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r4,224(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r3,1716(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// stw r10,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r10.u32);
	// lwz r10,212(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// stw r23,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r23.u32);
	// stw r9,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r9.u32);
	// stw r8,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r8.u32);
	// stw r7,336(r1)
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r7.u32);
	// stw r6,352(r1)
	REX_STORE_U32(ctx.r1.u32 + 352, ctx.r6.u32);
	// stw r5,344(r1)
	REX_STORE_U32(ctx.r1.u32 + 344, ctx.r5.u32);
	// stw r4,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r4.u32);
	// beq cr6,0x880a0ba0
	if (ctx.cr6.eq) goto loc_880A0BA0;
	// lwz r11,248(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a0ba0
	if (ctx.cr6.eq) goto loc_880A0BA0;
	// lwz r11,308(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r10,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r10.u32);
	// b 0x880a0ba8
	goto loc_880A0BA8;
loc_880A0BA0:
	// lwz r11,284(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// stw r10,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r10.u32);
loc_880A0BA8:
	// stw r11,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
loc_880A0BAC:
	// lwz r11,288(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r10,1732(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1732);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x880a0230
	if (ctx.cr6.lt) goto loc_880A0230;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// lwz r27,216(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r26,1660(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1660);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r19,1652(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 1652);
	// ori r23,r11,65535
	ctx.r23.u64 = ctx.r11.u64 | 65535;
	// lwz r24,1676(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1676);
	// lwz r22,1668(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 1668);
	// lwz r28,1748(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 1748);
	// lwz r29,1604(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
loc_880A0BEC:
	// lwz r11,256(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r10,264(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r9,272(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r8,244(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,1716(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// add r31,r8,r9
	ctx.r31.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r16,r30,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r15,r31,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x880a0ca0
	if (ctx.cr6.eq) goto loc_880A0CA0;
	// lwz r9,2608(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 2608);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,2604(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 2604);
	// li r6,1
	ctx.r6.s64 = 1;
	// subf r11,r26,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r26.u64;
	// lwz r20,2616(r29)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r29.u32 + 2616);
	// subf r10,r19,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r19.u64;
	// lwz r18,2612(r29)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r29.u32 + 2612);
	// add r5,r11,r15
	ctx.r5.u64 = ctx.r11.u64 + ctx.r15.u64;
	// add r4,r10,r16
	ctx.r4.u64 = ctx.r10.u64 + ctx.r16.u64;
	// and r3,r5,r20
	ctx.r3.u64 = ctx.r5.u64 & ctx.r20.u64;
	// and r11,r4,r18
	ctx.r11.u64 = ctx.r4.u64 & ctx.r18.u64;
	// subf r5,r9,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r9.u64;
	// subf r4,r8,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r8.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r17,r9
	ctx.r17.u64 = ctx.r9.u64;
	// mr r14,r8
	ctx.r14.u64 = ctx.r8.u64;
	// bl 0x88085e60
	ctx.lr = 0x880A0C60;
	sub_88085E60(ctx, base);
	// subf r11,r24,r17
	ctx.r11.u64 = ctx.r17.u64 - ctx.r24.u64;
	// subf r10,r22,r14
	ctx.r10.u64 = ctx.r14.u64 - ctx.r22.u64;
	// add r9,r11,r15
	ctx.r9.u64 = ctx.r11.u64 + ctx.r15.u64;
	// add r8,r10,r16
	ctx.r8.u64 = ctx.r10.u64 + ctx.r16.u64;
	// and r5,r9,r20
	ctx.r5.u64 = ctx.r9.u64 & ctx.r20.u64;
	// and r4,r8,r18
	ctx.r4.u64 = ctx.r8.u64 & ctx.r18.u64;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// subf r5,r17,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r17.u64;
	// subf r4,r14,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r14.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88085e60
	ctx.lr = 0x880A0C94;
	sub_88085E60(ctx, base);
	// cmpw cr6,r20,r3
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x880a0cbc
	if (!ctx.cr6.lt) goto loc_880A0CBC;
	// stw r25,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r25.u32);
loc_880A0CA0:
	// mr r18,r26
	ctx.r18.u64 = ctx.r26.u64;
loc_880A0CA4:
	// lwz r11,28088(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 28088);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880a0cd0
	if (ctx.cr6.eq) goto loc_880A0CD0;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x880a0ce4
	goto loc_880A0CE4;
loc_880A0CBC:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
	// stw r11,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// mr r18,r24
	ctx.r18.u64 = ctx.r24.u64;
	// b 0x880a0ca4
	goto loc_880A0CA4;
loc_880A0CD0:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// lwz r5,1756(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1756);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880a0ce4
	if (!ctx.cr6.eq) goto loc_880A0CE4;
	// li r5,0
	ctx.r5.s64 = 0;
loc_880A0CE4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880e2660
	ctx.lr = 0x880A0CF0;
	sub_880E2660(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// xor r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 ^ ctx.r11.u64;
	// lwz r11,232(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// stw r10,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r10.u32);
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bne cr6,0x880a0dc4
	if (!ctx.cr6.eq) goto loc_880A0DC4;
	// clrlwi r7,r19,30
	ctx.r7.u64 = ctx.r19.u32 & 0x3;
	// lwz r4,1380(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 1380);
	// clrlwi r8,r18,30
	ctx.r8.u64 = ctx.r18.u32 & 0x3;
	// lwz r9,2652(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 2652);
	// stw r7,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r7.u32);
	// srawi r10,r19,2
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r19.s32 >> 2;
	// stw r8,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
	// srawi r11,r18,2
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r18.s32 >> 2;
	// lwz r31,300(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r11,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// mullw r11,r4,r11
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// lwz r3,1620(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1620);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwz r9,1560(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 1560);
	// stw r10,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r10.u32);
	// stw r25,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r25.u32);
	// stw r25,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r25.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bctrl 
	ctx.lr = 0x880A0D60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,260(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r3,1612(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880A0D7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmpwi cr6,r25,158
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 158, ctx.xer);
	// bgt cr6,0x880a0db4
	if (ctx.cr6.gt) goto loc_880A0DB4;
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r25,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// lwzx r7,r9,r27
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r21
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r21.u32);
	// lwzx r10,r5,r21
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r21.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x880a1ec8
	goto loc_880A1EC8;
loc_880A0DB4:
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x880a1ec8
	goto loc_880A1EC8;
loc_880A0DC4:
	// lwz r11,1700(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1700);
	// lwz r10,1708(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1708);
	// subf r9,r31,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r31.u64;
	// lwz r23,1604(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// subf r8,r31,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r31.u64;
	// lwz r7,1684(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1684);
	// addic r6,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// lwz r5,1692(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1692);
	// subf r4,r30,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r30.u64;
	// lwz r7,256(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// subfe r10,r6,r9
	temp.u8 = (~ctx.r6.u32 + ctx.r9.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r6.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r9,352(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// addic r3,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r3.s64 = ctx.r8.s64 + -1;
	// lwz r6,1380(r23)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + 1380);
	// subf r30,r30,r5
	ctx.r30.u64 = ctx.r5.u64 - ctx.r30.u64;
	// lwz r29,244(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// subfe r8,r3,r8
	temp.u8 = (~ctx.r3.u32 + ctx.r8.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r3.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r3,264(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// mullw r11,r31,r6
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r6.s32);
	// lwz r27,348(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r5,336(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// lwz r31,344(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r26,1620(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1620);
	// stw r10,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r10.u32);
	// stw r8,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r8.u32);
	// addic r28,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r28.s64 = ctx.r4.s64 + -1;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// subfe r14,r28,r4
	temp.u8 = (~ctx.r28.u32 + ctx.r4.u32 < ~ctx.r28.u32) | (~ctx.r28.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r14.u64 = ~ctx.r28.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r4,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r4.s64 = ctx.r30.s64 + -1;
	// subf r25,r9,r29
	ctx.r25.u64 = ctx.r29.u64 - ctx.r9.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// subf r9,r9,r27
	ctx.r9.u64 = ctx.r27.u64 - ctx.r9.u64;
	// subfe r3,r4,r30
	temp.u8 = (~ctx.r4.u32 + ctx.r30.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subf r17,r5,r31
	ctx.r17.u64 = ctx.r31.u64 - ctx.r5.u64;
	// stw r9,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r9.u32);
	// subf r20,r5,r7
	ctx.r20.u64 = ctx.r7.u64 - ctx.r5.u64;
	// stw r3,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x880a1148
	if (!ctx.cr6.eq) goto loc_880A1148;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880a1148
	if (ctx.cr6.eq) goto loc_880A1148;
	// subf r30,r19,r16
	ctx.r30.u64 = ctx.r16.u64 - ctx.r19.u64;
	// subf r28,r18,r15
	ctx.r28.u64 = ctx.r15.u64 - ctx.r18.u64;
	// addi r24,r30,-4
	ctx.r24.s64 = ctx.r30.s64 + -4;
	// addi r9,r28,-4
	ctx.r9.s64 = ctx.r28.s64 + -4;
	// srawi r8,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r24.s32 >> 31;
	// subf r11,r6,r20
	ctx.r11.u64 = ctx.r20.u64 - ctx.r6.u64;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// xor r5,r24,r8
	ctx.r5.u64 = ctx.r24.u64 ^ ctx.r8.u64;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// xor r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// subf r11,r8,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r8.u64;
	// subf r27,r7,r4
	ctx.r27.u64 = ctx.r4.u64 - ctx.r7.u64;
	// addi r26,r10,-1
	ctx.r26.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880a0edc
	if (ctx.cr6.gt) goto loc_880A0EDC;
	// cmpwi cr6,r27,158
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 158, ctx.xer);
	// bgt cr6,0x880a0edc
	if (ctx.cr6.gt) goto loc_880A0EDC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,216(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// rlwinm r9,r27,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r5,r21
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r21.u32);
	// lwzx r11,r4,r21
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r21.u32);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880a0ee4
	goto loc_880A0EE4;
loc_880A0EDC:
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A0EE4:
	// lwz r22,260(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,1612(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// bctrl 
	ctx.lr = 0x880A0EFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// srawi r11,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 31;
	// lwz r10,212(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// addi r9,r20,-8
	ctx.r9.s64 = ctx.r20.s64 + -8;
	// xor r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 ^ ctx.r11.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r3,r29
	ctx.r6.u64 = ctx.r3.u64 + ctx.r29.u64;
	// subf r11,r11,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r11.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// stwx r6,r7,r10
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r6.u32);
	// bgt cr6,0x880a0f58
	if (ctx.cr6.gt) goto loc_880A0F58;
	// cmpwi cr6,r27,158
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 158, ctx.xer);
	// bgt cr6,0x880a0f58
	if (ctx.cr6.gt) goto loc_880A0F58;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,216(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// rlwinm r9,r27,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r21
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r21.u32);
	// lwzx r11,r5,r21
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r21.u32);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880a0f60
	goto loc_880A0F60;
loc_880A0F58:
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A0F60:
	// addi r5,r26,1
	ctx.r5.s64 = ctx.r26.s64 + 1;
	// lwz r6,1380(r23)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + 1380);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,1612(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// bctrl 
	ctx.lr = 0x880A0F78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r11,r20,-7
	ctx.r11.s64 = ctx.r20.s64 + -7;
	// lwz r10,212(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// srawi r9,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r30.s32 >> 31;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// xor r7,r30,r9
	ctx.r7.u64 = ctx.r30.u64 ^ ctx.r9.u64;
	// add r6,r3,r29
	ctx.r6.u64 = ctx.r3.u64 + ctx.r29.u64;
	// subf r11,r9,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r9.u64;
	// stwx r6,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r6.u32);
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880a0fd8
	if (ctx.cr6.gt) goto loc_880A0FD8;
	// cmpwi cr6,r27,158
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 158, ctx.xer);
	// bgt cr6,0x880a0fd8
	if (ctx.cr6.gt) goto loc_880A0FD8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,216(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// rlwinm r9,r27,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r21
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r21.u32);
	// lwzx r11,r5,r21
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r21.u32);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880a0fe0
	goto loc_880A0FE0;
loc_880A0FD8:
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A0FE0:
	// lwz r27,1612(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// addi r5,r26,2
	ctx.r5.s64 = ctx.r26.s64 + 2;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,1380(r23)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + 1380);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// bctrl 
	ctx.lr = 0x880A0FFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r20,-6
	ctx.r11.s64 = ctx.r20.s64 + -6;
	// add r10,r3,r29
	ctx.r10.u64 = ctx.r3.u64 + ctx.r29.u64;
	// lwz r29,212(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// stwx r10,r9,r29
	REX_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r10.u32);
	// bne cr6,0x880a1098
	if (!ctx.cr6.eq) goto loc_880A1098;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x880a1098
	if (ctx.cr6.eq) goto loc_880A1098;
	// addi r5,r31,-1
	ctx.r5.s64 = ctx.r31.s64 + -1;
	// lwz r6,1380(r23)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + 1380);
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x880A1038;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x88085820
	ctx.lr = 0x880A1050;
	sub_88085820(ctx, base);
	// add r11,r30,r3
	ctx.r11.u64 = ctx.r30.u64 + ctx.r3.u64;
	// lwz r6,1380(r23)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + 1380);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r11,-4(r29)
	REX_STORE_U32(ctx.r29.u32 + -4, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r11,r6,r31
	ctx.r11.u64 = ctx.r6.u64 + ctx.r31.u64;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bctrl 
	ctx.lr = 0x880A1074;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r28,4
	ctx.r5.s64 = ctx.r28.s64 + 4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x88085820
	ctx.lr = 0x880A108C;
	sub_88085820(ctx, base);
	// add r10,r30,r3
	ctx.r10.u64 = ctx.r30.u64 + ctx.r3.u64;
	// stw r10,24(r29)
	REX_STORE_U32(ctx.r29.u32 + 24, ctx.r10.u32);
	// b 0x880a1658
	goto loc_880A1658;
loc_880A1098:
	// cmpw cr6,r20,r17
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r17.s32, ctx.xer);
	// bne cr6,0x880a1658
	if (!ctx.cr6.eq) goto loc_880A1658;
	// lwz r11,220(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a1658
	if (ctx.cr6.eq) goto loc_880A1658;
	// lwz r29,1604(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// lwz r27,260(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r24,1612(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r6,1380(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 1380);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x880A10D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r26,1740(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1740);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x88085820
	ctx.lr = 0x880A10EC;
	sub_88085820(ctx, base);
	// addi r11,r17,1
	ctx.r11.s64 = ctx.r17.s64 + 1;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// lwz r27,212(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,1380(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 1380);
	// add r9,r23,r3
	ctx.r9.u64 = ctx.r23.u64 + ctx.r3.u64;
	// add r11,r6,r31
	ctx.r11.u64 = ctx.r6.u64 + ctx.r31.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stwx r9,r10,r27
	REX_STORE_U32(ctx.r10.u32 + ctx.r27.u32, ctx.r9.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x880A111C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r28,4
	ctx.r5.s64 = ctx.r28.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88085820
	ctx.lr = 0x880A1134;
	sub_88085820(ctx, base);
	// addi r8,r17,8
	ctx.r8.s64 = ctx.r17.s64 + 8;
	// add r7,r24,r3
	ctx.r7.u64 = ctx.r24.u64 + ctx.r3.u64;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r6,r27
	REX_STORE_U32(ctx.r6.u32 + ctx.r27.u32, ctx.r7.u32);
	// b 0x880a1658
	goto loc_880A1658;
loc_880A1148:
	// cmpw cr6,r25,r9
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x880a1464
	if (!ctx.cr6.eq) goto loc_880A1464;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880a1464
	if (ctx.cr6.eq) goto loc_880A1464;
	// subf r30,r19,r16
	ctx.r30.u64 = ctx.r16.u64 - ctx.r19.u64;
	// subf r26,r18,r15
	ctx.r26.u64 = ctx.r15.u64 - ctx.r18.u64;
	// addi r22,r30,-4
	ctx.r22.s64 = ctx.r30.s64 + -4;
	// addi r9,r26,4
	ctx.r9.s64 = ctx.r26.s64 + 4;
	// srawi r8,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r22.s32 >> 31;
	// add r11,r6,r20
	ctx.r11.u64 = ctx.r6.u64 + ctx.r20.u64;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// xor r5,r22,r8
	ctx.r5.u64 = ctx.r22.u64 ^ ctx.r8.u64;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// xor r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// subf r11,r8,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r8.u64;
	// subf r23,r7,r4
	ctx.r23.u64 = ctx.r4.u64 - ctx.r7.u64;
	// addi r24,r10,-1
	ctx.r24.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880a11c8
	if (ctx.cr6.gt) goto loc_880A11C8;
	// cmpwi cr6,r23,158
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 158, ctx.xer);
	// bgt cr6,0x880a11c8
	if (ctx.cr6.gt) goto loc_880A11C8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,216(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// rlwinm r9,r23,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r5,r21
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r21.u32);
	// lwzx r11,r4,r21
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r21.u32);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880a11d0
	goto loc_880A11D0;
loc_880A11C8:
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A11D0:
	// lwz r11,260(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r10,r25,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r3,1612(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// subf r21,r25,r10
	ctx.r21.u64 = ctx.r10.u64 - ctx.r25.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// add r28,r21,r20
	ctx.r28.u64 = ctx.r21.u64 + ctx.r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880A11F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// srawi r9,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r30.s32 >> 31;
	// lwz r7,212(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// addi r8,r28,6
	ctx.r8.s64 = ctx.r28.s64 + 6;
	// xor r6,r30,r9
	ctx.r6.u64 = ctx.r30.u64 ^ ctx.r9.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 + ctx.r29.u64;
	// subf r11,r9,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// stwx r4,r5,r7
	REX_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.r4.u32);
	// bgt cr6,0x880a1254
	if (ctx.cr6.gt) goto loc_880A1254;
	// cmpwi cr6,r23,158
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 158, ctx.xer);
	// bgt cr6,0x880a1254
	if (ctx.cr6.gt) goto loc_880A1254;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,216(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// rlwinm r8,r23,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,1740(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1740);
	// lwzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r6,r8,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// lwzx r10,r5,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880a1260
	goto loc_880A1260;
loc_880A1254:
	// lwz r11,1740(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1740);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r27,r10,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A1260:
	// lwz r11,1604(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// addi r5,r24,1
	ctx.r5.s64 = ctx.r24.s64 + 1;
	// lwz r10,260(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,1612(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// lwz r6,1380(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 1380);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880A1280;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// lwz r9,212(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// addi r8,r28,7
	ctx.r8.s64 = ctx.r28.s64 + 7;
	// srawi r7,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r29.s32 >> 31;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// xor r5,r29,r7
	ctx.r5.u64 = ctx.r29.u64 ^ ctx.r7.u64;
	// add r4,r3,r27
	ctx.r4.u64 = ctx.r3.u64 + ctx.r27.u64;
	// subf r11,r7,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r7.u64;
	// stwx r4,r6,r9
	REX_STORE_U32(ctx.r6.u32 + ctx.r9.u32, ctx.r4.u32);
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880a12e4
	if (ctx.cr6.gt) goto loc_880A12E4;
	// cmpwi cr6,r23,158
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 158, ctx.xer);
	// bgt cr6,0x880a12e4
	if (ctx.cr6.gt) goto loc_880A12E4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,216(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// rlwinm r9,r23,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r23,1740(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1740);
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r23
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r23.u32);
	// lwzx r11,r5,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r23.u32);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880a12f0
	goto loc_880A12F0;
loc_880A12E4:
	// lwz r23,1740(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1740);
	// lwz r11,20(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 20);
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A12F0:
	// addi r5,r24,2
	ctx.r5.s64 = ctx.r24.s64 + 2;
	// lwz r27,1604(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// lwz r24,260(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,1612(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// lwz r6,1380(r27)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x880A1310;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// lwz r28,212(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// add r10,r3,r30
	ctx.r10.u64 = ctx.r3.u64 + ctx.r30.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// stwx r10,r9,r28
	REX_STORE_U32(ctx.r9.u32 + ctx.r28.u32, ctx.r10.u32);
	// bne cr6,0x880a13c0
	if (!ctx.cr6.eq) goto loc_880A13C0;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x880a13c0
	if (ctx.cr6.eq) goto loc_880A13C0;
	// rlwinm r11,r25,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r29,1612(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// addi r5,r31,-1
	ctx.r5.s64 = ctx.r31.s64 + -1;
	// lwz r6,1380(r27)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// subf r10,r25,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r25.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,16
	ctx.r4.s64 = 16;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x880A1360;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085820
	ctx.lr = 0x880A1378;
	sub_88085820(ctx, base);
	// add r9,r28,r3
	ctx.r9.u64 = ctx.r28.u64 + ctx.r3.u64;
	// lwz r6,1380(r27)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r9,-4(r30)
	REX_STORE_U32(ctx.r30.u32 + -4, ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subf r11,r6,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r6.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bctrl 
	ctx.lr = 0x880A139C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r26,-4
	ctx.r5.s64 = ctx.r26.s64 + -4;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085820
	ctx.lr = 0x880A13B4;
	sub_88085820(ctx, base);
	// add r8,r29,r3
	ctx.r8.u64 = ctx.r29.u64 + ctx.r3.u64;
	// stw r8,-32(r30)
	REX_STORE_U32(ctx.r30.u32 + -32, ctx.r8.u32);
	// b 0x880a1658
	goto loc_880A1658;
loc_880A13C0:
	// cmpw cr6,r20,r17
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r17.s32, ctx.xer);
	// bne cr6,0x880a1658
	if (!ctx.cr6.eq) goto loc_880A1658;
	// lwz r11,220(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a1658
	if (ctx.cr6.eq) goto loc_880A1658;
	// lwz r22,1612(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,1380(r27)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// add r30,r21,r17
	ctx.r30.u64 = ctx.r21.u64 + ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x880A13F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085820
	ctx.lr = 0x880A140C;
	sub_88085820(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// add r10,r21,r3
	ctx.r10.u64 = ctx.r21.u64 + ctx.r3.u64;
	// lwz r6,1380(r27)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// subf r11,r6,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r6.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stwx r10,r9,r28
	REX_STORE_U32(ctx.r9.u32 + ctx.r28.u32, ctx.r10.u32);
	// bctrl 
	ctx.lr = 0x880A1438;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r26,-4
	ctx.r5.s64 = ctx.r26.s64 + -4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085820
	ctx.lr = 0x880A1450;
	sub_88085820(ctx, base);
	// addi r8,r30,-6
	ctx.r8.s64 = ctx.r30.s64 + -6;
	// add r7,r24,r3
	ctx.r7.u64 = ctx.r24.u64 + ctx.r3.u64;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r6,r28
	REX_STORE_U32(ctx.r6.u32 + ctx.r28.u32, ctx.r7.u32);
	// b 0x880a1658
	goto loc_880A1658;
loc_880A1464:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x880a1550
	if (!ctx.cr6.eq) goto loc_880A1550;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x880a1550
	if (ctx.cr6.eq) goto loc_880A1550;
	// rlwinm r11,r25,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,1380(r23)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + 1380);
	// lwz r27,260(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// subf r10,r19,r16
	ctx.r10.u64 = ctx.r16.u64 - ctx.r19.u64;
	// subf r8,r25,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r25.u64;
	// lwz r26,1612(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// subf r9,r6,r31
	ctx.r9.u64 = ctx.r31.u64 - ctx.r6.u64;
	// lwz r7,212(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// subf r28,r18,r15
	ctx.r28.u64 = ctx.r15.u64 - ctx.r18.u64;
	// addi r30,r10,-4
	ctx.r30.s64 = ctx.r10.s64 + -4;
	// add r29,r11,r7
	ctx.r29.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x880A14B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r28,-4
	ctx.r5.s64 = ctx.r28.s64 + -4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x88085820
	ctx.lr = 0x880A14D0;
	sub_88085820(ctx, base);
	// add r5,r24,r3
	ctx.r5.u64 = ctx.r24.u64 + ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r6,1380(r23)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + 1380);
	// stw r5,-32(r29)
	REX_STORE_U32(ctx.r29.u32 + -32, ctx.r5.u32);
	// addi r5,r31,-1
	ctx.r5.s64 = ctx.r31.s64 + -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x880A14F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x88085820
	ctx.lr = 0x880A1508;
	sub_88085820(ctx, base);
	// add r3,r24,r3
	ctx.r3.u64 = ctx.r24.u64 + ctx.r3.u64;
	// lwz r6,1380(r23)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + 1380);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r3,-4(r29)
	REX_STORE_U32(ctx.r29.u32 + -4, ctx.r3.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r11,r31,r6
	ctx.r11.u64 = ctx.r31.u64 + ctx.r6.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bctrl 
	ctx.lr = 0x880A152C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r28,4
	ctx.r5.s64 = ctx.r28.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x88085820
	ctx.lr = 0x880A1544;
	sub_88085820(ctx, base);
	// add r11,r27,r3
	ctx.r11.u64 = ctx.r27.u64 + ctx.r3.u64;
	// stw r11,24(r29)
	REX_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// b 0x880a1658
	goto loc_880A1658;
loc_880A1550:
	// cmpw cr6,r20,r17
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r17.s32, ctx.xer);
	// bne cr6,0x880a1658
	if (!ctx.cr6.eq) goto loc_880A1658;
	// lwz r11,220(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a1658
	if (ctx.cr6.eq) goto loc_880A1658;
	// lwz r27,1604(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// rlwinm r11,r25,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r26,260(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// subf r10,r19,r16
	ctx.r10.u64 = ctx.r16.u64 - ctx.r19.u64;
	// lwz r22,1612(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// subf r11,r25,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r25.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r6,1380(r27)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// subf r28,r18,r15
	ctx.r28.u64 = ctx.r15.u64 - ctx.r18.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
	// subf r9,r6,r31
	ctx.r9.u64 = ctx.r31.u64 - ctx.r6.u64;
	// add r29,r11,r17
	ctx.r29.u64 = ctx.r11.u64 + ctx.r17.u64;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// bctrl 
	ctx.lr = 0x880A15A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r23,1740(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1740);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r5,r28,-4
	ctx.r5.s64 = ctx.r28.s64 + -4;
	// bl 0x88085820
	ctx.lr = 0x880A15C0;
	sub_88085820(ctx, base);
	// addi r10,r29,-6
	ctx.r10.s64 = ctx.r29.s64 + -6;
	// lwz r24,212(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// add r9,r21,r3
	ctx.r9.u64 = ctx.r21.u64 + ctx.r3.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,1380(r27)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// stwx r9,r8,r24
	REX_STORE_U32(ctx.r8.u32 + ctx.r24.u32, ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x880A15EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x88085820
	ctx.lr = 0x880A1604;
	sub_88085820(ctx, base);
	// addi r7,r29,1
	ctx.r7.s64 = ctx.r29.s64 + 1;
	// add r3,r21,r3
	ctx.r3.u64 = ctx.r21.u64 + ctx.r3.u64;
	// lwz r6,1380(r27)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// add r11,r31,r6
	ctx.r11.u64 = ctx.r31.u64 + ctx.r6.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stwx r3,r10,r24
	REX_STORE_U32(ctx.r10.u32 + ctx.r24.u32, ctx.r3.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bctrl 
	ctx.lr = 0x880A1630;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r28,4
	ctx.r5.s64 = ctx.r28.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085820
	ctx.lr = 0x880A1648;
	sub_88085820(ctx, base);
	// addi r9,r29,8
	ctx.r9.s64 = ctx.r29.s64 + 8;
	// add r8,r26,r3
	ctx.r8.u64 = ctx.r26.u64 + ctx.r3.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r7,r24
	REX_STORE_U32(ctx.r7.u32 + ctx.r24.u32, ctx.r8.u32);
loc_880A1658:
	// lwz r27,1604(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// subf r8,r19,r16
	ctx.r8.u64 = ctx.r16.u64 - ctx.r19.u64;
	// subf r9,r18,r15
	ctx.r9.u64 = ctx.r15.u64 - ctx.r18.u64;
	// lwz r10,2604(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 2604);
	// lwz r11,2608(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 2608);
	// lwz r7,2612(r27)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + 2612);
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r5,2616(r27)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 2616);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r3,28036(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 28036);
	// and r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 & ctx.r7.u64;
	// and r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 & ctx.r5.u64;
	// subf r30,r10,r9
	ctx.r30.u64 = ctx.r9.u64 - ctx.r10.u64;
	// subf r29,r11,r8
	ctx.r29.u64 = ctx.r8.u64 - ctx.r11.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880a1b04
	if (ctx.cr6.eq) goto loc_880A1B04;
	// lwz r11,2652(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 2652);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r26,300(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r9,1560(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 1560);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880A16C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r22,1644(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 1644);
	// lwz r23,1636(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// addi r9,r1,228
	ctx.r9.s64 = ctx.r1.s64 + 228;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// lwz r28,312(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lwz r24,1612(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r22,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r23,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085938
	ctx.lr = 0x880A1718;
	sub_88085938(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,228(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085e60
	ctx.lr = 0x880A1730;
	sub_88085E60(ctx, base);
	// lwz r4,208(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r10,1716(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stw r11,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880a1750
	if (ctx.cr6.eq) goto loc_880A1750;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
loc_880A1750:
	// lwz r9,212(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// addi r5,r1,236
	ctx.r5.s64 = ctx.r1.s64 + 236;
	// stw r10,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r21,r1,240
	ctx.r21.s64 = ctx.r1.s64 + 240;
	// stw r5,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r5.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r10,108(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 108);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// lwz r3,220(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r9,224(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r31,296(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// stw r8,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// lwz r10,304(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r28,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r22,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r22.u32);
	// stw r14,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// stw r21,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r21.u32);
	// stw r23,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r23.u32);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,292(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// stw r29,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// stw r30,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r17,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r17.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r26,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r8,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r8.u32);
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x88093570
	ctx.lr = 0x880A17E0;
	sub_88093570(ctx, base);
	// lwz r10,240(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// add r9,r16,r10
	ctx.r9.u64 = ctx.r16.u64 + ctx.r10.u64;
	// cmpw cr6,r9,r19
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r19.s32, ctx.xer);
	// bne cr6,0x880a1800
	if (!ctx.cr6.eq) goto loc_880A1800;
	// lwz r11,236(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r10,r15,r11
	ctx.r10.u64 = ctx.r15.u64 + ctx.r11.u64;
	// cmpw cr6,r10,r18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r18.s32, ctx.xer);
	// beq cr6,0x880a1954
	if (ctx.cr6.eq) goto loc_880A1954;
loc_880A1800:
	// srawi r29,r19,2
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r19.s32 >> 2;
	// lwz r9,1684(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1684);
	// srawi r27,r18,2
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r18.s32 >> 2;
	// clrlwi r31,r19,30
	ctx.r31.u64 = ctx.r19.u32 & 0x3;
	// clrlwi r30,r18,30
	ctx.r30.u64 = ctx.r18.u32 & 0x3;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x880a1830
	if (ctx.cr6.lt) goto loc_880A1830;
	// lwz r9,1692(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1692);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x880a1834
	if (!ctx.cr6.gt) goto loc_880A1834;
loc_880A1830:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_880A1834:
	// lwz r9,1700(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1700);
	// cmpw cr6,r27,r9
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x880a184c
	if (ctx.cr6.lt) goto loc_880A184C;
	// lwz r9,1708(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1708);
	// cmpw cr6,r27,r9
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x880a1850
	if (!ctx.cr6.gt) goto loc_880A1850;
loc_880A184C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_880A1850:
	// lwz r28,1604(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r26,300(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r3,1620(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1620);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,1380(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 1380);
	// lwz r25,2652(r28)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r28.u32 + 2652);
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,1560(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 1560);
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bctrl 
	ctx.lr = 0x880A188C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1636(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// lwz r6,1644(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 1644);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r25,312(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r10,r1,228
	ctx.r10.s64 = ctx.r1.s64 + 228;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r6,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r4,1612(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x88085938
	ctx.lr = 0x880A18DC;
	sub_88085938(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,228(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88085e60
	ctx.lr = 0x880A18F4;
	sub_88085E60(ctx, base);
	// lwz r11,208(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r10,1716(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880a1914
	if (ctx.cr6.eq) goto loc_880A1914;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
loc_880A1914:
	// lwz r9,108(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 108);
	// lwz r10,224(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r28,288(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x880a1958
	if (!ctx.cr6.lt) goto loc_880A1958;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// stw r31,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// stw r29,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r29.u32);
	// stw r27,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r27.u32);
	// stw r11,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// stw r11,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// b 0x880a1958
	goto loc_880A1958;
loc_880A1954:
	// lwz r28,288(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
loc_880A1958:
	// lwz r11,1716(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a1afc
	if (ctx.cr6.eq) goto loc_880A1AFC;
	// lwz r11,248(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880a197c
	if (!ctx.cr6.eq) goto loc_880A197C;
	// lwz r11,1668(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1668);
	// lwz r10,1676(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1676);
	// b 0x880a1984
	goto loc_880A1984;
loc_880A197C:
	// lwz r11,1652(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1652);
	// lwz r10,1660(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1660);
loc_880A1984:
	// lwz r9,256(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r8,264(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r7,240(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880a19c4
	if (!ctx.cr6.eq) goto loc_880A19C4;
	// lwz r9,244(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r8,272(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r7,236(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880a1afc
	if (ctx.cr6.eq) goto loc_880A1AFC;
loc_880A19C4:
	// srawi r29,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 2;
	// lwz r9,1684(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1684);
	// srawi r27,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r10.s32 >> 2;
	// clrlwi r31,r11,30
	ctx.r31.u64 = ctx.r11.u32 & 0x3;
	// clrlwi r30,r10,30
	ctx.r30.u64 = ctx.r10.u32 & 0x3;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x880a19f4
	if (ctx.cr6.lt) goto loc_880A19F4;
	// lwz r9,1692(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1692);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x880a19f8
	if (!ctx.cr6.gt) goto loc_880A19F8;
loc_880A19F4:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_880A19F8:
	// lwz r9,1700(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1700);
	// cmpw cr6,r27,r9
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x880a1a10
	if (ctx.cr6.lt) goto loc_880A1A10;
	// lwz r9,1708(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1708);
	// cmpw cr6,r27,r9
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x880a1a14
	if (!ctx.cr6.gt) goto loc_880A1A14;
loc_880A1A10:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_880A1A14:
	// lwz r26,1604(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r24,300(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r3,1620(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1620);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r4,1380(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 1380);
	// lwz r25,2652(r26)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r26.u32 + 2652);
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,1560(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 1560);
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bctrl 
	ctx.lr = 0x880A1A50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1636(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// addi r8,r1,228
	ctx.r8.s64 = ctx.r1.s64 + 228;
	// lwz r9,1644(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1644);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// lwz r25,312(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r4,1612(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x88085938
	ctx.lr = 0x880A1AA0;
	sub_88085938(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,228(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88085e60
	ctx.lr = 0x880A1AB8;
	sub_88085E60(ctx, base);
	// lwz r5,208(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// add r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// lwz r4,108(r25)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 108);
	// lwz r10,224(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x880a1afc
	if (!ctx.cr6.lt) goto loc_880A1AFC;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// stw r31,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// stw r29,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r29.u32);
	// stw r27,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r27.u32);
	// stw r11,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// stw r11,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
loc_880A1AFC:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x880a1ec8
	goto loc_880A1EC8;
loc_880A1B04:
	// lwz r11,276(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r22,1740(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 1740);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a1b68
	if (ctx.cr6.eq) goto loc_880A1B68;
	// lwz r11,1716(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880a1b68
	if (!ctx.cr6.eq) goto loc_880A1B68;
	// lwz r11,1748(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1748);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r21,0(r11)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x88085820
	ctx.lr = 0x880A1B3C;
	sub_88085820(ctx, base);
	// lwz r24,1612(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r6,1380(r27)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r21
	ctx.ctr.u64 = ctx.r21.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x880A1B5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r11,r28,r3
	ctx.r11.u64 = ctx.r28.u64 + ctx.r3.u64;
	// stw r11,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// b 0x880a1b70
	goto loc_880A1B70;
loc_880A1B68:
	// lwz r21,260(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r24,1612(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
loc_880A1B70:
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r11,1748(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1748);
	// addi r10,r1,232
	ctx.r10.s64 = ctx.r1.s64 + 232;
	// lwz r9,312(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// stw r5,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r10,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// addi r8,r1,236
	ctx.r8.s64 = ctx.r1.s64 + 236;
	// lwz r10,296(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// addi r28,r17,1
	ctx.r28.s64 = ctx.r17.s64 + 1;
	// lwz r26,300(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r31,212(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// stw r29,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// addi r29,r10,1
	ctx.r29.s64 = ctx.r10.s64 + 1;
	// stw r8,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r9,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// stw r22,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r22.u32);
	// stw r30,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r29,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// stw r28,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r26,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// lwz r11,28460(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 28460);
	// lwz r25,220(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r10,304(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r9,292(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r8,232(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r14,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// bctrl 
	ctx.lr = 0x880A1C00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r31,r19,30
	ctx.r31.u64 = ctx.r19.u32 & 0x3;
	// clrlwi r30,r18,30
	ctx.r30.u64 = ctx.r18.u32 & 0x3;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x880a1c18
	if (!ctx.cr6.eq) goto loc_880A1C18;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x880a1d54
	if (ctx.cr6.eq) goto loc_880A1D54;
loc_880A1C18:
	// lwz r11,240(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// add r10,r16,r11
	ctx.r10.u64 = ctx.r16.u64 + ctx.r11.u64;
	// cmpw cr6,r10,r19
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r19.s32, ctx.xer);
	// bne cr6,0x880a1c38
	if (!ctx.cr6.eq) goto loc_880A1C38;
	// lwz r11,236(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r10,r15,r11
	ctx.r10.u64 = ctx.r15.u64 + ctx.r11.u64;
	// cmpw cr6,r10,r18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r18.s32, ctx.xer);
	// beq cr6,0x880a1d54
	if (ctx.cr6.eq) goto loc_880A1D54;
loc_880A1C38:
	// srawi r29,r19,2
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r19.s32 >> 2;
	// lwz r25,1684(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 1684);
	// srawi r28,r18,2
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r18.s32 >> 2;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x880a1c5c
	if (!ctx.cr6.lt) goto loc_880A1C5C;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// b 0x880a1c6c
	goto loc_880A1C6C;
loc_880A1C5C:
	// lwz r9,1692(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1692);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x880a1c6c
	if (!ctx.cr6.gt) goto loc_880A1C6C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_880A1C6C:
	// lwz r23,1700(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1700);
	// cmpw cr6,r28,r23
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x880a1c80
	if (!ctx.cr6.lt) goto loc_880A1C80;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x880a1c90
	goto loc_880A1C90;
loc_880A1C80:
	// lwz r9,1708(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1708);
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x880a1c90
	if (!ctx.cr6.gt) goto loc_880A1C90;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_880A1C90:
	// lwz r4,1380(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r6,2652(r27)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 2652);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r3,1620(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1620);
	// lwz r9,1560(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 1560);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bctrl 
	ctx.lr = 0x880A1CC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mtctr r21
	ctx.ctr.u64 = ctx.r21.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x880A1CDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// cmpwi cr6,r20,158
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 158, ctx.xer);
	// bgt cr6,0x880a1d18
	if (ctx.cr6.gt) goto loc_880A1D18;
	// lwz r11,216(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// rlwinm r10,r20,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r20,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r22.u32);
	// lwzx r10,r5,r22
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r22.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880a1d20
	goto loc_880A1D20;
loc_880A1D18:
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A1D20:
	// lwz r10,232(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880a1d64
	if (!ctx.cr6.lt) goto loc_880A1D64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r31,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stw r30,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// stw r11,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// stw r29,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r29.u32);
	// stw r28,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r28.u32);
	// stw r20,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r20.u32);
	// stw r20,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r20.u32);
	// b 0x880a1d64
	goto loc_880A1D64;
loc_880A1D54:
	// lwz r25,1684(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 1684);
	// li r20,0
	ctx.r20.s64 = 0;
	// lwz r23,1700(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1700);
	// lwz r10,232(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
loc_880A1D64:
	// lwz r11,1716(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a1ec8
	if (ctx.cr6.eq) goto loc_880A1EC8;
	// lwz r11,248(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880a1d88
	if (!ctx.cr6.eq) goto loc_880A1D88;
	// lwz r11,1668(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1668);
	// lwz r9,1676(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1676);
	// b 0x880a1d90
	goto loc_880A1D90;
loc_880A1D88:
	// lwz r11,1652(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1652);
	// lwz r9,1660(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1660);
loc_880A1D90:
	// clrlwi r29,r11,30
	ctx.r29.u64 = ctx.r11.u32 & 0x3;
	// clrlwi r28,r9,30
	ctx.r28.u64 = ctx.r9.u32 & 0x3;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x880a1da8
	if (!ctx.cr6.eq) goto loc_880A1DA8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x880a1ec8
	if (ctx.cr6.eq) goto loc_880A1EC8;
loc_880A1DA8:
	// lwz r8,256(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r7,264(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r6,240(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 + ctx.r6.u64;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880a1de8
	if (!ctx.cr6.eq) goto loc_880A1DE8;
	// lwz r8,244(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r7,272(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r6,236(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 + ctx.r6.u64;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x880a1ec8
	if (ctx.cr6.eq) goto loc_880A1EC8;
loc_880A1DE8:
	// srawi r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	// srawi r30,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r9.s32 >> 2;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpw cr6,r31,r25
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x880a1e08
	if (!ctx.cr6.lt) goto loc_880A1E08;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// b 0x880a1e18
	goto loc_880A1E18;
loc_880A1E08:
	// lwz r9,1692(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1692);
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x880a1e18
	if (!ctx.cr6.gt) goto loc_880A1E18;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_880A1E18:
	// cmpw cr6,r30,r23
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x880a1e28
	if (!ctx.cr6.lt) goto loc_880A1E28;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x880a1e38
	goto loc_880A1E38;
loc_880A1E28:
	// lwz r9,1708(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1708);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x880a1e38
	if (!ctx.cr6.gt) goto loc_880A1E38;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_880A1E38:
	// lwz r4,1380(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r6,2652(r27)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 2652);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r3,1620(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1620);
	// lwz r9,1560(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 1560);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bctrl 
	ctx.lr = 0x880A1E6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mtctr r21
	ctx.ctr.u64 = ctx.r21.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x880A1E84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085820
	ctx.lr = 0x880A1E9C;
	sub_88085820(ctx, base);
	// lwz r10,232(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// add r11,r3,r26
	ctx.r11.u64 = ctx.r3.u64 + ctx.r26.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880a1ec8
	if (!ctx.cr6.lt) goto loc_880A1EC8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r29,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r29.u32);
	// stw r28,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r28.u32);
	// stw r31,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r31.u32);
	// stw r30,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r30.u32);
	// stw r20,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r20.u32);
	// stw r20,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r20.u32);
loc_880A1EC8:
	// lwz r11,256(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r9,264(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r8,244(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r7,272(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r3,240(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r5,1764(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1764);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,1772(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1772);
	// lwz r7,236(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,1780(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 1780);
	// add r4,r9,r3
	ctx.r4.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r4,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
	// stw r3,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// addi r1,r1,1584
	ctx.r1.s64 = ctx.r1.s64 + 1584;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E2488) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x880e24dc
	if (!ctx.cr6.gt) goto loc_880E24DC;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
loc_880E249C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x880e24cc
	if (!ctx.cr6.gt) goto loc_880E24CC;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// subf r10,r5,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r5.u64;
loc_880E24B0:
	// lbzx r31,r10,r11
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lbz r30,0(r11)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r31,r30,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r30.u64;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// sthu r31,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r31.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x880e24b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880E24B0;
loc_880E24CC:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bne 0x880e249c
	if (!ctx.cr0.eq) goto loc_880E249C;
loc_880E24DC:
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880E2660) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x880e269c
	if (ctx.cr6.eq) goto loc_880E269C;
	// lwz r10,7116(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 7116);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,7120(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 7120);
	// stw r9,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r8,7128(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 7128);
	// stw r8,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// lwz r7,7124(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 7124);
	// stw r7,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r7.u32);
	// lwz r6,7132(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 7132);
	// stw r6,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r6.u32);
	// blr 
	return;
loc_880E269C:
	// lwz r10,7092(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 7092);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,7096(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 7096);
	// stw r9,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r8,7112(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 7112);
	// stw r8,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// lwz r7,7104(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 7104);
	// stw r7,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r7.u32);
	// lwz r6,21144(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 21144);
	// stw r6,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r6.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880E2A88) {
	REX_FUNC_PROLOGUE();
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// subf. r11,r5,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x880e2ae4
	if (!ctx.cr0.lt) goto loc_880E2AE4;
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// lfd f13,8624(r8)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r8.u32 + 8624);
	// lfd f12,12248(r7)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r7.u32 + 12248);
	// fdiv f9,f11,f10
	ctx.f9.f64 = ctx.f11.f64 / ctx.f10.f64;
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fmul f7,f8,f1
	ctx.f7.f64 = ctx.f8.f64 * ctx.f1.f64;
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// fmul f1,f7,f12
	ctx.f1.f64 = ctx.f7.f64 * ctx.f12.f64;
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// fadd f1,f1,f13
	ctx.f1.f64 = ctx.f1.f64 + ctx.f13.f64;
	// blr 
	return;
loc_880E2AE4:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// lfd f13,14712(r9)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + 14712);
	// fmul f13,f0,f13
	ctx.f13.f64 = ctx.f0.f64 * ctx.f13.f64;
	// lfd f12,-16(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfd f12,14704(r8)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r8.u32 + 14704);
	// fdiv f9,f10,f11
	ctx.f9.f64 = ctx.f10.f64 / ctx.f11.f64;
	// fmul f8,f9,f0
	ctx.f8.f64 = ctx.f9.f64 * ctx.f0.f64;
	// fmul f1,f8,f12
	ctx.f1.f64 = ctx.f8.f64 * ctx.f12.f64;
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880E39D0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,7976(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7976);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e3ac0
	if (!ctx.cr6.eq) goto loc_880E3AC0;
	// lwz r11,8104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e3ac0
	if (ctx.cr6.eq) goto loc_880E3AC0;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lwz r11,18412(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e3ac0
	if (!ctx.cr6.eq) goto loc_880E3AC0;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lwz r11,18416(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e3ac0
	if (!ctx.cr6.eq) goto loc_880E3AC0;
	// lwz r11,7952(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7952);
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// lwz r9,7960(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 7960);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x880e3a34
	if (ctx.cr6.lt) goto loc_880E3A34;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,7972(r3)
	REX_STORE_U32(ctx.r3.u32 + 7972, ctx.r11.u32);
	// lwz r11,-19940(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -19940);
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// stw r11,-19948(r10)
	REX_STORE_U32(ctx.r10.u32 + -19948, ctx.r11.u32);
	// blr 
	return;
loc_880E3A34:
	// lwz r9,7964(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 7964);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r8,7972(r3)
	REX_STORE_U32(ctx.r3.u32 + 7972, ctx.r8.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x880e3a64
	if (ctx.cr6.lt) goto loc_880E3A64;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// lis r9,-30678
	ctx.r9.s64 = -2010513408;
	// lwz r11,-19952(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -19952);
	// stw r11,-19940(r10)
	REX_STORE_U32(ctx.r10.u32 + -19940, ctx.r11.u32);
	// stw r11,-19948(r9)
	REX_STORE_U32(ctx.r9.u32 + -19948, ctx.r11.u32);
	// blr 
	return;
loc_880E3A64:
	// lwz r11,676(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 676);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bgt cr6,0x880e3a88
	if (ctx.cr6.gt) goto loc_880E3A88;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lwz r11,-19952(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -19952);
	// stw r11,-19940(r10)
	REX_STORE_U32(ctx.r10.u32 + -19940, ctx.r11.u32);
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// stw r11,-19948(r10)
	REX_STORE_U32(ctx.r10.u32 + -19948, ctx.r11.u32);
	// blr 
	return;
loc_880E3A88:
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// blt cr6,0x880e3aa8
	if (ctx.cr6.lt) goto loc_880E3AA8;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lwz r11,-19964(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -19964);
	// stw r11,-19940(r10)
	REX_STORE_U32(ctx.r10.u32 + -19940, ctx.r11.u32);
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// stw r11,-19948(r10)
	REX_STORE_U32(ctx.r10.u32 + -19948, ctx.r11.u32);
	// blr 
	return;
loc_880E3AA8:
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lwz r11,-19960(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -19960);
	// stw r11,-19940(r10)
	REX_STORE_U32(ctx.r10.u32 + -19940, ctx.r11.u32);
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// stw r11,-19948(r10)
	REX_STORE_U32(ctx.r10.u32 + -19948, ctx.r11.u32);
	// blr 
	return;
loc_880E3AC0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,7972(r3)
	REX_STORE_U32(ctx.r3.u32 + 7972, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880E5A70) {
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
	// cmpwi cr6,r5,4096
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4096, ctx.xer);
	// bgt cr6,0x880e5c08
	if (ctx.cr6.gt) goto loc_880E5C08;
	// ld r11,736(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 736);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// beq cr6,0x880e5c08
	if (ctx.cr6.eq) goto loc_880E5C08;
	// cmpwi cr6,r5,12
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 12, ctx.xer);
	// blt cr6,0x880e5c08
	if (ctx.cr6.lt) goto loc_880E5C08;
	// lwz r11,30304(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30304);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e5b08
	if (ctx.cr6.eq) goto loc_880E5B08;
	// lwz r11,30224(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30224);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x880e5b08
	if (!ctx.cr6.gt) goto loc_880E5B08;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880e5ac8
	if (!ctx.cr6.eq) goto loc_880E5AC8;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x880e5ad4
	goto loc_880E5AD4;
loc_880E5AC8:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x880e5ad4
	if (!ctx.cr6.eq) goto loc_880E5AD4;
	// li r10,2
	ctx.r10.s64 = 2;
loc_880E5AD4:
	// lis r11,-30681
	ctx.r11.s64 = -2010710016;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,5024
	ctx.r11.s64 = ctx.r11.s64 + 5024;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// lwzx r9,r8,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// addi r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 192;
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x880e5be0
	goto loc_880E5BE0;
loc_880E5B08:
	// lwz r11,30904(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30904);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-30681
	ctx.r11.s64 = -2010710016;
	// addi r11,r11,5024
	ctx.r11.s64 = ctx.r11.s64 + 5024;
	// beq cr6,0x880e5b24
	if (ctx.cr6.eq) goto loc_880E5B24;
	// lwz r10,30960(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 30960);
	// b 0x880e5bb8
	goto loc_880E5BB8;
loc_880E5B24:
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r8,r11,96
	ctx.r8.s64 = ctx.r11.s64 + 96;
	// lwz r10,1416(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1416);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x880e5c08
	if (!ctx.cr6.gt) goto loc_880E5C08;
	// addi r8,r11,112
	ctx.r8.s64 = ctx.r11.s64 + 112;
	// lwzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x880e5b58
	if (!ctx.cr6.lt) goto loc_880E5B58;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x880e5bb8
	goto loc_880E5BB8;
loc_880E5B58:
	// addi r8,r11,128
	ctx.r8.s64 = ctx.r11.s64 + 128;
	// lwzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x880e5b70
	if (!ctx.cr6.lt) goto loc_880E5B70;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x880e5bb8
	goto loc_880E5BB8;
loc_880E5B70:
	// addi r8,r11,144
	ctx.r8.s64 = ctx.r11.s64 + 144;
	// lwzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x880e5b88
	if (!ctx.cr6.lt) goto loc_880E5B88;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x880e5bb8
	goto loc_880E5BB8;
loc_880E5B88:
	// addi r8,r11,160
	ctx.r8.s64 = ctx.r11.s64 + 160;
	// lwzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x880e5ba0
	if (!ctx.cr6.lt) goto loc_880E5BA0;
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x880e5bb8
	goto loc_880E5BB8;
loc_880E5BA0:
	// addi r8,r11,176
	ctx.r8.s64 = ctx.r11.s64 + 176;
	// lwzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// li r10,4
	ctx.r10.s64 = 4;
	// blt cr6,0x880e5bb8
	if (ctx.cr6.lt) goto loc_880E5BB8;
	// li r10,5
	ctx.r10.s64 = 5;
loc_880E5BB8:
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r11,192
	ctx.r10.s64 = ctx.r11.s64 + 192;
	// lwzx r9,r8,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_880E5BE0:
	// stw r9,21260(r3)
	REX_STORE_U32(ctx.r3.u32 + 21260, ctx.r9.u32);
	// li r4,22
	ctx.r4.s64 = 22;
	// lwzx r11,r8,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r11,21264(r3)
	REX_STORE_U32(ctx.r3.u32 + 21264, ctx.r11.u32);
	// lwzx r10,r8,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// stw r10,21268(r3)
	REX_STORE_U32(ctx.r3.u32 + 21268, ctx.r10.u32);
	// lwzx r9,r8,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// stw r9,21272(r3)
	REX_STORE_U32(ctx.r3.u32 + 21272, ctx.r9.u32);
	// stw r5,21276(r3)
	REX_STORE_U32(ctx.r3.u32 + 21276, ctx.r5.u32);
	// bl 0x880f40c0
	ctx.lr = 0x880E5C08;
	sub_880F40C0(ctx, base);
loc_880E5C08:
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

DEFINE_REX_FUNC(sub_880EB120) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,7200(r11)
	REX_STORE_U32(ctx.r11.u32 + 7200, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880EB1E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,7208(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880eb2e8
	if (!ctx.cr6.gt) goto loc_880EB2E8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x880eb214
	if (ctx.cr6.eq) goto loc_880EB214;
	// ld r11,16(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 16);
	// ld r10,24(r5)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r5.u32 + 24);
	// std r11,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// std r10,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, ctx.r10.u64);
	// ld r8,16(r6)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r6.u32 + 16);
	// ld r9,24(r6)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r6.u32 + 24);
	// std r9,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r9.u64);
	// std r8,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r8.u64);
loc_880EB214:
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// lwz r8,7208(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 7208);
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// addi r9,r10,32
	ctx.r9.s64 = ctx.r10.s64 + 32;
	// beq cr6,0x880eb2bc
	if (ctx.cr6.eq) goto loc_880EB2BC;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x880eb280
	if (ctx.cr6.eq) goto loc_880EB280;
	// ld r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// addi r8,r4,8
	ctx.r8.s64 = ctx.r4.s64 + 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r7,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r7,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// std r7,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r7.u64);
	// ldu r7,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r7,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r7.u64);
	ctx.r10.u32 = ea;
	// stdu r7,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r7.u64);
	ctx.r11.u32 = ea;
	// std r7,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, ctx.r7.u64);
	// ldu r7,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r7,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r7.u64);
	ctx.r10.u32 = ea;
	// stdu r7,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r7.u64);
	ctx.r11.u32 = ea;
	// stdu r7,8(r8)
	ea = 8 + ctx.r8.u32;
	REX_STORE_U64(ea, ctx.r7.u64);
	ctx.r8.u32 = ea;
	// ld r6,8(r9)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// stdu r6,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r6.u64);
	ctx.r10.u32 = ea;
	// stdu r6,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r6.u64);
	ctx.r11.u32 = ea;
	// std r6,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// blr 
	return;
loc_880EB280:
	// ld r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// addi r9,r4,8
	ctx.r9.s64 = ctx.r4.s64 + 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r8,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r8,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r8.u64);
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r8.u64);
	ctx.r11.u32 = ea;
	// std r8,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, ctx.r8.u64);
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r8.u64);
	ctx.r11.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// ld r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// stdu r7,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r7.u64);
	ctx.r11.u32 = ea;
	// std r7,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r7.u64);
	// blr 
	return;
loc_880EB2BC:
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r9,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r9.u64);
	// ldu r8,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// std r8,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, ctx.r8.u64);
	// ldu r7,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r7,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r7.u64);
	ctx.r10.u32 = ea;
	// ld r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r6,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// blr 
	return;
loc_880EB2E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880ECC18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x880ECC20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,228(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// rlwinm r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// beq cr6,0x880ecc84
	if (ctx.cr6.eq) goto loc_880ECC84;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880ecd90
	if (ctx.cr6.eq) goto loc_880ECD90;
	// lwz r3,31552(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 31552);
	// bl 0x880be280
	ctx.lr = 0x880ECC68;
	sub_880BE280(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880ecd90
	if (!ctx.cr6.eq) goto loc_880ECD90;
	// lis r11,-30681
	ctx.r11.s64 = -2010710016;
	// addi r10,r11,5592
	ctx.r10.s64 = ctx.r11.s64 + 5592;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_880ECC84:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880ecd90
	if (ctx.cr6.eq) goto loc_880ECD90;
	// lwz r3,31552(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 31552);
	// bl 0x880be280
	ctx.lr = 0x880ECC94;
	sub_880BE280(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880ecd90
	if (!ctx.cr6.eq) goto loc_880ECD90;
	// lwz r11,27988(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 27988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880ecd20
	if (!ctx.cr6.eq) goto loc_880ECD20;
	// cmpwi cr6,r29,64
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 64, ctx.xer);
	// bne cr6,0x880eccc8
	if (!ctx.cr6.eq) goto loc_880ECCC8;
	// lis r11,-30681
	ctx.r11.s64 = -2010710016;
	// addi r11,r11,5592
	ctx.r11.s64 = ctx.r11.s64 + 5592;
	// addi r10,r11,288
	ctx.r10.s64 = ctx.r11.s64 + 288;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_880ECCC8:
	// cmpwi cr6,r29,32
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 32, ctx.xer);
	// bne cr6,0x880ecd08
	if (!ctx.cr6.eq) goto loc_880ECD08;
	// lwz r11,8268(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8268);
	// lwz r10,220(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// lis r11,-30681
	ctx.r11.s64 = -2010710016;
	// addi r11,r11,5592
	ctx.r11.s64 = ctx.r11.s64 + 5592;
	// bne cr6,0x880eccf8
	if (!ctx.cr6.eq) goto loc_880ECCF8;
	// addi r10,r11,160
	ctx.r10.s64 = ctx.r11.s64 + 160;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_880ECCF8:
	// addi r10,r11,224
	ctx.r10.s64 = ctx.r11.s64 + 224;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_880ECD08:
	// lis r11,-30681
	ctx.r11.s64 = -2010710016;
	// addi r11,r11,5592
	ctx.r11.s64 = ctx.r11.s64 + 5592;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_880ECD20:
	// cmpwi cr6,r29,64
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 64, ctx.xer);
	// bne cr6,0x880ecd40
	if (!ctx.cr6.eq) goto loc_880ECD40;
	// lis r11,-30681
	ctx.r11.s64 = -2010710016;
	// addi r11,r11,5592
	ctx.r11.s64 = ctx.r11.s64 + 5592;
	// addi r10,r11,576
	ctx.r10.s64 = ctx.r11.s64 + 576;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_880ECD40:
	// cmpwi cr6,r29,32
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 32, ctx.xer);
	// bne cr6,0x880ecd80
	if (!ctx.cr6.eq) goto loc_880ECD80;
	// lwz r11,8268(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8268);
	// lwz r10,220(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// lis r11,-30681
	ctx.r11.s64 = -2010710016;
	// addi r11,r11,5592
	ctx.r11.s64 = ctx.r11.s64 + 5592;
	// bne cr6,0x880ecd70
	if (!ctx.cr6.eq) goto loc_880ECD70;
	// addi r10,r11,448
	ctx.r10.s64 = ctx.r11.s64 + 448;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_880ECD70:
	// addi r10,r11,512
	ctx.r10.s64 = ctx.r11.s64 + 512;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_880ECD80:
	// lis r11,-30681
	ctx.r11.s64 = -2010710016;
	// addi r11,r11,5592
	ctx.r11.s64 = ctx.r11.s64 + 5592;
	// addi r10,r11,416
	ctx.r10.s64 = ctx.r11.s64 + 416;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_880ECD90:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880F2460) {
	REX_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,7872(r3)
	REX_STORE_U32(ctx.r3.u32 + 7872, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880F2470) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050820
	ctx.lr = 0x880F2478;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r29,1624(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 1624);
	// lis r11,-30681
	ctx.r11.s64 = -2010710016;
	// lis r4,-30681
	ctx.r4.s64 = -2010710016;
	// lis r31,-30681
	ctx.r31.s64 = -2010710016;
	// lis r30,-30681
	ctx.r30.s64 = -2010710016;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// li r18,1
	ctx.r18.s64 = 1;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r23,r11,7256
	ctx.r23.s64 = ctx.r11.s64 + 7256;
	// addi r22,r4,6296
	ctx.r22.s64 = ctx.r4.s64 + 6296;
	// addi r21,r31,9176
	ctx.r21.s64 = ctx.r31.s64 + 9176;
	// addi r20,r30,8216
	ctx.r20.s64 = ctx.r30.s64 + 8216;
	// ble cr6,0x880f253c
	if (!ctx.cr6.gt) goto loc_880F253C;
	// rotlwi r27,r29,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// addi r11,r3,2564
	ctx.r11.s64 = ctx.r3.s64 + 2564;
loc_880F24E0:
	// lwz r31,956(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 956);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r4,960(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 960);
	// add r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 + ctx.r5.u64;
	// lwz r30,964(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 964);
	// lwz r31,972(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 972);
	// add r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64;
	// lwz r4,980(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 980);
	// add r7,r30,r7
	ctx.r7.u64 = ctx.r30.u64 + ctx.r7.u64;
	// add r25,r31,r25
	ctx.r25.u64 = ctx.r31.u64 + ctx.r25.u64;
	// lwz r29,976(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 976);
	// lwz r30,1004(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 1004);
	// add r28,r4,r28
	ctx.r28.u64 = ctx.r4.u64 + ctx.r28.u64;
	// lwz r31,1000(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 1000);
	// add r26,r29,r26
	ctx.r26.u64 = ctx.r29.u64 + ctx.r26.u64;
	// lwzu r4,968(r11)
	ea = 968 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// add r24,r4,r24
	ctx.r24.u64 = ctx.r4.u64 + ctx.r24.u64;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x880f24e0
	if (ctx.cr6.lt) goto loc_880F24E0;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x880f254c
	if (ctx.cr6.gt) goto loc_880F254C;
loc_880F253C:
	// stw r19,20044(r3)
	REX_STORE_U32(ctx.r3.u32 + 20044, ctx.r19.u32);
	// stw r22,20048(r3)
	REX_STORE_U32(ctx.r3.u32 + 20048, ctx.r22.u32);
	// stw r23,20052(r3)
	REX_STORE_U32(ctx.r3.u32 + 20052, ctx.r23.u32);
	// b 0x880f2558
	goto loc_880F2558;
loc_880F254C:
	// stw r18,20044(r3)
	REX_STORE_U32(ctx.r3.u32 + 20044, ctx.r18.u32);
	// stw r20,20048(r3)
	REX_STORE_U32(ctx.r3.u32 + 20048, ctx.r20.u32);
	// stw r21,20052(r3)
	REX_STORE_U32(ctx.r3.u32 + 20052, ctx.r21.u32);
loc_880F2558:
	// lwz r11,31044(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31044);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x880f2588
	if (ctx.cr6.eq) goto loc_880F2588;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880f257c
	if (!ctx.cr6.eq) goto loc_880F257C;
	// stw r22,20048(r3)
	REX_STORE_U32(ctx.r3.u32 + 20048, ctx.r22.u32);
	// stw r23,20052(r3)
	REX_STORE_U32(ctx.r3.u32 + 20052, ctx.r23.u32);
	// stw r19,20044(r3)
	REX_STORE_U32(ctx.r3.u32 + 20044, ctx.r19.u32);
	// b 0x880f2588
	goto loc_880F2588;
loc_880F257C:
	// stw r20,20048(r3)
	REX_STORE_U32(ctx.r3.u32 + 20048, ctx.r20.u32);
	// stw r21,20052(r3)
	REX_STORE_U32(ctx.r3.u32 + 20052, ctx.r21.u32);
	// stw r18,20044(r3)
	REX_STORE_U32(ctx.r3.u32 + 20044, ctx.r18.u32);
loc_880F2588:
	// lwz r8,2800(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 2800);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x880f259c
	if (ctx.cr6.eq) goto loc_880F259C;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x880f25a8
	if (!ctx.cr6.eq) goto loc_880F25A8;
loc_880F259C:
	// add r6,r26,r6
	ctx.r6.u64 = ctx.r26.u64 + ctx.r6.u64;
	// add r5,r25,r5
	ctx.r5.u64 = ctx.r25.u64 + ctx.r5.u64;
	// add r7,r28,r7
	ctx.r7.u64 = ctx.r28.u64 + ctx.r7.u64;
loc_880F25A8:
	// li r9,2
	ctx.r9.s64 = 2;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x880f25cc
	if (ctx.cr6.gt) goto loc_880F25CC;
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x880f25e4
	if (ctx.cr6.gt) goto loc_880F25E4;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// stw r19,20036(r3)
	REX_STORE_U32(ctx.r3.u32 + 20036, ctx.r19.u32);
	// stw r19,20040(r3)
	REX_STORE_U32(ctx.r3.u32 + 20040, ctx.r19.u32);
	// b 0x880f25f0
	goto loc_880F25F0;
loc_880F25CC:
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x880f25e4
	if (ctx.cr6.gt) goto loc_880F25E4;
	// addi r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 2;
	// stw r18,20036(r3)
	REX_STORE_U32(ctx.r3.u32 + 20036, ctx.r18.u32);
	// stw r18,20040(r3)
	REX_STORE_U32(ctx.r3.u32 + 20040, ctx.r18.u32);
	// b 0x880f25f0
	goto loc_880F25F0;
loc_880F25E4:
	// stw r9,20040(r3)
	REX_STORE_U32(ctx.r3.u32 + 20040, ctx.r9.u32);
	// addi r11,r7,2
	ctx.r11.s64 = ctx.r7.s64 + 2;
	// stw r9,20036(r3)
	REX_STORE_U32(ctx.r3.u32 + 20036, ctx.r9.u32);
loc_880F25F0:
	// lwz r10,31052(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 31052);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x880f2638
	if (ctx.cr6.eq) goto loc_880F2638;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880f2614
	if (!ctx.cr6.eq) goto loc_880F2614;
	// stw r19,20036(r3)
	REX_STORE_U32(ctx.r3.u32 + 20036, ctx.r19.u32);
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// stw r19,20040(r3)
	REX_STORE_U32(ctx.r3.u32 + 20040, ctx.r19.u32);
	// b 0x880f2638
	goto loc_880F2638;
loc_880F2614:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x880f262c
	if (!ctx.cr6.eq) goto loc_880F262C;
	// stw r18,20036(r3)
	REX_STORE_U32(ctx.r3.u32 + 20036, ctx.r18.u32);
	// addi r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 2;
	// stw r18,20040(r3)
	REX_STORE_U32(ctx.r3.u32 + 20040, ctx.r18.u32);
	// b 0x880f2638
	goto loc_880F2638;
loc_880F262C:
	// stw r9,20036(r3)
	REX_STORE_U32(ctx.r3.u32 + 20036, ctx.r9.u32);
	// addi r11,r7,2
	ctx.r11.s64 = ctx.r7.s64 + 2;
	// stw r9,20040(r3)
	REX_STORE_U32(ctx.r3.u32 + 20040, ctx.r9.u32);
loc_880F2638:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880f2648
	if (ctx.cr6.eq) goto loc_880F2648;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// bne cr6,0x880f26cc
	if (!ctx.cr6.eq) goto loc_880F26CC;
loc_880F2648:
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x880f2668
	if (ctx.cr6.gt) goto loc_880F2668;
	// cmplw cr6,r26,r28
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x880f267c
	if (ctx.cr6.gt) goto loc_880F267C;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r19,20040(r3)
	REX_STORE_U32(ctx.r3.u32 + 20040, ctx.r19.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x880f2688
	goto loc_880F2688;
loc_880F2668:
	// cmplw cr6,r25,r28
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x880f267c
	if (ctx.cr6.gt) goto loc_880F267C;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r18,20040(r3)
	REX_STORE_U32(ctx.r3.u32 + 20040, ctx.r18.u32);
	// b 0x880f2684
	goto loc_880F2684;
loc_880F267C:
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r9,20040(r3)
	REX_STORE_U32(ctx.r3.u32 + 20040, ctx.r9.u32);
loc_880F2684:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_880F2688:
	// lwz r10,31048(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 31048);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x880f26cc
	if (ctx.cr6.eq) goto loc_880F26CC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880f26ac
	if (!ctx.cr6.eq) goto loc_880F26AC;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r19,20040(r3)
	REX_STORE_U32(ctx.r3.u32 + 20040, ctx.r19.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x880f26cc
	goto loc_880F26CC;
loc_880F26AC:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x880f26c0
	if (!ctx.cr6.eq) goto loc_880F26C0;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r18,20040(r3)
	REX_STORE_U32(ctx.r3.u32 + 20040, ctx.r18.u32);
	// b 0x880f26c8
	goto loc_880F26C8;
loc_880F26C0:
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r9,20040(r3)
	REX_STORE_U32(ctx.r3.u32 + 20040, ctx.r9.u32);
loc_880F26C8:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_880F26CC:
	// lwz r10,1540(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1540);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880f26e4
	if (ctx.cr6.eq) goto loc_880F26E4;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// blt cr6,0x880f26e8
	if (ctx.cr6.lt) goto loc_880F26E8;
loc_880F26E4:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_880F26E8:
	// stw r11,1536(r3)
	REX_STORE_U32(ctx.r3.u32 + 1536, ctx.r11.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r5,20040(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 20040);
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r4,20036(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20036);
	// bl 0x88071ae8
	ctx.lr = 0x880F2700;
	sub_88071AE8(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r19,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
loc_880F2708:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x880f2708
	if (!ctx.cr0.eq) goto loc_880F2708;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880F5F28) {
	REX_FUNC_PROLOGUE();
	// lwz r10,27940(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 27940);
	// mulli r11,r7,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(52));
	// lhz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// lwz r7,40(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r3,r7,r8
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// sth r3,0(r5)
	REX_STORE_U16(ctx.r5.u32 + 0, ctx.r3.u16);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// addi r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 2;
	// subf r7,r5,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880F5F6C:
	// lhzx r10,r7,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880f5fa4
	if (ctx.cr6.eq) goto loc_880F5FA4;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// bge cr6,0x880f5f94
	if (!ctx.cr6.lt) goto loc_880F5F94;
	// subf r5,r8,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r8.u64;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sth r4,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
	// b 0x880f5fa8
	goto loc_880F5FA8;
loc_880F5F94:
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// sth r5,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// b 0x880f5fa8
	goto loc_880F5FA8;
loc_880F5FA4:
	// sth r6,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
loc_880F5FA8:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x880f5f6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F5F6C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880F78F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x880F78F8;
	__savegprlr_23(ctx, base);
	// clrlwi r11,r6,27
	ctx.r11.u64 = ctx.r6.u32 & 0x1F;
	// rlwinm r11,r11,0,31,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880f7b4c
	if (!ctx.cr6.eq) goto loc_880F7B4C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880f79bc
	if (ctx.cr6.eq) goto loc_880F79BC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880f7938
	if (ctx.cr6.eq) goto loc_880F7938;
	// li r9,8
	ctx.r9.s64 = 8;
	// subf r10,r7,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r11,r8,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880F7928:
	// ldux r9,r11,r8
	ea = ctx.r11.u32 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdux r9,r10,r7
	ea = ctx.r10.u32 + ctx.r7.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x880f7928
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F7928;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_880F7938:
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// subf r3,r6,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r6.u64;
	// li r31,2
	ctx.r31.s64 = 2;
loc_880F7944:
	// li r9,8
	ctx.r9.s64 = 8;
	// subf r10,r7,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r7.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880F7958:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// lbz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r30,r9,8,0,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r5,r9,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// or r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 | ctx.r30.u64;
	// and r5,r5,r12
	ctx.r5.u64 = ctx.r5.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// or r30,r6,r9
	ctx.r30.u64 = ctx.r6.u64 | ctx.r9.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r9,r6,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r6,r30,r12
	ctx.r6.u64 = ctx.r30.u64 & ctx.r12.u64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stwux r9,r10,r7
	ea = ctx.r10.u32 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x880f7958
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F7958;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne 0x880f7944
	if (!ctx.cr0.eq) goto loc_880F7944;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_880F79BC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880f7a40
	if (ctx.cr6.eq) goto loc_880F7A40;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// subf r3,r6,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r6.u64;
	// li r31,2
	ctx.r31.s64 = 2;
loc_880F79D0:
	// li r9,8
	ctx.r9.s64 = 8;
	// subf r10,r7,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r7.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880F79E4:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// lwzx r6,r11,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r5,r9,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// or r30,r6,r9
	ctx.r30.u64 = ctx.r6.u64 | ctx.r9.u64;
	// and r5,r5,r12
	ctx.r5.u64 = ctx.r5.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// rlwinm r9,r6,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r6,r30,r12
	ctx.r6.u64 = ctx.r30.u64 & ctx.r12.u64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stwux r9,r10,r7
	ea = ctx.r10.u32 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x880f79e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F79E4;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne 0x880f79d0
	if (!ctx.cr0.eq) goto loc_880F79D0;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_880F7A40:
	// lis r11,514
	ctx.r11.s64 = 33685504;
	// subfic r28,r8,4
	ctx.xer.ca = ctx.r8.u32 <= 4;
	ctx.r28.u64 = static_cast<uint64_t>(4) - ctx.r8.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// subf r26,r6,r5
	ctx.r26.u64 = ctx.r5.u64 - ctx.r6.u64;
	// li r25,2
	ctx.r25.s64 = 2;
	// ori r29,r11,514
	ctx.r29.u64 = ctx.r11.u64 | 514;
loc_880F7A58:
	// li r10,8
	ctx.r10.s64 = 8;
	// subf r11,r7,r27
	ctx.r11.u64 = ctx.r27.u64 - ctx.r7.u64;
	// subf r9,r8,r27
	ctx.r9.u64 = ctx.r27.u64 - ctx.r8.u64;
	// add r6,r11,r26
	ctx.r6.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r11,r27,r8
	ctx.r11.u64 = ctx.r27.u64 + ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880F7A70:
	// lwz r31,0(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// lbz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r4,r31,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xFFFFFF00;
	// lwzux r10,r9,r8
	ea = ctx.r9.u32 + ctx.r8.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// lbzx r3,r28,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// or r24,r5,r4
	ctx.r24.u64 = ctx.r5.u64 | ctx.r4.u64;
	// and r4,r31,r12
	ctx.r4.u64 = ctx.r31.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// rlwinm r30,r10,8,0,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// or r23,r3,r30
	ctx.r23.u64 = ctx.r3.u64 | ctx.r30.u64;
	// and r5,r24,r12
	ctx.r5.u64 = ctx.r24.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// rlwinm r30,r24,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 30) & 0x3FFFFFFF;
	// and r3,r23,r12
	ctx.r3.u64 = ctx.r23.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// rlwinm r3,r31,30,2,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// and r4,r10,r12
	ctx.r4.u64 = ctx.r10.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// rlwinm r5,r10,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// and r30,r30,r12
	ctx.r30.u64 = ctx.r30.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r10,r4,r29
	ctx.r10.u64 = ctx.r4.u64 + ctx.r29.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// rlwinm r31,r10,30,6,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFF;
	// and r5,r5,r12
	ctx.r5.u64 = ctx.r5.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// rlwinm r4,r23,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// and r3,r3,r12
	ctx.r3.u64 = ctx.r3.u64 & ctx.r12.u64;
	// lis r12,-253
	ctx.r12.s64 = -16580608;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// and r31,r31,r12
	ctx.r31.u64 = ctx.r31.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r10,r31,r30
	ctx.r10.u64 = ctx.r31.u64 + ctx.r30.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// and r4,r4,r12
	ctx.r4.u64 = ctx.r4.u64 & ctx.r12.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stwux r10,r6,r7
	ea = ctx.r6.u32 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r6.u32 = ea;
	// bdnz 0x880f7a70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F7A70;
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x880f7a58
	if (!ctx.cr0.eq) goto loc_880F7A58;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_880F7B4C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880f7ea8
	if (ctx.cr6.eq) goto loc_880F7EA8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880f7b7c
	if (ctx.cr6.eq) goto loc_880F7B7C;
	// li r9,8
	ctx.r9.s64 = 8;
	// subf r10,r7,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r11,r8,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880F7B6C:
	// ldux r9,r11,r8
	ea = ctx.r11.u32 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdux r9,r10,r7
	ea = ctx.r10.u32 + ctx.r7.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x880f7b6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F7B6C;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_880F7B7C:
	// li r11,2
	ctx.r11.s64 = 2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_880F7B84:
	// lbz r10,1(r6)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + 1);
	// lbz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// stb r10,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// lbz r10,1(r6)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + 1);
	// lbz r11,2(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 2);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// stb r3,1(r5)
	REX_STORE_U8(ctx.r5.u32 + 1, ctx.r3.u8);
	// lbz r10,2(r6)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + 2);
	// lbz r11,3(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 3);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// stb r9,2(r5)
	REX_STORE_U8(ctx.r5.u32 + 2, ctx.r9.u8);
	// lbz r10,4(r6)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + 4);
	// lbz r11,3(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 3);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// stb r11,3(r5)
	REX_STORE_U8(ctx.r5.u32 + 3, ctx.r11.u8);
	// lbz r10,4(r6)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + 4);
	// lbz r11,5(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 5);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// srawi r4,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 1;
	// stb r4,4(r5)
	REX_STORE_U8(ctx.r5.u32 + 4, ctx.r4.u8);
	// lbz r10,6(r6)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + 6);
	// lbz r11,5(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 5);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// stb r10,5(r5)
	REX_STORE_U8(ctx.r5.u32 + 5, ctx.r10.u8);
	// lbz r10,6(r6)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + 6);
	// lbz r11,7(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 7);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// add r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 + ctx.r8.u64;
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// stb r3,6(r5)
	REX_STORE_U8(ctx.r5.u32 + 6, ctx.r3.u8);
	// lbz r9,7(r6)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + 7);
	// lbz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi r4,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 1;
	// stb r4,7(r5)
	REX_STORE_U8(ctx.r5.u32 + 7, ctx.r4.u8);
	// lbzx r10,r6,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// stbux r9,r5,r7
	ea = ctx.r5.u32 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r5.u32 = ea;
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// stb r3,1(r5)
	REX_STORE_U8(ctx.r5.u32 + 1, ctx.r3.u8);
	// lbz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi r6,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 1;
	// stb r6,2(r5)
	REX_STORE_U8(ctx.r5.u32 + 2, ctx.r6.u8);
	// lbz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// stb r10,3(r5)
	REX_STORE_U8(ctx.r5.u32 + 3, ctx.r10.u8);
	// lbz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r10,5(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// srawi r4,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 1;
	// stb r4,4(r5)
	REX_STORE_U8(ctx.r5.u32 + 4, ctx.r4.u8);
	// lbz r9,6(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r10,5(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// stb r9,5(r5)
	REX_STORE_U8(ctx.r5.u32 + 5, ctx.r9.u8);
	// lbz r9,6(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r10,7(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// stb r3,6(r5)
	REX_STORE_U8(ctx.r5.u32 + 6, ctx.r3.u8);
	// lbz r9,7(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// srawi r6,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 1;
	// stb r6,7(r5)
	REX_STORE_U8(ctx.r5.u32 + 7, ctx.r6.u8);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// stbux r10,r5,r7
	ea = ctx.r5.u32 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r5.u32 = ea;
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// srawi r4,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 1;
	// stb r4,1(r5)
	REX_STORE_U8(ctx.r5.u32 + 1, ctx.r4.u8);
	// lbz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// stb r9,2(r5)
	REX_STORE_U8(ctx.r5.u32 + 2, ctx.r9.u8);
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// stb r3,3(r5)
	REX_STORE_U8(ctx.r5.u32 + 3, ctx.r3.u8);
	// lbz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r10,5(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi r6,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 1;
	// stb r6,4(r5)
	REX_STORE_U8(ctx.r5.u32 + 4, ctx.r6.u8);
	// lbz r9,6(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r10,5(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// stb r10,5(r5)
	REX_STORE_U8(ctx.r5.u32 + 5, ctx.r10.u8);
	// lbz r9,6(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r10,7(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// srawi r4,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 1;
	// stb r4,6(r5)
	REX_STORE_U8(ctx.r5.u32 + 6, ctx.r4.u8);
	// lbz r9,7(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stb r9,7(r5)
	REX_STORE_U8(ctx.r5.u32 + 7, ctx.r9.u8);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// stbux r10,r5,r7
	ea = ctx.r5.u32 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r5.u32 = ea;
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// stb r3,1(r5)
	REX_STORE_U8(ctx.r5.u32 + 1, ctx.r3.u8);
	// lbz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi r4,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 1;
	// stb r4,2(r5)
	REX_STORE_U8(ctx.r5.u32 + 2, ctx.r4.u8);
	// lbz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// stb r9,3(r5)
	REX_STORE_U8(ctx.r5.u32 + 3, ctx.r9.u8);
	// lbz r10,5(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// stb r10,4(r5)
	REX_STORE_U8(ctx.r5.u32 + 4, ctx.r10.u8);
	// lbz r9,6(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r10,5(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// stb r3,5(r5)
	REX_STORE_U8(ctx.r5.u32 + 5, ctx.r3.u8);
	// lbz r10,7(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r9,6(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi r4,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 1;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// stb r3,6(r5)
	REX_STORE_U8(ctx.r5.u32 + 6, ctx.r3.u8);
	// lbz r9,7(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stb r9,7(r5)
	REX_STORE_U8(ctx.r5.u32 + 7, ctx.r9.u8);
	// add r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 + ctx.r7.u64;
	// bdnz 0x880f7b84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F7B84;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_880F7EA8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880f81e0
	if (ctx.cr6.eq) goto loc_880F81E0;
	// li r11,2
	ctx.r11.s64 = 2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_880F7EB8:
	// lbzx r9,r6,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// add r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lbz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// stb r10,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,1(r6)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + 1);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// stb r10,1(r5)
	REX_STORE_U8(ctx.r5.u32 + 1, ctx.r10.u8);
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,2(r6)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + 2);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// stb r10,2(r5)
	REX_STORE_U8(ctx.r5.u32 + 2, ctx.r10.u8);
	// lbz r9,3(r6)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + 3);
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// stb r10,3(r5)
	REX_STORE_U8(ctx.r5.u32 + 3, ctx.r10.u8);
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r9,4(r6)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// stb r10,4(r5)
	REX_STORE_U8(ctx.r5.u32 + 4, ctx.r10.u8);
	// lbz r9,5(r6)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + 5);
	// lbz r10,5(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// stb r10,5(r5)
	REX_STORE_U8(ctx.r5.u32 + 5, ctx.r10.u8);
	// lbz r10,6(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r9,6(r6)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + 6);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// stb r10,6(r5)
	REX_STORE_U8(ctx.r5.u32 + 6, ctx.r10.u8);
	// lbz r9,7(r6)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + 7);
	// lbz r10,7(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// srawi r3,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 1;
	// stb r3,7(r5)
	REX_STORE_U8(ctx.r5.u32 + 7, ctx.r3.u8);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzux r9,r11,r8
	ea = ctx.r11.u32 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi r6,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 1;
	// stbux r6,r5,r7
	ea = ctx.r5.u32 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r5.u32 = ea;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lbz r9,1(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// stb r9,1(r5)
	REX_STORE_U8(ctx.r5.u32 + 1, ctx.r9.u8);
	// lbz r9,2(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// stb r10,2(r5)
	REX_STORE_U8(ctx.r5.u32 + 2, ctx.r10.u8);
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r9,3(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// stb r10,3(r5)
	REX_STORE_U8(ctx.r5.u32 + 3, ctx.r10.u8);
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// stb r10,4(r5)
	REX_STORE_U8(ctx.r5.u32 + 4, ctx.r10.u8);
	// lbz r9,5(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 5);
	// lbz r10,5(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// stb r10,5(r5)
	REX_STORE_U8(ctx.r5.u32 + 5, ctx.r10.u8);
	// lbz r9,6(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 6);
	// lbz r10,6(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// stb r10,6(r5)
	REX_STORE_U8(ctx.r5.u32 + 6, ctx.r10.u8);
	// lbz r9,7(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 7);
	// lbz r10,7(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// stb r3,7(r5)
	REX_STORE_U8(ctx.r5.u32 + 7, ctx.r3.u8);
	// lbz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// lbzux r9,r11,r8
	ea = ctx.r11.u32 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi r4,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 1;
	// stbux r4,r5,r7
	ea = ctx.r5.u32 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	ctx.r5.u32 = ea;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,1(r6)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + 1);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// stb r9,1(r5)
	REX_STORE_U8(ctx.r5.u32 + 1, ctx.r9.u8);
	// lbz r9,2(r6)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + 2);
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// stb r10,2(r5)
	REX_STORE_U8(ctx.r5.u32 + 2, ctx.r10.u8);
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r9,3(r6)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// stb r3,3(r5)
	REX_STORE_U8(ctx.r5.u32 + 3, ctx.r3.u8);
	// lbz r9,4(r6)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + 4);
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi r4,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 1;
	// stb r4,4(r5)
	REX_STORE_U8(ctx.r5.u32 + 4, ctx.r4.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lbz r9,5(r6)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + 5);
	// lbz r10,5(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// stb r9,5(r5)
	REX_STORE_U8(ctx.r5.u32 + 5, ctx.r9.u8);
	// lbz r9,6(r6)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + 6);
	// lbz r10,6(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// stb r10,6(r5)
	REX_STORE_U8(ctx.r5.u32 + 6, ctx.r10.u8);
	// lbz r10,7(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r9,7(r6)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + 7);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// stb r10,7(r5)
	REX_STORE_U8(ctx.r5.u32 + 7, ctx.r10.u8);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzux r9,r11,r8
	ea = ctx.r11.u32 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// stbux r10,r5,r7
	ea = ctx.r5.u32 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r5.u32 = ea;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,1(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// stb r10,1(r5)
	REX_STORE_U8(ctx.r5.u32 + 1, ctx.r10.u8);
	// lbz r9,2(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// stb r10,2(r5)
	REX_STORE_U8(ctx.r5.u32 + 2, ctx.r10.u8);
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r9,3(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// stb r10,3(r5)
	REX_STORE_U8(ctx.r5.u32 + 3, ctx.r10.u8);
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// stb r10,4(r5)
	REX_STORE_U8(ctx.r5.u32 + 4, ctx.r10.u8);
	// lbz r10,5(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r9,5(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 5);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// stb r10,5(r5)
	REX_STORE_U8(ctx.r5.u32 + 5, ctx.r10.u8);
	// lbz r9,6(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 6);
	// lbz r10,6(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stb r9,6(r5)
	REX_STORE_U8(ctx.r5.u32 + 6, ctx.r9.u8);
	// lbz r11,7(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r10,7(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 7);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stb r11,7(r5)
	REX_STORE_U8(ctx.r5.u32 + 7, ctx.r11.u8);
	// add r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 + ctx.r7.u64;
	// bdnz 0x880f7eb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F7EB8;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_880F81E0:
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r5,2
	ctx.r10.s64 = ctx.r5.s64 + 2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_880F81EC:
	// add r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lbz r3,1(r6)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r6.u32 + 1);
	// lbzx r4,r6,r8
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// lbz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// rlwinm r4,r5,30,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0xFF;
	// stb r4,-2(r10)
	REX_STORE_U8(ctx.r10.u32 + -2, ctx.r4.u8);
	// lbz r5,2(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r4,2(r6)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + 2);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r3,r5,r9
	ctx.r3.u64 = ctx.r5.u64 + ctx.r9.u64;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// rlwinm r9,r3,30,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0xFF;
	// stb r9,-1(r10)
	REX_STORE_U8(ctx.r10.u32 + -1, ctx.r9.u8);
	// lbz r4,3(r6)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + 3);
	// lbz r9,3(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r4,r9,r5
	ctx.r4.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// rlwinm r3,r4,30,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0xFF;
	// stb r3,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r3.u8);
	// lbz r4,4(r6)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + 4);
	// lbz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r4,r9,r5
	ctx.r4.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// rlwinm r3,r4,30,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0xFF;
	// stb r3,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r3.u8);
	// lbz r4,5(r6)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + 5);
	// lbz r9,5(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r4,r9,r5
	ctx.r4.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// rlwinm r3,r4,30,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0xFF;
	// stb r3,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r3.u8);
	// lbz r9,6(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r4,6(r6)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + 6);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r4,r9,r5
	ctx.r4.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// rlwinm r3,r4,30,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0xFF;
	// stb r3,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r3.u8);
	// lbz r9,7(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r4,7(r6)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + 7);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r4,r5,30,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0xFF;
	// stb r4,4(r10)
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r4.u8);
	// lbz r4,8(r6)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + 8);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lbz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// add r11,r5,r4
	ctx.r11.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r3,30,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0xFF;
	// stb r11,5(r10)
	REX_STORE_U8(ctx.r10.u32 + 5, ctx.r11.u8);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// bdnz 0x880f81ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F81EC;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810D220) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8810D228;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8810d268
	if (!ctx.cr6.gt) goto loc_8810D268;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
loc_8810D248:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880547a0
	ctx.lr = 0x8810D258;
	sub_880547A0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// bne 0x8810d248
	if (!ctx.cr0.eq) goto loc_8810D248;
loc_8810D268:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810E3D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x8810E3D8;
	__savegprlr_24(ctx, base);
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lwz r26,84(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r7,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xC;
	// addi r11,r11,5536
	ctx.r11.s64 = ctx.r11.s64 + 5536;
	// rlwinm r8,r8,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// add r29,r9,r11
	ctx.r29.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r30,r8,r11
	ctx.r30.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r28,r26,1
	ctx.r28.s64 = ctx.r26.s64 + 1;
	// subf r27,r5,r3
	ctx.r27.u64 = ctx.r3.u64 - ctx.r5.u64;
	// li r25,8
	ctx.r25.s64 = 8;
loc_8810E400:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x8810e448
	if (!ctx.cr6.gt) goto loc_8810E448;
	// addi r11,r1,-208
	ctx.r11.s64 = ctx.r1.s64 + -208;
	// lhz r8,2(r29)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + 2);
	// lhz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// extsh r31,r7
	ctx.r31.s64 = ctx.r7.s16;
	// add r11,r27,r5
	ctx.r11.u64 = ctx.r27.u64 + ctx.r5.u64;
loc_8810E428:
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r24,0(r11)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mullw r7,r8,r3
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r3.s32);
	// mullw r8,r24,r31
	ctx.r8.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r31.s32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8810e428
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8810E428;
loc_8810E448:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x8810e4b4
	if (!ctx.cr6.gt) goto loc_8810E4B4;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// subf r7,r6,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r6.u64;
	// addi r9,r1,-208
	ctx.r9.s64 = ctx.r1.s64 + -208;
loc_8810E45C:
	// lhz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 2);
	// lhz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwz r31,4(r9)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// mullw r8,r8,r3
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r3.s32);
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subf r11,r10,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r10.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// srawi. r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8810e498
	if (!ctx.cr0.lt) goto loc_8810E498;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8810e4a4
	goto loc_8810E4A4;
loc_8810E498:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x8810e4a4
	if (!ctx.cr6.gt) goto loc_8810E4A4;
	// li r11,255
	ctx.r11.s64 = 255;
loc_8810E4A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stbux r11,r7,r6
	ea = ctx.r7.u32 + ctx.r6.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x8810e45c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8810E45C;
loc_8810E4B4:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// bne 0x8810e400
	if (!ctx.cr0.eq) goto loc_8810E400;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810F240) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8810F248;
	__savegprlr_29(ctx, base);
	// srawi r9,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 31;
	// lwz r11,16(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// lwz r3,0(r6)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// xor r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r9.u64;
	// lwz r31,4(r6)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// lwz r30,8(r6)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// subf r9,r9,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r9.u64;
	// lwz r11,12(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r5,24(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// lwz r29,28(r6)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r6.u32 + 28);
	// bgt cr6,0x8810f2b0
	if (ctx.cr6.gt) goto loc_8810F2B0;
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r3
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x8810f2e8
	if (!ctx.cr6.gt) goto loc_8810F2E8;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// bgt cr6,0x8810f314
	if (ctx.cr6.gt) goto loc_8810F314;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x8810f2e8
	goto loc_8810F2E8;
loc_8810F2B0:
	// lwz r10,20(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8810f310
	if (ctx.cr6.gt) goto loc_8810F310;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x8810f310
	if (ctx.cr6.gt) goto loc_8810F310;
	// rlwinm r8,r5,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r10,r10,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r10.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_8810F2E8:
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r7,r9,r29
	ctx.r7.u64 = ctx.r9.u64 + ctx.r29.u64;
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_8810F310:
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
loc_8810F314:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bge cr6,0x8810f330
	if (!ctx.cr6.lt) goto loc_8810F330;
	// stw r4,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
loc_8810F330:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8810f340
	if (!ctx.cr6.lt) goto loc_8810F340;
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
loc_8810F340:
	// addi r3,r11,15
	ctx.r3.s64 = ctx.r11.s64 + 15;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881114B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x881114C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x881114e4
	if (!ctx.cr6.lt) goto loc_881114E4;
	// neg r30,r30
	ctx.r30.s64 = static_cast<int64_t>(-ctx.r30.u64);
loc_881114E4:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bge cr6,0x881114f0
	if (!ctx.cr6.lt) goto loc_881114F0;
	// neg r26,r26
	ctx.r26.s64 = static_cast<int64_t>(-ctx.r26.u64);
loc_881114F0:
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r28,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// stw r30,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r27,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// stw r26,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r26.u32);
	// stw r29,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// beq cr6,0x88111524
	if (ctx.cr6.eq) goto loc_88111524;
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x88050358
	ctx.lr = 0x88111520;
	sub_88050358(ctx, base);
	// stw r29,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
loc_88111524:
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// bgt cr6,0x88111530
	if (ctx.cr6.gt) goto loc_88111530;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_88111530:
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// bgt cr6,0x8811153c
	if (ctx.cr6.gt) goto loc_8811153C;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_8811153C:
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// addi r10,r28,2
	ctx.r10.s64 = ctx.r28.s64 + 2;
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88050340
	ctx.lr = 0x88111558;
	sub_88050340(ctx, base);
	// stw r3,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8811156c
	if (!ctx.cr6.eq) goto loc_8811156C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_8811156C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88113668) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88113670;
	__savegprlr_28(ctx, base);
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88113864
	if (ctx.cr6.eq) goto loc_88113864;
	// lwz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88113864
	if (ctx.cr6.eq) goto loc_88113864;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88113864
	if (ctx.cr6.eq) goto loc_88113864;
	// lwz r9,116(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lwz r6,100(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// rlwinm r31,r10,8,0,23
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r30,r8,r6
	ctx.r30.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// lhz r9,14(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 14);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rotlwi r7,r30,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// addi r9,r9,31
	ctx.r9.s64 = ctx.r9.s64 + 31;
	// rotlwi r8,r31,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// rlwinm r9,r9,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// divw r29,r30,r10
	ctx.r29.u64 = uint32_t((ctx.r10.s32 && !(ctx.r30.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r30.s32 / ctx.r10.s32 : 0);
	// andc r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 & ~ctx.r7.u64;
	// andc r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r8.u64;
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// divw r10,r31,r6
	ctx.r10.u64 = uint32_t((ctx.r6.s32 && !(ctx.r31.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r31.s32 / ctx.r6.s32 : 0);
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// addze r30,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r30.s64 = temp.s64;
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x88113700
	if (!ctx.cr6.gt) goto loc_88113700;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
loc_88113700:
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lwz r8,104(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// and r31,r7,r10
	ctx.r31.u64 = ctx.r7.u64 & ctx.r10.u64;
	// beq cr6,0x88113728
	if (ctx.cr6.eq) goto loc_88113728;
	// addi r10,r31,-256
	ctx.r10.s64 = ctx.r31.s64 + -256;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// b 0x8811372c
	goto loc_8811372C;
loc_88113728:
	// li r8,0
	ctx.r8.s64 = 0;
loc_8811372C:
	// mullw r10,r31,r4
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r4.s32);
	// lwz r9,124(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// add. r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// mullw r10,r30,r4
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r4.s32);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bge 0x881137c0
	if (!ctx.cr0.lt) goto loc_881137C0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x88113754
	if (!ctx.cr6.eq) goto loc_88113754;
	// li r31,1
	ctx.r31.s64 = 1;
loc_88113754:
	// subf r8,r6,r31
	ctx.r8.u64 = ctx.r31.u64 - ctx.r6.u64;
	// twllei r31,0
	if (ctx.r31.s32 == 0 || ctx.r31.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divw r7,r8,r31
	ctx.r7.u64 = uint32_t((ctx.r31.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r31.s32 == -1)) ? ctx.r8.s32 / ctx.r31.s32 : 0);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// add r10,r7,r4
	ctx.r10.u64 = ctx.r7.u64 + ctx.r4.u64;
	// andc r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 & ~ctx.r8.u64;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bge cr6,0x881137b8
	if (!ctx.cr6.lt) goto loc_881137B8;
	// subf r10,r4,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r4.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88113784:
	// lwz r8,132(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881137b4
	if (!ctx.cr6.gt) goto loc_881137B4;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_88113798:
	// lbzu r11,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r11,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88113798
	if (ctx.cr6.lt) goto loc_88113798;
loc_881137B4:
	// bdnz 0x88113784
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88113784;
loc_881137B8:
	// mullw r10,r7,r31
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r31.s32);
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
loc_881137C0:
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x88113864
	if (!ctx.cr6.lt) goto loc_88113864;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_881137D0:
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// lwz r8,132(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// srawi r10,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 8;
	// subfic r28,r4,256
	ctx.xer.ca = ctx.r4.u32 <= 256;
	ctx.r28.u64 = static_cast<uint64_t>(256) - ctx.r4.u64;
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x8811382c
	if (!ctx.cr6.gt) goto loc_8811382C;
	// cmpw cr6,r7,r29
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x8811382c
	if (!ctx.cr6.lt) goto loc_8811382C;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88113854
	if (!ctx.cr6.gt) goto loc_88113854;
	// add r11,r8,r30
	ctx.r11.u64 = ctx.r8.u64 + ctx.r30.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
loc_8811380C:
	// lbzu r11,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r11,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r11.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8811380c
	if (ctx.cr6.lt) goto loc_8811380C;
	// b 0x88113854
	goto loc_88113854;
loc_8811382C:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88113854
	if (!ctx.cr6.gt) goto loc_88113854;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_8811383C:
	// lbzu r11,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8811383c
	if (ctx.cr6.lt) goto loc_8811383C;
loc_88113854:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + ctx.r31.u64;
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x881137d0
	if (ctx.cr6.lt) goto loc_881137D0;
loc_88113864:
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881199B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x881199C0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r31,28(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r9,80
	ctx.r9.s64 = 80;
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// addi r26,r11,-24
	ctx.r26.s64 = ctx.r11.s64 + -24;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x88119A04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88119cc0
	if (ctx.cr6.lt) goto loc_88119CC0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r10,42(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 42);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x88119a34
	if (!ctx.cr6.gt) goto loc_88119A34;
loc_88119A20:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_88119A34:
	// cmplwi cr6,r26,80
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 80, ctx.xer);
	// blt cr6,0x88119a20
	if (ctx.cr6.lt) goto loc_88119A20;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881196f8
	ctx.lr = 0x88119A54;
	sub_881196F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88119cc0
	if (ctx.cr6.lt) goto loc_88119CC0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88119528
	ctx.lr = 0x88119A74;
	sub_88119528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88119cc0
	if (ctx.cr6.lt) goto loc_88119CC0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88119528
	ctx.lr = 0x88119A94;
	sub_88119528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88119cc0
	if (ctx.cr6.lt) goto loc_88119CC0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88119528
	ctx.lr = 0x88119AB4;
	sub_88119528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88119cc0
	if (ctx.cr6.lt) goto loc_88119CC0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88119528
	ctx.lr = 0x88119AD4;
	sub_88119528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88119cc0
	if (ctx.cr6.lt) goto loc_88119CC0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88119528
	ctx.lr = 0x88119AF4;
	sub_88119528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88119cc0
	if (ctx.cr6.lt) goto loc_88119CC0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88119528
	ctx.lr = 0x88119B14;
	sub_88119528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88119cc0
	if (ctx.cr6.lt) goto loc_88119CC0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88119390
	ctx.lr = 0x88119B34;
	sub_88119390(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88119cc0
	if (ctx.cr6.lt) goto loc_88119CC0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88119390
	ctx.lr = 0x88119B54;
	sub_88119390(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88119cc0
	if (ctx.cr6.lt) goto loc_88119CC0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88119390
	ctx.lr = 0x88119B74;
	sub_88119390(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88119cc0
	if (ctx.cr6.lt) goto loc_88119CC0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88119390
	ctx.lr = 0x88119B94;
	sub_88119390(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88119cc0
	if (ctx.cr6.lt) goto loc_88119CC0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r29,92(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// ld r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// ld r30,112(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// rldicl r3,r30,32,32
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF;
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// bl 0x881ee930
	ctx.lr = 0x88119BC0;
	sub_881EE930(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// rotlwi r5,r30,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r27,10000
	ctx.r27.s64 = 10000;
	// ld r28,120(r1)
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// divwu r11,r5,r27
	ctx.r11.u64 = uint32_t(ctx.r27.u32 ? ctx.r5.u32 / ctx.r27.u32 : 0);
	// lfs f31,23756(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 23756);
	ctx.f31.f64 = double(temp.f32);
	// rldicl r3,r28,32,32
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFF;
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fctidz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.f12.u64);
	// lwz r10,124(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,16(r6)
	REX_STORE_U32(ctx.r6.u32 + 16, ctx.r4.u32);
	// bl 0x881ee930
	ctx.lr = 0x88119C00;
	sub_881EE930(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// rotlwi r3,r28,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r5,11
	ctx.r5.s64 = 720896;
	// divwu r11,r3,r27
	ctx.r11.u64 = uint32_t(ctx.r27.u32 ? ctx.r3.u32 / ctx.r27.u32 : 0);
	// ld r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// ori r5,r5,64
	ctx.r5.u64 = ctx.r5.u64 | 64;
	// li r4,6
	ctx.r4.s64 = 6;
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fctidz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f9.u64);
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r3.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r7.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,32(r7)
	REX_STORE_U32(ctx.r7.u32 + 32, ctx.r8.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r10,42(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 42);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,42(r11)
	REX_STORE_U16(ctx.r11.u32 + 42, ctx.r10.u16);
	// lwz r3,224(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r8,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r8.u64;
	// addi r30,r11,-80
	ctx.r30.s64 = ctx.r11.s64 + -80;
	// bl 0x880cafe0
	ctx.lr = 0x88119C80;
	sub_880CAFE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88119cc0
	if (ctx.cr6.lt) goto loc_88119CC0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88119cc0
	if (ctx.cr6.eq) goto loc_88119CC0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88119CA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88119cc0
	if (ctx.cr6.lt) goto loc_88119CC0;
	// ld r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 8);
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,8(r31)
	REX_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
loc_88119CC0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811F4C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8811F4C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8811f4fc
	if (!ctx.cr6.eq) goto loc_8811F4FC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_8811F4FC:
	// lwz r30,28(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r11,24
	ctx.r11.s64 = 24;
	// li r4,24
	ctx.r4.s64 = 24;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8811F520;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811f598
	if (ctx.cr6.lt) goto loc_8811F598;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881196f8
	ctx.lr = 0x8811F540;
	sub_881196F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811f598
	if (ctx.cr6.lt) goto loc_8811F598;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88119528
	ctx.lr = 0x8811F560;
	sub_88119528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811f598
	if (ctx.cr6.lt) goto loc_8811F598;
	// ld r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r28.u32 + 0);
	// cmpldi cr6,r11,24
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 24, ctx.xer);
	// blt cr6,0x8811f590
	if (ctx.cr6.lt) goto loc_8811F590;
	// ld r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r30.u32 + 8);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r11,-24
	ctx.r8.s64 = ctx.r11.s64 + -24;
	// lwz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmpld cr6,r8,r7
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r7.u64, ctx.xer);
	// ble cr6,0x8811f598
	if (!ctx.cr6.gt) goto loc_8811F598;
loc_8811F590:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
loc_8811F598:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88122410) {
	REX_FUNC_PROLOGUE();
	// lwz r7,44(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r8,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// stw r8,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r8.u32);
	// lwz r11,148(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ld r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// bne cr6,0x88122440
	if (!ctx.cr6.eq) goto loc_88122440;
	// stw r4,148(r7)
	REX_STORE_U32(ctx.r7.u32 + 148, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_88122440:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ld r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// cmpld cr6,r9,r6
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r6.u64, ctx.xer);
	// bge cr6,0x8812246c
	if (!ctx.cr6.lt) goto loc_8812246C;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881224a4
	if (ctx.cr6.eq) goto loc_881224A4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne cr6,0x88122440
	if (!ctx.cr6.eq) goto loc_88122440;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8812246C:
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88122494
	if (ctx.cr6.eq) goto loc_88122494;
	// stw r4,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// blr 
	return;
loc_88122494:
	// stw r4,148(r7)
	REX_STORE_U32(ctx.r7.u32 + 148, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// blr 
	return;
loc_881224A4:
	// stw r11,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88122B78) {
	REX_FUNC_PROLOGUE();
	// b 0x881227c8
	sub_881227C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88122B80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88122B88;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// ld r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 40);
	// ld r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 32);
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// beq cr6,0x88122bd0
	if (ctx.cr6.eq) goto loc_88122BD0;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88122BC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88122d10
	if (ctx.cr6.lt) goto loc_88122D10;
loc_88122BD0:
	// ld r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 64);
	// stw r27,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r27.u32);
	// std r11,96(r31)
	REX_STORE_U64(ctx.r31.u32 + 96, ctx.r11.u64);
loc_88122BDC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 96);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88122968
	ctx.lr = 0x88122BF0;
	sub_88122968(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88122d10
	if (ctx.cr6.lt) goto loc_88122D10;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88122cac
	if (ctx.cr6.eq) goto loc_88122CAC;
	// lwz r30,84(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// cmpld cr6,r4,r10
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x88122c28
	if (!ctx.cr6.eq) goto loc_88122C28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x881224b8
	ctx.lr = 0x88122C20;
	sub_881224B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88122d10
	if (ctx.cr6.lt) goto loc_88122D10;
loc_88122C28:
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// ld r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 96);
	// lwz r8,92(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// subf r6,r11,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// cmpld cr6,r6,r8
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r8.u64, ctx.xer);
	// blt cr6,0x88122c64
	if (ctx.cr6.lt) goto loc_88122C64;
	// bne cr6,0x88122c80
	if (!ctx.cr6.eq) goto loc_88122C80;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x88122c80
	goto loc_88122C80;
loc_88122C64:
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// subf r11,r7,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r7.u64;
	// stw r6,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r6.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_88122C80:
	// lwz r9,92(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// clrldi r11,r8,32
	ctx.r11.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// ld r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 96);
	// subf. r8,r8,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r8.u32);
	// std r11,96(r31)
	REX_STORE_U64(ctx.r31.u32 + 96, ctx.r11.u64);
	// beq 0x88122cac
	if (ctx.cr0.eq) goto loc_88122CAC;
	// ld r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 32);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x88122bdc
	if (!ctx.cr6.gt) goto loc_88122BDC;
loc_88122CAC:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88122d00
	if (ctx.cr6.eq) goto loc_88122D00;
	// lwz r9,76(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// ld r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88122CD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88122d10
	if (ctx.cr6.lt) goto loc_88122D10;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// ld r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 32);
	// ld r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 40);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r28,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r28.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r9,32(r31)
	REX_STORE_U64(ctx.r31.u32 + 32, ctx.r9.u64);
	// std r8,40(r31)
	REX_STORE_U64(ctx.r31.u32 + 40, ctx.r8.u64);
loc_88122D00:
	// ld r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 64);
	// clrldi r11,r27,32
	ctx.r11.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,64(r31)
	REX_STORE_U64(ctx.r31.u32 + 64, ctx.r11.u64);
loc_88122D10:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88125460) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88125468;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r28,0
	ctx.r28.s64 = 0;
	// ld r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ld r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 32);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x881254b4
	if (ctx.cr6.eq) goto loc_881254B4;
	// lis r29,-32688
	ctx.r29.s64 = -2142240768;
	// ori r29,r29,7
	ctx.r29.u64 = ctx.r29.u64 | 7;
loc_88125498:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// li r4,31
	ctx.r4.s64 = 31;
	// bl 0x880cb318
	ctx.lr = 0x881254A8;
	sub_880CB318(ctx, base);
loc_881254A8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_881254B4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,31
	ctx.r4.s64 = 31;
	// bl 0x880cb2c0
	ctx.lr = 0x881254C8;
	sub_880CB2C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88125498
	if (ctx.cr6.lt) goto loc_88125498;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x88125030
	ctx.lr = 0x881254FC;
	sub_88125030(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88125498
	if (ctx.cr6.lt) goto loc_88125498;
	// ld r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r9,32(r31)
	REX_STORE_U64(ctx.r31.u32 + 32, ctx.r9.u64);
	// beq cr6,0x881254a8
	if (ctx.cr6.eq) goto loc_881254A8;
	// ld r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 72);
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x881254a8
	if (!ctx.cr6.gt) goto loc_881254A8;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x88125554
	if (ctx.cr6.gt) goto loc_88125554;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// stw r28,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,72(r31)
	REX_STORE_U64(ctx.r31.u32 + 72, ctx.r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_88125554:
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// std r10,72(r31)
	REX_STORE_U64(ctx.r31.u32 + 72, ctx.r10.u64);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// stw r8,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88127EF0) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r3
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// extsh r3,r10
	ctx.r3.s64 = ctx.r10.s16;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88127F40) {
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
	// lhz r11,110(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 110);
	// lwz r10,92(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 92);
	// lwz r5,88(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 88);
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mullw r11,r5,r6
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// slw r8,r3,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r9.u8 & 0x3F));
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x88127f88
	if (!ctx.cr6.gt) goto loc_88127F88;
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// addi r11,r1,82
	ctx.r11.s64 = ctx.r1.s64 + 82;
	// subf r10,r4,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r4.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x88054c28
	ctx.lr = 0x88127F88;
	sub_88054C28(ctx, base);
loc_88127F88:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88129700) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88129708;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x88129818
	if (!ctx.cr6.gt) goto loc_88129818;
	// lwz r11,244(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88125e60
	ctx.lr = 0x8812972C;
	sub_88125E60(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,348(r31)
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r3.u32);
	// bne cr6,0x88129748
	if (!ctx.cr6.eq) goto loc_88129748;
loc_88129738:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_88129748:
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x88129758;
	sub_88052D90(ctx, base);
	// lwz r10,244(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88129818
	if (!ctx.cr6.gt) goto loc_88129818;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8812976C:
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88125e60
	ctx.lr = 0x88129778;
	sub_88125E60(ctx, base);
	// lwz r10,348(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 348);
	// stwx r3,r29,r10
	REX_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 348);
	// lwzx r9,r29,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88129738
	if (ctx.cr6.eq) goto loc_88129738;
	// lwz r10,244(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x881297A4;
	sub_88052D90(ctx, base);
	// lwz r9,244(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x88129804
	if (!ctx.cr6.gt) goto loc_88129804;
	// li r30,0
	ctx.r30.s64 = 0;
loc_881297B8:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x88125e60
	ctx.lr = 0x881297C0;
	sub_88125E60(ctx, base);
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 348);
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// stwx r3,r10,r30
	REX_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r3.u32);
	// lwz r9,348(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 348);
	// lwzx r11,r29,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// lwzx r8,r11,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x88129738
	if (ctx.cr6.eq) goto loc_88129738;
	// li r5,28
	ctx.r5.s64 = 28;
	// rotlwi r3,r8,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x881297F0;
	sub_88052D90(ctx, base);
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881297b8
	if (ctx.cr6.lt) goto loc_881297B8;
loc_88129804:
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8812976c
	if (ctx.cr6.lt) goto loc_8812976C;
loc_88129818:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8812BB00) {
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
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8812bbd0
	if (!ctx.cr6.eq) goto loc_8812BBD0;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bgt cr6,0x8812bbd0
	if (ctx.cr6.gt) goto loc_8812BBD0;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8812bc30
	if (!ctx.cr6.gt) goto loc_8812BC30;
loc_8812BB48:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r30.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bgt cr6,0x8812bc30
	if (ctx.cr6.gt) goto loc_8812BC30;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r9,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8812BB78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// lwz r7,36(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// subfic r6,r30,8
	ctx.xer.ca = ctx.r30.u32 <= 8;
	ctx.r6.u64 = static_cast<uint64_t>(8) - ctx.r30.u64;
	// slw r5,r8,r30
	ctx.r5.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r30.u8 & 0x3F));
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// clrlwi r3,r30,24
	ctx.r3.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// slw r8,r7,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// subf r10,r30,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r30.u64;
	// srw r7,r9,r3
	ctx.r7.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r3.u8 & 0x3F));
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// or r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 | ctx.r7.u64;
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// stw r6,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// rotlwi r3,r6,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r5,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r5.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r4,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bgt cr6,0x8812bb48
	if (ctx.cr6.gt) goto loc_8812BB48;
	// b 0x8812bc30
	goto loc_8812BC30;
loc_8812BBD0:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r9,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8812BBEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lwz r7,44(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// slw r5,r8,r30
	ctx.r5.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r30.u8 & 0x3F));
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// subfic r6,r30,8
	ctx.xer.ca = ctx.r30.u32 <= 8;
	ctx.r6.u64 = static_cast<uint64_t>(8) - ctx.r30.u64;
	// srw r8,r3,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r11.u8 & 0x3F));
	// slw r9,r7,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// subf r11,r30,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r30.u64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// stw r7,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// stw r6,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
	// stw r5,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r5.u32);
loc_8812BC30:
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

DEFINE_REX_FUNC(sub_88131478) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88131480;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,0(r3)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,60(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 60);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x881314b0
	if (!ctx.cr6.lt) goto loc_881314B0;
loc_881314A0:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881314B0:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// li r23,1
	ctx.r23.s64 = 1;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x88132610
	if (ctx.cr6.eq) goto loc_88132610;
	// li r22,2
	ctx.r22.s64 = 2;
	// li r21,3
	ctx.r21.s64 = 3;
	// li r16,22
	ctx.r16.s64 = 22;
	// li r17,33
	ctx.r17.s64 = 33;
	// li r14,35
	ctx.r14.s64 = 35;
	// li r19,50
	ctx.r19.s64 = 50;
	// li r18,49
	ctx.r18.s64 = 49;
	// li r15,47
	ctx.r15.s64 = 47;
	// li r20,10
	ctx.r20.s64 = 10;
loc_881314E4:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,51
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 51, ctx.xer);
	// bgt cr6,0x88132604
	if (ctx.cr6.gt) goto loc_88132604;
	// lis r12,-30701
	ctx.r12.s64 = -2012020736;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,5384
	ctx.r12.s64 = ctx.r12.s64 + 5384;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_881315D8;
	case 1:
		goto loc_8813221C;
	case 2:
		goto loc_881317A0;
	case 3:
		goto loc_8813184C;
	case 4:
		goto loc_88132604;
	case 5:
		goto loc_88132604;
	case 6:
		goto loc_88132604;
	case 7:
		goto loc_88132604;
	case 8:
		goto loc_88132604;
	case 9:
		goto loc_88132604;
	case 10:
		goto loc_88132604;
	case 11:
		goto loc_88132604;
	case 12:
		goto loc_88132604;
	case 13:
		goto loc_88132604;
	case 14:
		goto loc_88132604;
	case 15:
		goto loc_88132604;
	case 16:
		goto loc_88132604;
	case 17:
		goto loc_88131828;
	case 18:
		goto loc_881317F4;
	case 19:
		goto loc_88131874;
	case 20:
		goto loc_881318A0;
	case 21:
		goto loc_881318EC;
	case 22:
		goto loc_88131938;
	case 23:
		goto loc_881319D4;
	case 24:
		goto loc_88131A20;
	case 25:
		goto loc_88131A70;
	case 26:
		goto loc_88131AA8;
	case 27:
		goto loc_88131B44;
	case 28:
		goto loc_88131C10;
	case 29:
		goto loc_88131D1C;
	case 30:
		goto loc_88132604;
	case 31:
		goto loc_88132604;
	case 32:
		goto loc_881322B0;
	case 33:
		goto loc_88131D48;
	case 34:
		goto loc_881321A8;
	case 35:
		goto loc_881321CC;
	case 36:
		goto loc_88132604;
	case 37:
		goto loc_88132390;
	case 38:
		goto loc_8813235C;
	case 39:
		goto loc_88132604;
	case 40:
		goto loc_88132604;
	case 41:
		goto loc_88132604;
	case 42:
		goto loc_88132604;
	case 43:
		goto loc_88132604;
	case 44:
		goto loc_881323D4;
	case 45:
		goto loc_88132604;
	case 46:
		goto loc_88132424;
	case 47:
		goto loc_8813247C;
	case 48:
		goto loc_88132604;
	case 49:
		goto loc_88132344;
	case 50:
		goto loc_8813259C;
	case 51:
		goto loc_881325D4;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_881315D8:
	// lwz r10,256(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 256);
	// lhz r5,34(r25)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r25.u32 + 34);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// lwz r3,320(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 320);
	// mullw r6,r10,r5
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x88131654
	if (!ctx.cr6.gt) goto loc_88131654;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// addi r11,r3,424
	ctx.r11.s64 = ctx.r3.s64 + 424;
loc_88131608:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsh r29,r8
	ctx.r29.s64 = ctx.r8.s16;
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lhz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r28,r9
	ctx.r28.s64 = ctx.r9.s16;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x8813163c
	if (!ctx.cr6.gt) goto loc_8813163C;
	// lhz r31,-310(r11)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + -310);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// extsh r9,r31
	ctx.r9.s64 = ctx.r31.s16;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r31,r9,r10
	ctx.r31.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
loc_8813163C:
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,1776
	ctx.r11.s64 = ctx.r11.s64 + 1776;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x88131608
	if (ctx.cr6.lt) goto loc_88131608;
loc_88131654:
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// sth r24,580(r25)
	REX_STORE_U16(ctx.r25.u32 + 580, ctx.r24.u16);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x88131748
	if (!ctx.cr6.gt) goto loc_88131748;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// addi r11,r3,114
	ctx.r11.s64 = ctx.r3.s64 + 114;
loc_88131670:
	// lwz r10,310(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 310);
	// lwz r5,12(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lhz r4,0(r5)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// subf r6,r3,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r3.u64;
	// cmpw cr6,r7,r3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8813172c
	if (!ctx.cr6.eq) goto loc_8813172C;
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r31
	ctx.r4.s64 = ctx.r31.s16;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// rlwinm r5,r3,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r5,r10
	ctx.r3.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r10.u32);
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x8813172c
	if (!ctx.cr6.eq) goto loc_8813172C;
	// lhz r5,580(r25)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r25.u32 + 580);
	// lwz r4,584(r25)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 584);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// rlwinm r5,r3,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r5,r4
	REX_STORE_U16(ctx.r5.u32 + ctx.r4.u32, ctx.r9.u16);
	// lhz r9,580(r25)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r25.u32 + 580);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// sth r3,580(r25)
	REX_STORE_U16(ctx.r25.u32 + 580, ctx.r3.u16);
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r3,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// sth r9,12(r11)
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r9.u16);
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r3,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// sth r9,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r9.u16);
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r9,-2(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + -2);
	// sth r9,8(r11)
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r9.u16);
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// subf r6,r9,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r9.u64;
loc_8813172C:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// lhz r5,34(r25)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r25.u32 + 34);
	// addi r11,r11,1776
	ctx.r11.s64 = ctx.r11.s64 + 1776;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x88131670
	if (ctx.cr6.lt) goto loc_88131670;
loc_88131748:
	// lhz r11,580(r25)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 580);
	// lhz r10,34(r25)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r25.u32 + 34);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x881314a0
	if (ctx.cr6.gt) goto loc_881314A0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881314a0
	if (!ctx.cr6.gt) goto loc_881314A0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x881314a0
	if (ctx.cr6.lt) goto loc_881314A0;
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r10,216(r30)
	REX_STORE_U32(ctx.r30.u32 + 216, ctx.r10.u32);
	// bl 0x88127880
	ctx.lr = 0x88131780;
	sub_88127880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x880d6010
	ctx.lr = 0x88131790;
	sub_880D6010(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// stw r22,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r22.u32);
	// b 0x88132604
	goto loc_88132604;
loc_881317A0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x881317B0;
	sub_8812C528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lhz r11,580(r25)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 580);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r9,34(r25)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r25.u32 + 34);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// stw r10,192(r25)
	REX_STORE_U32(ctx.r25.u32 + 192, ctx.r10.u32);
	// bne cr6,0x881314a0
	if (!ctx.cr6.eq) goto loc_881314A0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881317ec
	if (!ctx.cr6.eq) goto loc_881317EC;
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// b 0x88132604
	goto loc_88132604;
loc_881317EC:
	// stw r23,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r23.u32);
	// b 0x88132604
	goto loc_88132604;
loc_881317F4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88131804;
	sub_8812C528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,188(r25)
	REX_STORE_U32(ctx.r25.u32 + 188, ctx.r11.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x881314a0
	if (ctx.cr6.eq) goto loc_881314A0;
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r11,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_88131828:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88131838;
	sub_8812C528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,180(r25)
	REX_STORE_U32(ctx.r25.u32 + 180, ctx.r11.u32);
	// stw r21,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r21.u32);
loc_8813184C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x8813185C;
	sub_8812C528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,19
	ctx.r10.s64 = 19;
	// stw r11,184(r25)
	REX_STORE_U32(ctx.r25.u32 + 184, ctx.r11.u32);
	// stw r10,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r10.u32);
loc_88131874:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88131884;
	sub_8812C528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r11,656(r25)
	REX_STORE_U32(ctx.r25.u32 + 656, ctx.r11.u32);
	// stw r10,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r10.u32);
	// b 0x88132604
	goto loc_88132604;
loc_881318A0:
	// lwz r11,180(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 180);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881318e4
	if (!ctx.cr6.eq) goto loc_881318E4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x881318BC;
	sub_8812C528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x881314a0
	if (ctx.cr6.gt) goto loc_881314A0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x881314a0
	if (ctx.cr6.lt) goto loc_881314A0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// stw r10,648(r25)
	REX_STORE_U32(ctx.r25.u32 + 648, ctx.r10.u32);
loc_881318E4:
	// li r11,21
	ctx.r11.s64 = 21;
	// stw r11,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_881318EC:
	// lwz r11,180(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 180);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88131930
	if (!ctx.cr6.eq) goto loc_88131930;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88131908;
	sub_8812C528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// bgt cr6,0x881314a0
	if (ctx.cr6.gt) goto loc_881314A0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x881314a0
	if (ctx.cr6.lt) goto loc_881314A0;
	// sth r11,582(r25)
	REX_STORE_U16(ctx.r25.u32 + 582, ctx.r11.u16);
loc_88131930:
	// stw r24,652(r25)
	REX_STORE_U32(ctx.r25.u32 + 652, ctx.r24.u32);
	// stw r16,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r16.u32);
loc_88131938:
	// lwz r11,180(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 180);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881319cc
	if (!ctx.cr6.eq) goto loc_881319CC;
	// lwz r11,652(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 652);
	// lwz r10,648(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 648);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x881319cc
	if (!ctx.cr6.lt) goto loc_881319CC;
loc_88131954:
	// lwz r11,192(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881319b0
	if (!ctx.cr6.eq) goto loc_881319B0;
	// lhz r11,582(r25)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 582);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x8812c528
	ctx.lr = 0x88131974;
	sub_8812C528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x881314a0
	if (!ctx.cr0.gt) goto loc_881314A0;
	// lhz r10,582(r25)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r25.u32 + 582);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// slw r8,r23,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r9.u8 & 0x3F));
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x881314a0
	if (ctx.cr6.gt) goto loc_881314A0;
	// lwz r10,652(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 652);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// addi r10,r10,158
	ctx.r10.s64 = ctx.r10.s64 + 158;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r25
	REX_STORE_U32(ctx.r8.u32 + ctx.r25.u32, ctx.r9.u32);
loc_881319B0:
	// lwz r11,652(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 652);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,652(r25)
	REX_STORE_U32(ctx.r25.u32 + 652, ctx.r11.u32);
	// lwz r9,648(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 648);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x88131954
	if (ctx.cr6.lt) goto loc_88131954;
loc_881319CC:
	// li r11,23
	ctx.r11.s64 = 23;
	// stw r11,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_881319D4:
	// lwz r11,656(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 656);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88131a18
	if (!ctx.cr6.eq) goto loc_88131A18;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x881319F0;
	sub_8812C528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x881314a0
	if (ctx.cr6.gt) goto loc_881314A0;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x881314a0
	if (ctx.cr6.lt) goto loc_881314A0;
	// stw r11,664(r25)
	REX_STORE_U32(ctx.r25.u32 + 664, ctx.r11.u32);
loc_88131A18:
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r11,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_88131A20:
	// lwz r11,656(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 656);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88131a68
	if (!ctx.cr6.eq) goto loc_88131A68;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88131A3C;
	sub_8812C528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bgt cr6,0x881314a0
	if (ctx.cr6.gt) goto loc_881314A0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x881314a0
	if (ctx.cr6.lt) goto loc_881314A0;
	// stw r11,672(r25)
	REX_STORE_U32(ctx.r25.u32 + 672, ctx.r11.u32);
	// addi r4,r25,664
	ctx.r4.s64 = ctx.r25.s64 + 664;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88140488
	ctx.lr = 0x88131A68;
	sub_88140488(ctx, base);
loc_88131A68:
	// li r11,25
	ctx.r11.s64 = 25;
	// stw r11,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_88131A70:
	// lwz r11,656(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 656);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88131a9c
	if (!ctx.cr6.eq) goto loc_88131A9C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88131A8C;
	sub_8812C528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,660(r25)
	REX_STORE_U32(ctx.r25.u32 + 660, ctx.r11.u32);
loc_88131A9C:
	// li r11,26
	ctx.r11.s64 = 26;
	// sth r24,146(r30)
	REX_STORE_U16(ctx.r30.u32 + 146, ctx.r24.u16);
	// stw r11,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_88131AA8:
	// lwz r11,656(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 656);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88131b38
	if (!ctx.cr6.eq) goto loc_88131B38;
	// lwz r11,660(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 660);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88131b38
	if (!ctx.cr6.eq) goto loc_88131B38;
	// lwz r10,672(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 672);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x88131aec
	if (!ctx.cr6.gt) goto loc_88131AEC;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_88131ADC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bgt cr6,0x88131adc
	if (ctx.cr6.gt) goto loc_88131ADC;
loc_88131AEC:
	// slw r10,r23,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r11.u8 & 0x3F));
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88131b00
	if (!ctx.cr6.lt) goto loc_88131B00;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_88131B00:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88131B0C;
	sub_8812C528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r10,672(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 672);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x881314a0
	if (ctx.cr6.gt) goto loc_881314A0;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r10,680(r25)
	REX_STORE_U32(ctx.r25.u32 + 680, ctx.r10.u32);
loc_88131B38:
	// li r11,27
	ctx.r11.s64 = 27;
	// sth r24,146(r30)
	REX_STORE_U16(ctx.r30.u32 + 146, ctx.r24.u16);
	// stw r11,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_88131B44:
	// lwz r11,656(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 656);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88131c00
	if (!ctx.cr6.eq) goto loc_88131C00;
	// lwz r11,660(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 660);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88131c00
	if (!ctx.cr6.eq) goto loc_88131C00;
	// lhz r11,34(r25)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 34);
	// lwz r10,664(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 664);
	// lhz r9,146(r30)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + 146);
	// mullw r8,r11,r11
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// lwz r7,680(r25)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r25.u32 + 680);
	// lwz r6,672(r25)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r25.u32 + 672);
	// mullw r5,r8,r10
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// subfic r31,r7,32
	ctx.xer.ca = ctx.r7.u32 <= 32;
	ctx.r31.u64 = static_cast<uint64_t>(32) - ctx.r7.u64;
	// subfic r29,r6,30
	ctx.xer.ca = ctx.r6.u32 <= 30;
	ctx.r29.u64 = static_cast<uint64_t>(30) - ctx.r6.u64;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x88131c00
	if (!ctx.cr6.lt) goto loc_88131C00;
	// addi r28,r30,224
	ctx.r28.s64 = ctx.r30.s64 + 224;
loc_88131B90:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,680(r25)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 680);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8812c528
	ctx.lr = 0x88131BA0;
	sub_8812C528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r10,146(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 146);
	// slw r9,r11,r31
	ctx.r9.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// sraw r11,r9,r29
	temp.u32 = ctx.r29.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r11.s64 = ctx.r9.s32 >> temp.u32;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lwz r5,696(r25)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r25.u32 + 696);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r11,r7,r5
	REX_STORE_U16(ctx.r7.u32 + ctx.r5.u32, ctx.r11.u16);
	// lhz r4,146(r30)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r30.u32 + 146);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// sth r11,146(r30)
	REX_STORE_U16(ctx.r30.u32 + 146, ctx.r11.u16);
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r10,664(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 664);
	// lhz r9,34(r25)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r25.u32 + 34);
	// mullw r8,r9,r9
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// mullw r6,r8,r10
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x88131b90
	if (ctx.cr6.lt) goto loc_88131B90;
loc_88131C00:
	// li r11,28
	ctx.r11.s64 = 28;
	// sth r24,150(r30)
	REX_STORE_U16(ctx.r30.u32 + 150, ctx.r24.u16);
	// sth r24,146(r30)
	REX_STORE_U16(ctx.r30.u32 + 146, ctx.r24.u16);
	// stw r11,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_88131C10:
	// lwz r11,656(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 656);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88131d14
	if (!ctx.cr6.eq) goto loc_88131D14;
	// lwz r11,660(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 660);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88131d14
	if (!ctx.cr6.eq) goto loc_88131D14;
	// lhz r11,150(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 150);
	// lwz r10,680(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 680);
	// lwz r9,672(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 672);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lhz r7,34(r25)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r25.u32 + 34);
	// subfic r31,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r31.u64 = static_cast<uint64_t>(32) - ctx.r10.u64;
	// subfic r29,r9,30
	ctx.xer.ca = ctx.r9.u32 <= 30;
	ctx.r29.u64 = static_cast<uint64_t>(30) - ctx.r9.u64;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x88131d14
	if (!ctx.cr6.lt) goto loc_88131D14;
loc_88131C4C:
	// lhz r11,150(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 150);
	// lhz r10,146(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 146);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88131ce8
	if (!ctx.cr6.lt) goto loc_88131CE8;
	// addi r28,r30,224
	ctx.r28.s64 = ctx.r30.s64 + 224;
loc_88131C68:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,680(r25)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 680);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8812c528
	ctx.lr = 0x88131C78;
	sub_8812C528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r10,150(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 150);
	// slw r9,r11,r31
	ctx.r9.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// lhz r8,146(r30)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + 146);
	// sraw r11,r9,r29
	temp.u32 = ctx.r29.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r11.s64 = ctx.r9.s32 >> temp.u32;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,704(r25)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r25.u32 + 704);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// lhz r4,34(r25)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r25.u32 + 34);
	// mullw r11,r4,r7
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r6,r11,r5
	REX_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r6.u16);
	// lhz r10,146(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 146);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sth r8,146(r30)
	REX_STORE_U16(ctx.r30.u32 + 146, ctx.r8.u16);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// lhz r5,150(r30)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r30.u32 + 150);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x88131c68
	if (ctx.cr6.lt) goto loc_88131C68;
loc_88131CE8:
	// sth r24,146(r30)
	REX_STORE_U16(ctx.r30.u32 + 146, ctx.r24.u16);
	// lhz r11,150(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 150);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,150(r30)
	REX_STORE_U16(ctx.r30.u32 + 150, ctx.r9.u16);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// lhz r8,34(r25)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r25.u32 + 34);
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88131c4c
	if (ctx.cr6.lt) goto loc_88131C4C;
loc_88131D14:
	// li r11,29
	ctx.r11.s64 = 29;
	// stw r11,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_88131D1C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88131D2C;
	sub_8812C528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,716(r25)
	REX_STORE_U32(ctx.r25.u32 + 716, ctx.r11.u32);
	// sth r24,150(r30)
	REX_STORE_U16(ctx.r30.u32 + 150, ctx.r24.u16);
	// stw r17,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r17.u32);
	// stw r24,44(r30)
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r24.u32);
loc_88131D48:
	// lhz r11,580(r25)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 580);
	// lhz r10,150(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 150);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881321a0
	if (!ctx.cr6.lt) goto loc_881321A0;
loc_88131D60:
	// lhz r11,150(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 150);
	// lwz r9,584(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 584);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lwz r10,320(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 320);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// lhzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mulli r9,r5,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1776));
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bgt cr6,0x88132174
	if (ctx.cr6.gt) goto loc_88132174;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x88131de0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88131DE0;
	// bdzf 4*cr6+eq,0x88131e78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88131E78;
	// bne cr6,0x88131f0c
	if (!ctx.cr6.eq) goto loc_88131F0C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88131DB4;
	sub_8812C528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x881314a0
	if (ctx.cr6.gt) goto loc_881314A0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x881314a0
	if (ctx.cr6.lt) goto loc_881314A0;
	// sth r24,184(r31)
	REX_STORE_U16(ctx.r31.u32 + 184, ctx.r24.u16);
	// sth r11,182(r31)
	REX_STORE_U16(ctx.r31.u32 + 182, ctx.r11.u16);
	// stw r23,44(r30)
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r23.u32);
loc_88131DE0:
	// lhz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 184);
	// lhz r10,182(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 182);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x88131e70
	if (!ctx.cr6.lt) goto loc_88131E70;
	// addi r29,r30,224
	ctx.r29.s64 = ctx.r30.s64 + 224;
loc_88131DFC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8812c528
	ctx.lr = 0x88131E0C;
	sub_8812C528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bgt cr6,0x881314a0
	if (ctx.cr6.gt) goto loc_881314A0;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x881314a0
	if (ctx.cr6.lt) goto loc_881314A0;
	// lhz r10,184(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 184);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mulli r10,r9,56
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(56));
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r11,200(r8)
	REX_STORE_U32(ctx.r8.u32 + 200, ctx.r11.u32);
	// lhz r7,184(r31)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 184);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sth r5,184(r31)
	REX_STORE_U16(ctx.r31.u32 + 184, ctx.r5.u16);
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// lhz r3,182(r31)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + 182);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88131dfc
	if (ctx.cr6.lt) goto loc_88131DFC;
loc_88131E70:
	// sth r24,184(r31)
	REX_STORE_U16(ctx.r31.u32 + 184, ctx.r24.u16);
	// stw r22,44(r30)
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r22.u32);
loc_88131E78:
	// lhz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 184);
	// lhz r10,182(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 182);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x88131f00
	if (!ctx.cr6.lt) goto loc_88131F00;
	// addi r29,r30,224
	ctx.r29.s64 = ctx.r30.s64 + 224;
loc_88131E94:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8812c528
	ctx.lr = 0x88131EA4;
	sub_8812C528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// bgt cr6,0x881314a0
	if (ctx.cr6.gt) goto loc_881314A0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x881314a0
	if (ctx.cr6.lt) goto loc_881314A0;
	// lhz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 184);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mulli r11,r9,56
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(56));
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,220(r8)
	REX_STORE_U32(ctx.r8.u32 + 220, ctx.r10.u32);
	// lhz r7,184(r31)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 184);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sth r5,184(r31)
	REX_STORE_U16(ctx.r31.u32 + 184, ctx.r5.u16);
	// clrlwi r3,r5,16
	ctx.r3.u64 = ctx.r5.u32 & 0xFFFF;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lhz r4,182(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 182);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88131e94
	if (ctx.cr6.lt) goto loc_88131E94;
loc_88131F00:
	// sth r24,184(r31)
	REX_STORE_U16(ctx.r31.u32 + 184, ctx.r24.u16);
	// stw r21,44(r30)
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r21.u32);
	// stw r24,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r24.u32);
loc_88131F0C:
	// lwz r11,716(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 716);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8813216c
	if (!ctx.cr6.eq) goto loc_8813216C;
	// lhz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 184);
	// lhz r10,182(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 182);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8813216c
	if (!ctx.cr6.lt) goto loc_8813216C;
loc_88131F30:
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x88131f4c
	if (ctx.cr6.lt) goto loc_88131F4C;
	// beq cr6,0x88131fdc
	if (ctx.cr6.eq) goto loc_88131FDC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x88132078
	if (ctx.cr6.lt) goto loc_88132078;
	// b 0x8813213c
	goto loc_8813213C;
loc_88131F4C:
	// lhz r10,184(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 184);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mulli r10,r9,56
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(56));
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r9,200(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 200);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x88131f90
	if (!ctx.cr6.gt) goto loc_88131F90;
	// lhz r10,184(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 184);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mulli r10,r8,56
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(56));
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r10,200(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 200);
loc_88131F80:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bgt cr6,0x88131f80
	if (ctx.cr6.gt) goto loc_88131F80;
loc_88131F90:
	// slw r10,r23,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r11.u8 & 0x3F));
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88131fa4
	if (!ctx.cr6.lt) goto loc_88131FA4;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_88131FA4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88131FB0;
	sub_8812C528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lhz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 184);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// mulli r10,r9,56
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(56));
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,212(r7)
	REX_STORE_U32(ctx.r7.u32 + 212, ctx.r6.u32);
	// stw r23,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r23.u32);
loc_88131FDC:
	// lhz r10,184(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 184);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mulli r10,r9,56
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(56));
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r10,220(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 220);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x88132028
	if (!ctx.cr6.gt) goto loc_88132028;
	// lhz r10,184(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 184);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mulli r10,r8,56
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(56));
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r10,220(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 220);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_88132018:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bgt cr6,0x88132018
	if (ctx.cr6.gt) goto loc_88132018;
loc_88132028:
	// slw r10,r23,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r11.u8 & 0x3F));
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8813203c
	if (!ctx.cr6.lt) goto loc_8813203C;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_8813203C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88132048;
	sub_8812C528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lhz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 184);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// mulli r10,r9,56
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(56));
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// stw r6,216(r7)
	REX_STORE_U32(ctx.r7.u32 + 216, ctx.r6.u32);
	// sth r24,146(r30)
	REX_STORE_U16(ctx.r30.u32 + 146, ctx.r24.u16);
	// stw r22,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r22.u32);
loc_88132078:
	// lhz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 184);
	// lhz r10,146(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 146);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mulli r11,r9,56
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(56));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r27,216(r11)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// lwz r7,220(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// lwz r6,212(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// subfic r29,r27,32
	ctx.xer.ca = ctx.r27.u32 <= 32;
	ctx.r29.u64 = static_cast<uint64_t>(32) - ctx.r27.u64;
	// subfic r28,r7,30
	ctx.xer.ca = ctx.r7.u32 <= 30;
	ctx.r28.u64 = static_cast<uint64_t>(30) - ctx.r7.u64;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x88132138
	if (!ctx.cr6.lt) goto loc_88132138;
	// addi r26,r30,224
	ctx.r26.s64 = ctx.r30.s64 + 224;
loc_881320B0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8812c528
	ctx.lr = 0x881320C0;
	sub_8812C528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r10,146(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 146);
	// slw r9,r11,r29
	ctx.r9.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r29.u8 & 0x3F));
	// sraw r11,r9,r28
	temp.u32 = ctx.r28.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r11.s64 = ctx.r9.s32 >> temp.u32;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r5,184(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 184);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mulli r11,r4,56
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(56));
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,252(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// sthx r8,r11,r6
	REX_STORE_U16(ctx.r11.u32 + ctx.r6.u32, ctx.r8.u16);
	// lhz r10,146(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 146);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sth r8,146(r30)
	REX_STORE_U16(ctx.r30.u32 + 146, ctx.r8.u16);
	// clrlwi r5,r8,16
	ctx.r5.u64 = ctx.r8.u32 & 0xFFFF;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// lhz r7,184(r31)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 184);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r11,r6,56
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(56));
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,212(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 212);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881320b0
	if (ctx.cr6.lt) goto loc_881320B0;
loc_88132138:
	// stw r24,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r24.u32);
loc_8813213C:
	// stw r24,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r24.u32);
	// lhz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 184);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,184(r31)
	REX_STORE_U16(ctx.r31.u32 + 184, ctx.r9.u16);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// lhz r7,182(r31)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 182);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x88131f30
	if (ctx.cr6.lt) goto loc_88131F30;
loc_8813216C:
	// sth r24,184(r31)
	REX_STORE_U16(ctx.r31.u32 + 184, ctx.r24.u16);
	// stw r24,44(r30)
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r24.u32);
loc_88132174:
	// lhz r11,150(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 150);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,150(r30)
	REX_STORE_U16(ctx.r30.u32 + 150, ctx.r9.u16);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// lhz r7,580(r25)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r25.u32 + 580);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x88131d60
	if (ctx.cr6.lt) goto loc_88131D60;
loc_881321A0:
	// li r11,34
	ctx.r11.s64 = 34;
	// stw r11,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_881321A8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x881321B8;
	sub_8812C528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// sth r11,728(r25)
	REX_STORE_U16(ctx.r25.u32 + 728, ctx.r11.u16);
	// stw r14,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r14.u32);
loc_881321CC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x881321DC;
	sub_8812C528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x881314a0
	if (ctx.cr6.lt) goto loc_881314A0;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bgt cr6,0x881314a0
	if (ctx.cr6.gt) goto loc_881314A0;
	// lwz r10,192(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 192);
	// sth r11,208(r25)
	REX_STORE_U16(ctx.r25.u32 + 208, ctx.r11.u16);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x88132218
	if (!ctx.cr6.eq) goto loc_88132218;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,320(r25)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 320);
	// bl 0x88143cd0
	ctx.lr = 0x88132218;
	sub_88143CD0(ctx, base);
loc_88132218:
	// stw r23,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r23.u32);
loc_8813221C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x8813222C;
	sub_8812C528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r10,580(r25)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r25.u32 + 580);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// stw r11,204(r25)
	REX_STORE_U32(ctx.r25.u32 + 204, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x88132290
	if (!ctx.cr6.gt) goto loc_88132290;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// rlwinm r10,r24,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
loc_88132254:
	// lwz r9,584(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 584);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwz r8,320(r25)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r25.u32 + 320);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lhzx r5,r10,r9
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mulli r9,r4,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1776));
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r23,40(r9)
	REX_STORE_U32(ctx.r9.u32 + 40, ctx.r23.u32);
	// lhz r8,580(r25)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r25.u32 + 580);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x88132254
	if (ctx.cr6.lt) goto loc_88132254;
loc_88132290:
	// lwz r11,204(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 204);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881322a4
	if (!ctx.cr6.eq) goto loc_881322A4;
	// stw r19,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r19.u32);
	// b 0x88132604
	goto loc_88132604;
loc_881322A4:
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r11,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// b 0x88132604
	goto loc_88132604;
loc_881322B0:
	// lhz r11,580(r25)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 580);
	// addi r28,r30,224
	ctx.r28.s64 = ctx.r30.s64 + 224;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x88139190
	ctx.lr = 0x881322C4;
	sub_88139190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lhz r11,580(r25)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8813233c
	if (!ctx.cr6.gt) goto loc_8813233C;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
loc_881322E4:
	// lwz r9,584(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 584);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,320(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 320);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r11,r7,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8812c528
	ctx.lr = 0x8813230C;
	sub_8812C528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// stw r11,40(r29)
	REX_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r8,580(r25)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r25.u32 + 580);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x881322e4
	if (ctx.cr6.lt) goto loc_881322E4;
loc_8813233C:
	// sth r24,760(r25)
	REX_STORE_U16(ctx.r25.u32 + 760, ctx.r24.u16);
	// stw r18,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r18.u32);
loc_88132344:
	// lwz r11,120(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88132594
	if (!ctx.cr6.eq) goto loc_88132594;
	// li r11,38
	ctx.r11.s64 = 38;
	// stw r11,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// b 0x88132604
	goto loc_88132604;
loc_8813235C:
	// lwz r11,120(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88132388
	if (!ctx.cr6.eq) goto loc_88132388;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88132378;
	sub_8812C528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,164(r25)
	REX_STORE_U32(ctx.r25.u32 + 164, ctx.r11.u32);
loc_88132388:
	// li r11,37
	ctx.r11.s64 = 37;
	// stw r11,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_88132390:
	// lwz r11,120(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881323cc
	if (!ctx.cr6.eq) goto loc_881323CC;
	// lwz r11,164(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881323cc
	if (!ctx.cr6.eq) goto loc_881323CC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x881323B8;
	sub_8812C528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,168(r25)
	REX_STORE_U16(ctx.r25.u32 + 168, ctx.r10.u16);
loc_881323CC:
	// li r11,44
	ctx.r11.s64 = 44;
	// stw r11,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_881323D4:
	// lwz r11,120(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8813241c
	if (!ctx.cr6.eq) goto loc_8813241C;
	// lwz r11,164(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8813241c
	if (!ctx.cr6.eq) goto loc_8813241C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x881323FC;
	sub_8812C528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bgt cr6,0x881314a0
	if (ctx.cr6.gt) goto loc_881314A0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x881314a0
	if (ctx.cr6.lt) goto loc_881314A0;
	// sth r11,170(r25)
	REX_STORE_U16(ctx.r25.u32 + 170, ctx.r11.u16);
loc_8813241C:
	// li r11,46
	ctx.r11.s64 = 46;
	// stw r11,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_88132424:
	// lwz r11,120(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88132470
	if (!ctx.cr6.eq) goto loc_88132470;
	// lwz r11,164(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88132470
	if (!ctx.cr6.eq) goto loc_88132470;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x8813244C;
	sub_8812C528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x881314a0
	if (ctx.cr6.lt) goto loc_881314A0;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x881314a0
	if (ctx.cr6.gt) goto loc_881314A0;
	// sth r11,172(r25)
	REX_STORE_U16(ctx.r25.u32 + 172, ctx.r11.u16);
loc_88132470:
	// sth r24,150(r30)
	REX_STORE_U16(ctx.r30.u32 + 150, ctx.r24.u16);
	// sth r24,148(r30)
	REX_STORE_U16(ctx.r30.u32 + 148, ctx.r24.u16);
	// stw r15,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r15.u32);
loc_8813247C:
	// lwz r11,120(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88132594
	if (!ctx.cr6.eq) goto loc_88132594;
	// lwz r11,164(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88132594
	if (!ctx.cr6.eq) goto loc_88132594;
	// lhz r11,580(r25)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 580);
	// lhz r10,150(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 150);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88132594
	if (!ctx.cr6.lt) goto loc_88132594;
loc_881324AC:
	// lhz r11,150(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 150);
	// lwz r9,584(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 584);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lhz r7,168(r25)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r25.u32 + 168);
	// lhz r5,148(r30)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r30.u32 + 148);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,320(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 320);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// lhzx r9,r6,r9
	ctx.r9.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r9.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mulli r11,r8,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(1776));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r29,r11,1456
	ctx.r29.s64 = ctx.r11.s64 + 1456;
	// bge cr6,0x88132564
	if (!ctx.cr6.lt) goto loc_88132564;
	// addi r28,r30,224
	ctx.r28.s64 = ctx.r30.s64 + 224;
loc_881324F0:
	// lhz r11,172(r25)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 172);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r10,170(r25)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r25.u32 + 170);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r31,r9
	ctx.r31.s64 = ctx.r9.s16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8812c528
	ctx.lr = 0x88132510;
	sub_8812C528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lhz r10,148(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 148);
	// subfic r11,r31,32
	ctx.xer.ca = ctx.r31.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r31.u64;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// slw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// sraw r5,r7,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r5.s64 = ctx.r7.s32 >> temp.u32;
	// stwx r5,r6,r29
	REX_STORE_U32(ctx.r6.u32 + ctx.r29.u32, ctx.r5.u32);
	// lhz r4,148(r30)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r30.u32 + 148);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,148(r30)
	REX_STORE_U16(ctx.r30.u32 + 148, ctx.r10.u16);
	// lhz r9,168(r25)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r25.u32 + 168);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x881324f0
	if (ctx.cr6.lt) goto loc_881324F0;
loc_88132564:
	// sth r24,148(r30)
	REX_STORE_U16(ctx.r30.u32 + 148, ctx.r24.u16);
	// lhz r11,150(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 150);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,150(r30)
	REX_STORE_U16(ctx.r30.u32 + 150, ctx.r9.u16);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// lhz r8,580(r25)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r25.u32 + 580);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x881324ac
	if (ctx.cr6.lt) goto loc_881324AC;
loc_88132594:
	// stw r19,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r19.u32);
	// b 0x88132604
	goto loc_88132604;
loc_8813259C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x881325AC;
	sub_8812C528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881325c8
	if (!ctx.cr6.eq) goto loc_881325C8;
	// stb r24,200(r25)
	REX_STORE_U8(ctx.r25.u32 + 200, ctx.r24.u8);
	// b 0x88132600
	goto loc_88132600;
loc_881325C8:
	// li r11,51
	ctx.r11.s64 = 51;
	// stw r11,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// b 0x88132604
	goto loc_88132604;
loc_881325D4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x881325E4;
	sub_8812C528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88132620
	if (ctx.cr6.lt) goto loc_88132620;
	// lhz r10,110(r25)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r25.u32 + 110);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x881314a0
	if (!ctx.cr6.lt) goto loc_881314A0;
	// stb r11,200(r25)
	REX_STORE_U8(ctx.r25.u32 + 200, ctx.r11.u8);
loc_88132600:
	// stw r20,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r20.u32);
loc_88132604:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x881314e4
	if (!ctx.cr6.eq) goto loc_881314E4;
loc_88132610:
	// lwz r11,192(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88132620
	if (!ctx.cr6.eq) goto loc_88132620;
	// stw r23,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r23.u32);
loc_88132620:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814CCB0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8814ccf8
	if (ctx.cr6.eq) goto loc_8814CCF8;
	// lwz r11,20472(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20472);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8814ccf8
	if (!ctx.cr6.eq) goto loc_8814CCF8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x881ec8b0
	ctx.lr = 0x8814CCE0;
	sub_881EC8B0(ctx, base);
	// ld r10,20448(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 20448);
	// ld r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r11,20472(r31)
	REX_STORE_U32(ctx.r31.u32 + 20472, ctx.r11.u32);
	// std r8,20448(r31)
	REX_STORE_U64(ctx.r31.u32 + 20448, ctx.r8.u64);
loc_8814CCF8:
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

DEFINE_REX_FUNC(sub_8814CF00) {
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
	// stw r6,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8814cf50
	if (ctx.cr6.eq) goto loc_8814CF50;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8814CF34:
	// dcbf r11,r4
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x8814cf34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8814CF34;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8814cf50
	if (ctx.cr6.eq) goto loc_8814CF50;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// dcbf r11,r4
loc_8814CF50:
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// bne cr6,0x8814cf70
	if (!ctx.cr6.eq) goto loc_8814CF70;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// b 0x8814cfc0
	goto loc_8814CFC0;
loc_8814CF70:
	// addic. r30,r3,16
	ctx.xer.ca = ctx.r3.u32 > 4294967279;
	ctx.r30.s64 = ctx.r3.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8814cfb0
	if (ctx.cr0.eq) goto loc_8814CFB0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8815b9f8
	ctx.lr = 0x8814CF84;
	sub_8815B9F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8814cf9c
	if (ctx.cr6.eq) goto loc_8814CF9C;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x8814CF9C;
	sub_88052D90(ctx, base);
loc_8814CF9C:
	// stw r31,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8814cfb0
	if (ctx.cr6.eq) goto loc_8814CFB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x882436a0
	ctx.lr = 0x8814CFB0;
	__imp__RtlInitializeCriticalSection(ctx, base);
loc_8814CFB0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,-9
	ctx.r3.s64 = -9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8814cfc4
	if (ctx.cr6.eq) goto loc_8814CFC4;
loc_8814CFC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8814CFC4:
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

DEFINE_REX_FUNC(sub_88150238) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88150248
	if (!ctx.cr6.eq) goto loc_88150248;
	// li r3,-3
	ctx.r3.s64 = -3;
	// blr 
	return;
loc_88150248:
	// lwz r11,736(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 736);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88150278
	if (ctx.cr6.eq) goto loc_88150278;
	// lwz r10,15364(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 15364);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88150278
	if (!ctx.cr6.eq) goto loc_88150278;
	// lwz r10,15432(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 15432);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88150278
	if (!ctx.cr6.eq) goto loc_88150278;
	// li r3,-4
	ctx.r3.s64 = -4;
	// blr 
	return;
loc_88150278:
	// lwz r10,15536(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 15536);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bge cr6,0x8815029c
	if (!ctx.cr6.lt) goto loc_8815029C;
	// lwz r10,14888(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14888);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881502cc
	if (ctx.cr6.eq) goto loc_881502CC;
	// lwz r10,14912(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14912);
	// lwz r11,14916(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 14916);
	// b 0x881502d4
	goto loc_881502D4;
loc_8815029C:
	// lwz r10,21888(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 21888);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x881502cc
	if (!ctx.cr6.eq) goto loc_881502CC;
	// lwz r10,14836(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14836);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881502cc
	if (!ctx.cr6.gt) goto loc_881502CC;
	// ld r10,3632(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 3632);
	// cmpdi cr6,r10,1
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 1, ctx.xer);
	// ble cr6,0x881502cc
	if (!ctx.cr6.gt) goto loc_881502CC;
	// lwz r10,22084(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 22084);
	// lwz r11,22088(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 22088);
	// b 0x881502d4
	goto loc_881502D4;
loc_881502CC:
	// lwz r10,156(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// lwz r11,160(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
loc_881502D4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881502e0
	if (ctx.cr6.eq) goto loc_881502E0;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_881502E0:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x881502ec
	if (ctx.cr6.eq) goto loc_881502EC;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_881502EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88151118) {
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
	// lwz r11,20680(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20680);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88151180
	if (ctx.cr6.eq) goto loc_88151180;
	// lwz r11,20684(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20684);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88151180
	if (ctx.cr6.eq) goto loc_88151180;
	// lwz r11,21780(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 21780);
	// lis r7,-30719
	ctx.r7.s64 = -2013200384;
	// lwz r10,21776(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 21776);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r7,17880
	ctx.r5.s64 = ctx.r7.s64 + 17880;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x88151188
	goto loc_88151188;
loc_88151180:
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_88151188:
	// lwz r11,21864(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21864);
	// rlwinm r5,r8,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r10,21540(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21540);
	// stw r10,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// lwz r9,21544(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 21544);
	// stw r9,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// lwz r7,21868(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 21868);
	// stw r7,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r7.u32);
	// stw r8,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r8.u32);
	// bl 0x880547a0
	ctx.lr = 0x881511BC;
	sub_880547A0(ctx, base);
	// lwz r6,21680(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 21680);
	// stw r6,88(r30)
	REX_STORE_U32(ctx.r30.u32 + 88, ctx.r6.u32);
	// lwz r5,3484(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3484);
	// stw r5,92(r30)
	REX_STORE_U32(ctx.r30.u32 + 92, ctx.r5.u32);
	// lwz r4,3488(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3488);
	// stw r4,96(r30)
	REX_STORE_U32(ctx.r30.u32 + 96, ctx.r4.u32);
	// lwz r3,21572(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 21572);
	// stw r3,100(r30)
	REX_STORE_U32(ctx.r30.u32 + 100, ctx.r3.u32);
	// lwz r11,21576(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21576);
	// stw r11,104(r30)
	REX_STORE_U32(ctx.r30.u32 + 104, ctx.r11.u32);
	// lwz r10,22140(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 22140);
	// stw r10,108(r30)
	REX_STORE_U32(ctx.r30.u32 + 108, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_881533D8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x881533e8
	if (!ctx.cr6.eq) goto loc_881533E8;
	// li r3,-3
	ctx.r3.s64 = -3;
	// blr 
	return;
loc_881533E8:
	// b 0x8814fb28
	sub_8814FB28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88155378) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88155380;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,22064(r3)
	REX_STORE_U32(ctx.r3.u32 + 22064, ctx.r28.u32);
	// bl 0x8815ad38
	ctx.lr = 0x88155394;
	sub_8815AD38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,156(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r29,160(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x881533f0
	ctx.lr = 0x881553AC;
	sub_881533F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88155484
	if (!ctx.cr6.eq) goto loc_88155484;
	// lwz r4,156(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r11,22056(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22056);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x88155480
	if (ctx.cr6.gt) goto loc_88155480;
	// lwz r5,160(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r11,22060(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22060);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x88155480
	if (ctx.cr6.gt) goto loc_88155480;
	// cmpw cr6,r30,r4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x881553e4
	if (!ctx.cr6.eq) goto loc_881553E4;
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x881553ec
	if (ctx.cr6.eq) goto loc_881553EC;
loc_881553E4:
	// stw r30,22084(r31)
	REX_STORE_U32(ctx.r31.u32 + 22084, ctx.r30.u32);
	// stw r29,22088(r31)
	REX_STORE_U32(ctx.r31.u32 + 22088, ctx.r29.u32);
loc_881553EC:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpw cr6,r4,r30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x88155408
	if (!ctx.cr6.eq) goto loc_88155408;
	// cmpw cr6,r5,r29
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x88155408
	if (!ctx.cr6.eq) goto loc_88155408;
	// stw r27,21888(r31)
	REX_STORE_U32(ctx.r31.u32 + 21888, ctx.r27.u32);
	// b 0x88155420
	goto loc_88155420;
loc_88155408:
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// stw r28,21888(r31)
	REX_STORE_U32(ctx.r31.u32 + 21888, ctx.r28.u32);
	// addi r10,r10,-20280
	ctx.r10.s64 = ctx.r10.s64 + -20280;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_88155420:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8815bc60
	ctx.lr = 0x88155428;
	sub_8815BC60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815548c
	if (!ctx.cr6.eq) goto loc_8815548C;
	// lwz r11,21992(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21992);
	// stw r28,22064(r31)
	REX_STORE_U32(ctx.r31.u32 + 22064, ctx.r28.u32);
	// stw r28,3728(r31)
	REX_STORE_U32(ctx.r31.u32 + 3728, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88155464
	if (!ctx.cr6.gt) goto loc_88155464;
	// lwz r10,21984(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21984);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r27,21992(r31)
	REX_STORE_U32(ctx.r31.u32 + 21992, ctx.r27.u32);
	// divwu r11,r10,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// stw r27,21984(r31)
	REX_STORE_U32(ctx.r31.u32 + 21984, ctx.r27.u32);
	// stw r11,21988(r31)
	REX_STORE_U32(ctx.r31.u32 + 21988, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_88155464:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,21988(r31)
	REX_STORE_U32(ctx.r31.u32 + 21988, ctx.r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r27,21992(r31)
	REX_STORE_U32(ctx.r31.u32 + 21992, ctx.r27.u32);
	// stw r27,21984(r31)
	REX_STORE_U32(ctx.r31.u32 + 21984, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_88155480:
	// li r3,1
	ctx.r3.s64 = 1;
loc_88155484:
	// stw r29,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r29.u32);
	// stw r30,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
loc_8815548C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88157D90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88157D98;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24688(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24688);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,22272(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 22272);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157dc4
	if (ctx.cr6.eq) goto loc_88157DC4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88157DC0;
	sub_8815E530(ctx, base);
	// stw r29,22272(r31)
	REX_STORE_U32(ctx.r31.u32 + 22272, ctx.r29.u32);
loc_88157DC4:
	// lwz r4,22276(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 22276);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157ddc
	if (ctx.cr6.eq) goto loc_88157DDC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88157DD8;
	sub_8815E530(ctx, base);
	// stw r29,22276(r31)
	REX_STORE_U32(ctx.r31.u32 + 22276, ctx.r29.u32);
loc_88157DDC:
	// lwz r4,22280(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 22280);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157df4
	if (ctx.cr6.eq) goto loc_88157DF4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88157DF0;
	sub_8815E530(ctx, base);
	// stw r29,22280(r31)
	REX_STORE_U32(ctx.r31.u32 + 22280, ctx.r29.u32);
loc_88157DF4:
	// lwz r4,22284(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 22284);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157e0c
	if (ctx.cr6.eq) goto loc_88157E0C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88157E08;
	sub_8815E530(ctx, base);
	// stw r29,22284(r31)
	REX_STORE_U32(ctx.r31.u32 + 22284, ctx.r29.u32);
loc_88157E0C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,45252
	ctx.r10.u64 = ctx.r11.u64 | 45252;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x88157f98
	if (!ctx.cr6.eq) goto loc_88157F98;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,3744(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3744);
	// addi r28,r31,3744
	ctx.r28.s64 = ctx.r31.s64 + 3744;
	// bl 0x88156df8
	ctx.lr = 0x88157E30;
	sub_88156DF8(ctx, base);
	// lwz r27,3744(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 3744);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x88157e54
	if (ctx.cr6.eq) goto loc_88157E54;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881715c8
	ctx.lr = 0x88157E48;
	sub_881715C8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157E54;
	sub_8815E528(ctx, base);
loc_88157E54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,3752(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3752);
	// addi r28,r31,3752
	ctx.r28.s64 = ctx.r31.s64 + 3752;
	// bl 0x88156df8
	ctx.lr = 0x88157E64;
	sub_88156DF8(ctx, base);
	// lwz r27,3752(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 3752);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x88157e88
	if (ctx.cr6.eq) goto loc_88157E88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881715c8
	ctx.lr = 0x88157E7C;
	sub_881715C8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157E88;
	sub_8815E528(ctx, base);
loc_88157E88:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,3748(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3748);
	// addi r28,r31,3748
	ctx.r28.s64 = ctx.r31.s64 + 3748;
	// bl 0x88156df8
	ctx.lr = 0x88157E98;
	sub_88156DF8(ctx, base);
	// lwz r27,3748(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 3748);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x88157ebc
	if (ctx.cr6.eq) goto loc_88157EBC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881715c8
	ctx.lr = 0x88157EB0;
	sub_881715C8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157EBC;
	sub_8815E528(ctx, base);
loc_88157EBC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,3756(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3756);
	// addi r28,r31,3756
	ctx.r28.s64 = ctx.r31.s64 + 3756;
	// bl 0x88156df8
	ctx.lr = 0x88157ECC;
	sub_88156DF8(ctx, base);
	// lwz r27,3756(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 3756);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x88157ef0
	if (ctx.cr6.eq) goto loc_88157EF0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881715c8
	ctx.lr = 0x88157EE4;
	sub_881715C8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157EF0;
	sub_8815E528(ctx, base);
loc_88157EF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,3760(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3760);
	// addi r28,r31,3760
	ctx.r28.s64 = ctx.r31.s64 + 3760;
	// bl 0x88156df8
	ctx.lr = 0x88157F00;
	sub_88156DF8(ctx, base);
	// lwz r27,3760(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 3760);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x88157f24
	if (ctx.cr6.eq) goto loc_88157F24;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881715c8
	ctx.lr = 0x88157F18;
	sub_881715C8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157F24;
	sub_8815E528(ctx, base);
loc_88157F24:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,3764(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3764);
	// addi r28,r31,3764
	ctx.r28.s64 = ctx.r31.s64 + 3764;
	// bl 0x88156df8
	ctx.lr = 0x88157F34;
	sub_88156DF8(ctx, base);
	// lwz r27,3764(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 3764);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x88157f58
	if (ctx.cr6.eq) goto loc_88157F58;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881715c8
	ctx.lr = 0x88157F4C;
	sub_881715C8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157F58;
	sub_8815E528(ctx, base);
loc_88157F58:
	// lwz r11,22288(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88157f98
	if (ctx.cr6.eq) goto loc_88157F98;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15268(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 15268);
	// bl 0x881b36a0
	ctx.lr = 0x88157F78;
	sub_881B36A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x88156df8
	ctx.lr = 0x88157F84;
	sub_88156DF8(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157f98
	if (ctx.cr6.eq) goto loc_88157F98;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88157F98;
	sub_8815E530(ctx, base);
loc_88157F98:
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// addi r28,r28,-20080
	ctx.r28.s64 = ctx.r28.s64 + -20080;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157fb8
	if (ctx.cr6.eq) goto loc_88157FB8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157FB4;
	sub_8815E528(ctx, base);
	// stw r29,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
loc_88157FB8:
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// addi r28,r28,-20060
	ctx.r28.s64 = ctx.r28.s64 + -20060;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157fd8
	if (ctx.cr6.eq) goto loc_88157FD8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88157FD4;
	sub_8815E530(ctx, base);
	// stw r29,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
loc_88157FD8:
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// addi r28,r28,-20056
	ctx.r28.s64 = ctx.r28.s64 + -20056;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157ff8
	if (ctx.cr6.eq) goto loc_88157FF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157FF4;
	sub_8815E528(ctx, base);
	// stw r29,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
loc_88157FF8:
	// lwz r4,21944(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 21944);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158010
	if (ctx.cr6.eq) goto loc_88158010;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x8815800C;
	sub_8815E528(ctx, base);
	// stw r29,21944(r31)
	REX_STORE_U32(ctx.r31.u32 + 21944, ctx.r29.u32);
loc_88158010:
	// lwz r4,21972(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 21972);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158028
	if (ctx.cr6.eq) goto loc_88158028;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x88158024;
	sub_8815E528(ctx, base);
	// stw r29,21972(r31)
	REX_STORE_U32(ctx.r31.u32 + 21972, ctx.r29.u32);
loc_88158028:
	// lwz r4,21956(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 21956);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158040
	if (ctx.cr6.eq) goto loc_88158040;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x8815803C;
	sub_8815E528(ctx, base);
	// stw r29,21956(r31)
	REX_STORE_U32(ctx.r31.u32 + 21956, ctx.r29.u32);
loc_88158040:
	// lwz r4,3972(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3972);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158058
	if (ctx.cr6.eq) goto loc_88158058;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158054;
	sub_8815E530(ctx, base);
	// stw r29,3972(r31)
	REX_STORE_U32(ctx.r31.u32 + 3972, ctx.r29.u32);
loc_88158058:
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x881580ac
	if (!ctx.cr6.eq) goto loc_881580AC;
	// lwz r4,20696(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20696);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8815807c
	if (ctx.cr6.eq) goto loc_8815807C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158078;
	sub_8815E530(ctx, base);
	// stw r29,20696(r31)
	REX_STORE_U32(ctx.r31.u32 + 20696, ctx.r29.u32);
loc_8815807C:
	// lwz r4,20700(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20700);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158094
	if (ctx.cr6.eq) goto loc_88158094;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158090;
	sub_8815E530(ctx, base);
	// stw r29,20700(r31)
	REX_STORE_U32(ctx.r31.u32 + 20700, ctx.r29.u32);
loc_88158094:
	// lwz r4,20704(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20704);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881580ac
	if (ctx.cr6.eq) goto loc_881580AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881580A8;
	sub_8815E530(ctx, base);
	// stw r29,20704(r31)
	REX_STORE_U32(ctx.r31.u32 + 20704, ctx.r29.u32);
loc_881580AC:
	// lwz r4,464(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 464);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881580c4
	if (ctx.cr6.eq) goto loc_881580C4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881580C0;
	sub_8815E530(ctx, base);
	// stw r29,464(r31)
	REX_STORE_U32(ctx.r31.u32 + 464, ctx.r29.u32);
loc_881580C4:
	// lwz r4,15248(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15248);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881580dc
	if (ctx.cr6.eq) goto loc_881580DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881580D8;
	sub_8815E530(ctx, base);
	// stw r29,15248(r31)
	REX_STORE_U32(ctx.r31.u32 + 15248, ctx.r29.u32);
loc_881580DC:
	// lwz r4,3012(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3012);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881580f4
	if (ctx.cr6.eq) goto loc_881580F4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881580F0;
	sub_8815E530(ctx, base);
	// stw r29,3012(r31)
	REX_STORE_U32(ctx.r31.u32 + 3012, ctx.r29.u32);
loc_881580F4:
	// lwz r11,24688(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24688);
	// lwz r10,712(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 712);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881581ec
	if (ctx.cr6.eq) goto loc_881581EC;
	// lwz r11,17376(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 17376);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x881581a0
	if (!ctx.cr6.eq) goto loc_881581A0;
	// lwz r4,3084(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3084);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158128
	if (ctx.cr6.eq) goto loc_88158128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158124;
	sub_8815E530(ctx, base);
	// stw r29,3084(r31)
	REX_STORE_U32(ctx.r31.u32 + 3084, ctx.r29.u32);
loc_88158128:
	// lwz r4,15332(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15332);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158140
	if (ctx.cr6.eq) goto loc_88158140;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x8815813C;
	sub_8815E530(ctx, base);
	// stw r29,15332(r31)
	REX_STORE_U32(ctx.r31.u32 + 15332, ctx.r29.u32);
loc_88158140:
	// lwz r4,15356(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15356);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158158
	if (ctx.cr6.eq) goto loc_88158158;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158154;
	sub_8815E530(ctx, base);
	// stw r29,15356(r31)
	REX_STORE_U32(ctx.r31.u32 + 15356, ctx.r29.u32);
loc_88158158:
	// lwz r4,15272(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15272);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158170
	if (ctx.cr6.eq) goto loc_88158170;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x8815816C;
	sub_8815E530(ctx, base);
	// stw r29,15272(r31)
	REX_STORE_U32(ctx.r31.u32 + 15272, ctx.r29.u32);
loc_88158170:
	// lwz r4,1776(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158188
	if (ctx.cr6.eq) goto loc_88158188;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158184;
	sub_8815E530(ctx, base);
	// stw r29,1776(r31)
	REX_STORE_U32(ctx.r31.u32 + 1776, ctx.r29.u32);
loc_88158188:
	// lwz r4,1784(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1784);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881581b8
	if (ctx.cr6.eq) goto loc_881581B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x8815819C;
	sub_8815E530(ctx, base);
	// b 0x881581b4
	goto loc_881581B4;
loc_881581A0:
	// stw r29,3084(r31)
	REX_STORE_U32(ctx.r31.u32 + 3084, ctx.r29.u32);
	// stw r29,15332(r31)
	REX_STORE_U32(ctx.r31.u32 + 15332, ctx.r29.u32);
	// stw r29,15356(r31)
	REX_STORE_U32(ctx.r31.u32 + 15356, ctx.r29.u32);
	// stw r29,15272(r31)
	REX_STORE_U32(ctx.r31.u32 + 15272, ctx.r29.u32);
	// stw r29,1776(r31)
	REX_STORE_U32(ctx.r31.u32 + 1776, ctx.r29.u32);
loc_881581B4:
	// stw r29,1784(r31)
	REX_STORE_U32(ctx.r31.u32 + 1784, ctx.r29.u32);
loc_881581B8:
	// lwz r4,15340(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15340);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881581d0
	if (ctx.cr6.eq) goto loc_881581D0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881581CC;
	sub_8815E530(ctx, base);
	// stw r29,15340(r31)
	REX_STORE_U32(ctx.r31.u32 + 15340, ctx.r29.u32);
loc_881581D0:
	// lwz r4,15348(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15348);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881582ac
	if (ctx.cr6.eq) goto loc_881582AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881581E4;
	sub_8815E530(ctx, base);
	// stw r29,15348(r31)
	REX_STORE_U32(ctx.r31.u32 + 15348, ctx.r29.u32);
	// b 0x881582ac
	goto loc_881582AC;
loc_881581EC:
	// lwz r4,15272(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15272);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158204
	if (ctx.cr6.eq) goto loc_88158204;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158200;
	sub_8815E530(ctx, base);
	// stw r29,15272(r31)
	REX_STORE_U32(ctx.r31.u32 + 15272, ctx.r29.u32);
loc_88158204:
	// lwz r4,3084(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3084);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8815821c
	if (ctx.cr6.eq) goto loc_8815821C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158218;
	sub_8815E530(ctx, base);
	// stw r29,3084(r31)
	REX_STORE_U32(ctx.r31.u32 + 3084, ctx.r29.u32);
loc_8815821C:
	// lwz r4,15332(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15332);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158234
	if (ctx.cr6.eq) goto loc_88158234;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158230;
	sub_8815E530(ctx, base);
	// stw r29,15332(r31)
	REX_STORE_U32(ctx.r31.u32 + 15332, ctx.r29.u32);
loc_88158234:
	// lwz r4,15356(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15356);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8815824c
	if (ctx.cr6.eq) goto loc_8815824C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158248;
	sub_8815E530(ctx, base);
	// stw r29,15356(r31)
	REX_STORE_U32(ctx.r31.u32 + 15356, ctx.r29.u32);
loc_8815824C:
	// lwz r4,15340(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15340);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158264
	if (ctx.cr6.eq) goto loc_88158264;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158260;
	sub_8815E530(ctx, base);
	// stw r29,15340(r31)
	REX_STORE_U32(ctx.r31.u32 + 15340, ctx.r29.u32);
loc_88158264:
	// lwz r4,15348(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15348);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8815827c
	if (ctx.cr6.eq) goto loc_8815827C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158278;
	sub_8815E530(ctx, base);
	// stw r29,15348(r31)
	REX_STORE_U32(ctx.r31.u32 + 15348, ctx.r29.u32);
loc_8815827C:
	// lwz r4,1776(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158294
	if (ctx.cr6.eq) goto loc_88158294;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158290;
	sub_8815E530(ctx, base);
	// stw r29,1776(r31)
	REX_STORE_U32(ctx.r31.u32 + 1776, ctx.r29.u32);
loc_88158294:
	// lwz r4,1784(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1784);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881582ac
	if (ctx.cr6.eq) goto loc_881582AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881582A8;
	sub_8815E530(ctx, base);
	// stw r29,1784(r31)
	REX_STORE_U32(ctx.r31.u32 + 1784, ctx.r29.u32);
loc_881582AC:
	// lwz r4,280(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881582c4
	if (ctx.cr6.eq) goto loc_881582C4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881582C0;
	sub_8815E530(ctx, base);
	// stw r29,280(r31)
	REX_STORE_U32(ctx.r31.u32 + 280, ctx.r29.u32);
loc_881582C4:
	// lwz r4,272(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881582dc
	if (ctx.cr6.eq) goto loc_881582DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881582D8;
	sub_8815E530(ctx, base);
	// stw r29,272(r31)
	REX_STORE_U32(ctx.r31.u32 + 272, ctx.r29.u32);
loc_881582DC:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88158300
	if (!ctx.cr6.eq) goto loc_88158300;
	// lwz r4,3088(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3088);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158300
	if (ctx.cr6.eq) goto loc_88158300;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881582FC;
	sub_8815E530(ctx, base);
	// stw r29,3088(r31)
	REX_STORE_U32(ctx.r31.u32 + 3088, ctx.r29.u32);
loc_88158300:
	// lwz r4,15304(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15304);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158318
	if (ctx.cr6.eq) goto loc_88158318;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x88158314;
	sub_8815E528(ctx, base);
	// stw r29,15304(r31)
	REX_STORE_U32(ctx.r31.u32 + 15304, ctx.r29.u32);
loc_88158318:
	// lwz r11,14852(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14852);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8815836c
	if (ctx.cr6.eq) goto loc_8815836C;
	// lwz r4,14872(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 14872);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8815833c
	if (ctx.cr6.eq) goto loc_8815833C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158338;
	sub_8815E530(ctx, base);
	// stw r29,14872(r31)
	REX_STORE_U32(ctx.r31.u32 + 14872, ctx.r29.u32);
loc_8815833C:
	// lwz r4,14876(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 14876);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158354
	if (ctx.cr6.eq) goto loc_88158354;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x88158350;
	sub_8815E528(ctx, base);
	// stw r29,14876(r31)
	REX_STORE_U32(ctx.r31.u32 + 14876, ctx.r29.u32);
loc_88158354:
	// lwz r4,14880(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 14880);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8815836c
	if (ctx.cr6.eq) goto loc_8815836C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x88158368;
	sub_8815E528(ctx, base);
	// stw r29,14880(r31)
	REX_STORE_U32(ctx.r31.u32 + 14880, ctx.r29.u32);
loc_8815836C:
	// lwz r4,268(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158384
	if (ctx.cr6.eq) goto loc_88158384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158380;
	sub_8815E530(ctx, base);
	// stw r29,268(r31)
	REX_STORE_U32(ctx.r31.u32 + 268, ctx.r29.u32);
loc_88158384:
	// lwz r4,276(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8815839c
	if (ctx.cr6.eq) goto loc_8815839C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158398;
	sub_8815E530(ctx, base);
	// stw r29,276(r31)
	REX_STORE_U32(ctx.r31.u32 + 276, ctx.r29.u32);
loc_8815839C:
	// lwz r4,1896(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1896);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881583b4
	if (ctx.cr6.eq) goto loc_881583B4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881583B0;
	sub_8815E530(ctx, base);
	// stw r29,1896(r31)
	REX_STORE_U32(ctx.r31.u32 + 1896, ctx.r29.u32);
loc_881583B4:
	// lwz r4,1900(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1900);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881583cc
	if (ctx.cr6.eq) goto loc_881583CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x881583C8;
	sub_8815E528(ctx, base);
	// stw r29,1900(r31)
	REX_STORE_U32(ctx.r31.u32 + 1900, ctx.r29.u32);
loc_881583CC:
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x881583e0
	if (ctx.cr6.lt) goto loc_881583E0;
	// addi r3,r31,1972
	ctx.r3.s64 = ctx.r31.s64 + 1972;
	// bl 0x881b4370
	ctx.lr = 0x881583E0;
	sub_881B4370(ctx, base);
loc_881583E0:
	// lwz r4,15720(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15720);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881583f8
	if (ctx.cr6.eq) goto loc_881583F8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881583F4;
	sub_8815E530(ctx, base);
	// stw r29,15720(r31)
	REX_STORE_U32(ctx.r31.u32 + 15720, ctx.r29.u32);
loc_881583F8:
	// lwz r4,15728(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15728);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158410
	if (ctx.cr6.eq) goto loc_88158410;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x8815840C;
	sub_8815E530(ctx, base);
	// stw r29,15728(r31)
	REX_STORE_U32(ctx.r31.u32 + 15728, ctx.r29.u32);
loc_88158410:
	// lwz r4,15724(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15724);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158428
	if (ctx.cr6.eq) goto loc_88158428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158424;
	sub_8815E530(ctx, base);
	// stw r29,15724(r31)
	REX_STORE_U32(ctx.r31.u32 + 15724, ctx.r29.u32);
loc_88158428:
	// lwz r4,15732(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15732);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158440
	if (ctx.cr6.eq) goto loc_88158440;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x8815843C;
	sub_8815E530(ctx, base);
	// stw r29,15732(r31)
	REX_STORE_U32(ctx.r31.u32 + 15732, ctx.r29.u32);
loc_88158440:
	// lwz r11,24688(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24688);
	// lwz r10,712(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 712);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8815848c
	if (ctx.cr6.eq) goto loc_8815848C;
	// lwz r11,17376(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 17376);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8815848c
	if (ctx.cr6.eq) goto loc_8815848C;
	// stw r29,15736(r31)
	REX_STORE_U32(ctx.r31.u32 + 15736, ctx.r29.u32);
	// stw r29,15744(r31)
	REX_STORE_U32(ctx.r31.u32 + 15744, ctx.r29.u32);
	// stw r29,15752(r31)
	REX_STORE_U32(ctx.r31.u32 + 15752, ctx.r29.u32);
	// stw r29,15760(r31)
	REX_STORE_U32(ctx.r31.u32 + 15760, ctx.r29.u32);
	// stw r29,15768(r31)
	REX_STORE_U32(ctx.r31.u32 + 15768, ctx.r29.u32);
	// stw r29,15776(r31)
	REX_STORE_U32(ctx.r31.u32 + 15776, ctx.r29.u32);
	// stw r29,15784(r31)
	REX_STORE_U32(ctx.r31.u32 + 15784, ctx.r29.u32);
	// stw r29,15792(r31)
	REX_STORE_U32(ctx.r31.u32 + 15792, ctx.r29.u32);
	// stw r29,15800(r31)
	REX_STORE_U32(ctx.r31.u32 + 15800, ctx.r29.u32);
	// stw r29,15808(r31)
	REX_STORE_U32(ctx.r31.u32 + 15808, ctx.r29.u32);
	// stw r29,15816(r31)
	REX_STORE_U32(ctx.r31.u32 + 15816, ctx.r29.u32);
	// b 0x881585a8
	goto loc_881585A8;
loc_8815848C:
	// lwz r4,15736(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15736);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881584a4
	if (ctx.cr6.eq) goto loc_881584A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881584A0;
	sub_8815E530(ctx, base);
	// stw r29,15736(r31)
	REX_STORE_U32(ctx.r31.u32 + 15736, ctx.r29.u32);
loc_881584A4:
	// lwz r4,15744(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15744);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881584bc
	if (ctx.cr6.eq) goto loc_881584BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881584B8;
	sub_8815E530(ctx, base);
	// stw r29,15744(r31)
	REX_STORE_U32(ctx.r31.u32 + 15744, ctx.r29.u32);
loc_881584BC:
	// lwz r4,15752(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15752);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881584d4
	if (ctx.cr6.eq) goto loc_881584D4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881584D0;
	sub_8815E530(ctx, base);
	// stw r29,15752(r31)
	REX_STORE_U32(ctx.r31.u32 + 15752, ctx.r29.u32);
loc_881584D4:
	// lwz r4,15760(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15760);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881584ec
	if (ctx.cr6.eq) goto loc_881584EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881584E8;
	sub_8815E530(ctx, base);
	// stw r29,15760(r31)
	REX_STORE_U32(ctx.r31.u32 + 15760, ctx.r29.u32);
loc_881584EC:
	// lwz r4,15768(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15768);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158504
	if (ctx.cr6.eq) goto loc_88158504;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158500;
	sub_8815E530(ctx, base);
	// stw r29,15768(r31)
	REX_STORE_U32(ctx.r31.u32 + 15768, ctx.r29.u32);
loc_88158504:
	// lwz r4,15776(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15776);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8815851c
	if (ctx.cr6.eq) goto loc_8815851C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158518;
	sub_8815E530(ctx, base);
	// stw r29,15776(r31)
	REX_STORE_U32(ctx.r31.u32 + 15776, ctx.r29.u32);
loc_8815851C:
	// lwz r4,15784(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15784);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158534
	if (ctx.cr6.eq) goto loc_88158534;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158530;
	sub_8815E530(ctx, base);
	// stw r29,15784(r31)
	REX_STORE_U32(ctx.r31.u32 + 15784, ctx.r29.u32);
loc_88158534:
	// lwz r4,15792(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15792);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8815854c
	if (ctx.cr6.eq) goto loc_8815854C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158548;
	sub_8815E530(ctx, base);
	// stw r29,15792(r31)
	REX_STORE_U32(ctx.r31.u32 + 15792, ctx.r29.u32);
loc_8815854C:
	// lwz r4,15800(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15800);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158564
	if (ctx.cr6.eq) goto loc_88158564;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158560;
	sub_8815E530(ctx, base);
	// stw r29,15800(r31)
	REX_STORE_U32(ctx.r31.u32 + 15800, ctx.r29.u32);
loc_88158564:
	// lwz r4,15808(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15808);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8815857c
	if (ctx.cr6.eq) goto loc_8815857C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158578;
	sub_8815E530(ctx, base);
	// stw r29,15808(r31)
	REX_STORE_U32(ctx.r31.u32 + 15808, ctx.r29.u32);
loc_8815857C:
	// lwz r4,15816(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15816);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158594
	if (ctx.cr6.eq) goto loc_88158594;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158590;
	sub_8815E530(ctx, base);
	// stw r29,15816(r31)
	REX_STORE_U32(ctx.r31.u32 + 15816, ctx.r29.u32);
loc_88158594:
	// lwz r4,15824(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15824);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881585ac
	if (ctx.cr6.eq) goto loc_881585AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881585A8;
	sub_8815E530(ctx, base);
loc_881585A8:
	// stw r29,15824(r31)
	REX_STORE_U32(ctx.r31.u32 + 15824, ctx.r29.u32);
loc_881585AC:
	// lwz r11,3392(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3392);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x881586d8
	if (ctx.cr6.lt) goto loc_881586D8;
	// lwz r4,15740(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15740);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881585d0
	if (ctx.cr6.eq) goto loc_881585D0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881585CC;
	sub_8815E530(ctx, base);
	// stw r29,15740(r31)
	REX_STORE_U32(ctx.r31.u32 + 15740, ctx.r29.u32);
loc_881585D0:
	// lwz r4,15748(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15748);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881585e8
	if (ctx.cr6.eq) goto loc_881585E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881585E4;
	sub_8815E530(ctx, base);
	// stw r29,15748(r31)
	REX_STORE_U32(ctx.r31.u32 + 15748, ctx.r29.u32);
loc_881585E8:
	// lwz r4,15756(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15756);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158600
	if (ctx.cr6.eq) goto loc_88158600;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881585FC;
	sub_8815E530(ctx, base);
	// stw r29,15756(r31)
	REX_STORE_U32(ctx.r31.u32 + 15756, ctx.r29.u32);
loc_88158600:
	// lwz r4,15764(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15764);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158618
	if (ctx.cr6.eq) goto loc_88158618;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158614;
	sub_8815E530(ctx, base);
	// stw r29,15764(r31)
	REX_STORE_U32(ctx.r31.u32 + 15764, ctx.r29.u32);
loc_88158618:
	// lwz r4,15772(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15772);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158630
	if (ctx.cr6.eq) goto loc_88158630;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x8815862C;
	sub_8815E530(ctx, base);
	// stw r29,15772(r31)
	REX_STORE_U32(ctx.r31.u32 + 15772, ctx.r29.u32);
loc_88158630:
	// lwz r4,15780(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15780);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158648
	if (ctx.cr6.eq) goto loc_88158648;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158644;
	sub_8815E530(ctx, base);
	// stw r29,15780(r31)
	REX_STORE_U32(ctx.r31.u32 + 15780, ctx.r29.u32);
loc_88158648:
	// lwz r4,15788(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15788);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158660
	if (ctx.cr6.eq) goto loc_88158660;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x8815865C;
	sub_8815E530(ctx, base);
	// stw r29,15788(r31)
	REX_STORE_U32(ctx.r31.u32 + 15788, ctx.r29.u32);
loc_88158660:
	// lwz r4,15796(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15796);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158678
	if (ctx.cr6.eq) goto loc_88158678;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158674;
	sub_8815E530(ctx, base);
	// stw r29,15796(r31)
	REX_STORE_U32(ctx.r31.u32 + 15796, ctx.r29.u32);
loc_88158678:
	// lwz r4,15804(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15804);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158690
	if (ctx.cr6.eq) goto loc_88158690;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x8815868C;
	sub_8815E530(ctx, base);
	// stw r29,15804(r31)
	REX_STORE_U32(ctx.r31.u32 + 15804, ctx.r29.u32);
loc_88158690:
	// lwz r4,15812(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15812);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881586a8
	if (ctx.cr6.eq) goto loc_881586A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881586A4;
	sub_8815E530(ctx, base);
	// stw r29,15812(r31)
	REX_STORE_U32(ctx.r31.u32 + 15812, ctx.r29.u32);
loc_881586A8:
	// lwz r4,15820(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15820);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881586c0
	if (ctx.cr6.eq) goto loc_881586C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881586BC;
	sub_8815E530(ctx, base);
	// stw r29,15820(r31)
	REX_STORE_U32(ctx.r31.u32 + 15820, ctx.r29.u32);
loc_881586C0:
	// lwz r4,15828(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15828);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881586d8
	if (ctx.cr6.eq) goto loc_881586D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881586D4;
	sub_8815E530(ctx, base);
	// stw r29,15828(r31)
	REX_STORE_U32(ctx.r31.u32 + 15828, ctx.r29.u32);
loc_881586D8:
	// lwz r4,22124(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 22124);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881586f0
	if (ctx.cr6.eq) goto loc_881586F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x881586EC;
	sub_8815E528(ctx, base);
	// stw r29,22124(r31)
	REX_STORE_U32(ctx.r31.u32 + 22124, ctx.r29.u32);
loc_881586F0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88176D18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// stb r7,-16(r1)
	REX_STORE_U8(ctx.r1.u32 + -16, ctx.r7.u8);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// srawi. r10,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r9,r6,28
	ctx.r9.u64 = ctx.r6.u32 & 0xF;
	// lvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltb v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_set1_epi8(char(0xF))));
	// ble 0x88176d60
	if (!ctx.cr0.gt) goto loc_88176D60;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88176D3C:
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lvx128 v12,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// vaddubs v11,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_adds_epu8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddubs v10,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_adds_epu8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v10,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bdnz 0x88176d3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88176D3C;
loc_88176D60:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// subf r8,r11,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r11.u64;
	// subf r6,r11,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r11.u64;
loc_88176D74:
	// lbzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x88176d90
	if (!ctx.cr6.gt) goto loc_88176D90;
	// li r10,255
	ctx.r10.s64 = 255;
loc_88176D90:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stbx r10,r6,r11
	REX_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x88176d74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88176D74;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88177CF0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88177CF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// ble cr6,0x88177f7c
	if (!ctx.cr6.gt) goto loc_88177F7C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x88177f7c
	if (!ctx.cr6.gt) goto loc_88177F7C;
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177d48
	if (ctx.cr6.eq) goto loc_88177D48;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x88177d60
	if (!ctx.cr6.lt) goto loc_88177D60;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177d48
	if (ctx.cr6.eq) goto loc_88177D48;
	// bl 0x8815ba70
	ctx.lr = 0x88177D44;
	sub_8815BA70(ctx, base);
	// stw r29,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
loc_88177D48:
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8815b9f8
	ctx.lr = 0x88177D54;
	sub_8815B9F8(ctx, base);
	// stw r3,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177ee0
	if (ctx.cr6.eq) goto loc_88177EE0;
loc_88177D60:
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177d88
	if (ctx.cr6.eq) goto loc_88177D88;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x88177da0
	if (!ctx.cr6.lt) goto loc_88177DA0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177d88
	if (ctx.cr6.eq) goto loc_88177D88;
	// bl 0x8815ba70
	ctx.lr = 0x88177D84;
	sub_8815BA70(ctx, base);
	// stw r29,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
loc_88177D88:
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8815b9f8
	ctx.lr = 0x88177D94;
	sub_8815B9F8(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177ee0
	if (ctx.cr6.eq) goto loc_88177EE0;
loc_88177DA0:
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177dc8
	if (ctx.cr6.eq) goto loc_88177DC8;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x88177de0
	if (!ctx.cr6.lt) goto loc_88177DE0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177dc8
	if (ctx.cr6.eq) goto loc_88177DC8;
	// bl 0x8815ba70
	ctx.lr = 0x88177DC4;
	sub_8815BA70(ctx, base);
	// stw r29,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
loc_88177DC8:
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8815b9f8
	ctx.lr = 0x88177DD4;
	sub_8815B9F8(ctx, base);
	// stw r3,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177ee0
	if (ctx.cr6.eq) goto loc_88177EE0;
loc_88177DE0:
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177e08
	if (ctx.cr6.eq) goto loc_88177E08;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x88177e20
	if (!ctx.cr6.lt) goto loc_88177E20;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177e08
	if (ctx.cr6.eq) goto loc_88177E08;
	// bl 0x8815ba70
	ctx.lr = 0x88177E04;
	sub_8815BA70(ctx, base);
	// stw r29,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
loc_88177E08:
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8815b9f8
	ctx.lr = 0x88177E14;
	sub_8815B9F8(ctx, base);
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177ee0
	if (ctx.cr6.eq) goto loc_88177EE0;
loc_88177E20:
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177e48
	if (ctx.cr6.eq) goto loc_88177E48;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x88177e60
	if (!ctx.cr6.lt) goto loc_88177E60;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177e48
	if (ctx.cr6.eq) goto loc_88177E48;
	// bl 0x8815ba70
	ctx.lr = 0x88177E44;
	sub_8815BA70(ctx, base);
	// stw r29,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
loc_88177E48:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8815b9f8
	ctx.lr = 0x88177E54;
	sub_8815B9F8(ctx, base);
	// stw r3,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177ee0
	if (ctx.cr6.eq) goto loc_88177EE0;
loc_88177E60:
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177e88
	if (ctx.cr6.eq) goto loc_88177E88;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x88177ea0
	if (!ctx.cr6.lt) goto loc_88177EA0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177e88
	if (ctx.cr6.eq) goto loc_88177E88;
	// bl 0x8815ba70
	ctx.lr = 0x88177E84;
	sub_8815BA70(ctx, base);
	// stw r29,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
loc_88177E88:
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8815b9f8
	ctx.lr = 0x88177E94;
	sub_8815B9F8(ctx, base);
	// stw r3,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177ee0
	if (ctx.cr6.eq) goto loc_88177EE0;
loc_88177EA0:
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177ec8
	if (ctx.cr6.eq) goto loc_88177EC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x88177f70
	if (!ctx.cr6.lt) goto loc_88177F70;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177ec8
	if (ctx.cr6.eq) goto loc_88177EC8;
	// bl 0x8815ba70
	ctx.lr = 0x88177EC4;
	sub_8815BA70(ctx, base);
	// stw r29,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
loc_88177EC8:
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8815b9f8
	ctx.lr = 0x88177ED4;
	sub_8815B9F8(ctx, base);
	// stw r3,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88177f70
	if (!ctx.cr6.eq) goto loc_88177F70;
loc_88177EE0:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r27,-9
	ctx.r27.s64 = -9;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177ef8
	if (ctx.cr6.eq) goto loc_88177EF8;
	// bl 0x8815ba70
	ctx.lr = 0x88177EF4;
	sub_8815BA70(ctx, base);
	// stw r29,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
loc_88177EF8:
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177f0c
	if (ctx.cr6.eq) goto loc_88177F0C;
	// bl 0x8815ba70
	ctx.lr = 0x88177F08;
	sub_8815BA70(ctx, base);
	// stw r29,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
loc_88177F0C:
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177f20
	if (ctx.cr6.eq) goto loc_88177F20;
	// bl 0x8815ba70
	ctx.lr = 0x88177F1C;
	sub_8815BA70(ctx, base);
	// stw r29,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
loc_88177F20:
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177f34
	if (ctx.cr6.eq) goto loc_88177F34;
	// bl 0x8815ba70
	ctx.lr = 0x88177F30;
	sub_8815BA70(ctx, base);
	// stw r29,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
loc_88177F34:
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177f48
	if (ctx.cr6.eq) goto loc_88177F48;
	// bl 0x8815ba70
	ctx.lr = 0x88177F44;
	sub_8815BA70(ctx, base);
	// stw r29,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
loc_88177F48:
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177f5c
	if (ctx.cr6.eq) goto loc_88177F5C;
	// bl 0x8815ba70
	ctx.lr = 0x88177F58;
	sub_8815BA70(ctx, base);
	// stw r29,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
loc_88177F5C:
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177f70
	if (ctx.cr6.eq) goto loc_88177F70;
	// bl 0x8815ba70
	ctx.lr = 0x88177F6C;
	sub_8815BA70(ctx, base);
	// stw r29,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
loc_88177F70:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_88177F7C:
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8817A068) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f0,6732(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6732);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// ble cr6,0x8817a308
	if (!ctx.cr6.gt) goto loc_8817A308;
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// ble cr6,0x8817a308
	if (!ctx.cr6.gt) goto loc_8817A308;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lis r7,-30719
	ctx.r7.s64 = -2013200384;
	// std r8,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f12,12088(r10)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r10.u32 + 12088);
	// fadd f11,f1,f12
	ctx.f11.f64 = ctx.f1.f64 + ctx.f12.f64;
	// lfs f0,6728(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6728);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f4,f0
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f0,7000(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 7000);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f3,f0
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fctiwz f8,f11
	ctx.f8.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f8,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// lwz r6,-12(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f7,-16(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// fcfid f5,f13
	ctx.f5.f64 = double(ctx.f13.s64);
	// fsubs f0,f2,f10
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// fneg f4,f10
	ctx.f4.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// frsp f3,f6
	ctx.f3.f64 = double(float(ctx.f6.f64));
	// frsp f13,f5
	ctx.f13.f64 = double(float(ctx.f5.f64));
	// fsubs f11,f2,f4
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// fadds f10,f3,f9
	ctx.f10.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8817a0f8
	if (!ctx.cr6.gt) goto loc_8817A0F8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8817A0F8:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r5,-12(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x8817a164
	if (ctx.cr6.lt) goto loc_8817A164;
	// fadd f0,f10,f12
	ctx.f0.f64 = ctx.f10.f64 + ctx.f12.f64;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// li r10,0
	ctx.r10.s64 = 0;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8817A128:
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
	// blt cr6,0x8817a128
	if (ctx.cr6.lt) goto loc_8817A128;
loc_8817A164:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8817a19c
	if (!ctx.cr6.lt) goto loc_8817A19C;
	// fadd f0,f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64 + ctx.f12.f64;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8817A18C:
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stwx r9,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8817a18c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8817A18C;
loc_8817A19C:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bgt cr6,0x8817a1c0
	if (ctx.cr6.gt) goto loc_8817A1C0;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_8817A1C0:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8817a1f8
	if (!ctx.cr6.lt) goto loc_8817A1F8;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8817A1E4:
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8817a1e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8817A1E4;
loc_8817A1F8:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8817a234
	if (!ctx.cr6.lt) goto loc_8817A234;
	// fadd f0,f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64 + ctx.f12.f64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r8,-12(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8817A218:
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8817a218
	if (ctx.cr6.lt) goto loc_8817A218;
loc_8817A234:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8817a270
	if (!ctx.cr6.gt) goto loc_8817A270;
	// fadd f0,f1,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 + ctx.f12.f64;
	// li r11,0
	ctx.r11.s64 = 0;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r8,-12(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8817A254:
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r8,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8817a254
	if (ctx.cr6.lt) goto loc_8817A254;
loc_8817A270:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8817a398
	if (!ctx.cr6.gt) goto loc_8817A398;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,12180(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12180);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
loc_8817A28C:
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,28(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fadd f8,f9,f12
	ctx.f8.f64 = ctx.f9.f64 + ctx.f12.f64;
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f7,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.f7.u32);
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwzx r10,r5,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwz r4,32(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r8.u64);
	// lfd f6,-8(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fsubs f3,f0,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f4.f64));
	// fadd f2,f3,f12
	ctx.f2.f64 = ctx.f3.f64 + ctx.f12.f64;
	// fctiwz f1,f2
	ctx.f1.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfiwx f1,r4,r11
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.f1.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8817a28c
	if (ctx.cr6.lt) goto loc_8817A28C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8817A308:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8817a398
	if (!ctx.cr6.gt) goto loc_8817A398;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,6708(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6708);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// lfd f0,12088(r8)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 12088);
	// fadds f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// fadd f10,f1,f0
	ctx.f10.f64 = ctx.f1.f64 + ctx.f0.f64;
	// fadd f9,f12,f0
	ctx.f9.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fadd f8,f11,f0
	ctx.f8.f64 = ctx.f11.f64 + ctx.f0.f64;
	// fctiwz f7,f10
	ctx.f7.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f7,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f7.u64);
	// lwz r9,-4(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// fctiwz f6,f9
	ctx.f6.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f6,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f6.u64);
	// fctiwz f5,f8
	ctx.f5.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f5,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f5.u64);
	// lwz r7,-4(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// lwz r8,-12(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8817A364:
	// lwz r6,20(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r7,r6,r11
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stwx r9,r5,r11
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r4,28(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// stwx r8,r4,r11
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r6,32(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// stwx r9,r6,r11
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r5,4(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8817a364
	if (ctx.cr6.lt) goto loc_8817A364;
loc_8817A398:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88182300) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88182308;
	__savegprlr_27(ctx, base);
	// stwu r1,-1664(r1)
	ea = -1664 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x881fdb50
	ctx.lr = 0x88182314;
	sub_881FDB50(ctx, base);
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lhz r10,16036(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 16036);
	// addi r27,r31,22432
	ctx.r27.s64 = ctx.r31.s64 + 22432;
	// rlwinm r30,r10,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,24352(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24352);
	// bl 0x881fc868
	ctx.lr = 0x88182330;
	sub_881FC868(ctx, base);
	// addi r28,r31,17392
	ctx.r28.s64 = ctx.r31.s64 + 17392;
	// addi r29,r31,15984
	ctx.r29.s64 = ctx.r31.s64 + 15984;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881fdc38
	ctx.lr = 0x88182354;
	sub_881FDC38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88182460
	if (!ctx.cr6.eq) goto loc_88182460;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x882418e0
	ctx.lr = 0x88182378;
	sub_882418E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88182460
	if (!ctx.cr6.eq) goto loc_88182460;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88215bc0
	ctx.lr = 0x8818239C;
	sub_88215BC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88182460
	if (!ctx.cr6.eq) goto loc_88182460;
	// lwz r11,3948(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88182410
	if (ctx.cr6.eq) goto loc_88182410;
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x881823d8
	if (!ctx.cr6.eq) goto loc_881823D8;
	// bl 0x8817fd58
	ctx.lr = 0x881823D4;
	sub_8817FD58(ctx, base);
	// b 0x881823dc
	goto loc_881823DC;
loc_881823D8:
	// bl 0x881803d8
	ctx.lr = 0x881823DC;
	sub_881803D8(ctx, base);
loc_881823DC:
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r7,3784(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,3780(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,3776(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r5,220(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// bl 0x8817ea48
	ctx.lr = 0x88182410;
	sub_8817EA48(ctx, base);
loc_88182410:
	// lwz r11,3948(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88182438
	if (!ctx.cr6.eq) goto loc_88182438;
	// lwz r11,14888(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88182438
	if (!ctx.cr6.eq) goto loc_88182438;
	// lwz r11,15260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15260);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8818243c
	if (ctx.cr6.eq) goto loc_8818243C;
loc_88182438:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8818243C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,15624(r31)
	REX_STORE_U32(ctx.r31.u32 + 15624, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,15628(r31)
	REX_STORE_U32(ctx.r31.u32 + 15628, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,15600(r31)
	REX_STORE_U32(ctx.r31.u32 + 15600, ctx.r9.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881fcbb0
	ctx.lr = 0x8818245C;
	sub_881FCBB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_88182460:
	// addi r1,r1,1664
	ctx.r1.s64 = ctx.r1.s64 + 1664;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88183890) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88183898;
	__savegprlr_28(ctx, base);
	// rlwinm r9,r6,2,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x8;
	// clrlwi r10,r6,31
	ctx.r10.u64 = ctx.r6.u32 & 0x1;
	// li r11,4
	ctx.r11.s64 = 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// add r31,r9,r3
	ctx.r31.u64 = ctx.r9.u64 + ctx.r3.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_881838C0:
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,12(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r3,8(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwzu r9,16(r10)
	ea = 16 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// add r30,r7,r8
	ctx.r30.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mulli r5,r3,1892
	ctx.r5.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(1892));
	// mulli r6,r9,784
	ctx.r6.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(784));
	// subf r7,r7,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r7.u64;
	// mulli r3,r3,784
	ctx.r3.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(784));
	// mulli r29,r9,1892
	ctx.r29.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(1892));
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mulli r8,r30,1448
	ctx.r8.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(1448));
	// subf r6,r29,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r29.u64;
	// mulli r7,r7,1448
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1448));
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 + ctx.r7.u64;
	// subf r7,r6,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r6.u64;
	// addi r6,r5,64
	ctx.r6.s64 = ctx.r5.s64 + 64;
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// addi r5,r3,64
	ctx.r5.s64 = ctx.r3.s64 + 64;
	// addi r3,r7,64
	ctx.r3.s64 = ctx.r7.s64 + 64;
	// srawi r8,r6,7
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 7;
	// addi r7,r9,64
	ctx.r7.s64 = ctx.r9.s64 + 64;
	// srawi r6,r5,7
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7F) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 7;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// srawi r5,r3,7
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 7;
	// srawi r3,r7,7
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 7;
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r5,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stw r3,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// bdnz 0x881838c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881838C0;
	// add r11,r4,r31
	ctx.r11.u64 = ctx.r4.u64 + ctx.r31.u64;
	// li r9,4
	ctx.r9.s64 = 4;
	// add r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 + ctx.r11.u64;
	// subf r5,r11,r31
	ctx.r5.u64 = ctx.r31.u64 - ctx.r11.u64;
	// add r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 + ctx.r10.u64;
	// subf r4,r11,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// subf r3,r11,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r11.u64;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
loc_88183968:
	// lwzx r9,r4,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r8,r5,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwzx r30,r3,r11
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// mulli r7,r6,1892
	ctx.r7.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1892));
	// add r29,r9,r8
	ctx.r29.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulli r31,r30,784
	ctx.r31.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(784));
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// mulli r28,r6,784
	ctx.r28.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(784));
	// mulli r30,r30,1892
	ctx.r30.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(1892));
	// add r9,r7,r31
	ctx.r9.u64 = ctx.r7.u64 + ctx.r31.u64;
	// mulli r7,r8,1448
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(1448));
	// mulli r6,r29,1448
	ctx.r6.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(1448));
	// subf r8,r30,r28
	ctx.r8.u64 = ctx.r28.u64 - ctx.r30.u64;
	// add r31,r9,r6
	ctx.r31.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r30,r8,r7
	ctx.r30.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r8,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r8.u64;
	// add r8,r31,r10
	ctx.r8.u64 = ctx.r31.u64 + ctx.r10.u64;
	// subf r6,r9,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r9.u64;
	// srawi r8,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// add r9,r30,r10
	ctx.r9.u64 = ctx.r30.u64 + ctx.r10.u64;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stwx r8,r5,r11
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r8.u32);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// srawi r9,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 16;
	// srawi r8,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 16;
	// srawi r7,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 16;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stwx r8,r4,r11
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r8.u32);
	// stwx r7,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x88183968
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88183968;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88185A60) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x88185A68;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x88185a98
	if (!ctx.cr6.eq) goto loc_88185A98;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x88185bc4
	goto loc_88185BC4;
loc_88185A98:
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
	// blt cr6,0x88185b84
	if (ctx.cr6.lt) goto loc_88185B84;
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
	// bge cr6,0x88185b7c
	if (!ctx.cr6.lt) goto loc_88185B7C;
loc_88185AE4:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x88185b10
	if (ctx.cr6.lt) goto loc_88185B10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x88185B00;
	sub_88156440(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x88185ae4
	if (ctx.cr6.eq) goto loc_88185AE4;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x88185bc4
	goto loc_88185BC4;
loc_88185B10:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
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
loc_88185B7C:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x88185bc4
	goto loc_88185BC4;
loc_88185B84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x88185B8C;
	sub_88156500(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,32768
	ctx.r29.u64 = ctx.r11.u64 | 32768;
loc_88185B94:
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
	ctx.lr = 0x88185BAC;
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
	// blt cr6,0x88185b94
	if (ctx.cr6.lt) goto loc_88185B94;
loc_88185BC4:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// lwz r10,0(r20)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// cmpwi cr6,r11,38
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 38, ctx.xer);
	// blt cr6,0x88185be0
	if (ctx.cr6.lt) goto loc_88185BE0;
	// addi r11,r11,-38
	ctx.r11.s64 = ctx.r11.s64 + -38;
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// b 0x88185be4
	goto loc_88185BE4;
loc_88185BE0:
	// rlwinm r9,r10,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
loc_88185BE4:
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r20)
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r10,0(r20)
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8818675c
	if (ctx.cr6.eq) goto loc_8818675C;
	// cmpwi cr6,r11,36
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 36, ctx.xer);
	// beq cr6,0x88186584
	if (ctx.cr6.eq) goto loc_88186584;
	// cmpwi cr6,r11,37
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 37, ctx.xer);
	// beq cr6,0x88186568
	if (ctx.cr6.eq) goto loc_88186568;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwz r9,1976(r24)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 1976);
	// lis r8,10922
	ctx.r8.s64 = 715784192;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// ori r6,r8,43691
	ctx.r6.u64 = ctx.r8.u64 | 43691;
	// and r25,r7,r11
	ctx.r25.u64 = ctx.r7.u64 & ctx.r11.u64;
	// lwz r5,76(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 76);
	// li r23,1
	ctx.r23.s64 = 1;
	// mulhw r11,r25,r6
	ctx.r11.s64 = (int64_t(ctx.r25.s32) * int64_t(ctx.r6.s32)) >> 32;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r26,r3,r25
	ctx.r26.u64 = ctx.r25.u64 - ctx.r3.u64;
	// beq cr6,0x88185c60
	if (ctx.cr6.eq) goto loc_88185C60;
	// cmpwi cr6,r26,5
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 5, ctx.xer);
	// bne cr6,0x88185c60
	if (!ctx.cr6.eq) goto loc_88185C60;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// b 0x88185c6c
	goto loc_88185C6C;
loc_88185C60:
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// ble cr6,0x88185fb0
	if (!ctx.cr6.gt) goto loc_88185FB0;
loc_88185C6C:
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lwz r31,84(r24)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r24.u32 + 84);
	// addi r10,r26,-2
	ctx.r10.s64 = ctx.r26.s64 + -2;
	// addi r22,r11,24560
	ctx.r22.s64 = ctx.r11.s64 + 24560;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r22,272
	ctx.r7.s64 = ctx.r22.s64 + 272;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// lwzx r6,r8,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// subf r27,r9,r6
	ctx.r27.u64 = ctx.r6.u64 - ctx.r9.u64;
	// bge cr6,0x88185cfc
	if (!ctx.cr6.lt) goto loc_88185CFC;
loc_88185CA4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88185cfc
	if (ctx.cr6.eq) goto loc_88185CFC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88185cec
	if (!ctx.cr0.lt) goto loc_88185CEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88185CEC;
	sub_88156678(ctx, base);
loc_88185CEC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88185ca4
	if (ctx.cr6.gt) goto loc_88185CA4;
loc_88185CFC:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88185d34
	if (!ctx.cr0.lt) goto loc_88185D34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88185D34;
	sub_88156678(ctx, base);
loc_88185D34:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88185d44
	if (ctx.cr6.eq) goto loc_88185D44;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// b 0x88185eb8
	goto loc_88185EB8;
loc_88185D44:
	// lwz r31,84(r24)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r24.u32 + 84);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88185db8
	if (!ctx.cr6.lt) goto loc_88185DB8;
loc_88185D60:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88185db8
	if (ctx.cr6.eq) goto loc_88185DB8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88185da8
	if (!ctx.cr0.lt) goto loc_88185DA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88185DA8;
	sub_88156678(ctx, base);
loc_88185DA8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88185d60
	if (ctx.cr6.gt) goto loc_88185D60;
loc_88185DB8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88185df0
	if (!ctx.cr0.lt) goto loc_88185DF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88185DF0;
	sub_88156678(ctx, base);
loc_88185DF0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88185e00
	if (ctx.cr6.eq) goto loc_88185E00;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// b 0x88185eb8
	goto loc_88185EB8;
loc_88185E00:
	// lwz r31,84(r24)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r24.u32 + 84);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88185e74
	if (!ctx.cr6.lt) goto loc_88185E74;
loc_88185E1C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88185e74
	if (ctx.cr6.eq) goto loc_88185E74;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88185e64
	if (!ctx.cr0.lt) goto loc_88185E64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88185E64;
	sub_88156678(ctx, base);
loc_88185E64:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88185e1c
	if (ctx.cr6.gt) goto loc_88185E1C;
loc_88185E74:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88185eac
	if (!ctx.cr0.lt) goto loc_88185EAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88185EAC;
	sub_88156678(ctx, base);
loc_88185EAC:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r28,r11,2
	ctx.r28.s64 = ctx.r11.s64 + 2;
loc_88185EB8:
	// lwz r31,84(r24)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r24.u32 + 84);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// cmplwi cr6,r27,32
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 32, ctx.xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x88185ee8
	if (!ctx.cr6.gt) goto loc_88185EE8;
	// slw r10,r23,r27
	ctx.r10.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r27.u8 & 0x3F));
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8818608c
	goto loc_8818608C;
loc_88185EE8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x88185f04
	if (!ctx.cr6.eq) goto loc_88185F04;
	// slw r10,r23,r27
	ctx.r10.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r27.u8 & 0x3F));
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8818608c
	goto loc_8818608C;
loc_88185F04:
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x88185f64
	if (!ctx.cr6.gt) goto loc_88185F64;
loc_88185F0C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88185f64
	if (ctx.cr6.eq) goto loc_88185F64;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88185f54
	if (!ctx.cr0.lt) goto loc_88185F54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88185F54;
	sub_88156678(ctx, base);
loc_88185F54:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88185f0c
	if (ctx.cr6.gt) goto loc_88185F0C;
loc_88185F64:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88185f9c
	if (!ctx.cr0.lt) goto loc_88185F9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88185F9C;
	sub_88156678(ctx, base);
loc_88185F9C:
	// slw r10,r23,r27
	ctx.r10.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r27.u8 & 0x3F));
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8818608c
	goto loc_8818608C;
loc_88185FB0:
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lwz r30,84(r24)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r24.u32 + 84);
	// rlwinm r9,r26,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r22,r11,24560
	ctx.r22.s64 = ctx.r11.s64 + 24560;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwzx r31,r9,r22
	ctx.r31.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r22.u32);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// ble cr6,0x88185fe0
	if (!ctx.cr6.gt) goto loc_88185FE0;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x8818608c
	goto loc_8818608C;
loc_88185FE0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x88185ff0
	if (!ctx.cr6.eq) goto loc_88185FF0;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x8818608c
	goto loc_8818608C;
loc_88185FF0:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x88186050
	if (!ctx.cr6.gt) goto loc_88186050;
loc_88185FF8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88186050
	if (ctx.cr6.eq) goto loc_88186050;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r31,r11,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r31.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// bge 0x88186040
	if (!ctx.cr0.lt) goto loc_88186040;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x88186040;
	sub_88156678(ctx, base);
loc_88186040:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88185ff8
	if (ctx.cr6.gt) goto loc_88185FF8;
loc_88186050:
	// subfic r11,r31,64
	ctx.xer.ca = ctx.r31.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r31.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// clrldi r8,r31,32
	ctx.r8.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r31,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r4.u64);
	// bge 0x88186088
	if (!ctx.cr0.lt) goto loc_88186088;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x88186088;
	sub_88156678(ctx, base);
loc_88186088:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8818608C:
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r22,24
	ctx.r9.s64 = ctx.r22.s64 + 24;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// neg r7,r8
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// li r6,6
	ctx.r6.s64 = 6;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// divw r26,r25,r6
	ctx.r26.u64 = uint32_t((ctx.r6.s32 && !(ctx.r25.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r25.s32 / ctx.r6.s32 : 0);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// xor r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r7.u64;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// sth r4,0(r20)
	REX_STORE_U16(ctx.r20.u32 + 0, ctx.r4.u16);
	// subf r9,r7,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r7.u64;
	// sth r9,0(r20)
	REX_STORE_U16(ctx.r20.u32 + 0, ctx.r9.u16);
	// lwz r7,1976(r24)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r24.u32 + 1976);
	// lwz r6,76(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 76);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x881860e0
	if (ctx.cr6.eq) goto loc_881860E0;
	// cmpwi cr6,r26,5
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 5, ctx.xer);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// beq cr6,0x881860e4
	if (ctx.cr6.eq) goto loc_881860E4;
loc_881860E0:
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
loc_881860E4:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// ble cr6,0x88186438
	if (!ctx.cr6.gt) goto loc_88186438;
	// addi r10,r26,-2
	ctx.r10.s64 = ctx.r26.s64 + -2;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bge cr6,0x88186518
	if (!ctx.cr6.lt) goto loc_88186518;
	// lwz r31,84(r24)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r24.u32 + 84);
	// addi r11,r26,-2
	ctx.r11.s64 = ctx.r26.s64 + -2;
	// addi r8,r22,272
	ctx.r8.s64 = ctx.r22.s64 + 272;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r6,r7,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// subf r27,r9,r6
	ctx.r27.u64 = ctx.r6.u64 - ctx.r9.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88186184
	if (!ctx.cr6.lt) goto loc_88186184;
loc_8818612C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88186184
	if (ctx.cr6.eq) goto loc_88186184;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88186174
	if (!ctx.cr0.lt) goto loc_88186174;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88186174;
	sub_88156678(ctx, base);
loc_88186174:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818612c
	if (ctx.cr6.gt) goto loc_8818612C;
loc_88186184:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881861bc
	if (!ctx.cr0.lt) goto loc_881861BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881861BC;
	sub_88156678(ctx, base);
loc_881861BC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881861cc
	if (ctx.cr6.eq) goto loc_881861CC;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// b 0x88186340
	goto loc_88186340;
loc_881861CC:
	// lwz r31,84(r24)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r24.u32 + 84);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88186240
	if (!ctx.cr6.lt) goto loc_88186240;
loc_881861E8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88186240
	if (ctx.cr6.eq) goto loc_88186240;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88186230
	if (!ctx.cr0.lt) goto loc_88186230;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88186230;
	sub_88156678(ctx, base);
loc_88186230:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881861e8
	if (ctx.cr6.gt) goto loc_881861E8;
loc_88186240:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88186278
	if (!ctx.cr0.lt) goto loc_88186278;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88186278;
	sub_88156678(ctx, base);
loc_88186278:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88186288
	if (ctx.cr6.eq) goto loc_88186288;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// b 0x88186340
	goto loc_88186340;
loc_88186288:
	// lwz r31,84(r24)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r24.u32 + 84);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881862fc
	if (!ctx.cr6.lt) goto loc_881862FC;
loc_881862A4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881862fc
	if (ctx.cr6.eq) goto loc_881862FC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881862ec
	if (!ctx.cr0.lt) goto loc_881862EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881862EC;
	sub_88156678(ctx, base);
loc_881862EC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881862a4
	if (ctx.cr6.gt) goto loc_881862A4;
loc_881862FC:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88186334
	if (!ctx.cr0.lt) goto loc_88186334;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88186334;
	sub_88156678(ctx, base);
loc_88186334:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r28,r11,2
	ctx.r28.s64 = ctx.r11.s64 + 2;
loc_88186340:
	// lwz r31,84(r24)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r24.u32 + 84);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// cmplwi cr6,r27,32
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 32, ctx.xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x88186370
	if (!ctx.cr6.gt) goto loc_88186370;
	// slw r10,r23,r27
	ctx.r10.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r27.u8 & 0x3F));
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x88186518
	goto loc_88186518;
loc_88186370:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8818638c
	if (!ctx.cr6.eq) goto loc_8818638C;
	// slw r10,r23,r27
	ctx.r10.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r27.u8 & 0x3F));
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x88186518
	goto loc_88186518;
loc_8818638C:
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881863ec
	if (!ctx.cr6.gt) goto loc_881863EC;
loc_88186394:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881863ec
	if (ctx.cr6.eq) goto loc_881863EC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881863dc
	if (!ctx.cr0.lt) goto loc_881863DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881863DC;
	sub_88156678(ctx, base);
loc_881863DC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88186394
	if (ctx.cr6.gt) goto loc_88186394;
loc_881863EC:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88186424
	if (!ctx.cr0.lt) goto loc_88186424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88186424;
	sub_88156678(ctx, base);
loc_88186424:
	// slw r10,r23,r27
	ctx.r10.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r27.u8 & 0x3F));
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x88186518
	goto loc_88186518;
loc_88186438:
	// cmplwi cr6,r26,6
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 6, ctx.xer);
	// bge cr6,0x88186768
	if (!ctx.cr6.lt) goto loc_88186768;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,84(r24)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r24.u32 + 84);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// lwzx r8,r11,r22
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// subf r31,r9,r8
	ctx.r31.u64 = ctx.r8.u64 - ctx.r9.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// ble cr6,0x8818646c
	if (!ctx.cr6.gt) goto loc_8818646C;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x88186518
	goto loc_88186518;
loc_8818646C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8818647c
	if (!ctx.cr6.eq) goto loc_8818647C;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x88186518
	goto loc_88186518;
loc_8818647C:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881864dc
	if (!ctx.cr6.gt) goto loc_881864DC;
loc_88186484:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881864dc
	if (ctx.cr6.eq) goto loc_881864DC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r31,r11,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r31.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// bge 0x881864cc
	if (!ctx.cr0.lt) goto loc_881864CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881864CC;
	sub_88156678(ctx, base);
loc_881864CC:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88186484
	if (ctx.cr6.gt) goto loc_88186484;
loc_881864DC:
	// subfic r11,r31,64
	ctx.xer.ca = ctx.r31.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r31.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// clrldi r8,r31,32
	ctx.r8.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r31,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r4.u64);
	// bge 0x88186514
	if (!ctx.cr0.lt) goto loc_88186514;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x88186514;
	sub_88156678(ctx, base);
loc_88186514:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_88186518:
	// cmplwi cr6,r26,6
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 6, ctx.xer);
	// bge cr6,0x88186768
	if (!ctx.cr6.lt) goto loc_88186768;
	// addi r10,r22,24
	ctx.r10.s64 = ctx.r22.s64 + 24;
	// lwz r9,0(r20)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// rlwinm r8,r26,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// neg r6,r7
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// lwzx r5,r8,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm r4,r6,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r3,r6,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// xor r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	// rlwimi r8,r9,0,28,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF000F) | (ctx.r8.u64 & 0xFFF0);
	// subf r7,r3,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r3.u64;
	// rlwimi r7,r8,0,28,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFF000F) | (ctx.r7.u64 & 0xFFF0);
	// stw r7,0(r20)
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r7.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_88186568:
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r10,r11,2,29,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// rlwimi r10,r11,2,16,27
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFF0) | (ctx.r10.u64 & 0xFFFFFFFFFFFF000F);
	// stw r10,0(r20)
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r10.u32);
	// sth r21,0(r20)
	REX_STORE_U16(ctx.r20.u32 + 0, ctx.r21.u16);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_88186584:
	// lwz r11,1976(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 1976);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// lwz r30,84(r24)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r24.u32 + 84);
	// lwz r9,412(r24)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 412);
	// lwz r8,76(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// subf r31,r8,r9
	ctx.r31.u64 = ctx.r9.u64 - ctx.r8.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// ble cr6,0x881865b4
	if (!ctx.cr6.gt) goto loc_881865B4;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x88186660
	goto loc_88186660;
loc_881865B4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x881865c4
	if (!ctx.cr6.eq) goto loc_881865C4;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x88186660
	goto loc_88186660;
loc_881865C4:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x88186624
	if (!ctx.cr6.gt) goto loc_88186624;
loc_881865CC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88186624
	if (ctx.cr6.eq) goto loc_88186624;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r31,r11,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r31.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// bge 0x88186614
	if (!ctx.cr0.lt) goto loc_88186614;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x88186614;
	sub_88156678(ctx, base);
loc_88186614:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881865cc
	if (ctx.cr6.gt) goto loc_881865CC;
loc_88186624:
	// subfic r11,r31,64
	ctx.xer.ca = ctx.r31.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r31.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// clrldi r8,r31,32
	ctx.r8.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r31,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r4.u64);
	// bge 0x8818665c
	if (!ctx.cr0.lt) goto loc_8818665C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x8818665C;
	sub_88156678(ctx, base);
loc_8818665C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_88186660:
	// sth r11,0(r20)
	REX_STORE_U16(ctx.r20.u32 + 0, ctx.r11.u16);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// lwz r30,84(r24)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r24.u32 + 84);
	// lwz r9,1976(r24)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 1976);
	// lwz r8,416(r24)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r24.u32 + 416);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r7,76(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 76);
	// subf r31,r7,r8
	ctx.r31.u64 = ctx.r8.u64 - ctx.r7.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// ble cr6,0x881866a4
	if (!ctx.cr6.gt) goto loc_881866A4;
loc_8818668C:
	// lwz r10,0(r20)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// rlwimi r10,r21,4,16,27
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 4) & 0xFFF0) | (ctx.r10.u64 & 0xFFFFFFFFFFFF000F);
	// stw r10,0(r20)
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_881866A4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8818668c
	if (ctx.cr6.eq) goto loc_8818668C;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8818670c
	if (!ctx.cr6.gt) goto loc_8818670C;
loc_881866B4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818670c
	if (ctx.cr6.eq) goto loc_8818670C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r31,r11,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r31.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// bge 0x881866fc
	if (!ctx.cr0.lt) goto loc_881866FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881866FC;
	sub_88156678(ctx, base);
loc_881866FC:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881866b4
	if (ctx.cr6.gt) goto loc_881866B4;
loc_8818670C:
	// subfic r11,r31,64
	ctx.xer.ca = ctx.r31.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r31.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// clrldi r8,r31,32
	ctx.r8.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r31,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r4.u64);
	// bge 0x88186744
	if (!ctx.cr0.lt) goto loc_88186744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x88186744;
	sub_88156678(ctx, base);
loc_88186744:
	// lwz r10,0(r20)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// rlwimi r10,r31,4,16,27
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFF0) | (ctx.r10.u64 & 0xFFFFFFFFFFFF000F);
	// stw r10,0(r20)
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_8818675C:
	// rlwinm r11,r10,0,28,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF000F;
	// stw r11,0(r20)
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
	// sth r21,0(r20)
	REX_STORE_U16(ctx.r20.u32 + 0, ctx.r21.u16);
loc_88186768:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881A5DC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x881A5DC8;
	__savegprlr_23(ctx, base);
	// srawi. r11,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x881a5f3c
	if (!ctx.cr0.gt) goto loc_881A5F3C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// rlwinm r25,r4,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r26,r11,26744
	ctx.r26.s64 = ctx.r11.s64 + 26744;
loc_881A5DE0:
	// add r3,r25,r3
	ctx.r3.u64 = ctx.r25.u64 + ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
loc_881A5DE8:
	// lbz r6,4(r3)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// lbz r31,5(r3)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r3.u32 + 5);
	// lbz r11,3(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 3);
	// subf r10,r31,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r31.u64;
	// lbz r9,6(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 6);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// addze. r28,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r28.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x881a5f0c
	if (ctx.cr0.eq) goto loc_881A5F0C;
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r8,r7,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r7.u64;
	// srawi r30,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r8.s32 >> 3;
	// srawi r7,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r30.s32 >> 31;
	// xor r10,r30,r7
	ctx.r10.u64 = ctx.r30.u64 ^ ctx.r7.u64;
	// subf r29,r7,r10
	ctx.r29.u64 = ctx.r10.u64 - ctx.r7.u64;
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x881a5f0c
	if (!ctx.cr6.lt) goto loc_881A5F0C;
	// lbz r10,2(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// lbz r8,1(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lbz r24,8(r3)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// lbz r11,7(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 7);
	// subf r7,r6,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r6.u64;
	// subf r8,r24,r31
	ctx.r8.u64 = ctx.r31.u64 - ctx.r24.u64;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r7,2
	ctx.r24.s64 = ctx.r7.s64 + 2;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r23,r8,2
	ctx.r23.s64 = ctx.r8.s64 + 2;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r24,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r10,r23,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	// srawi r10,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	// srawi r7,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 31;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// xor r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// subf r11,r7,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r7.u64;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x881a5eac
	if (!ctx.cr6.lt) goto loc_881A5EAC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_881A5EAC:
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x881a5f0c
	if (!ctx.cr6.lt) goto loc_881A5F0C;
	// xor r10,r30,r28
	ctx.r10.u64 = ctx.r30.u64 ^ ctx.r28.u64;
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x881a5f14
	if (ctx.cr6.eq) goto loc_881A5F14;
	// subf r11,r11,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// srawi r10,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 31;
	// xor r9,r28,r10
	ctx.r9.u64 = ctx.r28.u64 ^ ctx.r10.u64;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881a5eec
	if (ctx.cr6.lt) goto loc_881A5EEC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_881A5EEC:
	// cmpw cr6,r6,r31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x881a5ef8
	if (!ctx.cr6.lt) goto loc_881A5EF8;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_881A5EF8:
	// subf r10,r11,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r11.u64;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r10,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stb r9,5(r3)
	REX_STORE_U8(ctx.r3.u32 + 5, ctx.r9.u8);
	// b 0x881a5f14
	goto loc_881A5F14;
loc_881A5F0C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x881a5f34
	if (ctx.cr6.eq) goto loc_881A5F34;
loc_881A5F14:
	// lbzx r11,r27,r26
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r26.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// mullw r11,r10,r4
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blt cr6,0x881a5de8
	if (ctx.cr6.lt) goto loc_881A5DE8;
	// b 0x881a5f38
	goto loc_881A5F38;
loc_881A5F34:
	// add r3,r25,r3
	ctx.r3.u64 = ctx.r25.u64 + ctx.r3.u64;
loc_881A5F38:
	// bdnz 0x881a5de0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A5DE0;
loc_881A5F3C:
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881A9160) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881A9168;
	__savegprlr_14(ctx, base);
	// lis r25,-30678
	ctx.r25.s64 = -2010513408;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 + ctx.r8.u64;
	// lwz r24,100(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r31,r5,r8
	ctx.r31.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lwz r15,92(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,76(r1)
	REX_STORE_U32(ctx.r1.u32 + 76, ctx.r10.u32);
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// lwz r8,24536(r25)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r25.u32 + 24536);
	// li r10,0
	ctx.r10.s64 = 0;
	// subf r29,r15,r24
	ctx.r29.u64 = ctx.r24.u64 - ctx.r15.u64;
	// subf r17,r8,r11
	ctx.r17.u64 = ctx.r11.u64 - ctx.r8.u64;
	// stw r10,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r10.u32);
	// subf r21,r8,r31
	ctx.r21.u64 = ctx.r31.u64 - ctx.r8.u64;
	// addi r22,r3,-1
	ctx.r22.s64 = ctx.r3.s64 + -1;
	// addi r23,r30,-1
	ctx.r23.s64 = ctx.r30.s64 + -1;
	// mr r20,r17
	ctx.r20.u64 = ctx.r17.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r14,r24
	ctx.r14.u64 = ctx.r24.u64;
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 16, ctx.xer);
	// beq cr6,0x881a91ec
	if (ctx.cr6.eq) goto loc_881A91EC;
	// srawi r29,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r8.s32 >> 1;
	// clrlwi r30,r7,29
	ctx.r30.u64 = ctx.r7.u32 & 0x7;
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// srawi r14,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r14.s64 = ctx.r24.s32 >> 1;
	// subf r4,r24,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r24.u64;
	// subf r5,r24,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r24.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x881a91ec
	if (ctx.cr6.eq) goto loc_881A91EC;
	// subfic r30,r30,8
	ctx.xer.ca = ctx.r30.u32 <= 8;
	ctx.r30.u64 = static_cast<uint64_t>(8) - ctx.r30.u64;
	// stw r30,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r30.u32);
loc_881A91EC:
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x881a92bc
	if (!ctx.cr6.lt) goto loc_881A92BC;
	// subf r7,r6,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r6.u64;
	// subf r16,r21,r17
	ctx.r16.u64 = ctx.r17.u64 - ctx.r21.u64;
	// subf r19,r21,r11
	ctx.r19.u64 = ctx.r11.u64 - ctx.r21.u64;
	// subf r18,r21,r31
	ctx.r18.u64 = ctx.r31.u64 - ctx.r21.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_881A9208:
	// lbzx r11,r19,r3
	ctx.r11.u64 = REX_LOAD_U8(ctx.r19.u32 + ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r31,0(r23)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r23.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lbz r29,0(r22)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r22.u32 + 0);
	// rotlwi r30,r11,8
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbzx r6,r18,r3
	ctx.r6.u64 = REX_LOAD_U8(ctx.r18.u32 + ctx.r3.u32);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// rotlwi r29,r29,8
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 8);
	// rotlwi r28,r6,8
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// rotlwi r31,r31,8
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r31.u32, 8);
	// or r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 | ctx.r11.u64;
	// or r30,r29,r26
	ctx.r30.u64 = ctx.r29.u64 | ctx.r26.u64;
	// or r6,r28,r6
	ctx.r6.u64 = ctx.r28.u64 | ctx.r6.u64;
	// or r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 | ctx.r27.u64;
	// rlwinm r29,r11,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r28,r6,16,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r27,r31,16,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r26,r30,16,0,15
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF0000;
	// or r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 | ctx.r11.u64;
	// or r28,r28,r6
	ctx.r28.u64 = ctx.r28.u64 | ctx.r6.u64;
	// or r27,r27,r31
	ctx.r27.u64 = ctx.r27.u64 | ctx.r31.u64;
	// or r26,r26,r30
	ctx.r26.u64 = ctx.r26.u64 | ctx.r30.u64;
	// ble cr6,0x881a92a8
	if (!ctx.cr6.gt) goto loc_881A92A8;
	// add r8,r3,r15
	ctx.r8.u64 = ctx.r3.u64 + ctx.r15.u64;
	// subf r31,r3,r16
	ctx.r31.u64 = ctx.r16.u64 - ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r6,r3,r20
	ctx.r6.u64 = ctx.r20.u64 - ctx.r3.u64;
	// add r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 + ctx.r8.u64;
	// subf r30,r3,r8
	ctx.r30.u64 = ctx.r8.u64 - ctx.r3.u64;
loc_881A9284:
	// stwx r29,r6,r11
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r29.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stwx r27,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r27.u32);
	// stwx r26,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r26.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,24536(r25)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r25.u32 + 24536);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x881a9284
	if (ctx.cr6.lt) goto loc_881A9284;
loc_881A92A8:
	// add r20,r20,r24
	ctx.r20.u64 = ctx.r20.u64 + ctx.r24.u64;
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// add r23,r23,r24
	ctx.r23.u64 = ctx.r23.u64 + ctx.r24.u64;
	// add r22,r22,r24
	ctx.r22.u64 = ctx.r22.u64 + ctx.r24.u64;
	// bdnz 0x881a9208
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A9208;
loc_881A92BC:
	// srawi r29,r14,2
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r14.s32 >> 2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x881a9324
	if (ctx.cr6.eq) goto loc_881A9324;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881a9324
	if (!ctx.cr6.gt) goto loc_881A9324;
	// neg r30,r24
	ctx.r30.s64 = static_cast<int64_t>(-ctx.r24.u64);
	// subf r9,r4,r21
	ctx.r9.u64 = ctx.r21.u64 - ctx.r4.u64;
	// subf r31,r21,r17
	ctx.r31.u64 = ctx.r17.u64 - ctx.r21.u64;
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_881A92E8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x881a9314
	if (!ctx.cr6.gt) goto loc_881A9314;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + ctx.r31.u64;
loc_881A92FC:
	// lwzx r4,r8,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// lwzx r4,r9,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stwx r4,r5,r11
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r4.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x881a92fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A92FC;
loc_881A9314:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r6,r6,r24
	ctx.r6.u64 = ctx.r6.u64 + ctx.r24.u64;
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// bne 0x881a92e8
	if (!ctx.cr0.eq) goto loc_881A92E8;
loc_881A9324:
	// lwz r11,76(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881a9398
	if (ctx.cr6.eq) goto loc_881A9398;
	// lwz r9,-160(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// subf r8,r24,r20
	ctx.r8.u64 = ctx.r20.u64 - ctx.r24.u64;
	// subf r11,r24,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r24.u64;
	// add. r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x881a9398
	if (!ctx.cr0.gt) goto loc_881A9398;
	// neg r5,r24
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r24.u64);
	// subf r10,r20,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r20.u64;
	// subf r6,r11,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r11.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
loc_881A9354:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x881a9384
	if (!ctx.cr6.gt) goto loc_881A9384;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// add r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 + ctx.r10.u64;
	// subf r8,r20,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r20.u64;
loc_881A936C:
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r4,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r4.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x881a936c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A936C;
loc_881A9384:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r20,r20,r24
	ctx.r20.u64 = ctx.r20.u64 + ctx.r24.u64;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// bne 0x881a9354
	if (!ctx.cr0.eq) goto loc_881A9354;
loc_881A9398:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881AC2A0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x881AC2A8;
	__savegprlr_19(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,332(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// lwz r10,152(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// rlwinm r26,r11,0,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,340(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// srawi r23,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r23.s64 = ctx.r26.s32 >> 1;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// srawi r27,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r9.s32 >> 1;
	// beq cr6,0x881ac314
	if (ctx.cr6.eq) goto loc_881AC314;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// lwz r11,15948(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15948);
	// lwz r27,324(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r31,316(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r26,308(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bctrl 
	ctx.lr = 0x881AC30C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_881AC314:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x881ac390
	if (!ctx.cr6.gt) goto loc_881AC390;
	// lwz r20,324(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// subf r22,r31,r8
	ctx.r22.u64 = ctx.r8.u64 - ctx.r31.u64;
	// lwz r24,316(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// subf r21,r30,r5
	ctx.r21.u64 = ctx.r5.u64 - ctx.r30.u64;
	// lwz r19,308(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
loc_881AC330:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880547a0
	ctx.lr = 0x881AC340;
	sub_880547A0(ctx, base);
	// add r29,r29,r25
	ctx.r29.u64 = ctx.r29.u64 + ctx.r25.u64;
	// add r28,r28,r24
	ctx.r28.u64 = ctx.r28.u64 + ctx.r24.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880547a0
	ctx.lr = 0x881AC358;
	sub_880547A0(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// add r4,r22,r31
	ctx.r4.u64 = ctx.r22.u64 + ctx.r31.u64;
	// add r3,r21,r30
	ctx.r3.u64 = ctx.r21.u64 + ctx.r30.u64;
	// add r29,r29,r25
	ctx.r29.u64 = ctx.r29.u64 + ctx.r25.u64;
	// add r28,r28,r24
	ctx.r28.u64 = ctx.r28.u64 + ctx.r24.u64;
	// bl 0x880547a0
	ctx.lr = 0x881AC370;
	sub_880547A0(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880547a0
	ctx.lr = 0x881AC380;
	sub_880547A0(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r31,r31,r19
	ctx.r31.u64 = ctx.r31.u64 + ctx.r19.u64;
	// add r30,r30,r20
	ctx.r30.u64 = ctx.r30.u64 + ctx.r20.u64;
	// bne 0x881ac330
	if (!ctx.cr0.eq) goto loc_881AC330;
loc_881AC390:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881AD268) {
	REX_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stb r5,13(r11)
	REX_STORE_U8(ctx.r11.u32 + 13, ctx.r5.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881AD418) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x881AD420;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,248(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,255
	ctx.r10.s64 = ctx.r11.s64 + 255;
	// stb r10,4(r4)
	REX_STORE_U8(ctx.r4.u32 + 4, ctx.r10.u8);
	// lwz r8,452(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 452);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x881ad4d0
	if (ctx.cr6.eq) goto loc_881AD4D0;
	// lwz r11,436(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881ad498
	if (!ctx.cr6.eq) goto loc_881AD498;
	// lwz r3,84(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
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
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881ad47c
	if (!ctx.cr0.lt) goto loc_881AD47C;
	// bl 0x88156678
	ctx.lr = 0x881AD47C;
	sub_88156678(ctx, base);
loc_881AD47C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwimi r11,r31,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r10,84(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x881adb70
	if (!ctx.cr6.eq) goto loc_881ADB70;
loc_881AD498:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881ad4dc
	if (ctx.cr6.eq) goto loc_881AD4DC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,14(r27)
	REX_STORE_U16(ctx.r27.u32 + 14, ctx.r11.u16);
	// sth r11,16(r27)
	REX_STORE_U16(ctx.r27.u32 + 16, ctx.r11.u16);
	// sth r11,18(r27)
	REX_STORE_U16(ctx.r27.u32 + 18, ctx.r11.u16);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// oris r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 131072;
	// stw r10,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_881AD4D0:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r10,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
loc_881AD4DC:
	// lwz r11,444(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 444);
	// lwz r31,84(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881ad638
	if (ctx.cr6.eq) goto loc_881AD638;
	// lwz r11,2144(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 2144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881ad508
	if (!ctx.cr6.eq) goto loc_881AD508;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x881ad77c
	goto loc_881AD77C;
loc_881AD508:
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
	// extsh r29,r5
	ctx.r29.s64 = ctx.r5.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x881ad5f4
	if (ctx.cr6.lt) goto loc_881AD5F4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r29,28
	ctx.r9.u64 = ctx.r29.u32 & 0xF;
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
	// bge cr6,0x881ad5ec
	if (!ctx.cr6.lt) goto loc_881AD5EC;
loc_881AD554:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881ad580
	if (ctx.cr6.lt) goto loc_881AD580;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881AD570;
	sub_88156440(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881ad554
	if (ctx.cr6.eq) goto loc_881AD554;
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x881ad77c
	goto loc_881AD77C;
loc_881AD580:
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
loc_881AD5EC:
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x881ad77c
	goto loc_881AD77C;
loc_881AD5F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x881AD5FC;
	sub_88156500(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r30,r11,32768
	ctx.r30.u64 = ctx.r11.u64 | 32768;
loc_881AD604:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x88156500
	ctx.lr = 0x881AD61C;
	sub_88156500(ctx, base);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r29,r8
	ctx.r29.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x881ad604
	if (ctx.cr6.lt) goto loc_881AD604;
	// b 0x881ad77c
	goto loc_881AD77C;
loc_881AD638:
	// addic. r11,r26,2132
	ctx.xer.ca = ctx.r26.u32 > 4294965163;
	ctx.r11.s64 = ctx.r26.s64 + 2132;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x881ad650
	if (!ctx.cr0.eq) goto loc_881AD650;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x881ad77c
	goto loc_881AD77C;
loc_881AD650:
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
	// extsh r29,r5
	ctx.r29.s64 = ctx.r5.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x881ad73c
	if (ctx.cr6.lt) goto loc_881AD73C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r29,28
	ctx.r9.u64 = ctx.r29.u32 & 0xF;
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
	// bge cr6,0x881ad734
	if (!ctx.cr6.lt) goto loc_881AD734;
loc_881AD69C:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881ad6c8
	if (ctx.cr6.lt) goto loc_881AD6C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881AD6B8;
	sub_88156440(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881ad69c
	if (ctx.cr6.eq) goto loc_881AD69C;
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x881ad77c
	goto loc_881AD77C;
loc_881AD6C8:
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
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
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
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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
	// std r5,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r5.u64);
loc_881AD734:
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x881ad77c
	goto loc_881AD77C;
loc_881AD73C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x881AD744;
	sub_88156500(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r30,r11,32768
	ctx.r30.u64 = ctx.r11.u64 | 32768;
loc_881AD74C:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x88156500
	ctx.lr = 0x881AD764;
	sub_88156500(ctx, base);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r29,r8
	ctx.r29.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x881ad74c
	if (ctx.cr6.lt) goto loc_881AD74C;
loc_881AD77C:
	// lwz r11,84(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881adb70
	if (!ctx.cr6.eq) goto loc_881ADB70;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x881adb70
	if (ctx.cr6.lt) goto loc_881ADB70;
	// cmpwi cr6,r29,127
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 127, ctx.xer);
	// bgt cr6,0x881adb70
	if (ctx.cr6.gt) goto loc_881ADB70;
	// rlwinm r11,r29,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x40;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// beq cr6,0x881ad820
	if (ctx.cr6.eq) goto loc_881AD820;
	// xori r29,r29,64
	ctx.r29.u64 = ctx.r29.u64 ^ 64;
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// cntlzw r10,r29
	ctx.r10.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// stw r11,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwimi r11,r9,30,1,1
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x40000000) | (ctx.r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r11,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r8,328(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 328);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x881ad814
	if (ctx.cr6.eq) goto loc_881AD814;
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
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
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881ad800
	if (!ctx.cr0.lt) goto loc_881AD800;
	// bl 0x88156678
	ctx.lr = 0x881AD800;
	sub_88156678(ctx, base);
loc_881AD800:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// rlwimi r11,r10,18,12,13
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xC0000) | (ctx.r11.u64 & 0xFFFFFFFFFFF3FFFF);
	// stw r11,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x881ad97c
	goto loc_881AD97C;
loc_881AD814:
	// rlwimi r11,r28,19,12,13
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 19) & 0xC0000) | (ctx.r11.u64 & 0xFFFFFFFFFFF3FFFF);
	// stw r11,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x881ad97c
	goto loc_881AD97C;
loc_881AD820:
	// rlwinm r10,r11,0,15,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// stw r10,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// ld r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// rldicr r7,r9,1,62
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// rldicl r31,r9,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0x1;
	// std r7,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// addic. r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881ad850
	if (!ctx.cr0.lt) goto loc_881AD850;
	// bl 0x88156678
	ctx.lr = 0x881AD850;
	sub_88156678(ctx, base);
loc_881AD850:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// rlwimi r11,r10,3,27,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x18) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r11,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r9,404(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 404);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x881ad96c
	if (ctx.cr6.eq) goto loc_881AD96C;
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
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
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881ad894
	if (!ctx.cr0.lt) goto loc_881AD894;
	// bl 0x88156678
	ctx.lr = 0x881AD894;
	sub_88156678(ctx, base);
loc_881AD894:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x881ad8b0
	if (!ctx.cr6.eq) goto loc_881AD8B0;
	// lbz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + 20);
	// li r12,221
	ctx.r12.s64 = 221;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// stb r10,20(r27)
	REX_STORE_U8(ctx.r27.u32 + 20, ctx.r10.u8);
	// b 0x881ad948
	goto loc_881AD948;
loc_881AD8B0:
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
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
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881ad8d8
	if (!ctx.cr0.lt) goto loc_881AD8D8;
	// bl 0x88156678
	ctx.lr = 0x881AD8D8;
	sub_88156678(ctx, base);
loc_881AD8D8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x881ad8f4
	if (!ctx.cr6.eq) goto loc_881AD8F4;
	// lbz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + 20);
	// li r12,221
	ctx.r12.s64 = 221;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// b 0x881ad944
	goto loc_881AD944;
loc_881AD8F4:
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
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
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881ad91c
	if (!ctx.cr0.lt) goto loc_881AD91C;
	// bl 0x88156678
	ctx.lr = 0x881AD91C;
	sub_88156678(ctx, base);
loc_881AD91C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x881ad934
	if (ctx.cr6.eq) goto loc_881AD934;
	// lbz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + 20);
	// ori r10,r11,34
	ctx.r10.u64 = ctx.r11.u64 | 34;
	// stb r10,20(r27)
	REX_STORE_U8(ctx.r27.u32 + 20, ctx.r10.u8);
	// b 0x881ad948
	goto loc_881AD948;
loc_881AD934:
	// lbz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + 20);
	// li r12,221
	ctx.r12.s64 = 221;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
loc_881AD944:
	// stb r9,20(r27)
	REX_STORE_U8(ctx.r27.u32 + 20, ctx.r9.u8);
loc_881AD948:
	// lbz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + 20);
	// li r12,179
	ctx.r12.s64 = 179;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// rlwinm r8,r9,1,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x40;
	// stb r9,20(r27)
	REX_STORE_U8(ctx.r27.u32 + 20, ctx.r9.u8);
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stb r6,20(r27)
	REX_STORE_U8(ctx.r27.u32 + 20, ctx.r6.u8);
loc_881AD96C:
	// lwz r11,84(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881adb70
	if (!ctx.cr6.eq) goto loc_881ADB70;
loc_881AD97C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r11,0,10,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF3FFFFF;
	// stw r10,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// lwz r9,396(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 396);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x881ada08
	if (ctx.cr6.eq) goto loc_881ADA08;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x881ada08
	if (ctx.cr6.eq) goto loc_881ADA08;
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
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
	// bge 0x881ad9c4
	if (!ctx.cr0.lt) goto loc_881AD9C4;
	// bl 0x88156678
	ctx.lr = 0x881AD9C4;
	sub_88156678(ctx, base);
loc_881AD9C4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x881ad9fc
	if (ctx.cr6.eq) goto loc_881AD9FC;
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
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
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881ad9f8
	if (!ctx.cr0.lt) goto loc_881AD9F8;
	// bl 0x88156678
	ctx.lr = 0x881AD9F8;
	sub_88156678(ctx, base);
loc_881AD9F8:
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
loc_881AD9FC:
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwimi r10,r11,22,8,9
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0xC00000) | (ctx.r10.u64 & 0xFFFFFFFFFF3FFFFF);
	// stw r10,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
loc_881ADA08:
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// clrlwi r10,r29,31
	ctx.r10.u64 = ctx.r29.u32 & 0x1;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stb r10,14(r27)
	REX_STORE_U8(ctx.r27.u32 + 14, ctx.r10.u8);
	// stb r9,15(r27)
	REX_STORE_U8(ctx.r27.u32 + 15, ctx.r9.u8);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stb r8,16(r27)
	REX_STORE_U8(ctx.r27.u32 + 16, ctx.r8.u8);
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stb r7,17(r27)
	REX_STORE_U8(ctx.r27.u32 + 17, ctx.r7.u8);
	// srawi r6,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 1;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// clrlwi r4,r6,31
	ctx.r4.u64 = ctx.r6.u32 & 0x1;
	// stb r5,18(r27)
	REX_STORE_U8(ctx.r27.u32 + 18, ctx.r5.u8);
	// stb r4,19(r27)
	REX_STORE_U8(ctx.r27.u32 + 19, ctx.r4.u8);
	// lwz r3,440(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 440);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881adb64
	if (ctx.cr6.eq) goto loc_881ADB64;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r11,r11,0,4,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// stw r11,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r10,332(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 332);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881adb64
	if (ctx.cr6.eq) goto loc_881ADB64;
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x881adb64
	if (!ctx.cr6.eq) goto loc_881ADB64;
	// rlwinm r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x881adb64
	if (!ctx.cr6.eq) goto loc_881ADB64;
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
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
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881adab4
	if (!ctx.cr0.lt) goto loc_881ADAB4;
	// bl 0x88156678
	ctx.lr = 0x881ADAB4;
	sub_88156678(ctx, base);
loc_881ADAB4:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwimi r11,r31,28,3,3
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0x10000000) | (ctx.r11.u64 & 0xFFFFFFFFEFFFFFFF);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// stw r11,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x881adb64
	if (!ctx.cr6.eq) goto loc_881ADB64;
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
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
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881adaf4
	if (!ctx.cr0.lt) goto loc_881ADAF4;
	// bl 0x88156678
	ctx.lr = 0x881ADAF4;
	sub_88156678(ctx, base);
loc_881ADAF4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x881adb14
	if (!ctx.cr6.eq) goto loc_881ADB14;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,0,8,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF8FFFFFF;
	// stw r10,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_881ADB14:
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
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
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881adb3c
	if (!ctx.cr0.lt) goto loc_881ADB3C;
	// bl 0x88156678
	ctx.lr = 0x881ADB3C;
	sub_88156678(ctx, base);
loc_881ADB3C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x881adb5c
	if (!ctx.cr6.eq) goto loc_881ADB5C;
	// rlwimi r11,r28,24,5,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 24) & 0x7000000) | (ctx.r11.u64 & 0xFFFFFFFFF8FFFFFF);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_881ADB5C:
	// rlwimi r11,r28,25,5,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 25) & 0x7000000) | (ctx.r11.u64 & 0xFFFFFFFFF8FFFFFF);
	// stw r11,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_881ADB64:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_881ADB70:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881C2D10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881C2D18;
	__savegprlr_14(ctx, base);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// rlwinm r31,r4,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r4,r11
	ctx.r30.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// rlwinm r29,r4,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6872
	ctx.r11.s64 = ctx.r11.s64 + 6872;
	// rlwinm r28,r30,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r8,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r4,r31
	ctx.r31.u64 = ctx.r4.u64 + ctx.r31.u64;
	// subf r29,r4,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r4.u64;
	// rlwinm r21,r6,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r4,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r27,r4,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r16,r26,r11
	ctx.r16.u64 = ctx.r26.u64 + ctx.r11.u64;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r25,r28,r3
	ctx.r25.u64 = ctx.r28.u64 + ctx.r3.u64;
	// add r14,r7,r11
	ctx.r14.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r26,r29,r3
	ctx.r26.u64 = ctx.r29.u64 + ctx.r3.u64;
	// add r24,r31,r3
	ctx.r24.u64 = ctx.r31.u64 + ctx.r3.u64;
	// add r7,r30,r3
	ctx.r7.u64 = ctx.r30.u64 + ctx.r3.u64;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r21
	ctx.r11.u64 = ctx.r6.u64 + ctx.r21.u64;
	// add r23,r27,r3
	ctx.r23.u64 = ctx.r27.u64 + ctx.r3.u64;
	// add r22,r10,r3
	ctx.r22.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r21,r25,1
	ctx.r21.s64 = ctx.r25.s64 + 1;
	// addi r20,r26,1
	ctx.r20.s64 = ctx.r26.s64 + 1;
	// addi r25,r24,1
	ctx.r25.s64 = ctx.r24.s64 + 1;
	// stw r21,-392(r1)
	REX_STORE_U32(ctx.r1.u32 + -392, ctx.r21.u32);
	// addi r19,r7,1
	ctx.r19.s64 = ctx.r7.s64 + 1;
	// stw r20,-388(r1)
	REX_STORE_U32(ctx.r1.u32 + -388, ctx.r20.u32);
	// addi r26,r23,1
	ctx.r26.s64 = ctx.r23.s64 + 1;
	// stw r25,-372(r1)
	REX_STORE_U32(ctx.r1.u32 + -372, ctx.r25.u32);
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// stw r19,-384(r1)
	REX_STORE_U32(ctx.r1.u32 + -384, ctx.r19.u32);
	// subf r24,r4,r10
	ctx.r24.u64 = ctx.r10.u64 - ctx.r4.u64;
	// stw r26,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r26.u32);
	// addi r6,r22,1
	ctx.r6.s64 = ctx.r22.s64 + 1;
	// stw r11,-340(r1)
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r11.u32);
	// subfic r7,r4,1
	ctx.xer.ca = ctx.r4.u32 <= 1;
	ctx.r7.u64 = static_cast<uint64_t>(1) - ctx.r4.u64;
	// stw r24,-332(r1)
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r24.u32);
	// subf r27,r4,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r4.u64;
	// stw r6,-380(r1)
	REX_STORE_U32(ctx.r1.u32 + -380, ctx.r6.u32);
	// subf r31,r4,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r4.u64;
	// stw r7,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r7.u32);
	// subf r28,r4,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r4.u64;
	// stw r27,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r27.u32);
	// subf r29,r4,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r4.u64;
	// stw r31,-356(r1)
	REX_STORE_U32(ctx.r1.u32 + -356, ctx.r31.u32);
	// subf r30,r4,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r4.u64;
	// stw r28,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r28.u32);
	// subf r10,r3,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r3.u64;
	// stw r29,-364(r1)
	REX_STORE_U32(ctx.r1.u32 + -364, ctx.r29.u32);
	// li r23,8
	ctx.r23.s64 = 8;
	// stw r30,-324(r1)
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r30.u32);
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stw r10,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r10.u32);
	// add r15,r8,r5
	ctx.r15.u64 = ctx.r8.u64 + ctx.r5.u64;
	// stw r23,-376(r1)
	REX_STORE_U32(ctx.r1.u32 + -376, ctx.r23.u32);
	// b 0x881c2e2c
	goto loc_881C2E2C;
loc_881C2E10:
	// lwz r7,-348(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// lwz r24,-332(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// lwz r27,-360(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// lwz r31,-356(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -356);
	// lwz r28,-320(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// lwz r29,-364(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// lwz r30,-324(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
loc_881C2E2C:
	// li r8,2
	ctx.r8.s64 = 2;
	// lbz r23,0(r20)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r20.u32 + 0);
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lbz r5,0(r26)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// lbzx r31,r31,r11
	ctx.r31.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbz r26,0(r25)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r25.u32 + 0);
	// lhz r20,2(r14)
	ctx.r20.u64 = REX_LOAD_U16(ctx.r14.u32 + 2);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lbzx r8,r7,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// lbzx r7,r24,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r11.u32);
	// extsh r20,r20
	ctx.r20.s64 = ctx.r20.s16;
	// lbzx r24,r4,r11
	ctx.r24.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// lbz r25,0(r21)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r21.u32 + 0);
	// lbz r21,0(r19)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r19.u32 + 0);
	// lhz r19,0(r14)
	ctx.r19.u64 = REX_LOAD_U16(ctx.r14.u32 + 0);
	// stw r31,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r31.u32);
	// mullw r31,r23,r20
	ctx.r31.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r20.s32);
	// stw r24,-400(r1)
	REX_STORE_U32(ctx.r1.u32 + -400, ctx.r24.u32);
	// lbzx r22,r10,r4
	ctx.r22.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// stw r20,-396(r1)
	REX_STORE_U32(ctx.r1.u32 + -396, ctx.r20.u32);
	// lbz r17,0(r11)
	ctx.r17.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r21,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r21.u32);
	// lbz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// lbzx r27,r27,r11
	ctx.r27.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// std r11,-312(r1)
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.r11.u64);
	// std r9,-296(r1)
	REX_STORE_U64(ctx.r1.u32 + -296, ctx.r9.u64);
	// extsh r19,r19
	ctx.r19.s64 = ctx.r19.s16;
	// lwz r9,-340(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// mullw r23,r8,r20
	ctx.r23.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r20.s32);
	// std r4,-304(r1)
	REX_STORE_U64(ctx.r1.u32 + -304, ctx.r4.u64);
	// lwz r8,-400(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -400);
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// stw r19,-400(r1)
	REX_STORE_U32(ctx.r1.u32 + -400, ctx.r19.u32);
	// mullw r21,r22,r20
	ctx.r21.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r20.s32);
	// lwz r4,-328(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// lbzx r18,r10,r11
	ctx.r18.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lbzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// mullw r29,r25,r20
	ctx.r29.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r20.s32);
	// lbzx r25,r30,r11
	ctx.r25.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lbzx r30,r28,r11
	ctx.r30.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// lbz r28,0(r3)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// stw r10,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r10.u32);
	// lwz r11,44(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// mullw r10,r25,r19
	ctx.r10.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r19.s32);
	// mullw r24,r28,r19
	ctx.r24.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r19.s32);
	// mullw r22,r17,r19
	ctx.r22.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r19.s32);
	// mullw r30,r30,r19
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r19.s32);
	// mullw r19,r8,r19
	ctx.r19.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r19.s32);
	// lwz r8,-400(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -400);
	// mullw r17,r7,r8
	ctx.r17.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// lwz r7,-396(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -396);
	// stw r26,-396(r1)
	REX_STORE_U32(ctx.r1.u32 + -396, ctx.r26.u32);
	// mullw r20,r18,r20
	ctx.r20.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r20.s32);
	// mullw r18,r6,r7
	ctx.r18.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// lwz r6,-352(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// mullw r25,r5,r7
	ctx.r25.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// lwz r5,-396(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -396);
	// mullw r28,r6,r8
	ctx.r28.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// lwz r6,-344(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// mullw r26,r27,r8
	ctx.r26.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r8.s32);
	// mullw r27,r5,r7
	ctx.r27.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// mullw r5,r6,r8
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// lwz r6,-336(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// mullw r7,r6,r7
	ctx.r7.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r5,-260(r1)
	REX_STORE_U32(ctx.r1.u32 + -260, ctx.r5.u32);
	// add r8,r30,r29
	ctx.r8.u64 = ctx.r30.u64 + ctx.r29.u64;
	// add r7,r23,r24
	ctx.r7.u64 = ctx.r23.u64 + ctx.r24.u64;
	// stw r10,-256(r1)
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r10.u32);
	// add r5,r21,r22
	ctx.r5.u64 = ctx.r21.u64 + ctx.r22.u64;
	// stw r8,-264(r1)
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r8.u32);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,-288(r1)
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r7.u32);
	// add r10,r19,r20
	ctx.r10.u64 = ctx.r19.u64 + ctx.r20.u64;
	// stw r5,-284(r1)
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r5.u32);
	// subf r8,r6,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r6.u64;
	// add r7,r17,r18
	ctx.r7.u64 = ctx.r17.u64 + ctx.r18.u64;
	// stw r10,-280(r1)
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r10.u32);
	// add r5,r26,r25
	ctx.r5.u64 = ctx.r26.u64 + ctx.r25.u64;
	// add r31,r28,r27
	ctx.r31.u64 = ctx.r28.u64 + ctx.r27.u64;
	// stw r31,-268(r1)
	REX_STORE_U32(ctx.r1.u32 + -268, ctx.r31.u32);
	// add r31,r4,r3
	ctx.r31.u64 = ctx.r4.u64 + ctx.r3.u64;
	// ld r11,-312(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -312);
	// addi r10,r1,-284
	ctx.r10.s64 = ctx.r1.s64 + -284;
	// ld r9,-296(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + -296);
	// add r29,r8,r15
	ctx.r29.u64 = ctx.r8.u64 + ctx.r15.u64;
	// ld r4,-304(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -304);
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// lwz r28,44(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// stw r7,-276(r1)
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r7.u32);
	// stw r5,-272(r1)
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r5.u32);
loc_881C2F9C:
	// lhz r8,2(r16)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r16.u32 + 2);
	// lhz r5,0(r16)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r16.u32 + 0);
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lwz r27,-4(r10)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// mullw r5,r5,r27
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r27.s32);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// addi r5,r8,8
	ctx.r5.s64 = ctx.r8.s64 + 8;
	// srawi. r8,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x881c2fd8
	if (!ctx.cr0.lt) goto loc_881C2FD8;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x881c2fe4
	goto loc_881C2FE4;
loc_881C2FD8:
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// ble cr6,0x881c2fe4
	if (!ctx.cr6.gt) goto loc_881C2FE4;
	// li r8,255
	ctx.r8.s64 = 255;
loc_881C2FE4:
	// stb r8,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r8.u8);
	// lhz r27,2(r16)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r16.u32 + 2);
	// lhz r8,0(r16)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r16.u32 + 0);
	// extsh r26,r8
	ctx.r26.s64 = ctx.r8.s16;
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
	// mullw r7,r26,r7
	ctx.r7.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r7.s32);
	// mullw r8,r27,r5
	ctx.r8.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r5.s32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r8,r9,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r9.u64;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// srawi. r8,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x881c3020
	if (!ctx.cr0.lt) goto loc_881C3020;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x881c302c
	goto loc_881C302C;
loc_881C3020:
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// ble cr6,0x881c302c
	if (!ctx.cr6.gt) goto loc_881C302C;
	// li r8,255
	ctx.r8.s64 = 255;
loc_881C302C:
	// stbx r8,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r8.u8);
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lhz r8,2(r16)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r16.u32 + 2);
	// extsh r27,r8
	ctx.r27.s64 = ctx.r8.s16;
	// lhz r8,0(r16)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r16.u32 + 0);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// mullw r8,r8,r5
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// mullw r5,r27,r7
	ctx.r5.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r7.s32);
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// subf r8,r9,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r9.u64;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// srawi. r8,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x881c3068
	if (!ctx.cr0.lt) goto loc_881C3068;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x881c3074
	goto loc_881C3074;
loc_881C3068:
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// ble cr6,0x881c3074
	if (!ctx.cr6.gt) goto loc_881C3074;
	// li r8,255
	ctx.r8.s64 = 255;
loc_881C3074:
	// stb r8,0(r30)
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r8.u8);
	// lwz r5,12(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lhz r8,2(r16)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r16.u32 + 2);
	// lhz r27,0(r16)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r16.u32 + 0);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
	// mullw r8,r8,r5
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// mullw r7,r27,r7
	ctx.r7.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r7.s32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r8,r9,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r9.u64;
	// addi r5,r8,8
	ctx.r5.s64 = ctx.r8.s64 + 8;
	// srawi. r8,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x881c30b0
	if (!ctx.cr0.lt) goto loc_881C30B0;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x881c30bc
	goto loc_881C30BC;
loc_881C30B0:
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// ble cr6,0x881c30bc
	if (!ctx.cr6.gt) goto loc_881C30BC;
	// li r8,255
	ctx.r8.s64 = 255;
loc_881C30BC:
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// add r31,r6,r31
	ctx.r31.u64 = ctx.r6.u64 + ctx.r31.u64;
	// stbux r8,r29,r6
	ea = ctx.r29.u32 + ctx.r6.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r29.u32 = ea;
	// add r30,r6,r30
	ctx.r30.u64 = ctx.r6.u64 + ctx.r30.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x881c2f9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881C2F9C;
	// lwz r8,-380(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -380);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lwz r7,-368(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r5,-372(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -372);
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// addi r26,r7,1
	ctx.r26.s64 = ctx.r7.s64 + 1;
	// lwz r10,-376(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -376);
	// addi r25,r5,1
	ctx.r25.s64 = ctx.r5.s64 + 1;
	// lwz r8,-392(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -392);
	// lwz r7,-388(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -388);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r5,-384(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -384);
	// addi r21,r8,1
	ctx.r21.s64 = ctx.r8.s64 + 1;
	// addi r20,r7,1
	ctx.r20.s64 = ctx.r7.s64 + 1;
	// stw r10,-376(r1)
	REX_STORE_U32(ctx.r1.u32 + -376, ctx.r10.u32);
	// addi r19,r5,1
	ctx.r19.s64 = ctx.r5.s64 + 1;
	// stw r6,-380(r1)
	REX_STORE_U32(ctx.r1.u32 + -380, ctx.r6.u32);
	// stw r26,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r26.u32);
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// stw r25,-372(r1)
	REX_STORE_U32(ctx.r1.u32 + -372, ctx.r25.u32);
	// stw r21,-392(r1)
	REX_STORE_U32(ctx.r1.u32 + -392, ctx.r21.u32);
	// stw r20,-388(r1)
	REX_STORE_U32(ctx.r1.u32 + -388, ctx.r20.u32);
	// stw r19,-384(r1)
	REX_STORE_U32(ctx.r1.u32 + -384, ctx.r19.u32);
	// bne 0x881c2e10
	if (!ctx.cr0.eq) goto loc_881C2E10;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881CADA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881CADA8;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef278
	ctx.lr = 0x881CADB0;
	__savefpr_24(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r4,396(r1)
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r4.u32);
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// stw r10,444(r1)
	REX_STORE_U32(ctx.r1.u32 + 444, ctx.r10.u32);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// stw r6,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r6.u32);
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// lwz r10,484(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// std r7,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lfd f12,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// stw r5,404(r1)
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r5.u32);
	// stw r9,436(r1)
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r9.u32);
	// lis r9,-30717
	ctx.r9.s64 = -2013069312;
	// std r6,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r6.u64);
	// lfd f0,128(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// lfd f31,-26256(r9)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r9.u32 + -26256);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fmul f27,f10,f31
	ctx.f27.f64 = ctx.f10.f64 * ctx.f31.f64;
	// lwz r8,476(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// std r5,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f30,f13
	ctx.f30.f64 = double(ctx.f13.s64);
	// lis r3,-30717
	ctx.r3.s64 = -2013069312;
	// fsub f26,f11,f27
	ctx.f26.f64 = ctx.f11.f64 - ctx.f27.f64;
	// lfd f0,-26248(r3)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r3.u32 + -26248);
	// fmul f9,f30,f0
	ctx.f9.f64 = ctx.f30.f64 * ctx.f0.f64;
	// srawi r18,r22,1
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1) != 0);
	ctx.r18.s64 = ctx.r22.s32 >> 1;
	// srawi r19,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r19.s64 = ctx.r4.s32 >> 1;
	// fsub f8,f26,f27
	ctx.f8.f64 = ctx.f26.f64 - ctx.f27.f64;
	// fsub f7,f8,f9
	ctx.f7.f64 = ctx.f8.f64 - ctx.f9.f64;
	// fadd f6,f8,f9
	ctx.f6.f64 = ctx.f8.f64 + ctx.f9.f64;
	// fctiwz f5,f7
	ctx.f5.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f5,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f5.u64);
	// lwz r14,132(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// fctiwz f4,f6
	ctx.f4.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f4,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f4.u64);
	// lwz r15,132(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bge cr6,0x881cae6c
	if (!ctx.cr6.lt) goto loc_881CAE6C;
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
loc_881CAE6C:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bge cr6,0x881cae78
	if (!ctx.cr6.lt) goto loc_881CAE78;
	// addi r15,r15,-1
	ctx.r15.s64 = ctx.r15.s64 + -1;
loc_881CAE78:
	// lwz r25,452(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x881caf1c
	if (!ctx.cr6.gt) goto loc_881CAF1C;
	// addi r27,r14,1
	ctx.r27.s64 = ctx.r14.s64 + 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// subf r28,r15,r22
	ctx.r28.u64 = ctx.r22.u64 - ctx.r15.u64;
	// subf r26,r25,r23
	ctx.r26.u64 = ctx.r23.u64 - ctx.r25.u64;
loc_881CAE9C:
	// add r11,r27,r31
	ctx.r11.u64 = ctx.r27.u64 + ctx.r31.u64;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x881caeac
	if (!ctx.cr6.lt) goto loc_881CAEAC;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_881CAEAC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881caec4
	if (!ctx.cr6.gt) goto loc_881CAEC4;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// add r4,r26,r29
	ctx.r4.u64 = ctx.r26.u64 + ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880547a0
	ctx.lr = 0x881CAEC4;
	sub_880547A0(ctx, base);
loc_881CAEC4:
	// cmpw cr6,r22,r28
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r28.s32, ctx.xer);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// blt cr6,0x881caed4
	if (ctx.cr6.lt) goto loc_881CAED4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_881CAED4:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x881caf00
	if (!ctx.cr6.gt) goto loc_881CAF00;
	// add r11,r31,r15
	ctx.r11.u64 = ctx.r31.u64 + ctx.r15.u64;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addme r8,r9
	temp.u8 = (ctx.r9.u32 + 0xFFFFFFFFu < ctx.r9.u32) | (ctx.r9.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r9.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x880547a0
	ctx.lr = 0x881CAF00;
	sub_880547A0(ctx, base);
loc_881CAF00:
	// lwz r4,396(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// add r30,r30,r22
	ctx.r30.u64 = ctx.r30.u64 + ctx.r22.u64;
	// add r29,r29,r22
	ctx.r29.u64 = ctx.r29.u64 + ctx.r22.u64;
	// cmpw cr6,r31,r4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x881cae9c
	if (ctx.cr6.lt) goto loc_881CAE9C;
loc_881CAF1C:
	// lwz r17,460(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x881caff8
	if (!ctx.cr6.gt) goto loc_881CAFF8;
	// mr r28,r15
	ctx.r28.u64 = ctx.r15.u64;
	// subf r27,r15,r14
	ctx.r27.u64 = ctx.r14.u64 - ctx.r15.u64;
loc_881CAF34:
	// add r11,r27,r28
	ctx.r11.u64 = ctx.r27.u64 + ctx.r28.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r30,r18
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x881caf4c
	if (ctx.cr6.lt) goto loc_881CAF4C;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
loc_881CAF4C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x881caf84
	if (!ctx.cr6.gt) goto loc_881CAF84;
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// lwz r10,412(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mullw r31,r11,r18
	ctx.r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r18.s32);
	// add r4,r31,r10
	ctx.r4.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r3,r31,r17
	ctx.r3.u64 = ctx.r31.u64 + ctx.r17.u64;
	// bl 0x880547a0
	ctx.lr = 0x881CAF70;
	sub_880547A0(ctx, base);
	// lwz r9,468(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r31,r20
	ctx.r4.u64 = ctx.r31.u64 + ctx.r20.u64;
	// add r3,r31,r9
	ctx.r3.u64 = ctx.r31.u64 + ctx.r9.u64;
	// bl 0x880547a0
	ctx.lr = 0x881CAF84;
	sub_880547A0(ctx, base);
loc_881CAF84:
	// srawi r11,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 1;
	// subf r30,r11,r18
	ctx.r30.u64 = ctx.r18.u64 - ctx.r11.u64;
	// cmpw cr6,r30,r18
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x881caf98
	if (ctx.cr6.lt) goto loc_881CAF98;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
loc_881CAF98:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x881cafe4
	if (!ctx.cr6.gt) goto loc_881CAFE4;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// lwz r9,436(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addme r7,r8
	temp.u8 = (ctx.r8.u32 + 0xFFFFFFFFu < ctx.r8.u32) | (ctx.r8.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r8.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// srawi r6,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r29.s32 >> 1;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// mullw r10,r6,r18
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r18.s32);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r31,r9
	ctx.r4.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r3,r31,r17
	ctx.r3.u64 = ctx.r31.u64 + ctx.r17.u64;
	// bl 0x880547a0
	ctx.lr = 0x881CAFD0;
	sub_880547A0(ctx, base);
	// lwz r3,468(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r31,r21
	ctx.r4.u64 = ctx.r31.u64 + ctx.r21.u64;
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// bl 0x880547a0
	ctx.lr = 0x881CAFE4;
	sub_880547A0(ctx, base);
loc_881CAFE4:
	// lwz r11,396(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881caf34
	if (ctx.cr6.lt) goto loc_881CAF34;
loc_881CAFF8:
	// addi r11,r14,1
	ctx.r11.s64 = ctx.r14.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// subf r9,r23,r25
	ctx.r9.u64 = ctx.r25.u64 - ctx.r23.u64;
	// subf r7,r10,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// xoris r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 ^ 2147483648;
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// addc r5,r7,r8
	ctx.xer.ca = ctx.r7.u32 + ctx.r8.u32 < ctx.r7.u32;
	ctx.r5.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r6,r23,r24
	ctx.r6.u64 = ctx.r24.u64 - ctx.r23.u64;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r16,r18,1
	ctx.r16.s64 = ctx.r18.s64 + 1;
	// stw r6,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// and r28,r3,r11
	ctx.r28.u64 = ctx.r3.u64 & ctx.r11.u64;
	// lfd f28,12088(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f28.u64 = REX_LOAD_U64(ctx.r10.u32 + 12088);
	// lis r11,-30717
	ctx.r11.s64 = -2013069312;
	// subf r21,r28,r22
	ctx.r21.u64 = ctx.r22.u64 - ctx.r28.u64;
	// lfd f25,-26264(r11)
	ctx.f25.u64 = REX_LOAD_U64(ctx.r11.u32 + -26264);
loc_881CB03C:
	// cmpw cr6,r15,r22
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r22.s32, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// blt cr6,0x881cb04c
	if (ctx.cr6.lt) goto loc_881CB04C;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_881CB04C:
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x881cb1fc
	if (!ctx.cr6.lt) goto loc_881CB1FC;
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fsub f12,f13,f26
	ctx.f12.f64 = ctx.f13.f64 - ctx.f26.f64;
	// fadd f11,f12,f27
	ctx.f11.f64 = ctx.f12.f64 + ctx.f27.f64;
	// fmul f29,f11,f31
	ctx.f29.f64 = ctx.f11.f64 * ctx.f31.f64;
	// fdiv f1,f29,f30
	ctx.f1.f64 = ctx.f29.f64 / ctx.f30.f64;
	// bl 0x881f0340
	ctx.lr = 0x881CB078;
	sub_881F0340(ctx, base);
	// fsub f10,f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f25.f64 - ctx.f1.f64;
	// lwz r9,396(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// fmsub f9,f1,f30,f29
	ctx.f9.f64 = std::fma(ctx.f1.f64, ctx.f30.f64, -ctx.f29.f64);
	// subfic r11,r22,1
	ctx.xer.ca = ctx.r22.u32 <= 1;
	ctx.r11.u64 = static_cast<uint64_t>(1) - ctx.r22.u64;
	// cmpw cr6,r21,r9
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r9.s32, ctx.xer);
	// fmsub f8,f10,f30,f29
	ctx.f8.f64 = std::fma(ctx.f10.f64, ctx.f30.f64, -ctx.f29.f64);
	// fmadd f7,f9,f31,f28
	ctx.f7.f64 = std::fma(ctx.f9.f64, ctx.f31.f64, ctx.f28.f64);
	// fmadd f6,f8,f31,f28
	ctx.f6.f64 = std::fma(ctx.f8.f64, ctx.f31.f64, ctx.f28.f64);
	// fctiwz f5,f7
	ctx.f5.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f5,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.f5.u64);
	// lwz r30,124(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// fctiwz f4,f6
	ctx.f4.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f4,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.f4.u64);
	// lwz r29,124(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r5,r11,r23
	ctx.r5.u64 = ctx.r11.u64 + ctx.r23.u64;
	// add r4,r10,r23
	ctx.r4.u64 = ctx.r10.u64 + ctx.r23.u64;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// blt cr6,0x881cb0d4
	if (ctx.cr6.lt) goto loc_881CB0D4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_881CB0D4:
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r6,r28,r23
	ctx.r6.u64 = ctx.r28.u64 + ctx.r23.u64;
	// subf r10,r29,r22
	ctx.r10.u64 = ctx.r22.u64 - ctx.r29.u64;
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// add r7,r6,r9
	ctx.r7.u64 = ctx.r6.u64 + ctx.r9.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// subf r10,r28,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r28.u64;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// subf r9,r30,r22
	ctx.r9.u64 = ctx.r22.u64 - ctx.r30.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r8,r22,1
	ctx.r8.s64 = ctx.r22.s64 + 1;
	// subf r11,r28,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r28.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// add r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 + ctx.r3.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x881ca338
	ctx.lr = 0x881CB118;
	sub_881CA338(ctx, base);
	// clrlwi r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881cb1f0
	if (!ctx.cr6.eq) goto loc_881CB1F0;
	// srawi r31,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r28.s32 >> 1;
	// lwz r9,436(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// srawi r30,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 1;
	// srawi r29,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 1;
	// subfic r11,r18,1
	ctx.xer.ca = ctx.r18.u32 <= 1;
	ctx.r11.u64 = static_cast<uint64_t>(1) - ctx.r18.u64;
	// subf r27,r31,r18
	ctx.r27.u64 = ctx.r18.u64 - ctx.r31.u64;
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r25,r11,r31
	ctx.r25.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,412(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// add r26,r10,r31
	ctx.r26.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r5,r25,r11
	ctx.r5.u64 = ctx.r25.u64 + ctx.r11.u64;
	// add r4,r26,r11
	ctx.r4.u64 = ctx.r26.u64 + ctx.r11.u64;
	// add r6,r31,r11
	ctx.r6.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r3,r31,r17
	ctx.r3.u64 = ctx.r31.u64 + ctx.r17.u64;
	// add r7,r31,r9
	ctx.r7.u64 = ctx.r31.u64 + ctx.r9.u64;
	// cmpw cr6,r27,r19
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r19.s32, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// blt cr6,0x881cb174
	if (ctx.cr6.lt) goto loc_881CB174;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_881CB174:
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// subf r10,r30,r18
	ctx.r10.u64 = ctx.r18.u64 - ctx.r30.u64;
	// subf r9,r29,r18
	ctx.r9.u64 = ctx.r18.u64 - ctx.r29.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// subf r23,r31,r10
	ctx.r23.u64 = ctx.r10.u64 - ctx.r31.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// subf r24,r31,r9
	ctx.r24.u64 = ctx.r9.u64 - ctx.r31.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// bl 0x881ca338
	ctx.lr = 0x881CB1A4;
	sub_881CA338(ctx, base);
	// lwz r8,468(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r7,444(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// add r4,r26,r20
	ctx.r4.u64 = ctx.r26.u64 + ctx.r20.u64;
	// add r3,r31,r8
	ctx.r3.u64 = ctx.r31.u64 + ctx.r8.u64;
	// add r5,r25,r20
	ctx.r5.u64 = ctx.r25.u64 + ctx.r20.u64;
	// add r6,r31,r20
	ctx.r6.u64 = ctx.r31.u64 + ctx.r20.u64;
	// add r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 + ctx.r7.u64;
	// cmpw cr6,r27,r19
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r19.s32, ctx.xer);
	// blt cr6,0x881cb1cc
	if (ctx.cr6.lt) goto loc_881CB1CC;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
loc_881CB1CC:
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// stw r27,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// bl 0x881ca338
	ctx.lr = 0x881CB1EC;
	sub_881CA338(ctx, base);
	// lwz r23,404(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
loc_881CB1F0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r21,r21,-1
	ctx.r21.s64 = ctx.r21.s64 + -1;
	// b 0x881cb03c
	goto loc_881CB03C;
loc_881CB1FC:
	// subfic r28,r15,1
	ctx.xer.ca = ctx.r15.u32 <= 1;
	ctx.r28.u64 = static_cast<uint64_t>(1) - ctx.r15.u64;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bgt cr6,0x881cb20c
	if (ctx.cr6.gt) goto loc_881CB20C;
	// li r28,1
	ctx.r28.s64 = 1;
loc_881CB20C:
	// lwz r15,404(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// mullw r11,r28,r22
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r22.s32);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// add r24,r11,r15
	ctx.r24.u64 = ctx.r11.u64 + ctx.r15.u64;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// neg r19,r14
	ctx.r19.s64 = static_cast<int64_t>(-ctx.r14.u64);
	// lwz r14,396(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// subf r21,r28,r14
	ctx.r21.u64 = ctx.r14.u64 - ctx.r28.u64;
	// lfd f24,1488(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f24.u64 = REX_LOAD_U64(ctx.r11.u32 + 1488);
loc_881CB230:
	// cmpw cr6,r19,r14
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r14.s32, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// blt cr6,0x881cb240
	if (ctx.cr6.lt) goto loc_881CB240;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_881CB240:
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x881cb454
	if (!ctx.cr6.lt) goto loc_881CB454;
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// std r11,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fadd f12,f13,f26
	ctx.f12.f64 = ctx.f13.f64 + ctx.f26.f64;
	// fsub f11,f27,f12
	ctx.f11.f64 = ctx.f27.f64 - ctx.f12.f64;
	// fmul f29,f11,f31
	ctx.f29.f64 = ctx.f11.f64 * ctx.f31.f64;
	// fdiv f1,f29,f30
	ctx.f1.f64 = ctx.f29.f64 / ctx.f30.f64;
	// bl 0x881f0340
	ctx.lr = 0x881CB26C;
	sub_881F0340(ctx, base);
	// fsub f10,f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f25.f64 - ctx.f1.f64;
	// cmpw cr6,r22,r21
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r21.s32, ctx.xer);
	// fmsub f9,f1,f30,f29
	ctx.f9.f64 = std::fma(ctx.f1.f64, ctx.f30.f64, -ctx.f29.f64);
	// fmsub f8,f10,f30,f29
	ctx.f8.f64 = std::fma(ctx.f10.f64, ctx.f30.f64, -ctx.f29.f64);
	// fmadd f7,f9,f31,f28
	ctx.f7.f64 = std::fma(ctx.f9.f64, ctx.f31.f64, ctx.f28.f64);
	// fmadd f6,f8,f31,f28
	ctx.f6.f64 = std::fma(ctx.f8.f64, ctx.f31.f64, ctx.f28.f64);
	// fctiwz f5,f7
	ctx.f5.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f5,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f5.u64);
	// lwz r31,132(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// neg r29,r31
	ctx.r29.s64 = static_cast<int64_t>(-ctx.r31.u64);
	// fctiwz f4,f6
	ctx.f4.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f4,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f4.u64);
	// lwz r30,132(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// neg r27,r30
	ctx.r27.s64 = static_cast<int64_t>(-ctx.r30.u64);
	// mullw r11,r27,r22
	ctx.r11.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r22.s32);
	// add r9,r11,r23
	ctx.r9.u64 = ctx.r11.u64 + ctx.r23.u64;
	// mullw r11,r29,r22
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r22.s32);
	// add r10,r11,r23
	ctx.r10.u64 = ctx.r11.u64 + ctx.r23.u64;
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r5,r11,r15
	ctx.r5.u64 = ctx.r11.u64 + ctx.r15.u64;
	// add r4,r10,r15
	ctx.r4.u64 = ctx.r10.u64 + ctx.r15.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// blt cr6,0x881cb2d0
	if (ctx.cr6.lt) goto loc_881CB2D0;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_881CB2D0:
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// add r7,r27,r22
	ctx.r7.u64 = ctx.r27.u64 + ctx.r22.u64;
	// subf r6,r28,r30
	ctx.r6.u64 = ctx.r30.u64 - ctx.r28.u64;
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r11,r29,r22
	ctx.r11.u64 = ctx.r29.u64 + ctx.r22.u64;
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r8,r22,1
	ctx.r8.s64 = ctx.r22.s64 + 1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// subf r10,r28,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r28.u64;
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// add r7,r24,r9
	ctx.r7.u64 = ctx.r24.u64 + ctx.r9.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// add r3,r24,r3
	ctx.r3.u64 = ctx.r24.u64 + ctx.r3.u64;
	// bl 0x881ca338
	ctx.lr = 0x881CB310;
	sub_881CA338(ctx, base);
	// clrlwi r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881cb440
	if (!ctx.cr6.eq) goto loc_881CB440;
	// srawi r11,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 1;
	// subfic r10,r18,1
	ctx.xer.ca = ctx.r18.u32 <= 1;
	ctx.r10.u64 = static_cast<uint64_t>(1) - ctx.r18.u64;
	// srawi r8,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r31.s32 >> 1;
	// srawi r7,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r30.s32 >> 1;
	// mullw r11,r11,r18
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r18.s32);
	// mullw r9,r7,r10
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// li r26,0
	ctx.r26.s64 = 0;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x881cb440
	if (!ctx.cr6.gt) goto loc_881CB440;
	// add r8,r10,r20
	ctx.r8.u64 = ctx.r10.u64 + ctx.r20.u64;
	// lwz r10,444(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// lwz r4,468(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// subf r25,r29,r27
	ctx.r25.u64 = ctx.r27.u64 - ctx.r29.u64;
	// lwz r6,436(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// add r5,r29,r28
	ctx.r5.u64 = ctx.r29.u64 + ctx.r28.u64;
	// subf r29,r31,r30
	ctx.r29.u64 = ctx.r30.u64 - ctx.r31.u64;
	// lwz r7,412(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// subf r27,r31,r28
	ctx.r27.u64 = ctx.r28.u64 - ctx.r31.u64;
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r4,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r4.u32);
	// subf r31,r20,r6
	ctx.r31.u64 = ctx.r6.u64 - ctx.r20.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// subf r4,r20,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r20.u64;
	// lwz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// subf r30,r17,r7
	ctx.r30.u64 = ctx.r7.u64 - ctx.r17.u64;
	// add r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 + ctx.r17.u64;
	// add r9,r9,r20
	ctx.r9.u64 = ctx.r9.u64 + ctx.r20.u64;
	// subf r3,r17,r20
	ctx.r3.u64 = ctx.r20.u64 - ctx.r17.u64;
	// subf r7,r17,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r17.u64;
loc_881CB3A0:
	// add r6,r27,r10
	ctx.r6.u64 = ctx.r27.u64 + ctx.r10.u64;
	// cmpw cr6,r6,r14
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r14.s32, ctx.xer);
	// bge cr6,0x881cb440
	if (!ctx.cr6.lt) goto loc_881CB440;
	// add r6,r29,r10
	ctx.r6.u64 = ctx.r29.u64 + ctx.r10.u64;
	// cmpw cr6,r6,r22
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x881cb3d0
	if (!ctx.cr6.lt) goto loc_881CB3D0;
	// add. r6,r25,r5
	ctx.r6.u64 = ctx.r25.u64 + ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt 0x881cb3d0
	if (ctx.cr0.lt) goto loc_881CB3D0;
	// lbzx r6,r4,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// lbz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// b 0x881cb41c
	goto loc_881CB41C;
loc_881CB3D0:
	// cmpw cr6,r10,r22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x881cb40c
	if (!ctx.cr6.lt) goto loc_881CB40C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x881cb40c
	if (ctx.cr6.lt) goto loc_881CB40C;
	// fcmpu cr6,f29,f24
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f24.f64);
	// blt cr6,0x881cb3f8
	if (ctx.cr6.lt) goto loc_881CB3F8;
	// lbzx r6,r4,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// lbz r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// b 0x881cb41c
	goto loc_881CB41C;
loc_881CB3F8:
	// add r6,r3,r11
	ctx.r6.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbzx r6,r6,r4
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r4.u32);
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// lbzx r6,r3,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// b 0x881cb41c
	goto loc_881CB41C;
loc_881CB40C:
	// add r6,r3,r31
	ctx.r6.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// lbzx r6,r30,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
loc_881CB41C:
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// stbx r6,r7,r11
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r6.u8);
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + ctx.r16.u64;
	// add r8,r8,r16
	ctx.r8.u64 = ctx.r8.u64 + ctx.r16.u64;
	// add r9,r9,r16
	ctx.r9.u64 = ctx.r9.u64 + ctx.r16.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// cmpw cr6,r26,r22
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x881cb3a0
	if (ctx.cr6.lt) goto loc_881CB3A0;
loc_881CB440:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r23,r23,r22
	ctx.r23.u64 = ctx.r23.u64 + ctx.r22.u64;
	// add r24,r24,r22
	ctx.r24.u64 = ctx.r24.u64 + ctx.r22.u64;
	// addi r21,r21,-1
	ctx.r21.s64 = ctx.r21.s64 + -1;
	// b 0x881cb230
	goto loc_881CB230;
loc_881CB454:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef2c4
	ctx.lr = 0x881CB460;
	__restfpr_24(ctx, base);
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881DC190) {
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
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// bne cr6,0x881dc21c
	if (!ctx.cr6.eq) goto loc_881DC21C;
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881dc1e8
	if (!ctx.cr6.eq) goto loc_881DC1E8;
	// lwz r10,14652(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14652);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,84(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r4,36(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x881DC1D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_881DC1E8:
	// lwz r10,14656(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14656);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,84(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r6,48(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r5,44(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r4,40(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x881DC20C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_881DC21C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881dc25c
	if (!ctx.cr6.eq) goto loc_881DC25C;
	// lwz r10,14664(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14664);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,84(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r6,32(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r5,28(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r4,24(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x881DC24C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_881DC25C:
	// lwz r4,14660(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 14660);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,84(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r8,48(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r7,44(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r6,40(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// lwz r5,32(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r4,28(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x881DC28C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881DD318) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,22101
	ctx.r10.s64 = 1448411136;
	// lis r7,12338
	ctx.r7.s64 = 808583168;
	// ori r8,r10,22857
	ctx.r8.u64 = ctx.r10.u64 | 22857;
	// lis r5,12849
	ctx.r5.s64 = 842072064;
	// lis r4,12850
	ctx.r4.s64 = 842137600;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// ori r6,r7,13385
	ctx.r6.u64 = ctx.r7.u64 | 13385;
	// ori r5,r5,22105
	ctx.r5.u64 = ctx.r5.u64 | 22105;
	// ori r10,r4,13392
	ctx.r10.u64 = ctx.r4.u64 | 13392;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x881dd378
	if (ctx.cr6.eq) goto loc_881DD378;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x881dd378
	if (ctx.cr6.eq) goto loc_881DD378;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x881dd378
	if (ctx.cr6.eq) goto loc_881DD378;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x881dd378
	if (ctx.cr6.eq) goto loc_881DD378;
	// lis r11,12593
	ctx.r11.s64 = 825294848;
	// ori r7,r11,13392
	ctx.r7.u64 = ctx.r11.u64 | 13392;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x881dd378
	if (ctx.cr6.eq) goto loc_881DD378;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_881DD378:
	// lwz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,16(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x881dd3f8
	if (ctx.cr6.eq) goto loc_881DD3F8;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x881dd3f8
	if (ctx.cr6.eq) goto loc_881DD3F8;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x881dd3f8
	if (ctx.cr6.eq) goto loc_881DD3F8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x881dd3f8
	if (ctx.cr6.eq) goto loc_881DD3F8;
	// lis r10,12889
	ctx.r10.s64 = 844693504;
	// ori r4,r10,21849
	ctx.r4.u64 = ctx.r10.u64 | 21849;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x881dd3f8
	if (ctx.cr6.eq) goto loc_881DD3F8;
	// lis r10,22870
	ctx.r10.s64 = 1498808320;
	// ori r4,r10,22869
	ctx.r4.u64 = ctx.r10.u64 | 22869;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x881dd3f8
	if (ctx.cr6.eq) goto loc_881DD3F8;
	// lis r10,21849
	ctx.r10.s64 = 1431896064;
	// ori r4,r10,22105
	ctx.r4.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x881dd3f8
	if (ctx.cr6.eq) goto loc_881DD3F8;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r4,r10,22094
	ctx.r4.u64 = ctx.r10.u64 | 22094;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x881dd3f8
	if (ctx.cr6.eq) goto loc_881DD3F8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881dd408
	if (ctx.cr6.eq) goto loc_881DD408;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x881dd3f8
	if (ctx.cr6.eq) goto loc_881DD3F8;
loc_881DD3F0:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_881DD3F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881dd408
	if (ctx.cr6.eq) goto loc_881DD408;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x881dd42c
	if (!ctx.cr6.eq) goto loc_881DD42C;
loc_881DD408:
	// lhz r10,14(r7)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 14);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// beq cr6,0x881dd42c
	if (ctx.cr6.eq) goto loc_881DD42C;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// beq cr6,0x881dd42c
	if (ctx.cr6.eq) goto loc_881DD42C;
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// beq cr6,0x881dd42c
	if (ctx.cr6.eq) goto loc_881DD42C;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x881dd3f0
	if (!ctx.cr6.eq) goto loc_881DD3F0;
loc_881DD42C:
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x881dd444
	if (ctx.cr6.eq) goto loc_881DD444;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x881dd444
	if (ctx.cr6.eq) goto loc_881DD444;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x881dd460
	if (!ctx.cr6.eq) goto loc_881DD460;
loc_881DD444:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x881dd460
	if (!ctx.cr6.eq) goto loc_881DD460;
	// lhz r10,14(r7)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 14);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x881dd460
	if (!ctx.cr6.eq) goto loc_881DD460;
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_881DD460:
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x881dd478
	if (ctx.cr6.eq) goto loc_881DD478;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x881dd478
	if (ctx.cr6.eq) goto loc_881DD478;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x881dd490
	if (!ctx.cr6.eq) goto loc_881DD490;
loc_881DD478:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x881dd4a8
	if (ctx.cr6.eq) goto loc_881DD4A8;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x881dd4a8
	if (ctx.cr6.eq) goto loc_881DD4A8;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x881dd4a8
	if (ctx.cr6.eq) goto loc_881DD4A8;
loc_881DD490:
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// li r10,7
	ctx.r10.s64 = 7;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
loc_881DD4A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881DE9C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881DE9D0;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r14,356(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// stw r4,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r4.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// srawi r11,r14,31
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r14.s32 >> 31;
	// stw r9,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r9.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r3,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// xor r10,r14,r11
	ctx.r10.u64 = ctx.r14.u64 ^ ctx.r11.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// beq cr6,0x881dea18
	if (ctx.cr6.eq) goto loc_881DEA18;
	// srawi r6,r14,1
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r14.s32 >> 1;
loc_881DEA18:
	// lwz r25,364(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// srawi r11,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r25.s32 >> 31;
	// xor r10,r25,r11
	ctx.r10.u64 = ctx.r25.u64 ^ ctx.r11.u64;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x881dea34
	if (ctx.cr6.eq) goto loc_881DEA34;
	// srawi r25,r25,1
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 1;
loc_881DEA34:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwz r30,340(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// rlwinm r10,r18,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 16) & 0xFFFF0000;
	// lwz r7,348(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// rlwinm r11,r17,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 16) & 0xFFFF0000;
	// lwz r3,380(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// subf r31,r9,r10
	ctx.r31.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subf r29,r9,r11
	ctx.r29.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rotlwi r9,r31,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// rotlwi r8,r29,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// addi r27,r30,-1
	ctx.r27.s64 = ctx.r30.s64 + -1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lis r26,0
	ctx.r26.s64 = 0;
	// andc r9,r27,r9
	ctx.r9.u64 = ctx.r27.u64 & ~ctx.r9.u64;
	// andc r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// clrlwi r23,r3,30
	ctx.r23.u64 = ctx.r3.u32 & 0x3;
	// ori r26,r26,32768
	ctx.r26.u64 = ctx.r26.u64 | 32768;
	// divw r24,r31,r27
	ctx.r24.u64 = uint32_t((ctx.r27.s32 && !(ctx.r31.s32 == INT32_MIN && ctx.r27.s32 == -1)) ? ctx.r31.s32 / ctx.r27.s32 : 0);
	// twllei r27,0
	if (ctx.r27.s32 == 0 || ctx.r27.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// divw r15,r29,r7
	ctx.r15.u64 = uint32_t((ctx.r7.s32 && !(ctx.r29.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r29.s32 / ctx.r7.s32 : 0);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x881deaf8
	if (!ctx.cr6.eq) goto loc_881DEAF8;
	// srawi r9,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r30.s32 >> 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x881deaf8
	if (!ctx.cr6.eq) goto loc_881DEAF8;
	// rlwinm r29,r15,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r24,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// li r31,17
	ctx.r31.s64 = 17;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// bl 0x881de5c8
	ctx.lr = 0x881DEAD8;
	sub_881DE5C8(ctx, base);
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// lwz r3,388(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x881de5c8
	ctx.lr = 0x881DEAF0;
	sub_881DE5C8(ctx, base);
	// lwz r16,96(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x881deba8
	goto loc_881DEBA8;
loc_881DEAF8:
	// srawi r9,r15,4
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r15.s32 >> 4;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r16,r10
	ctx.r16.u64 = ctx.r10.u64;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r20,r26,r8
	ctx.r20.u64 = ctx.r8.u64 - ctx.r26.u64;
	// cmpw cr6,r20,r26
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x881deba8
	if (ctx.cr6.lt) goto loc_881DEBA8;
	// srawi r11,r24,4
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r24.s32 >> 4;
	// lwz r22,388(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// rlwinm r21,r15,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r27,r26,r10
	ctx.r27.u64 = ctx.r10.u64 - ctx.r26.u64;
loc_881DEB38:
	// srawi r9,r23,17
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1FFFF) != 0);
	ctx.r9.s64 = ctx.r23.s32 >> 17;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x881deb94
	if (ctx.cr6.lt) goto loc_881DEB94;
	// mullw r31,r9,r5
	ctx.r31.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r30,r31,r19
	ctx.r30.u64 = ctx.r31.u64 + ctx.r19.u64;
	// add r29,r7,r22
	ctx.r29.u64 = ctx.r7.u64 + ctx.r22.u64;
	// rlwinm r28,r24,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
loc_881DEB60:
	// srawi r9,r10,17
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 17;
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// add r14,r31,r9
	ctx.r14.u64 = ctx.r31.u64 + ctx.r9.u64;
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, ctx.xer);
	// lbzx r9,r30,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// lbzx r14,r14,r4
	ctx.r14.u64 = REX_LOAD_U8(ctx.r14.u32 + ctx.r4.u32);
	// stbx r14,r8,r3
	REX_STORE_U8(ctx.r8.u32 + ctx.r3.u32, ctx.r14.u8);
	// stbx r9,r29,r11
	REX_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r9.u8);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// ble cr6,0x881deb60
	if (!ctx.cr6.gt) goto loc_881DEB60;
	// lwz r14,356(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r28,276(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
loc_881DEB94:
	// add r23,r21,r23
	ctx.r23.u64 = ctx.r21.u64 + ctx.r23.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// cmpw cr6,r23,r20
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r20.s32, ctx.xer);
	// ble cr6,0x881deb38
	if (!ctx.cr6.gt) goto loc_881DEB38;
	// lwz r30,340(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
loc_881DEBA8:
	// clrlwi r11,r28,30
	ctx.r11.u64 = ctx.r28.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881debf4
	if (!ctx.cr6.eq) goto loc_881DEBF4;
	// clrlwi r11,r30,30
	ctx.r11.u64 = ctx.r30.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881debf4
	if (!ctx.cr6.eq) goto loc_881DEBF4;
	// li r11,16
	ctx.r11.s64 = 16;
	// lwz r5,324(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// lwz r4,284(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881de5c8
	ctx.lr = 0x881DEBEC;
	sub_881DE5C8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881DEBF4:
	// srawi r11,r15,4
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r15.s32 >> 4;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r29,r26,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r26.u64;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x881deca0
	if (ctx.cr6.lt) goto loc_881DECA0;
	// srawi r11,r24,4
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r24.s32 >> 4;
	// rlwinm r31,r15,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r30,r14,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r16
	ctx.r10.u64 = ctx.r11.u64 + ctx.r16.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// subf r4,r26,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r26.u64;
loc_881DEC30:
	// add r11,r3,r15
	ctx.r11.u64 = ctx.r3.u64 + ctx.r15.u64;
	// srawi r9,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 16;
	// srawi r6,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpw cr6,r4,r26
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x881dec90
	if (ctx.cr6.lt) goto loc_881DEC90;
	// lwz r5,324(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// mullw r7,r9,r5
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// mullw r9,r6,r5
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// lwz r6,284(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r5,r8,r14
	ctx.r5.u64 = ctx.r8.u64 + ctx.r14.u64;
loc_881DEC68:
	// srawi r9,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 16;
	// lwz r28,364(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// lbzx r27,r7,r9
	ctx.r27.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// lbzx r9,r6,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// stbx r27,r8,r10
	REX_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r27.u8);
	// stbx r9,r5,r10
	REX_STORE_U8(ctx.r5.u32 + ctx.r10.u32, ctx.r9.u8);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// ble cr6,0x881dec68
	if (!ctx.cr6.gt) goto loc_881DEC68;
loc_881DEC90:
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// add r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 + ctx.r8.u64;
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x881dec30
	if (!ctx.cr6.gt) goto loc_881DEC30;
loc_881DECA0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881E1CD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881E1CE0;
	__savegprlr_14(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r31,92(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r8,r8,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// stw r10,76(r1)
	REX_STORE_U32(ctx.r1.u32 + 76, ctx.r10.u32);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// stw r9,68(r1)
	REX_STORE_U32(ctx.r1.u32 + 68, ctx.r9.u32);
	// rlwinm r10,r7,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// stw r6,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// subf r9,r3,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r3.u64;
	// lwz r26,84(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r31,-1
	ctx.r6.s64 = ctx.r31.s64 + -1;
	// subf r10,r3,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// divw r4,r9,r6
	ctx.r4.u64 = uint32_t((ctx.r6.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r9.s32 / ctx.r6.s32 : 0);
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// stw r4,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r4.u32);
	// addi r30,r7,-1
	ctx.r30.s64 = ctx.r7.s64 + -1;
	// addze r7,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r7.s64 = temp.s64;
	// rotlwi r3,r9,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lis r9,0
	ctx.r9.s64 = 0;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r29,r26,-1
	ctx.r29.s64 = ctx.r26.s64 + -1;
	// ori r8,r9,32768
	ctx.r8.u64 = ctx.r9.u64 | 32768;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// andc r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 & ~ctx.r30.u64;
	// andc r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r3.u64;
	// subf r25,r8,r7
	ctx.r25.u64 = ctx.r7.u64 - ctx.r8.u64;
	// divw r19,r10,r29
	ctx.r19.u64 = uint32_t((ctx.r29.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r29.s32 == -1)) ? ctx.r10.s32 / ctx.r29.s32 : 0);
	// twllei r29,0
	if (ctx.r29.s32 == 0 || ctx.r29.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r25,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r25.u32);
	// twlgei r30,-1
	if (ctx.r30.s32 == -1 || ctx.r30.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x881e1eec
	if (!ctx.cr6.eq) goto loc_881E1EEC;
	// mr r15,r8
	ctx.r15.u64 = ctx.r8.u64;
	// li r18,0
	ctx.r18.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x881e2070
	if (!ctx.cr6.gt) goto loc_881E2070;
	// lwz r20,108(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r6,r19,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r20,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r9,r31,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r31.u64;
	// rlwinm r14,r9,1,0,30
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
loc_881E1DA0:
	// addi r9,r18,16
	ctx.r9.s64 = ctx.r18.s64 + 16;
	// mr r17,r9
	ctx.r17.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x881e1db4
	if (!ctx.cr6.gt) goto loc_881E1DB4;
	// mr r17,r26
	ctx.r17.u64 = ctx.r26.u64;
loc_881E1DB4:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpw cr6,r25,r8
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x881e1ed4
	if (!ctx.cr6.gt) goto loc_881E1ED4;
	// subf r16,r18,r17
	ctx.r16.u64 = ctx.r17.u64 - ctx.r18.u64;
	// mullw r10,r16,r20
	ctx.r10.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r20.s32);
	// subfic r7,r10,2
	ctx.xer.ca = ctx.r10.u32 <= 2;
	ctx.r7.u64 = static_cast<uint64_t>(2) - ctx.r10.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
loc_881E1DD0:
	// srawi r7,r8,17
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 17;
	// srawi r3,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 16;
	// add r21,r8,r4
	ctx.r21.u64 = ctx.r8.u64 + ctx.r4.u64;
	// mullw r8,r3,r27
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r27.s32);
	// srawi r3,r21,16
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r21.s32 >> 16;
	// add r30,r8,r28
	ctx.r30.u64 = ctx.r8.u64 + ctx.r28.u64;
	// mullw r8,r3,r27
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r27.s32);
	// add r29,r8,r28
	ctx.r29.u64 = ctx.r8.u64 + ctx.r28.u64;
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// cmpw cr6,r18,r17
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x881e1ebc
	if (!ctx.cr6.lt) goto loc_881E1EBC;
	// lwz r4,76(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 76);
	// addi r3,r16,-1
	ctx.r3.s64 = ctx.r16.s64 + -1;
	// lwz r31,44(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// rlwinm r24,r20,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r26,r7,r4
	ctx.r26.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// rlwinm r7,r3,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// add r25,r26,r31
	ctx.r25.u64 = ctx.r26.u64 + ctx.r31.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// rlwinm r23,r19,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r22,r20,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_881E1E28:
	// srawi r7,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 16;
	// add r4,r8,r19
	ctx.r4.u64 = ctx.r8.u64 + ctx.r19.u64;
	// srawi r3,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 1;
	// add r8,r23,r8
	ctx.r8.u64 = ctx.r23.u64 + ctx.r8.u64;
	// add r31,r26,r3
	ctx.r31.u64 = ctx.r26.u64 + ctx.r3.u64;
	// lbzx r28,r7,r30
	ctx.r28.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r30.u32);
	// lbzx r7,r7,r29
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r29.u32);
	// rotlwi r27,r28,8
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r28.u32, 8);
	// lbzx r3,r25,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r3.u32);
	// rotlwi r3,r3,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 16);
	// stw r7,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r7.u32);
	// srawi r7,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 16;
	// lwz r4,-172(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// rlwinm r28,r4,24,0,7
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF000000;
	// lbzx r4,r31,r5
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r5.u32);
	// lbzx r31,r7,r29
	ctx.r31.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r29.u32);
	// lbzx r7,r7,r30
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r30.u32);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// stw r31,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r31.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// add r4,r28,r3
	ctx.r4.u64 = ctx.r28.u64 + ctx.r3.u64;
	// lwz r28,-172(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// rlwinm r28,r28,24,0,7
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 24) & 0xFF000000;
	// add r27,r27,r31
	ctx.r27.u64 = ctx.r27.u64 + ctx.r31.u64;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// add r3,r28,r3
	ctx.r3.u64 = ctx.r28.u64 + ctx.r3.u64;
	// or r4,r27,r4
	ctx.r4.u64 = ctx.r27.u64 | ctx.r4.u64;
	// or r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 | ctx.r3.u64;
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stwx r3,r11,r24
	REX_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r3.u32);
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// bdnz 0x881e1e28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E1E28;
	// lwz r4,-168(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// lwz r25,-176(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// lwz r28,28(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r27,68(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// lwz r26,84(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_881E1EBC:
	// add r8,r21,r4
	ctx.r8.u64 = ctx.r21.u64 + ctx.r4.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r8,r25
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x881e1dd0
	if (ctx.cr6.lt) goto loc_881E1DD0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 | 32768;
loc_881E1ED4:
	// add r11,r11,r14
	ctx.r11.u64 = ctx.r11.u64 + ctx.r14.u64;
	// add r15,r15,r6
	ctx.r15.u64 = ctx.r15.u64 + ctx.r6.u64;
	// mr r18,r9
	ctx.r18.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x881e1da0
	if (ctx.cr6.lt) goto loc_881E1DA0;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881E1EEC:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r16,0
	ctx.r16.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x881e2070
	if (!ctx.cr6.gt) goto loc_881E2070;
	// lwz r17,108(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r9,r17,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r7,r31,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r31.u64;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r6.u32);
loc_881E1F10:
	// addi r6,r16,16
	ctx.r6.s64 = ctx.r16.s64 + 16;
	// mr r14,r6
	ctx.r14.u64 = ctx.r6.u64;
	// cmpw cr6,r6,r26
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x881e1f24
	if (!ctx.cr6.gt) goto loc_881E1F24;
	// mr r14,r26
	ctx.r14.u64 = ctx.r26.u64;
loc_881E1F24:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmpw cr6,r25,r8
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x881e2054
	if (!ctx.cr6.gt) goto loc_881E2054;
	// subf r15,r16,r14
	ctx.r15.u64 = ctx.r14.u64 - ctx.r16.u64;
	// mullw r9,r15,r17
	ctx.r9.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r17.s32);
	// subfic r7,r9,2
	ctx.xer.ca = ctx.r9.u32 <= 2;
	ctx.r7.u64 = static_cast<uint64_t>(2) - ctx.r9.u64;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
loc_881E1F40:
	// srawi r3,r8,17
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 17;
	// srawi r7,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 16;
	// add r18,r8,r4
	ctx.r18.u64 = ctx.r8.u64 + ctx.r4.u64;
	// mullw r8,r7,r27
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r27.s32);
	// srawi r7,r18,16
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r18.s32 >> 16;
	// add r30,r8,r28
	ctx.r30.u64 = ctx.r8.u64 + ctx.r28.u64;
	// mullw r8,r7,r27
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r27.s32);
	// add r29,r8,r28
	ctx.r29.u64 = ctx.r8.u64 + ctx.r28.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmpw cr6,r16,r14
	ctx.cr6.compare<int32_t>(ctx.r16.s32, ctx.r14.s32, ctx.xer);
	// bge cr6,0x881e203c
	if (!ctx.cr6.lt) goto loc_881E203C;
	// addi r8,r15,-1
	ctx.r8.s64 = ctx.r15.s64 + -1;
	// lwz r31,76(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 76);
	// lwz r28,44(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// rlwinm r24,r17,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// mullw r25,r3,r31
	ctx.r25.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r31.s32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r23,r25,r28
	ctx.r23.u64 = ctx.r25.u64 + ctx.r28.u64;
	// addi r22,r24,2
	ctx.r22.s64 = ctx.r24.s64 + 2;
	// rlwinm r21,r19,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r20,r17,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_881E1F9C:
	// srawi r8,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 16;
	// add r31,r7,r19
	ctx.r31.u64 = ctx.r7.u64 + ctx.r19.u64;
	// srawi r3,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 1;
	// add r7,r21,r7
	ctx.r7.u64 = ctx.r21.u64 + ctx.r7.u64;
	// add r28,r25,r3
	ctx.r28.u64 = ctx.r25.u64 + ctx.r3.u64;
	// lbzx r27,r8,r30
	ctx.r27.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r30.u32);
	// lbzx r8,r8,r29
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r29.u32);
	// lbzx r3,r23,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r3.u32);
	// rotlwi r26,r27,8
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r27.u32, 8);
	// lbzx r28,r28,r5
	ctx.r28.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r5.u32);
	// stw r8,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r8.u32);
	// srawi r8,r31,16
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r31.s32 >> 16;
	// lwz r31,-168(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// rlwinm r27,r31,8,0,23
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xFFFFFF00;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbzx r3,r8,r30
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r30.u32);
	// lbzx r8,r8,r29
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r29.u32);
	// add r26,r26,r31
	ctx.r26.u64 = ctx.r26.u64 + ctx.r31.u64;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// stw r3,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r28,-168(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// rlwinm r28,r28,8,0,23
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFFFF00;
	// add r27,r27,r3
	ctx.r27.u64 = ctx.r27.u64 + ctx.r3.u64;
	// add r31,r28,r31
	ctx.r31.u64 = ctx.r28.u64 + ctx.r31.u64;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// clrlwi r8,r26,16
	ctx.r8.u64 = ctx.r26.u32 & 0xFFFF;
	// clrlwi r28,r27,16
	ctx.r28.u64 = ctx.r27.u32 & 0xFFFF;
	// clrlwi r31,r31,16
	ctx.r31.u64 = ctx.r31.u32 & 0xFFFF;
	// sth r8,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r28,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r28.u16);
	// sthx r31,r11,r24
	REX_STORE_U16(ctx.r11.u32 + ctx.r24.u32, ctx.r31.u16);
	// sthx r3,r22,r11
	REX_STORE_U16(ctx.r22.u32 + ctx.r11.u32, ctx.r3.u16);
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// bdnz 0x881e1f9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E1F9C;
	// lwz r25,-176(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// lwz r28,28(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r27,68(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// lwz r26,84(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_881E203C:
	// add r8,r18,r4
	ctx.r8.u64 = ctx.r18.u64 + ctx.r4.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpw cr6,r8,r25
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x881e1f40
	if (ctx.cr6.lt) goto loc_881E1F40;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r9,32768
	ctx.r8.u64 = ctx.r9.u64 | 32768;
loc_881E2054:
	// lwz r7,-172(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// rlwinm r9,r19,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpw cr6,r6,r26
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x881e1f10
	if (ctx.cr6.lt) goto loc_881E1F10;
loc_881E2070:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881EA768) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x881EA770;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1412(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1412);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881eaab0
	if (!ctx.cr6.eq) goto loc_881EAAB0;
	// addis r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 65536;
	// lbz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// li r19,0
	ctx.r19.s64 = 0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r9,r10,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r4,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r4.u64;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
	// clrlwi r26,r10,16
	ctx.r26.u64 = ctx.r10.u32 & 0xFFFF;
	// lwzx r25,r11,r3
	ctx.r25.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// bne cr6,0x881ea7dc
	if (!ctx.cr6.eq) goto loc_881EA7DC;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// li r26,4097
	ctx.r26.s64 = 4097;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// b 0x881ea7f8
	goto loc_881EA7F8;
loc_881EA7DC:
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x881ea7f8
	if (ctx.cr0.eq) goto loc_881EA7F8;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x881ea7f8
	if (!ctx.cr6.eq) goto loc_881EA7F8;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r23,r11,r31
	ctx.r23.u64 = ctx.r31.u64 - ctx.r11.u64;
loc_881EA7F8:
	// rlwinm r11,r24,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r20,r19
	ctx.r20.u64 = ctx.r19.u64;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r11,r10,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r8,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	// clrlwi r27,r8,16
	ctx.r27.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// bne cr6,0x881ea82c
	if (!ctx.cr6.eq) goto loc_881EA82C;
	// li r27,4097
	ctx.r27.s64 = 4097;
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// b 0x881ea844
	goto loc_881EA844;
loc_881EA82C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x881ea844
	if (!ctx.cr6.eq) goto loc_881EA844;
	// lbz r8,5(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm. r8,r8,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x881ea844
	if (!ctx.cr0.eq) goto loc_881EA844;
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
loc_881EA844:
	// rlwinm r22,r27,4,12,27
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFF0;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// clrlwi r21,r27,16
	ctx.r21.u64 = ctx.r27.u32 & 0xFFFF;
	// subf r28,r22,r10
	ctx.r28.u64 = ctx.r10.u64 - ctx.r22.u64;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// bgt cr6,0x881ea860
	if (ctx.cr6.gt) goto loc_881EA860;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_881EA860:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881eaab0
	if (ctx.cr6.eq) goto loc_881EAAB0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x881e9160
	ctx.lr = 0x881EA874;
	sub_881E9160(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x881eaab0
	if (ctx.cr0.eq) goto loc_881EAAB0;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// lwz r6,1424(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 1424);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x88243750
	ctx.lr = 0x881EA890;
	__imp__NtFreeVirtualMemory(ctx, base);
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 24);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 24);
	// stw r30,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r30.u32);
	// stw r19,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r19.u32);
	// stw r19,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r19.u32);
	// blt 0x881eaab0
	if (ctx.cr0.lt) goto loc_881EAAB0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x881e9338
	ctx.lr = 0x881EA8C4;
	sub_881E9338(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,48(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 48);
	// clrlwi. r11,r26,16
	ctx.r11.u64 = ctx.r26.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,48(r25)
	REX_STORE_U32(ctx.r25.u32 + 48, ctx.r10.u32);
	// beq 0x881ea998
	if (ctx.cr0.eq) goto loc_881EA998;
	// li r10,16
	ctx.r10.s64 = 16;
	// sth r26,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r26.u16);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// stb r10,5(r31)
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r10.u8);
	// lwz r10,48(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,48(r29)
	REX_STORE_U32(ctx.r29.u32 + 48, ctx.r10.u32);
	// stw r31,64(r25)
	REX_STORE_U32(ctx.r25.u32 + 64, ctx.r31.u32);
	// lbz r10,5(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r10,5(r31)
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r10.u8);
	// bge cr6,0x881ea954
	if (!ctx.cr6.lt) goto loc_881EA954;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x881ea97c
	if (!ctx.cr6.eq) goto loc_881EA97C;
	// lhz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r29
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwx r9,r10,r29
	REX_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r9.u32);
	// b 0x881ea97c
	goto loc_881EA97C;
loc_881EA954:
	// lwz r10,384(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 384);
	// addi r9,r29,384
	ctx.r9.s64 = ctx.r29.s64 + 384;
	// b 0x881ea970
	goto loc_881EA970;
loc_881EA960:
	// lhz r7,-8(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + -8);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x881ea978
	if (!ctx.cr6.gt) goto loc_881EA978;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
loc_881EA970:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x881ea960
	if (!ctx.cr6.eq) goto loc_881EA960;
loc_881EA978:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_881EA97C:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r9,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x881ea9dc
	goto loc_881EA9DC;
loc_881EA998:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x881ea9b4
	if (ctx.cr6.eq) goto loc_881EA9B4;
	// lbz r11,5(r23)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r23.u32 + 5);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,5(r23)
	REX_STORE_U8(ctx.r23.u32 + 5, ctx.r11.u8);
	// stw r23,64(r25)
	REX_STORE_U32(ctx.r25.u32 + 64, ctx.r23.u32);
	// b 0x881ea9dc
	goto loc_881EA9DC;
loc_881EA9B4:
	// lwz r11,64(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881ea9dc
	if (ctx.cr6.lt) goto loc_881EA9DC;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x881ea9dc
	if (!ctx.cr6.lt) goto loc_881EA9DC;
	// lwz r11,40(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 40);
	// stw r11,64(r25)
	REX_STORE_U32(ctx.r25.u32 + 64, ctx.r11.u32);
loc_881EA9DC:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x881eaaa0
	if (ctx.cr6.eq) goto loc_881EAAA0;
	// add r11,r22,r28
	ctx.r11.u64 = ctx.r22.u64 + ctx.r28.u64;
	// sth r19,2(r28)
	REX_STORE_U16(ctx.r28.u32 + 2, ctx.r19.u16);
	// lbz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r21,128
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 128, ctx.xer);
	// stb r19,5(r28)
	REX_STORE_U8(ctx.r28.u32 + 5, ctx.r19.u8);
	// stb r10,4(r28)
	REX_STORE_U8(ctx.r28.u32 + 4, ctx.r10.u8);
	// sth r27,0(r28)
	REX_STORE_U16(ctx.r28.u32 + 0, ctx.r27.u16);
	// sth r27,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r27.u16);
	// lbz r11,5(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 5);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r28)
	REX_STORE_U8(ctx.r28.u32 + 5, ctx.r11.u8);
	// bge cr6,0x881eaa54
	if (!ctx.cr6.lt) goto loc_881EAA54;
	// addi r11,r21,48
	ctx.r11.s64 = ctx.r21.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x881eaa78
	if (!ctx.cr6.eq) goto loc_881EAA78;
	// lhz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r29
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r29
	REX_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r9.u32);
	// b 0x881eaa78
	goto loc_881EAA78;
loc_881EAA54:
	// lwz r11,384(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 384);
	// addi r10,r29,384
	ctx.r10.s64 = ctx.r29.s64 + 384;
	// b 0x881eaa70
	goto loc_881EAA70;
loc_881EAA60:
	// lhz r9,-8(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -8);
	// cmplw cr6,r21,r9
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x881eaa78
	if (!ctx.cr6.gt) goto loc_881EAA78;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_881EAA70:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x881eaa60
	if (!ctx.cr6.eq) goto loc_881EAA60;
loc_881EAA78:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r28,8
	ctx.r10.s64 = ctx.r28.s64 + 8;
	// stw r11,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// stw r9,12(r28)
	REX_STORE_U32(ctx.r28.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// add r11,r21,r11
	ctx.r11.u64 = ctx.r21.u64 + ctx.r11.u64;
	// stw r11,48(r29)
	REX_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
	// b 0x881eaac0
	goto loc_881EAAC0;
loc_881EAAA0:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x881eaac0
	if (ctx.cr6.eq) goto loc_881EAAC0;
	// sth r19,2(r20)
	REX_STORE_U16(ctx.r20.u32 + 2, ctx.r19.u16);
	// b 0x881eaac0
	goto loc_881EAAC0;
loc_881EAAB0:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x881e9b48
	ctx.lr = 0x881EAAC0;
	sub_881E9B48(ctx, base);
loc_881EAAC0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(__savevmx_20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx v20,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx v21,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx v22,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx v23,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx v24,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx v25,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx v26,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx v27,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx v28,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx v29,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx v30,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx v31,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_29) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx v29,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx v30,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx v31,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_69) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-944
	ctx.r11.s64 = -944;
	// stvx128 v69,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v69.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-928
	ctx.r11.s64 = -928;
	// stvx128 v70,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v70.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-912
	ctx.r11.s64 = -912;
	// stvx128 v71,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v71.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-896
	ctx.r11.s64 = -896;
	// stvx128 v72,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v72.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-880
	ctx.r11.s64 = -880;
	// stvx128 v73,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v73.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-864
	ctx.r11.s64 = -864;
	// stvx128 v74,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v74.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-848
	ctx.r11.s64 = -848;
	// stvx128 v75,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v75.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-832
	ctx.r11.s64 = -832;
	// stvx128 v76,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v76.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-816
	ctx.r11.s64 = -816;
	// stvx128 v77,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v77.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-800
	ctx.r11.s64 = -800;
	// stvx128 v78,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v78.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-784
	ctx.r11.s64 = -784;
	// stvx128 v79,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v79.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-768
	ctx.r11.s64 = -768;
	// stvx128 v80,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v80.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-752
	ctx.r11.s64 = -752;
	// stvx128 v81,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v81.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-736
	ctx.r11.s64 = -736;
	// stvx128 v82,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v82.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-720
	ctx.r11.s64 = -720;
	// stvx128 v83,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v83.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-704
	ctx.r11.s64 = -704;
	// stvx128 v84,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v84.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-688
	ctx.r11.s64 = -688;
	// stvx128 v85,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v85.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-672
	ctx.r11.s64 = -672;
	// stvx128 v86,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v86.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-656
	ctx.r11.s64 = -656;
	// stvx128 v87,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v87.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-640
	ctx.r11.s64 = -640;
	// stvx128 v88,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v88.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-624
	ctx.r11.s64 = -624;
	// stvx128 v89,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v89.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-608
	ctx.r11.s64 = -608;
	// stvx128 v90,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v90.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-592
	ctx.r11.s64 = -592;
	// stvx128 v91,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v91.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-576
	ctx.r11.s64 = -576;
	// stvx128 v92,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v92.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-560
	ctx.r11.s64 = -560;
	// stvx128 v93,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v93.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// stvx128 v94,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v94.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// stvx128 v95,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v95.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// stvx128 v96,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v96.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// stvx128 v97,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v97.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// stvx128 v98,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v98.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// stvx128 v99,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v99.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// stvx128 v100,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v100.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// stvx128 v101,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v101.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// stvx128 v102,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v102.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v103.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v104.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__savevmx_92) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-576
	ctx.r11.s64 = -576;
	// stvx128 v92,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v92.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-560
	ctx.r11.s64 = -560;
	// stvx128 v93,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v93.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// stvx128 v94,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v94.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// stvx128 v95,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v95.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// stvx128 v96,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v96.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// stvx128 v97,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v97.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// stvx128 v98,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v98.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// stvx128 v99,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v99.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// stvx128 v100,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v100.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// stvx128 v101,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v101.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// stvx128 v102,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v102.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v103.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v104.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__savevmx_121) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_24) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx v24,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__restvmx_74) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_106) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savefpr_16) {
	REX_FUNC_PROLOGUE();
	// stfd f16,-128(r12)
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(sub_881EF478) {
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
	// bl 0x881ef2e8
	ctx.lr = 0x881EF488;
	sub_881EF2E8(ctx, base);
	// lis r11,-30715
	ctx.r11.s64 = -2012938240;
	// lfd f0,-30352(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -30352);
	// fmul f1,f1,f0
	ctx.f1.f64 = ctx.f1.f64 * ctx.f0.f64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881F05B0) {
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
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x880522d8
	ctx.lr = 0x881F05C8;
	sub_880522D8(ctx, base);
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// lis r9,-30678
	ctx.r9.s64 = -2010513408;
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24336(r10)
	REX_STORE_U32(ctx.r10.u32 + 24336, ctx.r11.u32);
	// stw r11,24332(r9)
	REX_STORE_U32(ctx.r9.u32 + 24332, ctx.r11.u32);
	// bne 0x881f05e8
	if (!ctx.cr0.eq) goto loc_881F05E8;
	// li r3,24
	ctx.r3.s64 = 24;
	// b 0x881f05f4
	goto loc_881F05F4;
loc_881F05E8:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_881F05F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881F0F88) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x881F0F90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x881f1000
	if (!ctx.cr6.eq) goto loc_881F1000;
	// andi. r11,r11,264
	ctx.r11.u64 = ctx.r11.u64 & 264;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881f1000
	if (ctx.cr0.eq) goto loc_881F1000;
	// lwz r29,8(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// subf. r30,r29,r11
	ctx.r30.u64 = ctx.r11.u64 - ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x881f1000
	if (!ctx.cr0.gt) goto loc_881F1000;
	// bl 0x881f1308
	ctx.lr = 0x881F0FCC;
	sub_881F1308(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x881f1590
	ctx.lr = 0x881F0FD8;
	sub_881F1590(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x881f0ff4
	if (!ctx.cr6.eq) goto loc_881F0FF4;
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x881f1000
	if (ctx.cr0.eq) goto loc_881F1000;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// b 0x881f0ffc
	goto loc_881F0FFC;
loc_881F0FF4:
	// li r28,-1
	ctx.r28.s64 = -1;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
loc_881F0FFC:
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_881F1000:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881F1E00) {
	REX_FUNC_PROLOGUE();
	// mffs f0
	ctx.f0.u64 = ctx.fpscr.loadFromHost();
	// li r3,4
	ctx.r3.s64 = 4;
	// stfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// lwz r5,-4(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// and r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 & ctx.r5.u64;
	// stw r5,-4(r1)
	REX_STORE_U32(ctx.r1.u32 + -4, ctx.r5.u32);
	// lfd f1,-8(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// mtfsf 255,f1
	ctx.fpscr.storeFromGuest(ctx.f1.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881F6480) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881F6488;
	__savegprlr_14(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,52(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 52);
	// li r28,0
	ctx.r28.s64 = 0;
	// lhz r9,50(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 50);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r10,376(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 376);
	// rlwinm r15,r11,31,1,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r18,r9,31,1,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r3,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r3.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r5,372(r1)
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r5.u32);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// stw r6,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r6.u32);
	// mr r14,r8
	ctx.r14.u64 = ctx.r8.u64;
	// stw r8,396(r1)
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r8.u32);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// stw r15,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r15.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r18,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r18.u32);
	// beq cr6,0x881f64f4
	if (ctx.cr6.eq) goto loc_881F64F4;
	// lwz r8,1368(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 1368);
	// mullw r5,r8,r11
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// mullw r4,r5,r9
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// b 0x881f64f8
	goto loc_881F64F8;
loc_881F64F4:
	// stw r28,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
loc_881F64F8:
	// lwz r11,1368(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 1368);
	// li r8,16384
	ctx.r8.s64 = 16384;
	// lwz r9,272(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 272);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// mullw r10,r11,r15
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r15.s32);
	// mullw r11,r10,r18
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r18.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r25,r11,r9
	ctx.r25.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne cr6,0x881f662c
	if (!ctx.cr6.eq) goto loc_881F662C;
	// lbz r11,33(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 33);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881f657c
	if (ctx.cr6.eq) goto loc_881F657C;
	// mullw r10,r15,r18
	ctx.r10.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r18.s32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881f655c
	if (!ctx.cr6.gt) goto loc_881F655C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_881F654C:
	// lwz r9,348(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 348);
	// stwx r8,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x881f654c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881F654C;
loc_881F655C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881f657c
	if (!ctx.cr6.gt) goto loc_881F657C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_881F656C:
	// lwz r10,352(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 352);
	// stwx r8,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x881f656c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881F656C;
loc_881F657C:
	// mullw r11,r15,r18
	ctx.r11.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r18.s32);
	// lwz r8,1368(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 1368);
	// lwz r9,22264(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 22264);
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r20,r28
	ctx.r20.u64 = ctx.r28.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r19,r28
	ctx.r19.u64 = ctx.r28.u64;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r4,r8,r5
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// rlwinm r11,r4,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r10,r5,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r3,20(r24)
	REX_STORE_U32(ctx.r24.u32 + 20, ctx.r3.u32);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r9,22276(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 22276);
	// lwz r8,1368(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 1368);
	// mullw r6,r8,r5
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r4,28(r24)
	REX_STORE_U32(ctx.r24.u32 + 28, ctx.r4.u32);
	// stw r3,24(r24)
	REX_STORE_U32(ctx.r24.u32 + 24, ctx.r3.u32);
	// lwz r11,22280(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 22280);
	// lwz r10,1368(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 1368);
	// mullw r9,r10,r5
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r28,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r28.u32);
	// stw r28,4(r24)
	REX_STORE_U32(ctx.r24.u32 + 4, ctx.r28.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r28,16(r24)
	REX_STORE_U16(ctx.r24.u32 + 16, ctx.r28.u16);
	// sth r28,18(r24)
	REX_STORE_U16(ctx.r24.u32 + 18, ctx.r28.u16);
	// stw r8,32(r24)
	REX_STORE_U32(ctx.r24.u32 + 32, ctx.r8.u32);
	// lwz r6,21940(r26)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 21940);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x881f66a8
	if (ctx.cr6.eq) goto loc_881F66A8;
	// lwz r11,1372(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 1372);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881f66a8
	if (!ctx.cr6.eq) goto loc_881F66A8;
	// lwz r11,21976(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 21976);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,21976(r26)
	REX_STORE_U32(ctx.r26.u32 + 21976, ctx.r11.u32);
	// b 0x881f66a8
	goto loc_881F66A8;
loc_881F662C:
	// addi r10,r6,92
	ctx.r10.s64 = ctx.r6.s64 + 92;
	// lhz r9,74(r29)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 74);
	// lhz r8,76(r29)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + 76);
	// mullw r11,r18,r7
	ctx.r11.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r7.s32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rotlwi r4,r9,4
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 4);
	// add r5,r10,r29
	ctx.r5.u64 = ctx.r10.u64 + ctx.r29.u64;
	// rotlwi r9,r8,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r20,r4,r7
	ctx.r20.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// stw r8,20(r24)
	REX_STORE_U32(ctx.r24.u32 + 20, ctx.r8.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r18,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r6,r6,r7
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// rlwinm r8,r7,1,16,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFE;
	// mullw r19,r9,r7
	ctx.r19.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// stw r19,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
	// lwz r4,4(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stw r4,24(r24)
	REX_STORE_U32(ctx.r24.u32 + 24, ctx.r4.u32);
	// lwz r3,8(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stw r3,28(r24)
	REX_STORE_U32(ctx.r24.u32 + 28, ctx.r3.u32);
	// add r25,r10,r25
	ctx.r25.u64 = ctx.r10.u64 + ctx.r25.u64;
	// lwz r10,12(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// stw r10,32(r24)
	REX_STORE_U32(ctx.r24.u32 + 32, ctx.r10.u32);
	// stw r6,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r6.u32);
	// stw r11,4(r24)
	REX_STORE_U32(ctx.r24.u32 + 4, ctx.r11.u32);
	// sth r28,18(r24)
	REX_STORE_U16(ctx.r24.u32 + 18, ctx.r28.u16);
	// sth r8,16(r24)
	REX_STORE_U16(ctx.r24.u32 + 16, ctx.r8.u16);
loc_881F66A8:
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// cmplw cr6,r7,r14
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r14.u32, ctx.xer);
	// bge cr6,0x881f877c
	if (!ctx.cr6.lt) goto loc_881F877C;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r17,r11,26488
	ctx.r17.s64 = ctx.r11.s64 + 26488;
	// ori r16,r10,32768
	ctx.r16.u64 = ctx.r10.u64 | 32768;
	// lis r23,2
	ctx.r23.s64 = 131072;
loc_881F66CC:
	// stw r20,8(r24)
	REX_STORE_U32(ctx.r24.u32 + 8, ctx.r20.u32);
	// li r21,1
	ctx.r21.s64 = 1;
	// stw r19,12(r24)
	REX_STORE_U32(ctx.r24.u32 + 12, ctx.r19.u32);
	// sth r28,18(r24)
	REX_STORE_U16(ctx.r24.u32 + 18, ctx.r28.u16);
	// lwz r11,21940(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 21940);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881f69e4
	if (ctx.cr6.eq) goto loc_881F69E4;
	// lwz r11,1304(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 1304);
	// rlwinm r10,r22,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x881f69e4
	if (ctx.cr6.eq) goto loc_881F69E4;
	// lwz r11,21976(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 21976);
	// lwz r10,16(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,21976(r26)
	REX_STORE_U32(ctx.r26.u32 + 21976, ctx.r9.u32);
	// beq cr6,0x881f67f4
	if (ctx.cr6.eq) goto loc_881F67F4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,45260
	ctx.r10.u64 = ctx.r11.u64 | 45260;
	// lwzx r9,r26,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x881f67f4
	if (!ctx.cr6.eq) goto loc_881F67F4;
	// lwz r11,1588(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 1588);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881f67f4
	if (!ctx.cr6.eq) goto loc_881F67F4;
	// lwz r31,0(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881f67d4
	if (ctx.cr6.eq) goto loc_881F67D4;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881f67b0
	if (!ctx.cr6.lt) goto loc_881F67B0;
loc_881F6758:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881f67b0
	if (ctx.cr6.eq) goto loc_881F67B0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881f67a0
	if (!ctx.cr0.lt) goto loc_881F67A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881F67A0;
	sub_88156678(ctx, base);
loc_881F67A0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881f6758
	if (ctx.cr6.gt) goto loc_881F6758;
loc_881F67B0:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x881f67d4
	if (!ctx.cr0.lt) goto loc_881F67D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881F67D4;
	sub_88156678(ctx, base);
loc_881F67D4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,29
	ctx.r4.u64 = ctx.r11.u32 & 0x7;
	// bl 0x88156500
	ctx.lr = 0x881F67E4;
	sub_88156500(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8820ab38
	ctx.lr = 0x881F67F0;
	sub_8820AB38(ctx, base);
	// b 0x881f69d4
	goto loc_881F69D4;
loc_881F67F4:
	// lwz r11,84(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// ld r10,104(r29)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r29.u32 + 104);
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lwz r9,84(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r8,112(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 112);
	// stw r8,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// lwz r7,84(r26)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r6,116(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 116);
	// stw r6,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r6.u32);
	// lwz r5,84(r26)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r4,120(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 120);
	// stw r4,16(r5)
	REX_STORE_U32(ctx.r5.u32 + 16, ctx.r4.u32);
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r11,124(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 124);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r10,84(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r9,128(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// stw r9,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// lwz r8,84(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r7,132(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 132);
	// stw r7,28(r8)
	REX_STORE_U32(ctx.r8.u32 + 28, ctx.r7.u32);
	// lwz r6,84(r26)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r5,136(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 136);
	// stw r5,32(r6)
	REX_STORE_U32(ctx.r6.u32 + 32, ctx.r5.u32);
	// lwz r4,84(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r3,140(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 140);
	// stw r3,36(r4)
	REX_STORE_U32(ctx.r4.u32 + 36, ctx.r3.u32);
	// lwz r11,84(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r10,144(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 144);
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r9,84(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r8,148(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 148);
	// stw r8,44(r9)
	REX_STORE_U32(ctx.r9.u32 + 44, ctx.r8.u32);
	// lwz r7,84(r26)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r6,152(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 152);
	// stw r6,48(r7)
	REX_STORE_U32(ctx.r7.u32 + 48, ctx.r6.u32);
	// lwz r31,84(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r5,28(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x881f6924
	if (ctx.cr6.eq) goto loc_881F6924;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881f6900
	if (!ctx.cr6.lt) goto loc_881F6900;
loc_881F68A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881f6900
	if (ctx.cr6.eq) goto loc_881F6900;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881f68f0
	if (!ctx.cr0.lt) goto loc_881F68F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881F68F0;
	sub_88156678(ctx, base);
loc_881F68F0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881f68a8
	if (ctx.cr6.gt) goto loc_881F68A8;
loc_881F6900:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x881f6924
	if (!ctx.cr0.lt) goto loc_881F6924;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881F6924;
	sub_88156678(ctx, base);
loc_881F6924:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,29
	ctx.r4.u64 = ctx.r11.u32 & 0x7;
	// bl 0x88156500
	ctx.lr = 0x881F6934;
	sub_88156500(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x881adb80
	ctx.lr = 0x881F6940;
	sub_881ADB80(ctx, base);
	// lwz r10,84(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// ld r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r9,104(r29)
	REX_STORE_U64(ctx.r29.u32 + 104, ctx.r9.u64);
	// lwz r8,84(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r7,8(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stw r7,112(r29)
	REX_STORE_U32(ctx.r29.u32 + 112, ctx.r7.u32);
	// lwz r6,84(r26)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r5,12(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// stw r5,116(r29)
	REX_STORE_U32(ctx.r29.u32 + 116, ctx.r5.u32);
	// lwz r4,84(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r3,16(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// stw r3,120(r29)
	REX_STORE_U32(ctx.r29.u32 + 120, ctx.r3.u32);
	// lwz r11,84(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,124(r29)
	REX_STORE_U32(ctx.r29.u32 + 124, ctx.r10.u32);
	// lwz r9,84(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r8,24(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// stw r8,128(r29)
	REX_STORE_U32(ctx.r29.u32 + 128, ctx.r8.u32);
	// lwz r7,84(r26)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r6,28(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// stw r6,132(r29)
	REX_STORE_U32(ctx.r29.u32 + 132, ctx.r6.u32);
	// lwz r5,84(r26)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r4,32(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 32);
	// stw r4,136(r29)
	REX_STORE_U32(ctx.r29.u32 + 136, ctx.r4.u32);
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// stw r11,140(r29)
	REX_STORE_U32(ctx.r29.u32 + 140, ctx.r11.u32);
	// lwz r10,84(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r9,40(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// stw r9,144(r29)
	REX_STORE_U32(ctx.r29.u32 + 144, ctx.r9.u32);
	// lwz r8,84(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r7,44(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 44);
	// stw r7,148(r29)
	REX_STORE_U32(ctx.r29.u32 + 148, ctx.r7.u32);
	// lwz r6,84(r26)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r5,48(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 48);
	// stw r5,152(r29)
	REX_STORE_U32(ctx.r29.u32 + 152, ctx.r5.u32);
loc_881F69D4:
	// stw r21,1948(r26)
	REX_STORE_U32(ctx.r26.u32 + 1948, ctx.r21.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stb r21,1251(r29)
	REX_STORE_U8(ctx.r29.u32 + 1251, ctx.r21.u8);
	// bne cr6,0x881f8844
	if (!ctx.cr6.eq) goto loc_881F8844;
loc_881F69E4:
	// lwz r11,3988(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 3988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881f6b34
	if (ctx.cr6.eq) goto loc_881F6B34;
	// lwz r11,288(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 288);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x881f6b34
	if (ctx.cr6.eq) goto loc_881F6B34;
	// lwz r11,84(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// ld r10,104(r29)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r29.u32 + 104);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lwz r9,112(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 112);
	// lwz r8,84(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// stw r9,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r7,116(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 116);
	// lwz r6,84(r26)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// stw r7,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r7.u32);
	// lwz r5,120(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 120);
	// lwz r11,84(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// stw r5,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// lwz r10,124(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 124);
	// lwz r9,84(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// stw r10,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// lwz r8,128(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// lwz r7,84(r26)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// stw r8,24(r7)
	REX_STORE_U32(ctx.r7.u32 + 24, ctx.r8.u32);
	// lwz r6,84(r26)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r5,132(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 132);
	// stw r5,28(r6)
	REX_STORE_U32(ctx.r6.u32 + 28, ctx.r5.u32);
	// lwz r11,136(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 136);
	// lwz r10,84(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// stw r11,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// lwz r9,84(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r8,140(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 140);
	// stw r8,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r8.u32);
	// lwz r7,84(r26)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r6,144(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 144);
	// stw r6,40(r7)
	REX_STORE_U32(ctx.r7.u32 + 40, ctx.r6.u32);
	// lwz r5,84(r26)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r11,148(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 148);
	// stw r11,44(r5)
	REX_STORE_U32(ctx.r5.u32 + 44, ctx.r11.u32);
	// lwz r10,84(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r9,152(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 152);
	// stw r9,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
	// bl 0x881adf70
	ctx.lr = 0x881F6A98;
	sub_881ADF70(ctx, base);
	// lwz r8,84(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ld r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// std r7,104(r29)
	REX_STORE_U64(ctx.r29.u32 + 104, ctx.r7.u64);
	// lwz r6,84(r26)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r5,8(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// stw r5,112(r29)
	REX_STORE_U32(ctx.r29.u32 + 112, ctx.r5.u32);
	// lwz r4,84(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r3,12(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// stw r3,116(r29)
	REX_STORE_U32(ctx.r29.u32 + 116, ctx.r3.u32);
	// lwz r11,84(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,120(r29)
	REX_STORE_U32(ctx.r29.u32 + 120, ctx.r10.u32);
	// lwz r9,84(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r8,20(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// stw r8,124(r29)
	REX_STORE_U32(ctx.r29.u32 + 124, ctx.r8.u32);
	// lwz r7,84(r26)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r6,24(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 24);
	// stw r6,128(r29)
	REX_STORE_U32(ctx.r29.u32 + 128, ctx.r6.u32);
	// lwz r5,84(r26)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r4,28(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// stw r4,132(r29)
	REX_STORE_U32(ctx.r29.u32 + 132, ctx.r4.u32);
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// stw r11,136(r29)
	REX_STORE_U32(ctx.r29.u32 + 136, ctx.r11.u32);
	// lwz r10,84(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r9,36(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// stw r9,140(r29)
	REX_STORE_U32(ctx.r29.u32 + 140, ctx.r9.u32);
	// lwz r8,84(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r7,40(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// stw r7,144(r29)
	REX_STORE_U32(ctx.r29.u32 + 144, ctx.r7.u32);
	// lwz r6,84(r26)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r5,44(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 44);
	// stw r5,148(r29)
	REX_STORE_U32(ctx.r29.u32 + 148, ctx.r5.u32);
	// lwz r4,84(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r3,48(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// stw r3,152(r29)
	REX_STORE_U32(ctx.r29.u32 + 152, ctx.r3.u32);
	// bne cr6,0x881f8844
	if (!ctx.cr6.eq) goto loc_881F8844;
loc_881F6B34:
	// lwz r10,1304(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 1304);
	// rlwinm r9,r22,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r8,r22
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r22.u64);
	// lhz r7,50(r29)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r29.u32 + 50);
	// clrlwi r6,r22,31
	ctx.r6.u64 = ctx.r22.u32 & 0x1;
	// srawi r11,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 31;
	// neg r5,r6
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// lwzx r4,r10,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// and r10,r5,r7
	ctx.r10.u64 = ctx.r5.u64 & ctx.r7.u64;
	// or r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 | ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r21,r11,-1
	ctx.r21.s64 = ctx.r11.s64 + -1;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// stw r21,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
	// beq cr6,0x881f871c
	if (ctx.cr6.eq) goto loc_881F871C;
	// b 0x881f6b84
	goto loc_881F6B84;
loc_881F6B80:
	// lwz r21,88(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_881F6B84:
	// lwz r31,0(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r11,128
	ctx.r11.s64 = 128;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// dcbt r11,r10
	// li r9,256
	ctx.r9.s64 = 256;
	// dcbt r9,r10
	// lwz r11,1232(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 1232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881f6bb8
	if (!ctx.cr6.eq) goto loc_881F6BB8;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x881f6ce8
	goto loc_881F6CE8;
loc_881F6BB8:
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
	// blt cr6,0x881f6ca4
	if (ctx.cr6.lt) goto loc_881F6CA4;
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
	// bge cr6,0x881f6c9c
	if (!ctx.cr6.lt) goto loc_881F6C9C;
loc_881F6C04:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881f6c30
	if (ctx.cr6.lt) goto loc_881F6C30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881F6C20;
	sub_88156440(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881f6c04
	if (ctx.cr6.eq) goto loc_881F6C04;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881f6cdc
	goto loc_881F6CDC;
loc_881F6C30:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r7,3(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
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
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// sld r11,r11,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r3.u8 & 0x7F));
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// std r8,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
loc_881F6C9C:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881f6cdc
	goto loc_881F6CDC;
loc_881F6CA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x881F6CAC;
	sub_88156500(ctx, base);
loc_881F6CAC:
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
	ctx.lr = 0x881F6CC4;
	sub_88156500(ctx, base);
	// add r10,r30,r16
	ctx.r10.u64 = ctx.r30.u64 + ctx.r16.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881f6cac
	if (ctx.cr6.lt) goto loc_881F6CAC;
loc_881F6CDC:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,63
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 63, ctx.xer);
	// bgt cr6,0x881f8770
	if (ctx.cr6.gt) goto loc_881F8770;
loc_881F6CE8:
	// rlwinm r11,r10,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,0
	ctx.r7.s64 = 0;
	// sth r11,6(r25)
	REX_STORE_U16(ctx.r25.u32 + 6, ctx.r11.u16);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lhz r4,50(r29)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r29.u32 + 50);
	// rlwinm r3,r4,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// and r11,r3,r21
	ctx.r11.u64 = ctx.r3.u64 & ctx.r21.u64;
	// lwz r5,1264(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 1264);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbzx r10,r5,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r8,r25
	ctx.r11.u64 = ctx.r25.u64 - ctx.r8.u64;
	// lbz r6,5(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// and r8,r6,r21
	ctx.r8.u64 = ctx.r6.u64 & ctx.r21.u64;
	// beq cr6,0x881f6d3c
	if (ctx.cr6.eq) goto loc_881F6D3C;
	// lbz r11,-19(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -19);
	// lbz r9,-19(r25)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r25.u32 + -19);
	// and r7,r11,r21
	ctx.r7.u64 = ctx.r11.u64 & ctx.r21.u64;
loc_881F6D3C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lwz r6,1260(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 1260);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// rlwimi r11,r9,0,30,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// rlwinm r9,r8,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// rlwimi r5,r11,3,26,27
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x30) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwinm r4,r7,0,28,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	// rlwinm r8,r5,1,25,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x70;
	// clrlwi r3,r10,28
	ctx.r3.u64 = ctx.r10.u32 & 0xF;
	// or r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 | ctx.r4.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// or r4,r5,r3
	ctx.r4.u64 = ctx.r5.u64 | ctx.r3.u64;
	// lbzx r11,r6,r4
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r4.u32);
	// beq cr6,0x881f6d7c
	if (ctx.cr6.eq) goto loc_881F6D7C;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
loc_881F6D7C:
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// lwz r9,1168(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 1168);
	// rlwimi r10,r11,0,28,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF0);
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// clrlwi r30,r10,24
	ctx.r30.u64 = ctx.r10.u32 & 0xFF;
	// bne cr6,0x881f6da0
	if (!ctx.cr6.eq) goto loc_881F6DA0;
	// lbz r11,1254(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 1254);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881f6dd8
	if (!ctx.cr6.eq) goto loc_881F6DD8;
loc_881F6DA0:
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
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
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881f6dc8
	if (!ctx.cr0.lt) goto loc_881F6DC8;
	// bl 0x88156678
	ctx.lr = 0x881F6DC8;
	sub_88156678(ctx, base);
loc_881F6DC8:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// rlwimi r11,r10,3,27,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x18) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r11,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_881F6DD8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881f8770
	if (!ctx.cr6.eq) goto loc_881F8770;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// stb r30,5(r25)
	REX_STORE_U8(ctx.r25.u32 + 5, ctx.r30.u8);
	// rlwinm r9,r11,0,10,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF3FFFFF;
	// stw r9,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
	// lbz r8,28(r29)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r29.u32 + 28);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x881f6e78
	if (ctx.cr6.eq) goto loc_881F6E78;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881f6e78
	if (ctx.cr6.eq) goto loc_881F6E78;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
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
	// bge 0x881f6e34
	if (!ctx.cr0.lt) goto loc_881F6E34;
	// bl 0x88156678
	ctx.lr = 0x881F6E34;
	sub_88156678(ctx, base);
loc_881F6E34:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x881f6e6c
	if (ctx.cr6.eq) goto loc_881F6E6C;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
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
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881f6e68
	if (!ctx.cr0.lt) goto loc_881F6E68;
	// bl 0x88156678
	ctx.lr = 0x881F6E68;
	sub_88156678(ctx, base);
loc_881F6E68:
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
loc_881F6E6C:
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// rlwimi r10,r11,22,8,9
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0xC00000) | (ctx.r10.u64 & 0xFFFFFFFFFF3FFFFF);
	// stw r10,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
loc_881F6E78:
	// lbz r11,33(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 33);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881f6ec8
	if (ctx.cr6.eq) goto loc_881F6EC8;
	// lbz r11,1255(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 1255);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881f6ec8
	if (!ctx.cr6.eq) goto loc_881F6EC8;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
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
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881f6ebc
	if (!ctx.cr0.lt) goto loc_881F6EBC;
	// bl 0x88156678
	ctx.lr = 0x881F6EBC;
	sub_88156678(ctx, base);
loc_881F6EBC:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// rlwimi r11,r31,11,20,20
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 11) & 0x800) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r11,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_881F6EC8:
	// lbz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 24);
	// stb r11,4(r25)
	REX_STORE_U8(ctx.r25.u32 + 4, ctx.r11.u8);
	// lbz r10,27(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 27);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881f719c
	if (ctx.cr6.eq) goto loc_881F719C;
	// lbz r11,1245(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 1245);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881f6f2c
	if (ctx.cr6.eq) goto loc_881F6F2C;
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r9,r10,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	// and r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x881f6f10
	if (ctx.cr6.eq) goto loc_881F6F10;
	// lbz r11,1246(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 1246);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r10,r11,255
	ctx.r10.s64 = ctx.r11.s64 + 255;
	// stb r10,4(r25)
	REX_STORE_U8(ctx.r25.u32 + 4, ctx.r10.u8);
	// b 0x881f7188
	goto loc_881F7188;
loc_881F6F10:
	// lbz r10,1244(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 1244);
	// lbz r11,1249(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 1249);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r11,255
	ctx.r9.s64 = ctx.r11.s64 + 255;
	// stb r9,4(r25)
	REX_STORE_U8(ctx.r25.u32 + 4, ctx.r9.u8);
	// b 0x881f7188
	goto loc_881F7188;
loc_881F6F2C:
	// lwz r31,0(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// lbz r11,1250(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 1250);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x881f701c
	if (ctx.cr6.eq) goto loc_881F701C;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881f6fac
	if (!ctx.cr6.lt) goto loc_881F6FAC;
loc_881F6F54:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881f6fac
	if (ctx.cr6.eq) goto loc_881F6FAC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881f6f9c
	if (!ctx.cr0.lt) goto loc_881F6F9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881F6F9C;
	sub_88156678(ctx, base);
loc_881F6F9C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881f6f54
	if (ctx.cr6.gt) goto loc_881F6F54;
loc_881F6FAC:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881f6fe4
	if (!ctx.cr0.lt) goto loc_881F6FE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881F6FE4;
	sub_88156678(ctx, base);
loc_881F6FE4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881f7000
	if (ctx.cr6.eq) goto loc_881F7000;
	// lbz r11,1246(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 1246);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r11,4(r25)
	REX_STORE_U8(ctx.r25.u32 + 4, ctx.r11.u8);
	// b 0x881f7188
	goto loc_881F7188;
loc_881F7000:
	// lbz r10,1244(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 1244);
	// lbz r11,1249(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 1249);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r11,4(r25)
	REX_STORE_U8(ctx.r25.u32 + 4, ctx.r11.u8);
	// b 0x881f7188
	goto loc_881F7188;
loc_881F701C:
	// li r30,3
	ctx.r30.s64 = 3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x881f7080
	if (!ctx.cr6.lt) goto loc_881F7080;
loc_881F7028:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881f7080
	if (ctx.cr6.eq) goto loc_881F7080;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881f7070
	if (!ctx.cr0.lt) goto loc_881F7070;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881F7070;
	sub_88156678(ctx, base);
loc_881F7070:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881f7028
	if (ctx.cr6.gt) goto loc_881F7028;
loc_881F7080:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881f70b8
	if (!ctx.cr0.lt) goto loc_881F70B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881F70B8;
	sub_88156678(ctx, base);
loc_881F70B8:
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// bne cr6,0x881f7174
	if (!ctx.cr6.eq) goto loc_881F7174;
	// lwz r31,0(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r30,5
	ctx.r30.s64 = 5;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x881f7134
	if (!ctx.cr6.lt) goto loc_881F7134;
loc_881F70DC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881f7134
	if (ctx.cr6.eq) goto loc_881F7134;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881f7124
	if (!ctx.cr0.lt) goto loc_881F7124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881F7124;
	sub_88156678(ctx, base);
loc_881F7124:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881f70dc
	if (ctx.cr6.gt) goto loc_881F70DC;
loc_881F7134:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881f716c
	if (!ctx.cr0.lt) goto loc_881F716C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881F716C;
	sub_88156678(ctx, base);
loc_881F716C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x881f717c
	goto loc_881F717C;
loc_881F7174:
	// lbz r11,1244(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 1244);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_881F717C:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,4(r25)
	REX_STORE_U8(ctx.r25.u32 + 4, ctx.r11.u8);
loc_881F7188:
	// lbz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x881f8770
	if (ctx.cr6.lt) goto loc_881F8770;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// bgt cr6,0x881f8770
	if (ctx.cr6.gt) goto loc_881F8770;
loc_881F719C:
	// lbz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 4);
	// lbz r9,5(r25)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r25.u32 + 5);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lbz r8,28(r29)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r29.u32 + 28);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,388(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 388);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// beq cr6,0x881f71f0
	if (ctx.cr6.eq) goto loc_881F71F0;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,396(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 396);
	// lwz r9,400(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 400);
	// rlwinm r11,r11,12,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// b 0x881f7200
	goto loc_881F7200;
loc_881F71F0:
	// addi r11,r29,404
	ctx.r11.s64 = ctx.r29.s64 + 404;
	// addi r10,r29,416
	ctx.r10.s64 = ctx.r29.s64 + 416;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
loc_881F7200:
	// li r14,0
	ctx.r14.s64 = 0;
	// stw r14,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
loc_881F7208:
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// srawi. r11,r14,2
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r14.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r16,119
	ctx.r16.s64 = 119;
	// bne 0x881f7284
	if (!ctx.cr0.eq) goto loc_881F7284;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r14,18
	ctx.r9.s64 = ctx.r14.s64 + 18;
	// srawi r11,r14,1
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r14.s32 >> 1;
	// lwz r7,104(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r8,r10,1,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x2;
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// or r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 | ctx.r11.u64;
	// lwz r18,1224(r29)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r29.u32 + 1224);
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lwz r7,432(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 432);
	// addi r8,r10,184
	ctx.r8.s64 = ctx.r10.s64 + 184;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r4,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// lhzx r9,r5,r29
	ctx.r9.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r29.u32);
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r8,r14,31
	ctx.r8.u64 = ctx.r14.u32 & 0x1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// neg r9,r3
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lhzx r4,r5,r29
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r29.u32);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r21,r10,r7
	ctx.r21.u64 = ctx.r10.u64 + ctx.r7.u64;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// b 0x881f72d0
	goto loc_881F72D0;
loc_881F7284:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r14,105
	ctx.r10.s64 = ctx.r14.s64 + 105;
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// lwz r7,108(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r5,r11,182
	ctx.r5.s64 = ctx.r11.s64 + 182;
	// lwz r18,1228(r29)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r29.u32 + 1228);
	// srawi r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r7,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// lwzx r10,r8,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// neg r9,r4
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r4.u64);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lhzx r8,r3,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r29.u32);
	// add r21,r10,r11
	ctx.r21.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
loc_881F72D0:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r10,1168(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 1168);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// lwz r15,16(r11)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bne cr6,0x881f78dc
	if (!ctx.cr6.eq) goto loc_881F78DC;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x881f7310
	if (ctx.cr6.eq) goto loc_881F7310;
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// li r27,8
	ctx.r27.s64 = 8;
	// subf r30,r11,r21
	ctx.r30.u64 = ctx.r21.u64 - ctx.r11.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_881F7310:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x881f7538
	if (ctx.cr6.eq) goto loc_881F7538;
	// addic. r28,r21,-32
	ctx.xer.ca = ctx.r21.u32 > 31;
	ctx.r28.s64 = ctx.r21.s64 + -32;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// beq 0x881f78d0
	if (ctx.cr0.eq) goto loc_881F78D0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881f7538
	if (ctx.cr6.eq) goto loc_881F7538;
	// lhz r10,-16(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + -16);
	// lhz r8,16(r30)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + 16);
	// lhz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lbz r6,27(r29)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r29.u32 + 27);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x881f7508
	if (ctx.cr6.eq) goto loc_881F7508;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x881f7454
	if (ctx.cr6.eq) goto loc_881F7454;
	// cmpwi cr6,r14,4
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 4, ctx.xer);
	// beq cr6,0x881f7454
	if (ctx.cr6.eq) goto loc_881F7454;
	// cmpwi cr6,r14,5
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 5, ctx.xer);
	// beq cr6,0x881f7454
	if (ctx.cr6.eq) goto loc_881F7454;
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 1, ctx.xer);
	// bne cr6,0x881f73ec
	if (!ctx.cr6.eq) goto loc_881F73EC;
	// lhz r8,50(r29)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + 50);
	// lbz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r25.u32 + 4);
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r7,388(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 388);
	// rotlwi r6,r10,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// rlwinm r3,r8,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r3,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 + ctx.r7.u64;
	// subf r3,r8,r25
	ctx.r3.u64 = ctx.r25.u64 - ctx.r8.u64;
	// lwz r8,16(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// lbz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// rlwinm r6,r8,2,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFC;
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r6,r17
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r17.u32);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r6,16(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// mullw r3,r8,r6
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// mullw r10,r6,r5
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// mullw r9,r3,r9
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r7,r9,r23
	ctx.r7.u64 = ctx.r9.u64 + ctx.r23.u64;
	// add r6,r8,r23
	ctx.r6.u64 = ctx.r8.u64 + ctx.r23.u64;
	// srawi r9,r7,18
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3FFFF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 18;
	// srawi r5,r6,18
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 18;
	// b 0x881f7508
	goto loc_881F7508;
loc_881F73EC:
	// cmpwi cr6,r14,2
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 2, ctx.xer);
	// bne cr6,0x881f7508
	if (!ctx.cr6.eq) goto loc_881F7508;
	// lbz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r25.u32 + 4);
	// lbz r8,-20(r25)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r25.u32 + -20);
	// rotlwi r6,r10,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwz r7,388(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 388);
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rotlwi r10,r8,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 + ctx.r7.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r6,16(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// rlwinm r3,r6,2,24,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFC;
	// lwz r10,16(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// mullw r8,r10,r4
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lwzx r7,r3,r17
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r17.u32);
	// mullw r6,r7,r10
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// mullw r4,r6,r9
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// mullw r3,r7,r8
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r10,r4,r23
	ctx.r10.u64 = ctx.r4.u64 + ctx.r23.u64;
	// add r8,r3,r23
	ctx.r8.u64 = ctx.r3.u64 + ctx.r23.u64;
	// srawi r9,r10,18
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 18;
	// srawi r4,r8,18
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 18;
	// b 0x881f7508
	goto loc_881F7508;
loc_881F7454:
	// lhz r10,50(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 50);
	// lbz r8,4(r25)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r25.u32 + 4);
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r10,388(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 388);
	// rotlwi r3,r8,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lbz r6,-20(r25)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r25.u32 + -20);
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r7,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// subf r3,r3,r25
	ctx.r3.u64 = ctx.r25.u64 - ctx.r3.u64;
	// rotlwi r8,r6,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lwz r26,16(r7)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// lbz r8,-20(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + -20);
	// rlwinm r31,r6,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// rlwinm r26,r26,2,24,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFC;
	// rotlwi r6,r8,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// rotlwi r3,r7,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r26,r17
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r17.u32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r7,r31,r10
	ctx.r7.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,16(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r8,16(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// mullw r7,r6,r3
	ctx.r7.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r3.s32);
	// mullw r3,r6,r10
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// mullw r10,r8,r4
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// mullw r8,r3,r5
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// mullw r7,r6,r10
	ctx.r7.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// add r6,r9,r23
	ctx.r6.u64 = ctx.r9.u64 + ctx.r23.u64;
	// add r5,r8,r23
	ctx.r5.u64 = ctx.r8.u64 + ctx.r23.u64;
	// add r4,r7,r23
	ctx.r4.u64 = ctx.r7.u64 + ctx.r23.u64;
	// srawi r9,r6,18
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FFFF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 18;
	// srawi r5,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 18;
	// srawi r4,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 18;
loc_881F7508:
	// subf r10,r5,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r5.u64;
	// subf r9,r4,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r4.u64;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// xor r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// xor r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// subf r4,r8,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r8.u64;
	// subf r3,r7,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r7.u64;
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x881f7538
	if (!ctx.cr6.lt) goto loc_881F7538;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r27,8
	ctx.r27.s64 = 8;
loc_881F7538:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881f78d0
	if (ctx.cr6.eq) goto loc_881F78D0;
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// lbz r9,27(r29)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + 27);
	// rlwinm r8,r10,0,27,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x18;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// subfic r7,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.u64 = static_cast<uint64_t>(0) - ctx.r8.u64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r27,r5,r27
	ctx.r27.u64 = ctx.r5.u64 & ctx.r27.u64;
	// beq cr6,0x881f78c4
	if (ctx.cr6.eq) goto loc_881F78C4;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x881f7704
	if (!ctx.cr6.eq) goto loc_881F7704;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x881f75b4
	if (ctx.cr6.eq) goto loc_881F75B4;
	// cmpwi cr6,r14,2
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 2, ctx.xer);
	// beq cr6,0x881f75b4
	if (ctx.cr6.eq) goto loc_881F75B4;
	// cmpwi cr6,r14,4
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 4, ctx.xer);
	// beq cr6,0x881f75b4
	if (ctx.cr6.eq) goto loc_881F75B4;
	// cmpwi cr6,r14,5
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 5, ctx.xer);
	// beq cr6,0x881f75b4
	if (ctx.cr6.eq) goto loc_881F75B4;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r1,142
	ctx.r10.s64 = ctx.r1.s64 + 142;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881F7598:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x881f7598
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881F7598;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// mr r20,r27
	ctx.r20.u64 = ctx.r27.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// b 0x881f7f7c
	goto loc_881F7F7C;
loc_881F75B4:
	// lbz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r25.u32 + 4);
	// li r6,3
	ctx.r6.s64 = 3;
	// lbz r8,-20(r25)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r25.u32 + -20);
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
	// rotlwi r5,r10,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwz r7,388(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 388);
	// rotlwi r4,r8,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lhz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lbz r5,4(r25)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r25.u32 + 4);
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r5,2,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// lwz r4,16(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// addi r5,r1,146
	ctx.r5.s64 = ctx.r1.s64 + 146;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// rlwinm r4,r4,2,24,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFC;
	// lwz r10,16(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// addi r30,r1,148
	ctx.r30.s64 = ctx.r1.s64 + 148;
	// lwzx r8,r6,r17
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r17.u32);
	// subf r5,r11,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r11.u64;
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// lwzx r7,r4,r17
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r17.u32);
	// mullw r6,r7,r10
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// add r4,r6,r23
	ctx.r4.u64 = ctx.r6.u64 + ctx.r23.u64;
	// addi r10,r11,6
	ctx.r10.s64 = ctx.r11.s64 + 6;
	// srawi r4,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 18;
	// subf r6,r11,r31
	ctx.r6.u64 = ctx.r31.u64 - ctx.r11.u64;
	// addi r7,r3,-10
	ctx.r7.s64 = ctx.r3.s64 + -10;
	// sth r4,144(r1)
	REX_STORE_U16(ctx.r1.u32 + 144, ctx.r4.u16);
	// subf r11,r11,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r11.u64;
loc_881F7648:
	// lhz r4,-4(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + -4);
	// lhz r3,-2(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// lhz r31,0(r10)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhz r30,2(r10)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lhz r28,4(r10)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// mullw r4,r4,r8
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// mullw r3,r3,r8
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// mullw r31,r31,r8
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r8.s32);
	// mullw r30,r30,r8
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r8.s32);
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// mullw r3,r3,r9
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// mullw r28,r28,r9
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r9.s32);
	// mullw r31,r31,r9
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// mullw r30,r30,r9
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r9.s32);
	// add r4,r4,r23
	ctx.r4.u64 = ctx.r4.u64 + ctx.r23.u64;
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// mullw r28,r8,r28
	ctx.r28.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// add r31,r31,r23
	ctx.r31.u64 = ctx.r31.u64 + ctx.r23.u64;
	// srawi r4,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 18;
	// add r30,r30,r23
	ctx.r30.u64 = ctx.r30.u64 + ctx.r23.u64;
	// srawi r3,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 18;
	// sth r4,8(r7)
	REX_STORE_U16(ctx.r7.u32 + 8, ctx.r4.u16);
	// add r28,r28,r23
	ctx.r28.u64 = ctx.r28.u64 + ctx.r23.u64;
	// srawi r31,r31,18
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3FFFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 18;
	// srawi r30,r30,18
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3FFFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 18;
	// srawi r28,r28,18
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3FFFF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 18;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// extsh r4,r28
	ctx.r4.s64 = ctx.r28.s16;
	// sthx r31,r6,r10
	REX_STORE_U16(ctx.r6.u32 + ctx.r10.u32, ctx.r31.u16);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// sthx r30,r5,r10
	REX_STORE_U16(ctx.r5.u32 + ctx.r10.u32, ctx.r30.u16);
	// sthx r4,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u16);
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// sthu r3,10(r7)
	ea = 10 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x881f7648
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881F7648;
	// lhz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 144);
	// mr r20,r27
	ctx.r20.u64 = ctx.r27.u64;
	// sth r11,160(r1)
	REX_STORE_U16(ctx.r1.u32 + 160, ctx.r11.u16);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// b 0x881f7f7c
	goto loc_881F7F7C;
loc_881F7704:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x881f7750
	if (ctx.cr6.eq) goto loc_881F7750;
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 1, ctx.xer);
	// beq cr6,0x881f7750
	if (ctx.cr6.eq) goto loc_881F7750;
	// cmpwi cr6,r14,4
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 4, ctx.xer);
	// beq cr6,0x881f7750
	if (ctx.cr6.eq) goto loc_881F7750;
	// cmpwi cr6,r14,5
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 5, ctx.xer);
	// beq cr6,0x881f7750
	if (ctx.cr6.eq) goto loc_881F7750;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r1,142
	ctx.r10.s64 = ctx.r1.s64 + 142;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881F7734:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x881f7734
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881F7734;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// mr r20,r27
	ctx.r20.u64 = ctx.r27.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// b 0x881f7f7c
	goto loc_881F7F7C;
loc_881F7750:
	// lhz r10,50(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 50);
	// li r6,3
	ctx.r6.s64 = 3;
	// lbz r9,4(r25)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r25.u32 + 4);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lhz r3,50(r29)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r29.u32 + 50);
	// lwz r8,388(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 388);
	// addi r31,r1,146
	ctx.r31.s64 = ctx.r1.s64 + 146;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r30,0(r11)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// rlwinm r7,r3,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rotlwi r10,r9,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// rlwinm r6,r5,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r6,r6,r25
	ctx.r6.u64 = ctx.r25.u64 - ctx.r6.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lbz r10,4(r6)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + 4);
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwz r6,16(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// rlwinm r5,r3,2,24,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFC;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r6,2,24,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFC;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r7,r25
	ctx.r6.u64 = ctx.r25.u64 - ctx.r7.u64;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwzx r7,r5,r17
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r17.u32);
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// lwzx r28,r9,r17
	ctx.r28.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r17.u32);
	// addi r26,r1,148
	ctx.r26.s64 = ctx.r1.s64 + 148;
	// addi r9,r10,-10
	ctx.r9.s64 = ctx.r10.s64 + -10;
	// lbz r8,4(r6)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 4);
	// subf r6,r11,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r11.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r10,r11,6
	ctx.r10.s64 = ctx.r11.s64 + 6;
	// subf r5,r11,r31
	ctx.r5.u64 = ctx.r31.u64 - ctx.r11.u64;
	// mullw r4,r3,r30
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// mullw r3,r28,r4
	ctx.r3.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r4.s32);
	// add r4,r3,r23
	ctx.r4.u64 = ctx.r3.u64 + ctx.r23.u64;
	// subf r11,r11,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r11.u64;
	// srawi r3,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 18;
	// sth r3,144(r1)
	REX_STORE_U16(ctx.r1.u32 + 144, ctx.r3.u16);
loc_881F7814:
	// lhz r4,-4(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + -4);
	// mullw r3,r7,r8
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// lhz r31,-2(r10)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// lhz r30,4(r10)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r28,0(r10)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r26,2(r10)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// mullw r4,r4,r3
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// extsh r26,r26
	ctx.r26.s64 = ctx.r26.s16;
	// mullw r31,r31,r3
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r3.s32);
	// mullw r30,r30,r8
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r8.s32);
	// mullw r28,r28,r3
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r3.s32);
	// mullw r3,r26,r3
	ctx.r3.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r3.s32);
	// add r4,r4,r23
	ctx.r4.u64 = ctx.r4.u64 + ctx.r23.u64;
	// add r31,r31,r23
	ctx.r31.u64 = ctx.r31.u64 + ctx.r23.u64;
	// mullw r30,r30,r7
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r7.s32);
	// add r28,r28,r23
	ctx.r28.u64 = ctx.r28.u64 + ctx.r23.u64;
	// srawi r4,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 18;
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// srawi r31,r31,18
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3FFFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 18;
	// sth r4,8(r9)
	REX_STORE_U16(ctx.r9.u32 + 8, ctx.r4.u16);
	// add r30,r30,r23
	ctx.r30.u64 = ctx.r30.u64 + ctx.r23.u64;
	// srawi r28,r28,18
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3FFFF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 18;
	// srawi r3,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 18;
	// srawi r30,r30,18
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3FFFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 18;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r4,r30
	ctx.r4.s64 = ctx.r30.s16;
	// sthx r28,r10,r6
	REX_STORE_U16(ctx.r10.u32 + ctx.r6.u32, ctx.r28.u16);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// sthx r3,r10,r5
	REX_STORE_U16(ctx.r10.u32 + ctx.r5.u32, ctx.r3.u16);
	// sthx r4,r10,r11
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u16);
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// sthu r31,10(r9)
	ea = 10 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r31.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x881f7814
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881F7814;
	// lhz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 144);
	// mr r20,r27
	ctx.r20.u64 = ctx.r27.u64;
	// sth r11,160(r1)
	REX_STORE_U16(ctx.r1.u32 + 160, ctx.r11.u16);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// b 0x881f7f7c
	goto loc_881F7F7C;
loc_881F78C4:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x881f78d0
	if (!ctx.cr6.eq) goto loc_881F78D0;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_881F78D0:
	// mr r20,r27
	ctx.r20.u64 = ctx.r27.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// b 0x881f7f7c
	goto loc_881F7F7C;
loc_881F78DC:
	// lbz r11,33(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 33);
	// li r24,0
	ctx.r24.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x881f7908
	if (ctx.cr6.eq) goto loc_881F7908;
	// lbz r11,1244(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 1244);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bge cr6,0x881f7928
	if (!ctx.cr6.lt) goto loc_881F7928;
loc_881F7908:
	// srawi r11,r15,1
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r15.s32 >> 1;
	// twllei r15,0
	if (ctx.r15.s32 == 0 || ctx.r15.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r7,r11,1024
	ctx.r7.s64 = ctx.r11.s64 + 1024;
	// rotlwi r11,r7,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// divw r27,r7,r15
	ctx.r27.u64 = uint32_t((ctx.r15.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r15.s32 == -1)) ? ctx.r7.s32 / ctx.r15.s32 : 0);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// andc r4,r15,r5
	ctx.r4.u64 = ctx.r15.u64 & ~ctx.r5.u64;
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
loc_881F7928:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x881f7970
	if (ctx.cr6.eq) goto loc_881F7970;
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// lbz r9,1253(r29)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + 1253);
	// li r26,1
	ctx.r26.s64 = 1;
	// subf r30,r11,r21
	ctx.r30.u64 = ctx.r21.u64 - ctx.r11.u64;
	// li r24,8
	ctx.r24.s64 = 8;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lhz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// subf r5,r27,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r27.u64;
	// srawi r4,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 31;
	// xor r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// subf r11,r4,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r4.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881f7970
	if (!ctx.cr6.lt) goto loc_881F7970;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
loc_881F7970:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x881f7ba4
	if (ctx.cr6.eq) goto loc_881F7BA4;
	// addic. r28,r21,-32
	ctx.xer.ca = ctx.r21.u32 > 31;
	ctx.r28.s64 = ctx.r21.s64 + -32;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r24,1
	ctx.r24.s64 = 1;
	// beq 0x881f7f14
	if (ctx.cr0.eq) goto loc_881F7F14;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881f7ba4
	if (ctx.cr6.eq) goto loc_881F7BA4;
	// lhz r11,-16(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + -16);
	// lhz r8,16(r30)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + 16);
	// lhz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lbz r6,27(r29)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r29.u32 + 27);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x881f7b70
	if (ctx.cr6.eq) goto loc_881F7B70;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x881f7ab8
	if (ctx.cr6.eq) goto loc_881F7AB8;
	// cmpwi cr6,r14,4
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 4, ctx.xer);
	// beq cr6,0x881f7ab8
	if (ctx.cr6.eq) goto loc_881F7AB8;
	// cmpwi cr6,r14,5
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 5, ctx.xer);
	// beq cr6,0x881f7ab8
	if (ctx.cr6.eq) goto loc_881F7AB8;
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 1, ctx.xer);
	// bne cr6,0x881f7a50
	if (!ctx.cr6.eq) goto loc_881F7A50;
	// lhz r8,50(r29)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + 50);
	// lbz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 4);
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r7,388(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 388);
	// rotlwi r6,r11,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// rlwinm r3,r8,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r3,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 + ctx.r7.u64;
	// subf r3,r8,r25
	ctx.r3.u64 = ctx.r25.u64 - ctx.r8.u64;
	// lwz r8,16(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// lbz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// rlwinm r6,r8,2,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFC;
	// rotlwi r8,r11,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r6,r17
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r17.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r6,16(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// mullw r3,r6,r9
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// mullw r11,r6,r5
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// mullw r9,r3,r8
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// mullw r8,r11,r8
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r7,r9,r23
	ctx.r7.u64 = ctx.r9.u64 + ctx.r23.u64;
	// add r6,r8,r23
	ctx.r6.u64 = ctx.r8.u64 + ctx.r23.u64;
	// srawi r9,r7,18
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3FFFF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 18;
	// srawi r5,r6,18
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 18;
	// b 0x881f7b70
	goto loc_881F7B70;
loc_881F7A50:
	// cmpwi cr6,r14,2
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 2, ctx.xer);
	// bne cr6,0x881f7b70
	if (!ctx.cr6.eq) goto loc_881F7B70;
	// lbz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 4);
	// lbz r8,-20(r25)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r25.u32 + -20);
	// rotlwi r6,r11,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r7,388(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 388);
	// rotlwi r3,r8,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r11,16(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// lwz r8,16(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r7,r11,2,24,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFC;
	// mullw r6,r8,r9
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lwzx r3,r7,r17
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r17.u32);
	// mullw r11,r8,r4
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// mullw r9,r6,r3
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r3.s32);
	// mullw r8,r11,r3
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// add r7,r9,r23
	ctx.r7.u64 = ctx.r9.u64 + ctx.r23.u64;
	// add r6,r8,r23
	ctx.r6.u64 = ctx.r8.u64 + ctx.r23.u64;
	// srawi r9,r7,18
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3FFFF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 18;
	// srawi r4,r6,18
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 18;
	// b 0x881f7b70
	goto loc_881F7B70;
loc_881F7AB8:
	// lhz r11,50(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 50);
	// lbz r8,4(r25)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r25.u32 + 4);
	// rlwinm r7,r11,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lbz r6,-20(r25)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r25.u32 + -20);
	// rotlwi r3,r8,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lwz r11,388(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 388);
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r14,116(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r3,r7,r31
	ctx.r3.u64 = ctx.r7.u64 + ctx.r31.u64;
	// rotlwi r7,r6,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// rlwinm r3,r3,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// subf r3,r3,r25
	ctx.r3.u64 = ctx.r25.u64 - ctx.r3.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r8,r11
	ctx.r31.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r22,r6,r11
	ctx.r22.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lbz r8,-20(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + -20);
	// lbz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// rotlwi r6,r8,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// rotlwi r3,r7,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lwz r31,16(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lwz r6,16(r22)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r22.u32 + 16);
	// add r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 + ctx.r3.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r3,r31,2,24,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFC;
	// mullw r11,r6,r4
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// lwz r8,16(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r7,16(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// lwzx r6,r3,r17
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r17.u32);
	// mullw r4,r8,r9
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// mullw r3,r7,r5
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// mullw r9,r4,r6
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// mullw r8,r3,r6
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// mullw r7,r11,r6
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// add r6,r9,r23
	ctx.r6.u64 = ctx.r9.u64 + ctx.r23.u64;
	// add r5,r8,r23
	ctx.r5.u64 = ctx.r8.u64 + ctx.r23.u64;
	// add r4,r7,r23
	ctx.r4.u64 = ctx.r7.u64 + ctx.r23.u64;
	// srawi r9,r6,18
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FFFF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 18;
	// srawi r5,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 18;
	// srawi r4,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 18;
loc_881F7B70:
	// subf r11,r5,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r5.u64;
	// subf r9,r4,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r4.u64;
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// xor r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// xor r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// subf r4,r8,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r8.u64;
	// subf r3,r7,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r7.u64;
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x881f7ba4
	if (!ctx.cr6.lt) goto loc_881F7BA4;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r24,8
	ctx.r24.s64 = 8;
loc_881F7BA4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881f7f14
	if (ctx.cr6.eq) goto loc_881F7F14;
	// lbz r11,27(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 27);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881f7f04
	if (ctx.cr6.eq) goto loc_881F7F04;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x881f7d50
	if (!ctx.cr6.eq) goto loc_881F7D50;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x881f7c08
	if (ctx.cr6.eq) goto loc_881F7C08;
	// cmpwi cr6,r14,2
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 2, ctx.xer);
	// beq cr6,0x881f7c08
	if (ctx.cr6.eq) goto loc_881F7C08;
	// cmpwi cr6,r14,4
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 4, ctx.xer);
	// beq cr6,0x881f7c08
	if (ctx.cr6.eq) goto loc_881F7C08;
	// cmpwi cr6,r14,5
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 5, ctx.xer);
	// beq cr6,0x881f7c08
	if (ctx.cr6.eq) goto loc_881F7C08;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// addi r10,r8,-2
	ctx.r10.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881F7BF4:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x881f7bf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881F7BF4;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// b 0x881f7f1c
	goto loc_881F7F1C;
loc_881F7C08:
	// lbz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 4);
	// li r6,3
	ctx.r6.s64 = 3;
	// lbz r8,-20(r25)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r25.u32 + -20);
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
	// rotlwi r5,r11,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r7,388(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 388);
	// rotlwi r4,r8,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lhz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbz r5,4(r25)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r25.u32 + 4);
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r5,2,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r5,r1,146
	ctx.r5.s64 = ctx.r1.s64 + 146;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// rlwinm r4,r4,2,24,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFC;
	// lwz r11,16(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// addi r30,r1,148
	ctx.r30.s64 = ctx.r1.s64 + 148;
	// lwzx r8,r6,r17
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r17.u32);
	// subf r5,r10,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r10.u64;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// lwzx r7,r4,r17
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r17.u32);
	// mullw r6,r7,r11
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// add r4,r6,r23
	ctx.r4.u64 = ctx.r6.u64 + ctx.r23.u64;
	// addi r11,r10,6
	ctx.r11.s64 = ctx.r10.s64 + 6;
	// srawi r4,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 18;
	// subf r6,r10,r31
	ctx.r6.u64 = ctx.r31.u64 - ctx.r10.u64;
	// addi r7,r3,-10
	ctx.r7.s64 = ctx.r3.s64 + -10;
	// sth r4,144(r1)
	REX_STORE_U16(ctx.r1.u32 + 144, ctx.r4.u16);
	// subf r10,r10,r30
	ctx.r10.u64 = ctx.r30.u64 - ctx.r10.u64;
loc_881F7C9C:
	// lhz r4,-4(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// lhz r3,-2(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r31,0(r11)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhz r30,2(r11)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lhz r28,4(r11)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// mullw r3,r3,r9
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// mullw r31,r31,r9
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// mullw r30,r30,r9
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r9.s32);
	// mullw r4,r4,r8
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// mullw r3,r3,r8
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// mullw r28,r28,r9
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r9.s32);
	// mullw r31,r31,r8
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r8.s32);
	// mullw r30,r30,r8
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r8.s32);
	// add r4,r4,r23
	ctx.r4.u64 = ctx.r4.u64 + ctx.r23.u64;
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// mullw r28,r28,r8
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r8.s32);
	// add r31,r31,r23
	ctx.r31.u64 = ctx.r31.u64 + ctx.r23.u64;
	// srawi r4,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 18;
	// add r30,r30,r23
	ctx.r30.u64 = ctx.r30.u64 + ctx.r23.u64;
	// srawi r3,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 18;
	// sth r4,8(r7)
	REX_STORE_U16(ctx.r7.u32 + 8, ctx.r4.u16);
	// add r28,r28,r23
	ctx.r28.u64 = ctx.r28.u64 + ctx.r23.u64;
	// srawi r31,r31,18
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3FFFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 18;
	// srawi r30,r30,18
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3FFFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 18;
	// srawi r28,r28,18
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3FFFF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 18;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// extsh r4,r28
	ctx.r4.s64 = ctx.r28.s16;
	// sthx r31,r6,r11
	REX_STORE_U16(ctx.r6.u32 + ctx.r11.u32, ctx.r31.u16);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// sthx r30,r5,r11
	REX_STORE_U16(ctx.r5.u32 + ctx.r11.u32, ctx.r30.u16);
	// sthx r4,r10,r11
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u16);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// sthu r3,10(r7)
	ea = 10 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x881f7c9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881F7C9C;
	// lhz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 144);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// sth r11,160(r1)
	REX_STORE_U16(ctx.r1.u32 + 160, ctx.r11.u16);
	// b 0x881f7f1c
	goto loc_881F7F1C;
loc_881F7D50:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x881f7d98
	if (ctx.cr6.eq) goto loc_881F7D98;
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 1, ctx.xer);
	// beq cr6,0x881f7d98
	if (ctx.cr6.eq) goto loc_881F7D98;
	// cmpwi cr6,r14,4
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 4, ctx.xer);
	// beq cr6,0x881f7d98
	if (ctx.cr6.eq) goto loc_881F7D98;
	// cmpwi cr6,r14,5
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 5, ctx.xer);
	// beq cr6,0x881f7d98
	if (ctx.cr6.eq) goto loc_881F7D98;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// addi r10,r8,-2
	ctx.r10.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881F7D84:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x881f7d84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881F7D84;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// b 0x881f7f1c
	goto loc_881F7F1C;
loc_881F7D98:
	// lhz r11,50(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 50);
	// li r6,3
	ctx.r6.s64 = 3;
	// lbz r8,4(r25)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r25.u32 + 4);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lhz r3,50(r29)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r29.u32 + 50);
	// lwz r7,388(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 388);
	// addi r31,r1,146
	ctx.r31.s64 = ctx.r1.s64 + 146;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r30,0(r10)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// rlwinm r9,r3,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rotlwi r11,r8,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// rlwinm r6,r5,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// subf r6,r6,r25
	ctx.r6.u64 = ctx.r25.u64 - ctx.r6.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 4);
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r6,16(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// rlwinm r5,r3,2,24,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFC;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r6,2,24,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFC;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r8,r25
	ctx.r8.u64 = ctx.r25.u64 - ctx.r8.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwzx r6,r5,r17
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r17.u32);
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// lwzx r3,r9,r17
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r17.u32);
	// addi r28,r1,148
	ctx.r28.s64 = ctx.r1.s64 + 148;
	// addi r9,r11,-10
	ctx.r9.s64 = ctx.r11.s64 + -10;
	// addi r11,r10,6
	ctx.r11.s64 = ctx.r10.s64 + 6;
	// lbz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 4);
	// lwz r27,16(r7)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// subf r7,r10,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r10.u64;
	// subf r5,r10,r31
	ctx.r5.u64 = ctx.r31.u64 - ctx.r10.u64;
	// mullw r4,r27,r30
	ctx.r4.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r30.s32);
	// mullw r3,r3,r4
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// add r4,r3,r23
	ctx.r4.u64 = ctx.r3.u64 + ctx.r23.u64;
	// subf r10,r10,r28
	ctx.r10.u64 = ctx.r28.u64 - ctx.r10.u64;
	// srawi r3,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 18;
	// sth r3,144(r1)
	REX_STORE_U16(ctx.r1.u32 + 144, ctx.r3.u16);
loc_881F7E5C:
	// lhz r4,-4(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// mullw r3,r6,r8
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// lhz r31,-2(r11)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r30,4(r11)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r28,0(r11)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r27,2(r11)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// mullw r4,r4,r3
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
	// mullw r31,r31,r3
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r3.s32);
	// mullw r30,r30,r8
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r8.s32);
	// mullw r28,r28,r3
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r3.s32);
	// mullw r3,r27,r3
	ctx.r3.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r3.s32);
	// add r4,r4,r23
	ctx.r4.u64 = ctx.r4.u64 + ctx.r23.u64;
	// add r31,r31,r23
	ctx.r31.u64 = ctx.r31.u64 + ctx.r23.u64;
	// mullw r30,r30,r6
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r6.s32);
	// add r28,r28,r23
	ctx.r28.u64 = ctx.r28.u64 + ctx.r23.u64;
	// srawi r4,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 18;
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// srawi r31,r31,18
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3FFFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 18;
	// sth r4,8(r9)
	REX_STORE_U16(ctx.r9.u32 + 8, ctx.r4.u16);
	// add r30,r30,r23
	ctx.r30.u64 = ctx.r30.u64 + ctx.r23.u64;
	// srawi r28,r28,18
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3FFFF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 18;
	// srawi r3,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 18;
	// srawi r30,r30,18
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3FFFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 18;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r4,r30
	ctx.r4.s64 = ctx.r30.s16;
	// sthx r28,r7,r11
	REX_STORE_U16(ctx.r7.u32 + ctx.r11.u32, ctx.r28.u16);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// sthx r3,r5,r11
	REX_STORE_U16(ctx.r5.u32 + ctx.r11.u32, ctx.r3.u16);
	// sthx r4,r10,r11
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u16);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// sthu r31,10(r9)
	ea = 10 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r31.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x881f7e5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881F7E5C;
	// lhz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 144);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// sth r11,160(r1)
	REX_STORE_U16(ctx.r1.u32 + 160, ctx.r11.u16);
	// b 0x881f7f1c
	goto loc_881F7F1C;
loc_881F7F04:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x881f7f1c
	if (!ctx.cr6.eq) goto loc_881F7F1C;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// b 0x881f7f1c
	goto loc_881F7F1C;
loc_881F7F14:
	// addi r10,r29,1256
	ctx.r10.s64 = ctx.r29.s64 + 1256;
	// sth r27,1256(r29)
	REX_STORE_U16(ctx.r29.u32 + 1256, ctx.r27.u16);
loc_881F7F1C:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r9,r11,0,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	// lbz r11,1252(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 1252);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x881f7f5c
	if (ctx.cr6.eq) goto loc_881F7F5C;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x881f7f48
	if (ctx.cr6.eq) goto loc_881F7F48;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x881f7f70
	goto loc_881F7F70;
loc_881F7F48:
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r8,3
	ctx.r8.s64 = 3;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 & ctx.r8.u64;
	// b 0x881f7f70
	goto loc_881F7F70;
loc_881F7F5C:
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r24,0
	ctx.r24.s64 = 0;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_881F7F70:
	// mr r20,r24
	ctx.r20.u64 = ctx.r24.u64;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
loc_881F7F7C:
	// lwz r10,372(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// addi r31,r11,-128
	ctx.r31.s64 = ctx.r11.s64 + -128;
	// stw r31,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r31.u32);
	// dcbzl r0,r31
	ea = (ctx.r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r30,0(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// bne cr6,0x881f7fb0
	if (!ctx.cr6.eq) goto loc_881F7FB0;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// b 0x881f80dc
	goto loc_881F80DC;
loc_881F7FB0:
	// lbz r4,8(r18)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r18.u32 + 8);
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r26,0(r18)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r26
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r26.u32);
	// extsh r28,r6
	ctx.r28.s64 = ctx.r6.s16;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x881f809c
	if (ctx.cr6.lt) goto loc_881F809C;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi r9,r28,28
	ctx.r9.u64 = ctx.r28.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// bge cr6,0x881f8094
	if (!ctx.cr6.lt) goto loc_881F8094;
loc_881F7FFC:
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881f8028
	if (ctx.cr6.lt) goto loc_881F8028;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156440
	ctx.lr = 0x881F8018;
	sub_88156440(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881f7ffc
	if (ctx.cr6.eq) goto loc_881F7FFC;
	// srawi r28,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 4;
	// b 0x881f80dc
	goto loc_881F80DC;
loc_881F8028:
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
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sld r11,r11,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r3.u8 & 0x7F));
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r6,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r6.u64);
loc_881F8094:
	// srawi r28,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 4;
	// b 0x881f80dc
	goto loc_881F80DC;
loc_881F809C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156500
	ctx.lr = 0x881F80A4;
	sub_88156500(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r24,r11,32768
	ctx.r24.u64 = ctx.r11.u64 | 32768;
loc_881F80AC:
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x88156500
	ctx.lr = 0x881F80C4;
	sub_88156500(ctx, base);
	// add r10,r28,r24
	ctx.r10.u64 = ctx.r28.u64 + ctx.r24.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r26
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r26.u32);
	// extsh r28,r8
	ctx.r28.s64 = ctx.r8.s16;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x881f80ac
	if (ctx.cr6.lt) goto loc_881F80AC;
loc_881F80DC:
	// clrlwi r28,r28,16
	ctx.r28.u64 = ctx.r28.u32 & 0xFFFF;
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// cmpw cr6,r28,r16
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r16.s32, ctx.xer);
	// beq cr6,0x881f8204
	if (ctx.cr6.eq) goto loc_881F8204;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x881f8328
	if (ctx.cr6.eq) goto loc_881F8328;
	// cmpwi cr6,r15,4
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 4, ctx.xer);
	// bne cr6,0x881f813c
	if (!ctx.cr6.eq) goto loc_881F813C;
	// ld r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r28,r10,1,63
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r8.u64);
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bge 0x881f8124
	if (!ctx.cr0.lt) goto loc_881F8124;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881F8124;
	sub_88156678(ctx, base);
loc_881F8124:
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r28,r10,16
	ctx.r28.u64 = ctx.r10.u32 & 0xFFFF;
	// b 0x881f82ec
	goto loc_881F82EC;
loc_881F813C:
	// cmpwi cr6,r15,2
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 2, ctx.xer);
	// bne cr6,0x881f82ec
	if (!ctx.cr6.eq) goto loc_881F82EC;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r28,2
	ctx.r28.s64 = 2;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x881f81b4
	if (!ctx.cr6.lt) goto loc_881F81B4;
loc_881F815C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881f81b4
	if (ctx.cr6.eq) goto loc_881F81B4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r28,r11,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r28
	ctx.r11.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r28.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// std r10,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// bge 0x881f81a4
	if (!ctx.cr0.lt) goto loc_881F81A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881F81A4;
	sub_88156678(ctx, base);
loc_881F81A4:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881f815c
	if (ctx.cr6.gt) goto loc_881F815C;
loc_881F81B4:
	// subfic r11,r28,64
	ctx.xer.ca = ctx.r28.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r28.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// clrldi r8,r28,32
	ctx.r8.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r28,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r28,r11,r26
	ctx.r28.u64 = ctx.r11.u64 + ctx.r26.u64;
	// std r4,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r4.u64);
	// bge 0x881f81ec
	if (!ctx.cr0.lt) goto loc_881F81EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881F81EC;
	sub_88156678(ctx, base);
loc_881F81EC:
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// clrlwi r28,r10,16
	ctx.r28.u64 = ctx.r10.u32 & 0xFFFF;
	// b 0x881f82ec
	goto loc_881F82EC;
loc_881F8204:
	// cmpwi cr6,r15,4
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 4, ctx.xer);
	// bgt cr6,0x881f8218
	if (ctx.cr6.gt) goto loc_881F8218;
	// srawi r11,r15,1
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r15.s32 >> 1;
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.u64 = static_cast<uint64_t>(3) - ctx.r11.u64;
	// b 0x881f821c
	goto loc_881F821C;
loc_881F8218:
	// li r11,0
	ctx.r11.s64 = 0;
loc_881F821C:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r28,r11,8
	ctx.r28.s64 = ctx.r11.s64 + 8;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r28,32
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 32, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x881f823c
	if (!ctx.cr6.gt) goto loc_881F823C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x881f82e8
	goto loc_881F82E8;
loc_881F823C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x881f824c
	if (!ctx.cr6.eq) goto loc_881F824C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x881f82e8
	goto loc_881F82E8;
loc_881F824C:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881f82ac
	if (!ctx.cr6.gt) goto loc_881F82AC;
loc_881F8254:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881f82ac
	if (ctx.cr6.eq) goto loc_881F82AC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r28,r11,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r28
	ctx.r11.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r28.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// std r10,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// bge 0x881f829c
	if (!ctx.cr0.lt) goto loc_881F829C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881F829C;
	sub_88156678(ctx, base);
loc_881F829C:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881f8254
	if (ctx.cr6.gt) goto loc_881F8254;
loc_881F82AC:
	// subfic r11,r28,64
	ctx.xer.ca = ctx.r28.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r28.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// clrldi r8,r28,32
	ctx.r8.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r28,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r28,r11,r26
	ctx.r28.u64 = ctx.r11.u64 + ctx.r26.u64;
	// std r4,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r4.u64);
	// bge 0x881f82e4
	if (!ctx.cr0.lt) goto loc_881F82E4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881F82E4;
	sub_88156678(ctx, base);
loc_881F82E4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_881F82E8:
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
loc_881F82EC:
	// ld r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r8,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r8.u64);
	// rldicl r26,r10,1,63
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bge 0x881f8314
	if (!ctx.cr0.lt) goto loc_881F8314;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881F8314;
	sub_88156678(ctx, base);
loc_881F8314:
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r10,r28
	ctx.r10.s64 = ctx.r28.s16;
	// subfic r9,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r9.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// extsh r22,r8
	ctx.r22.s64 = ctx.r8.s16;
loc_881F8328:
	// sth r22,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r22.u16);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881f8770
	if (!ctx.cr6.eq) goto loc_881F8770;
	// lwz r30,120(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881f83a0
	if (ctx.cr6.eq) goto loc_881F83A0;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,1168(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 1168);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bne cr6,0x881f8380
	if (!ctx.cr6.eq) goto loc_881F8380;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// srawi r10,r20,3
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r20.s32 >> 3;
	// rlwinm r9,r11,30,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x6;
	// or r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 | ctx.r10.u64;
	// addi r8,r11,317
	ctx.r8.s64 = ctx.r11.s64 + 317;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r29
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// b 0x881f838c
	goto loc_881F838C;
loc_881F8380:
	// addi r11,r19,317
	ctx.r11.s64 = ctx.r19.s64 + 317;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r29
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
loc_881F838C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x882153a8
	ctx.lr = 0x881F8398;
	sub_882153A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881f8770
	if (ctx.cr6.lt) goto loc_881F8770;
loc_881F83A0:
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x881f8594
	if (ctx.cr6.eq) goto loc_881F8594;
	// lhz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 1, ctx.xer);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sth r8,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// sth r8,0(r21)
	REX_STORE_U16(ctx.r21.u32 + 0, ctx.r8.u16);
	// sth r8,16(r21)
	REX_STORE_U16(ctx.r21.u32 + 16, ctx.r8.u16);
	// bne cr6,0x881f84b8
	if (!ctx.cr6.eq) goto loc_881F84B8;
	// lhz r11,2(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 2);
	// lhz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sth r8,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r8.u16);
	// sth r8,2(r21)
	REX_STORE_U16(ctx.r21.u32 + 2, ctx.r8.u16);
	// lhz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 4);
	// lhz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 4);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sth r4,4(r31)
	REX_STORE_U16(ctx.r31.u32 + 4, ctx.r4.u16);
	// sth r4,4(r21)
	REX_STORE_U16(ctx.r21.u32 + 4, ctx.r4.u16);
	// lhz r11,6(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 6);
	// lhz r10,6(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 6);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r31)
	REX_STORE_U16(ctx.r31.u32 + 6, ctx.r9.u16);
	// sth r9,6(r21)
	REX_STORE_U16(ctx.r21.u32 + 6, ctx.r9.u16);
	// lhz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 8);
	// lhz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sth r5,8(r31)
	REX_STORE_U16(ctx.r31.u32 + 8, ctx.r5.u16);
	// sth r5,8(r21)
	REX_STORE_U16(ctx.r21.u32 + 8, ctx.r5.u16);
	// lhz r10,10(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 10);
	// lhz r11,10(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 10);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// sth r10,10(r31)
	REX_STORE_U16(ctx.r31.u32 + 10, ctx.r10.u16);
	// sth r10,10(r21)
	REX_STORE_U16(ctx.r21.u32 + 10, ctx.r10.u16);
	// lhz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 12);
	// lhz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 12);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// sth r6,12(r31)
	REX_STORE_U16(ctx.r31.u32 + 12, ctx.r6.u16);
	// sth r6,12(r21)
	REX_STORE_U16(ctx.r21.u32 + 12, ctx.r6.u16);
	// lhz r5,14(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 14);
	// lhz r4,14(r27)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r27.u32 + 14);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// sth r11,14(r31)
	REX_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
	// sth r11,14(r21)
	REX_STORE_U16(ctx.r21.u32 + 14, ctx.r11.u16);
	// lhz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 16);
	// sth r10,18(r21)
	REX_STORE_U16(ctx.r21.u32 + 18, ctx.r10.u16);
	// lhz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 32);
	// sth r9,20(r21)
	REX_STORE_U16(ctx.r21.u32 + 20, ctx.r9.u16);
	// lhz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 48);
	// sth r8,22(r21)
	REX_STORE_U16(ctx.r21.u32 + 22, ctx.r8.u16);
	// lhz r7,64(r31)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 64);
	// sth r7,24(r21)
	REX_STORE_U16(ctx.r21.u32 + 24, ctx.r7.u16);
	// lhz r6,80(r31)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + 80);
	// sth r6,26(r21)
	REX_STORE_U16(ctx.r21.u32 + 26, ctx.r6.u16);
	// lhz r5,96(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 96);
	// sth r5,28(r21)
	REX_STORE_U16(ctx.r21.u32 + 28, ctx.r5.u16);
	// lhz r4,112(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 112);
	// sth r4,30(r21)
	REX_STORE_U16(ctx.r21.u32 + 30, ctx.r4.u16);
	// b 0x881f85ec
	goto loc_881F85EC;
loc_881F84B8:
	// cmpwi cr6,r20,8
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 8, ctx.xer);
	// bne cr6,0x881f859c
	if (!ctx.cr6.eq) goto loc_881F859C;
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// sth r11,2(r21)
	REX_STORE_U16(ctx.r21.u32 + 2, ctx.r11.u16);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r21)
	REX_STORE_U32(ctx.r21.u32 + 4, ctx.r10.u32);
	// ld r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 8);
	// std r9,8(r21)
	REX_STORE_U64(ctx.r21.u32 + 8, ctx.r9.u64);
	// lhz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 16);
	// lhz r11,2(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 2);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sth r5,16(r31)
	REX_STORE_U16(ctx.r31.u32 + 16, ctx.r5.u16);
	// sth r5,18(r21)
	REX_STORE_U16(ctx.r21.u32 + 18, ctx.r5.u16);
	// lhz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 4);
	// lhz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// sth r10,32(r31)
	REX_STORE_U16(ctx.r31.u32 + 32, ctx.r10.u16);
	// sth r10,20(r21)
	REX_STORE_U16(ctx.r21.u32 + 20, ctx.r10.u16);
	// lhz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 48);
	// lhz r11,6(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 6);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// sth r6,48(r31)
	REX_STORE_U16(ctx.r31.u32 + 48, ctx.r6.u16);
	// sth r6,22(r21)
	REX_STORE_U16(ctx.r21.u32 + 22, ctx.r6.u16);
	// lhz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 8);
	// lhz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 64);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// sth r11,64(r31)
	REX_STORE_U16(ctx.r31.u32 + 64, ctx.r11.u16);
	// sth r11,24(r21)
	REX_STORE_U16(ctx.r21.u32 + 24, ctx.r11.u16);
	// lhz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 80);
	// lhz r11,10(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 10);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sth r7,80(r31)
	REX_STORE_U16(ctx.r31.u32 + 80, ctx.r7.u16);
	// sth r7,26(r21)
	REX_STORE_U16(ctx.r21.u32 + 26, ctx.r7.u16);
	// lhz r6,12(r27)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r27.u32 + 12);
	// lhz r5,96(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 96);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// sth r3,96(r31)
	REX_STORE_U16(ctx.r31.u32 + 96, ctx.r3.u16);
	// sth r3,28(r21)
	REX_STORE_U16(ctx.r21.u32 + 28, ctx.r3.u16);
	// lhz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 112);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lhz r9,14(r27)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r27.u32 + 14);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sth r7,112(r31)
	REX_STORE_U16(ctx.r31.u32 + 112, ctx.r7.u16);
	// sth r7,30(r21)
	REX_STORE_U16(ctx.r21.u32 + 30, ctx.r7.u16);
	// b 0x881f85ec
	goto loc_881F85EC;
loc_881F8594:
	// sth r11,0(r21)
	REX_STORE_U16(ctx.r21.u32 + 0, ctx.r11.u16);
	// sth r11,16(r21)
	REX_STORE_U16(ctx.r21.u32 + 16, ctx.r11.u16);
loc_881F859C:
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// sth r11,2(r21)
	REX_STORE_U16(ctx.r21.u32 + 2, ctx.r11.u16);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r21)
	REX_STORE_U32(ctx.r21.u32 + 4, ctx.r10.u32);
	// ld r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 8);
	// std r9,8(r21)
	REX_STORE_U64(ctx.r21.u32 + 8, ctx.r9.u64);
	// lhz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 16);
	// sth r8,18(r21)
	REX_STORE_U16(ctx.r21.u32 + 18, ctx.r8.u16);
	// lhz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 32);
	// sth r7,20(r21)
	REX_STORE_U16(ctx.r21.u32 + 20, ctx.r7.u16);
	// lhz r6,48(r31)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + 48);
	// sth r6,22(r21)
	REX_STORE_U16(ctx.r21.u32 + 22, ctx.r6.u16);
	// lhz r5,64(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 64);
	// sth r5,24(r21)
	REX_STORE_U16(ctx.r21.u32 + 24, ctx.r5.u16);
	// lhz r4,80(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 80);
	// sth r4,26(r21)
	REX_STORE_U16(ctx.r21.u32 + 26, ctx.r4.u16);
	// lhz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + 96);
	// sth r3,28(r21)
	REX_STORE_U16(ctx.r21.u32 + 28, ctx.r3.u16);
	// lhz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 112);
	// sth r11,30(r21)
	REX_STORE_U16(ctx.r21.u32 + 30, ctx.r11.u16);
loc_881F85EC:
	// add r11,r14,r25
	ctx.r11.u64 = ctx.r14.u64 + ctx.r25.u64;
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// srawi r10,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r14,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// cmpwi cr6,r14,6
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 6, ctx.xer);
	// stb r9,8(r11)
	REX_STORE_U8(ctx.r11.u32 + 8, ctx.r9.u8);
	// blt cr6,0x881f7208
	if (ctx.cr6.lt) goto loc_881F7208;
	// lbz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 32);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881f8694
	if (ctx.cr6.eq) goto loc_881F8694;
	// lwz r11,1308(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 1308);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x881f8694
	if (ctx.cr6.eq) goto loc_881F8694;
	// lwz r9,124(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x881f8770
	if (ctx.cr6.eq) goto loc_881F8770;
	// lwz r8,372(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// li r7,16384
	ctx.r7.s64 = 16384;
	// lhz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 36);
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u32);
	// lhz r11,38(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 38);
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r5,r9
	REX_STORE_U32(ctx.r5.u32 + ctx.r9.u32, ctx.r7.u32);
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lhz r11,40(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 40);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r3,r9
	REX_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r7.u32);
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lhz r11,42(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 42);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u32);
	// b 0x881f8698
	goto loc_881F8698;
loc_881F8694:
	// lwz r8,372(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
loc_881F8698:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// addi r25,r25,24
	ctx.r25.s64 = ctx.r25.s64 + 24;
	// lhz r10,18(r8)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + 18);
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// lwz r11,12(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// addi r7,r5,1
	ctx.r7.s64 = ctx.r5.s64 + 1;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// stw r11,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// lwz r9,128(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// stw r3,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// sth r6,18(r8)
	REX_STORE_U16(ctx.r8.u32 + 18, ctx.r6.u16);
	// ori r16,r11,32768
	ctx.r16.u64 = ctx.r11.u64 | 32768;
	// stw r5,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r5.u32);
	// blt cr6,0x881f6b80
	if (ctx.cr6.lt) goto loc_881F6B80;
	// lwz r14,396(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// rotlwi r18,r9,0
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r24,372(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r26,356(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r15,136(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r20,92(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r19,96(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r22,84(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_881F871C:
	// lhz r11,16(r24)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r24.u32 + 16);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// cmplw cr6,r22,r14
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r14.u32, ctx.xer);
	// sth r11,16(r24)
	REX_STORE_U16(ctx.r24.u32 + 16, ctx.r11.u16);
	// lhz r11,50(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 50);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r8.u32);
	// lhz r7,74(r29)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r29.u32 + 74);
	// lhz r6,76(r29)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r29.u32 + 76);
	// rotlwi r10,r7,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 4);
	// rotlwi r11,r6,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 3);
	// add r20,r10,r20
	ctx.r20.u64 = ctx.r10.u64 + ctx.r20.u64;
	// add r19,r11,r19
	ctx.r19.u64 = ctx.r11.u64 + ctx.r19.u64;
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// stw r19,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
	// bge cr6,0x881f877c
	if (!ctx.cr6.lt) goto loc_881F877C;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x881f66cc
	goto loc_881F66CC;
loc_881F8770:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881F877C:
	// lwz r11,380(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// cmplw cr6,r15,r14
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r14.u32, ctx.xer);
	// lwz r10,20(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// addi r9,r11,93
	ctx.r9.s64 = ctx.r11.s64 + 93;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r8,24(r24)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r24.u32 + 24);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r7,28(r24)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r24.u32 + 28);
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r6,32(r24)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r24.u32 + 32);
	// stw r6,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// bne cr6,0x881f8844
	if (!ctx.cr6.eq) goto loc_881F8844;
	// ld r11,104(r29)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r29.u32 + 104);
	// lwz r10,84(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lwz r9,84(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r8,112(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 112);
	// stw r8,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// lwz r7,84(r26)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r6,116(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 116);
	// stw r6,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r6.u32);
	// lwz r5,84(r26)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r4,120(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 120);
	// stw r4,16(r5)
	REX_STORE_U32(ctx.r5.u32 + 16, ctx.r4.u32);
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r11,124(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 124);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r10,84(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r9,128(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// stw r9,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// lwz r8,132(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 132);
	// lwz r7,84(r26)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// stw r8,28(r7)
	REX_STORE_U32(ctx.r7.u32 + 28, ctx.r8.u32);
	// lwz r6,84(r26)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r5,136(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 136);
	// stw r5,32(r6)
	REX_STORE_U32(ctx.r6.u32 + 32, ctx.r5.u32);
	// lwz r3,140(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 140);
	// lwz r4,84(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// stw r3,36(r4)
	REX_STORE_U32(ctx.r4.u32 + 36, ctx.r3.u32);
	// lwz r11,84(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r10,144(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 144);
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r9,148(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 148);
	// lwz r8,84(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// stw r9,44(r8)
	REX_STORE_U32(ctx.r8.u32 + 44, ctx.r9.u32);
	// lwz r7,152(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 152);
	// lwz r6,84(r26)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// stw r7,48(r6)
	REX_STORE_U32(ctx.r6.u32 + 48, ctx.r7.u32);
loc_881F8844:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

