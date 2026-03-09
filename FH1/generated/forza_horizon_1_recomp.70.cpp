#include "forza_horizon_1_init.h"

__attribute__((alias("__imp__sub_82AA9138"))) PPC_WEAK_FUNC(sub_82AA9138);
PPC_FUNC_IMPL(__imp__sub_82AA9138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82AA9140;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AA915C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82aa9218
	if (!ctx.cr6.eq) goto loc_82AA9218;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AA9180;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r30,r11,-32316
	ctx.r30.s64 = ctx.r11.s64 + -32316;
	// bne cr6,0x82aa91b8
	if (!ctx.cr6.eq) goto loc_82AA91B8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r5,r10,632
	ctx.r5.s64 = ctx.r10.s64 + 632;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AA91B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AA91B8:
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// addi r28,r31,-12
	ctx.r28.s64 = ctx.r31.s64 + -12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AA91D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x82aa9200
	if (ctx.cr6.lt) goto loc_82AA9200;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82aa29b0
	ctx.lr = 0x82AA91EC;
	sub_82AA29B0(ctx, base);
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AA9200;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AA9200:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AA9218;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AA9218:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AA9220"))) PPC_WEAK_FUNC(sub_82AA9220);
PPC_FUNC_IMPL(__imp__sub_82AA9220) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82aa9234
	if (!ctx.cr6.eq) goto loc_82AA9234;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82AA9234:
	// b 0x82aa29d0
	sub_82AA29D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AA9238"))) PPC_WEAK_FUNC(sub_82AA9238);
PPC_FUNC_IMPL(__imp__sub_82AA9238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82aa92a0
	if (ctx.cr6.eq) goto loc_82AA92A0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82aa9278
	if (ctx.cr6.eq) goto loc_82AA9278;
	// lbz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aa9278
	if (ctx.cr6.eq) goto loc_82AA9278;
	// bl 0x82aa61e0
	ctx.lr = 0x82AA9278;
	sub_82AA61E0(ctx, base);
loc_82AA9278:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x83100488
	ctx.lr = 0x82AA9284;
	sub_83100488(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82aa92a0
	if (ctx.cr6.eq) goto loc_82AA92A0;
	// lbz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aa92a0
	if (ctx.cr6.eq) goto loc_82AA92A0;
	// bl 0x8251a000
	ctx.lr = 0x82AA92A0;
	sub_8251A000(ctx, base);
loc_82AA92A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA92B8"))) PPC_WEAK_FUNC(sub_82AA92B8);
PPC_FUNC_IMPL(__imp__sub_82AA92B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x82aad528
	ctx.lr = 0x82AA92D4;
	sub_82AAD528(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stfd f1,32(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.f1.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82aa9334
	if (!ctx.cr6.gt) goto loc_82AA9334;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfd f0,728(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 728);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82aa9334
	if (!ctx.cr6.gt) goto loc_82AA9334;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r31,88
	ctx.r6.s64 = ctx.r31.s64 + 88;
	// addi r5,r11,704
	ctx.r5.s64 = ctx.r11.s64 + 704;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a7f768
	ctx.lr = 0x82AA930C;
	sub_82A7F768(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r9,r10,-32316
	ctx.r9.s64 = ctx.r10.s64 + -32316;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82AA9334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AA9334:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9350"))) PPC_WEAK_FUNC(sub_82AA9350);
PPC_FUNC_IMPL(__imp__sub_82AA9350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r11,804
	ctx.r8.s64 = ctx.r11.s64 + 804;
	// addi r7,r10,756
	ctx.r7.s64 = ctx.r10.s64 + 756;
	// addi r6,r9,736
	ctx.r6.s64 = ctx.r9.s64 + 736;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r7,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r7.u32);
	// stw r6,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r6.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82aa9238
	ctx.lr = 0x82AA93A0;
	sub_82AA9238(ctx, base);
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// addi r4,r5,-13140
	ctx.r4.s64 = ctx.r5.s64 + -13140;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r4,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r4.u32);
	// beq cr6,0x82aa93d0
	if (ctx.cr6.eq) goto loc_82AA93D0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AA93D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AA93D0:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA93E8"))) PPC_WEAK_FUNC(sub_82AA93E8);
PPC_FUNC_IMPL(__imp__sub_82AA93E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x830fdef0
	ctx.lr = 0x82AA9404;
	sub_830FDEF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9418"))) PPC_WEAK_FUNC(sub_82AA9418);
PPC_FUNC_IMPL(__imp__sub_82AA9418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82aa9350
	ctx.lr = 0x82AA9438;
	sub_82AA9350(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aa9450
	if (ctx.cr6.eq) goto loc_82AA9450;
	// bl 0x823fd208
	ctx.lr = 0x82AA944C;
	sub_823FD208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AA9450:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9468"))) PPC_WEAK_FUNC(sub_82AA9468);
PPC_FUNC_IMPL(__imp__sub_82AA9468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r8,r11,804
	ctx.r8.s64 = ctx.r11.s64 + 804;
	// addi r7,r10,756
	ctx.r7.s64 = ctx.r10.s64 + 756;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r6,r9,736
	ctx.r6.s64 = ctx.r9.s64 + 736;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// bl 0x82aad588
	ctx.lr = 0x82AA94C0;
	sub_82AAD588(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r3,0
	ctx.r3.s64 = 0;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// ori r10,r3,60000
	ctx.r10.u64 = ctx.r3.u64 | 60000;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r11,-13140
	ctx.r8.s64 = ctx.r11.s64 + -13140;
	// lfd f0,3728(r4)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r4.u32 + 3728);
	// stfd f0,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.f0.u64);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stb r9,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r9.u8);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// stw r8,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r7,896
	ctx.r5.s64 = ctx.r7.s64 + 896;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82a7e190
	ctx.lr = 0x82AA950C;
	sub_82A7E190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9528"))) PPC_WEAK_FUNC(sub_82AA9528);
PPC_FUNC_IMPL(__imp__sub_82AA9528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82aa9558
	if (ctx.cr6.eq) goto loc_82AA9558;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,18
	ctx.r3.u64 = ctx.r3.u64 | 18;
	// b 0x82aa95cc
	goto loc_82AA95CC;
loc_82AA9558:
	// lwz r11,-16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// addi r31,r30,-16
	ctx.r31.s64 = ctx.r30.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AA9570;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82aa95cc
	if (!ctx.cr6.eq) goto loc_82AA95CC;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AA9590;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82aa95c8
	if (!ctx.cr6.eq) goto loc_82AA95C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AA95B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AA95C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AA95C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AA95CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA95E8"))) PPC_WEAK_FUNC(sub_82AA95E8);
PPC_FUNC_IMPL(__imp__sub_82AA95E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82aa9088
	ctx.lr = 0x82AA9600;
	sub_82AA9088(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9620"))) PPC_WEAK_FUNC(sub_82AA9620);
PPC_FUNC_IMPL(__imp__sub_82AA9620) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,488(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 488);
	// addi r11,r4,488
	ctx.r11.s64 = ctx.r4.s64 + 488;
	// lwz r9,492(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 492);
	// lwz r8,496(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 496);
	// lwz r7,500(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 500);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9648"))) PPC_WEAK_FUNC(sub_82AA9648);
PPC_FUNC_IMPL(__imp__sub_82AA9648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82AA9650;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,216(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82aa967c
	if (ctx.cr6.eq) goto loc_82AA967C;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,18
	ctx.r3.u64 = ctx.r3.u64 | 18;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
loc_82AA967C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt cr6,0x82aa96ac
	if (ctx.cr6.gt) goto loc_82AA96AC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r4,-32688
	ctx.r4.s64 = -2142240768;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// ori r4,r4,13
	ctx.r4.u64 = ctx.r4.u64 | 13;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AA96A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
loc_82AA96AC:
	// addi r4,r31,396
	ctx.r4.s64 = ctx.r31.s64 + 396;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a92c70
	ctx.lr = 0x82AA96B8;
	sub_82A92C70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82aa96e8
	if (ctx.cr6.lt) goto loc_82AA96E8;
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r10,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// bl 0x82aa46e0
	ctx.lr = 0x82AA96E4;
	sub_82AA46E0(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
loc_82AA96E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AA96F0"))) PPC_WEAK_FUNC(sub_82AA96F0);
PPC_FUNC_IMPL(__imp__sub_82AA96F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82AA96F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AA9720;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82aa9854
	if (ctx.cr6.lt) goto loc_82AA9854;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x82aa97f4
	if (!ctx.cr6.eq) goto loc_82AA97F4;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82aad5d8
	ctx.lr = 0x82AA9740;
	sub_82AAD5D8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82c01030
	ctx.lr = 0x82AA9748;
	sub_82C01030(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82aa9840
	if (ctx.cr6.eq) goto loc_82AA9840;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82c01030
	ctx.lr = 0x82AA9758;
	sub_82C01030(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82aa976c
	if (ctx.cr6.eq) goto loc_82AA976C;
	// lis r28,-32688
	ctx.r28.s64 = -2142240768;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
	// b 0x82aa9778
	goto loc_82AA9778;
loc_82AA976C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d6add0
	ctx.lr = 0x82AA9774;
	sub_82D6ADD0(ctx, base);
	// oris r28,r3,32849
	ctx.r28.u64 = ctx.r3.u64 | 2152792064;
loc_82AA9778:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82bb0098
	ctx.lr = 0x82AA9780;
	sub_82BB0098(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82aa9844
	if (!ctx.cr6.gt) goto loc_82AA9844;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x829e6d58
	ctx.lr = 0x82AA9794;
	sub_829E6D58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aa9844
	if (ctx.cr6.eq) goto loc_82AA9844;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AA97C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82aa97e0
	if (!ctx.cr6.lt) goto loc_82AA97E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6d90
	ctx.lr = 0x82AA97D4;
	sub_829E6D90(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
loc_82AA97E0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82aa9804
	if (ctx.cr6.eq) goto loc_82AA9804;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6d90
	ctx.lr = 0x82AA97F4;
	sub_829E6D90(ctx, base);
loc_82AA97F4:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,67
	ctx.r3.u64 = ctx.r3.u64 | 67;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
loc_82AA9804:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-32316
	ctx.r9.s64 = ctx.r11.s64 + -32316;
	// stbx r10,r31,r30
	PPC_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82AA9834;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6d90
	ctx.lr = 0x82AA983C;
	sub_829E6D90(ctx, base);
	// b 0x82aa9844
	goto loc_82AA9844;
loc_82AA9840:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82AA9844:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82aa9850
	if (ctx.cr6.eq) goto loc_82AA9850;
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
loc_82AA9850:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AA9854:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AA9868"))) PPC_WEAK_FUNC(sub_82AA9868);
PPC_FUNC_IMPL(__imp__sub_82AA9868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de00
	ctx.lr = 0x82AA9870;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-256
	ctx.r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82aad480
	ctx.lr = 0x82AA9898;
	sub_82AAD480(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82aa96f0
	ctx.lr = 0x82AA98A4;
	sub_82AA96F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82aa98c0
	if (!ctx.cr6.lt) goto loc_82AA98C0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82aabfb8
	ctx.lr = 0x82AA98B8;
	sub_82AABFB8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82aa99d0
	goto loc_82AA99D0;
loc_82AA98C0:
	// lwz r29,80(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82aa98dc
	if (!ctx.cr6.lt) goto loc_82AA98DC;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82aabfb8
	ctx.lr = 0x82AA98D4;
	sub_82AABFB8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82aa99d0
	goto loc_82AA99D0;
loc_82AA98DC:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aa99ac
	if (ctx.cr6.eq) goto loc_82AA99AC;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r29,r11,5744
	ctx.r29.s64 = ctx.r11.s64 + 5744;
	// stw r10,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
	// stw r29,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r29.u32);
	// stb r10,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r10.u8);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r5,r31,160
	ctx.r5.s64 = ctx.r31.s64 + 160;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r11,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r11.u64;
	// subf r4,r9,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r9.u64;
	// bl 0x82aad798
	ctx.lr = 0x82AA991C;
	sub_82AAD798(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82aa9950
	if (!ctx.cr6.lt) goto loc_82AA9950;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stw r29,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aa994c
	if (ctx.cr6.eq) goto loc_82AA994C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,168
	ctx.r4.s64 = ctx.r31.s64 + 168;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AA994C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AA994C:
	// b 0x82aa99c4
	goto loc_82AA99C4;
loc_82AA9950:
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82aad480
	ctx.lr = 0x82AA9964;
	sub_82AAD480(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a95910
	ctx.lr = 0x82AA9978;
	sub_82A95910(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82aabfb8
	ctx.lr = 0x82AA9984;
	sub_82AABFB8(ctx, base);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stw r29,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aa99a8
	if (ctx.cr6.eq) goto loc_82AA99A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,168
	ctx.r4.s64 = ctx.r31.s64 + 168;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AA99A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AA99A8:
	// b 0x82aa99c4
	goto loc_82AA99C4;
loc_82AA99AC:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a95910
	ctx.lr = 0x82AA99C0;
	sub_82A95910(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82AA99C4:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82aabfb8
	ctx.lr = 0x82AA99CC;
	sub_82AABFB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82AA99D0:
	// addi r1,r31,256
	ctx.r1.s64 = ctx.r31.s64 + 256;
	// b 0x82a7de50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AA99D8"))) PPC_WEAK_FUNC(sub_82AA99D8);
PPC_FUNC_IMPL(__imp__sub_82AA99D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82aabfb8
	ctx.lr = 0x82AA99F0;
	sub_82AABFB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9A00"))) PPC_WEAK_FUNC(sub_82AA9A00);
PPC_FUNC_IMPL(__imp__sub_82AA9A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x82827070
	ctx.lr = 0x82AA9A18;
	sub_82827070(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9A28"))) PPC_WEAK_FUNC(sub_82AA9A28);
PPC_FUNC_IMPL(__imp__sub_82AA9A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82aabfb8
	ctx.lr = 0x82AA9A40;
	sub_82AABFB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9A50"))) PPC_WEAK_FUNC(sub_82AA9A50);
PPC_FUNC_IMPL(__imp__sub_82AA9A50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,504
	ctx.r3.s64 = ctx.r3.s64 + 504;
	// b 0x83100488
	sub_83100488(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AA9A60"))) PPC_WEAK_FUNC(sub_82AA9A60);
PPC_FUNC_IMPL(__imp__sub_82AA9A60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// addi r8,r9,2960
	ctx.r8.s64 = ctx.r9.s64 + 2960;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// beq cr6,0x82aa9ab4
	if (ctx.cr6.eq) goto loc_82AA9AB4;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AA9AB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AA9AB4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82aacfd0
	ctx.lr = 0x82AA9ABC;
	sub_82AACFD0(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9AD4"))) PPC_WEAK_FUNC(sub_82AA9AD4);
PPC_FUNC_IMPL(__imp__sub_82AA9AD4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x82aacfd0
	ctx.lr = 0x82AA9AEC;
	sub_82AACFD0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9B00"))) PPC_WEAK_FUNC(sub_82AA9B00);
PPC_FUNC_IMPL(__imp__sub_82AA9B00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stb r10,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r10.u8);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// addi r4,r9,1184
	ctx.r4.s64 = ctx.r9.s64 + 1184;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82AA9B50"))) PPC_WEAK_FUNC(sub_82AA9B50);
PPC_FUNC_IMPL(__imp__sub_82AA9B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r3,76
	ctx.r11.s64 = ctx.r3.s64 + 76;
loc_82AA9B54:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = PPC_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	PPC_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reserved.u32 = *(uint32_t*)PPC_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(PPC_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	PPC_LEAVE_GLOBAL_LOCK();
	// bne 0x82aa9b54
	if (!ctx.cr0.eq) goto loc_82AA9B54;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82AA9BA0"))) PPC_WEAK_FUNC(sub_82AA9BA0);
PPC_FUNC_IMPL(__imp__sub_82AA9BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,1220
	ctx.r10.s64 = ctx.r11.s64 + 1220;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82aa9a60
	ctx.lr = 0x82AA9BCC;
	sub_82AA9A60(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82aa9be4
	if (ctx.cr6.eq) goto loc_82AA9BE4;
	// bl 0x823fd208
	ctx.lr = 0x82AA9BE0;
	sub_823FD208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AA9BE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9C08"))) PPC_WEAK_FUNC(sub_82AA9C08);
PPC_FUNC_IMPL(__imp__sub_82AA9C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddec
	ctx.lr = 0x82AA9C10;
	__savegprlr_21(ctx, base);
	// addi r31,r1,-256
	ctx.r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// li r10,255
	ctx.r10.s64 = 255;
	// bgt cr6,0x82aa9c3c
	if (ctx.cr6.gt) goto loc_82AA9C3C;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
loc_82AA9C3C:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r21,r11,-13140
	ctx.r21.s64 = ctx.r11.s64 + -13140;
	// stw r23,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r23.u32);
	// clrlwi r24,r10,24
	ctx.r24.u64 = ctx.r10.u32 & 0xFF;
	// stw r21,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r21.u32);
	// stb r23,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r23.u8);
	// lwz r3,864(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 864);
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AA9C70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82aa9ca8
	if (!ctx.cr6.lt) goto loc_82AA9CA8;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r21,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r21.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aa9ca0
	if (ctx.cr6.eq) goto loc_82AA9CA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AA9CA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AA9CA0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82aa9e70
	goto loc_82AA9E70;
loc_82AA9CA8:
	// lwz r9,344(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	// addi r11,r30,308
	ctx.r11.s64 = ctx.r30.s64 + 308;
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r8,328(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,16
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16, ctx.xer);
	// lwz r25,4(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// blt cr6,0x82aa9cd0
	if (ctx.cr6.lt) goto loc_82AA9CD0;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82aa9cd4
	goto loc_82AA9CD4;
loc_82AA9CD0:
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82AA9CD4:
	// lwz r11,300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// addi r28,r30,280
	ctx.r28.s64 = ctx.r30.s64 + 280;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82aa9ce8
	if (ctx.cr6.lt) goto loc_82AA9CE8;
	// lwz r28,0(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_82AA9CE8:
	// lwz r11,-16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// lwz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AA9D04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AA9D30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82aa9d68
	if (!ctx.cr6.lt) goto loc_82AA9D68;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r21,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r21.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aa9ca0
	if (ctx.cr6.eq) goto loc_82AA9CA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AA9D60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82aa9e70
	goto loc_82AA9E70;
loc_82AA9D68:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AA9D80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r23,200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 200, ctx.r23.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AA9D9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82aa9dd4
	if (!ctx.cr6.lt) goto loc_82AA9DD4;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r21,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r21.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aa9ca0
	if (ctx.cr6.eq) goto loc_82AA9CA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AA9DCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82aa9e70
	goto loc_82AA9E70;
loc_82AA9DD4:
	// lwz r4,344(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aa9e40
	if (ctx.cr6.eq) goto loc_82AA9E40;
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// bl 0x82aa8010
	ctx.lr = 0x82AA9E08;
	sub_82AA8010(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82aa9e40
	if (!ctx.cr6.lt) goto loc_82AA9E40;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r21,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r21.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aa9ca0
	if (ctx.cr6.eq) goto loc_82AA9CA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AA9E38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82aa9e70
	goto loc_82AA9E70;
loc_82AA9E40:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 200, ctx.r11.u32);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r21,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r21.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aa9e6c
	if (ctx.cr6.eq) goto loc_82AA9E6C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AA9E6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AA9E6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AA9E70:
	// addi r1,r31,256
	ctx.r1.s64 = ctx.r31.s64 + 256;
	// b 0x82a7de3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AA9E78"))) PPC_WEAK_FUNC(sub_82AA9E78);
PPC_FUNC_IMPL(__imp__sub_82AA9E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x830fdef0
	ctx.lr = 0x82AA9E90;
	sub_830FDEF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9EA0"))) PPC_WEAK_FUNC(sub_82AA9EA0);
PPC_FUNC_IMPL(__imp__sub_82AA9EA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,228(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,400(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// lbz r6,352(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 352);
	// lwz r4,220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x82aa9868
	sub_82AA9868(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AA9EC0"))) PPC_WEAK_FUNC(sub_82AA9EC0);
PPC_FUNC_IMPL(__imp__sub_82AA9EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addic. r11,r3,440
	ctx.xer.ca = ctx.r3.u32 > 4294966855;
	ctx.r11.s64 = ctx.r3.s64 + 440;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r10,-13680
	ctx.r9.s64 = ctx.r10.s64 + -13680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bne 0x82aa9ef4
	if (!ctx.cr0.eq) goto loc_82AA9EF4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AA9EF4:
	// bl 0x831ece6c
	ctx.lr = 0x82AA9EF8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r9,r11,-6
	ctx.r9.s64 = ctx.r11.s64 + -6;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r31,r8,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x82a968e0
	ctx.lr = 0x82AA9F18;
	sub_82A968E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9F30"))) PPC_WEAK_FUNC(sub_82AA9F30);
PPC_FUNC_IMPL(__imp__sub_82AA9F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r11,1360
	ctx.r5.s64 = ctx.r11.s64 + 1360;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a7f768
	ctx.lr = 0x82AA9F64;
	sub_82A7F768(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r9,r10,-32316
	ctx.r9.s64 = ctx.r10.s64 + -32316;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82AA9F8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// addic. r11,r30,440
	ctx.xer.ca = ctx.r30.u32 > 4294966855;
	ctx.r11.s64 = ctx.r30.s64 + 440;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r5,r6,-13680
	ctx.r5.s64 = ctx.r6.s64 + -13680;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bne 0x82aa9fac
	if (!ctx.cr0.eq) goto loc_82AA9FAC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AA9FAC:
	// bl 0x831ece6c
	ctx.lr = 0x82AA9FB0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r11,476(r30)
	PPC_STORE_U32(ctx.r30.u32 + 476, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// ble cr6,0x82aa9fcc
	if (!ctx.cr6.gt) goto loc_82AA9FCC;
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// oris r31,r11,32775
	ctx.r31.u64 = ctx.r11.u64 | 2147942400;
loc_82AA9FCC:
	// stw r31,480(r30)
	PPC_STORE_U32(ctx.r30.u32 + 480, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a968e0
	ctx.lr = 0x82AA9FD8;
	sub_82A968E0(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9FF0"))) PPC_WEAK_FUNC(sub_82AA9FF0);
PPC_FUNC_IMPL(__imp__sub_82AA9FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addic. r11,r3,440
	ctx.xer.ca = ctx.r3.u32 > 4294966855;
	ctx.r11.s64 = ctx.r3.s64 + 440;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r10,-13680
	ctx.r9.s64 = ctx.r10.s64 + -13680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bne 0x82aaa02c
	if (!ctx.cr0.eq) goto loc_82AAA02C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AAA02C:
	// bl 0x831ece6c
	ctx.lr = 0x82AAA030;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82a968e0
	ctx.lr = 0x82AAA044;
	sub_82A968E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA060"))) PPC_WEAK_FUNC(sub_82AAA060);
PPC_FUNC_IMPL(__imp__sub_82AAA060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r11,1400
	ctx.r5.s64 = ctx.r11.s64 + 1400;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a7f768
	ctx.lr = 0x82AAA094;
	sub_82A7F768(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r9,r10,-32316
	ctx.r9.s64 = ctx.r10.s64 + -32316;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82AAA0BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// addic. r11,r31,440
	ctx.xer.ca = ctx.r31.u32 > 4294966855;
	ctx.r11.s64 = ctx.r31.s64 + 440;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r5,r6,-13680
	ctx.r5.s64 = ctx.r6.s64 + -13680;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bne 0x82aaa0dc
	if (!ctx.cr0.eq) goto loc_82AAA0DC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AAA0DC:
	// bl 0x831ece6c
	ctx.lr = 0x82AAA0E0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x82a968e0
	ctx.lr = 0x82AAA0F8;
	sub_82A968E0(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA118"))) PPC_WEAK_FUNC(sub_82AAA118);
PPC_FUNC_IMPL(__imp__sub_82AAA118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addic. r11,r3,428
	ctx.xer.ca = ctx.r3.u32 > 4294966867;
	ctx.r11.s64 = ctx.r3.s64 + 428;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r10,-13680
	ctx.r9.s64 = ctx.r10.s64 + -13680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bne 0x82aaa154
	if (!ctx.cr0.eq) goto loc_82AAA154;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AAA154:
	// bl 0x831ece6c
	ctx.lr = 0x82AAA158;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AAA174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82aaa190
	if (ctx.cr6.eq) goto loc_82AAA190;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82a968e0
	ctx.lr = 0x82AAA188;
	sub_82A968E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82aaa1e8
	goto loc_82AAA1E8;
loc_82AAA190:
	// lwz r11,464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82aaa1dc
	if (ctx.cr6.eq) goto loc_82AAA1DC;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r11,-32316
	ctx.r9.s64 = ctx.r11.s64 + -32316;
	// lis r4,-32688
	ctx.r4.s64 = -2142240768;
	// addi r5,r10,1444
	ctx.r5.s64 = ctx.r10.s64 + 1444;
	// ori r4,r4,76
	ctx.r4.u64 = ctx.r4.u64 | 76;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82AAA1CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82a968e0
	ctx.lr = 0x82AAA1D4;
	sub_82A968E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82aaa1e8
	goto loc_82AAA1E8;
loc_82AAA1DC:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82a968e0
	ctx.lr = 0x82AAA1E4;
	sub_82A968E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82AAA1E8:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA200"))) PPC_WEAK_FUNC(sub_82AAA200);
PPC_FUNC_IMPL(__imp__sub_82AAA200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82a968e0
	ctx.lr = 0x82AAA218;
	sub_82A968E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA228"))) PPC_WEAK_FUNC(sub_82AAA228);
PPC_FUNC_IMPL(__imp__sub_82AAA228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82aad010
	ctx.lr = 0x82AAA244;
	sub_82AAD010(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r11,1584
	ctx.r9.s64 = ctx.r11.s64 + 1584;
	// addi r8,r10,2960
	ctx.r8.s64 = ctx.r10.s64 + 2960;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r7,1536
	ctx.r5.s64 = ctx.r7.s64 + 1536;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82a7e190
	ctx.lr = 0x82AAA280;
	sub_82A7E190(ctx, base);
	// stb r30,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA2A0"))) PPC_WEAK_FUNC(sub_82AAA2A0);
PPC_FUNC_IMPL(__imp__sub_82AAA2A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82aa9a60
	ctx.lr = 0x82AAA2C0;
	sub_82AA9A60(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aaa2d8
	if (ctx.cr6.eq) goto loc_82AAA2D8;
	// bl 0x823fd208
	ctx.lr = 0x82AAA2D4;
	sub_823FD208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AAA2D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA2F0"))) PPC_WEAK_FUNC(sub_82AAA2F0);
PPC_FUNC_IMPL(__imp__sub_82AAA2F0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82aaa318
	if (ctx.cr6.lt) goto loc_82AAA318;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r5,24(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x82aa9ff0
	sub_82AA9FF0(ctx, base);
	return;
loc_82AAA318:
	// lwz r5,24(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x82aa9ff0
	sub_82AA9FF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAA324"))) PPC_WEAK_FUNC(sub_82AAA324);
PPC_FUNC_IMPL(__imp__sub_82AAA324) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA328"))) PPC_WEAK_FUNC(sub_82AAA328);
PPC_FUNC_IMPL(__imp__sub_82AAA328) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82aaa34c
	if (ctx.cr6.lt) goto loc_82AAA34C;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x82aaa060
	sub_82AAA060(ctx, base);
	return;
loc_82AAA34C:
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x82aa9f30
	sub_82AA9F30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAA354"))) PPC_WEAK_FUNC(sub_82AAA354);
PPC_FUNC_IMPL(__imp__sub_82AAA354) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA358"))) PPC_WEAK_FUNC(sub_82AAA358);
PPC_FUNC_IMPL(__imp__sub_82AAA358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,1220
	ctx.r10.s64 = ctx.r11.s64 + 1220;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82aa9a60
	ctx.lr = 0x82AAA384;
	sub_82AA9A60(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82aaa39c
	if (ctx.cr6.eq) goto loc_82AAA39C;
	// bl 0x829e6d90
	ctx.lr = 0x82AAA398;
	sub_829E6D90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AAA39C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA3C0"))) PPC_WEAK_FUNC(sub_82AAA3C0);
PPC_FUNC_IMPL(__imp__sub_82AAA3C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de00
	ctx.lr = 0x82AAA3C8;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-256
	ctx.r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x829e6d58
	ctx.lr = 0x82AAA3E0;
	sub_829E6D58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aaa410
	if (ctx.cr6.eq) goto loc_82AAA410;
	// bl 0x82aac808
	ctx.lr = 0x82AAA3F4;
	sub_82AAC808(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r11,-6300
	ctx.r10.s64 = ctx.r11.s64 + -6300;
	// stw r28,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x82aaa418
	goto loc_82AAA418;
loc_82AAA410:
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82AAA418:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// stb r28,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r28.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r11,-13140
	ctx.r27.s64 = ctx.r11.s64 + -13140;
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// beq cr6,0x82aaa44c
	if (ctx.cr6.eq) goto loc_82AAA44C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AAA448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
loc_82AAA44C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82aaa460
	if (!ctx.cr6.eq) goto loc_82AAA460;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82aaa60c
	goto loc_82AAA60C;
loc_82AAA460:
	// lwz r5,556(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 556);
	// lwz r4,484(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 484);
	// bl 0x82aac400
	ctx.lr = 0x82AAA46C;
	sub_82AAC400(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82aaa4a4
	if (!ctx.cr6.lt) goto loc_82AAA4A4;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aaa49c
	if (ctx.cr6.eq) goto loc_82AAA49C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AAA49C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AAA49C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82aaa60c
	goto loc_82AAA60C;
loc_82AAA4A4:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x82aac250
	ctx.lr = 0x82AAA4B0;
	sub_82AAC250(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// addi r10,r30,488
	ctx.r10.s64 = ctx.r30.s64 + 488;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,488(r30)
	PPC_STORE_U32(ctx.r30.u32 + 488, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,492(r30)
	PPC_STORE_U32(ctx.r30.u32 + 492, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,496(r30)
	PPC_STORE_U32(ctx.r30.u32 + 496, ctx.r7.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r6,500(r30)
	PPC_STORE_U32(ctx.r30.u32 + 500, ctx.r6.u32);
	// bl 0x829e6d58
	ctx.lr = 0x82AAA4E0;
	sub_829E6D58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aaa50c
	if (ctx.cr6.eq) goto loc_82AAA50C;
	// bl 0x82aaa228
	ctx.lr = 0x82AAA4F4;
	sub_82AAA228(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r28,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r28.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r10,r11,1604
	ctx.r10.s64 = ctx.r11.s64 + 1604;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x82aaa510
	goto loc_82AAA510;
loc_82AAA50C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82AAA510:
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x830fde88
	ctx.lr = 0x82AAA518;
	sub_830FDE88(ctx, base);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82aaa560
	if (!ctx.cr6.eq) goto loc_82AAA560;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r10,r11,-13140
	ctx.r10.s64 = ctx.r11.s64 + -13140;
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aaa554
	if (ctx.cr6.eq) goto loc_82AAA554;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AAA554;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AAA554:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82aaa60c
	goto loc_82AAA60C;
loc_82AAA560:
	// addi r4,r30,440
	ctx.r4.s64 = ctx.r30.s64 + 440;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82a96880
	ctx.lr = 0x82AAA56C;
	sub_82A96880(ctx, base);
	// stw r28,476(r30)
	PPC_STORE_U32(ctx.r30.u32 + 476, ctx.r28.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82a968e0
	ctx.lr = 0x82AAA578;
	sub_82A968E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r30,164(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// stw r26,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r26.u32);
	// bl 0x8314f878
	ctx.lr = 0x82AAA58C;
	sub_8314F878(ctx, base);
	// stw r28,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r28.u32);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r5,164(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r10,r11,-32316
	ctx.r10.s64 = ctx.r11.s64 + -32316;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,116(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AAA5B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r6,r7,-13140
	ctx.r6.s64 = ctx.r7.s64 + -13140;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r6,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r6.u32);
	// beq cr6,0x82aaa5e4
	if (ctx.cr6.eq) goto loc_82AAA5E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,168
	ctx.r4.s64 = ctx.r31.s64 + 168;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AAA5E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AAA5E4:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aaa608
	if (ctx.cr6.eq) goto loc_82AAA608;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AAA608;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AAA608:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82AAA60C:
	// addi r1,r31,256
	ctx.r1.s64 = ctx.r31.s64 + 256;
	// b 0x82a7de50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAA614"))) PPC_WEAK_FUNC(sub_82AAA614);
PPC_FUNC_IMPL(__imp__sub_82AAA614) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82a9d3d0
	ctx.lr = 0x82AAA62C;
	sub_82A9D3D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA63C"))) PPC_WEAK_FUNC(sub_82AAA63C);
PPC_FUNC_IMPL(__imp__sub_82AAA63C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x830fdef0
	ctx.lr = 0x82AAA654;
	sub_830FDEF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA664"))) PPC_WEAK_FUNC(sub_82AAA664);
PPC_FUNC_IMPL(__imp__sub_82AAA664) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82a9d3d0
	ctx.lr = 0x82AAA67C;
	sub_82A9D3D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA68C"))) PPC_WEAK_FUNC(sub_82AAA68C);
PPC_FUNC_IMPL(__imp__sub_82AAA68C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x830fdef0
	ctx.lr = 0x82AAA6A4;
	sub_830FDEF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA6C0"))) PPC_WEAK_FUNC(sub_82AAA6C0);
PPC_FUNC_IMPL(__imp__sub_82AAA6C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de00
	ctx.lr = 0x82AAA6C8;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x829e6d58
	ctx.lr = 0x82AAA6E0;
	sub_829E6D58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aaa710
	if (ctx.cr6.eq) goto loc_82AAA710;
	// bl 0x82aaa228
	ctx.lr = 0x82AAA6F4;
	sub_82AAA228(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,1604
	ctx.r9.s64 = ctx.r11.s64 + 1604;
	// stw r10,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// b 0x82aaa714
	goto loc_82AAA714;
loc_82AAA710:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AAA714:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// addi r27,r11,-13140
	ctx.r27.s64 = ctx.r11.s64 + -13140;
	// stb r10,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r10.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// beq cr6,0x82aaa748
	if (ctx.cr6.eq) goto loc_82AAA748;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AAA748;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AAA748:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82aaa760
	if (!ctx.cr6.eq) goto loc_82AAA760;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82aaa84c
	goto loc_82AAA84C;
loc_82AAA760:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addic. r11,r29,440
	ctx.xer.ca = ctx.r29.u32 > 4294966855;
	ctx.r11.s64 = ctx.r29.s64 + 440;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r10,-13680
	ctx.r9.s64 = ctx.r10.s64 + -13680;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// bne 0x82aaa780
	if (!ctx.cr0.eq) goto loc_82AAA780;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AAA780:
	// bl 0x831ece6c
	ctx.lr = 0x82AAA784;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r11,476(r29)
	PPC_STORE_U32(ctx.r29.u32 + 476, ctx.r11.u32);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
	// bl 0x82a968e0
	ctx.lr = 0x82AAA79C;
	sub_82A968E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r30,116(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// stw r26,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r26.u32);
	// bl 0x8314f878
	ctx.lr = 0x82AAA7B0;
	sub_8314F878(ctx, base);
	// stw r28,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r28.u32);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// ld r4,488(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 488);
	// ld r5,496(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 496);
	// addi r9,r10,-32316
	ctx.r9.s64 = ctx.r10.s64 + -32316;
	// lwz r6,116(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,120(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 120);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82AAA7DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82aaa824
	if (!ctx.cr6.lt) goto loc_82AAA824;
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r10,r11,86
	ctx.r10.u64 = ctx.r11.u64 | 86;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82aaa824
	if (ctx.cr6.eq) goto loc_82AAA824;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aaa81c
	if (ctx.cr6.eq) goto loc_82AAA81C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AAA81C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AAA81C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82aaa84c
	goto loc_82AAA84C;
loc_82AAA824:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aaa848
	if (ctx.cr6.eq) goto loc_82AAA848;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AAA848;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AAA848:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AAA84C:
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x82a7de50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAA854"))) PPC_WEAK_FUNC(sub_82AAA854);
PPC_FUNC_IMPL(__imp__sub_82AAA854) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82a9d3d0
	ctx.lr = 0x82AAA86C;
	sub_82A9D3D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA87C"))) PPC_WEAK_FUNC(sub_82AAA87C);
PPC_FUNC_IMPL(__imp__sub_82AAA87C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x830fdef0
	ctx.lr = 0x82AAA894;
	sub_830FDEF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA8B0"))) PPC_WEAK_FUNC(sub_82AAA8B0);
PPC_FUNC_IMPL(__imp__sub_82AAA8B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82AAA8B8;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x82AAA8D8;
	sub_82C0F6C0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aaa8f4
	if (ctx.cr6.eq) goto loc_82AAA8F4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82aad480
	ctx.lr = 0x82AAA8F0;
	sub_82AAD480(ctx, base);
	// b 0x82aaa8f8
	goto loc_82AAA8F8;
loc_82AAA8F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AAA8F8:
	// stw r3,548(r30)
	PPC_STORE_U32(ctx.r30.u32 + 548, ctx.r3.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r30,552
	ctx.r3.s64 = ctx.r30.s64 + 552;
	// bl 0x83100488
	ctx.lr = 0x82AAA908;
	sub_83100488(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwz r3,548(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 548);
	// bl 0x82aa96f0
	ctx.lr = 0x82AAA914;
	sub_82AA96F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82aaa96c
	if (ctx.cr6.lt) goto loc_82AAA96C;
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// ori r10,r11,14
	ctx.r10.u64 = ctx.r11.u64 | 14;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82aaa96c
	if (ctx.cr6.eq) goto loc_82AAA96C;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bge cr6,0x82aaa958
	if (!ctx.cr6.lt) goto loc_82AAA958;
	// stw r4,480(r30)
	PPC_STORE_U32(ctx.r30.u32 + 480, ctx.r4.u32);
	// bctrl 
	ctx.lr = 0x82AAA950;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82aaa964
	goto loc_82AAA964;
loc_82AAA958:
	// li r4,0
	ctx.r4.s64 = 0;
	// bctrl 
	ctx.lr = 0x82AAA960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,2
	ctx.r4.s64 = 2;
loc_82AAA964:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82aaa6c0
	ctx.lr = 0x82AAA96C;
	sub_82AAA6C0(ctx, base);
loc_82AAA96C:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAA974"))) PPC_WEAK_FUNC(sub_82AAA974);
PPC_FUNC_IMPL(__imp__sub_82AAA974) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x823fd208
	ctx.lr = 0x82AAA98C;
	sub_823FD208(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA9A0"))) PPC_WEAK_FUNC(sub_82AAA9A0);
PPC_FUNC_IMPL(__imp__sub_82AAA9A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82AAA9A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// bne cr6,0x82aaa9d0
	if (!ctx.cr6.eq) goto loc_82AAA9D0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82AAA9D0:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r10,r11,-32316
	ctx.r10.s64 = ctx.r11.s64 + -32316;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,128(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 128);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AAA9EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82abc1f8
	ctx.lr = 0x82AAAA00;
	sub_82ABC1F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82aaaa1c
	if (!ctx.cr6.lt) goto loc_82AAAA1C;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82aaa3c0
	ctx.lr = 0x82AAAA14;
	sub_82AAA3C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
loc_82AAAA1C:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addic. r11,r27,440
	ctx.xer.ca = ctx.r27.u32 > 4294966855;
	ctx.r11.s64 = ctx.r27.s64 + 440;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r10,-13680
	ctx.r9.s64 = ctx.r10.s64 + -13680;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bne 0x82aaaa3c
	if (!ctx.cr0.eq) goto loc_82AAAA3C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AAAA3C:
	// bl 0x831ece6c
	ctx.lr = 0x82AAAA40;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,476(r27)
	PPC_STORE_U32(ctx.r27.u32 + 476, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x82a968e0
	ctx.lr = 0x82AAAA58;
	sub_82A968E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAAA68"))) PPC_WEAK_FUNC(sub_82AAAA68);
PPC_FUNC_IMPL(__imp__sub_82AAAA68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82AAAA70;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// bne cr6,0x82aaaa98
	if (!ctx.cr6.eq) goto loc_82AAAA98;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82AAAA98:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r10,r11,-32316
	ctx.r10.s64 = ctx.r11.s64 + -32316;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,128(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 128);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AAAAB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82abcae0
	ctx.lr = 0x82AAAAC8;
	sub_82ABCAE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82aaaaec
	if (!ctx.cr6.lt) goto loc_82AAAAEC;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82aaa3c0
	ctx.lr = 0x82AAAAE0;
	sub_82AAA3C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
loc_82AAAAEC:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addic. r11,r27,440
	ctx.xer.ca = ctx.r27.u32 > 4294966855;
	ctx.r11.s64 = ctx.r27.s64 + 440;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r10,-13680
	ctx.r9.s64 = ctx.r10.s64 + -13680;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bne 0x82aaab0c
	if (!ctx.cr0.eq) goto loc_82AAAB0C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AAAB0C:
	// bl 0x831ece6c
	ctx.lr = 0x82AAAB10;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,476(r27)
	PPC_STORE_U32(ctx.r27.u32 + 476, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x82a968e0
	ctx.lr = 0x82AAAB28;
	sub_82A968E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAAB38"))) PPC_WEAK_FUNC(sub_82AAAB38);
PPC_FUNC_IMPL(__imp__sub_82AAAB38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddf8
	ctx.lr = 0x82AAAB40;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,17(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 17);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aaab68
	if (ctx.cr6.eq) goto loc_82AAAB68;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,19528
	ctx.r3.s64 = ctx.r11.s64 + 19528;
	// bl 0x82a90570
	ctx.lr = 0x82AAAB68;
	sub_82A90570(ctx, base);
loc_82AAAB68:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82a9fee0
	ctx.lr = 0x82AAAB74;
	sub_82A9FEE0(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r25,196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq cr6,0x82aaab90
	if (ctx.cr6.eq) goto loc_82AAAB90;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x82aaabb4
	goto loc_82AAABB4;
loc_82AAAB90:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r9,17(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 17);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82aaaba8
	if (ctx.cr6.eq) goto loc_82AAABA8;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x82aaabb4
	goto loc_82AAABB4;
loc_82AAABA8:
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r26
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82aaaca0
	if (!ctx.cr6.eq) goto loc_82AAACA0;
loc_82AAABB4:
	// lbz r11,17(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 17);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82aaabc8
	if (!ctx.cr6.eq) goto loc_82AAABC8;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82AAABC8:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82aaabe0
	if (!ctx.cr6.eq) goto loc_82AAABE0;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x82aaabf8
	goto loc_82AAABF8;
loc_82AAABE0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82aaabf4
	if (!ctx.cr6.eq) goto loc_82AAABF4;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x82aaabf8
	goto loc_82AAABF8;
loc_82AAABF4:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_82AAABF8:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82aaac48
	if (!ctx.cr6.eq) goto loc_82AAAC48;
	// lbz r11,17(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 17);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aaac1c
	if (ctx.cr6.eq) goto loc_82AAAC1C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82aaac44
	goto loc_82AAAC44;
loc_82AAAC1C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,17(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82aaac44
	if (!ctx.cr6.eq) goto loc_82AAAC44;
loc_82AAAC30:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,17(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82aaac30
	if (ctx.cr6.eq) goto loc_82AAAC30;
loc_82AAAC44:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82AAAC48:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82aaad34
	if (!ctx.cr6.eq) goto loc_82AAAD34;
	// lbz r11,17(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 17);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aaac70
	if (ctx.cr6.eq) goto loc_82AAAC70;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// b 0x82aaad34
	goto loc_82AAAD34;
loc_82AAAC70:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,17(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82aaac98
	if (!ctx.cr6.eq) goto loc_82AAAC98;
loc_82AAAC84:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,17(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82aaac84
	if (ctx.cr6.eq) goto loc_82AAAC84;
loc_82AAAC98:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82aaad34
	goto loc_82AAAD34;
loc_82AAACA0:
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82aaacc0
	if (!ctx.cr6.eq) goto loc_82AAACC0;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x82aaace8
	goto loc_82AAACE8;
loc_82AAACC0:
	// lbz r11,17(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 17);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82aaacd4
	if (!ctx.cr6.eq) goto loc_82AAACD4;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82AAACD4:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r25,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r25.u32);
loc_82AAACE8:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82aaad00
	if (!ctx.cr6.eq) goto loc_82AAAD00;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x82aaad1c
	goto loc_82AAAD1C;
loc_82AAAD00:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82aaad18
	if (!ctx.cr6.eq) goto loc_82AAAD18;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x82aaad1c
	goto loc_82AAAD1C;
loc_82AAAD18:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_82AAAD1C:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r9,16(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 16);
	// lbz r10,16(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 16);
	// stb r9,16(r25)
	PPC_STORE_U8(ctx.r25.u32 + 16, ctx.r9.u8);
	// stb r10,16(r26)
	PPC_STORE_U8(ctx.r26.u32 + 16, ctx.r10.u8);
loc_82AAAD34:
	// lbz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82aaaecc
	if (!ctx.cr6.eq) goto loc_82AAAECC;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82aaaec8
	if (ctx.cr6.eq) goto loc_82AAAEC8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82AAAD58:
	// lbz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82aaaec8
	if (!ctx.cr6.eq) goto loc_82AAAEC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82aaae10
	if (!ctx.cr6.eq) goto loc_82AAAE10;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aaad98
	if (!ctx.cr6.eq) goto loc_82AAAD98;
	// stb r29,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82aa3670
	ctx.lr = 0x82AAAD94;
	sub_82AA3670(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82AAAD98:
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aaae64
	if (!ctx.cr6.eq) goto loc_82AAAE64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82aaadc4
	if (!ctx.cr6.eq) goto loc_82AAADC4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// beq cr6,0x82aaae60
	if (ctx.cr6.eq) goto loc_82AAAE60;
loc_82AAADC4:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x82aaadec
	if (!ctx.cr6.eq) goto loc_82AAADEC;
	// stb r29,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8314f8f0
	ctx.lr = 0x82AAADE8;
	sub_8314F8F0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82AAADEC:
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r10.u8);
	// stb r29,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r29.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r29,16(r9)
	PPC_STORE_U8(ctx.r9.u32 + 16, ctx.r29.u8);
	// bl 0x82aa3670
	ctx.lr = 0x82AAAE0C;
	sub_82AA3670(ctx, base);
	// b 0x82aaaec8
	goto loc_82AAAEC8;
loc_82AAAE10:
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aaae34
	if (!ctx.cr6.eq) goto loc_82AAAE34;
	// stb r29,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8314f8f0
	ctx.lr = 0x82AAAE30;
	sub_8314F8F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82AAAE34:
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aaae64
	if (!ctx.cr6.eq) goto loc_82AAAE64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82aaae80
	if (!ctx.cr6.eq) goto loc_82AAAE80;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x82aaae80
	if (!ctx.cr6.eq) goto loc_82AAAE80;
loc_82AAAE60:
	// stb r30,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r30.u8);
loc_82AAAE64:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82aaad58
	if (!ctx.cr6.eq) goto loc_82AAAD58;
	// b 0x82aaaec8
	goto loc_82AAAEC8;
loc_82AAAE80:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x82aaaea8
	if (!ctx.cr6.eq) goto loc_82AAAEA8;
	// stb r29,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82aa3670
	ctx.lr = 0x82AAAEA4;
	sub_82AA3670(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82AAAEA8:
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r10.u8);
	// stb r29,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r29.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r29,16(r9)
	PPC_STORE_U8(ctx.r9.u32 + 16, ctx.r29.u8);
	// bl 0x8314f8f0
	ctx.lr = 0x82AAAEC8;
	sub_8314F8F0(ctx, base);
loc_82AAAEC8:
	// stb r29,16(r28)
	PPC_STORE_U8(ctx.r28.u32 + 16, ctx.r29.u8);
loc_82AAAECC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823fd208
	ctx.lr = 0x82AAAED4;
	sub_823FD208(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aaaee8
	if (ctx.cr6.eq) goto loc_82AAAEE8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_82AAAEE8:
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAAF00"))) PPC_WEAK_FUNC(sub_82AAAF00);
PPC_FUNC_IMPL(__imp__sub_82AAAF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x82a7de04
	ctx.lr = 0x82AAAF10;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,-2
	ctx.r9.s64 = -2;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// ori r29,r4,15
	ctx.r29.u64 = ctx.r4.u64 | 15;
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r5,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r5.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82aaaf44
	if (!ctx.cr6.gt) goto loc_82AAAF44;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// b 0x82aaaf70
	goto loc_82AAAF70;
loc_82AAAF44:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r8,3
	ctx.r8.s64 = 3;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// divwu r7,r29,r8
	ctx.r7.u32 = ctx.r8.u32 ? ctx.r29.u32 / ctx.r8.u32 : 0;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82aaaf70
	if (!ctx.cr6.gt) goto loc_82AAAF70;
	// subfic r8,r10,-2
	ctx.xer.ca = ctx.r10.u32 <= 4294967294;
	ctx.r8.u64 = static_cast<uint64_t>(-2) - ctx.r10.u64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82aaaf70
	if (!ctx.cr6.gt) goto loc_82AAAF70;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
loc_82AAAF70:
	// addi r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 1;
	// bl 0x829e6d58
	ctx.lr = 0x82AAAF78;
	sub_829E6D58(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82aaaf94
	goto loc_82AAAF94;
loc_82AAAF94:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82aaafc0
	if (ctx.cr6.eq) goto loc_82AAAFC0;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82aaafb0
	if (ctx.cr6.lt) goto loc_82AAAFB0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82aaafb4
	goto loc_82AAAFB4;
loc_82AAAFB0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82AAAFB4:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a7d730
	ctx.lr = 0x82AAAFC0;
	sub_82A7D730(ctx, base);
loc_82AAAFC0:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82aaafd4
	if (ctx.cr6.lt) goto loc_82AAAFD4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x829e6d90
	ctx.lr = 0x82AAAFD4;
	sub_829E6D90(ctx, base);
loc_82AAAFD4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 16, ctx.xer);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// stw r27,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r27.u32);
	// blt cr6,0x82aaaff4
	if (ctx.cr6.lt) goto loc_82AAAFF4;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82AAAFF4:
	// stbx r11,r30,r27
	PPC_STORE_U8(ctx.r30.u32 + ctx.r27.u32, ctx.r11.u8);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAB008"))) PPC_WEAK_FUNC(sub_82AAB008);
PPC_FUNC_IMPL(__imp__sub_82AAB008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,164(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82aab030
	if (ctx.cr6.lt) goto loc_82AAB030;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x829e6d90
	ctx.lr = 0x82AAB030;
	sub_829E6D90(ctx, base);
loc_82AAB030:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// bl 0x82a84dc0
	ctx.lr = 0x82AAB050;
	sub_82A84DC0(ctx, base);
	// lwz r24,20352(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 20352);
	// lwz r16,2064(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + 2064);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x829e6d58
	ctx.lr = 0x82AAB078;
	sub_829E6D58(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-32085
	ctx.r3.s64 = -2102722560;
	// addi r3,r3,-20604
	ctx.r3.s64 = ctx.r3.s64 + -20604;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAB058"))) PPC_WEAK_FUNC(sub_82AAB058);
PPC_FUNC_IMPL(__imp__sub_82AAB058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x829e6d58
	ctx.lr = 0x82AAB078;
	sub_829E6D58(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-32085
	ctx.r3.s64 = -2102722560;
	// addi r3,r3,-20604
	ctx.r3.s64 = ctx.r3.s64 + -20604;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAB098"))) PPC_WEAK_FUNC(sub_82AAB098);
PPC_FUNC_IMPL(__imp__sub_82AAB098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AAB0BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,400(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,544(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// lwz r4,484(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r5,360(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// lwz r7,4(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r6,12(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// bl 0x82aaa8b0
	ctx.lr = 0x82AAB0E0;
	sub_82AAA8B0(ctx, base);
	// srawi r5,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 31;
	// and r3,r5,r3
	ctx.r3.u64 = ctx.r5.u64 & ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB108"))) PPC_WEAK_FUNC(sub_82AAB108);
PPC_FUNC_IMPL(__imp__sub_82AAB108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddf4
	ctx.lr = 0x82AAB110;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-432
	ctx.r31.s64 = ctx.r1.s64 + -432;
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82aa8e80
	ctx.lr = 0x82AAB120;
	sub_82AA8E80(ctx, base);
	// addi r30,r30,-12
	ctx.r30.s64 = ctx.r30.s64 + -12;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32688
	ctx.r10.s64 = -2142240768;
	// addi r23,r30,440
	ctx.r23.s64 = ctx.r30.s64 + 440;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r24,4
	ctx.r24.s64 = 4;
	// ori r25,r10,90
	ctx.r25.u64 = ctx.r10.u64 | 90;
	// addi r26,r11,-13680
	ctx.r26.s64 = ctx.r11.s64 + -13680;
loc_82AAB140:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// stw r23,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r23.u32);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// addi r3,r23,4
	ctx.r3.s64 = ctx.r23.s64 + 4;
	// bne cr6,0x82aab15c
	if (!ctx.cr6.eq) goto loc_82AAB15C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AAB15C:
	// bl 0x831ece6c
	ctx.lr = 0x82AAB160;
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r27,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// lwz r11,476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 476);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x82aab2e4
	if (ctx.cr6.gt) goto loc_82AAB2E4;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r28,r10,-32316
	ctx.r28.s64 = ctx.r10.s64 + -32316;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82aab284
	if (ctx.cr6.eq) goto loc_82AAB284;
	// bdz 0x82aab2b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82AAB2B4;
	// bdnz 0x82aab230
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AAB230;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AAB1A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82aab214
	if (!ctx.cr6.eq) goto loc_82AAB214;
	// stw r24,476(r30)
	PPC_STORE_U32(ctx.r30.u32 + 476, ctx.r24.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,508(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// bl 0x82a9f760
	ctx.lr = 0x82AAB1C0;
	sub_82A9F760(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82aab224
	if (!ctx.cr6.lt) goto loc_82AAB224;
loc_82AAB1CC:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82a968e0
	ctx.lr = 0x82AAB1D4;
	sub_82A968E0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,2176
	ctx.r5.s64 = ctx.r11.s64 + 2176;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82a7f768
	ctx.lr = 0x82AAB1EC;
	sub_82A7F768(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AAB20C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82aab2f0
	goto loc_82AAB2F0;
loc_82AAB214:
	// stw r25,480(r30)
	PPC_STORE_U32(ctx.r30.u32 + 480, ctx.r25.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82aaa6c0
	ctx.lr = 0x82AAB224;
	sub_82AAA6C0(ctx, base);
loc_82AAB224:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82a968e0
	ctx.lr = 0x82AAB22C;
	sub_82A968E0(ctx, base);
	// b 0x82aab140
	goto loc_82AAB140;
loc_82AAB230:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AAB244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82aab2e4
	if (ctx.cr6.eq) goto loc_82AAB2E4;
	// li r11,6
	ctx.r11.s64 = 6;
	// ld r4,488(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 488);
	// ld r5,496(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 496);
	// stw r11,476(r30)
	PPC_STORE_U32(ctx.r30.u32 + 476, ctx.r11.u32);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,124(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AAB274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82aab2e4
	if (!ctx.cr6.lt) goto loc_82AAB2E4;
	// b 0x82aab1cc
	goto loc_82AAB1CC;
loc_82AAB284:
	// li r11,6
	ctx.r11.s64 = 6;
	// lwz r5,556(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 556);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,544(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 544);
	// stw r11,476(r30)
	PPC_STORE_U32(ctx.r30.u32 + 476, ctx.r11.u32);
	// lwz r6,480(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 480);
	// lwz r4,484(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 484);
	// bl 0x82aaaa68
	ctx.lr = 0x82AAB2A4;
	sub_82AAAA68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82aab2e4
	if (!ctx.cr6.lt) goto loc_82AAB2E4;
	// b 0x82aab1cc
	goto loc_82AAB1CC;
loc_82AAB2B4:
	// li r11,6
	ctx.r11.s64 = 6;
	// lwz r5,556(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 556);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,544(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 544);
	// stw r11,476(r30)
	PPC_STORE_U32(ctx.r30.u32 + 476, ctx.r11.u32);
	// lwz r6,548(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 548);
	// lwz r4,484(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 484);
	// bl 0x82aaa9a0
	ctx.lr = 0x82AAB2D4;
	sub_82AAA9A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82aab2e4
	if (!ctx.cr6.lt) goto loc_82AAB2E4;
	// b 0x82aab1cc
	goto loc_82AAB1CC;
loc_82AAB2E4:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82a968e0
	ctx.lr = 0x82AAB2EC;
	sub_82A968E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AAB2F0:
	// addi r1,r31,432
	ctx.r1.s64 = ctx.r31.s64 + 432;
	// b 0x82a7de44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAB2F8"))) PPC_WEAK_FUNC(sub_82AAB2F8);
PPC_FUNC_IMPL(__imp__sub_82AAB2F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-432
	ctx.r31.s64 = ctx.r12.s64 + -432;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82a968e0
	ctx.lr = 0x82AAB310;
	sub_82A968E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB320"))) PPC_WEAK_FUNC(sub_82AAB320);
PPC_FUNC_IMPL(__imp__sub_82AAB320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-2
	ctx.r11.s64 = -2;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82aab34c
	if (!ctx.cr6.gt) goto loc_82AAB34C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,18968
	ctx.r3.s64 = ctx.r11.s64 + 18968;
	// bl 0x82a90538
	ctx.lr = 0x82AAB34C;
	sub_82A90538(ctx, base);
loc_82AAB34C:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82aab368
	if (!ctx.cr6.lt) goto loc_82AAB368;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x82aaaf00
	ctx.lr = 0x82AAB364;
	sub_82AAAF00(ctx, base);
	// b 0x82aab3bc
	goto loc_82AAB3BC;
loc_82AAB368:
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82aab39c
	if (ctx.cr6.eq) goto loc_82AAB39C;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// bge cr6,0x82aab39c
	if (!ctx.cr6.lt) goto loc_82AAB39C;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82aab38c
	if (!ctx.cr6.lt) goto loc_82AAB38C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82AAB38C:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82a97108
	ctx.lr = 0x82AAB398;
	sub_82A97108(ctx, base);
	// b 0x82aab3bc
	goto loc_82AAB3BC;
loc_82AAB39C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82aab3bc
	if (!ctx.cr6.eq) goto loc_82AAB3BC;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// blt cr6,0x82aab3b8
	if (ctx.cr6.lt) goto loc_82AAB3B8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82AAB3B8:
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
loc_82AAB3BC:
	// subfic r11,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r31.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB3E0"))) PPC_WEAK_FUNC(sub_82AAB3E0);
PPC_FUNC_IMPL(__imp__sub_82AAB3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a97a70
	ctx.lr = 0x82AAB3FC;
	sub_82A97A70(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r11,2436
	ctx.r7.s64 = ctx.r11.s64 + 2436;
	// addi r6,r10,2388
	ctx.r6.s64 = ctx.r10.s64 + 2388;
	// addi r5,r9,2368
	ctx.r5.s64 = ctx.r9.s64 + 2368;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-16624
	ctx.r4.s64 = ctx.r8.s64 + -16624;
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// stw r4,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r4.u32);
	// addi r11,r31,440
	ctx.r11.s64 = ctx.r31.s64 + 440;
	// stw r30,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r30.u32);
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x831ecf1c
	ctx.lr = 0x82AAB444;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// lis r3,-32210
	ctx.r3.s64 = -2110914560;
	// stw r30,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r30.u32);
	// addi r11,r31,504
	ctx.r11.s64 = ctx.r31.s64 + 504;
	// addi r10,r3,-13140
	ctx.r10.s64 = ctx.r3.s64 + -13140;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r10,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r10.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r9,2336
	ctx.r5.s64 = ctx.r9.s64 + 2336;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82a7e190
	ctx.lr = 0x82AAB470;
	sub_82A7E190(ctx, base);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// stw r30,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r7,r8,5744
	ctx.r7.s64 = ctx.r8.s64 + 5744;
	// stw r30,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r30.u32);
	// stb r30,560(r31)
	PPC_STORE_U8(ctx.r31.u32 + 560, ctx.r30.u8);
	// stw r7,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB4A8"))) PPC_WEAK_FUNC(sub_82AAB4A8);
PPC_FUNC_IMPL(__imp__sub_82AAB4A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82AAB4B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82aab4fc
	if (!ctx.cr6.eq) goto loc_82AAB4FC;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82aab4fc
	if (!ctx.cr6.eq) goto loc_82AAB4FC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82aa3ef0
	ctx.lr = 0x82AAB4E4;
	sub_82AA3EF0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
loc_82AAB4FC:
	// cmplw cr6,r5,r30
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82aab52c
	if (ctx.cr6.eq) goto loc_82AAB52C;
loc_82AAB504:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82a9fee0
	ctx.lr = 0x82AAB510;
	sub_82A9FEE0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82aaab38
	ctx.lr = 0x82AAB520;
	sub_82AAAB38(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r5,r30
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82aab504
	if (!ctx.cr6.eq) goto loc_82AAB504;
loc_82AAB52C:
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAB540"))) PPC_WEAK_FUNC(sub_82AAB540);
PPC_FUNC_IMPL(__imp__sub_82AAB540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82AAB548;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82aab574
	if (!ctx.cr6.lt) goto loc_82AAB574;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,18984
	ctx.r3.s64 = ctx.r11.s64 + 18984;
	// bl 0x82a90570
	ctx.lr = 0x82AAB574;
	sub_82A90570(ctx, base);
loc_82AAB574:
	// subf r11,r27,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r27.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82aab584
	if (!ctx.cr6.lt) goto loc_82AAB584;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82AAB584:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subfic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r10.u64 = static_cast<uint64_t>(-1) - ctx.r11.u64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82aab5a0
	if (ctx.cr6.gt) goto loc_82AAB5A0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,18968
	ctx.r3.s64 = ctx.r11.s64 + 18968;
	// bl 0x82a90538
	ctx.lr = 0x82AAB5A0;
	sub_82A90538(ctx, base);
loc_82AAB5A0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82aab640
	if (ctx.cr6.eq) goto loc_82AAB640;
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aab320
	ctx.lr = 0x82AAB5BC;
	sub_82AAB320(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aab640
	if (ctx.cr6.eq) goto loc_82AAB640;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82aab5dc
	if (ctx.cr6.lt) goto loc_82AAB5DC;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x82aab5e0
	goto loc_82AAB5E0;
loc_82AAB5DC:
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_82AAB5E0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82aab5f4
	if (ctx.cr6.lt) goto loc_82AAB5F4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82aab5f8
	goto loc_82AAB5F8;
loc_82AAB5F4:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82AAB5F8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r9,r27
	ctx.r4.u64 = ctx.r9.u64 + ctx.r27.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a7d730
	ctx.lr = 0x82AAB60C;
	sub_82A7D730(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82aab634
	if (ctx.cr6.lt) goto loc_82AAB634;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r10,r11,r29
	PPC_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
loc_82AAB634:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stbx r10,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
loc_82AAB640:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAB650"))) PPC_WEAK_FUNC(sub_82AAB650);
PPC_FUNC_IMPL(__imp__sub_82AAB650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82AAB658;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82aab680
	if (!ctx.cr6.lt) goto loc_82AAB680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,18984
	ctx.r3.s64 = ctx.r11.s64 + 18984;
	// bl 0x82a90570
	ctx.lr = 0x82AAB680;
	sub_82A90570(ctx, base);
loc_82AAB680:
	// subf r30,r28,r11
	ctx.r30.u64 = ctx.r11.u64 - ctx.r28.u64;
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82aab690
	if (!ctx.cr6.lt) goto loc_82AAB690;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
loc_82AAB690:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82aab6c4
	if (!ctx.cr6.eq) goto loc_82AAB6C4;
	// li r5,-1
	ctx.r5.s64 = -1;
	// add r4,r30,r28
	ctx.r4.u64 = ctx.r30.u64 + ctx.r28.u64;
	// bl 0x8247ef40
	ctx.lr = 0x82AAB6A8;
	sub_8247EF40(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8247ef40
	ctx.lr = 0x82AAB6B8;
	sub_8247EF40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
loc_82AAB6C4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82aab320
	ctx.lr = 0x82AAB6D0;
	sub_82AAB320(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aab744
	if (ctx.cr6.eq) goto loc_82AAB744;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82aab6ec
	if (ctx.cr6.lt) goto loc_82AAB6EC;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82AAB6EC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82aab700
	if (ctx.cr6.lt) goto loc_82AAB700;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82aab704
	goto loc_82AAB704;
loc_82AAB700:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AAB704:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r29,r28
	ctx.r4.u64 = ctx.r29.u64 + ctx.r28.u64;
	// bl 0x82a7d730
	ctx.lr = 0x82AAB710;
	sub_82A7D730(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82aab738
	if (ctx.cr6.lt) goto loc_82AAB738;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r10,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
loc_82AAB738:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stbx r10,r31,r30
	PPC_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u8);
loc_82AAB744:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAB750"))) PPC_WEAK_FUNC(sub_82AAB750);
PPC_FUNC_IMPL(__imp__sub_82AAB750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82a98518
	ctx.lr = 0x82AAB770;
	sub_82A98518(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aab788
	if (ctx.cr6.eq) goto loc_82AAB788;
	// bl 0x823fd208
	ctx.lr = 0x82AAB784;
	sub_823FD208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AAB788:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB7A0"))) PPC_WEAK_FUNC(sub_82AAB7A0);
PPC_FUNC_IMPL(__imp__sub_82AAB7A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82AAB7A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82aab808
	if (ctx.cr6.eq) goto loc_82AAB808;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82aab7d4
	if (ctx.cr6.lt) goto loc_82AAB7D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82aab7d8
	goto loc_82AAB7D8;
loc_82AAB7D4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82AAB7D8:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82aab808
	if (ctx.cr6.lt) goto loc_82AAB808;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82aab7f0
	if (ctx.cr6.lt) goto loc_82AAB7F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82aab7f4
	goto loc_82AAB7F4;
loc_82AAB7F0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82AAB7F4:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82aab80c
	if (ctx.cr6.gt) goto loc_82AAB80C;
loc_82AAB808:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AAB80C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aab84c
	if (ctx.cr6.eq) goto loc_82AAB84C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82aab82c
	if (ctx.cr6.lt) goto loc_82AAB82C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82aab830
	goto loc_82AAB830;
loc_82AAB82C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82AAB830:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// subf r5,r11,r29
	ctx.r5.u64 = ctx.r29.u64 - ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aab540
	ctx.lr = 0x82AAB844;
	sub_82AAB540(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
loc_82AAB84C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subfic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r10.u64 = static_cast<uint64_t>(-1) - ctx.r11.u64;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x82aab868
	if (ctx.cr6.gt) goto loc_82AAB868;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,18968
	ctx.r3.s64 = ctx.r11.s64 + 18968;
	// bl 0x82a90538
	ctx.lr = 0x82AAB868;
	sub_82A90538(ctx, base);
loc_82AAB868:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82aab8f0
	if (ctx.cr6.eq) goto loc_82AAB8F0;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aab320
	ctx.lr = 0x82AAB884;
	sub_82AAB320(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aab8f0
	if (ctx.cr6.eq) goto loc_82AAB8F0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82aab8a4
	if (ctx.cr6.lt) goto loc_82AAB8A4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82aab8a8
	goto loc_82AAB8A8;
loc_82AAB8A4:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82AAB8A8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a7d730
	ctx.lr = 0x82AAB8BC;
	sub_82A7D730(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82aab8e4
	if (ctx.cr6.lt) goto loc_82AAB8E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r10,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
loc_82AAB8E4:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stbx r10,r31,r30
	PPC_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u8);
loc_82AAB8F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAB900"))) PPC_WEAK_FUNC(sub_82AAB900);
PPC_FUNC_IMPL(__imp__sub_82AAB900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82AAB908;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82aab968
	if (ctx.cr6.eq) goto loc_82AAB968;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82aab934
	if (ctx.cr6.lt) goto loc_82AAB934;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82aab938
	goto loc_82AAB938;
loc_82AAB934:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82AAB938:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82aab968
	if (ctx.cr6.lt) goto loc_82AAB968;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82aab950
	if (ctx.cr6.lt) goto loc_82AAB950;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82aab954
	goto loc_82AAB954;
loc_82AAB950:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82AAB954:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82aab96c
	if (ctx.cr6.gt) goto loc_82AAB96C;
loc_82AAB968:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AAB96C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aab9ac
	if (ctx.cr6.eq) goto loc_82AAB9AC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82aab98c
	if (ctx.cr6.lt) goto loc_82AAB98C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82aab990
	goto loc_82AAB990;
loc_82AAB98C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82AAB990:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// subf r5,r11,r30
	ctx.r5.u64 = ctx.r30.u64 - ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aab650
	ctx.lr = 0x82AAB9A4;
	sub_82AAB650(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
loc_82AAB9AC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aab320
	ctx.lr = 0x82AAB9BC;
	sub_82AAB320(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aaba20
	if (ctx.cr6.eq) goto loc_82AABA20;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82aab9dc
	if (ctx.cr6.lt) goto loc_82AAB9DC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82aab9e0
	goto loc_82AAB9E0;
loc_82AAB9DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AAB9E0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a7d730
	ctx.lr = 0x82AAB9EC;
	sub_82A7D730(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82aaba14
	if (ctx.cr6.lt) goto loc_82AABA14;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r10,r11,r29
	PPC_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
loc_82AABA14:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stbx r10,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
loc_82AABA20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AABA38"))) PPC_WEAK_FUNC(sub_82AABA38);
PPC_FUNC_IMPL(__imp__sub_82AABA38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stw r6,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r6.u32);
	// stw r6,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r6.u32);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82aab4a8
	ctx.lr = 0x82AABA74;
	sub_82AAB4A8(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x823fd208
	ctx.lr = 0x82AABA7C;
	sub_823FD208(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AABA94"))) PPC_WEAK_FUNC(sub_82AABA94);
PPC_FUNC_IMPL(__imp__sub_82AABA94) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x82aa3668
	ctx.lr = 0x82AABAAC;
	sub_82AA3668(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AABAC0"))) PPC_WEAK_FUNC(sub_82AABAC0);
PPC_FUNC_IMPL(__imp__sub_82AABAC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddf8
	ctx.lr = 0x82AABAC8;
	__savegprlr_24(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AABAF0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aabaf0
	if (!ctx.cr6.eq) goto loc_82AABAF0;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82aab900
	ctx.lr = 0x82AABB18;
	sub_82AAB900(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82AABB1C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aabb1c
	if (!ctx.cr6.eq) goto loc_82AABB1C;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r31,324
	ctx.r3.s64 = ctx.r31.s64 + 324;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82aab900
	ctx.lr = 0x82AABB44;
	sub_82AAB900(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,356
	ctx.r3.s64 = ctx.r31.s64 + 356;
	// bl 0x83100488
	ctx.lr = 0x82AABB50;
	sub_83100488(ctx, base);
	// lbz r10,503(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 503);
	// stw r27,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r27.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r26,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r26.u32);
	// stb r10,352(r31)
	PPC_STORE_U8(ctx.r31.u32 + 352, ctx.r10.u8);
loc_82AABB64:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aabb64
	if (!ctx.cr6.eq) goto loc_82AABB64;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r30.u64;
	// addi r28,r31,268
	ctx.r28.s64 = ctx.r31.s64 + 268;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82aab900
	ctx.lr = 0x82AABB90;
	sub_82AAB900(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r10,-24352
	ctx.r4.s64 = ctx.r10.s64 + -24352;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82aab7a0
	ctx.lr = 0x82AABBA4;
	sub_82AAB7A0(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82AABBA8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aabba8
	if (!ctx.cr6.eq) goto loc_82AABBA8;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82aab7a0
	ctx.lr = 0x82AABBD0;
	sub_82AAB7A0(ctx, base);
	// addi r4,r31,224
	ctx.r4.s64 = ctx.r31.s64 + 224;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a92c70
	ctx.lr = 0x82AABBDC;
	sub_82A92C70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82aabc40
	if (ctx.cr6.lt) goto loc_82AABC40;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82a7d730
	ctx.lr = 0x82AABBF8;
	sub_82A7D730(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r10.u32);
	// lwz r9,20(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x82aabc14
	if (ctx.cr6.lt) goto loc_82AABC14;
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x82aabc18
	goto loc_82AABC18;
loc_82AABC14:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_82AABC18:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r6,r11,2536
	ctx.r6.s64 = ctx.r11.s64 + 2536;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ee598
	ctx.lr = 0x82AABC30;
	sub_823EE598(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aa8fb0
	ctx.lr = 0x82AABC3C;
	sub_82AA8FB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AABC40:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82a7de48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AABC50"))) PPC_WEAK_FUNC(sub_82AABC50);
PPC_FUNC_IMPL(__imp__sub_82AABC50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de00
	ctx.lr = 0x82AABC58;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-272
	ctx.r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82aabac0
	ctx.lr = 0x82AABC98;
	sub_82AABAC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82aabf10
	if (ctx.cr6.lt) goto loc_82AABF10;
	// stw r27,544(r30)
	PPC_STORE_U32(ctx.r30.u32 + 544, ctx.r27.u32);
	// li r3,80
	ctx.r3.s64 = 80;
	// stw r28,476(r30)
	PPC_STORE_U32(ctx.r30.u32 + 476, ctx.r28.u32);
	// stw r29,484(r30)
	PPC_STORE_U32(ctx.r30.u32 + 484, ctx.r29.u32);
	// bl 0x829e6d58
	ctx.lr = 0x82AABCB4;
	sub_829E6D58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aabce0
	if (ctx.cr6.eq) goto loc_82AABCE0;
	// bl 0x82aac808
	ctx.lr = 0x82AABCC8;
	sub_82AAC808(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r28,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r28.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r10,r11,-6300
	ctx.r10.s64 = ctx.r11.s64 + -6300;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x82aabce4
	goto loc_82AABCE4;
loc_82AABCE0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82AABCE4:
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x830fde88
	ctx.lr = 0x82AABCEC;
	sub_830FDE88(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82aabd04
	if (!ctx.cr6.eq) goto loc_82AABD04;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82aabf10
	goto loc_82AABF10;
loc_82AABD04:
	// lwz r5,360(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 360);
	// lwz r4,484(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 484);
	// bl 0x82aac400
	ctx.lr = 0x82AABD10;
	sub_82AAC400(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82aabd50
	if (!ctx.cr6.lt) goto loc_82AABD50;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r10,r11,-13140
	ctx.r10.s64 = ctx.r11.s64 + -13140;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// beq cr6,0x82aabd48
	if (ctx.cr6.eq) goto loc_82AABD48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AABD48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AABD48:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82aabf10
	goto loc_82AABF10;
loc_82AABD50:
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x82aac250
	ctx.lr = 0x82AABD5C;
	sub_82AAC250(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// addi r10,r30,488
	ctx.r10.s64 = ctx.r30.s64 + 488;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,488(r30)
	PPC_STORE_U32(ctx.r30.u32 + 488, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,492(r30)
	PPC_STORE_U32(ctx.r30.u32 + 492, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,496(r30)
	PPC_STORE_U32(ctx.r30.u32 + 496, ctx.r7.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r6,500(r30)
	PPC_STORE_U32(ctx.r30.u32 + 500, ctx.r6.u32);
	// bl 0x829e6d58
	ctx.lr = 0x82AABD8C;
	sub_829E6D58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aabdb8
	if (ctx.cr6.eq) goto loc_82AABDB8;
	// bl 0x82aaa228
	ctx.lr = 0x82AABDA0;
	sub_82AAA228(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r28,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r28.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r10,r11,1604
	ctx.r10.s64 = ctx.r11.s64 + 1604;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x82aabdbc
	goto loc_82AABDBC;
loc_82AABDB8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82AABDBC:
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x830fde88
	ctx.lr = 0x82AABDC4;
	sub_830FDE88(ctx, base);
	// lwz r29,180(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82aabe14
	if (!ctx.cr6.eq) goto loc_82AABE14;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r10,r11,-13140
	ctx.r10.s64 = ctx.r11.s64 + -13140;
	// stw r10,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r10.u32);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r8,r9,-13140
	ctx.r8.s64 = ctx.r9.s64 + -13140;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r8,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r8.u32);
	// beq cr6,0x82aabe08
	if (ctx.cr6.eq) goto loc_82AABE08;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AABE08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AABE08:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82aabf10
	goto loc_82AABF10;
loc_82AABE14:
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// addi r3,r29,28
	ctx.r3.s64 = ctx.r29.s64 + 28;
	// bl 0x8314f878
	ctx.lr = 0x82AABE28;
	sub_8314F878(ctx, base);
	// stw r28,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r28.u32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r9,116(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r5,180(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AABE48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82aabeb4
	if (!ctx.cr6.lt) goto loc_82AABEB4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r10,r11,-13140
	ctx.r10.s64 = ctx.r11.s64 + -13140;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r10.u32);
	// beq cr6,0x82aabe80
	if (ctx.cr6.eq) goto loc_82AABE80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,184
	ctx.r4.s64 = ctx.r31.s64 + 184;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AABE80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AABE80:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r10,r11,-13140
	ctx.r10.s64 = ctx.r11.s64 + -13140;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// beq cr6,0x82aabeac
	if (ctx.cr6.eq) goto loc_82AABEAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AABEAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AABEAC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82aabf10
	goto loc_82AABF10;
loc_82AABEB4:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r10,r11,-13140
	ctx.r10.s64 = ctx.r11.s64 + -13140;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r10.u32);
	// beq cr6,0x82aabee0
	if (ctx.cr6.eq) goto loc_82AABEE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,184
	ctx.r4.s64 = ctx.r31.s64 + 184;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AABEE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AABEE0:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r10,r11,-13140
	ctx.r10.s64 = ctx.r11.s64 + -13140;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// beq cr6,0x82aabf0c
	if (ctx.cr6.eq) goto loc_82AABF0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AABF0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AABF0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AABF10:
	// addi r1,r31,272
	ctx.r1.s64 = ctx.r31.s64 + 272;
	// b 0x82a7de50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AABF18"))) PPC_WEAK_FUNC(sub_82AABF18);
PPC_FUNC_IMPL(__imp__sub_82AABF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-272
	ctx.r31.s64 = ctx.r12.s64 + -272;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82a9d3d0
	ctx.lr = 0x82AABF30;
	sub_82A9D3D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AABF40"))) PPC_WEAK_FUNC(sub_82AABF40);
PPC_FUNC_IMPL(__imp__sub_82AABF40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-272
	ctx.r31.s64 = ctx.r12.s64 + -272;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x830fdef0
	ctx.lr = 0x82AABF58;
	sub_830FDEF0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AABF68"))) PPC_WEAK_FUNC(sub_82AABF68);
PPC_FUNC_IMPL(__imp__sub_82AABF68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-272
	ctx.r31.s64 = ctx.r12.s64 + -272;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82a9d3d0
	ctx.lr = 0x82AABF80;
	sub_82A9D3D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AABF90"))) PPC_WEAK_FUNC(sub_82AABF90);
PPC_FUNC_IMPL(__imp__sub_82AABF90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-272
	ctx.r31.s64 = ctx.r12.s64 + -272;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x830fdef0
	ctx.lr = 0x82AABFA8;
	sub_830FDEF0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AABFB8"))) PPC_WEAK_FUNC(sub_82AABFB8);
PPC_FUNC_IMPL(__imp__sub_82AABFB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,25224
	ctx.r10.s64 = ctx.r11.s64 + 25224;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AABFC8"))) PPC_WEAK_FUNC(sub_82AABFC8);
PPC_FUNC_IMPL(__imp__sub_82AABFC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r9,r5,r11
	ctx.r9.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AABFE8"))) PPC_WEAK_FUNC(sub_82AABFE8);
PPC_FUNC_IMPL(__imp__sub_82AABFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de00
	ctx.lr = 0x82AABFF0;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-224
	ctx.r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r10,5744
	ctx.r29.s64 = ctx.r10.s64 + 5744;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stb r11,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r11.u8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82aac190
	if (ctx.cr6.eq) goto loc_82AAC190;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r9,r10,2728
	ctx.r9.s64 = ctx.r10.s64 + 2728;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// bl 0x82a94598
	ctx.lr = 0x82AAC03C;
	sub_82A94598(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82aac080
	if (!ctx.cr6.lt) goto loc_82AAC080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,25224
	ctx.r10.s64 = ctx.r11.s64 + 25224;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r29,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aac078
	if (ctx.cr6.eq) goto loc_82AAC078;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AAC078;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AAC078:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x82aac188
	goto loc_82AAC188;
loc_82AAC080:
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82a92c70
	ctx.lr = 0x82AAC08C;
	sub_82A92C70(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82aac0d0
	if (!ctx.cr6.lt) goto loc_82AAC0D0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,25224
	ctx.r10.s64 = ctx.r11.s64 + 25224;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r29,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aac078
	if (ctx.cr6.eq) goto loc_82AAC078;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AAC0C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x82aac188
	goto loc_82AAC188;
loc_82AAC0D0:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82aad480
	ctx.lr = 0x82AAC0E4;
	sub_82AAD480(ctx, base);
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a94598
	ctx.lr = 0x82AAC0F4;
	sub_82A94598(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82aac140
	if (!ctx.cr6.lt) goto loc_82AAC140;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82aabfb8
	ctx.lr = 0x82AAC108;
	sub_82AABFB8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,25224
	ctx.r10.s64 = ctx.r11.s64 + 25224;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r29,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aac138
	if (ctx.cr6.eq) goto loc_82AAC138;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AAC138;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AAC138:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82aac188
	goto loc_82AAC188;
loc_82AAC140:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82aabfb8
	ctx.lr = 0x82AAC148;
	sub_82AABFB8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,25224
	ctx.r10.s64 = ctx.r11.s64 + 25224;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
loc_82AAC154:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x83100488
	ctx.lr = 0x82AAC160;
	sub_83100488(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r29,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aac184
	if (ctx.cr6.eq) goto loc_82AAC184;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AAC184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AAC184:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AAC188:
	// addi r1,r31,224
	ctx.r1.s64 = ctx.r31.s64 + 224;
	// b 0x82a7de50
	__restgprlr_26(ctx, base);
	return;
loc_82AAC190:
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a92c70
	ctx.lr = 0x82AAC19C;
	sub_82A92C70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82aac154
	if (!ctx.cr6.lt) goto loc_82AAC154;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r29,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aac1cc
	if (ctx.cr6.eq) goto loc_82AAC1CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AAC1CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AAC1CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82aac188
	goto loc_82AAC188;
}

__attribute__((alias("__imp__sub_82AAC1D4"))) PPC_WEAK_FUNC(sub_82AAC1D4);
PPC_FUNC_IMPL(__imp__sub_82AAC1D4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-224
	ctx.r31.s64 = ctx.r12.s64 + -224;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82827070
	ctx.lr = 0x82AAC1EC;
	sub_82827070(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAC1FC"))) PPC_WEAK_FUNC(sub_82AAC1FC);
PPC_FUNC_IMPL(__imp__sub_82AAC1FC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-224
	ctx.r31.s64 = ctx.r12.s64 + -224;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82aabfb8
	ctx.lr = 0x82AAC214;
	sub_82AABFB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAC224"))) PPC_WEAK_FUNC(sub_82AAC224);
PPC_FUNC_IMPL(__imp__sub_82AAC224) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-224
	ctx.r31.s64 = ctx.r12.s64 + -224;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82aabfb8
	ctx.lr = 0x82AAC23C;
	sub_82AABFB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAC250"))) PPC_WEAK_FUNC(sub_82AAC250);
PPC_FUNC_IMPL(__imp__sub_82AAC250) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAC278"))) PPC_WEAK_FUNC(sub_82AAC278);
PPC_FUNC_IMPL(__imp__sub_82AAC278) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAC290"))) PPC_WEAK_FUNC(sub_82AAC290);
PPC_FUNC_IMPL(__imp__sub_82AAC290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,2960
	ctx.r8.s64 = ctx.r10.s64 + 2960;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r9,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r9.u8);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aac2e0
	if (ctx.cr6.eq) goto loc_82AAC2E0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AAC2E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AAC2E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAC2F8"))) PPC_WEAK_FUNC(sub_82AAC2F8);
PPC_FUNC_IMPL(__imp__sub_82AAC2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r8,r9,2960
	ctx.r8.s64 = ctx.r9.s64 + 2960;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82AAC330"))) PPC_WEAK_FUNC(sub_82AAC330);
PPC_FUNC_IMPL(__imp__sub_82AAC330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r10,2960
	ctx.r9.s64 = ctx.r10.s64 + 2960;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82aac37c
	if (ctx.cr6.eq) goto loc_82AAC37C;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AAC37C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AAC37C:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aac394
	if (ctx.cr6.eq) goto loc_82AAC394;
	// bl 0x823fd208
	ctx.lr = 0x82AAC390;
	sub_823FD208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AAC394:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAC3B0"))) PPC_WEAK_FUNC(sub_82AAC3B0);
PPC_FUNC_IMPL(__imp__sub_82AAC3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r8,r10,2964
	ctx.r8.s64 = ctx.r10.s64 + 2964;
	// addi r7,r9,5744
	ctx.r7.s64 = ctx.r9.s64 + 5744;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82AAC3F0"))) PPC_WEAK_FUNC(sub_82AAC3F0);
PPC_FUNC_IMPL(__imp__sub_82AAC3F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAC400"))) PPC_WEAK_FUNC(sub_82AAC400);
PPC_FUNC_IMPL(__imp__sub_82AAC400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82AAC408;
	__savegprlr_28(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82aac644
	if (ctx.cr6.eq) goto loc_82AAC644;
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82aac644
	if (ctx.cr6.eq) goto loc_82AAC644;
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// ori r9,r11,30720
	ctx.r9.u64 = ctx.r11.u64 | 30720;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82aac450
	if (!ctx.cr6.gt) goto loc_82AAC450;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
loc_82AAC450:
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82a604c8
	ctx.lr = 0x82AAC45C;
	sub_82A604C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aac4cc
	if (ctx.cr6.eq) goto loc_82AAC4CC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,3272
	ctx.r5.s64 = ctx.r11.s64 + 3272;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a7f768
	ctx.lr = 0x82AAC480;
	sub_82A7F768(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r9,r10,-32316
	ctx.r9.s64 = ctx.r10.s64 + -32316;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82AAC4A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt cr6,0x82aac4bc
	if (ctx.cr6.gt) goto loc_82AAC4BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
loc_82AAC4BC:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
loc_82AAC4CC:
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82a604c8
	ctx.lr = 0x82AAC4D8;
	sub_82A604C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aac538
	if (ctx.cr6.eq) goto loc_82AAC538;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,3176
	ctx.r5.s64 = ctx.r11.s64 + 3176;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a7f768
	ctx.lr = 0x82AAC4FC;
	sub_82A7F768(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r9,r10,-32316
	ctx.r9.s64 = ctx.r10.s64 + -32316;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82AAC524;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt cr6,0x82aac4bc
	if (ctx.cr6.gt) goto loc_82AAC4BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
loc_82AAC538:
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,10
	ctx.r3.s64 = ctx.r31.s64 + 10;
	// bl 0x82a604c8
	ctx.lr = 0x82AAC544;
	sub_82A604C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aac5a4
	if (ctx.cr6.eq) goto loc_82AAC5A4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,3080
	ctx.r5.s64 = ctx.r11.s64 + 3080;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a7f768
	ctx.lr = 0x82AAC568;
	sub_82A7F768(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r9,r10,-32316
	ctx.r9.s64 = ctx.r10.s64 + -32316;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82AAC590;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt cr6,0x82aac4bc
	if (ctx.cr6.gt) goto loc_82AAC4BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
loc_82AAC5A4:
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82a604c8
	ctx.lr = 0x82AAC5B0;
	sub_82A604C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aac610
	if (ctx.cr6.eq) goto loc_82AAC610;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,2984
	ctx.r5.s64 = ctx.r11.s64 + 2984;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a7f768
	ctx.lr = 0x82AAC5D4;
	sub_82A7F768(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r9,r10,-32316
	ctx.r9.s64 = ctx.r10.s64 + -32316;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82AAC5FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt cr6,0x82aac4bc
	if (ctx.cr6.gt) goto loc_82AAC4BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
loc_82AAC610:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x83100488
	ctx.lr = 0x82AAC620;
	sub_83100488(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,500
	ctx.r9.s64 = 500;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
loc_82AAC644:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAC658"))) PPC_WEAK_FUNC(sub_82AAC658);
PPC_FUNC_IMPL(__imp__sub_82AAC658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82AAC660;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AAC694;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82aac74c
	if (ctx.cr6.lt) goto loc_82AAC74C;
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// ori r10,r11,30720
	ctx.r10.u64 = ctx.r11.u64 | 30720;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82aac6c0
	if (!ctx.cr6.gt) goto loc_82AAC6C0;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,92
	ctx.r3.u64 = ctx.r3.u64 | 92;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
loc_82AAC6C0:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// bl 0x82a92c70
	ctx.lr = 0x82AAC6F4;
	sub_82A92C70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82aac70c
	if (!ctx.cr6.lt) goto loc_82AAC70C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
loc_82AAC70C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AAC730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82aac74c
	if (ctx.cr6.lt) goto loc_82AAC74C;
	// li r11,500
	ctx.r11.s64 = 500;
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// stw r29,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_82AAC74C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAC758"))) PPC_WEAK_FUNC(sub_82AAC758);
PPC_FUNC_IMPL(__imp__sub_82AAC758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82AAC760;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r29,16(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r28,20(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r3,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r29,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r29.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AAC7CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82aac800
	if (ctx.cr6.lt) goto loc_82AAC800;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AAC7F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// srawi r8,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 31;
	// and r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 & ctx.r3.u64;
loc_82AAC800:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAC808"))) PPC_WEAK_FUNC(sub_82AAC808);
PPC_FUNC_IMPL(__imp__sub_82AAC808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,2964
	ctx.r9.s64 = ctx.r11.s64 + 2964;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,5744
	ctx.r8.s64 = ctx.r10.s64 + 5744;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r7,500
	ctx.r7.s64 = 500;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r7,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r7.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAC850"))) PPC_WEAK_FUNC(sub_82AAC850);
PPC_FUNC_IMPL(__imp__sub_82AAC850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,2964
	ctx.r9.s64 = ctx.r11.s64 + 2964;
	// addi r8,r10,5744
	ctx.r8.s64 = ctx.r10.s64 + 5744;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// beq cr6,0x82aac8a8
	if (ctx.cr6.eq) goto loc_82AAC8A8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AAC8A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AAC8A8:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aac8c0
	if (ctx.cr6.eq) goto loc_82AAC8C0;
	// bl 0x823fd208
	ctx.lr = 0x82AAC8BC;
	sub_823FD208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AAC8C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAC8E0"))) PPC_WEAK_FUNC(sub_82AAC8E0);
PPC_FUNC_IMPL(__imp__sub_82AAC8E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r3,596(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	// addi r11,r30,592
	ctx.r11.s64 = ctx.r30.s64 + 592;
	// addi r9,r10,5744
	ctx.r9.s64 = ctx.r10.s64 + 5744;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,592(r30)
	PPC_STORE_U32(ctx.r30.u32 + 592, ctx.r9.u32);
	// beq cr6,0x82aac930
	if (ctx.cr6.eq) goto loc_82AAC930;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AAC930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AAC930:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a98518
	ctx.lr = 0x82AAC938;
	sub_82A98518(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAC950"))) PPC_WEAK_FUNC(sub_82AAC950);
PPC_FUNC_IMPL(__imp__sub_82AAC950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x82a98518
	ctx.lr = 0x82AAC968;
	sub_82A98518(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAC978"))) PPC_WEAK_FUNC(sub_82AAC978);
PPC_FUNC_IMPL(__imp__sub_82AAC978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r3,632
	ctx.r11.s64 = ctx.r3.s64 + 632;
loc_82AAC97C:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = PPC_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	PPC_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reserved.u32 = *(uint32_t*)PPC_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(PPC_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	PPC_LEAVE_GLOBAL_LOCK();
	// bne 0x82aac97c
	if (!ctx.cr0.eq) goto loc_82AAC97C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAC9A0"))) PPC_WEAK_FUNC(sub_82AAC9A0);
PPC_FUNC_IMPL(__imp__sub_82AAC9A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r3,632
	ctx.r11.s64 = ctx.r3.s64 + 632;
loc_82AAC9A4:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = PPC_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	PPC_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reserved.u32 = *(uint32_t*)PPC_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(PPC_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	PPC_LEAVE_GLOBAL_LOCK();
	// bne 0x82aac9a4
	if (!ctx.cr0.eq) goto loc_82AAC9A4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82AAC9F0"))) PPC_WEAK_FUNC(sub_82AAC9F0);
PPC_FUNC_IMPL(__imp__sub_82AAC9F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// b 0x82aac9a0
	sub_82AAC9A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AACA10"))) PPC_WEAK_FUNC(sub_82AACA10);
PPC_FUNC_IMPL(__imp__sub_82AACA10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r11,3452
	ctx.r8.s64 = ctx.r11.s64 + 3452;
	// addi r7,r10,3580
	ctx.r7.s64 = ctx.r10.s64 + 3580;
	// addi r6,r9,3432
	ctx.r6.s64 = ctx.r9.s64 + 3432;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82aac8e0
	ctx.lr = 0x82AACA54;
	sub_82AAC8E0(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82aaca6c
	if (ctx.cr6.eq) goto loc_82AACA6C;
	// bl 0x823fd208
	ctx.lr = 0x82AACA68;
	sub_823FD208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AACA6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AACA88"))) PPC_WEAK_FUNC(sub_82AACA88);
PPC_FUNC_IMPL(__imp__sub_82AACA88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82aab3e0
	ctx.lr = 0x82AACAA0;
	sub_82AAB3E0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// addi r6,r10,2388
	ctx.r6.s64 = ctx.r10.s64 + 2388;
	// addi r7,r11,3540
	ctx.r7.s64 = ctx.r11.s64 + 3540;
	// addi r5,r9,2368
	ctx.r5.s64 = ctx.r9.s64 + 2368;
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// addi r4,r8,5744
	ctx.r4.s64 = ctx.r8.s64 + 5744;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// stw r4,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r4.u32);
	// addi r11,r31,592
	ctx.r11.s64 = ctx.r31.s64 + 592;
	// stw r3,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r3.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r10,3492
	ctx.r5.s64 = ctx.r10.s64 + 3492;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82a7e190
	ctx.lr = 0x82AACAF4;
	sub_82A7E190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AACB10"))) PPC_WEAK_FUNC(sub_82AACB10);
PPC_FUNC_IMPL(__imp__sub_82AACB10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82aac8e0
	ctx.lr = 0x82AACB30;
	sub_82AAC8E0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aacb48
	if (ctx.cr6.eq) goto loc_82AACB48;
	// bl 0x823fd208
	ctx.lr = 0x82AACB44;
	sub_823FD208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AACB48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AACB60"))) PPC_WEAK_FUNC(sub_82AACB60);
PPC_FUNC_IMPL(__imp__sub_82AACB60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82aaca88
	ctx.lr = 0x82AACB78;
	sub_82AACA88(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r11,3628
	ctx.r8.s64 = ctx.r11.s64 + 3628;
	// addi r7,r10,3580
	ctx.r7.s64 = ctx.r10.s64 + 3580;
	// addi r6,r9,3432
	ctx.r6.s64 = ctx.r9.s64 + 3432;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AACBC0"))) PPC_WEAK_FUNC(sub_82AACBC0);
PPC_FUNC_IMPL(__imp__sub_82AACBC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r11,3452
	ctx.r8.s64 = ctx.r11.s64 + 3452;
	// addi r7,r10,3580
	ctx.r7.s64 = ctx.r10.s64 + 3580;
	// addi r6,r9,3432
	ctx.r6.s64 = ctx.r9.s64 + 3432;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82aac8e0
	ctx.lr = 0x82AACC04;
	sub_82AAC8E0(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82aacc1c
	if (ctx.cr6.eq) goto loc_82AACC1C;
	// bl 0x829e6d90
	ctx.lr = 0x82AACC18;
	sub_829E6D90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AACC1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AACC40"))) PPC_WEAK_FUNC(sub_82AACC40);
PPC_FUNC_IMPL(__imp__sub_82AACC40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82AACC48;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-272
	ctx.r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r31,96
	ctx.r10.s64 = ctx.r31.s64 + 96;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r6,r31,96
	ctx.r6.s64 = ctx.r31.s64 + 96;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r29.u32);
	// std r29,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r29.u64);
	// addi r27,r11,5744
	ctx.r27.s64 = ctx.r11.s64 + 5744;
	// std r29,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r29.u64);
	// stw r29,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r29.u32);
	// stw r27,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r27.u32);
	// stb r29,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r29.u8);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// stw r7,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r7.u32);
	// stw r5,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r5.u32);
	// lis r4,-31951
	ctx.r4.s64 = -2093940736;
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// addi r4,r4,28284
	ctx.r4.s64 = ctx.r4.s64 + 28284;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82aabfe8
	ctx.lr = 0x82AACCB4;
	sub_82AABFE8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82aaccec
	if (!ctx.cr6.lt) goto loc_82AACCEC;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r27,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aacce4
	if (ctx.cr6.eq) goto loc_82AACCE4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AACCE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AACCE4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82aacedc
	goto loc_82AACEDC;
loc_82AACCEC:
	// li r3,640
	ctx.r3.s64 = 640;
	// bl 0x829e6d58
	ctx.lr = 0x82AACCF4;
	sub_829E6D58(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aacd0c
	if (ctx.cr6.eq) goto loc_82AACD0C;
	// bl 0x82aacb60
	ctx.lr = 0x82AACD04;
	sub_82AACB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82aacd10
	goto loc_82AACD10;
loc_82AACD0C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82AACD10:
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x82aac290
	ctx.lr = 0x82AACD18;
	sub_82AAC290(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82aacd60
	if (!ctx.cr6.eq) goto loc_82AACD60;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,2960
	ctx.r10.s64 = ctx.r11.s64 + 2960;
	// stw r10,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r10.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r27,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aacd54
	if (ctx.cr6.eq) goto loc_82AACD54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AACD54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AACD54:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// b 0x82aacedc
	goto loc_82AACEDC;
loc_82AACD60:
	// lwz r8,28(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// ld r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 4);
	// ld r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 12);
	// bl 0x82aad800
	ctx.lr = 0x82AACD78;
	sub_82AAD800(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82aacde0
	if (!ctx.cr6.lt) goto loc_82AACDE0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r9,r10,2960
	ctx.r9.s64 = ctx.r10.s64 + 2960;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r9.u32);
	// beq cr6,0x82aacdb4
	if (ctx.cr6.eq) goto loc_82AACDB4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// addi r4,r31,184
	ctx.r4.s64 = ctx.r31.s64 + 184;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AACDB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AACDB4:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r27,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aacce4
	if (ctx.cr6.eq) goto loc_82AACCE4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AACDD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82aacedc
	goto loc_82AACEDC;
loc_82AACDE0:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// bne cr6,0x82aacdf4
	if (!ctx.cr6.eq) goto loc_82AACDF4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82AACDF4:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,-32316
	ctx.r10.s64 = ctx.r11.s64 + -32316;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AACE14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82aace7c
	if (!ctx.cr6.lt) goto loc_82AACE7C;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r9,r10,2960
	ctx.r9.s64 = ctx.r10.s64 + 2960;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r9.u32);
	// beq cr6,0x82aace50
	if (ctx.cr6.eq) goto loc_82AACE50;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// addi r4,r31,184
	ctx.r4.s64 = ctx.r31.s64 + 184;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AACE50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AACE50:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r27,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aace74
	if (ctx.cr6.eq) goto loc_82AACE74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AACE74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AACE74:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82aacedc
	goto loc_82AACEDC;
loc_82AACE7C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r11.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r9,r10,2960
	ctx.r9.s64 = ctx.r10.s64 + 2960;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r9.u32);
	// beq cr6,0x82aaceb4
	if (ctx.cr6.eq) goto loc_82AACEB4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// addi r4,r31,184
	ctx.r4.s64 = ctx.r31.s64 + 184;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AACEB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AACEB4:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r27,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aaced8
	if (ctx.cr6.eq) goto loc_82AACED8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AACED8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AACED8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AACEDC:
	// addi r1,r31,272
	ctx.r1.s64 = ctx.r31.s64 + 272;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AACEE4"))) PPC_WEAK_FUNC(sub_82AACEE4);
PPC_FUNC_IMPL(__imp__sub_82AACEE4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-272
	ctx.r31.s64 = ctx.r12.s64 + -272;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82827070
	ctx.lr = 0x82AACEFC;
	sub_82827070(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AACF0C"))) PPC_WEAK_FUNC(sub_82AACF0C);
PPC_FUNC_IMPL(__imp__sub_82AACF0C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-272
	ctx.r31.s64 = ctx.r12.s64 + -272;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82a9d3d0
	ctx.lr = 0x82AACF24;
	sub_82A9D3D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AACF34"))) PPC_WEAK_FUNC(sub_82AACF34);
PPC_FUNC_IMPL(__imp__sub_82AACF34) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-272
	ctx.r31.s64 = ctx.r12.s64 + -272;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x82aac2f8
	ctx.lr = 0x82AACF4C;
	sub_82AAC2F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AACF60"))) PPC_WEAK_FUNC(sub_82AACF60);
PPC_FUNC_IMPL(__imp__sub_82AACF60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823f18b8
	ctx.lr = 0x82AACF78;
	sub_823F18B8(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82aacfb4
	if (!ctx.cr6.eq) goto loc_82AACFB4;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// subf r9,r10,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r10.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82aacfb4
	if (ctx.cr6.lt) goto loc_82AACFB4;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bl 0x82aacc40
	ctx.lr = 0x82AACFAC;
	sub_82AACC40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82aacfb8
	if (ctx.cr6.lt) goto loc_82AACFB8;
loc_82AACFB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AACFB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AACFD0"))) PPC_WEAK_FUNC(sub_82AACFD0);
PPC_FUNC_IMPL(__imp__sub_82AACFD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,3856
	ctx.r10.s64 = ctx.r11.s64 + 3856;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AACFE0"))) PPC_WEAK_FUNC(sub_82AACFE0);
PPC_FUNC_IMPL(__imp__sub_82AACFE0) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x82aacff4
	if (!ctx.cr6.eq) goto loc_82AACFF4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82AACFF4:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD010"))) PPC_WEAK_FUNC(sub_82AAD010);
PPC_FUNC_IMPL(__imp__sub_82AAD010) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,3856
	ctx.r9.s64 = ctx.r10.s64 + 3856;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD040"))) PPC_WEAK_FUNC(sub_82AAD040);
PPC_FUNC_IMPL(__imp__sub_82AAD040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,3856
	ctx.r9.s64 = ctx.r11.s64 + 3856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82aad074
	if (ctx.cr6.eq) goto loc_82AAD074;
	// bl 0x823fd208
	ctx.lr = 0x82AAD070;
	sub_823FD208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AAD074:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD090"))) PPC_WEAK_FUNC(sub_82AAD090);
PPC_FUNC_IMPL(__imp__sub_82AAD090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82AAD098;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// addi r3,r5,-4
	ctx.r3.s64 = ctx.r5.s64 + -4;
	// bne cr6,0x82aad0b8
	if (!ctx.cr6.eq) goto loc_82AAD0B8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AAD0B8:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-13140
	ctx.r30.s64 = ctx.r11.s64 + -13140;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
	// beq cr6,0x82aad0f0
	if (ctx.cr6.eq) goto loc_82AAD0F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AAD0EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
loc_82AAD0F0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r10,-6380
	ctx.r4.s64 = ctx.r10.s64 + -6380;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AAD108;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bne cr6,0x82aad124
	if (!ctx.cr6.eq) goto loc_82AAD124;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82aad12c
	goto loc_82AAD12C;
loc_82AAD124:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82AAD12C:
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AAD134;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aad158
	if (ctx.cr6.eq) goto loc_82AAD158;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AAD158;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AAD158:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAD160"))) PPC_WEAK_FUNC(sub_82AAD160);
PPC_FUNC_IMPL(__imp__sub_82AAD160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fdef0
	ctx.lr = 0x82AAD178;
	sub_830FDEF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD188"))) PPC_WEAK_FUNC(sub_82AAD188);
PPC_FUNC_IMPL(__imp__sub_82AAD188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82AAD190;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82aad1bc
	if (!ctx.cr6.eq) goto loc_82AAD1BC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
loc_82AAD1BC:
	// lis r11,1024
	ctx.r11.s64 = 67108864;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82aad1d8
	if (!ctx.cr6.gt) goto loc_82AAD1D8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
loc_82AAD1D8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82aad1e8
	if (!ctx.cr6.lt) goto loc_82AAD1E8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82AAD1E8:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a7d730
	ctx.lr = 0x82AAD1F8;
	sub_82A7D730(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82aad204
	if (ctx.cr6.eq) goto loc_82AAD204;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
loc_82AAD204:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subfc r10,r29,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r29.u32;
	ctx.r10.u64 = ctx.r30.u64 - ctx.r29.u64;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// ori r5,r7,16389
	ctx.r5.u64 = ctx.r7.u64 | 16389;
	// subf r4,r30,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r30.u64;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// subfe r3,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// and r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 & ctx.r5.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAD238"))) PPC_WEAK_FUNC(sub_82AAD238);
PPC_FUNC_IMPL(__imp__sub_82AAD238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82AAD240;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82aad268
	if (!ctx.cr6.eq) goto loc_82AAD268;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
loc_82AAD268:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82aad284
	if (!ctx.cr6.eq) goto loc_82AAD284;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
loc_82AAD284:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82aad290
	if (!ctx.cr6.lt) goto loc_82AAD290;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82AAD290:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// beq cr6,0x82aad2d8
	if (ctx.cr6.eq) goto loc_82AAD2D8;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// beq cr6,0x82aad2c8
	if (ctx.cr6.eq) goto loc_82AAD2C8;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// beq cr6,0x82aad2b8
	if (ctx.cr6.eq) goto loc_82AAD2B8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82a7d730
	ctx.lr = 0x82AAD2B4;
	sub_82A7D730(ctx, base);
	// b 0x82aad2e4
	goto loc_82AAD2E4;
loc_82AAD2B8:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x82aad2e4
	goto loc_82AAD2E4;
loc_82AAD2C8:
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// b 0x82aad2e4
	goto loc_82AAD2E4;
loc_82AAD2D8:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
loc_82AAD2E4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82aad2f0
	if (ctx.cr6.eq) goto loc_82AAD2F0;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
loc_82AAD2F0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subfc r10,r29,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r29.u32;
	ctx.r10.u64 = ctx.r30.u64 - ctx.r29.u64;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// ori r5,r7,16389
	ctx.r5.u64 = ctx.r7.u64 | 16389;
	// subf r4,r30,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r30.u64;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// subfe r3,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// and r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 & ctx.r5.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAD328"))) PPC_WEAK_FUNC(sub_82AAD328);
PPC_FUNC_IMPL(__imp__sub_82AAD328) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82aad33c
	if (!ctx.cr6.eq) goto loc_82AAD33C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82aad360
	goto loc_82AAD360;
loc_82AAD33C:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82aad34c
	if (!ctx.cr6.eq) goto loc_82AAD34C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82aad360
	goto loc_82AAD360;
loc_82AAD34C:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x82aad364
	if (!ctx.cr6.eq) goto loc_82AAD364;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82AAD360:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_82AAD364:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82aad3a8
	if (ctx.cr6.lt) goto loc_82AAD3A8;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82aad3a8
	if (ctx.cr6.gt) goto loc_82AAD3A8;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82aad3a0
	if (ctx.cr6.eq) goto loc_82AAD3A0;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
loc_82AAD3A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82AAD3A8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD3B8"))) PPC_WEAK_FUNC(sub_82AAD3B8);
PPC_FUNC_IMPL(__imp__sub_82AAD3B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82aad3f4
	if (!ctx.cr6.eq) goto loc_82AAD3F4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// b 0x82aad43c
	goto loc_82AAD43C;
loc_82AAD3F4:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82aad400
	if (!ctx.cr6.eq) goto loc_82AAD400;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
loc_82AAD400:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82aad410
	if (!ctx.cr6.lt) goto loc_82AAD410;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_82AAD410:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AAD430;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82aad43c
	if (ctx.cr6.eq) goto loc_82AAD43C;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_82AAD43C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD458"))) PPC_WEAK_FUNC(sub_82AAD458);
PPC_FUNC_IMPL(__imp__sub_82AAD458) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD480"))) PPC_WEAK_FUNC(sub_82AAD480);
PPC_FUNC_IMPL(__imp__sub_82AAD480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// addi r10,r11,3952
	ctx.r10.s64 = ctx.r11.s64 + 3952;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD4A0"))) PPC_WEAK_FUNC(sub_82AAD4A0);
PPC_FUNC_IMPL(__imp__sub_82AAD4A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,25224
	ctx.r9.s64 = ctx.r11.s64 + 25224;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82aad4d4
	if (ctx.cr6.eq) goto loc_82AAD4D4;
	// bl 0x823fd208
	ctx.lr = 0x82AAD4D0;
	sub_823FD208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AAD4D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD4E8"))) PPC_WEAK_FUNC(sub_82AAD4E8);
PPC_FUNC_IMPL(__imp__sub_82AAD4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82462030
	ctx.lr = 0x82AAD50C;
	sub_82462030(ctx, base);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD528"))) PPC_WEAK_FUNC(sub_82AAD528);
PPC_FUNC_IMPL(__imp__sub_82AAD528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82462030
	ctx.lr = 0x82AAD54C;
	sub_82462030(ctx, base);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f0,28272(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 28272);
	// fdiv f1,f12,f0
	ctx.f1.f64 = ctx.f12.f64 / ctx.f0.f64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD588"))) PPC_WEAK_FUNC(sub_82AAD588);
PPC_FUNC_IMPL(__imp__sub_82AAD588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82462030
	ctx.lr = 0x82AAD5B4;
	sub_82462030(ctx, base);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r9,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r9.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD5D8"))) PPC_WEAK_FUNC(sub_82AAD5D8);
PPC_FUNC_IMPL(__imp__sub_82AAD5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a7d730
	ctx.lr = 0x82AAD5F4;
	sub_82A7D730(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD610"))) PPC_WEAK_FUNC(sub_82AAD610);
PPC_FUNC_IMPL(__imp__sub_82AAD610) {
	PPC_FUNC_PROLOGUE();
	// mullw r3,r4,r5
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// b 0x829e6d58
	sub_829E6D58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAD618"))) PPC_WEAK_FUNC(sub_82AAD618);
PPC_FUNC_IMPL(__imp__sub_82AAD618) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x829e6d90
	sub_829E6D90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAD620"))) PPC_WEAK_FUNC(sub_82AAD620);
PPC_FUNC_IMPL(__imp__sub_82AAD620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// lis r9,-32085
	ctx.r9.s64 = -2102722560;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r8,r10,-10736
	ctx.r8.s64 = ctx.r10.s64 + -10736;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r7,r9,-10728
	ctx.r7.s64 = ctx.r9.s64 + -10728;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// li r5,56
	ctx.r5.s64 = 56;
	// addi r4,r6,3988
	ctx.r4.s64 = ctx.r6.s64 + 3988;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f34b30
	ctx.lr = 0x82AAD678;
	sub_82F34B30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82aad6d8
	if (!ctx.cr6.eq) goto loc_82AAD6D8;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f34c70
	ctx.lr = 0x82AAD68C;
	sub_82F34C70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82aad6cc
	if (ctx.cr6.eq) goto loc_82AAD6CC;
	// bl 0x82f362d8
	ctx.lr = 0x82AAD6A0;
	sub_82F362D8(ctx, base);
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82aad6c4
	if (ctx.cr6.eq) goto loc_82AAD6C4;
	// cmpwi cr6,r31,-5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -5, ctx.xer);
	// bne cr6,0x82aad6bc
	if (!ctx.cr6.eq) goto loc_82AAD6BC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aad6c4
	if (ctx.cr6.eq) goto loc_82AAD6C4;
loc_82AAD6BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82aad6d8
	goto loc_82AAD6D8;
loc_82AAD6C4:
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x82aad6d8
	goto loc_82AAD6D8;
loc_82AAD6CC:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82f362d8
	ctx.lr = 0x82AAD6D8;
	sub_82F362D8(ctx, base);
loc_82AAD6D8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD6F0"))) PPC_WEAK_FUNC(sub_82AAD6F0);
PPC_FUNC_IMPL(__imp__sub_82AAD6F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aad780
	if (ctx.cr6.eq) goto loc_82AAD780;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82aad780
	if (ctx.cr6.eq) goto loc_82AAD780;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82aad620
	ctx.lr = 0x82AAD72C;
	sub_82AAD620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82aad76c
	if (ctx.cr6.eq) goto loc_82AAD76C;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r8,r11,28280
	ctx.r8.s64 = ctx.r11.s64 + 28280;
loc_82AAD73C:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = PPC_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	PPC_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reserved.u32 = *(uint32_t*)PPC_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r3,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(PPC_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r3.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	PPC_LEAVE_GLOBAL_LOCK();
	// bne 0x82aad73c
	if (!ctx.cr0.eq) goto loc_82AAD73C;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,47
	ctx.r3.u64 = ctx.r3.u64 | 47;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AAD76C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AAD780:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD798"))) PPC_WEAK_FUNC(sub_82AAD798);
PPC_FUNC_IMPL(__imp__sub_82AAD798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82AAD7A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82aad7c8
	if (!ctx.cr6.eq) goto loc_82AAD7C8;
loc_82AAD7B8:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
loc_82AAD7C8:
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// blt cr6,0x82aad7b8
	if (ctx.cr6.lt) goto loc_82AAD7B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d6add0
	ctx.lr = 0x82AAD7D8;
	sub_82D6ADD0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a92c70
	ctx.lr = 0x82AAD7E0;
	sub_82A92C70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82aad7f8
	if (ctx.cr6.lt) goto loc_82AAD7F8;
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82aad6f0
	ctx.lr = 0x82AAD7F8;
	sub_82AAD6F0(ctx, base);
loc_82AAD7F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAD800"))) PPC_WEAK_FUNC(sub_82AAD800);
PPC_FUNC_IMPL(__imp__sub_82AAD800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82AAD808;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// addi r5,r10,4044
	ctx.r5.s64 = ctx.r10.s64 + 4044;
	// addi r4,r9,3996
	ctx.r4.s64 = ctx.r9.s64 + 3996;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82aabac0
	ctx.lr = 0x82AAD854;
	sub_82AABAC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82aad8a0
	if (ctx.cr6.lt) goto loc_82AAD8A0;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stw r30,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r30.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r28,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r28.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r10,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r10.u32);
	// addi r3,r31,592
	ctx.r3.s64 = ctx.r31.s64 + 592;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r9.u32);
	// stw r8,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r8.u32);
	// stw r7,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r7.u32);
	// stw r6,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r6.u32);
	// bl 0x83100488
	ctx.lr = 0x82AAD89C;
	sub_83100488(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AAD8A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAD8B0"))) PPC_WEAK_FUNC(sub_82AAD8B0);
PPC_FUNC_IMPL(__imp__sub_82AAD8B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82AAD8B8;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r27,r10,5744
	ctx.r27.s64 = ctx.r10.s64 + 5744;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stb r11,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r11.u8);
	// lwz r11,400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82a92c70
	ctx.lr = 0x82AAD8F4;
	sub_82A92C70(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82aad92c
	if (!ctx.cr6.lt) goto loc_82AAD92C;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aad924
	if (ctx.cr6.eq) goto loc_82AAD924;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AAD924;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AAD924:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82aadaac
	goto loc_82AADAAC;
loc_82AAD92C:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82aad944
	if (!ctx.cr6.eq) goto loc_82AAD944;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82aadaac
	goto loc_82AADAAC;
loc_82AAD944:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r31,80
	ctx.r9.s64 = ctx.r31.s64 + 80;
	// addi r8,r31,84
	ctx.r8.s64 = ctx.r31.s64 + 84;
	// lwz r3,400(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// lis r7,-31951
	ctx.r7.s64 = -2093940736;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r7,28292
	ctx.r4.s64 = ctx.r7.s64 + 28292;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r8,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r8.u32);
	// bl 0x82aa9868
	ctx.lr = 0x82AAD97C;
	sub_82AA9868(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82aad9c4
	if (!ctx.cr6.lt) goto loc_82AAD9C4;
	// lis r11,-32687
	ctx.r11.s64 = -2142175232;
	// ori r29,r11,6
	ctx.r29.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82aad9d4
	if (ctx.cr6.eq) goto loc_82AAD9D4;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aad9bc
	if (ctx.cr6.eq) goto loc_82AAD9BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AAD9BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AAD9BC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82aadaac
	goto loc_82AADAAC;
loc_82AAD9C4:
	// lis r11,-32687
	ctx.r11.s64 = -2142175232;
	// ori r29,r11,6
	ctx.r29.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82aada28
	if (!ctx.cr6.eq) goto loc_82AADA28;
loc_82AAD9D4:
	// addi r3,r30,552
	ctx.r3.s64 = ctx.r30.s64 + 552;
	// lwz r4,596(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 596);
	// bl 0x83100488
	ctx.lr = 0x82AAD9E0;
	sub_83100488(ctx, base);
	// stw r29,480(r30)
	PPC_STORE_U32(ctx.r30.u32 + 480, ctx.r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82aaa6c0
	ctx.lr = 0x82AAD9F0;
	sub_82AAA6C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82aada84
	if (!ctx.cr6.lt) goto loc_82AADA84;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aada20
	if (ctx.cr6.eq) goto loc_82AADA20;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AADA20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AADA20:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82aadaac
	goto loc_82AADAAC;
loc_82AADA28:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r8,r30,12
	ctx.r8.s64 = ctx.r30.s64 + 12;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,596(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 596);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,484(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 484);
	// lwz r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82aaa8b0
	ctx.lr = 0x82AADA4C;
	sub_82AAA8B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82aada84
	if (!ctx.cr6.lt) goto loc_82AADA84;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aada20
	if (ctx.cr6.eq) goto loc_82AADA20;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AADA7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82aadaac
	goto loc_82AADAAC;
loc_82AADA84:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aadaa8
	if (ctx.cr6.eq) goto loc_82AADAA8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AADAA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AADAA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AADAAC:
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AADAB4"))) PPC_WEAK_FUNC(sub_82AADAB4);
PPC_FUNC_IMPL(__imp__sub_82AADAB4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82827070
	ctx.lr = 0x82AADACC;
	sub_82827070(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AADAE0"))) PPC_WEAK_FUNC(sub_82AADAE0);
PPC_FUNC_IMPL(__imp__sub_82AADAE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82AADAE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,8(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82aadb60
	if (ctx.cr6.eq) goto loc_82AADB60;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AADB0C;
	sub_823F18B8(ctx, base);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// beq cr6,0x82aadb58
	if (ctx.cr6.eq) goto loc_82AADB58;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blt cr6,0x82aadb4c
	if (ctx.cr6.lt) goto loc_82AADB4C;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82aadb50
	goto loc_82AADB50;
loc_82AADB4C:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_82AADB50:
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AADB58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AADB58:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a91f78
	ctx.lr = 0x82AADB60;
	sub_82A91F78(ctx, base);
loc_82AADB60:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AADB68"))) PPC_WEAK_FUNC(sub_82AADB68);
PPC_FUNC_IMPL(__imp__sub_82AADB68) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82AADB90"))) PPC_WEAK_FUNC(sub_82AADB90);
PPC_FUNC_IMPL(__imp__sub_82AADB90) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82AADBB8"))) PPC_WEAK_FUNC(sub_82AADBB8);
PPC_FUNC_IMPL(__imp__sub_82AADBB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82AADBC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82aadc28
	if (ctx.cr6.eq) goto loc_82AADC28;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AADBE0;
	sub_823F18B8(ctx, base);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// beq cr6,0x82aadc20
	if (ctx.cr6.eq) goto loc_82AADC20;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r4,-32688
	ctx.r4.s64 = -2142240768;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r4,r4,17
	ctx.r4.u64 = ctx.r4.u64 | 17;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AADC20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AADC20:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a91f78
	ctx.lr = 0x82AADC28;
	sub_82A91F78(ctx, base);
loc_82AADC28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AADC30"))) PPC_WEAK_FUNC(sub_82AADC30);
PPC_FUNC_IMPL(__imp__sub_82AADC30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aadc9c
	if (ctx.cr6.eq) goto loc_82AADC9C;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82aadc6c
	if (ctx.cr6.gt) goto loc_82AADC6C;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82c0f6c0
	ctx.lr = 0x82AADC64;
	sub_82C0F6C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82aadc9c
	if (!ctx.cr6.eq) goto loc_82AADC9C;
loc_82AADC6C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a7e7d8
	ctx.lr = 0x82AADC80;
	sub_82A7E7D8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32202
	ctx.r9.s64 = -2110390272;
	// addi r8,r10,32528
	ctx.r8.s64 = ctx.r10.s64 + 32528;
	// addi r4,r9,28044
	ctx.r4.s64 = ctx.r9.s64 + 28044;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a84dc0
	ctx.lr = 0x82AADC9C;
	sub_82A84DC0(ctx, base);
loc_82AADC9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AADCB0"))) PPC_WEAK_FUNC(sub_82AADCB0);
PPC_FUNC_IMPL(__imp__sub_82AADCB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82AADCB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r28,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r28.u8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82aadd68
	if (ctx.cr6.eq) goto loc_82AADD68;
loc_82AADCD8:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aadd10
	if (ctx.cr6.eq) goto loc_82AADD10;
	// bl 0x823f18b8
	ctx.lr = 0x82AADCEC;
	sub_823F18B8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82aadd00
	if (!ctx.cr6.eq) goto loc_82AADD00;
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
loc_82AADD00:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
loc_82AADD10:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aadd40
	if (ctx.cr6.eq) goto loc_82AADD40;
	// bl 0x82a91f08
	ctx.lr = 0x82AADD20;
	sub_82A91F08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82aadd40
	if (ctx.cr6.eq) goto loc_82AADD40;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82aadd40
	if (ctx.cr6.eq) goto loc_82AADD40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aadae0
	ctx.lr = 0x82AADD40;
	sub_82AADAE0(ctx, base);
loc_82AADD40:
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aadd58
	if (ctx.cr6.eq) goto loc_82AADD58;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stb r28,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r28.u8);
	// b 0x82aadd5c
	goto loc_82AADD5C;
loc_82AADD58:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82AADD5C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82aadcd8
	if (!ctx.cr6.eq) goto loc_82AADCD8;
loc_82AADD68:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AADD70"))) PPC_WEAK_FUNC(sub_82AADD70);
PPC_FUNC_IMPL(__imp__sub_82AADD70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82c0f6c0
	ctx.lr = 0x82AADD84;
	sub_82C0F6C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82aaddb8
	if (ctx.cr6.eq) goto loc_82AADDB8;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// stw r3,28300(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28300, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AADDB8:
	// stw r11,28300(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28300, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AADDD0"))) PPC_WEAK_FUNC(sub_82AADDD0);
PPC_FUNC_IMPL(__imp__sub_82AADDD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// lwz r3,28300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28300);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82aaddf8
	if (!ctx.cr6.eq) goto loc_82AADDF8;
	// bl 0x82aadd70
	ctx.lr = 0x82AADDF4;
	sub_82AADD70(ctx, base);
	// lwz r3,28300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28300);
loc_82AADDF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AADE10"))) PPC_WEAK_FUNC(sub_82AADE10);
PPC_FUNC_IMPL(__imp__sub_82AADE10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82AADE18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82aade40
	if (!ctx.cr6.gt) goto loc_82AADE40;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,18928
	ctx.r3.s64 = ctx.r11.s64 + 18928;
	// bl 0x82a90538
	ctx.lr = 0x82AADE40;
	sub_82A90538(ctx, base);
loc_82AADE40:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82aadeb8
	if (!ctx.cr6.lt) goto loc_82AADEB8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82aadc30
	ctx.lr = 0x82AADE64;
	sub_82AADC30(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// subf r10,r4,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r4.u64;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82a7dca0
	ctx.lr = 0x82AADE80;
	sub_82A7DCA0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// subf r7,r3,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r3.u64;
	// srawi r28,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r7.s32 >> 2;
	// beq cr6,0x82aade9c
	if (ctx.cr6.eq) goto loc_82AADE9C;
	// bl 0x823fd208
	ctx.lr = 0x82AADE9C;
	sub_823FD208(ctx, base);
loc_82AADE9C:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82AADEB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AADEC0"))) PPC_WEAK_FUNC(sub_82AADEC0);
PPC_FUNC_IMPL(__imp__sub_82AADEC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82aadf40
	if (ctx.cr6.eq) goto loc_82AADF40;
loc_82AADEE4:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82aadefc
	if (ctx.cr6.eq) goto loc_82AADEFC;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82aadee4
	if (!ctx.cr6.eq) goto loc_82AADEE4;
loc_82AADEFC:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82aadf40
	if (ctx.cr6.eq) goto loc_82AADF40;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82a7dca0
	ctx.lr = 0x82AADF18;
	sub_82A7DCA0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// stb r9,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r9.u8);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82AADF40:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AADF60"))) PPC_WEAK_FUNC(sub_82AADF60);
PPC_FUNC_IMPL(__imp__sub_82AADF60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// subf r7,r11,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r6,r4,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r4.u64;
	// srawi r10,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 2;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82aadf90
	if (!ctx.cr6.lt) goto loc_82AADF90;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,18928
	ctx.r3.s64 = ctx.r11.s64 + 18928;
	// b 0x82a90538
	sub_82A90538(ctx, base);
	return;
loc_82AADF90:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r6,r11,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r11.u64;
	// srawi r11,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 2;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82aadfc0
	if (ctx.cr6.lt) goto loc_82AADFC0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82AADFC0:
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82aadfcc
	if (!ctx.cr6.lt) goto loc_82AADFCC;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_82AADFCC:
	// b 0x82aade10
	sub_82AADE10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AADFD0"))) PPC_WEAK_FUNC(sub_82AADFD0);
PPC_FUNC_IMPL(__imp__sub_82AADFD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AADFE0"))) PPC_WEAK_FUNC(sub_82AADFE0);
PPC_FUNC_IMPL(__imp__sub_82AADFE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82AADFE8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aae010
	if (ctx.cr6.eq) goto loc_82AAE010;
	// bl 0x82a91f78
	ctx.lr = 0x82AAE00C;
	sub_82A91F78(ctx, base);
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
loc_82AAE010:
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// lwz r3,28300(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28300);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82aae02c
	if (!ctx.cr6.eq) goto loc_82AAE02C;
	// bl 0x82aadd70
	ctx.lr = 0x82AAE028;
	sub_82AADD70(ctx, base);
	// lwz r3,28300(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28300);
loc_82AAE02C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82aadec0
	ctx.lr = 0x82AAE034;
	sub_82AADEC0(ctx, base);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82aae04c
	if (ctx.cr6.lt) goto loc_82AAE04C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823fd208
	ctx.lr = 0x82AAE04C;
	sub_823FD208(ctx, base);
loc_82AAE04C:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAE064"))) PPC_WEAK_FUNC(sub_82AAE064);
PPC_FUNC_IMPL(__imp__sub_82AAE064) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8247e968
	ctx.lr = 0x82AAE080;
	sub_8247E968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE090"))) PPC_WEAK_FUNC(sub_82AAE090);
PPC_FUNC_IMPL(__imp__sub_82AAE090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82aae0c8
	if (!ctx.cr6.lt) goto loc_82AAE0C8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82aae0cc
	if (!ctx.cr6.gt) goto loc_82AAE0CC;
loc_82AAE0C8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82AAE0CC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82aae11c
	if (ctx.cr6.eq) goto loc_82AAE11C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r10,r30
	ctx.r8.u64 = ctx.r30.u64 - ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// srawi r30,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r8.s32 >> 2;
	// bne cr6,0x82aae0fc
	if (!ctx.cr6.eq) goto loc_82AAE0FC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aadf60
	ctx.lr = 0x82AAE0FC;
	sub_82AADF60(ctx, base);
loc_82AAE0FC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aae148
	if (ctx.cr6.eq) goto loc_82AAE148;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x82aae148
	goto loc_82AAE148;
loc_82AAE11C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82aae134
	if (!ctx.cr6.eq) goto loc_82AAE134;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aadf60
	ctx.lr = 0x82AAE134;
	sub_82AADF60(ctx, base);
loc_82AAE134:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aae148
	if (ctx.cr6.eq) goto loc_82AAE148;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82AAE148:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE178"))) PPC_WEAK_FUNC(sub_82AAE178);
PPC_FUNC_IMPL(__imp__sub_82AAE178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82AAE180;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// beq cr6,0x82aae1b4
	if (ctx.cr6.eq) goto loc_82AAE1B4;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// b 0x82aae1bc
	goto loc_82AAE1BC;
loc_82AAE1B4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,4576
	ctx.r4.s64 = ctx.r11.s64 + 4576;
loc_82AAE1BC:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r29.u32);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r29,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r29.u8);
loc_82AAE1D4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aae1d4
	if (!ctx.cr6.eq) goto loc_82AAE1D4;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8240d528
	ctx.lr = 0x82AAE1F4;
	sub_8240D528(ctx, base);
	// bl 0x823f18b8
	ctx.lr = 0x82AAE1F8;
	sub_823F18B8(ctx, base);
	// lis r28,-31951
	ctx.r28.s64 = -2093940736;
	// stw r3,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// stw r29,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r29.u32);
	// stw r29,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r29.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r29.u32);
	// stw r29,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r29.u32);
	// stw r29,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r29.u32);
	// lwz r29,28300(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28300);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82aae228
	if (!ctx.cr6.eq) goto loc_82AAE228;
	// bl 0x82aadd70
	ctx.lr = 0x82AAE224;
	sub_82AADD70(ctx, base);
	// lwz r29,28300(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28300);
loc_82AAE228:
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82aae090
	ctx.lr = 0x82AAE238;
	sub_82AAE090(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,16(r29)
	PPC_STORE_U8(ctx.r29.u32 + 16, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAE24C"))) PPC_WEAK_FUNC(sub_82AAE24C);
PPC_FUNC_IMPL(__imp__sub_82AAE24C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8247e968
	ctx.lr = 0x82AAE268;
	sub_8247E968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE278"))) PPC_WEAK_FUNC(sub_82AAE278);
PPC_FUNC_IMPL(__imp__sub_82AAE278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r10,9304
	ctx.r4.s64 = ctx.r10.s64 + 9304;
	// addi r3,r9,9260
	ctx.r3.s64 = ctx.r9.s64 + 9260;
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// addi r6,r11,28320
	ctx.r6.s64 = ctx.r11.s64 + 28320;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82a92018
	ctx.lr = 0x82AAE2C4;
	sub_82A92018(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE2D8"))) PPC_WEAK_FUNC(sub_82AAE2D8);
PPC_FUNC_IMPL(__imp__sub_82AAE2D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// lis r9,-31951
	ctx.r9.s64 = -2093940736;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r6,r9,28328
	ctx.r6.s64 = ctx.r9.s64 + 28328;
	// stb r5,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r5.u8);
	// addi r4,r8,9320
	ctx.r4.s64 = ctx.r8.s64 + 9320;
	// addi r3,r7,9260
	ctx.r3.s64 = ctx.r7.s64 + 9260;
	// addi r10,r11,28336
	ctx.r10.s64 = ctx.r11.s64 + 28336;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// bl 0x82a92018
	ctx.lr = 0x82AAE330;
	sub_82A92018(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE340"))) PPC_WEAK_FUNC(sub_82AAE340);
PPC_FUNC_IMPL(__imp__sub_82AAE340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// lis r9,-31951
	ctx.r9.s64 = -2093940736;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r6,r9,28344
	ctx.r6.s64 = ctx.r9.s64 + 28344;
	// stb r5,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r5.u8);
	// addi r4,r8,9340
	ctx.r4.s64 = ctx.r8.s64 + 9340;
	// addi r3,r7,9260
	ctx.r3.s64 = ctx.r7.s64 + 9260;
	// addi r10,r11,28352
	ctx.r10.s64 = ctx.r11.s64 + 28352;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,12
	ctx.r8.s64 = 12;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82a92018
	ctx.lr = 0x82AAE39C;
	sub_82A92018(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE3B0"))) PPC_WEAK_FUNC(sub_82AAE3B0);
PPC_FUNC_IMPL(__imp__sub_82AAE3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lis r9,-31951
	ctx.r9.s64 = -2093940736;
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r6,r9,28376
	ctx.r6.s64 = ctx.r9.s64 + 28376;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r4,r8,9360
	ctx.r4.s64 = ctx.r8.s64 + 9360;
	// stb r7,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r7.u8);
	// addi r3,r5,9260
	ctx.r3.s64 = ctx.r5.s64 + 9260;
	// addi r10,r11,28384
	ctx.r10.s64 = ctx.r11.s64 + 28384;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,20
	ctx.r8.s64 = 20;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82a92018
	ctx.lr = 0x82AAE414;
	sub_82A92018(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE428"))) PPC_WEAK_FUNC(sub_82AAE428);
PPC_FUNC_IMPL(__imp__sub_82AAE428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stb r3,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r3.u8);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r10,9388
	ctx.r4.s64 = ctx.r10.s64 + 9388;
	// addi r3,r9,9260
	ctx.r3.s64 = ctx.r9.s64 + 9260;
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// addi r6,r11,28456
	ctx.r6.s64 = ctx.r11.s64 + 28456;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82a92018
	ctx.lr = 0x82AAE478;
	sub_82A92018(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE488"))) PPC_WEAK_FUNC(sub_82AAE488);
PPC_FUNC_IMPL(__imp__sub_82AAE488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r7,r11,28464
	ctx.r7.s64 = ctx.r11.s64 + 28464;
	// addi r5,r10,9412
	ctx.r5.s64 = ctx.r10.s64 + 9412;
	// addi r4,r9,9260
	ctx.r4.s64 = ctx.r9.s64 + 9260;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82a922e8
	ctx.lr = 0x82AAE4D0;
	sub_82A922E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82aae4e8
	if (!ctx.cr6.lt) goto loc_82AAE4E8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830b2320
	ctx.lr = 0x82AAE4E8;
	sub_830B2320(ctx, base);
loc_82AAE4E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE500"))) PPC_WEAK_FUNC(sub_82AAE500);
PPC_FUNC_IMPL(__imp__sub_82AAE500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,28472
	ctx.r4.s64 = ctx.r11.s64 + 28472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a95910
	ctx.lr = 0x82AAE528;
	sub_82A95910(ctx, base);
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// and r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 & ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE540"))) PPC_WEAK_FUNC(sub_82AAE540);
PPC_FUNC_IMPL(__imp__sub_82AAE540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,28488
	ctx.r4.s64 = ctx.r11.s64 + 28488;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a95910
	ctx.lr = 0x82AAE568;
	sub_82A95910(ctx, base);
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// and r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 & ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE580"))) PPC_WEAK_FUNC(sub_82AAE580);
PPC_FUNC_IMPL(__imp__sub_82AAE580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stb r3,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r3.u8);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// sth r4,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r4.u16);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// sth r5,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r5.u16);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r10,9436
	ctx.r4.s64 = ctx.r10.s64 + 9436;
	// addi r3,r9,9260
	ctx.r3.s64 = ctx.r9.s64 + 9260;
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// addi r6,r11,28496
	ctx.r6.s64 = ctx.r11.s64 + 28496;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82a92018
	ctx.lr = 0x82AAE5D0;
	sub_82A92018(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE5E0"))) PPC_WEAK_FUNC(sub_82AAE5E0);
PPC_FUNC_IMPL(__imp__sub_82AAE5E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stb r3,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r3.u8);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r10,9456
	ctx.r4.s64 = ctx.r10.s64 + 9456;
	// addi r3,r9,9260
	ctx.r3.s64 = ctx.r9.s64 + 9260;
	// stb r8,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r8.u8);
	// addi r6,r11,28504
	ctx.r6.s64 = ctx.r11.s64 + 28504;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x82a92180
	ctx.lr = 0x82AAE62C;
	sub_82A92180(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE640"))) PPC_WEAK_FUNC(sub_82AAE640);
PPC_FUNC_IMPL(__imp__sub_82AAE640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de00
	ctx.lr = 0x82AAE648;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// addi r7,r11,28512
	ctx.r7.s64 = ctx.r11.s64 + 28512;
	// addi r5,r10,9468
	ctx.r5.s64 = ctx.r10.s64 + 9468;
	// addi r4,r9,9260
	ctx.r4.s64 = ctx.r9.s64 + 9260;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r3,14
	ctx.r3.s64 = 14;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x82a922e8
	ctx.lr = 0x82AAE69C;
	sub_82A922E8(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82aae6c4
	if (!ctx.cr6.lt) goto loc_82AAE6C4;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82874f60
	ctx.lr = 0x82AAE6C4;
	sub_82874F60(ctx, base);
loc_82AAE6C4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAE6D0"))) PPC_WEAK_FUNC(sub_82AAE6D0);
PPC_FUNC_IMPL(__imp__sub_82AAE6D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,28520
	ctx.r4.s64 = ctx.r11.s64 + 28520;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a95910
	ctx.lr = 0x82AAE6F8;
	sub_82A95910(ctx, base);
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// and r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 & ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE710"))) PPC_WEAK_FUNC(sub_82AAE710);
PPC_FUNC_IMPL(__imp__sub_82AAE710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r10,9496
	ctx.r4.s64 = ctx.r10.s64 + 9496;
	// addi r3,r9,9260
	ctx.r3.s64 = ctx.r9.s64 + 9260;
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// addi r6,r11,28528
	ctx.r6.s64 = ctx.r11.s64 + 28528;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82a92018
	ctx.lr = 0x82AAE75C;
	sub_82A92018(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE770"))) PPC_WEAK_FUNC(sub_82AAE770);
PPC_FUNC_IMPL(__imp__sub_82AAE770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r10,9520
	ctx.r4.s64 = ctx.r10.s64 + 9520;
	// addi r3,r9,9260
	ctx.r3.s64 = ctx.r9.s64 + 9260;
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// addi r6,r11,28536
	ctx.r6.s64 = ctx.r11.s64 + 28536;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82a92018
	ctx.lr = 0x82AAE7BC;
	sub_82A92018(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE7D0"))) PPC_WEAK_FUNC(sub_82AAE7D0);
PPC_FUNC_IMPL(__imp__sub_82AAE7D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// addi r4,r10,9548
	ctx.r4.s64 = ctx.r10.s64 + 9548;
	// addi r3,r9,9260
	ctx.r3.s64 = ctx.r9.s64 + 9260;
	// stb r8,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r8.u8);
	// addi r6,r11,28552
	ctx.r6.s64 = ctx.r11.s64 + 28552;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x82a92180
	ctx.lr = 0x82AAE824;
	sub_82A92180(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE838"))) PPC_WEAK_FUNC(sub_82AAE838);
PPC_FUNC_IMPL(__imp__sub_82AAE838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r5,r4,4
	ctx.r5.s64 = ctx.r4.s64 + 4;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82a80428
	ctx.lr = 0x82AAE86C;
	sub_82A80428(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE898"))) PPC_WEAK_FUNC(sub_82AAE898);
PPC_FUNC_IMPL(__imp__sub_82AAE898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// addi r10,r3,76
	ctx.r10.s64 = ctx.r3.s64 + 76;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// bl 0x82a80428
	ctx.lr = 0x82AAE8C8;
	sub_82A80428(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE8F0"))) PPC_WEAK_FUNC(sub_82AAE8F0);
PPC_FUNC_IMPL(__imp__sub_82AAE8F0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddfc
	ctx.lr = 0x82AAE8F8;
	__savegprlr_25(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r4,1
	ctx.r7.s64 = ctx.r4.s64 + 1;
	// addi r6,r5,1
	ctx.r6.s64 = ctx.r5.s64 + 1;
	// addi r3,r4,2
	ctx.r3.s64 = ctx.r4.s64 + 2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r31,r5,2
	ctx.r31.s64 = ctx.r5.s64 + 2;
	// addi r30,r4,3
	ctx.r30.s64 = ctx.r4.s64 + 3;
	// addi r29,r5,3
	ctx.r29.s64 = ctx.r5.s64 + 3;
	// addi r28,r4,4
	ctx.r28.s64 = ctx.r4.s64 + 4;
	// addi r27,r5,4
	ctx.r27.s64 = ctx.r5.s64 + 4;
	// addi r26,r4,5
	ctx.r26.s64 = ctx.r4.s64 + 5;
	// addi r25,r5,5
	ctx.r25.s64 = ctx.r5.s64 + 5;
	// subf r8,r5,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r5.u64;
loc_82AAE934:
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbzx r4,r11,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// lbzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82aae94c
	if (ctx.cr6.eq) goto loc_82AAE94C;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82AAE94C:
	// lbzx r10,r6,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// lbzx r4,r7,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82aae960
	if (ctx.cr6.eq) goto loc_82AAE960;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82AAE960:
	// lbzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r4,r3,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82aae974
	if (ctx.cr6.eq) goto loc_82AAE974;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82AAE974:
	// lbzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82aae988
	if (ctx.cr6.eq) goto loc_82AAE988;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82AAE988:
	// lbzx r10,r27,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// lbzx r4,r28,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82aae99c
	if (ctx.cr6.eq) goto loc_82AAE99C;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82AAE99C:
	// lbzx r10,r25,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r11.u32);
	// lbzx r4,r26,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r11.u32);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82aae9b0
	if (ctx.cr6.eq) goto loc_82AAE9B0;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82AAE9B0:
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// bdnz 0x82aae934
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AAE934;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82a7de4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAE9C8"))) PPC_WEAK_FUNC(sub_82AAE9C8);
PPC_FUNC_IMPL(__imp__sub_82AAE9C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82AAE9D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82aaea28
	if (!ctx.cr6.eq) goto loc_82AAEA28;
	// addi r5,r3,48
	ctx.r5.s64 = ctx.r3.s64 + 48;
	// bl 0x82aae8f0
	ctx.lr = 0x82AAE9FC;
	sub_82AAE8F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aaea20
	if (ctx.cr6.eq) goto loc_82AAEA20;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82aaea20
	if (!ctx.cr6.eq) goto loc_82AAEA20;
loc_82AAEA14:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
loc_82AAEA20:
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
loc_82AAEA28:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82aaeaf4
	if (ctx.cr6.gt) goto loc_82AAEAF4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82aaeac8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82AAEAC8;
	// bdzf 4*cr6+eq,0x82aaead4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82AAEAD4;
	// bdzf 4*cr6+eq,0x82aaeae8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82AAEAE8;
	// bne cr6,0x82aaea14
	if (!ctx.cr6.eq) goto loc_82AAEA14;
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// li r6,24
	ctx.r6.s64 = 24;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82a80428
	ctx.lr = 0x82AAEA6C;
	sub_82A80428(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aae838
	ctx.lr = 0x82AAEA78;
	sub_82AAE838(ctx, base);
	// addi r5,r31,120
	ctx.r5.s64 = ctx.r31.s64 + 120;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82aae770
	ctx.lr = 0x82AAEA88;
	sub_82AAE770(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82aaeab4
	if (!ctx.cr6.lt) goto loc_82AAEAB4;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82aadb68
	ctx.lr = 0x82AAEA9C;
	sub_82AADB68(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r3,-32687
	ctx.r3.s64 = -2142175232;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// ori r3,r3,17922
	ctx.r3.u64 = ctx.r3.u64 | 17922;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
loc_82AAEAB4:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
loc_82AAEAC8:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
loc_82AAEAD4:
	// lis r3,-32687
	ctx.r3.s64 = -2142175232;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// ori r3,r3,17922
	ctx.r3.u64 = ctx.r3.u64 | 17922;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
loc_82AAEAE8:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
loc_82AAEAF4:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAEB08"))) PPC_WEAK_FUNC(sub_82AAEB08);
PPC_FUNC_IMPL(__imp__sub_82AAEB08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82AAEB10;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82aaebdc
	if (!ctx.cr6.eq) goto loc_82AAEBDC;
	// addi r5,r3,48
	ctx.r5.s64 = ctx.r3.s64 + 48;
	// bl 0x82aae8f0
	ctx.lr = 0x82AAEB38;
	sub_82AAE8F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aaebdc
	if (ctx.cr6.eq) goto loc_82AAEBDC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82aaec44
	if (ctx.cr6.gt) goto loc_82AAEC44;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82aaec08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82AAEC08;
	// bdzf 4*cr6+eq,0x82aaec14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82AAEC14;
	// bdzf 4*cr6+eq,0x82aaec38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82AAEC38;
	// bne cr6,0x82aaec2c
	if (!ctx.cr6.eq) goto loc_82AAEC2C;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82aaeb8c
	if (!ctx.cr6.eq) goto loc_82AAEB8C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r3,-32687
	ctx.r3.s64 = -2142175232;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// ori r3,r3,17921
	ctx.r3.u64 = ctx.r3.u64 | 17921;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
loc_82AAEB8C:
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// li r6,24
	ctx.r6.s64 = 24;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82a80428
	ctx.lr = 0x82AAEBAC;
	sub_82A80428(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aae838
	ctx.lr = 0x82AAEBB8;
	sub_82AAE838(ctx, base);
	// addi r5,r31,188
	ctx.r5.s64 = ctx.r31.s64 + 188;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82aae710
	ctx.lr = 0x82AAEBC8;
	sub_82AAE710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82aaebf4
	if (!ctx.cr6.lt) goto loc_82AAEBF4;
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// bl 0x82aadb68
	ctx.lr = 0x82AAEBDC;
	sub_82AADB68(ctx, base);
loc_82AAEBDC:
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r3,-32687
	ctx.r3.s64 = -2142175232;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// ori r3,r3,17922
	ctx.r3.u64 = ctx.r3.u64 | 17922;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
loc_82AAEBF4:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
loc_82AAEC08:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
loc_82AAEC14:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-32687
	ctx.r3.s64 = -2142175232;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// ori r3,r3,17922
	ctx.r3.u64 = ctx.r3.u64 | 17922;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
loc_82AAEC2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
loc_82AAEC38:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
loc_82AAEC44:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAEC58"))) PPC_WEAK_FUNC(sub_82AAEC58);
PPC_FUNC_IMPL(__imp__sub_82AAEC58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82aaec94
	if (ctx.cr6.eq) goto loc_82AAEC94;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x82aaeccc
	if (!ctx.cr6.eq) goto loc_82AAECCC;
	// bl 0x82aae898
	ctx.lr = 0x82AAEC88;
	sub_82AAE898(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82aaecc8
	goto loc_82AAECC8;
loc_82AAEC94:
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// addi r10,r31,44
	ctx.r10.s64 = ctx.r31.s64 + 44;
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// bl 0x82a80428
	ctx.lr = 0x82AAECB0;
	sub_82A80428(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82AAECC8:
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
loc_82AAECCC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAECE8"))) PPC_WEAK_FUNC(sub_82AAECE8);
PPC_FUNC_IMPL(__imp__sub_82AAECE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// stw r4,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r4.u32);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82aaed10
	if (ctx.cr6.eq) goto loc_82AAED10;
	// lis r11,-32687
	ctx.r11.s64 = -2142175232;
	// ori r10,r11,17921
	ctx.r10.u64 = ctx.r11.u64 | 17921;
	// subf. r11,r10,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,3
	ctx.r11.s64 = 3;
	// beq 0x82aaed14
	if (ctx.cr0.eq) goto loc_82AAED14;
loc_82AAED10:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82AAED14:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82aaed2c
	if (ctx.cr6.eq) goto loc_82AAED2C;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
loc_82AAED2C:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAED38"))) PPC_WEAK_FUNC(sub_82AAED38);
PPC_FUNC_IMPL(__imp__sub_82AAED38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// addi r3,r3,76
	ctx.r3.s64 = ctx.r3.s64 + 76;
	// stw r11,4172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4172, ctx.r11.u32);
	// bl 0x82a7d730
	ctx.lr = 0x82AAED6C;
	sub_82A7D730(ctx, base);
	// lwz r8,4108(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4108);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r8,4176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4176, ctx.r8.u32);
	// lbz r7,4112(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4112);
	// stb r7,4180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4180, ctx.r7.u8);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stb r9,4181(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4181, ctx.r9.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAEDA8"))) PPC_WEAK_FUNC(sub_82AAEDA8);
PPC_FUNC_IMPL(__imp__sub_82AAEDA8) {
	PPC_FUNC_PROLOGUE();
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stb r10,4185(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4185, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAEDC0"))) PPC_WEAK_FUNC(sub_82AAEDC0);
PPC_FUNC_IMPL(__imp__sub_82AAEDC0) {
	PPC_FUNC_PROLOGUE();
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAEDD0"))) PPC_WEAK_FUNC(sub_82AAEDD0);
PPC_FUNC_IMPL(__imp__sub_82AAEDD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r11,9596
	ctx.r9.s64 = ctx.r11.s64 + 9596;
	// addi r8,r10,9588
	ctx.r8.s64 = ctx.r10.s64 + 9588;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// addi r6,r6,9568
	ctx.r6.s64 = ctx.r6.s64 + 9568;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aae178
	ctx.lr = 0x82AAEE1C;
	sub_82AAE178(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4176, ctx.r11.u32);
	// stw r11,4180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4180, ctx.r11.u32);
	// stb r11,4184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4184, ctx.r11.u8);
	// stb r11,4185(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4185, ctx.r11.u8);
	// stb r11,4186(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4186, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAEE50"))) PPC_WEAK_FUNC(sub_82AAEE50);
PPC_FUNC_IMPL(__imp__sub_82AAEE50) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x82aaee60
	if (!ctx.cr6.eq) goto loc_82AAEE60;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82AAEE60:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r10,r11,-32316
	ctx.r10.s64 = ctx.r11.s64 + -32316;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82AAEE80"))) PPC_WEAK_FUNC(sub_82AAEE80);
PPC_FUNC_IMPL(__imp__sub_82AAEE80) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,4182(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4182, ctx.r11.u8);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stb r10,4181(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4181, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAEE98"))) PPC_WEAK_FUNC(sub_82AAEE98);
PPC_FUNC_IMPL(__imp__sub_82AAEE98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,4185(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4185);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aaef5c
	if (ctx.cr6.eq) goto loc_82AAEF5C;
	// lwz r11,4176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4176);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82aaef18
	if (!ctx.cr6.gt) goto loc_82AAEF18;
	// addi r11,r3,80
	ctx.r11.s64 = ctx.r3.s64 + 80;
loc_82AAEED4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82aaef04
	if (!ctx.cr6.eq) goto loc_82AAEF04;
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r7,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r3,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r3.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r7,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r7.u32);
loc_82AAEF04:
	// lwz r7,4176(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4176);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82aaeed4
	if (ctx.cr6.lt) goto loc_82AAEED4;
loc_82AAEF18:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82aaef2c
	if (ctx.cr6.eq) goto loc_82AAEF2C;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aaf084
	if (ctx.cr6.eq) goto loc_82AAF084;
loc_82AAEF2C:
	// lbz r11,4186(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4186);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aaef5c
	if (ctx.cr6.eq) goto loc_82AAEF5C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82aaef5c
	if (ctx.cr6.eq) goto loc_82AAEF5C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82aaef54
	if (ctx.cr6.eq) goto loc_82AAEF54;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82aaf084
	if (!ctx.cr6.eq) goto loc_82AAF084;
loc_82AAEF54:
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stb r8,4186(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4186, ctx.r8.u8);
loc_82AAEF5C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82aaf084
	if (ctx.cr6.gt) goto loc_82AAF084;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82aaf024
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82AAF024;
	// bdzf 4*cr6+eq,0x82aaf04c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82AAF04C;
	// bdzf 4*cr6+eq,0x82aaf084
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82AAF084;
	// bne cr6,0x82aaf06c
	if (!ctx.cr6.eq) goto loc_82AAF06C;
	// lbz r11,4185(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4185);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aaefa0
	if (ctx.cr6.eq) goto loc_82AAEFA0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,9632
	ctx.r4.s64 = ctx.r11.s64 + 9632;
	// b 0x82aaefa8
	goto loc_82AAEFA8;
loc_82AAEFA0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,9604
	ctx.r4.s64 = ctx.r11.s64 + 9604;
loc_82AAEFA8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AAEFAC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aaefac
	if (!ctx.cr6.eq) goto loc_82AAEFAC;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8240d528
	ctx.lr = 0x82AAEFD0;
	sub_8240D528(ctx, base);
	// addi r8,r31,20
	ctx.r8.s64 = ctx.r31.s64 + 20;
	// addi r7,r31,4184
	ctx.r7.s64 = ctx.r31.s64 + 4184;
	// addi r6,r31,4180
	ctx.r6.s64 = ctx.r31.s64 + 4180;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r31,4176
	ctx.r4.s64 = ctx.r31.s64 + 4176;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x82aae3b0
	ctx.lr = 0x82AAEFEC;
	sub_82AAE3B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82aaf024
	if (!ctx.cr6.lt) goto loc_82AAF024;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82aadb68
	ctx.lr = 0x82AAF000;
	sub_82AADB68(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r3,-32687
	ctx.r3.s64 = -2142175232;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// ori r3,r3,17922
	ctx.r3.u64 = ctx.r3.u64 | 17922;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82AAF024:
	// lbz r11,4185(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4185);
	// li r10,2
	ctx.r10.s64 = 2;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82AAF04C:
	// lis r3,-32687
	ctx.r3.s64 = -2142175232;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// ori r3,r3,17922
	ctx.r3.u64 = ctx.r3.u64 | 17922;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82AAF06C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82AAF084:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF0A0"))) PPC_WEAK_FUNC(sub_82AAF0A0);
PPC_FUNC_IMPL(__imp__sub_82AAF0A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r11,4186(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4186, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82aaee98
	ctx.lr = 0x82AAF0C0;
	sub_82AAEE98(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF0D0"))) PPC_WEAK_FUNC(sub_82AAF0D0);
PPC_FUNC_IMPL(__imp__sub_82AAF0D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82aaf104
	if (ctx.cr6.eq) goto loc_82AAF104;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82aaee98
	ctx.lr = 0x82AAF104;
	sub_82AAEE98(ctx, base);
loc_82AAF104:
	// lwz r11,4180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4180);
	// lis r10,-32687
	ctx.r10.s64 = -2142175232;
	// and r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 & ctx.r30.u64;
	// ori r8,r10,12
	ctx.r8.u64 = ctx.r10.u64 | 12;
	// subfic r7,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r5,r8
	ctx.r3.u64 = ctx.r5.u64 & ctx.r8.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF138"))) PPC_WEAK_FUNC(sub_82AAF138);
PPC_FUNC_IMPL(__imp__sub_82AAF138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82aaf16c
	if (ctx.cr6.eq) goto loc_82AAF16C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82aaee98
	ctx.lr = 0x82AAF16C;
	sub_82AAEE98(ctx, base);
loc_82AAF16C:
	// lbz r11,4184(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4184);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF190"))) PPC_WEAK_FUNC(sub_82AAF190);
PPC_FUNC_IMPL(__imp__sub_82AAF190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// lis r3,-31951
	ctx.r3.s64 = -2093940736;
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r10,r3,28568
	ctx.r10.s64 = ctx.r3.s64 + 28568;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r3,r5,11536
	ctx.r3.s64 = ctx.r5.s64 + 11536;
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// addi r6,r31,28560
	ctx.r6.s64 = ctx.r31.s64 + 28560;
	// stb r9,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r9.u8);
	// addi r4,r4,11528
	ctx.r4.s64 = ctx.r4.s64 + 11528;
	// stb r7,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r7.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x82a92018
	ctx.lr = 0x82AAF204;
	sub_82A92018(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF218"))) PPC_WEAK_FUNC(sub_82AAF218);
PPC_FUNC_IMPL(__imp__sub_82AAF218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82AAF220;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lwz r8,260(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lis r3,-31951
	ctx.r3.s64 = -2093940736;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// lis r30,-32242
	ctx.r30.s64 = -2113011712;
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// addi r10,r3,28584
	ctx.r10.s64 = ctx.r3.s64 + 28584;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r6,r31,28576
	ctx.r6.s64 = ctx.r31.s64 + 28576;
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// addi r4,r4,11584
	ctx.r4.s64 = ctx.r4.s64 + 11584;
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// addi r3,r30,11536
	ctx.r3.s64 = ctx.r30.s64 + 11536;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,24
	ctx.r8.s64 = 24;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stb r29,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82a92018
	ctx.lr = 0x82AAF294;
	sub_82A92018(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAF2A0"))) PPC_WEAK_FUNC(sub_82AAF2A0);
PPC_FUNC_IMPL(__imp__sub_82AAF2A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lis r9,-31951
	ctx.r9.s64 = -2093940736;
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r6,r9,28592
	ctx.r6.s64 = ctx.r9.s64 + 28592;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r4,r8,11604
	ctx.r4.s64 = ctx.r8.s64 + 11604;
	// stb r7,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r7.u8);
	// addi r3,r5,11536
	ctx.r3.s64 = ctx.r5.s64 + 11536;
	// addi r10,r11,28600
	ctx.r10.s64 = ctx.r11.s64 + 28600;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,12
	ctx.r8.s64 = 12;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x82a92018
	ctx.lr = 0x82AAF304;
	sub_82A92018(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF318"))) PPC_WEAK_FUNC(sub_82AAF318);
PPC_FUNC_IMPL(__imp__sub_82AAF318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// lis r9,-31951
	ctx.r9.s64 = -2093940736;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r6,r9,28608
	ctx.r6.s64 = ctx.r9.s64 + 28608;
	// stb r5,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r5.u8);
	// addi r4,r8,11620
	ctx.r4.s64 = ctx.r8.s64 + 11620;
	// addi r3,r7,11536
	ctx.r3.s64 = ctx.r7.s64 + 11536;
	// addi r10,r11,28616
	ctx.r10.s64 = ctx.r11.s64 + 28616;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,12
	ctx.r8.s64 = 12;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82a92018
	ctx.lr = 0x82AAF374;
	sub_82A92018(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF388"))) PPC_WEAK_FUNC(sub_82AAF388);
PPC_FUNC_IMPL(__imp__sub_82AAF388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r10,11632
	ctx.r4.s64 = ctx.r10.s64 + 11632;
	// addi r3,r9,11536
	ctx.r3.s64 = ctx.r9.s64 + 11536;
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// addi r6,r11,28624
	ctx.r6.s64 = ctx.r11.s64 + 28624;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82a92018
	ctx.lr = 0x82AAF3D0;
	sub_82A92018(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF3E0"))) PPC_WEAK_FUNC(sub_82AAF3E0);
PPC_FUNC_IMPL(__imp__sub_82AAF3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r10,11652
	ctx.r4.s64 = ctx.r10.s64 + 11652;
	// addi r3,r9,11536
	ctx.r3.s64 = ctx.r9.s64 + 11536;
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// addi r6,r11,28632
	ctx.r6.s64 = ctx.r11.s64 + 28632;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82a92018
	ctx.lr = 0x82AAF428;
	sub_82A92018(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF438"))) PPC_WEAK_FUNC(sub_82AAF438);
PPC_FUNC_IMPL(__imp__sub_82AAF438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lis r9,-31951
	ctx.r9.s64 = -2093940736;
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r6,r9,28640
	ctx.r6.s64 = ctx.r9.s64 + 28640;
	// stb r5,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r5.u8);
	// addi r4,r8,11668
	ctx.r4.s64 = ctx.r8.s64 + 11668;
	// addi r3,r7,11536
	ctx.r3.s64 = ctx.r7.s64 + 11536;
	// addi r10,r11,28648
	ctx.r10.s64 = ctx.r11.s64 + 28648;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x82a92018
	ctx.lr = 0x82AAF498;
	sub_82A92018(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF4A8"))) PPC_WEAK_FUNC(sub_82AAF4A8);
PPC_FUNC_IMPL(__imp__sub_82AAF4A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r10,16260
	ctx.r4.s64 = ctx.r10.s64 + 16260;
	// addi r3,r9,16208
	ctx.r3.s64 = ctx.r9.s64 + 16208;
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// addi r6,r11,28656
	ctx.r6.s64 = ctx.r11.s64 + 28656;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82a92018
	ctx.lr = 0x82AAF4F4;
	sub_82A92018(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF508"))) PPC_WEAK_FUNC(sub_82AAF508);
PPC_FUNC_IMPL(__imp__sub_82AAF508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r10,16276
	ctx.r4.s64 = ctx.r10.s64 + 16276;
	// addi r3,r9,16208
	ctx.r3.s64 = ctx.r9.s64 + 16208;
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// addi r6,r11,28664
	ctx.r6.s64 = ctx.r11.s64 + 28664;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82a92018
	ctx.lr = 0x82AAF554;
	sub_82A92018(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF568"))) PPC_WEAK_FUNC(sub_82AAF568);
PPC_FUNC_IMPL(__imp__sub_82AAF568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r10,16292
	ctx.r4.s64 = ctx.r10.s64 + 16292;
	// addi r3,r9,16208
	ctx.r3.s64 = ctx.r9.s64 + 16208;
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// addi r6,r11,28672
	ctx.r6.s64 = ctx.r11.s64 + 28672;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82a92018
	ctx.lr = 0x82AAF5B0;
	sub_82A92018(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF5C0"))) PPC_WEAK_FUNC(sub_82AAF5C0);
PPC_FUNC_IMPL(__imp__sub_82AAF5C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r10,16312
	ctx.r4.s64 = ctx.r10.s64 + 16312;
	// addi r3,r9,16208
	ctx.r3.s64 = ctx.r9.s64 + 16208;
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// addi r6,r11,28680
	ctx.r6.s64 = ctx.r11.s64 + 28680;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82a92018
	ctx.lr = 0x82AAF610;
	sub_82A92018(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF620"))) PPC_WEAK_FUNC(sub_82AAF620);
PPC_FUNC_IMPL(__imp__sub_82AAF620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r10,16328
	ctx.r4.s64 = ctx.r10.s64 + 16328;
	// addi r3,r9,16208
	ctx.r3.s64 = ctx.r9.s64 + 16208;
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// addi r6,r11,28688
	ctx.r6.s64 = ctx.r11.s64 + 28688;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82a92018
	ctx.lr = 0x82AAF670;
	sub_82A92018(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF680"))) PPC_WEAK_FUNC(sub_82AAF680);
PPC_FUNC_IMPL(__imp__sub_82AAF680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r10,16344
	ctx.r4.s64 = ctx.r10.s64 + 16344;
	// addi r3,r9,16208
	ctx.r3.s64 = ctx.r9.s64 + 16208;
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// addi r6,r11,28696
	ctx.r6.s64 = ctx.r11.s64 + 28696;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82a92018
	ctx.lr = 0x82AAF6CC;
	sub_82A92018(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF6E0"))) PPC_WEAK_FUNC(sub_82AAF6E0);
PPC_FUNC_IMPL(__imp__sub_82AAF6E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddd0
	ctx.lr = 0x82AAF6E8;
	__savegprlr_14(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,652(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r30,468(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// lwz r28,476(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// lis r27,-32242
	ctx.r27.s64 = -2113011712;
	// lwz r26,484(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// lis r25,-32242
	ctx.r25.s64 = -2113011712;
	// lwz r24,492(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r3,r25,16208
	ctx.r3.s64 = ctx.r25.s64 + 16208;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// addi r4,r27,16364
	ctx.r4.s64 = ctx.r27.s64 + 16364;
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// addi r6,r29,28704
	ctx.r6.s64 = ctx.r29.s64 + 28704;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stb r31,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r31.u8);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// stw r24,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// lwz r11,500(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// lwz r31,508(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// lwz r30,516(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// lwz r29,524(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 524);
	// lwz r28,532(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// lwz r27,540(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 540);
	// lwz r26,548(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// lwz r25,556(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 556);
	// lwz r24,564(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// lwz r23,572(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 572);
	// lwz r22,580(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// lwz r21,588(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// lwz r20,596(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// lwz r19,604(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// lwz r18,612(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// lwz r17,620(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	// lwz r16,628(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// lwz r15,636(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// lwz r14,644(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// stw r26,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r26.u32);
	// stw r25,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r25.u32);
	// stw r24,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r24.u32);
	// stw r23,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r23.u32);
	// stw r22,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r22.u32);
	// stw r21,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r21.u32);
	// stw r20,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r20.u32);
	// stw r19,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r19.u32);
	// stw r18,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r18.u32);
	// stw r17,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r17.u32);
	// stw r16,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r16.u32);
	// stw r15,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r15.u32);
	// stw r14,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r14.u32);
	// bl 0x82a92018
	ctx.lr = 0x82AAF804;
	sub_82A92018(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82a7de20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAF810"))) PPC_WEAK_FUNC(sub_82AAF810);
PPC_FUNC_IMPL(__imp__sub_82AAF810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddd0
	ctx.lr = 0x82AAF818;
	__savegprlr_14(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-32242
	ctx.r25.s64 = -2113011712;
	// lwz r30,580(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// lwz r11,836(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 836);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r25,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r25.u32);
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// lwz r25,692(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	// lis r27,-32242
	ctx.r27.s64 = -2113011712;
	// lwz r28,588(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// lwz r26,596(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// lwz r24,604(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// lwz r23,612(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// lwz r25,700(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 700);
	// lwz r22,620(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	// lwz r21,628(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// lwz r20,636(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// lwz r19,644(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// stw r25,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r25.u32);
	// lwz r25,708(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r18,652(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// lwz r17,660(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 660);
	// lwz r16,668(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 668);
	// lwz r15,676(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// lwz r25,716(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// lwz r14,684(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 684);
	// stw r4,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r4.u32);
	// addi r4,r27,16376
	ctx.r4.s64 = ctx.r27.s64 + 16376;
	// stw r6,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r6.u32);
	// addi r6,r29,28712
	ctx.r6.s64 = ctx.r29.s64 + 28712;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r25,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r25.u32);
	// lwz r25,724(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 724);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// stb r31,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r31.u8);
	// stw r5,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r5.u32);
	// stw r7,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r7.u32);
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// lwz r25,732(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 732);
	// stw r8,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// stw r9,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// stw r25,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r25.u32);
	// lwz r25,740(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// stw r28,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// stw r26,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r26.u32);
	// stw r24,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r24.u32);
	// stw r23,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r23.u32);
	// stw r25,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// lwz r25,748(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 748);
	// stw r22,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r22.u32);
	// stw r21,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r21.u32);
	// stw r20,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r20.u32);
	// stw r19,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r19.u32);
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
	// lwz r25,756(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 756);
	// stw r18,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r18.u32);
	// stw r17,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r17.u32);
	// stw r16,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r16.u32);
	// stw r15,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r15.u32);
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// lwz r25,764(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 764);
	// stw r14,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r14.u32);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// lwz r25,772(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 772);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// lwz r25,780(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 780);
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// lwz r25,788(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 788);
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// lwz r25,796(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 796);
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// lwz r25,804(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 804);
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r25.u32);
	// lwz r25,812(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 812);
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// lwz r25,820(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 820);
	// stw r25,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r25.u32);
	// lwz r25,828(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 828);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r25,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r25.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// stw r11,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r11,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r11.u32);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r11,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r11,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stw r11,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r11.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r11,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r11.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r11.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r11.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r11.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r11.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r11.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r11.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r11,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r11.u32);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r11,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r11.u32);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r11.u32);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r3,r11,16208
	ctx.r3.s64 = ctx.r11.s64 + 16208;
	// bl 0x82a92018
	ctx.lr = 0x82AAFA0C;
	sub_82A92018(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82a7de20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAFA18"))) PPC_WEAK_FUNC(sub_82AAFA18);
PPC_FUNC_IMPL(__imp__sub_82AAFA18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lis r3,-31951
	ctx.r3.s64 = -2093940736;
	// sth r5,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r5.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lis r31,-32242
	ctx.r31.s64 = -2113011712;
	// lis r30,-32242
	ctx.r30.s64 = -2113011712;
	// stb r6,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r6.u8);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// addi r6,r3,28728
	ctx.r6.s64 = ctx.r3.s64 + 28728;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// addi r4,r31,16392
	ctx.r4.s64 = ctx.r31.s64 + 16392;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// addi r3,r30,16208
	ctx.r3.s64 = ctx.r30.s64 + 16208;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r5,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r5.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82a92018
	ctx.lr = 0x82AAFA8C;
	sub_82A92018(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAFAA8"))) PPC_WEAK_FUNC(sub_82AAFAA8);
PPC_FUNC_IMPL(__imp__sub_82AAFAA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// addi r4,r10,16408
	ctx.r4.s64 = ctx.r10.s64 + 16408;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r5,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r5.u16);
	// addi r3,r9,16208
	ctx.r3.s64 = ctx.r9.s64 + 16208;
	// stb r6,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r6.u8);
	// addi r6,r11,28736
	ctx.r6.s64 = ctx.r11.s64 + 28736;
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82a92018
	ctx.lr = 0x82AAFB08;
	sub_82A92018(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAFB18"))) PPC_WEAK_FUNC(sub_82AAFB18);
PPC_FUNC_IMPL(__imp__sub_82AAFB18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// sth r4,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r4.u16);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r5,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r5.u8);
	// addi r4,r10,16424
	ctx.r4.s64 = ctx.r10.s64 + 16424;
	// std r6,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r6.u64);
	// addi r3,r9,16208
	ctx.r3.s64 = ctx.r9.s64 + 16208;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r6,r11,28744
	ctx.r6.s64 = ctx.r11.s64 + 28744;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82a92018
	ctx.lr = 0x82AAFB74;
	sub_82A92018(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAFB88"))) PPC_WEAK_FUNC(sub_82AAFB88);
PPC_FUNC_IMPL(__imp__sub_82AAFB88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,29(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,29(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82aafbd4
	if (!ctx.cr6.eq) goto loc_82AAFBD4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,29(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82aafbcc
	if (!ctx.cr6.eq) goto loc_82AAFBCC;
loc_82AAFBB8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,29(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82aafbb8
	if (ctx.cr6.eq) goto loc_82AAFBB8;
loc_82AAFBCC:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82AAFBD4:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,29(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aafc0c
	if (!ctx.cr6.eq) goto loc_82AAFC0C;
loc_82AAFBE4:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82aafc0c
	if (!ctx.cr6.eq) goto loc_82AAFC0C;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,29(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82aafbe4
	if (ctx.cr6.eq) goto loc_82AAFBE4;
loc_82AAFC0C:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAFC18"))) PPC_WEAK_FUNC(sub_82AAFC18);
PPC_FUNC_IMPL(__imp__sub_82AAFC18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,29(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82aafc34
	if (ctx.cr6.eq) goto loc_82AAFC34;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82AAFC34:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,29(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82aafc70
	if (!ctx.cr6.eq) goto loc_82AAFC70;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,29(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82aafc68
	if (!ctx.cr6.eq) goto loc_82AAFC68;
loc_82AAFC54:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,29(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82aafc54
	if (ctx.cr6.eq) goto loc_82AAFC54;
loc_82AAFC68:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82AAFC70:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,29(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aafca8
	if (!ctx.cr6.eq) goto loc_82AAFCA8;
loc_82AAFC80:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82aafca8
	if (!ctx.cr6.eq) goto loc_82AAFCA8;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,29(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82aafc80
	if (ctx.cr6.eq) goto loc_82AAFC80;
loc_82AAFCA8:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r9,29(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAFCC0"))) PPC_WEAK_FUNC(sub_82AAFCC0);
PPC_FUNC_IMPL(__imp__sub_82AAFCC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,29(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82aafce0
	if (!ctx.cr6.eq) goto loc_82AAFCE0;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82AAFCE0:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82aafd08
	if (!ctx.cr6.eq) goto loc_82AAFD08;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82AAFD08:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82aafd28
	if (!ctx.cr6.eq) goto loc_82AAFD28;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82AAFD28:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAFD38"))) PPC_WEAK_FUNC(sub_82AAFD38);
PPC_FUNC_IMPL(__imp__sub_82AAFD38) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82AAFD60"))) PPC_WEAK_FUNC(sub_82AAFD60);
PPC_FUNC_IMPL(__imp__sub_82AAFD60) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82AAFD80"))) PPC_WEAK_FUNC(sub_82AAFD80);
PPC_FUNC_IMPL(__imp__sub_82AAFD80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AAFDC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAFDE8"))) PPC_WEAK_FUNC(sub_82AAFDE8);
PPC_FUNC_IMPL(__imp__sub_82AAFDE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,29(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82aafe08
	if (!ctx.cr6.eq) goto loc_82AAFE08;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82AAFE08:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82aafe30
	if (!ctx.cr6.eq) goto loc_82AAFE30;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82AAFE30:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82aafe50
	if (!ctx.cr6.eq) goto loc_82AAFE50;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82AAFE50:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAFE60"))) PPC_WEAK_FUNC(sub_82AAFE60);
PPC_FUNC_IMPL(__imp__sub_82AAFE60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,25988
	ctx.r9.s64 = ctx.r11.s64 + 25988;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82aafe94
	if (ctx.cr6.eq) goto loc_82AAFE94;
	// bl 0x823fd208
	ctx.lr = 0x82AAFE90;
	sub_823FD208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AAFE94:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAFEA8"))) PPC_WEAK_FUNC(sub_82AAFEA8);
PPC_FUNC_IMPL(__imp__sub_82AAFEA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lbz r10,29(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aaff04
	if (!ctx.cr6.eq) goto loc_82AAFF04;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_82AAFEC4:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82aafed8
	if (!ctx.cr6.lt) goto loc_82AAFED8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82aafef8
	goto loc_82AAFEF8;
loc_82AAFED8:
	// lbz r8,29(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 29);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82aafef0
	if (ctx.cr6.eq) goto loc_82AAFEF0;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82aafef0
	if (!ctx.cr6.lt) goto loc_82AAFEF0;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82AAFEF0:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82AAFEF8:
	// lbz r10,29(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82aafec4
	if (ctx.cr6.eq) goto loc_82AAFEC4;
loc_82AAFF04:
	// lbz r11,29(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 29);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aaff1c
	if (ctx.cr6.eq) goto loc_82AAFF1C;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82aaff20
	goto loc_82AAFF20;
loc_82AAFF1C:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
loc_82AAFF20:
	// lbz r10,29(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82aaff58
	if (!ctx.cr6.eq) goto loc_82AAFF58;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_82AAFF30:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82aaff48
	if (!ctx.cr6.lt) goto loc_82AAFF48;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82aaff4c
	goto loc_82AAFF4C;
loc_82AAFF48:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82AAFF4C:
	// lbz r9,29(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82aaff30
	if (ctx.cr6.eq) goto loc_82AAFF30;
loc_82AAFF58:
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAFF68"))) PPC_WEAK_FUNC(sub_82AAFF68);
PPC_FUNC_IMPL(__imp__sub_82AAFF68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82c0f6c0
	ctx.lr = 0x82AAFF84;
	sub_82C0F6C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aaffc4
	if (ctx.cr6.eq) goto loc_82AAFFC4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// stb r11,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82AAFFC4:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a7e7d8
	ctx.lr = 0x82AAFFD8;
	sub_82A7E7D8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32202
	ctx.r9.s64 = -2110390272;
	// addi r8,r10,32528
	ctx.r8.s64 = ctx.r10.s64 + 32528;
	// addi r4,r9,28044
	ctx.r4.s64 = ctx.r9.s64 + 28044;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a84dc0
	ctx.lr = 0x82AAFFF4;
	sub_82A84DC0(ctx, base);
}

__attribute__((alias("__imp__sub_82AAFFF8"))) PPC_WEAK_FUNC(sub_82AAFFF8);
PPC_FUNC_IMPL(__imp__sub_82AAFFF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x823e19b0
	sub_823E19B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB0008"))) PPC_WEAK_FUNC(sub_82AB0008);
PPC_FUNC_IMPL(__imp__sub_82AB0008) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0010"))) PPC_WEAK_FUNC(sub_82AB0010);
PPC_FUNC_IMPL(__imp__sub_82AB0010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x82AB0038;
	sub_82C0F6C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab0088
	if (ctx.cr6.eq) goto loc_82AB0088;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,28(r8)
	PPC_STORE_U8(ctx.r8.u32 + 28, ctx.r11.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,29(r7)
	PPC_STORE_U8(ctx.r7.u32 + 29, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82AB0088:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a7e7d8
	ctx.lr = 0x82AB0098;
	sub_82A7E7D8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// addi r9,r11,32528
	ctx.r9.s64 = ctx.r11.s64 + 32528;
	// addi r4,r10,28044
	ctx.r4.s64 = ctx.r10.s64 + 28044;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a84dc0
	ctx.lr = 0x82AB00B4;
	sub_82A84DC0(ctx, base);
}

__attribute__((alias("__imp__sub_82AB00C0"))) PPC_WEAK_FUNC(sub_82AB00C0);
PPC_FUNC_IMPL(__imp__sub_82AB00C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x82a7de08
	ctx.lr = 0x82AB00D0;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r4,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r4.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82c0f6c0
	ctx.lr = 0x82AB00EC;
	sub_82C0F6C0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab011c
	if (ctx.cr6.eq) goto loc_82AB011C;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,16444
	ctx.r9.s64 = ctx.r10.s64 + 16444;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82ab0120
	goto loc_82AB0120;
loc_82AB011C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82AB0120:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab0134
	if (ctx.cr6.eq) goto loc_82AB0134;
	// bl 0x823e19b0
	ctx.lr = 0x82AB0130;
	sub_823E19B0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82AB0134:
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB014C"))) PPC_WEAK_FUNC(sub_82AB014C);
PPC_FUNC_IMPL(__imp__sub_82AB014C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab017c
	if (ctx.cr6.eq) goto loc_82AB017C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AB017C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AB017C:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a84dc0
	ctx.lr = 0x82AB0188;
	sub_82A84DC0(ctx, base);
}

__attribute__((alias("__imp__sub_82AB0188"))) PPC_WEAK_FUNC(sub_82AB0188);
PPC_FUNC_IMPL(__imp__sub_82AB0188) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,29(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82ab01c8
	if (!ctx.cr6.eq) goto loc_82AB01C8;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_82AB01A0:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82ab01b4
	if (!ctx.cr6.lt) goto loc_82AB01B4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82ab01bc
	goto loc_82AB01BC;
loc_82AB01B4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82AB01BC:
	// lbz r8,29(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82ab01a0
	if (ctx.cr6.eq) goto loc_82AB01A0;
loc_82AB01C8:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ab01f8
	if (ctx.cr6.eq) goto loc_82AB01F8;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82ab01f8
	if (ctx.cr6.lt) goto loc_82AB01F8;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82AB01F8:
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0210"))) PPC_WEAK_FUNC(sub_82AB0210);
PPC_FUNC_IMPL(__imp__sub_82AB0210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82c9d1f0
	ctx.lr = 0x82AB0248;
	sub_82C9D1F0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0278"))) PPC_WEAK_FUNC(sub_82AB0278);
PPC_FUNC_IMPL(__imp__sub_82AB0278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de00
	ctx.lr = 0x82AB0280;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r9,r10,65534
	ctx.r9.u64 = ctx.r10.u64 | 65534;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82ab02c8
	if (ctx.cr6.lt) goto loc_82AB02C8;
	// lwz r3,16(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab02b4
	if (ctx.cr6.eq) goto loc_82AB02B4;
	// bl 0x823e19b0
	ctx.lr = 0x82AB02B4;
	sub_823E19B0(ctx, base);
loc_82AB02B4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823fd208
	ctx.lr = 0x82AB02BC;
	sub_823FD208(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,19572
	ctx.r3.s64 = ctx.r11.s64 + 19572;
	// bl 0x82a90538
	ctx.lr = 0x82AB02C8;
	sub_82A90538(ctx, base);
loc_82AB02C8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r6,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r6.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ab02f8
	if (!ctx.cr6.eq) goto loc_82AB02F8;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r27,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r27.u32);
	// b 0x82ab0338
	goto loc_82AB0338;
loc_82AB02F8:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab0320
	if (ctx.cr6.eq) goto loc_82AB0320;
	// stw r27,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ab0338
	if (!ctx.cr6.eq) goto loc_82AB0338;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// b 0x82ab0338
	goto loc_82AB0338;
loc_82AB0320:
	// stw r27,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ab0338
	if (!ctx.cr6.eq) goto loc_82AB0338;
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
loc_82AB0338:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ab045c
	if (!ctx.cr6.eq) goto loc_82AB045C;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82AB0354:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ab03dc
	if (!ctx.cr6.eq) goto loc_82AB03DC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ab039c
	if (!ctx.cr6.eq) goto loc_82AB039C;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r29,28(r10)
	PPC_STORE_U8(ctx.r10.u32 + 28, ctx.r29.u8);
	// stb r29,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,28(r8)
	PPC_STORE_U8(ctx.r8.u32 + 28, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x82ab044c
	goto loc_82AB044C;
loc_82AB039C:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ab03b4
	if (!ctx.cr6.eq) goto loc_82AB03B4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82aafde8
	ctx.lr = 0x82AB03B4;
	sub_82AAFDE8(ctx, base);
loc_82AB03B4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,28(r9)
	PPC_STORE_U8(ctx.r9.u32 + 28, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82aafcc0
	ctx.lr = 0x82AB03D8;
	sub_82AAFCC0(ctx, base);
	// b 0x82ab044c
	goto loc_82AB044C;
loc_82AB03DC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ab0410
	if (!ctx.cr6.eq) goto loc_82AB0410;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,28(r10)
	PPC_STORE_U8(ctx.r10.u32 + 28, ctx.r29.u8);
	// stb r29,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,28(r8)
	PPC_STORE_U8(ctx.r8.u32 + 28, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x82ab044c
	goto loc_82AB044C;
loc_82AB0410:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ab0428
	if (!ctx.cr6.eq) goto loc_82AB0428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82aafcc0
	ctx.lr = 0x82AB0428;
	sub_82AAFCC0(ctx, base);
loc_82AB0428:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,28(r9)
	PPC_STORE_U8(ctx.r9.u32 + 28, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82aafde8
	ctx.lr = 0x82AB044C;
	sub_82AAFDE8(ctx, base);
loc_82AB044C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ab0354
	if (ctx.cr6.eq) goto loc_82AB0354;
loc_82AB045C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,28(r10)
	PPC_STORE_U8(ctx.r10.u32 + 28, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB0478"))) PPC_WEAK_FUNC(sub_82AB0478);
PPC_FUNC_IMPL(__imp__sub_82AB0478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddf8
	ctx.lr = 0x82AB0480;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,29(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 29);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab04a8
	if (ctx.cr6.eq) goto loc_82AB04A8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,19528
	ctx.r3.s64 = ctx.r11.s64 + 19528;
	// bl 0x82a90570
	ctx.lr = 0x82AB04A8;
	sub_82A90570(ctx, base);
loc_82AB04A8:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82aafb88
	ctx.lr = 0x82AB04B4;
	sub_82AAFB88(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,29(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r25,196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq cr6,0x82ab04d0
	if (ctx.cr6.eq) goto loc_82AB04D0;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x82ab04f4
	goto loc_82AB04F4;
loc_82AB04D0:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r9,29(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ab04e8
	if (ctx.cr6.eq) goto loc_82AB04E8;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x82ab04f4
	goto loc_82AB04F4;
loc_82AB04E8:
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r26
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82ab05e0
	if (!ctx.cr6.eq) goto loc_82AB05E0;
loc_82AB04F4:
	// lbz r11,29(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 29);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ab0508
	if (!ctx.cr6.eq) goto loc_82AB0508;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82AB0508:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82ab0520
	if (!ctx.cr6.eq) goto loc_82AB0520;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x82ab0538
	goto loc_82AB0538;
loc_82AB0520:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82ab0534
	if (!ctx.cr6.eq) goto loc_82AB0534;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x82ab0538
	goto loc_82AB0538;
loc_82AB0534:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_82AB0538:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82ab0588
	if (!ctx.cr6.eq) goto loc_82AB0588;
	// lbz r11,29(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 29);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab055c
	if (ctx.cr6.eq) goto loc_82AB055C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82ab0584
	goto loc_82AB0584;
loc_82AB055C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,29(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82ab0584
	if (!ctx.cr6.eq) goto loc_82AB0584;
loc_82AB0570:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,29(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82ab0570
	if (ctx.cr6.eq) goto loc_82AB0570;
loc_82AB0584:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82AB0588:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82ab0674
	if (!ctx.cr6.eq) goto loc_82AB0674;
	// lbz r11,29(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 29);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab05b0
	if (ctx.cr6.eq) goto loc_82AB05B0;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// b 0x82ab0674
	goto loc_82AB0674;
loc_82AB05B0:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,29(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82ab05d8
	if (!ctx.cr6.eq) goto loc_82AB05D8;
loc_82AB05C4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,29(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82ab05c4
	if (ctx.cr6.eq) goto loc_82AB05C4;
loc_82AB05D8:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82ab0674
	goto loc_82AB0674;
loc_82AB05E0:
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ab0600
	if (!ctx.cr6.eq) goto loc_82AB0600;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x82ab0628
	goto loc_82AB0628;
loc_82AB0600:
	// lbz r11,29(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 29);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ab0614
	if (!ctx.cr6.eq) goto loc_82AB0614;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82AB0614:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r25,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r25.u32);
loc_82AB0628:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82ab0640
	if (!ctx.cr6.eq) goto loc_82AB0640;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x82ab065c
	goto loc_82AB065C;
loc_82AB0640:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82ab0658
	if (!ctx.cr6.eq) goto loc_82AB0658;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x82ab065c
	goto loc_82AB065C;
loc_82AB0658:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_82AB065C:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r9,28(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 28);
	// lbz r10,28(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 28);
	// stb r9,28(r25)
	PPC_STORE_U8(ctx.r25.u32 + 28, ctx.r9.u8);
	// stb r10,28(r26)
	PPC_STORE_U8(ctx.r26.u32 + 28, ctx.r10.u8);
loc_82AB0674:
	// lbz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 28);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82ab080c
	if (!ctx.cr6.eq) goto loc_82AB080C;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ab0808
	if (ctx.cr6.eq) goto loc_82AB0808;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82AB0698:
	// lbz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 28);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82ab0808
	if (!ctx.cr6.eq) goto loc_82AB0808;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ab0750
	if (!ctx.cr6.eq) goto loc_82AB0750;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ab06d8
	if (!ctx.cr6.eq) goto loc_82AB06D8;
	// stb r29,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82aafde8
	ctx.lr = 0x82AB06D4;
	sub_82AAFDE8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82AB06D8:
	// lbz r10,29(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ab07a4
	if (!ctx.cr6.eq) goto loc_82AB07A4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 28);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82ab0704
	if (!ctx.cr6.eq) goto loc_82AB0704;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 28);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// beq cr6,0x82ab07a0
	if (ctx.cr6.eq) goto loc_82AB07A0;
loc_82AB0704:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 28);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x82ab072c
	if (!ctx.cr6.eq) goto loc_82AB072C;
	// stb r29,28(r10)
	PPC_STORE_U8(ctx.r10.u32 + 28, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82aafcc0
	ctx.lr = 0x82AB0728;
	sub_82AAFCC0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82AB072C:
	// lbz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r10.u8);
	// stb r29,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r29.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r29,28(r9)
	PPC_STORE_U8(ctx.r9.u32 + 28, ctx.r29.u8);
	// bl 0x82aafde8
	ctx.lr = 0x82AB074C;
	sub_82AAFDE8(ctx, base);
	// b 0x82ab0808
	goto loc_82AB0808;
loc_82AB0750:
	// lbz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ab0774
	if (!ctx.cr6.eq) goto loc_82AB0774;
	// stb r29,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82aafcc0
	ctx.lr = 0x82AB0770;
	sub_82AAFCC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82AB0774:
	// lbz r10,29(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ab07a4
	if (!ctx.cr6.eq) goto loc_82AB07A4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 28);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82ab07c0
	if (!ctx.cr6.eq) goto loc_82AB07C0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 28);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x82ab07c0
	if (!ctx.cr6.eq) goto loc_82AB07C0;
loc_82AB07A0:
	// stb r30,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r30.u8);
loc_82AB07A4:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ab0698
	if (!ctx.cr6.eq) goto loc_82AB0698;
	// b 0x82ab0808
	goto loc_82AB0808;
loc_82AB07C0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 28);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x82ab07e8
	if (!ctx.cr6.eq) goto loc_82AB07E8;
	// stb r29,28(r10)
	PPC_STORE_U8(ctx.r10.u32 + 28, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82aafde8
	ctx.lr = 0x82AB07E4;
	sub_82AAFDE8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82AB07E8:
	// lbz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r10.u8);
	// stb r29,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r29.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r29,28(r9)
	PPC_STORE_U8(ctx.r9.u32 + 28, ctx.r29.u8);
	// bl 0x82aafcc0
	ctx.lr = 0x82AB0808;
	sub_82AAFCC0(ctx, base);
loc_82AB0808:
	// stb r29,28(r28)
	PPC_STORE_U8(ctx.r28.u32 + 28, ctx.r29.u8);
loc_82AB080C:
	// lwz r3,16(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab081c
	if (ctx.cr6.eq) goto loc_82AB081C;
	// bl 0x823e19b0
	ctx.lr = 0x82AB081C;
	sub_823E19B0(ctx, base);
loc_82AB081C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823fd208
	ctx.lr = 0x82AB0824;
	sub_823FD208(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab0838
	if (ctx.cr6.eq) goto loc_82AB0838;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_82AB0838:
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB0848"))) PPC_WEAK_FUNC(sub_82AB0848);
PPC_FUNC_IMPL(__imp__sub_82AB0848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82AB0850;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,29(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 29);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ab08a4
	if (!ctx.cr6.eq) goto loc_82AB08A4;
loc_82AB086C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82ab0848
	ctx.lr = 0x82AB0878;
	sub_82AB0848(ctx, base);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// beq cr6,0x82ab088c
	if (ctx.cr6.eq) goto loc_82AB088C;
	// bl 0x823e19b0
	ctx.lr = 0x82AB088C;
	sub_823E19B0(ctx, base);
loc_82AB088C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823fd208
	ctx.lr = 0x82AB0894;
	sub_823FD208(ctx, base);
	// lbz r11,29(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 29);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab086c
	if (ctx.cr6.eq) goto loc_82AB086C;
loc_82AB08A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB08B0"))) PPC_WEAK_FUNC(sub_82AB08B0);
PPC_FUNC_IMPL(__imp__sub_82AB08B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddfc
	ctx.lr = 0x82AB08B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r10,29(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ab093c
	if (!ctx.cr6.eq) goto loc_82AB093C;
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_82AB08F0:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82ab090c
	if (ctx.cr6.eq) goto loc_82AB090C;
	// subfc r10,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subfze r31,r8
	temp.u8 = ~ctx.r8.u32 + ctx.xer.ca < ~ctx.r8.u32;
	ctx.r31.u64 = ~ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82ab0918
	goto loc_82AB0918;
loc_82AB090C:
	// subfc r6,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r9.u64 - ctx.r10.u64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r31,r4,31
	ctx.r31.u64 = ctx.r4.u32 & 0x1;
loc_82AB0918:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ab092c
	if (ctx.cr6.eq) goto loc_82AB092C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82ab0930
	goto loc_82AB0930;
loc_82AB092C:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82AB0930:
	// lbz r10,29(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ab08f0
	if (ctx.cr6.eq) goto loc_82AB08F0;
loc_82AB093C:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab099c
	if (ctx.cr6.eq) goto loc_82AB099C;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ab0994
	if (!ctx.cr6.eq) goto loc_82AB0994;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82ab0278
	ctx.lr = 0x82AB0978;
	sub_82AB0278(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r25.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de4c
	__restgprlr_25(ctx, base);
	return;
loc_82AB0994:
	// bl 0x82aafc18
	ctx.lr = 0x82AB0998;
	sub_82AAFC18(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82AB099C:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ab09e0
	if (!ctx.cr6.lt) goto loc_82AB09E0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ab0278
	ctx.lr = 0x82AB09C4;
	sub_82AB0278(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r25.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de4c
	__restgprlr_25(ctx, base);
	return;
loc_82AB09E0:
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab09f0
	if (ctx.cr6.eq) goto loc_82AB09F0;
	// bl 0x823e19b0
	ctx.lr = 0x82AB09F0;
	sub_823E19B0(ctx, base);
loc_82AB09F0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823fd208
	ctx.lr = 0x82AB09F8;
	sub_823FD208(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r11,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB0A10"))) PPC_WEAK_FUNC(sub_82AB0A10);
PPC_FUNC_IMPL(__imp__sub_82AB0A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82ab0848
	ctx.lr = 0x82AB0A30;
	sub_82AB0848(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r7.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0A68"))) PPC_WEAK_FUNC(sub_82AB0A68);
PPC_FUNC_IMPL(__imp__sub_82AB0A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddfc
	ctx.lr = 0x82AB0A70;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ab0aac
	if (!ctx.cr6.eq) goto loc_82AB0AAC;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82ab0278
	ctx.lr = 0x82AB0AA0;
	sub_82AB0278(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de4c
	__restgprlr_25(ctx, base);
	return;
loc_82AB0AAC:
	// lwz r25,4(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ab0af0
	if (!ctx.cr6.eq) goto loc_82AB0AF0;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ab0bec
	if (!ctx.cr6.lt) goto loc_82AB0BEC;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ab0278
	ctx.lr = 0x82AB0AE4;
	sub_82AB0278(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de4c
	__restgprlr_25(ctx, base);
	return;
loc_82AB0AF0:
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82ab0b2c
	if (!ctx.cr6.eq) goto loc_82AB0B2C;
	// lwz r6,8(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ab0bec
	if (!ctx.cr6.lt) goto loc_82AB0BEC;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ab0278
	ctx.lr = 0x82AB0B20;
	sub_82AB0278(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de4c
	__restgprlr_25(ctx, base);
	return;
loc_82AB0B2C:
	// lwz r26,12(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r27,12(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x82ab0b90
	if (!ctx.cr6.gt) goto loc_82AB0B90;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82aafc18
	ctx.lr = 0x82AB0B48;
	sub_82AAFC18(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82ab0b8c
	if (!ctx.cr6.lt) goto loc_82AB0B8C;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,29(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ab0bd8
	if (!ctx.cr6.eq) goto loc_82AB0BD8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82AB0B78:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82ab0278
	ctx.lr = 0x82AB0B80;
	sub_82AB0278(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de4c
	__restgprlr_25(ctx, base);
	return;
loc_82AB0B8C:
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
loc_82AB0B90:
	// bge cr6,0x82ab0bec
	if (!ctx.cr6.lt) goto loc_82AB0BEC;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82aafb88
	ctx.lr = 0x82AB0BA0;
	sub_82AAFB88(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r25
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82ab0bb8
	if (ctx.cr6.eq) goto loc_82AB0BB8;
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ab0bec
	if (!ctx.cr6.lt) goto loc_82AB0BEC;
loc_82AB0BB8:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,29(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ab0b78
	if (ctx.cr6.eq) goto loc_82AB0B78;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82AB0BD8:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ab0278
	ctx.lr = 0x82AB0BE0;
	sub_82AB0278(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de4c
	__restgprlr_25(ctx, base);
	return;
loc_82AB0BEC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ab08b0
	ctx.lr = 0x82AB0C00;
	sub_82AB08B0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB0C20"))) PPC_WEAK_FUNC(sub_82AB0C20);
PPC_FUNC_IMPL(__imp__sub_82AB0C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x82a7de0c
	ctx.lr = 0x82AB0C30;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82aaff68
	ctx.lr = 0x82AB0C40;
	sub_82AAFF68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// addic. r3,r3,12
	ctx.xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r3.s64 = ctx.r3.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// beq 0x82ab0c64
	if (ctx.cr0.eq) goto loc_82AB0C64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82ab0210
	ctx.lr = 0x82AB0C60;
	sub_82AB0210(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82AB0C64:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB0C78"))) PPC_WEAK_FUNC(sub_82AB0C78);
PPC_FUNC_IMPL(__imp__sub_82AB0C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x823fd208
	ctx.lr = 0x82AB0C90;
	sub_823FD208(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a84dc0
	ctx.lr = 0x82AB0C9C;
	sub_82A84DC0(ctx, base);
}

__attribute__((alias("__imp__sub_82AB0C9C"))) PPC_WEAK_FUNC(sub_82AB0C9C);
PPC_FUNC_IMPL(__imp__sub_82AB0C9C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x830b2320
	ctx.lr = 0x82AB0CB8;
	sub_830B2320(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0CC8"))) PPC_WEAK_FUNC(sub_82AB0CC8);
PPC_FUNC_IMPL(__imp__sub_82AB0CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82AB0CD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ab0d1c
	if (!ctx.cr6.eq) goto loc_82AB0D1C;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ab0d1c
	if (!ctx.cr6.eq) goto loc_82AB0D1C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82ab0a10
	ctx.lr = 0x82AB0D04;
	sub_82AB0A10(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
loc_82AB0D1C:
	// cmplw cr6,r5,r30
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82ab0d4c
	if (ctx.cr6.eq) goto loc_82AB0D4C;
loc_82AB0D24:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82aafb88
	ctx.lr = 0x82AB0D30;
	sub_82AAFB88(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ab0478
	ctx.lr = 0x82AB0D40;
	sub_82AB0478(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r5,r30
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ab0d24
	if (!ctx.cr6.eq) goto loc_82AB0D24;
loc_82AB0D4C:
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB0D68"))) PPC_WEAK_FUNC(sub_82AB0D68);
PPC_FUNC_IMPL(__imp__sub_82AB0D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82AB0D70;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r10,29(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ab0dbc
	if (!ctx.cr6.eq) goto loc_82AB0DBC;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82AB0D94:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ab0da8
	if (!ctx.cr6.lt) goto loc_82AB0DA8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82ab0db0
	goto loc_82AB0DB0;
loc_82AB0DA8:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82AB0DB0:
	// lbz r9,29(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ab0d94
	if (ctx.cr6.eq) goto loc_82AB0D94;
loc_82AB0DBC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ab0dd8
	if (ctx.cr6.eq) goto loc_82AB0DD8;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ab0e40
	if (!ctx.cr6.lt) goto loc_82AB0E40;
loc_82AB0DD8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// addi r10,r31,80
	ctx.r10.s64 = ctx.r31.s64 + 80;
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// bl 0x82c9d1f0
	ctx.lr = 0x82AB0E04;
	sub_82C9D1F0(ctx, base);
	// ld r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// std r9,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r9.u64);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ab0c20
	ctx.lr = 0x82AB0E18;
	sub_82AB0C20(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82ab0a68
	ctx.lr = 0x82AB0E2C;
	sub_82AB0A68(ctx, base);
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab0e40
	if (ctx.cr6.eq) goto loc_82AB0E40;
	// bl 0x823e19b0
	ctx.lr = 0x82AB0E40;
	sub_823E19B0(ctx, base);
loc_82AB0E40:
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB0E4C"))) PPC_WEAK_FUNC(sub_82AB0E4C);
PPC_FUNC_IMPL(__imp__sub_82AB0E4C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82aafff8
	ctx.lr = 0x82AB0E64;
	sub_82AAFFF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0E80"))) PPC_WEAK_FUNC(sub_82AB0E80);
PPC_FUNC_IMPL(__imp__sub_82AB0E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stw r6,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r6.u32);
	// stw r6,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r6.u32);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82ab0cc8
	ctx.lr = 0x82AB0EBC;
	sub_82AB0CC8(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x823fd208
	ctx.lr = 0x82AB0EC4;
	sub_823FD208(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0EDC"))) PPC_WEAK_FUNC(sub_82AB0EDC);
PPC_FUNC_IMPL(__imp__sub_82AB0EDC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x82aa3668
	ctx.lr = 0x82AB0EF4;
	sub_82AA3668(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0F08"))) PPC_WEAK_FUNC(sub_82AB0F08);
PPC_FUNC_IMPL(__imp__sub_82AB0F08) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ab0e80
	sub_82AB0E80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB0F18"))) PPC_WEAK_FUNC(sub_82AB0F18);
PPC_FUNC_IMPL(__imp__sub_82AB0F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddfc
	ctx.lr = 0x82AB0F20;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ab102c
	if (ctx.cr6.eq) goto loc_82AB102C;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x82c0f6c0
	ctx.lr = 0x82AB0F50;
	sub_82C0F6C0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab0f7c
	if (ctx.cr6.eq) goto loc_82AB0F7C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,16840
	ctx.r6.s64 = ctx.r11.s64 + 16840;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82aae178
	ctx.lr = 0x82AB0F74;
	sub_82AAE178(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82ab0f80
	goto loc_82AB0F80;
loc_82AB0F7C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82AB0F80:
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x824eed30
	ctx.lr = 0x82AB0F90;
	sub_824EED30(ctx, base);
	// lwz r28,88(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82ab0fcc
	if (ctx.cr6.eq) goto loc_82AB0FCC;
	// addi r29,r30,76
	ctx.r29.s64 = ctx.r30.s64 + 76;
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// stw r26,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r26.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ab0d68
	ctx.lr = 0x82AB0FB4;
	sub_82AB0D68(ctx, base);
	// ld r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ab0d68
	ctx.lr = 0x82AB0FC8;
	sub_82AB0D68(ctx, base);
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
loc_82AB0FCC:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r7,r28,8
	ctx.r7.s64 = ctx.r28.s64 + 8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x82abd1d8
	ctx.lr = 0x82AB0FF0;
	sub_82ABD1D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82ab1008
	if (!ctx.cr6.lt) goto loc_82AB1008;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82aadb68
	ctx.lr = 0x82AB1004;
	sub_82AADB68(ctx, base);
	// b 0x82ab1014
	goto loc_82AB1014;
loc_82AB1008:
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// bl 0x8250f8b8
	ctx.lr = 0x82AB1014;
	sub_8250F8B8(ctx, base);
loc_82AB1014:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82aafd80
	ctx.lr = 0x82AB101C;
	sub_82AAFD80(ctx, base);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab102c
	if (ctx.cr6.eq) goto loc_82AB102C;
	// bl 0x823e19b0
	ctx.lr = 0x82AB102C;
	sub_823E19B0(ctx, base);
loc_82AB102C:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82a7de4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB1034"))) PPC_WEAK_FUNC(sub_82AB1034);
PPC_FUNC_IMPL(__imp__sub_82AB1034) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x823fd208
	ctx.lr = 0x82AB104C;
	sub_823FD208(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB105C"))) PPC_WEAK_FUNC(sub_82AB105C);
PPC_FUNC_IMPL(__imp__sub_82AB105C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82aafff8
	ctx.lr = 0x82AB1074;
	sub_82AAFFF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1088"))) PPC_WEAK_FUNC(sub_82AB1088);
PPC_FUNC_IMPL(__imp__sub_82AB1088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82AB1090;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r30,r3,56
	ctx.r30.s64 = ctx.r3.s64 + 56;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ab114c
	if (ctx.cr6.eq) goto loc_82AB114C;
loc_82AB10AC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ab10d0
	if (ctx.cr6.eq) goto loc_82AB10D0;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ab10ac
	if (!ctx.cr6.eq) goto loc_82AB10AC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
loc_82AB10D0:
	// addi r29,r28,76
	ctx.r29.s64 = ctx.r28.s64 + 76;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ab0188
	ctx.lr = 0x82AB10E4;
	sub_82AB0188(ctx, base);
	// lwz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ab1118
	if (ctx.cr6.eq) goto loc_82AB1118;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82aafea8
	ctx.lr = 0x82AB1104;
	sub_82AAFEA8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82ab0cc8
	ctx.lr = 0x82AB1118;
	sub_82AB0CC8(ctx, base);
loc_82AB1118:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x824fdcd0
	ctx.lr = 0x82AB112C;
	sub_824FDCD0(ctx, base);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r3,r4,-8
	ctx.r3.s64 = ctx.r4.s64 + -8;
	// bl 0x824fdd10
	ctx.lr = 0x82AB1140;
	sub_824FDD10(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82AB114C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB1160"))) PPC_WEAK_FUNC(sub_82AB1160);
PPC_FUNC_IMPL(__imp__sub_82AB1160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82AB1168;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r9,r11,16968
	ctx.r9.s64 = ctx.r11.s64 + 16968;
	// addi r8,r10,5744
	ctx.r8.s64 = ctx.r10.s64 + 5744;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// addi r27,r3,8
	ctx.r27.s64 = ctx.r3.s64 + 8;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r27,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r27.u32);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stb r29,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r29.u8);
	// addi r28,r3,48
	ctx.r28.s64 = ctx.r3.s64 + 48;
	// stw r29,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r29.u32);
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// stw r29,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r29.u32);
	// addi r7,r3,56
	ctx.r7.s64 = ctx.r3.s64 + 56;
	// stw r29,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r29.u32);
	// stw r29,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r29.u32);
	// stw r29,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r29.u32);
	// stw r7,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r7.u32);
	// stw r29,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r29.u32);
	// addi r3,r3,76
	ctx.r3.s64 = ctx.r3.s64 + 76;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// bl 0x82ab0010
	ctx.lr = 0x82AB11E0;
	sub_82AB0010(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,8192
	ctx.r3.s64 = 8192;
	// bl 0x82a92c70
	ctx.lr = 0x82AB11EC;
	sub_82A92C70(ctx, base);
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r29,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r29.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x82AB11FC;
	sub_82C0F6C0(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab1220
	if (ctx.cr6.eq) goto loc_82AB1220;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82aad480
	ctx.lr = 0x82AB1218;
	sub_82AAD480(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82ab1224
	goto loc_82AB1224;
loc_82AB1220:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82AB1224:
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// bl 0x82ab00c0
	ctx.lr = 0x82AB1238;
	sub_82AB00C0(ctx, base);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82ab1264
	if (ctx.cr6.eq) goto loc_82AB1264;
	// bl 0x823e19b0
	ctx.lr = 0x82AB1260;
	sub_823E19B0(ctx, base);
	// b 0x82ab1264
	goto loc_82AB1264;
loc_82AB1264:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB1270"))) PPC_WEAK_FUNC(sub_82AB1270);
PPC_FUNC_IMPL(__imp__sub_82AB1270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82827070
	ctx.lr = 0x82AB128C;
	sub_82827070(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB129C"))) PPC_WEAK_FUNC(sub_82AB129C);
PPC_FUNC_IMPL(__imp__sub_82AB129C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82aafff8
	ctx.lr = 0x82AB12B8;
	sub_82AAFFF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB12C8"))) PPC_WEAK_FUNC(sub_82AB12C8);
PPC_FUNC_IMPL(__imp__sub_82AB12C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r3,r11,56
	ctx.r3.s64 = ctx.r11.s64 + 56;
	// bl 0x8250aa18
	ctx.lr = 0x82AB12E4;
	sub_8250AA18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB12F4"))) PPC_WEAK_FUNC(sub_82AB12F4);
PPC_FUNC_IMPL(__imp__sub_82AB12F4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r3,r11,76
	ctx.r3.s64 = ctx.r11.s64 + 76;
	// bl 0x82ab0f08
	ctx.lr = 0x82AB1310;
	sub_82AB0F08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1320"))) PPC_WEAK_FUNC(sub_82AB1320);
PPC_FUNC_IMPL(__imp__sub_82AB1320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x823fd208
	ctx.lr = 0x82AB1338;
	sub_823FD208(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1350"))) PPC_WEAK_FUNC(sub_82AB1350);
PPC_FUNC_IMPL(__imp__sub_82AB1350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddf8
	ctx.lr = 0x82AB1358;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82ab1468
	if (ctx.cr6.eq) goto loc_82AB1468;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r10,r11,2728
	ctx.r10.s64 = ctx.r11.s64 + 2728;
	// stw r26,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r26.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82a94598
	ctx.lr = 0x82AB13A0;
	sub_82A94598(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82ab13ac
	if (!ctx.cr6.lt) goto loc_82AB13AC;
	// b 0x82ab1468
	goto loc_82AB1468;
loc_82AB13AC:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r27,r10,1
	ctx.r27.s64 = ctx.r10.s64 + 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplwi cr6,r9,8192
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8192, ctx.xer);
	// ble cr6,0x82ab13dc
	if (!ctx.cr6.gt) goto loc_82AB13DC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ab0f18
	ctx.lr = 0x82AB13DC;
	sub_82AB0F18(ctx, base);
loc_82AB13DC:
	// stw r26,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r26.u32);
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// stb r25,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r25.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AB1404;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,48(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x82a94598
	ctx.lr = 0x82AB1414;
	sub_82A94598(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82ab1444
	if (!ctx.cr6.lt) goto loc_82AB1444;
	// stw r26,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r26.u32);
	// addi r6,r31,88
	ctx.r6.s64 = ctx.r31.s64 + 88;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AB1440;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82ab1468
	goto loc_82AB1468;
loc_82AB1444:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
loc_82AB1468:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x82a7de48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB1470"))) PPC_WEAK_FUNC(sub_82AB1470);
PPC_FUNC_IMPL(__imp__sub_82AB1470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82aabfb8
	ctx.lr = 0x82AB1488;
	sub_82AABFB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1498"))) PPC_WEAK_FUNC(sub_82AB1498);
PPC_FUNC_IMPL(__imp__sub_82AB1498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82ab14cc
	if (ctx.cr6.eq) goto loc_82AB14CC;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AB14CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AB14CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ab1088
	ctx.lr = 0x82AB14D4;
	sub_82AB1088(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB14E8"))) PPC_WEAK_FUNC(sub_82AB14E8);
PPC_FUNC_IMPL(__imp__sub_82AB14E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82ab151c
	if (ctx.cr6.eq) goto loc_82AB151C;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AB151C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AB151C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ab1088
	ctx.lr = 0x82AB1524;
	sub_82AB1088(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1538"))) PPC_WEAK_FUNC(sub_82AB1538);
PPC_FUNC_IMPL(__imp__sub_82AB1538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823f18b8
	ctx.lr = 0x82AB1550;
	sub_823F18B8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r3,r11,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1570"))) PPC_WEAK_FUNC(sub_82AB1570);
PPC_FUNC_IMPL(__imp__sub_82AB1570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab15ec
	if (ctx.cr6.eq) goto loc_82AB15EC;
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x823f18b8
	ctx.lr = 0x82AB159C;
	sub_823F18B8(ctx, base);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82ab15b4
	if (ctx.cr6.lt) goto loc_82AB15B4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r11.u8);
loc_82AB15B4:
	// lbz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab15ec
	if (ctx.cr6.eq) goto loc_82AB15EC;
	// bl 0x823f18b8
	ctx.lr = 0x82AB15C4;
	sub_823F18B8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// subf r4,r11,r3
	ctx.r4.u64 = ctx.r3.u64 - ctx.r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82ab0f18
	ctx.lr = 0x82AB15DC;
	sub_82AB0F18(ctx, base);
	// bl 0x823f18b8
	ctx.lr = 0x82AB15E0;
	sub_823F18B8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// stb r10,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r10.u8);
loc_82AB15EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1608"))) PPC_WEAK_FUNC(sub_82AB1608);
PPC_FUNC_IMPL(__imp__sub_82AB1608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,10
	ctx.r6.s64 = 10;
	// stfs f1,200(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r5.u32);
	// stw r11,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r11.u32);
	// addi r10,r3,203
	ctx.r10.s64 = ctx.r3.s64 + 203;
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// stw r8,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r8.u32);
	// stw r9,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r9.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82AB1648:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82ab1648
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AB1648;
	// stfs f2,224(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// stfs f3,228(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
	// stfs f4,232(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// stfs f5,236(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// stfs f6,248(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB166C;
	sub_823F18B8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// stw r10,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1690"))) PPC_WEAK_FUNC(sub_82AB1690);
PPC_FUNC_IMPL(__imp__sub_82AB1690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB16B4;
	sub_823F18B8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB16C4;
	sub_823F18B8(ctx, base);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r8,-31951
	ctx.r8.s64 = -2093940736;
	// subf r5,r9,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r9.u64;
	// addi r6,r8,30172
	ctx.r6.s64 = ctx.r8.s64 + 30172;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82ab1350
	ctx.lr = 0x82AB16E4;
	sub_82AB1350(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB16F8"))) PPC_WEAK_FUNC(sub_82AB16F8);
PPC_FUNC_IMPL(__imp__sub_82AB16F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// addi r11,r4,8196
	ctx.r11.s64 = ctx.r4.s64 + 8196;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82AB1710:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82ab1710
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AB1710;
	// li r11,26
	ctx.r11.s64 = 26;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r3,12
	ctx.r7.s64 = ctx.r3.s64 + 12;
	// li r5,100
	ctx.r5.s64 = 100;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82AB1730:
	// lbz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82AB173C:
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r4,r9,r11
	ctx.r4.s32 = (ctx.r11.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r9.s32 / ctx.r11.s32 : 0;
	// addi r31,r10,-1
	ctx.r31.s64 = ctx.r10.s64 + -1;
	// mullw r4,r4,r11
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// andc r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 & ~ctx.r31.u64;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// subf. r11,r4,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// twlgei r31,-1
	if (ctx.r31.s32 == -1 || ctx.r31.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// bne 0x82ab173c
	if (!ctx.cr0.eq) goto loc_82AB173C;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rotlwi r9,r8,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divw r8,r8,r10
	ctx.r8.s32 = (ctx.r10.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r8.s32 / ctx.r10.s32 : 0;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// divw r9,r5,r10
	ctx.r9.s32 = (ctx.r10.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r5.s32 / ctx.r10.s32 : 0;
	// andc r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 & ~ctx.r4.u64;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bdnz 0x82ab1730
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AB1730;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB17B0"))) PPC_WEAK_FUNC(sub_82AB17B0);
PPC_FUNC_IMPL(__imp__sub_82AB17B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82AB17B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab1818
	if (ctx.cr6.eq) goto loc_82AB1818;
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// twllei r29,0
	if (ctx.r29.s32 == 0 || ctx.r29.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// divwu r28,r11,r29
	ctx.r28.u32 = ctx.r29.u32 ? ctx.r11.u32 / ctx.r29.u32 : 0;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// mullw r29,r28,r29
	ctx.r29.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82ab1808
	if (ctx.cr6.lt) goto loc_82AB1808;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB1808:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82ab181c
	if (!ctx.cr6.eq) goto loc_82AB181C;
loc_82AB1818:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB181C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab1878
	if (ctx.cr6.eq) goto loc_82AB1878;
	// sth r4,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r4.u16);
	// sth r5,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r5.u16);
	// sth r6,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r6.u16);
	// sth r7,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r7.u16);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB1848;
	sub_823F18B8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB1858;
	sub_823F18B8(ctx, base);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r8,-31951
	ctx.r8.s64 = -2093940736;
	// subf r5,r9,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r9.u64;
	// addi r6,r8,30188
	ctx.r6.s64 = ctx.r8.s64 + 30188;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82ab1350
	ctx.lr = 0x82AB1878;
	sub_82AB1350(ctx, base);
loc_82AB1878:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB1880"))) PPC_WEAK_FUNC(sub_82AB1880);
PPC_FUNC_IMPL(__imp__sub_82AB1880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82AB1888;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab18e8
	if (ctx.cr6.eq) goto loc_82AB18E8;
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r29,20(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// twllei r29,0
	if (ctx.r29.s32 == 0 || ctx.r29.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r30,16(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// divwu r28,r11,r29
	ctx.r28.u32 = ctx.r29.u32 ? ctx.r11.u32 / ctx.r29.u32 : 0;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// mullw r29,r28,r29
	ctx.r29.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82ab18d8
	if (ctx.cr6.lt) goto loc_82AB18D8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB18D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82ab18ec
	if (!ctx.cr6.eq) goto loc_82AB18EC;
loc_82AB18E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB18EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab1948
	if (ctx.cr6.eq) goto loc_82AB1948;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// sth r5,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r5.u16);
	// sth r6,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r6.u16);
	// sth r7,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r7.u16);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// bl 0x823f18b8
	ctx.lr = 0x82AB1918;
	sub_823F18B8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB1928;
	sub_823F18B8(ctx, base);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r8,-31951
	ctx.r8.s64 = -2093940736;
	// subf r5,r9,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r9.u64;
	// addi r6,r8,30196
	ctx.r6.s64 = ctx.r8.s64 + 30196;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82ab1350
	ctx.lr = 0x82AB1948;
	sub_82AB1350(ctx, base);
loc_82AB1948:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB1950"))) PPC_WEAK_FUNC(sub_82AB1950);
PPC_FUNC_IMPL(__imp__sub_82AB1950) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82ab1880
	sub_82AB1880(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB1970"))) PPC_WEAK_FUNC(sub_82AB1970);
PPC_FUNC_IMPL(__imp__sub_82AB1970) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82ab1880
	sub_82AB1880(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB1990"))) PPC_WEAK_FUNC(sub_82AB1990);
PPC_FUNC_IMPL(__imp__sub_82AB1990) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82ab1880
	sub_82AB1880(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB19B0"))) PPC_WEAK_FUNC(sub_82AB19B0);
PPC_FUNC_IMPL(__imp__sub_82AB19B0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x82ab1880
	sub_82AB1880(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB19D0"))) PPC_WEAK_FUNC(sub_82AB19D0);
PPC_FUNC_IMPL(__imp__sub_82AB19D0) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82ab1880
	sub_82AB1880(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB19F0"))) PPC_WEAK_FUNC(sub_82AB19F0);
PPC_FUNC_IMPL(__imp__sub_82AB19F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ab1880
	ctx.lr = 0x82AB1A24;
	sub_82AB1880(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1A40"))) PPC_WEAK_FUNC(sub_82AB1A40);
PPC_FUNC_IMPL(__imp__sub_82AB1A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82AB1A48;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab1aa8
	if (ctx.cr6.eq) goto loc_82AB1AA8;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r3,28(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// twllei r3,0
	if (ctx.r3.s32 == 0 || ctx.r3.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// divwu r30,r11,r3
	ctx.r30.u32 = ctx.r3.u32 ? ctx.r11.u32 / ctx.r3.u32 : 0;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// mullw r3,r30,r3
	ctx.r3.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r3.s32);
	// stw r29,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r29.u32);
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82ab1a98
	if (ctx.cr6.lt) goto loc_82AB1A98;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB1A98:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82ab1aac
	if (!ctx.cr6.eq) goto loc_82AB1AAC;
loc_82AB1AA8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB1AAC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab1b00
	if (ctx.cr6.eq) goto loc_82AB1B00;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB1AD0;
	sub_823F18B8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB1AE0;
	sub_823F18B8(ctx, base);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r8,-31951
	ctx.r8.s64 = -2093940736;
	// subf r5,r9,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r9.u64;
	// addi r6,r8,30132
	ctx.r6.s64 = ctx.r8.s64 + 30132;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82ab1350
	ctx.lr = 0x82AB1B00;
	sub_82AB1350(ctx, base);
loc_82AB1B00:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB1B08"))) PPC_WEAK_FUNC(sub_82AB1B08);
PPC_FUNC_IMPL(__imp__sub_82AB1B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82AB1B10;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab1b70
	if (ctx.cr6.eq) goto loc_82AB1B70;
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r29,36(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// twllei r29,0
	if (ctx.r29.s32 == 0 || ctx.r29.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r30,32(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// divwu r28,r11,r29
	ctx.r28.u32 = ctx.r29.u32 ? ctx.r11.u32 / ctx.r29.u32 : 0;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// mullw r29,r28,r29
	ctx.r29.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// stw r27,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r27.u32);
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82ab1b60
	if (ctx.cr6.lt) goto loc_82AB1B60;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB1B60:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82ab1b74
	if (!ctx.cr6.eq) goto loc_82AB1B74;
loc_82AB1B70:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB1B74:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab1bd8
	if (ctx.cr6.eq) goto loc_82AB1BD8;
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stb r9,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r9.u8);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB1BA8;
	sub_823F18B8(ctx, base);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r9,r10,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r10.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB1BB8;
	sub_823F18B8(ctx, base);
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r7,-31951
	ctx.r7.s64 = -2093940736;
	// subf r5,r8,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r8.u64;
	// addi r6,r7,30140
	ctx.r6.s64 = ctx.r7.s64 + 30140;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82ab1350
	ctx.lr = 0x82AB1BD8;
	sub_82AB1350(ctx, base);
loc_82AB1BD8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB1BE0"))) PPC_WEAK_FUNC(sub_82AB1BE0);
PPC_FUNC_IMPL(__imp__sub_82AB1BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab1c50
	if (ctx.cr6.eq) goto loc_82AB1C50;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r3,40(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r9,r11,r8
	ctx.r9.u32 = ctx.r8.u32 ? ctx.r11.u32 / ctx.r8.u32 : 0;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// mullw r8,r9,r8
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// stw r30,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r30.u32);
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82ab1c40
	if (ctx.cr6.lt) goto loc_82AB1C40;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB1C40:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82ab1c54
	if (!ctx.cr6.eq) goto loc_82AB1C54;
loc_82AB1C50:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB1C54:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab1ca4
	if (ctx.cr6.eq) goto loc_82AB1CA4;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB1C74;
	sub_823F18B8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB1C84;
	sub_823F18B8(ctx, base);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r8,-31951
	ctx.r8.s64 = -2093940736;
	// subf r5,r9,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r9.u64;
	// addi r6,r8,30148
	ctx.r6.s64 = ctx.r8.s64 + 30148;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82ab1350
	ctx.lr = 0x82AB1CA4;
	sub_82AB1350(ctx, base);
loc_82AB1CA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1CC0"))) PPC_WEAK_FUNC(sub_82AB1CC0);
PPC_FUNC_IMPL(__imp__sub_82AB1CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82AB1CC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab1d28
	if (ctx.cr6.eq) goto loc_82AB1D28;
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r29,52(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// twllei r29,0
	if (ctx.r29.s32 == 0 || ctx.r29.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r30,48(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// divwu r28,r11,r29
	ctx.r28.u32 = ctx.r29.u32 ? ctx.r11.u32 / ctx.r29.u32 : 0;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// mullw r29,r28,r29
	ctx.r29.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// stw r27,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r27.u32);
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82ab1d18
	if (ctx.cr6.lt) goto loc_82AB1D18;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB1D18:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82ab1d2c
	if (!ctx.cr6.eq) goto loc_82AB1D2C;
loc_82AB1D28:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB1D2C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab1d88
	if (ctx.cr6.eq) goto loc_82AB1D88;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB1D58;
	sub_823F18B8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB1D68;
	sub_823F18B8(ctx, base);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r8,-31951
	ctx.r8.s64 = -2093940736;
	// subf r5,r9,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r9.u64;
	// addi r6,r8,30156
	ctx.r6.s64 = ctx.r8.s64 + 30156;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82ab1350
	ctx.lr = 0x82AB1D88;
	sub_82AB1350(ctx, base);
loc_82AB1D88:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB1D90"))) PPC_WEAK_FUNC(sub_82AB1D90);
PPC_FUNC_IMPL(__imp__sub_82AB1D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82AB1D98;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab1df8
	if (ctx.cr6.eq) goto loc_82AB1DF8;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r3,60(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// twllei r3,0
	if (ctx.r3.s32 == 0 || ctx.r3.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r9,56(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// divwu r30,r11,r3
	ctx.r30.u32 = ctx.r3.u32 ? ctx.r11.u32 / ctx.r3.u32 : 0;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// mullw r3,r30,r3
	ctx.r3.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r3.s32);
	// stw r29,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r29.u32);
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82ab1de8
	if (ctx.cr6.lt) goto loc_82AB1DE8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB1DE8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82ab1dfc
	if (!ctx.cr6.eq) goto loc_82AB1DFC;
loc_82AB1DF8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB1DFC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab1e50
	if (ctx.cr6.eq) goto loc_82AB1E50;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB1E20;
	sub_823F18B8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB1E30;
	sub_823F18B8(ctx, base);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r8,-31951
	ctx.r8.s64 = -2093940736;
	// subf r5,r9,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r9.u64;
	// addi r6,r8,30164
	ctx.r6.s64 = ctx.r8.s64 + 30164;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82ab1350
	ctx.lr = 0x82AB1E50;
	sub_82AB1350(ctx, base);
loc_82AB1E50:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB1E58"))) PPC_WEAK_FUNC(sub_82AB1E58);
PPC_FUNC_IMPL(__imp__sub_82AB1E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82AB1E60;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab1ec0
	if (ctx.cr6.eq) goto loc_82AB1EC0;
	// lwz r7,48(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r30,4(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// twllei r30,0
	if (ctx.r30.s32 == 0 || ctx.r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// divwu r29,r11,r30
	ctx.r29.u32 = ctx.r30.u32 ? ctx.r11.u32 / ctx.r30.u32 : 0;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// mullw r30,r29,r30
	ctx.r30.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r30.s32);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// subf r3,r30,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r30.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82ab1eb0
	if (ctx.cr6.lt) goto loc_82AB1EB0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB1EB0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82ab1ec4
	if (!ctx.cr6.eq) goto loc_82AB1EC4;
loc_82AB1EC0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB1EC4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab1f54
	if (ctx.cr6.eq) goto loc_82AB1F54;
	// li r3,10
	ctx.r3.s64 = 10;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r7,r1,95
	ctx.r7.s64 = ctx.r1.s64 + 95;
	// stfs f1,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
loc_82AB1EF0:
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r8,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x82ab1ef0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AB1EF0;
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// stfs f2,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f3,120(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stfs f4,124(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stfs f5,128(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f6,140(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB1F24;
	sub_823F18B8(ctx, base);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r9,r10,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r10.u64;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB1F34;
	sub_823F18B8(ctx, base);
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r7,-31951
	ctx.r7.s64 = -2093940736;
	// subf r5,r8,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r8.u64;
	// addi r6,r7,30180
	ctx.r6.s64 = ctx.r7.s64 + 30180;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82ab1350
	ctx.lr = 0x82AB1F54;
	sub_82AB1350(ctx, base);
loc_82AB1F54:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB1F60"))) PPC_WEAK_FUNC(sub_82AB1F60);
PPC_FUNC_IMPL(__imp__sub_82AB1F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab1fd8
	if (ctx.cr6.eq) goto loc_82AB1FD8;
	// lwz r5,48(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r4,76(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 76);
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r3,72(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// twllei r4,0
	if (ctx.r4.s32 == 0 || ctx.r4.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r5,r11,r4
	ctx.r5.u32 = ctx.r4.u32 ? ctx.r11.u32 / ctx.r4.u32 : 0;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// mullw r4,r5,r4
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// stw r30,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r30.u32);
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82ab1fc8
	if (ctx.cr6.lt) goto loc_82AB1FC8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB1FC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82ab1fdc
	if (!ctx.cr6.eq) goto loc_82AB1FDC;
loc_82AB1FD8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB1FDC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab2038
	if (ctx.cr6.eq) goto loc_82AB2038;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// std r8,84(r1)
	PPC_STORE_U64(ctx.r1.u32 + 84, ctx.r8.u64);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// bl 0x82a7d730
	ctx.lr = 0x82AB2004;
	sub_82A7D730(ctx, base);
	// bl 0x823f18b8
	ctx.lr = 0x82AB2008;
	sub_823F18B8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB2018;
	sub_823F18B8(ctx, base);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r8,-31951
	ctx.r8.s64 = -2093940736;
	// subf r5,r9,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r9.u64;
	// addi r6,r8,30220
	ctx.r6.s64 = ctx.r8.s64 + 30220;
	// li r4,9
	ctx.r4.s64 = 9;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82ab1350
	ctx.lr = 0x82AB2038;
	sub_82AB1350(ctx, base);
loc_82AB2038:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB2050"))) PPC_WEAK_FUNC(sub_82AB2050);
PPC_FUNC_IMPL(__imp__sub_82AB2050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab20bc
	if (ctx.cr6.eq) goto loc_82AB20BC;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r8,84(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r7,80(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// divwu r3,r11,r8
	ctx.r3.u32 = ctx.r8.u32 ? ctx.r11.u32 / ctx.r8.u32 : 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mullw r8,r3,r8
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// stw r9,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r9.u32);
	// subf r3,r8,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r8.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82ab20ac
	if (ctx.cr6.lt) goto loc_82AB20AC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB20AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82ab20c0
	if (!ctx.cr6.eq) goto loc_82AB20C0;
loc_82AB20BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB20C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab210c
	if (ctx.cr6.eq) goto loc_82AB210C;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// stb r5,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r5.u8);
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// bl 0x823f18b8
	ctx.lr = 0x82AB20DC;
	sub_823F18B8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB20EC;
	sub_823F18B8(ctx, base);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r8,-31951
	ctx.r8.s64 = -2093940736;
	// subf r5,r9,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r9.u64;
	// addi r6,r8,30228
	ctx.r6.s64 = ctx.r8.s64 + 30228;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82ab1350
	ctx.lr = 0x82AB210C;
	sub_82AB1350(ctx, base);
loc_82AB210C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB2120"))) PPC_WEAK_FUNC(sub_82AB2120);
PPC_FUNC_IMPL(__imp__sub_82AB2120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab218c
	if (ctx.cr6.eq) goto loc_82AB218C;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r8,92(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// lwz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r7,88(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// divwu r3,r11,r8
	ctx.r3.u32 = ctx.r8.u32 ? ctx.r11.u32 / ctx.r8.u32 : 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mullw r8,r3,r8
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// stw r9,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r9.u32);
	// subf r3,r8,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r8.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82ab217c
	if (ctx.cr6.lt) goto loc_82AB217C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB217C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82ab2190
	if (!ctx.cr6.eq) goto loc_82AB2190;
loc_82AB218C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB2190:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab21dc
	if (ctx.cr6.eq) goto loc_82AB21DC;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// stb r5,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r5.u8);
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// bl 0x823f18b8
	ctx.lr = 0x82AB21AC;
	sub_823F18B8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB21BC;
	sub_823F18B8(ctx, base);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r8,-31951
	ctx.r8.s64 = -2093940736;
	// subf r5,r9,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r9.u64;
	// addi r6,r8,30236
	ctx.r6.s64 = ctx.r8.s64 + 30236;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82ab1350
	ctx.lr = 0x82AB21DC;
	sub_82AB1350(ctx, base);
loc_82AB21DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB21F0"))) PPC_WEAK_FUNC(sub_82AB21F0);
PPC_FUNC_IMPL(__imp__sub_82AB21F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab2260
	if (ctx.cr6.eq) goto loc_82AB2260;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r8,100(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r3,96(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r9,r11,r8
	ctx.r9.u32 = ctx.r8.u32 ? ctx.r11.u32 / ctx.r8.u32 : 0;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// mullw r8,r9,r8
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// stw r30,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r30.u32);
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82ab2250
	if (ctx.cr6.lt) goto loc_82AB2250;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB2250:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82ab2264
	if (!ctx.cr6.eq) goto loc_82AB2264;
loc_82AB2260:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB2264:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab22b4
	if (ctx.cr6.eq) goto loc_82AB22B4;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// stb r5,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r5.u8);
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// bl 0x823f18b8
	ctx.lr = 0x82AB2284;
	sub_823F18B8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB2294;
	sub_823F18B8(ctx, base);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r8,-31951
	ctx.r8.s64 = -2093940736;
	// subf r5,r9,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r9.u64;
	// addi r6,r8,30244
	ctx.r6.s64 = ctx.r8.s64 + 30244;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82ab1350
	ctx.lr = 0x82AB22B4;
	sub_82AB1350(ctx, base);
loc_82AB22B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB22D0"))) PPC_WEAK_FUNC(sub_82AB22D0);
PPC_FUNC_IMPL(__imp__sub_82AB22D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab2340
	if (ctx.cr6.eq) goto loc_82AB2340;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r8,108(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r3,104(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r9,r11,r8
	ctx.r9.u32 = ctx.r8.u32 ? ctx.r11.u32 / ctx.r8.u32 : 0;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// mullw r8,r9,r8
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// stw r30,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r30.u32);
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82ab2330
	if (ctx.cr6.lt) goto loc_82AB2330;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB2330:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82ab2344
	if (!ctx.cr6.eq) goto loc_82AB2344;
loc_82AB2340:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB2344:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab2394
	if (ctx.cr6.eq) goto loc_82AB2394;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// stb r6,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r6.u8);
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// bl 0x823f18b8
	ctx.lr = 0x82AB2364;
	sub_823F18B8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB2374;
	sub_823F18B8(ctx, base);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r8,-31951
	ctx.r8.s64 = -2093940736;
	// subf r5,r9,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r9.u64;
	// addi r6,r8,30252
	ctx.r6.s64 = ctx.r8.s64 + 30252;
	// li r4,13
	ctx.r4.s64 = 13;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82ab1350
	ctx.lr = 0x82AB2394;
	sub_82AB1350(ctx, base);
loc_82AB2394:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB23B0"))) PPC_WEAK_FUNC(sub_82AB23B0);
PPC_FUNC_IMPL(__imp__sub_82AB23B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab241c
	if (ctx.cr6.eq) goto loc_82AB241C;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r8,116(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r7,112(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r6,r11,r8
	ctx.r6.u32 = ctx.r8.u32 ? ctx.r11.u32 / ctx.r8.u32 : 0;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mullw r3,r6,r8
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// stw r5,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r5.u32);
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82ab240c
	if (ctx.cr6.lt) goto loc_82AB240C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB240C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82ab2420
	if (!ctx.cr6.eq) goto loc_82AB2420;
loc_82AB241C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB2420:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab2464
	if (ctx.cr6.eq) goto loc_82AB2464;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// bl 0x823f18b8
	ctx.lr = 0x82AB2434;
	sub_823F18B8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB2444;
	sub_823F18B8(ctx, base);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r8,-31951
	ctx.r8.s64 = -2093940736;
	// subf r5,r9,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r9.u64;
	// addi r6,r8,30204
	ctx.r6.s64 = ctx.r8.s64 + 30204;
	// li r4,14
	ctx.r4.s64 = 14;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82ab1350
	ctx.lr = 0x82AB2464;
	sub_82AB1350(ctx, base);
loc_82AB2464:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB2478"))) PPC_WEAK_FUNC(sub_82AB2478);
PPC_FUNC_IMPL(__imp__sub_82AB2478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab24e4
	if (ctx.cr6.eq) goto loc_82AB24E4;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r8,124(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 124);
	// lwz r11,60(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r6,120(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	// divwu r3,r11,r8
	ctx.r3.u32 = ctx.r8.u32 ? ctx.r11.u32 / ctx.r8.u32 : 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mullw r8,r3,r8
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// stw r9,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r9.u32);
	// subf r3,r8,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r8.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplw cr6,r3,r6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82ab24d4
	if (ctx.cr6.lt) goto loc_82AB24D4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB24D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82ab24e8
	if (!ctx.cr6.eq) goto loc_82AB24E8;
loc_82AB24E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB24E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab254c
	if (ctx.cr6.eq) goto loc_82AB254C;
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stfs f4,108(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB251C;
	sub_823F18B8(ctx, base);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r9,r10,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r10.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB252C;
	sub_823F18B8(ctx, base);
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r7,-31951
	ctx.r7.s64 = -2093940736;
	// subf r5,r8,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r8.u64;
	// addi r6,r7,30260
	ctx.r6.s64 = ctx.r7.s64 + 30260;
	// li r4,15
	ctx.r4.s64 = 15;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82ab1350
	ctx.lr = 0x82AB254C;
	sub_82AB1350(ctx, base);
loc_82AB254C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB2560"))) PPC_WEAK_FUNC(sub_82AB2560);
PPC_FUNC_IMPL(__imp__sub_82AB2560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab25cc
	if (ctx.cr6.eq) goto loc_82AB25CC;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r8,132(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r7,128(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 128);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r6,r11,r8
	ctx.r6.u32 = ctx.r8.u32 ? ctx.r11.u32 / ctx.r8.u32 : 0;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// mullw r9,r6,r8
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// stw r3,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r3.u32);
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82ab25bc
	if (ctx.cr6.lt) goto loc_82AB25BC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB25BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82ab25d0
	if (!ctx.cr6.eq) goto loc_82AB25D0;
loc_82AB25CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB25D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab2618
	if (ctx.cr6.eq) goto loc_82AB2618;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB25E8;
	sub_823F18B8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB25F8;
	sub_823F18B8(ctx, base);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r8,-31951
	ctx.r8.s64 = -2093940736;
	// subf r5,r9,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r9.u64;
	// addi r6,r8,30268
	ctx.r6.s64 = ctx.r8.s64 + 30268;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82ab1350
	ctx.lr = 0x82AB2618;
	sub_82AB1350(ctx, base);
loc_82AB2618:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB2630"))) PPC_WEAK_FUNC(sub_82AB2630);
PPC_FUNC_IMPL(__imp__sub_82AB2630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab269c
	if (ctx.cr6.eq) goto loc_82AB269C;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r7,140(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 140);
	// lwz r11,68(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// lwz r6,136(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 136);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r5,r11,r7
	ctx.r5.u32 = ctx.r7.u32 ? ctx.r11.u32 / ctx.r7.u32 : 0;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// mullw r9,r5,r7
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// stw r3,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r3.u32);
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82ab268c
	if (ctx.cr6.lt) goto loc_82AB268C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB268C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82ab26a0
	if (!ctx.cr6.eq) goto loc_82AB26A0;
loc_82AB269C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB26A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab26f4
	if (ctx.cr6.eq) goto loc_82AB26F4;
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stfs f2,92(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stfs f3,96(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB26C4;
	sub_823F18B8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB26D4;
	sub_823F18B8(ctx, base);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r8,-31951
	ctx.r8.s64 = -2093940736;
	// subf r5,r9,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r9.u64;
	// addi r6,r8,30276
	ctx.r6.s64 = ctx.r8.s64 + 30276;
	// li r4,17
	ctx.r4.s64 = 17;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82ab1350
	ctx.lr = 0x82AB26F4;
	sub_82AB1350(ctx, base);
loc_82AB26F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB2708"))) PPC_WEAK_FUNC(sub_82AB2708);
PPC_FUNC_IMPL(__imp__sub_82AB2708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab2778
	if (ctx.cr6.eq) goto loc_82AB2778;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r8,148(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 148);
	// lwz r11,72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r7,144(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 144);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r6,r11,r8
	ctx.r6.u32 = ctx.r8.u32 ? ctx.r11.u32 / ctx.r8.u32 : 0;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mullw r3,r6,r8
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// stw r4,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, ctx.r4.u32);
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82ab2768
	if (ctx.cr6.lt) goto loc_82AB2768;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB2768:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82ab277c
	if (!ctx.cr6.eq) goto loc_82AB277C;
loc_82AB2778:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB277C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab27cc
	if (ctx.cr6.eq) goto loc_82AB27CC;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r4,65
	ctx.r4.s64 = 65;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82a80e88
	ctx.lr = 0x82AB2798;
	sub_82A80E88(ctx, base);
	// bl 0x823f18b8
	ctx.lr = 0x82AB279C;
	sub_823F18B8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB27AC;
	sub_823F18B8(ctx, base);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r8,-31951
	ctx.r8.s64 = -2093940736;
	// subf r5,r9,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r9.u64;
	// addi r6,r8,30284
	ctx.r6.s64 = ctx.r8.s64 + 30284;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82ab1350
	ctx.lr = 0x82AB27CC;
	sub_82AB1350(ctx, base);
loc_82AB27CC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB27E0"))) PPC_WEAK_FUNC(sub_82AB27E0);
PPC_FUNC_IMPL(__imp__sub_82AB27E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab2858
	if (ctx.cr6.eq) goto loc_82AB2858;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r8,164(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 164);
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// lwz r7,160(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 160);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r6,r11,r8
	ctx.r6.u32 = ctx.r8.u32 ? ctx.r11.u32 / ctx.r8.u32 : 0;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mullw r3,r6,r8
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// stw r4,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r4.u32);
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82ab2848
	if (ctx.cr6.lt) goto loc_82AB2848;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB2848:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82ab285c
	if (!ctx.cr6.eq) goto loc_82AB285C;
loc_82AB2858:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB285C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab28b0
	if (ctx.cr6.eq) goto loc_82AB28B0;
	// li r6,256
	ctx.r6.s64 = 256;
	// li r4,257
	ctx.r4.s64 = 257;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82a80e88
	ctx.lr = 0x82AB2878;
	sub_82A80E88(ctx, base);
	// stfs f31,600(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 600, temp.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB2880;
	sub_823F18B8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB2890;
	sub_823F18B8(ctx, base);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r8,-31951
	ctx.r8.s64 = -2093940736;
	// subf r5,r9,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r9.u64;
	// addi r6,r8,30300
	ctx.r6.s64 = ctx.r8.s64 + 30300;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82ab1350
	ctx.lr = 0x82AB28B0;
	sub_82AB1350(ctx, base);
loc_82AB28B0:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB28C8"))) PPC_WEAK_FUNC(sub_82AB28C8);
PPC_FUNC_IMPL(__imp__sub_82AB28C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab293c
	if (ctx.cr6.eq) goto loc_82AB293C;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r8,156(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 156);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r7,152(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 152);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r6,r11,r8
	ctx.r6.u32 = ctx.r8.u32 ? ctx.r11.u32 / ctx.r8.u32 : 0;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mullw r3,r6,r8
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// stw r4,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r4.u32);
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82ab292c
	if (ctx.cr6.lt) goto loc_82AB292C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB292C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82ab2940
	if (!ctx.cr6.eq) goto loc_82AB2940;
loc_82AB293C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB2940:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab2994
	if (ctx.cr6.eq) goto loc_82AB2994;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r4,65
	ctx.r4.s64 = 65;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82a80e88
	ctx.lr = 0x82AB295C;
	sub_82A80E88(ctx, base);
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB2964;
	sub_823F18B8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB2974;
	sub_823F18B8(ctx, base);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r8,-31951
	ctx.r8.s64 = -2093940736;
	// subf r5,r9,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r9.u64;
	// addi r6,r8,30292
	ctx.r6.s64 = ctx.r8.s64 + 30292;
	// li r4,19
	ctx.r4.s64 = 19;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82ab1350
	ctx.lr = 0x82AB2994;
	sub_82AB1350(ctx, base);
loc_82AB2994:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB29B0"))) PPC_WEAK_FUNC(sub_82AB29B0);
PPC_FUNC_IMPL(__imp__sub_82AB29B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82AB29B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab2a20
	if (ctx.cr6.eq) goto loc_82AB2A20;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r8,172(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 172);
	// lwz r11,84(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// lwz r7,168(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 168);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r6,r11,r8
	ctx.r6.u32 = ctx.r8.u32 ? ctx.r11.u32 / ctx.r8.u32 : 0;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mullw r3,r6,r8
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// stw r5,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r5.u32);
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82ab2a10
	if (ctx.cr6.lt) goto loc_82AB2A10;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB2A10:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82ab2a24
	if (!ctx.cr6.eq) goto loc_82AB2A24;
loc_82AB2A20:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB2A24:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab2a80
	if (ctx.cr6.eq) goto loc_82AB2A80;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r4,65
	ctx.r4.s64 = 65;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82a80e88
	ctx.lr = 0x82AB2A44;
	sub_82A80E88(ctx, base);
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// stw r29,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r29.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB2A50;
	sub_823F18B8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB2A60;
	sub_823F18B8(ctx, base);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r8,-31951
	ctx.r8.s64 = -2093940736;
	// subf r5,r9,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r9.u64;
	// addi r6,r8,30308
	ctx.r6.s64 = ctx.r8.s64 + 30308;
	// li r4,21
	ctx.r4.s64 = 21;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82ab1350
	ctx.lr = 0x82AB2A80;
	sub_82AB1350(ctx, base);
loc_82AB2A80:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB2A88"))) PPC_WEAK_FUNC(sub_82AB2A88);
PPC_FUNC_IMPL(__imp__sub_82AB2A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab2af8
	if (ctx.cr6.eq) goto loc_82AB2AF8;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r7,180(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 180);
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r3,176(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 176);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r9,r11,r7
	ctx.r9.u32 = ctx.r7.u32 ? ctx.r11.u32 / ctx.r7.u32 : 0;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// mullw r7,r9,r7
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// stw r30,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r30.u32);
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82ab2ae8
	if (ctx.cr6.lt) goto loc_82AB2AE8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB2AE8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82ab2afc
	if (!ctx.cr6.eq) goto loc_82AB2AFC;
loc_82AB2AF8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB2AFC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab2b54
	if (ctx.cr6.eq) goto loc_82AB2B54;
	// stfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stfs f2,104(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB2B24;
	sub_823F18B8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB2B34;
	sub_823F18B8(ctx, base);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r8,-31951
	ctx.r8.s64 = -2093940736;
	// subf r5,r9,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r9.u64;
	// addi r6,r8,30316
	ctx.r6.s64 = ctx.r8.s64 + 30316;
	// li r4,22
	ctx.r4.s64 = 22;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82ab1350
	ctx.lr = 0x82AB2B54;
	sub_82AB1350(ctx, base);
loc_82AB2B54:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB2B70"))) PPC_WEAK_FUNC(sub_82AB2B70);
PPC_FUNC_IMPL(__imp__sub_82AB2B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82AB2B78;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab2bd8
	if (ctx.cr6.eq) goto loc_82AB2BD8;
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r29,188(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// twllei r29,0
	if (ctx.r29.s32 == 0 || ctx.r29.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r30,184(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// divwu r28,r11,r29
	ctx.r28.u32 = ctx.r29.u32 ? ctx.r11.u32 / ctx.r29.u32 : 0;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// mullw r29,r28,r29
	ctx.r29.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// stw r27,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r27.u32);
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82ab2bc8
	if (ctx.cr6.lt) goto loc_82AB2BC8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB2BC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82ab2bdc
	if (!ctx.cr6.eq) goto loc_82AB2BDC;
loc_82AB2BD8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AB2BDC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab2c38
	if (ctx.cr6.eq) goto loc_82AB2C38;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stb r10,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r10.u8);
	// bl 0x823f18b8
	ctx.lr = 0x82AB2C08;
	sub_823F18B8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB2C18;
	sub_823F18B8(ctx, base);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r8,-31951
	ctx.r8.s64 = -2093940736;
	// subf r5,r9,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r9.u64;
	// addi r6,r8,30324
	ctx.r6.s64 = ctx.r8.s64 + 30324;
	// li r4,23
	ctx.r4.s64 = 23;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82ab1350
	ctx.lr = 0x82AB2C38;
	sub_82AB1350(ctx, base);
loc_82AB2C38:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB2C40"))) PPC_WEAK_FUNC(sub_82AB2C40);
PPC_FUNC_IMPL(__imp__sub_82AB2C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab2cac
	if (ctx.cr6.eq) goto loc_82AB2CAC;
	// lis r10,8191
	ctx.r10.s64 = 536805376;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82ab2c7c
	if (ctx.cr6.gt) goto loc_82AB2C7C;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82c0f6c0
	ctx.lr = 0x82AB2C74;
	sub_82C0F6C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ab2cac
	if (!ctx.cr6.eq) goto loc_82AB2CAC;
loc_82AB2C7C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a7e7d8
	ctx.lr = 0x82AB2C90;
	sub_82A7E7D8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32202
	ctx.r9.s64 = -2110390272;
	// addi r8,r10,32528
	ctx.r8.s64 = ctx.r10.s64 + 32528;
	// addi r4,r9,28044
	ctx.r4.s64 = ctx.r9.s64 + 28044;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a84dc0
	ctx.lr = 0x82AB2CAC;
	sub_82A84DC0(ctx, base);
loc_82AB2CAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB2CC0"))) PPC_WEAK_FUNC(sub_82AB2CC0);
PPC_FUNC_IMPL(__imp__sub_82AB2CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,188
	ctx.r30.s64 = ctx.r3.s64 + 188;
	// bl 0x823f18b8
	ctx.lr = 0x82AB2CE0;
	sub_823F18B8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,244(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lfs f6,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f6.f64 = double(temp.f32);
	// subf r7,r11,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r11.u64;
	// lfs f5,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f4.f64 = double(temp.f32);
	// lwz r10,220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// subf r3,r8,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r8.u64;
	// lfs f3,228(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	ctx.f3.f64 = double(temp.f32);
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// lwz r9,216(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,224(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	ctx.f2.f64 = double(temp.f32);
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lfs f1,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,192(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// bl 0x82ab1e58
	ctx.lr = 0x82AB2D2C;
	sub_82AB1E58(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a7f140
	ctx.lr = 0x82AB2D3C;
	sub_82A7F140(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB2D58"))) PPC_WEAK_FUNC(sub_82AB2D58);
PPC_FUNC_IMPL(__imp__sub_82AB2D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x82ab1e58
	ctx.lr = 0x82AB2D88;
	sub_82AB1E58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB2D98"))) PPC_WEAK_FUNC(sub_82AB2D98);
PPC_FUNC_IMPL(__imp__sub_82AB2D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x82ab1e58
	ctx.lr = 0x82AB2DC8;
	sub_82AB1E58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB2DD8"))) PPC_WEAK_FUNC(sub_82AB2DD8);
PPC_FUNC_IMPL(__imp__sub_82AB2DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x82ab1e58
	ctx.lr = 0x82AB2E08;
	sub_82AB1E58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB2E18"))) PPC_WEAK_FUNC(sub_82AB2E18);
PPC_FUNC_IMPL(__imp__sub_82AB2E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x82ab1e58
	ctx.lr = 0x82AB2E48;
	sub_82AB1E58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB2E58"))) PPC_WEAK_FUNC(sub_82AB2E58);
PPC_FUNC_IMPL(__imp__sub_82AB2E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x82ab1e58
	ctx.lr = 0x82AB2E88;
	sub_82AB1E58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB2E98"))) PPC_WEAK_FUNC(sub_82AB2E98);
PPC_FUNC_IMPL(__imp__sub_82AB2E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x82ab1e58
	ctx.lr = 0x82AB2EC8;
	sub_82AB1E58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB2ED8"))) PPC_WEAK_FUNC(sub_82AB2ED8);
PPC_FUNC_IMPL(__imp__sub_82AB2ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x82ab1e58
	ctx.lr = 0x82AB2F08;
	sub_82AB1E58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB2F18"))) PPC_WEAK_FUNC(sub_82AB2F18);
PPC_FUNC_IMPL(__imp__sub_82AB2F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddfc
	ctx.lr = 0x82AB2F20;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82a7e320
	ctx.lr = 0x82AB2F28;
	__savefpr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,44(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// fmr f27,f5
	ctx.f27.f64 = ctx.f5.f64;
	// fmr f26,f6
	ctx.f26.f64 = ctx.f6.f64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ab2fc4
	if (ctx.cr6.eq) goto loc_82AB2FC4;
	// bl 0x823f18b8
	ctx.lr = 0x82AB2F6C;
	sub_823F18B8(ctx, base);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82ab2fc4
	if (ctx.cr6.lt) goto loc_82AB2FC4;
	// li r11,0
	ctx.r11.s64 = 0;
	// fmr f6,f26
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f26.f64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// fmr f5,f27
	ctx.f5.f64 = ctx.f27.f64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// li r4,9
	ctx.r4.s64 = 9;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ab1e58
	ctx.lr = 0x82AB2FBC;
	sub_82AB1E58(ctx, base);
	// bl 0x823f18b8
	ctx.lr = 0x82AB2FC0;
	sub_823F18B8(ctx, base);
	// stw r3,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r3.u32);
loc_82AB2FC4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82a7e36c
	ctx.lr = 0x82AB2FD0;
	__restfpr_26(ctx, base);
	// b 0x82a7de4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB2FD8"))) PPC_WEAK_FUNC(sub_82AB2FD8);
PPC_FUNC_IMPL(__imp__sub_82AB2FD8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82ab28c8
	sub_82AB28C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB2FE8"))) PPC_WEAK_FUNC(sub_82AB2FE8);
PPC_FUNC_IMPL(__imp__sub_82AB2FE8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82ab28c8
	sub_82AB28C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB2FF8"))) PPC_WEAK_FUNC(sub_82AB2FF8);
PPC_FUNC_IMPL(__imp__sub_82AB2FF8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82ab28c8
	sub_82AB28C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB3008"))) PPC_WEAK_FUNC(sub_82AB3008);
PPC_FUNC_IMPL(__imp__sub_82AB3008) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82ab29b0
	sub_82AB29B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB3018"))) PPC_WEAK_FUNC(sub_82AB3018);
PPC_FUNC_IMPL(__imp__sub_82AB3018) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x82ab29b0
	sub_82AB29B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB3028"))) PPC_WEAK_FUNC(sub_82AB3028);
PPC_FUNC_IMPL(__imp__sub_82AB3028) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x82ab29b0
	sub_82AB29B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB3038"))) PPC_WEAK_FUNC(sub_82AB3038);
PPC_FUNC_IMPL(__imp__sub_82AB3038) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82ab2a88
	sub_82AB2A88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB3050"))) PPC_WEAK_FUNC(sub_82AB3050);
PPC_FUNC_IMPL(__imp__sub_82AB3050) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82ab2a88
	sub_82AB2A88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB3068"))) PPC_WEAK_FUNC(sub_82AB3068);
PPC_FUNC_IMPL(__imp__sub_82AB3068) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82ab2a88
	sub_82AB2A88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB3080"))) PPC_WEAK_FUNC(sub_82AB3080);
PPC_FUNC_IMPL(__imp__sub_82AB3080) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82ab2b70
	sub_82AB2B70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB30A0"))) PPC_WEAK_FUNC(sub_82AB30A0);
PPC_FUNC_IMPL(__imp__sub_82AB30A0) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82ab2b70
	sub_82AB2B70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB30C0"))) PPC_WEAK_FUNC(sub_82AB30C0);
PPC_FUNC_IMPL(__imp__sub_82AB30C0) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82ab2b70
	sub_82AB2B70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB30E0"))) PPC_WEAK_FUNC(sub_82AB30E0);
PPC_FUNC_IMPL(__imp__sub_82AB30E0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_82AB30EC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab3104
	if (ctx.cr6.eq) goto loc_82AB3104;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
loc_82AB3104:
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bdnz 0x82ab30ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AB30EC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3110"))) PPC_WEAK_FUNC(sub_82AB3110);
PPC_FUNC_IMPL(__imp__sub_82AB3110) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82ab3144
	if (ctx.cr6.eq) goto loc_82AB3144;
loc_82AB311C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82ab3134
	if (ctx.cr6.eq) goto loc_82AB3134;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
loc_82AB3134:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82ab311c
	if (!ctx.cr6.eq) goto loc_82AB311C;
loc_82AB3144:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3150"))) PPC_WEAK_FUNC(sub_82AB3150);
PPC_FUNC_IMPL(__imp__sub_82AB3150) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82ab319c
	if (ctx.cr6.eq) goto loc_82AB319C;
	// subf r8,r5,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r5.u64;
	// add r9,r8,r5
	ctx.r9.u64 = ctx.r8.u64 + ctx.r5.u64;
loc_82AB3178:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bne cr6,0x82ab3178
	if (!ctx.cr6.eq) goto loc_82AB3178;
loc_82AB319C:
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB31A8"))) PPC_WEAK_FUNC(sub_82AB31A8);
PPC_FUNC_IMPL(__imp__sub_82AB31A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r6,r3,12
	ctx.r6.s64 = ctx.r3.s64 + 12;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ab30e0
	ctx.lr = 0x82AB31E0;
	sub_82AB30E0(ctx, base);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3200"))) PPC_WEAK_FUNC(sub_82AB3200);
PPC_FUNC_IMPL(__imp__sub_82AB3200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab3224
	if (ctx.cr6.eq) goto loc_82AB3224;
	// bl 0x823fd208
	ctx.lr = 0x82AB3224;
	sub_823FD208(ctx, base);
loc_82AB3224:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3250"))) PPC_WEAK_FUNC(sub_82AB3250);
PPC_FUNC_IMPL(__imp__sub_82AB3250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x82a7ddf8
	ctx.lr = 0x82AB3260;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82ab34d8
	if (ctx.cr6.eq) goto loc_82AB34D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,8191
	ctx.r10.s64 = 536805376;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// subf r8,r11,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r11.u64;
	// srawi r10,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	// subf r7,r10,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82ab32b0
	if (!ctx.cr6.lt) goto loc_82AB32B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,18928
	ctx.r3.s64 = ctx.r11.s64 + 18928;
	// bl 0x82a90538
	ctx.lr = 0x82AB32B0;
	sub_82A90538(ctx, base);
loc_82AB32B0:
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r8,r10,r28
	ctx.r8.u64 = ctx.r10.u64 + ctx.r28.u64;
	// subf r6,r11,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r11.u64;
	// srawi r11,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 3;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82ab33bc
	if (!ctx.cr6.lt) goto loc_82AB33BC;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r24,0
	ctx.r24.s64 = 0;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ab32e0
	if (ctx.cr6.lt) goto loc_82AB32E0;
	// add r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82AB32E0:
	// cmplw cr6,r24,r8
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82ab32ec
	if (!ctx.cr6.lt) goto loc_82AB32EC;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
loc_82AB32EC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ab2c40
	ctx.lr = 0x82AB32F8;
	sub_82AB2C40(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// subf r10,r11,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r11.u64;
	// srawi r25,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r25.s64 = ctx.r10.s32 >> 3;
	// rlwinm r11,r25,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ab31a8
	ctx.lr = 0x82AB3324;
	sub_82AB31A8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lbz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// addi r26,r30,12
	ctx.r26.s64 = ctx.r30.s64 + 12;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r8,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r8.u8);
	// bl 0x82ab3110
	ctx.lr = 0x82AB334C;
	sub_82AB3110(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// add r11,r25,r28
	ctx.r11.u64 = ctx.r25.u64 + ctx.r28.u64;
	// lbz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r8,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r8.u8);
	// bl 0x82ab3110
	ctx.lr = 0x82AB3378;
	sub_82AB3110(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// subf r10,r3,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r3.u64;
	// srawi r11,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 3;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// beq cr6,0x82ab339c
	if (ctx.cr6.eq) goto loc_82AB339C;
	// bl 0x823fd208
	ctx.lr = 0x82AB339C;
	sub_823FD208(ctx, base);
loc_82AB339C:
	// rlwinm r10,r24,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// b 0x82ab34d8
	goto loc_82AB34D8;
loc_82AB33BC:
	// subf r11,r29,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r29.u64;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82ab3454
	if (!ctx.cr6.lt) goto loc_82AB3454;
	// lwz r25,0(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r27,r28,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r26,4(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// addi r6,r30,12
	ctx.r6.s64 = ctx.r30.s64 + 12;
	// add r5,r27,r29
	ctx.r5.u64 = ctx.r27.u64 + ctx.r29.u64;
	// stw r4,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r4.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r25,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r25.u32);
	// stw r26,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r26.u32);
	// stb r8,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r8.u8);
	// bl 0x82ab3110
	ctx.lr = 0x82AB3400;
	sub_82AB3110(ctx, base);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r6,r31,88
	ctx.r6.s64 = ctx.r31.s64 + 88;
	// subf r11,r29,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// subf r5,r10,r28
	ctx.r5.u64 = ctx.r28.u64 - ctx.r10.u64;
	// bl 0x82ab31a8
	ctx.lr = 0x82AB341C;
	sub_82AB31A8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// add r9,r27,r10
	ctx.r9.u64 = ctx.r27.u64 + ctx.r10.u64;
	// subf r10,r27,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r27.u64;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ab34d8
	if (ctx.cr6.eq) goto loc_82AB34D8;
loc_82AB343C:
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ab343c
	if (!ctx.cr6.eq) goto loc_82AB343C;
	// b 0x82ab34d8
	goto loc_82AB34D8;
loc_82AB3454:
	// rlwinm r27,r28,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r25,0(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// subf r28,r27,r4
	ctx.r28.u64 = ctx.r4.u64 - ctx.r27.u64;
	// stw r4,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r4.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r26,4(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r6,r30,12
	ctx.r6.s64 = ctx.r30.s64 + 12;
	// stw r4,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r4.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r8,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r8.u8);
	// bl 0x82ab3110
	ctx.lr = 0x82AB3488;
	sub_82AB3110(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82ab34b4
	if (ctx.cr6.eq) goto loc_82AB34B4;
	// add r10,r27,r28
	ctx.r10.u64 = ctx.r27.u64 + ctx.r28.u64;
loc_82AB349C:
	// lwzu r9,-8(r11)
	ea = -8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// stwu r9,-8(r10)
	ea = -8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// bne cr6,0x82ab349c
	if (!ctx.cr6.eq) goto loc_82AB349C;
loc_82AB34B4:
	// add r10,r27,r29
	ctx.r10.u64 = ctx.r27.u64 + ctx.r29.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ab34d8
	if (ctx.cr6.eq) goto loc_82AB34D8;
loc_82AB34C4:
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ab34c4
	if (!ctx.cr6.eq) goto loc_82AB34C4;
loc_82AB34D8:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x82a7de48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB34E8"))) PPC_WEAK_FUNC(sub_82AB34E8);
PPC_FUNC_IMPL(__imp__sub_82AB34E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x823fd208
	ctx.lr = 0x82AB3500;
	sub_823FD208(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a84dc0
	ctx.lr = 0x82AB350C;
	sub_82A84DC0(ctx, base);
	// lwz r24,20352(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 20352);
	// lwz r16,17256(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + 17256);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a84dc0
	ctx.lr = 0x82AB352C;
	sub_82A84DC0(ctx, base);
}

__attribute__((alias("__imp__sub_82AB3514"))) PPC_WEAK_FUNC(sub_82AB3514);
PPC_FUNC_IMPL(__imp__sub_82AB3514) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a84dc0
	ctx.lr = 0x82AB352C;
	sub_82A84DC0(ctx, base);
}

__attribute__((alias("__imp__sub_82AB3530"))) PPC_WEAK_FUNC(sub_82AB3530);
PPC_FUNC_IMPL(__imp__sub_82AB3530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab3558
	if (ctx.cr6.eq) goto loc_82AB3558;
	// bl 0x823fd208
	ctx.lr = 0x82AB3558;
	sub_823FD208(ctx, base);
loc_82AB3558:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab3578
	if (ctx.cr6.eq) goto loc_82AB3578;
	// bl 0x823fd208
	ctx.lr = 0x82AB3578;
	sub_823FD208(ctx, base);
loc_82AB3578:
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB35A0"))) PPC_WEAK_FUNC(sub_82AB35A0);
PPC_FUNC_IMPL(__imp__sub_82AB35A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82AB35A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// li r9,6
	ctx.r9.s64 = 6;
	// ori r8,r11,37856
	ctx.r8.u64 = ctx.r11.u64 | 37856;
	// li r29,1
	ctx.r29.s64 = 1;
	// lis r10,25700
	ctx.r10.s64 = 1684275200;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r29,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r29.u8);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// ori r10,r10,25700
	ctx.r10.u64 = ctx.r10.u64 | 25700;
loc_82AB35D8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82ab35d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AB35D8;
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// addi r31,r30,44
	ctx.r31.s64 = ctx.r30.s64 + 44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,48(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,44(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x82ab3150
	ctx.lr = 0x82AB35FC;
	sub_82AB3150(ctx, base);
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// subf r11,r10,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r10.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// bge cr6,0x82ab3630
	if (!ctx.cr6.lt) goto loc_82AB3630;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// subfic r5,r11,26
	ctx.xer.ca = ctx.r11.u32 <= 26;
	ctx.r5.u64 = static_cast<uint64_t>(26) - ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ab3250
	ctx.lr = 0x82AB362C;
	sub_82AB3250(ctx, base);
	// b 0x82ab3648
	goto loc_82AB3648;
loc_82AB3630:
	// ble cr6,0x82ab3648
	if (!ctx.cr6.gt) goto loc_82AB3648;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r10,208
	ctx.r5.s64 = ctx.r10.s64 + 208;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ab3150
	ctx.lr = 0x82AB3648;
	sub_82AB3150(ctx, base);
loc_82AB3648:
	// addi r31,r30,60
	ctx.r31.s64 = ctx.r30.s64 + 60;
	// lwz r30,60(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82ab367c
	if (ctx.cr6.eq) goto loc_82AB367C;
	// subf r11,r4,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a7dca0
	ctx.lr = 0x82AB3674;
	sub_82A7DCA0(ctx, base);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82AB367C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c41318
	ctx.lr = 0x82AB368C;
	sub_82C41318(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB36A0"))) PPC_WEAK_FUNC(sub_82AB36A0);
PPC_FUNC_IMPL(__imp__sub_82AB36A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,17376
	ctx.r9.s64 = ctx.r10.s64 + 17376;
	// addi r8,r3,44
	ctx.r8.s64 = ctx.r3.s64 + 44;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r8,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r8.u32);
	// addi r7,r3,60
	ctx.r7.s64 = ctx.r3.s64 + 60;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r7,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r7.u32);
	// bl 0x82ab35a0
	ctx.lr = 0x82AB36FC;
	sub_82AB35A0(ctx, base);
	// lis r6,-31958
	ctx.r6.s64 = -2094399488;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r6,-32316
	ctx.r5.s64 = ctx.r6.s64 + -32316;
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AB371C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3738"))) PPC_WEAK_FUNC(sub_82AB3738);
PPC_FUNC_IMPL(__imp__sub_82AB3738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// bl 0x82ab3200
	ctx.lr = 0x82AB3754;
	sub_82AB3200(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3764"))) PPC_WEAK_FUNC(sub_82AB3764);
PPC_FUNC_IMPL(__imp__sub_82AB3764) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// bl 0x82ab3200
	ctx.lr = 0x82AB3780;
	sub_82AB3200(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3798"))) PPC_WEAK_FUNC(sub_82AB3798);
PPC_FUNC_IMPL(__imp__sub_82AB3798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82AB37A0;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,16968
	ctx.r10.s64 = ctx.r11.s64 + 16968;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r3,76
	ctx.r3.s64 = ctx.r3.s64 + 76;
	// bl 0x82ab0e80
	ctx.lr = 0x82AB37C4;
	sub_82AB0E80(ctx, base);
	// lwz r3,56(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// addi r30,r29,56
	ctx.r30.s64 = ctx.r29.s64 + 56;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab37f4
	if (ctx.cr6.eq) goto loc_82AB37F4;
	// lbz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// stb r6,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r6.u8);
	// bl 0x824fdd10
	ctx.lr = 0x82AB37EC;
	sub_824FDD10(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823fd208
	ctx.lr = 0x82AB37F4;
	sub_823FD208(ctx, base);
loc_82AB37F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r3,52(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// addi r11,r29,48
	ctx.r11.s64 = ctx.r29.s64 + 48;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab381c
	if (ctx.cr6.eq) goto loc_82AB381C;
	// bl 0x823e19b0
	ctx.lr = 0x82AB381C;
	sub_823E19B0(ctx, base);
loc_82AB381C:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// addi r9,r10,5744
	ctx.r9.s64 = ctx.r10.s64 + 5744;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// beq cr6,0x82ab384c
	if (ctx.cr6.eq) goto loc_82AB384C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AB384C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AB384C:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB3854"))) PPC_WEAK_FUNC(sub_82AB3854);
PPC_FUNC_IMPL(__imp__sub_82AB3854) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82827070
	ctx.lr = 0x82AB3870;
	sub_82827070(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3880"))) PPC_WEAK_FUNC(sub_82AB3880);
PPC_FUNC_IMPL(__imp__sub_82AB3880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82aafff8
	ctx.lr = 0x82AB389C;
	sub_82AAFFF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB38AC"))) PPC_WEAK_FUNC(sub_82AB38AC);
PPC_FUNC_IMPL(__imp__sub_82AB38AC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r11,56
	ctx.r3.s64 = ctx.r11.s64 + 56;
	// bl 0x8250aa18
	ctx.lr = 0x82AB38C8;
	sub_8250AA18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB38E0"))) PPC_WEAK_FUNC(sub_82AB38E0);
PPC_FUNC_IMPL(__imp__sub_82AB38E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82AB38E8;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,-60
	ctx.r10.s64 = ctx.r11.s64 + -60;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// bl 0x82ab3798
	ctx.lr = 0x82AB390C;
	sub_82AB3798(ctx, base);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab3920
	if (ctx.cr6.eq) goto loc_82AB3920;
	// bl 0x823fd208
	ctx.lr = 0x82AB3920;
	sub_823FD208(ctx, base);
loc_82AB3920:
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r29.u32);
	// stw r29,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r29.u32);
	// stw r29,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r29.u32);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab3940
	if (ctx.cr6.eq) goto loc_82AB3940;
	// bl 0x823fd208
	ctx.lr = 0x82AB3940;
	sub_823FD208(ctx, base);
loc_82AB3940:
	// stw r29,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r29.u32);
	// stw r29,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r29.u32);
	// stw r29,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r29.u32);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB3954"))) PPC_WEAK_FUNC(sub_82AB3954);
PPC_FUNC_IMPL(__imp__sub_82AB3954) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82ab3530
	ctx.lr = 0x82AB3970;
	sub_82AB3530(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3988"))) PPC_WEAK_FUNC(sub_82AB3988);
PPC_FUNC_IMPL(__imp__sub_82AB3988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-60
	ctx.r10.s64 = ctx.r11.s64 + -60;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x82ab36a0
	ctx.lr = 0x82AB39BC;
	sub_82AB36A0(ctx, base);
	// bl 0x823f18b8
	ctx.lr = 0x82AB39C0;
	sub_823F18B8(ctx, base);
	// stw r3,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r3.u32);
	// addi r3,r30,84
	ctx.r3.s64 = ctx.r30.s64 + 84;
	// bl 0x82ab1160
	ctx.lr = 0x82AB39CC;
	sub_82AB1160(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,176(r30)
	PPC_STORE_U8(ctx.r30.u32 + 176, ctx.r9.u8);
	// bl 0x823f18b8
	ctx.lr = 0x82AB39D8;
	sub_823F18B8(ctx, base);
	// stw r3,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r3.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB39E0;
	sub_823F18B8(ctx, base);
	// stw r3,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3A00"))) PPC_WEAK_FUNC(sub_82AB3A00);
PPC_FUNC_IMPL(__imp__sub_82AB3A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82ab3530
	ctx.lr = 0x82AB3A1C;
	sub_82AB3530(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3A30"))) PPC_WEAK_FUNC(sub_82AB3A30);
PPC_FUNC_IMPL(__imp__sub_82AB3A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r3,252
	ctx.r11.s64 = ctx.r3.s64 + 252;
loc_82AB3A34:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = PPC_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	PPC_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reserved.u32 = *(uint32_t*)PPC_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(PPC_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	PPC_LEAVE_GLOBAL_LOCK();
	// bne 0x82ab3a34
	if (!ctx.cr0.eq) goto loc_82AB3A34;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3A58"))) PPC_WEAK_FUNC(sub_82AB3A58);
PPC_FUNC_IMPL(__imp__sub_82AB3A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r3,252
	ctx.r11.s64 = ctx.r3.s64 + 252;
loc_82AB3A5C:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = PPC_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	PPC_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reserved.u32 = *(uint32_t*)PPC_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(PPC_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	PPC_LEAVE_GLOBAL_LOCK();
	// bne 0x82ab3a5c
	if (!ctx.cr0.eq) goto loc_82AB3A5C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82AB3AA8"))) PPC_WEAK_FUNC(sub_82AB3AA8);
PPC_FUNC_IMPL(__imp__sub_82AB3AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,17664
	ctx.r10.s64 = ctx.r11.s64 + 17664;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82ab38e0
	ctx.lr = 0x82AB3AD4;
	sub_82AB38E0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ab3aec
	if (ctx.cr6.eq) goto loc_82AB3AEC;
	// bl 0x823fd208
	ctx.lr = 0x82AB3AE8;
	sub_823FD208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AB3AEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3B10"))) PPC_WEAK_FUNC(sub_82AB3B10);
PPC_FUNC_IMPL(__imp__sub_82AB3B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82AB3B18;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// lwz r11,28752(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28752);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ab3bcc
	if (!ctx.cr6.eq) goto loc_82AB3BCC;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x829e6d58
	ctx.lr = 0x82AB3B38;
	sub_829E6D58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab3b68
	if (ctx.cr6.eq) goto loc_82AB3B68;
	// bl 0x82ab3988
	ctx.lr = 0x82AB3B4C;
	sub_82AB3988(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,17676
	ctx.r9.s64 = ctx.r11.s64 + 17676;
	// stw r10,252(r30)
	PPC_STORE_U32(ctx.r30.u32 + 252, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// b 0x82ab3b6c
	goto loc_82AB3B6C;
loc_82AB3B68:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82AB3B6C:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x830fde88
	ctx.lr = 0x82AB3B74;
	sub_830FDE88(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r9,r11,-32316
	ctx.r9.s64 = ctx.r11.s64 + -32316;
	// addi r4,r10,17688
	ctx.r4.s64 = ctx.r10.s64 + 17688;
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,52(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82AB3B9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r3,28752(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28752, ctx.r3.u32);
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r5,r6,-13140
	ctx.r5.s64 = ctx.r6.s64 + -13140;
	// stw r5,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r5.u32);
	// beq cr6,0x82ab3bcc
	if (ctx.cr6.eq) goto loc_82AB3BCC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AB3BCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AB3BCC:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB3BD4"))) PPC_WEAK_FUNC(sub_82AB3BD4);
PPC_FUNC_IMPL(__imp__sub_82AB3BD4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82a9d3d0
	ctx.lr = 0x82AB3BEC;
	sub_82A9D3D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3BFC"))) PPC_WEAK_FUNC(sub_82AB3BFC);
PPC_FUNC_IMPL(__imp__sub_82AB3BFC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x830fdef0
	ctx.lr = 0x82AB3C14;
	sub_830FDEF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3C28"))) PPC_WEAK_FUNC(sub_82AB3C28);
PPC_FUNC_IMPL(__imp__sub_82AB3C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,17664
	ctx.r10.s64 = ctx.r11.s64 + 17664;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82ab38e0
	ctx.lr = 0x82AB3C54;
	sub_82AB38E0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ab3c6c
	if (ctx.cr6.eq) goto loc_82AB3C6C;
	// bl 0x829e6d90
	ctx.lr = 0x82AB3C68;
	sub_829E6D90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AB3C6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3C88"))) PPC_WEAK_FUNC(sub_82AB3C88);
PPC_FUNC_IMPL(__imp__sub_82AB3C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// lwz r3,28752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28752);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ab3cb0
	if (!ctx.cr6.eq) goto loc_82AB3CB0;
	// bl 0x82ab3b10
	ctx.lr = 0x82AB3CAC;
	sub_82AB3B10(ctx, base);
	// lwz r3,28752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28752);
loc_82AB3CB0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3CC8"))) PPC_WEAK_FUNC(sub_82AB3CC8);
PPC_FUNC_IMPL(__imp__sub_82AB3CC8) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3CD0"))) PPC_WEAK_FUNC(sub_82AB3CD0);
PPC_FUNC_IMPL(__imp__sub_82AB3CD0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// clrlwi r3,r11,25
	ctx.r3.u64 = ctx.r11.u32 & 0x7F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3CE0"))) PPC_WEAK_FUNC(sub_82AB3CE0);
PPC_FUNC_IMPL(__imp__sub_82AB3CE0) {
	PPC_FUNC_PROLOGUE();
	// ld r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3CE8"))) PPC_WEAK_FUNC(sub_82AB3CE8);
PPC_FUNC_IMPL(__imp__sub_82AB3CE8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,22(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3CF0"))) PPC_WEAK_FUNC(sub_82AB3CF0);
PPC_FUNC_IMPL(__imp__sub_82AB3CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r3,192(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 192);
	// lis r7,0
	ctx.r7.s64 = 0;
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// addi r11,r31,132
	ctx.r11.s64 = ctx.r31.s64 + 132;
	// addi r10,r31,196
	ctx.r10.s64 = ctx.r31.s64 + 196;
	// addi r9,r31,17616
	ctx.r9.s64 = ctx.r31.s64 + 17616;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r8,r8,3280
	ctx.r8.s64 = ctx.r8.s64 + 3280;
	// ori r7,r7,51200
	ctx.r7.u64 = ctx.r7.u64 | 51200;
	// addi r6,r31,204
	ctx.r6.s64 = ctx.r31.s64 + 204;
	// addi r5,r31,17612
	ctx.r5.s64 = ctx.r31.s64 + 17612;
	// li r4,512
	ctx.r4.s64 = 512;
	// bl 0x830fd318
	ctx.lr = 0x82AB3D38;
	sub_830FD318(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82ab3d4c
	if (!ctx.cr6.lt) goto loc_82AB3D4C;
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// bl 0x82aadb68
	ctx.lr = 0x82AB3D4C;
	sub_82AADB68(ctx, base);
loc_82AB3D4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3D60"))) PPC_WEAK_FUNC(sub_82AB3D60);
PPC_FUNC_IMPL(__imp__sub_82AB3D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r10.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB3D84;
	sub_823F18B8(ctx, base);
	// lwz r9,196(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// mulli r8,r9,1000
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(1000));
	// add r7,r3,r8
	ctx.r7.u64 = ctx.r3.u64 + ctx.r8.u64;
	// stw r7,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3DA8"))) PPC_WEAK_FUNC(sub_82AB3DA8);
PPC_FUNC_IMPL(__imp__sub_82AB3DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,3265(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3265);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab3dec
	if (ctx.cr6.eq) goto loc_82AB3DEC;
	// lhz r11,3256(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 3256);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// lwz r9,3260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3260);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// stb r10,3265(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3265, ctx.r10.u8);
	// b 0x82ab3e40
	goto loc_82AB3E40;
loc_82AB3DEC:
	// lbz r11,3266(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3266);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ab3e3c
	if (!ctx.cr6.eq) goto loc_82AB3E3C;
	// lwz r11,3284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// addi r30,r31,3284
	ctx.r30.s64 = ctx.r31.s64 + 3284;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ab3e3c
	if (!ctx.cr6.eq) goto loc_82AB3E3C;
	// bl 0x823f18b8
	ctx.lr = 0x82AB3E0C;
	sub_823F18B8(ctx, base);
	// lwz r11,3272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3272);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82ab3e3c
	if (!ctx.cr6.lt) goto loc_82AB3E3C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,3260
	ctx.r4.s64 = ctx.r31.s64 + 3260;
	// addi r3,r31,3256
	ctx.r3.s64 = ctx.r31.s64 + 3256;
	// bl 0x830fd3a0
	ctx.lr = 0x82AB3E28;
	sub_830FD3A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82ab3e3c
	if (!ctx.cr6.lt) goto loc_82AB3E3C;
	// addi r3,r31,3276
	ctx.r3.s64 = ctx.r31.s64 + 3276;
	// bl 0x82aadb68
	ctx.lr = 0x82AB3E3C;
	sub_82AADB68(ctx, base);
loc_82AB3E3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AB3E40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3E58"))) PPC_WEAK_FUNC(sub_82AB3E58);
PPC_FUNC_IMPL(__imp__sub_82AB3E58) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,30
	ctx.r10.s64 = 30;
	// stb r11,3261(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3261, ctx.r11.u8);
	// stw r10,3264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3264, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3E70"))) PPC_WEAK_FUNC(sub_82AB3E70);
PPC_FUNC_IMPL(__imp__sub_82AB3E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,3264(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3264);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823f18b8
	ctx.lr = 0x82AB3E90;
	sub_823F18B8(ctx, base);
	// mulli r11,r30,1000
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(1000));
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,3268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3268, ctx.r10.u32);
	// stw r9,3264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3264, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3EC0"))) PPC_WEAK_FUNC(sub_82AB3EC0);
PPC_FUNC_IMPL(__imp__sub_82AB3EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lbz r10,3264(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ab3f14
	if (ctx.cr6.eq) goto loc_82AB3F14;
	// lwz r31,3252(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3252);
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82ab3efc
	if (!ctx.cr6.lt) goto loc_82AB3EFC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_82AB3EFC:
	// mulli r5,r31,648
	ctx.r5.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(648));
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82a7d730
	ctx.lr = 0x82AB3F08;
	sub_82A7D730(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ab3f18
	goto loc_82AB3F18;
loc_82AB3F14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AB3F18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3F30"))) PPC_WEAK_FUNC(sub_82AB3F30);
PPC_FUNC_IMPL(__imp__sub_82AB3F30) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,3265(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3265, ctx.r11.u8);
	// stb r10,3266(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3266, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3F48"))) PPC_WEAK_FUNC(sub_82AB3F48);
PPC_FUNC_IMPL(__imp__sub_82AB3F48) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r9,3265(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3265, ctx.r9.u8);
	// addi r4,r4,4956
	ctx.r4.s64 = ctx.r4.s64 + 4956;
	// stb r9,3264(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3264, ctx.r9.u8);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stb r8,3266(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3266, ctx.r8.u8);
	// lhz r7,4944(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4944);
	// sth r7,3256(r11)
	PPC_STORE_U16(ctx.r11.u32 + 3256, ctx.r7.u16);
	// lwz r6,4948(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4948);
	// stw r6,3260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3260, ctx.r6.u32);
	// lwz r10,4952(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4952);
	// mulli r5,r10,648
	ctx.r5.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(648));
	// stw r10,3252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3252, ctx.r10.u32);
	// b 0x82a7d730
	sub_82A7D730(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB3F90"))) PPC_WEAK_FUNC(sub_82AB3F90);
PPC_FUNC_IMPL(__imp__sub_82AB3F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,5760
	ctx.r8.s64 = ctx.r11.s64 + 5760;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r9,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r9.u8);
	// beq cr6,0x82ab3fe8
	if (ctx.cr6.eq) goto loc_82AB3FE8;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AB3FE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AB3FE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4000"))) PPC_WEAK_FUNC(sub_82AB4000);
PPC_FUNC_IMPL(__imp__sub_82AB4000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,5768
	ctx.r9.s64 = ctx.r11.s64 + 5768;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// rotlwi r3,r8,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// beq cr6,0x82ab4054
	if (ctx.cr6.eq) goto loc_82AB4054;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AB4054;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AB4054:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4070"))) PPC_WEAK_FUNC(sub_82AB4070);
PPC_FUNC_IMPL(__imp__sub_82AB4070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
loc_82AB4074:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = PPC_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	PPC_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reserved.u32 = *(uint32_t*)PPC_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(PPC_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	PPC_LEAVE_GLOBAL_LOCK();
	// bne 0x82ab4074
	if (!ctx.cr0.eq) goto loc_82AB4074;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82AB40C0"))) PPC_WEAK_FUNC(sub_82AB40C0);
PPC_FUNC_IMPL(__imp__sub_82AB40C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,17836
	ctx.r8.s64 = ctx.r10.s64 + 17836;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r9,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r9.u8);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab4110
	if (ctx.cr6.eq) goto loc_82AB4110;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AB4110;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AB4110:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4128"))) PPC_WEAK_FUNC(sub_82AB4128);
PPC_FUNC_IMPL(__imp__sub_82AB4128) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r8,r9,17836
	ctx.r8.s64 = ctx.r9.s64 + 17836;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82AB4160"))) PPC_WEAK_FUNC(sub_82AB4160);
PPC_FUNC_IMPL(__imp__sub_82AB4160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,17820
	ctx.r9.s64 = ctx.r11.s64 + 17820;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82ab4194
	if (ctx.cr6.eq) goto loc_82AB4194;
	// bl 0x823fd208
	ctx.lr = 0x82AB4190;
	sub_823FD208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AB4194:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB41B0"))) PPC_WEAK_FUNC(sub_82AB41B0);
PPC_FUNC_IMPL(__imp__sub_82AB41B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r11,r30,96
	ctx.r11.s64 = ctx.r30.s64 + 96;
	// addi r9,r10,-13140
	ctx.r9.s64 = ctx.r10.s64 + -13140;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r9.u32);
	// beq cr6,0x82ab4200
	if (ctx.cr6.eq) goto loc_82AB4200;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AB4200;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AB4200:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// addi r9,r10,5744
	ctx.r9.s64 = ctx.r10.s64 + 5744;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r9.u32);
	// beq cr6,0x82ab4230
	if (ctx.cr6.eq) goto loc_82AB4230;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AB4230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AB4230:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4248"))) PPC_WEAK_FUNC(sub_82AB4248);
PPC_FUNC_IMPL(__imp__sub_82AB4248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,56
	ctx.r3.s64 = ctx.r11.s64 + 56;
	// bl 0x82827070
	ctx.lr = 0x82AB4264;
	sub_82827070(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4278"))) PPC_WEAK_FUNC(sub_82AB4278);
PPC_FUNC_IMPL(__imp__sub_82AB4278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r10,17836
	ctx.r9.s64 = ctx.r10.s64 + 17836;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82ab42c4
	if (ctx.cr6.eq) goto loc_82AB42C4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AB42C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AB42C4:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab42dc
	if (ctx.cr6.eq) goto loc_82AB42DC;
	// bl 0x823fd208
	ctx.lr = 0x82AB42D8;
	sub_823FD208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AB42DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB42F8"))) PPC_WEAK_FUNC(sub_82AB42F8);
PPC_FUNC_IMPL(__imp__sub_82AB42F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,85(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 85);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ab4314
	if (ctx.cr6.eq) goto loc_82AB4314;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82AB4314:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,85(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 85);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82ab4350
	if (!ctx.cr6.eq) goto loc_82AB4350;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,85(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 85);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82ab4348
	if (!ctx.cr6.eq) goto loc_82AB4348;
loc_82AB4334:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,85(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 85);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ab4334
	if (ctx.cr6.eq) goto loc_82AB4334;
loc_82AB4348:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82AB4350:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,85(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 85);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ab4388
	if (!ctx.cr6.eq) goto loc_82AB4388;
loc_82AB4360:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ab4388
	if (!ctx.cr6.eq) goto loc_82AB4388;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,85(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 85);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ab4360
	if (ctx.cr6.eq) goto loc_82AB4360;
loc_82AB4388:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r9,85(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 85);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB43A0"))) PPC_WEAK_FUNC(sub_82AB43A0);
PPC_FUNC_IMPL(__imp__sub_82AB43A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,5744
	ctx.r9.s64 = ctx.r11.s64 + 5744;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,60(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// rotlwi r3,r8,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// beq cr6,0x82ab43f4
	if (ctx.cr6.eq) goto loc_82AB43F4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AB43F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AB43F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4418"))) PPC_WEAK_FUNC(sub_82AB4418);
PPC_FUNC_IMPL(__imp__sub_82AB4418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82AB4420;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r7,r11,28440
	ctx.r7.s64 = ctx.r11.s64 + 28440;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r10,17944
	ctx.r6.s64 = ctx.r10.s64 + 17944;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,3252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3252, ctx.r11.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// addi r5,r9,18028
	ctx.r5.s64 = ctx.r9.s64 + 18028;
	// addi r4,r8,-60
	ctx.r4.s64 = ctx.r8.s64 + -60;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r5.u32);
	// li r10,30
	ctx.r10.s64 = 30;
	// stw r4,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r4.u32);
	// sth r11,3256(r30)
	PPC_STORE_U16(ctx.r30.u32 + 3256, ctx.r11.u16);
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// stw r11,3260(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3260, ctx.r11.u32);
	// stb r11,3264(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3264, ctx.r11.u8);
	// stb r11,3265(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3265, ctx.r11.u8);
	// stb r3,3266(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3266, ctx.r3.u8);
	// stw r10,3268(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3268, ctx.r10.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB4494;
	sub_823F18B8(ctx, base);
	// stw r3,3272(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3272, ctx.r3.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r3,r30,3276
	ctx.r3.s64 = ctx.r30.s64 + 3276;
	// addi r6,r9,17904
	ctx.r6.s64 = ctx.r9.s64 + 17904;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82aae178
	ctx.lr = 0x82AB44B0;
	sub_82AAE178(ctx, base);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// li r5,3240
	ctx.r5.s64 = 3240;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a7f140
	ctx.lr = 0x82AB44C0;
	sub_82A7F140(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r7,r8,-32316
	ctx.r7.s64 = ctx.r8.s64 + -32316;
	// lwz r3,4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,64(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 64);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82AB44E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB44EC"))) PPC_WEAK_FUNC(sub_82AB44EC);
PPC_FUNC_IMPL(__imp__sub_82AB44EC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r11,3276
	ctx.r3.s64 = ctx.r11.s64 + 3276;
	// bl 0x82aadfe0
	ctx.lr = 0x82AB4508;
	sub_82AADFE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4518"))) PPC_WEAK_FUNC(sub_82AB4518);
PPC_FUNC_IMPL(__imp__sub_82AB4518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r3,136
	ctx.r11.s64 = ctx.r3.s64 + 136;
loc_82AB451C:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = PPC_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	PPC_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reserved.u32 = *(uint32_t*)PPC_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(PPC_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	PPC_LEAVE_GLOBAL_LOCK();
	// bne 0x82ab451c
	if (!ctx.cr0.eq) goto loc_82AB451C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4540"))) PPC_WEAK_FUNC(sub_82AB4540);
PPC_FUNC_IMPL(__imp__sub_82AB4540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r3,136
	ctx.r11.s64 = ctx.r3.s64 + 136;
loc_82AB4544:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = PPC_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	PPC_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reserved.u32 = *(uint32_t*)PPC_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(PPC_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	PPC_LEAVE_GLOBAL_LOCK();
	// bne 0x82ab4544
	if (!ctx.cr0.eq) goto loc_82AB4544;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82AB4590"))) PPC_WEAK_FUNC(sub_82AB4590);
PPC_FUNC_IMPL(__imp__sub_82AB4590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ab4418
	ctx.lr = 0x82AB45A8;
	sub_82AB4418(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r11,18036
	ctx.r8.s64 = ctx.r11.s64 + 18036;
	// addi r7,r10,18028
	ctx.r7.s64 = ctx.r10.s64 + 18028;
	// addi r6,r9,18020
	ctx.r6.s64 = ctx.r9.s64 + 18020;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,3344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3344, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB45F0"))) PPC_WEAK_FUNC(sub_82AB45F0);
PPC_FUNC_IMPL(__imp__sub_82AB45F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r3,3336
	ctx.r11.s64 = ctx.r3.s64 + 3336;
loc_82AB45F4:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = PPC_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	PPC_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reserved.u32 = *(uint32_t*)PPC_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(PPC_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	PPC_LEAVE_GLOBAL_LOCK();
	// bne 0x82ab45f4
	if (!ctx.cr0.eq) goto loc_82AB45F4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4618"))) PPC_WEAK_FUNC(sub_82AB4618);
PPC_FUNC_IMPL(__imp__sub_82AB4618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r3,3336
	ctx.r11.s64 = ctx.r3.s64 + 3336;
loc_82AB461C:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = PPC_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	PPC_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reserved.u32 = *(uint32_t*)PPC_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(PPC_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	PPC_LEAVE_GLOBAL_LOCK();
	// bne 0x82ab461c
	if (!ctx.cr0.eq) goto loc_82AB461C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addic. r3,r3,-8
	ctx.xer.ca = ctx.r3.u32 > 7;
	ctx.r3.s64 = ctx.r3.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82AB4668"))) PPC_WEAK_FUNC(sub_82AB4668);
PPC_FUNC_IMPL(__imp__sub_82AB4668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,18008
	ctx.r10.s64 = ctx.r11.s64 + 18008;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82ab41b0
	ctx.lr = 0x82AB4694;
	sub_82AB41B0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ab46ac
	if (ctx.cr6.eq) goto loc_82AB46AC;
	// bl 0x823fd208
	ctx.lr = 0x82AB46A8;
	sub_823FD208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AB46AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB46C8"))) PPC_WEAK_FUNC(sub_82AB46C8);
PPC_FUNC_IMPL(__imp__sub_82AB46C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r11,18036
	ctx.r8.s64 = ctx.r11.s64 + 18036;
	// addi r7,r10,18028
	ctx.r7.s64 = ctx.r10.s64 + 18028;
	// addi r6,r9,18020
	ctx.r6.s64 = ctx.r9.s64 + 18020;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// addi r3,r3,3276
	ctx.r3.s64 = ctx.r3.s64 + 3276;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82aadfe0
	ctx.lr = 0x82AB4710;
	sub_82AADFE0(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82ab4728
	if (ctx.cr6.eq) goto loc_82AB4728;
	// bl 0x823fd208
	ctx.lr = 0x82AB4724;
	sub_823FD208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AB4728:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4740"))) PPC_WEAK_FUNC(sub_82AB4740);
PPC_FUNC_IMPL(__imp__sub_82AB4740) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,85(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 85);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,85(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 85);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82ab478c
	if (!ctx.cr6.eq) goto loc_82AB478C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,85(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 85);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82ab4784
	if (!ctx.cr6.eq) goto loc_82AB4784;
loc_82AB4770:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,85(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 85);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ab4770
	if (ctx.cr6.eq) goto loc_82AB4770;
loc_82AB4784:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82AB478C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,85(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 85);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ab47c4
	if (!ctx.cr6.eq) goto loc_82AB47C4;
loc_82AB479C:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ab47c4
	if (!ctx.cr6.eq) goto loc_82AB47C4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,85(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 85);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ab479c
	if (ctx.cr6.eq) goto loc_82AB479C;
loc_82AB47C4:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB47D0"))) PPC_WEAK_FUNC(sub_82AB47D0);
PPC_FUNC_IMPL(__imp__sub_82AB47D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,85(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 85);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82ab47f0
	if (!ctx.cr6.eq) goto loc_82AB47F0;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82AB47F0:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ab4818
	if (!ctx.cr6.eq) goto loc_82AB4818;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82AB4818:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ab4838
	if (!ctx.cr6.eq) goto loc_82AB4838;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82AB4838:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4848"))) PPC_WEAK_FUNC(sub_82AB4848);
PPC_FUNC_IMPL(__imp__sub_82AB4848) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,85(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 85);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82ab4868
	if (!ctx.cr6.eq) goto loc_82AB4868;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82AB4868:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ab4890
	if (!ctx.cr6.eq) goto loc_82AB4890;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82AB4890:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ab48b0
	if (!ctx.cr6.eq) goto loc_82AB48B0;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82AB48B0:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB48C0"))) PPC_WEAK_FUNC(sub_82AB48C0);
PPC_FUNC_IMPL(__imp__sub_82AB48C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stb r11,23(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23, ctx.r11.u8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,18048
	ctx.r4.s64 = ctx.r10.s64 + 18048;
	// bl 0x824a5cd0
	ctx.lr = 0x82AB48F0;
	sub_824A5CD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab491c
	if (ctx.cr6.eq) goto loc_82AB491C;
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// ld r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r30.u32 + 4);
	// bl 0x830fd2c0
	ctx.lr = 0x82AB4908;
	sub_830FD2C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82ab491c
	if (!ctx.cr6.lt) goto loc_82AB491C;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82aadb68
	ctx.lr = 0x82AB491C;
	sub_82AADB68(ctx, base);
loc_82AB491C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4940"))) PPC_WEAK_FUNC(sub_82AB4940);
PPC_FUNC_IMPL(__imp__sub_82AB4940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82AB4948;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lis r29,-31958
	ctx.r29.s64 = -2094399488;
	// addi r30,r11,-32316
	ctx.r30.s64 = ctx.r11.s64 + -32316;
	// lwz r4,-31792(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31792);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AB4974;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab4988
	if (ctx.cr6.eq) goto loc_82AB4988;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ab4a18
	if (!ctx.cr6.eq) goto loc_82AB4A18;
loc_82AB4988:
	// li r3,3348
	ctx.r3.s64 = 3348;
	// bl 0x82c0f6c0
	ctx.lr = 0x82AB4990;
	sub_82C0F6C0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab49a8
	if (ctx.cr6.eq) goto loc_82AB49A8;
	// bl 0x82ab4590
	ctx.lr = 0x82AB49A0;
	sub_82AB4590(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82ab49ac
	goto loc_82AB49AC;
loc_82AB49A8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82AB49AC:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82ab40c0
	ctx.lr = 0x82AB49B4;
	sub_82AB40C0(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82ab49cc
	if (!ctx.cr6.eq) goto loc_82AB49CC;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82AB49CC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,-31792(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31792);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AB49E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r8,r9,17836
	ctx.r8.s64 = ctx.r9.s64 + 17836;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// beq cr6,0x82ab4a14
	if (ctx.cr6.eq) goto loc_82AB4A14;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AB4A14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AB4A14:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82AB4A18:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB4A20"))) PPC_WEAK_FUNC(sub_82AB4A20);
PPC_FUNC_IMPL(__imp__sub_82AB4A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x823fd208
	ctx.lr = 0x82AB4A38;
	sub_823FD208(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4A48"))) PPC_WEAK_FUNC(sub_82AB4A48);
PPC_FUNC_IMPL(__imp__sub_82AB4A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82ab4128
	ctx.lr = 0x82AB4A60;
	sub_82AB4128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4A78"))) PPC_WEAK_FUNC(sub_82AB4A78);
PPC_FUNC_IMPL(__imp__sub_82AB4A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r4,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r4.u32);
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ab4aac
	if (ctx.cr6.eq) goto loc_82AB4AAC;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82ab4000
	ctx.lr = 0x82AB4AA8;
	sub_82AB4000(ctx, base);
	// b 0x82ab4aac
	goto loc_82AB4AAC;
loc_82AB4AAC:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4AC0"))) PPC_WEAK_FUNC(sub_82AB4AC0);
PPC_FUNC_IMPL(__imp__sub_82AB4AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830b2320
	ctx.lr = 0x82AB4ADC;
	sub_830B2320(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4AF0"))) PPC_WEAK_FUNC(sub_82AB4AF0);
PPC_FUNC_IMPL(__imp__sub_82AB4AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab4b64
	if (ctx.cr6.eq) goto loc_82AB4B64;
	// lis r10,1638
	ctx.r10.s64 = 107347968;
	// ori r9,r10,26214
	ctx.r9.u64 = ctx.r10.u64 | 26214;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82ab4b34
	if (ctx.cr6.gt) goto loc_82AB4B34;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82c0f6c0
	ctx.lr = 0x82AB4B2C;
	sub_82C0F6C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ab4b64
	if (!ctx.cr6.eq) goto loc_82AB4B64;
loc_82AB4B34:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a7e7d8
	ctx.lr = 0x82AB4B48;
	sub_82A7E7D8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32202
	ctx.r9.s64 = -2110390272;
	// addi r8,r10,32528
	ctx.r8.s64 = ctx.r10.s64 + 32528;
	// addi r4,r9,28044
	ctx.r4.s64 = ctx.r9.s64 + 28044;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a84dc0
	ctx.lr = 0x82AB4B64;
	sub_82A84DC0(ctx, base);
loc_82AB4B64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4B78"))) PPC_WEAK_FUNC(sub_82AB4B78);
PPC_FUNC_IMPL(__imp__sub_82AB4B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,17820
	ctx.r9.s64 = ctx.r11.s64 + 17820;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82ab4bac
	if (ctx.cr6.eq) goto loc_82AB4BAC;
	// bl 0x829e6d90
	ctx.lr = 0x82AB4BA8;
	sub_829E6D90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AB4BAC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4BC0"))) PPC_WEAK_FUNC(sub_82AB4BC0);
PPC_FUNC_IMPL(__imp__sub_82AB4BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,18008
	ctx.r10.s64 = ctx.r11.s64 + 18008;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82ab41b0
	ctx.lr = 0x82AB4BEC;
	sub_82AB41B0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ab4c04
	if (ctx.cr6.eq) goto loc_82AB4C04;
	// bl 0x829e6d90
	ctx.lr = 0x82AB4C00;
	sub_829E6D90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AB4C04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4C28"))) PPC_WEAK_FUNC(sub_82AB4C28);
PPC_FUNC_IMPL(__imp__sub_82AB4C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// stw r4,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ab4c5c
	if (ctx.cr6.eq) goto loc_82AB4C5C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82ab4000
	ctx.lr = 0x82AB4C58;
	sub_82AB4000(ctx, base);
	// b 0x82ab4c5c
	goto loc_82AB4C5C;
loc_82AB4C5C:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4C70"))) PPC_WEAK_FUNC(sub_82AB4C70);
PPC_FUNC_IMPL(__imp__sub_82AB4C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830b2320
	ctx.lr = 0x82AB4C8C;
	sub_830B2320(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4CA0"))) PPC_WEAK_FUNC(sub_82AB4CA0);
PPC_FUNC_IMPL(__imp__sub_82AB4CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x82c0f6c0
	ctx.lr = 0x82AB4CBC;
	sub_82C0F6C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab4cfc
	if (ctx.cr6.eq) goto loc_82AB4CFC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stb r11,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, ctx.r11.u8);
	// stb r11,85(r3)
	PPC_STORE_U8(ctx.r3.u32 + 85, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82AB4CFC:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a7e7d8
	ctx.lr = 0x82AB4D10;
	sub_82A7E7D8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32202
	ctx.r9.s64 = -2110390272;
	// addi r8,r10,32528
	ctx.r8.s64 = ctx.r10.s64 + 32528;
	// addi r4,r9,28044
	ctx.r4.s64 = ctx.r9.s64 + 28044;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a84dc0
	ctx.lr = 0x82AB4D2C;
	sub_82A84DC0(ctx, base);
}

__attribute__((alias("__imp__sub_82AB4D38"))) PPC_WEAK_FUNC(sub_82AB4D38);
PPC_FUNC_IMPL(__imp__sub_82AB4D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x82a7de00
	ctx.lr = 0x82AB4D48;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r5,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r5.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r5,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r5.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r28,r11,5768
	ctx.r28.s64 = ctx.r11.s64 + 5768;
loc_82AB4D70:
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82ab4dc8
	if (ctx.cr6.eq) goto loc_82AB4DC8;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ab4db8
	if (ctx.cr6.eq) goto loc_82AB4DB8;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r27,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r27.u8);
	// beq cr6,0x82ab4db8
	if (ctx.cr6.eq) goto loc_82AB4DB8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AB4DB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82AB4DB8:
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// b 0x82ab4d70
	goto loc_82AB4D70;
loc_82AB4DC8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82a7de50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB4DDC"))) PPC_WEAK_FUNC(sub_82AB4DDC);
PPC_FUNC_IMPL(__imp__sub_82AB4DDC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r29,180(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82ab4e20
	if (ctx.cr6.eq) goto loc_82AB4E20;
loc_82AB4DFC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AB4E14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82ab4dfc
	if (!ctx.cr6.eq) goto loc_82AB4DFC;
loc_82AB4E20:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a84dc0
	ctx.lr = 0x82AB4E2C;
	sub_82A84DC0(ctx, base);
}

__attribute__((alias("__imp__sub_82AB4E2C"))) PPC_WEAK_FUNC(sub_82AB4E2C);
PPC_FUNC_IMPL(__imp__sub_82AB4E2C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,180(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830b2320
	ctx.lr = 0x82AB4E48;
	sub_830B2320(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4E58"))) PPC_WEAK_FUNC(sub_82AB4E58);
PPC_FUNC_IMPL(__imp__sub_82AB4E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r3,88
	ctx.r3.s64 = 88;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x82AB4E80;
	sub_82C0F6C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab4ed0
	if (ctx.cr6.eq) goto loc_82AB4ED0;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,84(r8)
	PPC_STORE_U8(ctx.r8.u32 + 84, ctx.r11.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,85(r7)
	PPC_STORE_U8(ctx.r7.u32 + 85, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82AB4ED0:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a7e7d8
	ctx.lr = 0x82AB4EE0;
	sub_82A7E7D8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// addi r9,r11,32528
	ctx.r9.s64 = ctx.r11.s64 + 32528;
	// addi r4,r10,28044
	ctx.r4.s64 = ctx.r10.s64 + 28044;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a84dc0
	ctx.lr = 0x82AB4EFC;
	sub_82A84DC0(ctx, base);
}

__attribute__((alias("__imp__sub_82AB4F00"))) PPC_WEAK_FUNC(sub_82AB4F00);
PPC_FUNC_IMPL(__imp__sub_82AB4F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82AB4F08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// addi r31,r30,32
	ctx.r31.s64 = ctx.r30.s64 + 32;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82ab4f28
	if (ctx.cr6.lt) goto loc_82AB4F28;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823fd208
	ctx.lr = 0x82AB4F28;
	sub_823FD208(ctx, base);
loc_82AB4F28:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,7
	ctx.r28.s64 = 7;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// sth r29,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r29.u16);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82ab4f54
	if (ctx.cr6.lt) goto loc_82AB4F54;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823fd208
	ctx.lr = 0x82AB4F54;
	sub_823FD208(ctx, base);
loc_82AB4F54:
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// sth r29,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r29.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB4F68"))) PPC_WEAK_FUNC(sub_82AB4F68);
PPC_FUNC_IMPL(__imp__sub_82AB4F68) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,85(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 85);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82ab4fa8
	if (!ctx.cr6.eq) goto loc_82AB4FA8;
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
loc_82AB4F80:
	// lbz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82ab4f94
	if (!ctx.cr6.lt) goto loc_82AB4F94;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82ab4f9c
	goto loc_82AB4F9C;
loc_82AB4F94:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82AB4F9C:
	// lbz r8,85(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 85);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82ab4f80
	if (ctx.cr6.eq) goto loc_82AB4F80;
loc_82AB4FA8:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ab4fd8
	if (ctx.cr6.eq) goto loc_82AB4FD8;
	// lbz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ab4fd8
	if (ctx.cr6.lt) goto loc_82AB4FD8;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82AB4FD8:
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4FF8"))) PPC_WEAK_FUNC(sub_82AB4FF8);
PPC_FUNC_IMPL(__imp__sub_82AB4FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x82a7de00
	ctx.lr = 0x82AB5008;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1638
	ctx.r11.s64 = 107347968;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r10,r11,26214
	ctx.r10.u64 = ctx.r11.u64 | 26214;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ab5034
	if (!ctx.cr6.gt) goto loc_82AB5034;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,18928
	ctx.r3.s64 = ctx.r11.s64 + 18928;
	// bl 0x82a90538
	ctx.lr = 0x82AB5034;
	sub_82A90538(ctx, base);
loc_82AB5034:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r28,40
	ctx.r28.s64 = 40;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// divw r8,r9,r28
	ctx.r8.s32 = (ctx.r28.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r28.s32 == -1)) ? ctx.r9.s32 / ctx.r28.s32 : 0;
	// cmplw cr6,r8,r27
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82ab50e8
	if (!ctx.cr6.lt) goto loc_82AB50E8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ab4af0
	ctx.lr = 0x82AB505C;
	sub_82AB4AF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// lbz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// addi r26,r30,12
	ctx.r26.s64 = ctx.r30.s64 + 12;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stb r8,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r8.u8);
	// bl 0x82ab4d38
	ctx.lr = 0x82AB5088;
	sub_82AB4D38(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// subf r11,r3,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r3.u64;
	// divw r28,r11,r28
	ctx.r28.s32 = (ctx.r28.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r28.s32 == -1)) ? ctx.r11.s32 / ctx.r28.s32 : 0;
	// beq cr6,0x82ab50bc
	if (ctx.cr6.eq) goto loc_82AB50BC;
	// lbz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stb r6,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r6.u8);
	// bl 0x82a94190
	ctx.lr = 0x82AB50B4;
	sub_82A94190(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823fd208
	ctx.lr = 0x82AB50BC;
	sub_823FD208(ctx, base);
loc_82AB50BC:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r9,r28,r10
	ctx.r9.u64 = ctx.r28.u64 + ctx.r10.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r10,r29
	ctx.r8.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
loc_82AB50E8:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82a7de50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB50F8"))) PPC_WEAK_FUNC(sub_82AB50F8);
PPC_FUNC_IMPL(__imp__sub_82AB50F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x823fd208
	ctx.lr = 0x82AB5110;
	sub_823FD208(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a84dc0
	ctx.lr = 0x82AB511C;
	sub_82A84DC0(ctx, base);
}

__attribute__((alias("__imp__sub_82AB5128"))) PPC_WEAK_FUNC(sub_82AB5128);
PPC_FUNC_IMPL(__imp__sub_82AB5128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82AB5130;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// addi r8,r11,18620
	ctx.r8.s64 = ctx.r11.s64 + 18620;
	// addi r7,r10,-60
	ctx.r7.s64 = ctx.r10.s64 + -60;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r6,r9,-13140
	ctx.r6.s64 = ctx.r9.s64 + -13140;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// addi r5,r3,8
	ctx.r5.s64 = ctx.r3.s64 + 8;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r5,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r5.u32);
	// stb r29,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r29.u8);
	// addi r4,r3,48
	ctx.r4.s64 = ctx.r3.s64 + 48;
	// stw r29,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r29.u32);
	// stw r29,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r29.u32);
	// stw r29,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r29.u32);
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// stw r29,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r29.u32);
	// stw r29,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r29.u32);
	// stw r29,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r29.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r28,r30,80
	ctx.r28.s64 = ctx.r30.s64 + 80;
	// stw r29,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r29.u32);
	// addi r10,r11,-13140
	ctx.r10.s64 = ctx.r11.s64 + -13140;
	// stb r29,88(r30)
	PPC_STORE_U8(ctx.r30.u32 + 88, ctx.r29.u8);
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// stw r10,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r10.u32);
	// stw r29,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r29.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r9,18600
	ctx.r6.s64 = ctx.r9.s64 + 18600;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r30,124
	ctx.r3.s64 = ctx.r30.s64 + 124;
	// bl 0x82aae178
	ctx.lr = 0x82AB51D8;
	sub_82AAE178(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// sth r29,192(r30)
	PPC_STORE_U16(ctx.r30.u32 + 192, ctx.r29.u16);
	// ori r7,r8,6524
	ctx.r7.u64 = ctx.r8.u64 | 6524;
	// stw r29,196(r30)
	PPC_STORE_U32(ctx.r30.u32 + 196, ctx.r29.u32);
	// li r5,3240
	ctx.r5.s64 = 3240;
	// stw r29,200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 200, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,3284
	ctx.r3.s64 = ctx.r3.s64 + 3284;
	// stwx r29,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r29.u32);
	// bl 0x82a7f140
	ctx.lr = 0x82AB5204;
	sub_82A7F140(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x829e6d58
	ctx.lr = 0x82AB520C;
	sub_829E6D58(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab522c
	if (ctx.cr6.eq) goto loc_82AB522C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r11,18256
	ctx.r10.s64 = ctx.r11.s64 + 18256;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82ab5230
	goto loc_82AB5230;
loc_82AB522C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82AB5230:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83100488
	ctx.lr = 0x82AB5238;
	sub_83100488(ctx, base);
	// lwz r9,84(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r10,r11,-32316
	ctx.r10.s64 = ctx.r11.s64 + -32316;
	// stw r30,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r30.u32);
	// lwz r4,84(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,56(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82AB5260;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB526C"))) PPC_WEAK_FUNC(sub_82AB526C);
PPC_FUNC_IMPL(__imp__sub_82AB526C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x830fdef0
	ctx.lr = 0x82AB5288;
	sub_830FDEF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5298"))) PPC_WEAK_FUNC(sub_82AB5298);
PPC_FUNC_IMPL(__imp__sub_82AB5298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82ab3200
	ctx.lr = 0x82AB52B4;
	sub_82AB3200(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB52C4"))) PPC_WEAK_FUNC(sub_82AB52C4);
PPC_FUNC_IMPL(__imp__sub_82AB52C4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x82abc190
	ctx.lr = 0x82AB52E0;
	sub_82ABC190(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB52F0"))) PPC_WEAK_FUNC(sub_82AB52F0);
PPC_FUNC_IMPL(__imp__sub_82AB52F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x830fdef0
	ctx.lr = 0x82AB530C;
	sub_830FDEF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB531C"))) PPC_WEAK_FUNC(sub_82AB531C);
PPC_FUNC_IMPL(__imp__sub_82AB531C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r11,124
	ctx.r3.s64 = ctx.r11.s64 + 124;
	// bl 0x82aadfe0
	ctx.lr = 0x82AB5338;
	sub_82AADFE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5350"))) PPC_WEAK_FUNC(sub_82AB5350);
PPC_FUNC_IMPL(__imp__sub_82AB5350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82AB5358;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r11,18620
	ctx.r9.s64 = ctx.r11.s64 + 18620;
	// addi r8,r10,-60
	ctx.r8.s64 = ctx.r10.s64 + -60;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,84(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r6,-31958
	ctx.r6.s64 = -2094399488;
	// addi r5,r6,-32316
	ctx.r5.s64 = ctx.r6.s64 + -32316;
	// stw r28,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r28.u32);
	// lwz r4,84(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AB53AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r30,124
	ctx.r3.s64 = ctx.r30.s64 + 124;
	// bl 0x82aadfe0
	ctx.lr = 0x82AB53B4;
	sub_82AADFE0(ctx, base);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// addi r11,r30,80
	ctx.r11.s64 = ctx.r30.s64 + 80;
	// addi r8,r9,-13140
	ctx.r8.s64 = ctx.r9.s64 + -13140;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r8,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r8.u32);
	// beq cr6,0x82ab53e4
	if (ctx.cr6.eq) goto loc_82AB53E4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AB53E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AB53E4:
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r29,r30,64
	ctx.r29.s64 = ctx.r30.s64 + 64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab5414
	if (ctx.cr6.eq) goto loc_82AB5414;
	// lbz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// addi r5,r29,12
	ctx.r5.s64 = ctx.r29.s64 + 12;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// stb r6,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r6.u8);
	// bl 0x82a94190
	ctx.lr = 0x82AB540C;
	sub_82A94190(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x823fd208
	ctx.lr = 0x82AB5414;
	sub_823FD208(ctx, base);
loc_82AB5414:
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab5434
	if (ctx.cr6.eq) goto loc_82AB5434;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// bl 0x823fd208
	ctx.lr = 0x82AB5434;
	sub_823FD208(ctx, base);
loc_82AB5434:
	// stw r28,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r28.u32);
	// stw r28,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r28.u32);
	// stw r28,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r28.u32);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// addi r9,r10,-13140
	ctx.r9.s64 = ctx.r10.s64 + -13140;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// beq cr6,0x82ab5470
	if (ctx.cr6.eq) goto loc_82AB5470;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AB5470;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AB5470:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB5478"))) PPC_WEAK_FUNC(sub_82AB5478);
PPC_FUNC_IMPL(__imp__sub_82AB5478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x830fdef0
	ctx.lr = 0x82AB5494;
	sub_830FDEF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB54A4"))) PPC_WEAK_FUNC(sub_82AB54A4);
PPC_FUNC_IMPL(__imp__sub_82AB54A4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82ab3200
	ctx.lr = 0x82AB54C0;
	sub_82AB3200(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB54D0"))) PPC_WEAK_FUNC(sub_82AB54D0);
PPC_FUNC_IMPL(__imp__sub_82AB54D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x82abc190
	ctx.lr = 0x82AB54EC;
	sub_82ABC190(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB54FC"))) PPC_WEAK_FUNC(sub_82AB54FC);
PPC_FUNC_IMPL(__imp__sub_82AB54FC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x830fdef0
	ctx.lr = 0x82AB5518;
	sub_830FDEF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5528"))) PPC_WEAK_FUNC(sub_82AB5528);
PPC_FUNC_IMPL(__imp__sub_82AB5528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r11,124
	ctx.r3.s64 = ctx.r11.s64 + 124;
	// bl 0x82aadfe0
	ctx.lr = 0x82AB5544;
	sub_82AADFE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5558"))) PPC_WEAK_FUNC(sub_82AB5558);
PPC_FUNC_IMPL(__imp__sub_82AB5558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// addi r31,r3,64
	ctx.r31.s64 = ctx.r3.s64 + 64;
	// lwz r5,64(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ab55d8
	if (ctx.cr6.eq) goto loc_82AB55D8;
loc_82AB557C:
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82ab55a8
	if (ctx.cr6.eq) goto loc_82AB55A8;
	// addi r5,r5,40
	ctx.r5.s64 = ctx.r5.s64 + 40;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ab557c
	if (!ctx.cr6.eq) goto loc_82AB557C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82AB55A8:
	// addi r3,r5,40
	ctx.r3.s64 = ctx.r5.s64 + 40;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x831025c8
	ctx.lr = 0x82AB55B8;
	sub_831025C8(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r3,r4,-40
	ctx.r3.s64 = ctx.r4.s64 + -40;
	// bl 0x82a94190
	ctx.lr = 0x82AB55CC;
	sub_82A94190(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82AB55D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB55F0"))) PPC_WEAK_FUNC(sub_82AB55F0);
PPC_FUNC_IMPL(__imp__sub_82AB55F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addis r8,r3,1
	ctx.r8.s64 = ctx.r3.s64 + 65536;
	// addi r8,r8,6524
	ctx.r8.s64 = ctx.r8.s64 + 6524;
loc_82AB55F8:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = PPC_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	PPC_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reserved.u32 = *(uint32_t*)PPC_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(PPC_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	PPC_LEAVE_GLOBAL_LOCK();
	// bne 0x82ab55f8
	if (!ctx.cr0.eq) goto loc_82AB55F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5618"))) PPC_WEAK_FUNC(sub_82AB5618);
PPC_FUNC_IMPL(__imp__sub_82AB5618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addis r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 65536;
	// addi r9,r9,6524
	ctx.r9.s64 = ctx.r9.s64 + 6524;
loc_82AB5620:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = PPC_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	PPC_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reserved.u32 = *(uint32_t*)PPC_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r9
	ea = ctx.r9.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(PPC_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	PPC_LEAVE_GLOBAL_LOCK();
	// bne 0x82ab5620
	if (!ctx.cr0.eq) goto loc_82AB5620;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addic. r3,r3,-4
	ctx.xer.ca = ctx.r3.u32 > 3;
	ctx.r3.s64 = ctx.r3.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82AB5668"))) PPC_WEAK_FUNC(sub_82AB5668);
PPC_FUNC_IMPL(__imp__sub_82AB5668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r11,18888
	ctx.r9.s64 = ctx.r11.s64 + 18888;
	// addi r8,r10,18880
	ctx.r8.s64 = ctx.r10.s64 + 18880;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82ab5350
	ctx.lr = 0x82AB56A0;
	sub_82AB5350(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82ab56b8
	if (ctx.cr6.eq) goto loc_82AB56B8;
	// bl 0x823fd208
	ctx.lr = 0x82AB56B4;
	sub_823FD208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AB56B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB56D0"))) PPC_WEAK_FUNC(sub_82AB56D0);
PPC_FUNC_IMPL(__imp__sub_82AB56D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,1638
	ctx.r10.s64 = 107347968;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,40
	ctx.r9.s64 = 40;
	// ori r8,r10,26214
	ctx.r8.u64 = ctx.r10.u64 | 26214;
	// subf r6,r11,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subf r5,r4,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r4.u64;
	// divw r10,r6,r9
	ctx.r10.s32 = (ctx.r9.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r6.s32 / ctx.r9.s32 : 0;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ab5704
	if (!ctx.cr6.lt) goto loc_82AB5704;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,18928
	ctx.r3.s64 = ctx.r11.s64 + 18928;
	// b 0x82a90538
	sub_82A90538(ctx, base);
	return;
loc_82AB5704:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r6,r11,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r11.u64;
	// divw r11,r6,r9
	ctx.r11.s32 = (ctx.r9.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r6.s32 / ctx.r9.s32 : 0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ab5734
	if (ctx.cr6.lt) goto loc_82AB5734;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82AB5734:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ab5740
	if (!ctx.cr6.lt) goto loc_82AB5740;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82AB5740:
	// b 0x82ab4ff8
	sub_82AB4FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB5744"))) PPC_WEAK_FUNC(sub_82AB5744);
PPC_FUNC_IMPL(__imp__sub_82AB5744) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5748"))) PPC_WEAK_FUNC(sub_82AB5748);
PPC_FUNC_IMPL(__imp__sub_82AB5748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ab57ac
	if (ctx.cr6.eq) goto loc_82AB57AC;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab57ac
	if (ctx.cr6.eq) goto loc_82AB57AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82ab5558
	ctx.lr = 0x82AB5780;
	sub_82AB5558(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab57ac
	if (ctx.cr6.eq) goto loc_82AB57AC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AB57AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AB57AC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,18900
	ctx.r4.s64 = ctx.r11.s64 + 18900;
	// bl 0x824a5cd0
	ctx.lr = 0x82AB57BC;
	sub_824A5CD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab57e8
	if (ctx.cr6.eq) goto loc_82AB57E8;
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// ld r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4);
	// bl 0x830fd268
	ctx.lr = 0x82AB57D4;
	sub_830FD268(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82ab57e8
	if (!ctx.cr6.lt) goto loc_82AB57E8;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82aadb68
	ctx.lr = 0x82AB57E8;
	sub_82AADB68(ctx, base);
loc_82AB57E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5808"))) PPC_WEAK_FUNC(sub_82AB5808);
PPC_FUNC_IMPL(__imp__sub_82AB5808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddf8
	ctx.lr = 0x82AB5810;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r27,7
	ctx.r27.s64 = 7;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r27,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r27.u32);
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// sth r29,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r29.u16);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// bl 0x823ff9e8
	ctx.lr = 0x82AB5850;
	sub_823FF9E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824f0758
	ctx.lr = 0x82AB5860;
	sub_824F0758(ctx, base);
	// stw r27,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r27.u32);
	// stw r29,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r29.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// sth r29,32(r30)
	PPC_STORE_U16(ctx.r30.u32 + 32, ctx.r29.u16);
	// addi r28,r30,32
	ctx.r28.s64 = ctx.r30.s64 + 32;
	// bl 0x823ff9e8
	ctx.lr = 0x82AB5878;
	sub_823FF9E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824f0758
	ctx.lr = 0x82AB5888;
	sub_824F0758(ctx, base);
	// stw r24,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r24.u32);
	// sth r29,64(r30)
	PPC_STORE_U16(ctx.r30.u32 + 64, ctx.r29.u16);
	// sth r29,66(r30)
	PPC_STORE_U16(ctx.r30.u32 + 66, ctx.r29.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82a7de48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB58A0"))) PPC_WEAK_FUNC(sub_82AB58A0);
PPC_FUNC_IMPL(__imp__sub_82AB58A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x824eda30
	ctx.lr = 0x82AB58BC;
	sub_824EDA30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB58D0"))) PPC_WEAK_FUNC(sub_82AB58D0);
PPC_FUNC_IMPL(__imp__sub_82AB58D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82ab5350
	ctx.lr = 0x82AB58F0;
	sub_82AB5350(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab5908
	if (ctx.cr6.eq) goto loc_82AB5908;
	// bl 0x823fd208
	ctx.lr = 0x82AB5904;
	sub_823FD208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AB5908:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5920"))) PPC_WEAK_FUNC(sub_82AB5920);
PPC_FUNC_IMPL(__imp__sub_82AB5920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ab5958
	if (!ctx.cr6.lt) goto loc_82AB5958;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82ab595c
	if (!ctx.cr6.gt) goto loc_82AB595C;
loc_82AB5958:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82AB595C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ab59c0
	if (ctx.cr6.eq) goto loc_82AB59C0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,40
	ctx.r9.s64 = 40;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.u64 = ctx.r30.u64 - ctx.r10.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// divw r30,r7,r9
	ctx.r30.s32 = (ctx.r9.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r7.s32 / ctx.r9.s32 : 0;
	// bne cr6,0x82ab5990
	if (!ctx.cr6.eq) goto loc_82AB5990;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ab56d0
	ctx.lr = 0x82AB5990;
	sub_82AB56D0(ctx, base);
loc_82AB5990:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82ab4a78
	ctx.lr = 0x82AB59B0;
	sub_82AB4A78(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x82ab59f4
	goto loc_82AB59F4;
loc_82AB59C0:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ab59d8
	if (!ctx.cr6.eq) goto loc_82AB59D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ab56d0
	ctx.lr = 0x82AB59D8;
	sub_82AB56D0(ctx, base);
loc_82AB59D8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82ab4c28
	ctx.lr = 0x82AB59E8;
	sub_82AB4C28(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82AB59F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5A10"))) PPC_WEAK_FUNC(sub_82AB5A10);
PPC_FUNC_IMPL(__imp__sub_82AB5A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82AB5A18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// addi r30,r4,4
	ctx.r30.s64 = ctx.r4.s64 + 4;
	// addi r31,r30,32
	ctx.r31.s64 = ctx.r30.s64 + 32;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82ab5a38
	if (ctx.cr6.lt) goto loc_82AB5A38;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823fd208
	ctx.lr = 0x82AB5A38;
	sub_823FD208(ctx, base);
loc_82AB5A38:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,7
	ctx.r28.s64 = 7;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// sth r29,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r29.u16);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82ab5a64
	if (ctx.cr6.lt) goto loc_82AB5A64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823fd208
	ctx.lr = 0x82AB5A64;
	sub_823FD208(ctx, base);
loc_82AB5A64:
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// sth r29,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r29.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB5A78"))) PPC_WEAK_FUNC(sub_82AB5A78);
PPC_FUNC_IMPL(__imp__sub_82AB5A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de00
	ctx.lr = 0x82AB5A80;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,910
	ctx.r10.s64 = 59637760;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r9,r10,14562
	ctx.r9.u64 = ctx.r10.u64 | 14562;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82ab5ac4
	if (ctx.cr6.lt) goto loc_82AB5AC4;
	// addi r4,r7,12
	ctx.r4.s64 = ctx.r7.s64 + 12;
	// addi r3,r30,13
	ctx.r3.s64 = ctx.r30.s64 + 13;
	// bl 0x82ab5a10
	ctx.lr = 0x82AB5AB0;
	sub_82AB5A10(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823fd208
	ctx.lr = 0x82AB5AB8;
	sub_823FD208(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,19572
	ctx.r3.s64 = ctx.r11.s64 + 19572;
	// bl 0x82a90538
	ctx.lr = 0x82AB5AC4;
	sub_82A90538(ctx, base);
loc_82AB5AC4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r6,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r6.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ab5af4
	if (!ctx.cr6.eq) goto loc_82AB5AF4;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r27,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r27.u32);
	// b 0x82ab5b34
	goto loc_82AB5B34;
loc_82AB5AF4:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab5b1c
	if (ctx.cr6.eq) goto loc_82AB5B1C;
	// stw r27,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ab5b34
	if (!ctx.cr6.eq) goto loc_82AB5B34;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// b 0x82ab5b34
	goto loc_82AB5B34;
loc_82AB5B1C:
	// stw r27,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ab5b34
	if (!ctx.cr6.eq) goto loc_82AB5B34;
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
loc_82AB5B34:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ab5c58
	if (!ctx.cr6.eq) goto loc_82AB5C58;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82AB5B50:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ab5bd8
	if (!ctx.cr6.eq) goto loc_82AB5BD8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ab5b98
	if (!ctx.cr6.eq) goto loc_82AB5B98;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r29,84(r10)
	PPC_STORE_U8(ctx.r10.u32 + 84, ctx.r29.u8);
	// stb r29,84(r11)
	PPC_STORE_U8(ctx.r11.u32 + 84, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,84(r8)
	PPC_STORE_U8(ctx.r8.u32 + 84, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x82ab5c48
	goto loc_82AB5C48;
loc_82AB5B98:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ab5bb0
	if (!ctx.cr6.eq) goto loc_82AB5BB0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82ab47d0
	ctx.lr = 0x82AB5BB0;
	sub_82AB47D0(ctx, base);
loc_82AB5BB0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,84(r11)
	PPC_STORE_U8(ctx.r11.u32 + 84, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,84(r9)
	PPC_STORE_U8(ctx.r9.u32 + 84, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82ab4848
	ctx.lr = 0x82AB5BD4;
	sub_82AB4848(ctx, base);
	// b 0x82ab5c48
	goto loc_82AB5C48;
loc_82AB5BD8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ab5c0c
	if (!ctx.cr6.eq) goto loc_82AB5C0C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,84(r10)
	PPC_STORE_U8(ctx.r10.u32 + 84, ctx.r29.u8);
	// stb r29,84(r11)
	PPC_STORE_U8(ctx.r11.u32 + 84, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,84(r8)
	PPC_STORE_U8(ctx.r8.u32 + 84, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x82ab5c48
	goto loc_82AB5C48;
loc_82AB5C0C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ab5c24
	if (!ctx.cr6.eq) goto loc_82AB5C24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82ab4848
	ctx.lr = 0x82AB5C24;
	sub_82AB4848(ctx, base);
loc_82AB5C24:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,84(r11)
	PPC_STORE_U8(ctx.r11.u32 + 84, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,84(r9)
	PPC_STORE_U8(ctx.r9.u32 + 84, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82ab47d0
	ctx.lr = 0x82AB5C48;
	sub_82AB47D0(ctx, base);
loc_82AB5C48:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ab5b50
	if (ctx.cr6.eq) goto loc_82AB5B50;
loc_82AB5C58:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,84(r10)
	PPC_STORE_U8(ctx.r10.u32 + 84, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB5C80"))) PPC_WEAK_FUNC(sub_82AB5C80);
PPC_FUNC_IMPL(__imp__sub_82AB5C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82AB5C88;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r3,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r3.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// ori r3,r3,6532
	ctx.r3.u64 = ctx.r3.u64 | 6532;
	// bl 0x829e6d58
	ctx.lr = 0x82AB5CB0;
	sub_829E6D58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab5cf0
	if (ctx.cr6.eq) goto loc_82AB5CF0;
	// bl 0x82ab5128
	ctx.lr = 0x82AB5CC4;
	sub_82AB5128(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// ori r9,r11,6528
	ctx.r9.u64 = ctx.r11.u64 | 6528;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// addi r7,r10,18940
	ctx.r7.s64 = ctx.r10.s64 + 18940;
	// addi r6,r8,18880
	ctx.r6.s64 = ctx.r8.s64 + 18880;
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r6,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r6.u32);
	// stwx r29,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r29.u32);
	// b 0x82ab5cf4
	goto loc_82AB5CF4;
loc_82AB5CF0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82AB5CF4:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stb r29,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r29.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r30,r10,5760
	ctx.r30.s64 = ctx.r10.s64 + 5760;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// beq cr6,0x82ab5d2c
	if (ctx.cr6.eq) goto loc_82AB5D2C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AB5D28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
loc_82AB5D2C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// bl 0x83100488
	ctx.lr = 0x82AB5D3C;
	sub_83100488(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// stw r29,120(r27)
	PPC_STORE_U32(ctx.r27.u32 + 120, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ab3f90
	ctx.lr = 0x82AB5D50;
	sub_82AB3F90(ctx, base);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab5d7c
	if (ctx.cr6.eq) goto loc_82AB5D7C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AB5D7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AB5D7C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB5D88"))) PPC_WEAK_FUNC(sub_82AB5D88);
PPC_FUNC_IMPL(__imp__sub_82AB5D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82a9d3d0
	ctx.lr = 0x82AB5DA0;
	sub_82A9D3D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5DB0"))) PPC_WEAK_FUNC(sub_82AB5DB0);
PPC_FUNC_IMPL(__imp__sub_82AB5DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82827120
	ctx.lr = 0x82AB5DC8;
	sub_82827120(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5DD8"))) PPC_WEAK_FUNC(sub_82AB5DD8);
PPC_FUNC_IMPL(__imp__sub_82AB5DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ab5e0c
	if (ctx.cr6.eq) goto loc_82AB5E0C;
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rlwinm r8,r9,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r8.u32);
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// bl 0x82827120
	ctx.lr = 0x82AB5E0C;
	sub_82827120(ctx, base);
loc_82AB5E0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5E20"))) PPC_WEAK_FUNC(sub_82AB5E20);
PPC_FUNC_IMPL(__imp__sub_82AB5E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r11,18888
	ctx.r9.s64 = ctx.r11.s64 + 18888;
	// addi r8,r10,18880
	ctx.r8.s64 = ctx.r10.s64 + 18880;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82ab5350
	ctx.lr = 0x82AB5E58;
	sub_82AB5350(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82ab5e70
	if (ctx.cr6.eq) goto loc_82AB5E70;
	// bl 0x829e6d90
	ctx.lr = 0x82AB5E6C;
	sub_829E6D90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AB5E70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5E90"))) PPC_WEAK_FUNC(sub_82AB5E90);
PPC_FUNC_IMPL(__imp__sub_82AB5E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7dde0
	ctx.lr = 0x82AB5E98;
	__savegprlr_18(ctx, base);
	// addi r31,r1,-256
	ctx.r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,17612(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17612);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r24,r3,17616
	ctx.r24.s64 = ctx.r3.s64 + 17616;
	// mr r19,r26
	ctx.r19.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82ab60d8
	if (!ctx.cr6.gt) goto loc_82AB60D8;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// addi r18,r3,64
	ctx.r18.s64 = ctx.r3.s64 + 64;
	// addi r25,r3,204
	ctx.r25.s64 = ctx.r3.s64 + 204;
	// addi r21,r11,5768
	ctx.r21.s64 = ctx.r11.s64 + 5768;
	// addi r23,r10,-13140
	ctx.r23.s64 = ctx.r10.s64 + -13140;
	// addi r22,r9,5744
	ctx.r22.s64 = ctx.r9.s64 + 5744;
	// addi r20,r8,18092
	ctx.r20.s64 = ctx.r8.s64 + 18092;
loc_82AB5EE4:
	// lwz r29,0(r18)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r11,68(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ab5f4c
	if (ctx.cr6.eq) goto loc_82AB5F4C;
	// ld r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
loc_82AB5EF8:
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// ld r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 4);
	// cmpd cr6,r11,r10
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, ctx.xer);
	// beq cr6,0x82ab5f20
	if (ctx.cr6.eq) goto loc_82AB5F20;
	// lwz r10,68(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ab5ef8
	if (!ctx.cr6.eq) goto loc_82AB5EF8;
	// b 0x82ab5f4c
	goto loc_82AB5F4C;
loc_82AB5F20:
	// li r5,34
	ctx.r5.s64 = 34;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82a7d730
	ctx.lr = 0x82AB5F2C;
	sub_82A7D730(ctx, base);
	// addi r4,r30,56
	ctx.r4.s64 = ctx.r30.s64 + 56;
	// lhz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 36);
	// bl 0x82a92c70
	ctx.lr = 0x82AB5F38;
	sub_82A92C70(ctx, base);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lhz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 36);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82a7d730
	ctx.lr = 0x82AB5F4C;
	sub_82A7D730(ctx, base);
loc_82AB5F4C:
	// lwz r11,68(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ab60bc
	if (!ctx.cr6.eq) goto loc_82AB60BC;
	// li r3,140
	ctx.r3.s64 = 140;
	// bl 0x829e6d58
	ctx.lr = 0x82AB5F60;
	sub_829E6D58(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab5fb8
	if (ctx.cr6.eq) goto loc_82AB5FB8;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r22,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r22.u32);
	// addi r9,r3,56
	ctx.r9.s64 = ctx.r3.s64 + 56;
	// stw r26,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r26.u32);
	// addi r8,r3,96
	ctx.r8.s64 = ctx.r3.s64 + 96;
	// stb r26,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r26.u8);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r23,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r23.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r26,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r26.u32);
	// stw r8,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r8.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stb r26,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, ctx.r26.u8);
loc_82AB5FA0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82ab5fa0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AB5FA0;
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// stw r20,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r20.u32);
	// stw r26,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r26.u32);
	// b 0x82ab5fbc
	goto loc_82AB5FBC;
loc_82AB5FB8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82AB5FBC:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r21,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r21.u32);
	// stb r26,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r26.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// beq cr6,0x82ab5fec
	if (ctx.cr6.eq) goto loc_82AB5FEC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AB5FE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,100(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
loc_82AB5FEC:
	// addi r29,r30,96
	ctx.r29.s64 = ctx.r30.s64 + 96;
	// lwz r3,84(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r28,4(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// beq cr6,0x82ab6018
	if (ctx.cr6.eq) goto loc_82AB6018;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AB6018;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AB6018:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82ab6038
	if (ctx.cr6.eq) goto loc_82AB6038;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AB6038;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AB6038:
	// addi r3,r30,38
	ctx.r3.s64 = ctx.r30.s64 + 38;
	// bl 0x82a6ed60
	ctx.lr = 0x82AB6040;
	sub_82A6ED60(ctx, base);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// li r5,34
	ctx.r5.s64 = 34;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82a7d730
	ctx.lr = 0x82AB6050;
	sub_82A7D730(ctx, base);
	// addi r4,r30,56
	ctx.r4.s64 = ctx.r30.s64 + 56;
	// lhz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 36);
	// bl 0x82a92c70
	ctx.lr = 0x82AB605C;
	sub_82A92C70(ctx, base);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lhz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 36);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82a7d730
	ctx.lr = 0x82AB6070;
	sub_82A7D730(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82ab5920
	ctx.lr = 0x82AB607C;
	sub_82AB5920(ctx, base);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// beq cr6,0x82ab6098
	if (ctx.cr6.eq) goto loc_82AB6098;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// bl 0x82abd248
	ctx.lr = 0x82AB6098;
	sub_82ABD248(ctx, base);
loc_82AB6098:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r21,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r21.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab60bc
	if (ctx.cr6.eq) goto loc_82AB60BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AB60BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AB60BC:
	// lhz r11,32(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 32);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// lwz r10,17612(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17612);
	// addi r25,r25,34
	ctx.r25.s64 = ctx.r25.s64 + 34;
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmplw cr6,r19,r10
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ab5ee4
	if (ctx.cr6.lt) goto loc_82AB5EE4;
loc_82AB60D8:
	// bl 0x823f18b8
	ctx.lr = 0x82AB60DC;
	sub_823F18B8(ctx, base);
	// lwz r11,196(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 196);
	// mulli r10,r11,1000
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1000));
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// stw r9,200(r27)
	PPC_STORE_U32(ctx.r27.u32 + 200, ctx.r9.u32);
	// addi r1,r31,256
	ctx.r1.s64 = ctx.r31.s64 + 256;
	// b 0x82a7de30
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB60F4"))) PPC_WEAK_FUNC(sub_82AB60F4);
PPC_FUNC_IMPL(__imp__sub_82AB60F4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82827158
	ctx.lr = 0x82AB610C;
	sub_82827158(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6120"))) PPC_WEAK_FUNC(sub_82AB6120);
PPC_FUNC_IMPL(__imp__sub_82AB6120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddf8
	ctx.lr = 0x82AB6128;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,85(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 85);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab6150
	if (ctx.cr6.eq) goto loc_82AB6150;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,19528
	ctx.r3.s64 = ctx.r11.s64 + 19528;
	// bl 0x82a90570
	ctx.lr = 0x82AB6150;
	sub_82A90570(ctx, base);
loc_82AB6150:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82ab4740
	ctx.lr = 0x82AB615C;
	sub_82AB4740(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,85(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 85);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r25,196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq cr6,0x82ab6178
	if (ctx.cr6.eq) goto loc_82AB6178;
	// lwz r29,8(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x82ab619c
	goto loc_82AB619C;
loc_82AB6178:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r9,85(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 85);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ab6190
	if (ctx.cr6.eq) goto loc_82AB6190;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x82ab619c
	goto loc_82AB619C;
loc_82AB6190:
	// lwz r29,8(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r26
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82ab6288
	if (!ctx.cr6.eq) goto loc_82AB6288;
loc_82AB619C:
	// lbz r11,85(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 85);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ab61b0
	if (!ctx.cr6.eq) goto loc_82AB61B0;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_82AB61B0:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82ab61c8
	if (!ctx.cr6.eq) goto loc_82AB61C8;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// b 0x82ab61e0
	goto loc_82AB61E0;
loc_82AB61C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82ab61dc
	if (!ctx.cr6.eq) goto loc_82AB61DC;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// b 0x82ab61e0
	goto loc_82AB61E0;
loc_82AB61DC:
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_82AB61E0:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82ab6230
	if (!ctx.cr6.eq) goto loc_82AB6230;
	// lbz r11,85(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 85);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab6204
	if (ctx.cr6.eq) goto loc_82AB6204;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82ab622c
	goto loc_82AB622C;
loc_82AB6204:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lbz r8,85(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 85);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82ab622c
	if (!ctx.cr6.eq) goto loc_82AB622C;
loc_82AB6218:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,85(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 85);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82ab6218
	if (ctx.cr6.eq) goto loc_82AB6218;
loc_82AB622C:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82AB6230:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82ab631c
	if (!ctx.cr6.eq) goto loc_82AB631C;
	// lbz r11,85(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 85);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab6258
	if (ctx.cr6.eq) goto loc_82AB6258;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// b 0x82ab631c
	goto loc_82AB631C;
loc_82AB6258:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lbz r8,85(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 85);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82ab6280
	if (!ctx.cr6.eq) goto loc_82AB6280;
loc_82AB626C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,85(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 85);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82ab626c
	if (ctx.cr6.eq) goto loc_82AB626C;
loc_82AB6280:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82ab631c
	goto loc_82AB631C;
loc_82AB6288:
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ab62a8
	if (!ctx.cr6.eq) goto loc_82AB62A8;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x82ab62d0
	goto loc_82AB62D0;
loc_82AB62A8:
	// lbz r11,85(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 85);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ab62bc
	if (!ctx.cr6.eq) goto loc_82AB62BC;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_82AB62BC:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r25,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r25.u32);
loc_82AB62D0:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82ab62e8
	if (!ctx.cr6.eq) goto loc_82AB62E8;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x82ab6304
	goto loc_82AB6304;
loc_82AB62E8:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82ab6300
	if (!ctx.cr6.eq) goto loc_82AB6300;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x82ab6304
	goto loc_82AB6304;
loc_82AB6300:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_82AB6304:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r9,84(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 84);
	// lbz r10,84(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 84);
	// stb r9,84(r25)
	PPC_STORE_U8(ctx.r25.u32 + 84, ctx.r9.u8);
	// stb r10,84(r26)
	PPC_STORE_U8(ctx.r26.u32 + 84, ctx.r10.u8);
loc_82AB631C:
	// lbz r11,84(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 84);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82ab64b4
	if (!ctx.cr6.eq) goto loc_82AB64B4;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ab64b0
	if (ctx.cr6.eq) goto loc_82AB64B0;
loc_82AB6340:
	// lbz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 84);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82ab64b0
	if (!ctx.cr6.eq) goto loc_82AB64B0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ab63f8
	if (!ctx.cr6.eq) goto loc_82AB63F8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ab6380
	if (!ctx.cr6.eq) goto loc_82AB6380;
	// stb r30,84(r11)
	PPC_STORE_U8(ctx.r11.u32 + 84, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r28,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r28.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ab47d0
	ctx.lr = 0x82AB637C;
	sub_82AB47D0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82AB6380:
	// lbz r10,85(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 85);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ab644c
	if (!ctx.cr6.eq) goto loc_82AB644C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,84(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 84);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82ab63ac
	if (!ctx.cr6.eq) goto loc_82AB63AC;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,84(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 84);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// beq cr6,0x82ab6448
	if (ctx.cr6.eq) goto loc_82AB6448;
loc_82AB63AC:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,84(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 84);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x82ab63d4
	if (!ctx.cr6.eq) goto loc_82AB63D4;
	// stb r30,84(r10)
	PPC_STORE_U8(ctx.r10.u32 + 84, ctx.r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r28,84(r11)
	PPC_STORE_U8(ctx.r11.u32 + 84, ctx.r28.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ab4848
	ctx.lr = 0x82AB63D0;
	sub_82AB4848(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82AB63D4:
	// lbz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 84);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,84(r11)
	PPC_STORE_U8(ctx.r11.u32 + 84, ctx.r10.u8);
	// stb r30,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r30.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r30,84(r9)
	PPC_STORE_U8(ctx.r9.u32 + 84, ctx.r30.u8);
	// bl 0x82ab47d0
	ctx.lr = 0x82AB63F4;
	sub_82AB47D0(ctx, base);
	// b 0x82ab64b0
	goto loc_82AB64B0;
loc_82AB63F8:
	// lbz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ab641c
	if (!ctx.cr6.eq) goto loc_82AB641C;
	// stb r30,84(r11)
	PPC_STORE_U8(ctx.r11.u32 + 84, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r28,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r28.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ab4848
	ctx.lr = 0x82AB6418;
	sub_82AB4848(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82AB641C:
	// lbz r10,85(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 85);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ab644c
	if (!ctx.cr6.eq) goto loc_82AB644C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,84(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 84);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82ab6468
	if (!ctx.cr6.eq) goto loc_82AB6468;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,84(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 84);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x82ab6468
	if (!ctx.cr6.eq) goto loc_82AB6468;
loc_82AB6448:
	// stb r28,84(r11)
	PPC_STORE_U8(ctx.r11.u32 + 84, ctx.r28.u8);
loc_82AB644C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ab6340
	if (!ctx.cr6.eq) goto loc_82AB6340;
	// b 0x82ab64b0
	goto loc_82AB64B0;
loc_82AB6468:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,84(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 84);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x82ab6490
	if (!ctx.cr6.eq) goto loc_82AB6490;
	// stb r30,84(r10)
	PPC_STORE_U8(ctx.r10.u32 + 84, ctx.r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r28,84(r11)
	PPC_STORE_U8(ctx.r11.u32 + 84, ctx.r28.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ab47d0
	ctx.lr = 0x82AB648C;
	sub_82AB47D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82AB6490:
	// lbz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 84);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,84(r11)
	PPC_STORE_U8(ctx.r11.u32 + 84, ctx.r10.u8);
	// stb r30,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r30.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r30,84(r9)
	PPC_STORE_U8(ctx.r9.u32 + 84, ctx.r30.u8);
	// bl 0x82ab4848
	ctx.lr = 0x82AB64B0;
	sub_82AB4848(ctx, base);
loc_82AB64B0:
	// stb r30,84(r29)
	PPC_STORE_U8(ctx.r29.u32 + 84, ctx.r30.u8);
loc_82AB64B4:
	// lwz r11,68(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 68);
	// addi r31,r26,16
	ctx.r31.s64 = ctx.r26.s64 + 16;
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82ab64d0
	if (ctx.cr6.lt) goto loc_82AB64D0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823fd208
	ctx.lr = 0x82AB64D0;
	sub_823FD208(ctx, base);
loc_82AB64D0:
	// li r29,7
	ctx.r29.s64 = 7;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// sth r28,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r28.u16);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82ab64f8
	if (ctx.cr6.lt) goto loc_82AB64F8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823fd208
	ctx.lr = 0x82AB64F8;
	sub_823FD208(ctx, base);
loc_82AB64F8:
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// sth r28,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r28.u16);
	// bl 0x823fd208
	ctx.lr = 0x82AB650C;
	sub_823FD208(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab6520
	if (ctx.cr6.eq) goto loc_82AB6520;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_82AB6520:
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB6530"))) PPC_WEAK_FUNC(sub_82AB6530);
PPC_FUNC_IMPL(__imp__sub_82AB6530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddfc
	ctx.lr = 0x82AB6538;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,85(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 85);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ab65d0
	if (!ctx.cr6.eq) goto loc_82AB65D0;
	// li r26,7
	ctx.r26.s64 = 7;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82AB655C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82ab6530
	ctx.lr = 0x82AB6568;
	sub_82AB6530(ctx, base);
	// lwz r11,68(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// addi r31,r27,16
	ctx.r31.s64 = ctx.r27.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// blt cr6,0x82ab6588
	if (ctx.cr6.lt) goto loc_82AB6588;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823fd208
	ctx.lr = 0x82AB6588;
	sub_823FD208(ctx, base);
loc_82AB6588:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stw r26,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r26.u32);
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// sth r28,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r28.u16);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82ab65ac
	if (ctx.cr6.lt) goto loc_82AB65AC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823fd208
	ctx.lr = 0x82AB65AC;
	sub_823FD208(ctx, base);
loc_82AB65AC:
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// sth r28,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r28.u16);
	// bl 0x823fd208
	ctx.lr = 0x82AB65C0;
	sub_823FD208(ctx, base);
	// lbz r11,85(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 85);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab655c
	if (ctx.cr6.eq) goto loc_82AB655C;
loc_82AB65D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB65D8"))) PPC_WEAK_FUNC(sub_82AB65D8);
PPC_FUNC_IMPL(__imp__sub_82AB65D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddf8
	ctx.lr = 0x82AB65E0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,4(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r25,r5,12
	ctx.r25.s64 = ctx.r5.s64 + 12;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// lbz r10,85(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 85);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ab6668
	if (!ctx.cr6.eq) goto loc_82AB6668;
	// lbz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_82AB661C:
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82ab6638
	if (ctx.cr6.eq) goto loc_82AB6638;
	// subfc r10,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subfze r31,r8
	temp.u8 = ~ctx.r8.u32 + ctx.xer.ca < ~ctx.r8.u32;
	ctx.r31.u64 = ~ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82ab6644
	goto loc_82AB6644;
loc_82AB6638:
	// subfc r6,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r9.u64 - ctx.r10.u64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r31,r4,31
	ctx.r31.u64 = ctx.r4.u32 & 0x1;
loc_82AB6644:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ab6658
	if (ctx.cr6.eq) goto loc_82AB6658;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82ab665c
	goto loc_82AB665C;
loc_82AB6658:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82AB665C:
	// lbz r10,85(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 85);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ab661c
	if (ctx.cr6.eq) goto loc_82AB661C;
loc_82AB6668:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab66c8
	if (ctx.cr6.eq) goto loc_82AB66C8;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ab66c0
	if (!ctx.cr6.eq) goto loc_82AB66C0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82ab5a78
	ctx.lr = 0x82AB66A4;
	sub_82AB5A78(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r24,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r24.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de48
	__restgprlr_24(ctx, base);
	return;
loc_82AB66C0:
	// bl 0x82ab42f8
	ctx.lr = 0x82AB66C4;
	sub_82AB42F8(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82AB66C8:
	// lbz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 12);
	// lbz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ab670c
	if (!ctx.cr6.lt) goto loc_82AB670C;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ab5a78
	ctx.lr = 0x82AB66F0;
	sub_82AB5A78(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r24,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r24.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de48
	__restgprlr_24(ctx, base);
	return;
loc_82AB670C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r27,13
	ctx.r3.s64 = ctx.r27.s64 + 13;
	// bl 0x82ab5a10
	ctx.lr = 0x82AB6718;
	sub_82AB5A10(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823fd208
	ctx.lr = 0x82AB6720;
	sub_823FD208(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB6740"))) PPC_WEAK_FUNC(sub_82AB6740);
PPC_FUNC_IMPL(__imp__sub_82AB6740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x82a7de08
	ctx.lr = 0x82AB6750;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r5,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r5.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r6,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r6.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r5,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r5.u32);
loc_82AB6770:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82ab67a4
	if (ctx.cr6.eq) goto loc_82AB67A4;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ab6794
	if (ctx.cr6.eq) goto loc_82AB6794;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8282e550
	ctx.lr = 0x82AB6790;
	sub_8282E550(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82AB6794:
	// addi r30,r30,68
	ctx.r30.s64 = ctx.r30.s64 + 68;
	// addi r29,r29,68
	ctx.r29.s64 = ctx.r29.s64 + 68;
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// b 0x82ab6770
	goto loc_82AB6770;
loc_82AB67A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB67B8"))) PPC_WEAK_FUNC(sub_82AB67B8);
PPC_FUNC_IMPL(__imp__sub_82AB67B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r29,164(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82ab67f4
	if (ctx.cr6.eq) goto loc_82AB67F4;
	// lwz r28,172(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
loc_82AB67DC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82830610
	ctx.lr = 0x82AB67E8;
	sub_82830610(ctx, base);
	// addi r30,r30,68
	ctx.r30.s64 = ctx.r30.s64 + 68;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82ab67dc
	if (!ctx.cr6.eq) goto loc_82AB67DC;
loc_82AB67F4:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a84dc0
	ctx.lr = 0x82AB6800;
	sub_82A84DC0(ctx, base);
}

__attribute__((alias("__imp__sub_82AB6800"))) PPC_WEAK_FUNC(sub_82AB6800);
PPC_FUNC_IMPL(__imp__sub_82AB6800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830b2320
	ctx.lr = 0x82AB681C;
	sub_830B2320(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6838"))) PPC_WEAK_FUNC(sub_82AB6838);
PPC_FUNC_IMPL(__imp__sub_82AB6838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r4,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r4.u32);
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ab6878
	if (ctx.cr6.eq) goto loc_82AB6878;
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r4,r5,4
	ctx.r4.s64 = ctx.r5.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// bl 0x8282e550
	ctx.lr = 0x82AB6874;
	sub_8282E550(ctx, base);
	// b 0x82ab6878
	goto loc_82AB6878;
loc_82AB6878:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB688C"))) PPC_WEAK_FUNC(sub_82AB688C);
PPC_FUNC_IMPL(__imp__sub_82AB688C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830b2320
	ctx.lr = 0x82AB68A8;
	sub_830B2320(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB68B8"))) PPC_WEAK_FUNC(sub_82AB68B8);
PPC_FUNC_IMPL(__imp__sub_82AB68B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82ab6530
	ctx.lr = 0x82AB68D8;
	sub_82AB6530(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r7.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6918"))) PPC_WEAK_FUNC(sub_82AB6918);
PPC_FUNC_IMPL(__imp__sub_82AB6918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// stw r4,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ab694c
	if (ctx.cr6.eq) goto loc_82AB694C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8282e550
	ctx.lr = 0x82AB6948;
	sub_8282E550(ctx, base);
	// b 0x82ab694c
	goto loc_82AB694C;
loc_82AB694C:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6960"))) PPC_WEAK_FUNC(sub_82AB6960);
PPC_FUNC_IMPL(__imp__sub_82AB6960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830b2320
	ctx.lr = 0x82AB697C;
	sub_830B2320(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6990"))) PPC_WEAK_FUNC(sub_82AB6990);
PPC_FUNC_IMPL(__imp__sub_82AB6990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82AB6998;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ab69e4
	if (!ctx.cr6.eq) goto loc_82AB69E4;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ab69e4
	if (!ctx.cr6.eq) goto loc_82AB69E4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82ab68b8
	ctx.lr = 0x82AB69CC;
	sub_82AB68B8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
loc_82AB69E4:
	// cmplw cr6,r5,r30
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82ab6a14
	if (ctx.cr6.eq) goto loc_82AB6A14;
loc_82AB69EC:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82ab4740
	ctx.lr = 0x82AB69F8;
	sub_82AB4740(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ab6120
	ctx.lr = 0x82AB6A08;
	sub_82AB6120(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r5,r30
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ab69ec
	if (!ctx.cr6.eq) goto loc_82AB69EC;
loc_82AB6A14:
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB6A30"))) PPC_WEAK_FUNC(sub_82AB6A30);
PPC_FUNC_IMPL(__imp__sub_82AB6A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x82a7de08
	ctx.lr = 0x82AB6A40;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82ab4ca0
	ctx.lr = 0x82AB6A54;
	sub_82AB4CA0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r30,13
	ctx.r3.s64 = ctx.r30.s64 + 13;
	// bl 0x82ab6838
	ctx.lr = 0x82AB6A6C;
	sub_82AB6838(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB6A84"))) PPC_WEAK_FUNC(sub_82AB6A84);
PPC_FUNC_IMPL(__imp__sub_82AB6A84) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x823fd208
	ctx.lr = 0x82AB6A9C;
	sub_823FD208(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a84dc0
	ctx.lr = 0x82AB6AA8;
	sub_82A84DC0(ctx, base);
}

__attribute__((alias("__imp__sub_82AB6AB0"))) PPC_WEAK_FUNC(sub_82AB6AB0);
PPC_FUNC_IMPL(__imp__sub_82AB6AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x82a7de00
	ctx.lr = 0x82AB6AC0;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,963
	ctx.r11.s64 = 63111168;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r10,r11,50115
	ctx.r10.u64 = ctx.r11.u64 | 50115;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ab6aec
	if (!ctx.cr6.gt) goto loc_82AB6AEC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,18928
	ctx.r3.s64 = ctx.r11.s64 + 18928;
	// bl 0x82a90538
	ctx.lr = 0x82AB6AEC;
	sub_82A90538(ctx, base);
loc_82AB6AEC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r27,68
	ctx.r27.s64 = 68;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// divw r8,r9,r27
	ctx.r8.s32 = (ctx.r27.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r27.s32 == -1)) ? ctx.r9.s32 / ctx.r27.s32 : 0;
	// cmplw cr6,r8,r26
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x82ab6b90
	if (!ctx.cr6.lt) goto loc_82AB6B90;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c3fe70
	ctx.lr = 0x82AB6B14;
	sub_82C3FE70(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// lbz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// addi r28,r30,12
	ctx.r28.s64 = ctx.r30.s64 + 12;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stb r8,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r8.u8);
	// bl 0x82ab6740
	ctx.lr = 0x82AB6B40;
	sub_82AB6740(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// subf r11,r3,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r3.u64;
	// divw r27,r11,r27
	ctx.r27.s32 = (ctx.r27.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r27.s32 == -1)) ? ctx.r11.s32 / ctx.r27.s32 : 0;
	// beq cr6,0x82ab6b74
	if (ctx.cr6.eq) goto loc_82AB6B74;
	// lbz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stb r6,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r6.u8);
	// bl 0x82831f50
	ctx.lr = 0x82AB6B6C;
	sub_82831F50(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823fd208
	ctx.lr = 0x82AB6B74;
	sub_823FD208(ctx, base);
loc_82AB6B74:
	// mulli r11,r26,68
	ctx.r11.s64 = static_cast<int64_t>(ctx.r26.u64 * static_cast<uint64_t>(68));
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// mulli r10,r27,68
	ctx.r10.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(68));
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_82AB6B90:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82a7de50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB6BA0"))) PPC_WEAK_FUNC(sub_82AB6BA0);
PPC_FUNC_IMPL(__imp__sub_82AB6BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x823fd208
	ctx.lr = 0x82AB6BB8;
	sub_823FD208(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a84dc0
	ctx.lr = 0x82AB6BC4;
	sub_82A84DC0(ctx, base);
}

__attribute__((alias("__imp__sub_82AB6BD0"))) PPC_WEAK_FUNC(sub_82AB6BD0);
PPC_FUNC_IMPL(__imp__sub_82AB6BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stw r6,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r6.u32);
	// stw r6,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r6.u32);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82ab6990
	ctx.lr = 0x82AB6C0C;
	sub_82AB6990(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x823fd208
	ctx.lr = 0x82AB6C14;
	sub_823FD208(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6C2C"))) PPC_WEAK_FUNC(sub_82AB6C2C);
PPC_FUNC_IMPL(__imp__sub_82AB6C2C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x82aa3668
	ctx.lr = 0x82AB6C44;
	sub_82AA3668(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6C58"))) PPC_WEAK_FUNC(sub_82AB6C58);
PPC_FUNC_IMPL(__imp__sub_82AB6C58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,963
	ctx.r10.s64 = 63111168;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,68
	ctx.r9.s64 = 68;
	// ori r8,r10,50115
	ctx.r8.u64 = ctx.r10.u64 | 50115;
	// subf r6,r11,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subf r5,r4,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r4.u64;
	// divw r10,r6,r9
	ctx.r10.s32 = (ctx.r9.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r6.s32 / ctx.r9.s32 : 0;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ab6c8c
	if (!ctx.cr6.lt) goto loc_82AB6C8C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,18928
	ctx.r3.s64 = ctx.r11.s64 + 18928;
	// b 0x82a90538
	sub_82A90538(ctx, base);
	return;
loc_82AB6C8C:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r6,r11,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r11.u64;
	// divw r11,r6,r9
	ctx.r11.s32 = (ctx.r9.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r6.s32 / ctx.r9.s32 : 0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ab6cbc
	if (ctx.cr6.lt) goto loc_82AB6CBC;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82AB6CBC:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ab6cc8
	if (!ctx.cr6.lt) goto loc_82AB6CC8;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82AB6CC8:
	// b 0x82ab6ab0
	sub_82AB6AB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB6CCC"))) PPC_WEAK_FUNC(sub_82AB6CCC);
PPC_FUNC_IMPL(__imp__sub_82AB6CCC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6CD0"))) PPC_WEAK_FUNC(sub_82AB6CD0);
PPC_FUNC_IMPL(__imp__sub_82AB6CD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ab6bd0
	sub_82AB6BD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB6CD8"))) PPC_WEAK_FUNC(sub_82AB6CD8);
PPC_FUNC_IMPL(__imp__sub_82AB6CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ab6d10
	if (!ctx.cr6.lt) goto loc_82AB6D10;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82ab6d14
	if (!ctx.cr6.gt) goto loc_82AB6D14;
loc_82AB6D10:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82AB6D14:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ab6d64
	if (ctx.cr6.eq) goto loc_82AB6D64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,68
	ctx.r9.s64 = 68;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.u64 = ctx.r30.u64 - ctx.r10.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// divw r30,r7,r9
	ctx.r30.s32 = (ctx.r9.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r7.s32 / ctx.r9.s32 : 0;
	// bne cr6,0x82ab6d48
	if (!ctx.cr6.eq) goto loc_82AB6D48;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ab6c58
	ctx.lr = 0x82AB6D48;
	sub_82AB6C58(ctx, base);
loc_82AB6D48:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,68
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(68));
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82830690
	ctx.lr = 0x82AB6D60;
	sub_82830690(ctx, base);
	// b 0x82ab6d8c
	goto loc_82AB6D8C;
loc_82AB6D64:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ab6d7c
	if (!ctx.cr6.eq) goto loc_82AB6D7C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ab6c58
	ctx.lr = 0x82AB6D7C;
	sub_82AB6C58(ctx, base);
loc_82AB6D7C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82ab6918
	ctx.lr = 0x82AB6D8C;
	sub_82AB6918(ctx, base);
loc_82AB6D8C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 + 68;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6DB8"))) PPC_WEAK_FUNC(sub_82AB6DB8);
PPC_FUNC_IMPL(__imp__sub_82AB6DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddf8
	ctx.lr = 0x82AB6DC0;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-400
	ctx.r31.s64 = ctx.r1.s64 + -400;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r4,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r4.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82ab6df0
	if (ctx.cr6.gt) goto loc_82AB6DF0;
	// addi r4,r31,428
	ctx.r4.s64 = ctx.r31.s64 + 428;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x82aae090
	ctx.lr = 0x82AB6DEC;
	sub_82AAE090(ctx, base);
	// b 0x82ab7094
	goto loc_82AB7094;
loc_82AB6DF0:
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82ab4e58
	ctx.lr = 0x82AB6E00;
	sub_82AB4E58(ctx, base);
	// addis r26,r25,1
	ctx.r26.s64 = ctx.r25.s64 + 65536;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r26,r26,6524
	ctx.r26.s64 = ctx.r26.s64 + 6524;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82ab6f08
	if (!ctx.cr6.gt) goto loc_82AB6F08;
	// addis r29,r25,1
	ctx.r29.s64 = ctx.r25.s64 + 65536;
	// li r30,7
	ctx.r30.s64 = 7;
	// addi r29,r29,3416
	ctx.r29.s64 = ctx.r29.s64 + 3416;
loc_82AB6E28:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r7,512(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 512);
	// addi r5,r29,-128
	ctx.r5.s64 = ctx.r29.s64 + -128;
	// lwz r4,-132(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -132);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x82ab5808
	ctx.lr = 0x82AB6E40;
	sub_82AB5808(ctx, base);
	// lwz r11,-132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -132);
	// addi r4,r31,256
	ctx.r4.s64 = ctx.r31.s64 + 256;
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// stb r11,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r11.u8);
	// bl 0x8282e550
	ctx.lr = 0x82AB6E54;
	sub_8282E550(ctx, base);
	// addi r4,r31,176
	ctx.r4.s64 = ctx.r31.s64 + 176;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82ab6a30
	ctx.lr = 0x82AB6E60;
	sub_82AB6A30(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ab65d8
	ctx.lr = 0x82AB6E74;
	sub_82AB65D8(ctx, base);
	// lwz r9,232(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// blt cr6,0x82ab6e88
	if (ctx.cr6.lt) goto loc_82AB6E88;
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// bl 0x823fd208
	ctx.lr = 0x82AB6E88;
	sub_823FD208(ctx, base);
loc_82AB6E88:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// stw r30,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// stw r27,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r27.u32);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// sth r27,212(r31)
	PPC_STORE_U16(ctx.r31.u32 + 212, ctx.r27.u16);
	// blt cr6,0x82ab6ea8
	if (ctx.cr6.lt) goto loc_82AB6EA8;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x823fd208
	ctx.lr = 0x82AB6EA8;
	sub_823FD208(ctx, base);
loc_82AB6EA8:
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// stw r27,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r27.u32);
	// sth r27,184(r31)
	PPC_STORE_U16(ctx.r31.u32 + 184, ctx.r27.u16);
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82ab6ec8
	if (ctx.cr6.lt) goto loc_82AB6EC8;
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// bl 0x823fd208
	ctx.lr = 0x82AB6EC8;
	sub_823FD208(ctx, base);
loc_82AB6EC8:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// stw r30,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r30.u32);
	// stw r27,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r27.u32);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// sth r27,288(r31)
	PPC_STORE_U16(ctx.r31.u32 + 288, ctx.r27.u16);
	// blt cr6,0x82ab6ee8
	if (ctx.cr6.lt) goto loc_82AB6EE8;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x823fd208
	ctx.lr = 0x82AB6EE8;
	sub_823FD208(ctx, base);
loc_82AB6EE8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
	// addi r29,r29,648
	ctx.r29.s64 = ctx.r29.s64 + 648;
	// stw r27,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r27.u32);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// sth r27,260(r31)
	PPC_STORE_U16(ctx.r31.u32 + 260, ctx.r27.u16);
	// blt cr6,0x82ab6e28
	if (ctx.cr6.lt) goto loc_82AB6E28;
loc_82AB6F08:
	// lwz r29,64(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 64);
	// lwz r11,68(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 68);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ab6fe4
	if (ctx.cr6.eq) goto loc_82AB6FE4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r28,r11,5768
	ctx.r28.s64 = ctx.r11.s64 + 5768;
loc_82AB6F20:
	// stw r28,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r28.u32);
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stb r27,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r27.u8);
	// beq cr6,0x82ab6f54
	if (ctx.cr6.eq) goto loc_82AB6F54;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AB6F50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
loc_82AB6F54:
	// lbz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// stb r10,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r10.u8);
	// bl 0x82ab4f68
	ctx.lr = 0x82AB6F70;
	sub_82AB4F68(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82ab6fb0
	if (ctx.cr6.eq) goto loc_82AB6FB0;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lhz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 64);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,64(r11)
	PPC_STORE_U16(ctx.r11.u32 + 64, ctx.r10.u16);
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lbz r7,23(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82ab6fb0
	if (!ctx.cr6.eq) goto loc_82AB6FB0;
	// lhz r10,66(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 66);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,66(r11)
	PPC_STORE_U16(ctx.r11.u32 + 66, ctx.r10.u16);
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
loc_82AB6FB0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r28,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r28.u32);
	// beq cr6,0x82ab6fd4
	if (ctx.cr6.eq) goto loc_82AB6FD4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AB6FD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AB6FD4:
	// lwz r11,68(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 68);
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ab6f20
	if (!ctx.cr6.eq) goto loc_82AB6F20;
loc_82AB6FE4:
	// stw r27,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// stw r27,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r27.u32);
	// stw r27,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r27.u32);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// beq cr6,0x82ab7028
	if (ctx.cr6.eq) goto loc_82AB7028;
loc_82AB7004:
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82ab6cd8
	ctx.lr = 0x82AB7010;
	sub_82AB6CD8(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82ab4740
	ctx.lr = 0x82AB7018;
	sub_82AB4740(ctx, base);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ab7004
	if (!ctx.cr6.eq) goto loc_82AB7004;
loc_82AB7028:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AB7040;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab7068
	if (ctx.cr6.eq) goto loc_82AB7068;
	// lbz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// addi r5,r31,108
	ctx.r5.s64 = ctx.r31.s64 + 108;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stb r6,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r6.u8);
	// bl 0x82831f50
	ctx.lr = 0x82AB7060;
	sub_82831F50(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x823fd208
	ctx.lr = 0x82AB7068;
	sub_823FD208(ctx, base);
loc_82AB7068:
	// stw r27,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// stw r27,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r27.u32);
	// stw r27,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r27.u32);
	// lwz r6,116(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// stw r6,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r6.u32);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82ab6990
	ctx.lr = 0x82AB708C;
	sub_82AB6990(ctx, base);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x823fd208
	ctx.lr = 0x82AB7094;
	sub_823FD208(ctx, base);
loc_82AB7094:
	// addi r1,r31,400
	ctx.r1.s64 = ctx.r31.s64 + 400;
	// b 0x82a7de48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB709C"))) PPC_WEAK_FUNC(sub_82AB709C);
PPC_FUNC_IMPL(__imp__sub_82AB709C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-400
	ctx.r31.s64 = ctx.r12.s64 + -400;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82ab6cd0
	ctx.lr = 0x82AB70B4;
	sub_82AB6CD0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB70C4"))) PPC_WEAK_FUNC(sub_82AB70C4);
PPC_FUNC_IMPL(__imp__sub_82AB70C4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-400
	ctx.r31.s64 = ctx.r12.s64 + -400;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x8282be48
	ctx.lr = 0x82AB70DC;
	sub_8282BE48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB70EC"))) PPC_WEAK_FUNC(sub_82AB70EC);
PPC_FUNC_IMPL(__imp__sub_82AB70EC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-400
	ctx.r31.s64 = ctx.r12.s64 + -400;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x82ab4f00
	ctx.lr = 0x82AB7104;
	sub_82AB4F00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7114"))) PPC_WEAK_FUNC(sub_82AB7114);
PPC_FUNC_IMPL(__imp__sub_82AB7114) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-400
	ctx.r31.s64 = ctx.r12.s64 + -400;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8283bbf8
	ctx.lr = 0x82AB712C;
	sub_8283BBF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB713C"))) PPC_WEAK_FUNC(sub_82AB713C);
PPC_FUNC_IMPL(__imp__sub_82AB713C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-400
	ctx.r31.s64 = ctx.r12.s64 + -400;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82aa3668
	ctx.lr = 0x82AB7154;
	sub_82AA3668(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7168"))) PPC_WEAK_FUNC(sub_82AB7168);
PPC_FUNC_IMPL(__imp__sub_82AB7168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82AB7170;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82ab719c
	if (ctx.cr6.eq) goto loc_82AB719C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82ab722c
	if (ctx.cr6.eq) goto loc_82AB722C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82ab7268
	if (ctx.cr6.eq) goto loc_82AB7268;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
loc_82AB719C:
	// bl 0x82ab4940
	ctx.lr = 0x82AB71A0;
	sub_82AB4940(ctx, base);
	// addis r6,r31,1
	ctx.r6.s64 = ctx.r31.s64 + 65536;
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// addi r6,r6,6524
	ctx.r6.s64 = ctx.r6.s64 + 6524;
	// addi r5,r5,3284
	ctx.r5.s64 = ctx.r5.s64 + 3284;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82ab3ec0
	ctx.lr = 0x82AB71B8;
	sub_82AB3EC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab7298
	if (ctx.cr6.eq) goto loc_82AB7298;
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r28,r31,48
	ctx.r28.s64 = ctx.r31.s64 + 48;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ab71fc
	if (ctx.cr6.eq) goto loc_82AB71FC;
loc_82AB71E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82ab6db8
	ctx.lr = 0x82AB71EC;
	sub_82AB6DB8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ab71e0
	if (!ctx.cr6.eq) goto loc_82AB71E0;
loc_82AB71FC:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82ab722c
	if (ctx.cr6.eq) goto loc_82AB722C;
	// subf r11,r4,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a7dca0
	ctx.lr = 0x82AB7224;
	sub_82A7DCA0(ctx, base);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
loc_82AB722C:
	// bl 0x82ab4940
	ctx.lr = 0x82AB7230;
	sub_82AB4940(ctx, base);
	// addi r30,r31,196
	ctx.r30.s64 = ctx.r31.s64 + 196;
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82ab3da8
	ctx.lr = 0x82AB7240;
	sub_82AB3DA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab7298
	if (ctx.cr6.eq) goto loc_82AB7298;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// bl 0x823f18b8
	ctx.lr = 0x82AB7258;
	sub_823F18B8(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r9,r10,1000
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(1000));
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// stw r8,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r8.u32);
loc_82AB7268:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ab7298
	if (!ctx.cr6.eq) goto loc_82AB7298;
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab7298
	if (ctx.cr6.eq) goto loc_82AB7298;
	// bl 0x823f18b8
	ctx.lr = 0x82AB7284;
	sub_823F18B8(ctx, base);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82ab7298
	if (!ctx.cr6.lt) goto loc_82AB7298;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ab3cf0
	ctx.lr = 0x82AB7298;
	sub_82AB3CF0(ctx, base);
loc_82AB7298:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB72A0"))) PPC_WEAK_FUNC(sub_82AB72A0);
PPC_FUNC_IMPL(__imp__sub_82AB72A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab72bc
	if (ctx.cr6.eq) goto loc_82AB72BC;
	// bl 0x82ab7168
	ctx.lr = 0x82AB72BC;
	sub_82AB7168(ctx, base);
loc_82AB72BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB72D0"))) PPC_WEAK_FUNC(sub_82AB72D0);
PPC_FUNC_IMPL(__imp__sub_82AB72D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82ab7310
	if (ctx.cr6.eq) goto loc_82AB7310;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// blt cr6,0x82ab7304
	if (ctx.cr6.lt) goto loc_82AB7304;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82ab7308
	goto loc_82AB7308;
loc_82AB7304:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_82AB7308:
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AB7310;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AB7310:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7328"))) PPC_WEAK_FUNC(sub_82AB7328);
PPC_FUNC_IMPL(__imp__sub_82AB7328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r10,r11,-7944
	ctx.r10.s64 = ctx.r11.s64 + -7944;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82ab7348
	if (ctx.cr6.eq) goto loc_82AB7348;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// blr 
	return;
loc_82AB7348:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7358"))) PPC_WEAK_FUNC(sub_82AB7358);
PPC_FUNC_IMPL(__imp__sub_82AB7358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab73d8
	if (ctx.cr6.eq) goto loc_82AB73D8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AB7394;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AB73B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82ab73e4
	if (!ctx.cr6.lt) goto loc_82AB73E4;
loc_82AB73BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AB73D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82ab73ec
	goto loc_82AB73EC;
loc_82AB73D8:
	// lis r4,-32688
	ctx.r4.s64 = -2142240768;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// b 0x82ab73bc
	goto loc_82AB73BC;
loc_82AB73E4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82AB73EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7408"))) PPC_WEAK_FUNC(sub_82AB7408);
PPC_FUNC_IMPL(__imp__sub_82AB7408) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82ab7420
	if (!ctx.cr6.eq) goto loc_82AB7420;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
loc_82AB7420:
	// b 0x830fd938
	sub_830FD938(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB7428"))) PPC_WEAK_FUNC(sub_82AB7428);
PPC_FUNC_IMPL(__imp__sub_82AB7428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-912(r1)
	ea = -912 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82ab74a4
	if (!ctx.cr6.gt) goto loc_82AB74A4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x830fda20
	ctx.lr = 0x82AB7448;
	sub_830FDA20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ab74a4
	if (ctx.cr6.lt) goto loc_82AB74A4;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82ab74a4
	if (ctx.cr6.gt) goto loc_82AB74A4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab74a4
	if (ctx.cr6.eq) goto loc_82AB74A4;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f1,f10,f9
	ctx.f1.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AB74A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3392(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3392);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB74C0"))) PPC_WEAK_FUNC(sub_82AB74C0);
PPC_FUNC_IMPL(__imp__sub_82AB74C0) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82AB74F0"))) PPC_WEAK_FUNC(sub_82AB74F0);
PPC_FUNC_IMPL(__imp__sub_82AB74F0) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82AB7520"))) PPC_WEAK_FUNC(sub_82AB7520);
PPC_FUNC_IMPL(__imp__sub_82AB7520) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r8,r10,19864
	ctx.r8.s64 = ctx.r10.s64 + 19864;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7550"))) PPC_WEAK_FUNC(sub_82AB7550);
PPC_FUNC_IMPL(__imp__sub_82AB7550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,19864
	ctx.r9.s64 = ctx.r11.s64 + 19864;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// bne cr6,0x82ab758c
	if (!ctx.cr6.eq) goto loc_82AB758C;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82ab758c
	if (ctx.cr6.eq) goto loc_82AB758C;
	// bl 0x830fd938
	ctx.lr = 0x82AB758C;
	sub_830FD938(ctx, base);
loc_82AB758C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82a91f78
	ctx.lr = 0x82AB7594;
	sub_82A91F78(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab75ac
	if (ctx.cr6.eq) goto loc_82AB75AC;
	// bl 0x823fd208
	ctx.lr = 0x82AB75AC;
	sub_823FD208(ctx, base);
loc_82AB75AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB75C0"))) PPC_WEAK_FUNC(sub_82AB75C0);
PPC_FUNC_IMPL(__imp__sub_82AB75C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab7644
	if (ctx.cr6.eq) goto loc_82AB7644;
	// bl 0x82a91f08
	ctx.lr = 0x82AB75E8;
	sub_82A91F08(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ab7604
	if (ctx.cr6.lt) goto loc_82AB7604;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82ab7644
	if (ctx.cr6.eq) goto loc_82AB7644;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82ab7644
	if (ctx.cr6.eq) goto loc_82AB7644;
loc_82AB7604:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82a91f78
	ctx.lr = 0x82AB760C;
	sub_82A91F78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// blt cr6,0x82ab7628
	if (ctx.cr6.lt) goto loc_82AB7628;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// b 0x82ab7644
	goto loc_82AB7644;
loc_82AB7628:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AB7644;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AB7644:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7660"))) PPC_WEAK_FUNC(sub_82AB7660);
PPC_FUNC_IMPL(__imp__sub_82AB7660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82ab7550
	ctx.lr = 0x82AB7680;
	sub_82AB7550(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab7698
	if (ctx.cr6.eq) goto loc_82AB7698;
	// bl 0x823fd208
	ctx.lr = 0x82AB7694;
	sub_823FD208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AB7698:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB76B0"))) PPC_WEAK_FUNC(sub_82AB76B0);
PPC_FUNC_IMPL(__imp__sub_82AB76B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82ab7710
	if (ctx.cr6.eq) goto loc_82AB7710;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82ab7718
	if (!ctx.cr6.eq) goto loc_82AB7718;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AB76E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ab7718
	if (ctx.cr6.eq) goto loc_82AB7718;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82AB7710:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ab75c0
	ctx.lr = 0x82AB7718;
	sub_82AB75C0(ctx, base);
loc_82AB7718:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7730"))) PPC_WEAK_FUNC(sub_82AB7730);
PPC_FUNC_IMPL(__imp__sub_82AB7730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// subf. r5,r4,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82ab7790
	if (ctx.cr0.eq) goto loc_82AB7790;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x830fd620
	ctx.lr = 0x82AB776C;
	sub_830FD620(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82ab77a8
	if (!ctx.cr6.lt) goto loc_82AB77A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AB7790;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AB7790:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82AB77A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB77C0"))) PPC_WEAK_FUNC(sub_82AB77C0);
PPC_FUNC_IMPL(__imp__sub_82AB77C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// subf r3,r10,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB77D0"))) PPC_WEAK_FUNC(sub_82AB77D0);
PPC_FUNC_IMPL(__imp__sub_82AB77D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,19884
	ctx.r10.s64 = ctx.r11.s64 + 19884;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ab7808
	if (ctx.cr6.eq) goto loc_82AB7808;
	// bl 0x823fd208
	ctx.lr = 0x82AB7808;
	sub_823FD208(ctx, base);
loc_82AB7808:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x82ab7550
	ctx.lr = 0x82AB7820;
	sub_82AB7550(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ab7838
	if (ctx.cr6.eq) goto loc_82AB7838;
	// bl 0x823fd208
	ctx.lr = 0x82AB7834;
	sub_823FD208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AB7838:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7858"))) PPC_WEAK_FUNC(sub_82AB7858);
PPC_FUNC_IMPL(__imp__sub_82AB7858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82AB7860;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82ab7520
	ctx.lr = 0x82AB787C;
	sub_82AB7520(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,19884
	ctx.r9.s64 = ctx.r10.s64 + 19884;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82564218
	ctx.lr = 0x82AB78A8;
	sub_82564218(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82a7d730
	ctx.lr = 0x82AB78B8;
	sub_82A7D730(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB78C4"))) PPC_WEAK_FUNC(sub_82AB78C4);
PPC_FUNC_IMPL(__imp__sub_82AB78C4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x82ab7550
	ctx.lr = 0x82AB78DC;
	sub_82AB7550(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB78EC"))) PPC_WEAK_FUNC(sub_82AB78EC);
PPC_FUNC_IMPL(__imp__sub_82AB78EC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82ab3200
	ctx.lr = 0x82AB7908;
	sub_82AB3200(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7918"))) PPC_WEAK_FUNC(sub_82AB7918);
PPC_FUNC_IMPL(__imp__sub_82AB7918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ab7954
	if (ctx.cr6.eq) goto loc_82AB7954;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x82c0f6c0
	ctx.lr = 0x82AB7944;
	sub_82C0F6C0(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// li r5,26
	ctx.r5.s64 = 26;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a7d730
	ctx.lr = 0x82AB7954;
	sub_82A7D730(ctx, base);
loc_82AB7954:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7970"))) PPC_WEAK_FUNC(sub_82AB7970);
PPC_FUNC_IMPL(__imp__sub_82AB7970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ab7328
	ctx.lr = 0x82AB7998;
	sub_82AB7328(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,19976
	ctx.r9.s64 = ctx.r11.s64 + 19976;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82ab79c4
	if (ctx.cr6.eq) goto loc_82AB79C4;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r5,592
	ctx.r5.s64 = 592;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a7d730
	ctx.lr = 0x82AB79C4;
	sub_82A7D730(ctx, base);
loc_82AB79C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB79E0"))) PPC_WEAK_FUNC(sub_82AB79E0);
PPC_FUNC_IMPL(__imp__sub_82AB79E0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x82abfe08
	sub_82ABFE08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB7A08"))) PPC_WEAK_FUNC(sub_82AB7A08);
PPC_FUNC_IMPL(__imp__sub_82AB7A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ab7328
	ctx.lr = 0x82AB7A30;
	sub_82AB7328(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,19980
	ctx.r9.s64 = ctx.r11.s64 + 19980;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82ab7a64
	if (ctx.cr6.eq) goto loc_82AB7A64;
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r9,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r9.u64);
loc_82AB7A64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7A80"))) PPC_WEAK_FUNC(sub_82AB7A80);
PPC_FUNC_IMPL(__imp__sub_82AB7A80) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// addi r9,r3,32
	ctx.r9.s64 = ctx.r3.s64 + 32;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82abfe80
	sub_82ABFE80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB7AA8"))) PPC_WEAK_FUNC(sub_82AB7AA8);
PPC_FUNC_IMPL(__imp__sub_82AB7AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// lis r9,-31951
	ctx.r9.s64 = -2093940736;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r6,r9,28756
	ctx.r6.s64 = ctx.r9.s64 + 28756;
	// stb r5,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r5.u8);
	// addi r4,r8,20872
	ctx.r4.s64 = ctx.r8.s64 + 20872;
	// addi r3,r7,20824
	ctx.r3.s64 = ctx.r7.s64 + 20824;
	// addi r10,r11,28764
	ctx.r10.s64 = ctx.r11.s64 + 28764;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// bl 0x82a92018
	ctx.lr = 0x82AB7AFC;
	sub_82A92018(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7B10"))) PPC_WEAK_FUNC(sub_82AB7B10);
PPC_FUNC_IMPL(__imp__sub_82AB7B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lis r9,-31951
	ctx.r9.s64 = -2093940736;
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// stb r4,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r4.u8);
	// addi r6,r9,28772
	ctx.r6.s64 = ctx.r9.s64 + 28772;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// addi r4,r8,20888
	ctx.r4.s64 = ctx.r8.s64 + 20888;
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// addi r3,r7,20824
	ctx.r3.s64 = ctx.r7.s64 + 20824;
	// addi r10,r11,28780
	ctx.r10.s64 = ctx.r11.s64 + 28780;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82a92018
	ctx.lr = 0x82AB7B74;
	sub_82A92018(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7B88"))) PPC_WEAK_FUNC(sub_82AB7B88);
PPC_FUNC_IMPL(__imp__sub_82AB7B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lis r9,-31951
	ctx.r9.s64 = -2093940736;
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// stb r4,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r4.u8);
	// addi r6,r9,28788
	ctx.r6.s64 = ctx.r9.s64 + 28788;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// addi r4,r8,20904
	ctx.r4.s64 = ctx.r8.s64 + 20904;
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// addi r3,r7,20824
	ctx.r3.s64 = ctx.r7.s64 + 20824;
	// addi r10,r11,28796
	ctx.r10.s64 = ctx.r11.s64 + 28796;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82a92018
	ctx.lr = 0x82AB7BEC;
	sub_82A92018(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7C00"))) PPC_WEAK_FUNC(sub_82AB7C00);
PPC_FUNC_IMPL(__imp__sub_82AB7C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r4,r9,21104
	ctx.r4.s64 = ctx.r9.s64 + 21104;
	// stb r7,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r7.u8);
	// addi r3,r8,21048
	ctx.r3.s64 = ctx.r8.s64 + 21048;
	// addi r10,r11,28804
	ctx.r10.s64 = ctx.r11.s64 + 28804;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82a92018
	ctx.lr = 0x82AB7C4C;
	sub_82A92018(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7C60"))) PPC_WEAK_FUNC(sub_82AB7C60);
PPC_FUNC_IMPL(__imp__sub_82AB7C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r11,21140
	ctx.r9.s64 = ctx.r11.s64 + 21140;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r6,r10,21116
	ctx.r6.s64 = ctx.r10.s64 + 21116;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82aae178
	ctx.lr = 0x82AB7CA0;
	sub_82AAE178(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7CC8"))) PPC_WEAK_FUNC(sub_82AB7CC8);
PPC_FUNC_IMPL(__imp__sub_82AB7CC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82AB7CE0"))) PPC_WEAK_FUNC(sub_82AB7CE0);
PPC_FUNC_IMPL(__imp__sub_82AB7CE0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7CE8"))) PPC_WEAK_FUNC(sub_82AB7CE8);
PPC_FUNC_IMPL(__imp__sub_82AB7CE8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r3,12
	ctx.r5.s64 = ctx.r3.s64 + 12;
	// addi r4,r3,80
	ctx.r4.s64 = ctx.r3.s64 + 80;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// b 0x82abffd8
	sub_82ABFFD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB7D00"))) PPC_WEAK_FUNC(sub_82AB7D00);
PPC_FUNC_IMPL(__imp__sub_82AB7D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r4,78
	ctx.r11.s64 = ctx.r4.s64 + 78;
	// addi r10,r3,-2
	ctx.r10.s64 = ctx.r3.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82AB7D10:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x82ab7d10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AB7D10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7D20"))) PPC_WEAK_FUNC(sub_82AB7D20);
PPC_FUNC_IMPL(__imp__sub_82AB7D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ab7c60
	ctx.lr = 0x82AB7D38;
	sub_82AB7C60(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r10,r11,21152
	ctx.r10.s64 = ctx.r11.s64 + 21152;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82a7f140
	ctx.lr = 0x82AB7D54;
	sub_82A7F140(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7D70"))) PPC_WEAK_FUNC(sub_82AB7D70);
PPC_FUNC_IMPL(__imp__sub_82AB7D70) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r3,12
	ctx.r5.s64 = ctx.r3.s64 + 12;
	// addi r4,r3,80
	ctx.r4.s64 = ctx.r3.s64 + 80;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// b 0x82ac00b8
	sub_82AC00B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB7D88"))) PPC_WEAK_FUNC(sub_82AB7D88);
PPC_FUNC_IMPL(__imp__sub_82AB7D88) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,80(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 80);
	// addi r11,r4,80
	ctx.r11.s64 = ctx.r4.s64 + 80;
	// lhz r9,82(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 82);
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// sth r9,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r9.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7DA0"))) PPC_WEAK_FUNC(sub_82AB7DA0);
PPC_FUNC_IMPL(__imp__sub_82AB7DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ab7c60
	ctx.lr = 0x82AB7DB8;
	sub_82AB7C60(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,21164
	ctx.r9.s64 = ctx.r10.s64 + 21164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// stb r11,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r11.u8);
	// stb r11,82(r31)
	PPC_STORE_U8(ctx.r31.u32 + 82, ctx.r11.u8);
	// stb r11,83(r31)
	PPC_STORE_U8(ctx.r31.u32 + 83, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7DF0"))) PPC_WEAK_FUNC(sub_82AB7DF0);
PPC_FUNC_IMPL(__imp__sub_82AB7DF0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r3,12
	ctx.r5.s64 = ctx.r3.s64 + 12;
	// addi r4,r3,80
	ctx.r4.s64 = ctx.r3.s64 + 80;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// b 0x82ac0198
	sub_82AC0198(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB7E08"))) PPC_WEAK_FUNC(sub_82AB7E08);
PPC_FUNC_IMPL(__imp__sub_82AB7E08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// lwz r10,84(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// lwz r9,88(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7E28"))) PPC_WEAK_FUNC(sub_82AB7E28);
PPC_FUNC_IMPL(__imp__sub_82AB7E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ab7c60
	ctx.lr = 0x82AB7E40;
	sub_82AB7C60(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r10,r11,21176
	ctx.r10.s64 = ctx.r11.s64 + 21176;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82a7f140
	ctx.lr = 0x82AB7E5C;
	sub_82A7F140(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7E78"))) PPC_WEAK_FUNC(sub_82AB7E78);
PPC_FUNC_IMPL(__imp__sub_82AB7E78) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r3,12
	ctx.r5.s64 = ctx.r3.s64 + 12;
	// addi r4,r3,80
	ctx.r4.s64 = ctx.r3.s64 + 80;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// b 0x82ac0278
	sub_82AC0278(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB7E90"))) PPC_WEAK_FUNC(sub_82AB7E90);
PPC_FUNC_IMPL(__imp__sub_82AB7E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r4,78
	ctx.r11.s64 = ctx.r4.s64 + 78;
	// addi r10,r3,-2
	ctx.r10.s64 = ctx.r3.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82AB7EA0:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x82ab7ea0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AB7EA0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7EB0"))) PPC_WEAK_FUNC(sub_82AB7EB0);
PPC_FUNC_IMPL(__imp__sub_82AB7EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ab7c60
	ctx.lr = 0x82AB7EC8;
	sub_82AB7C60(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r9,r11,21188
	ctx.r9.s64 = ctx.r11.s64 + 21188;
	// addi r11,r31,79
	ctx.r11.s64 = ctx.r31.s64 + 79;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82AB7EE4:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82ab7ee4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AB7EE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7F08"))) PPC_WEAK_FUNC(sub_82AB7F08);
PPC_FUNC_IMPL(__imp__sub_82AB7F08) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r3,12
	ctx.r5.s64 = ctx.r3.s64 + 12;
	// addi r4,r3,80
	ctx.r4.s64 = ctx.r3.s64 + 80;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// b 0x82abfef8
	sub_82ABFEF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB7F20"))) PPC_WEAK_FUNC(sub_82AB7F20);
PPC_FUNC_IMPL(__imp__sub_82AB7F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r4,80
	ctx.r4.s64 = ctx.r4.s64 + 80;
	// li r5,26
	ctx.r5.s64 = 26;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a7d730
	ctx.lr = 0x82AB7F40;
	sub_82A7D730(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7F58"))) PPC_WEAK_FUNC(sub_82AB7F58);
PPC_FUNC_IMPL(__imp__sub_82AB7F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ab7c60
	ctx.lr = 0x82AB7F70;
	sub_82AB7C60(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r10,r11,21200
	ctx.r10.s64 = ctx.r11.s64 + 21200;
	// li r5,26
	ctx.r5.s64 = 26;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82a7f140
	ctx.lr = 0x82AB7F8C;
	sub_82A7F140(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7FA8"))) PPC_WEAK_FUNC(sub_82AB7FA8);
PPC_FUNC_IMPL(__imp__sub_82AB7FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// lis r9,-31951
	ctx.r9.s64 = -2093940736;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r6,r9,28812
	ctx.r6.s64 = ctx.r9.s64 + 28812;
	// stb r5,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r5.u8);
	// addi r4,r8,21824
	ctx.r4.s64 = ctx.r8.s64 + 21824;
	// addi r3,r7,21780
	ctx.r3.s64 = ctx.r7.s64 + 21780;
	// addi r10,r11,28820
	ctx.r10.s64 = ctx.r11.s64 + 28820;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,12
	ctx.r8.s64 = 12;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82a92018
	ctx.lr = 0x82AB8004;
	sub_82A92018(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8018"))) PPC_WEAK_FUNC(sub_82AB8018);
PPC_FUNC_IMPL(__imp__sub_82AB8018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// lis r9,-31951
	ctx.r9.s64 = -2093940736;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r6,r9,28828
	ctx.r6.s64 = ctx.r9.s64 + 28828;
	// stb r5,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r5.u8);
	// addi r4,r8,21848
	ctx.r4.s64 = ctx.r8.s64 + 21848;
	// addi r3,r7,21780
	ctx.r3.s64 = ctx.r7.s64 + 21780;
	// addi r10,r11,28836
	ctx.r10.s64 = ctx.r11.s64 + 28836;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,12
	ctx.r8.s64 = 12;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82a92018
	ctx.lr = 0x82AB8074;
	sub_82A92018(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8088"))) PPC_WEAK_FUNC(sub_82AB8088);
PPC_FUNC_IMPL(__imp__sub_82AB8088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lis r9,-31951
	ctx.r9.s64 = -2093940736;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// addi r4,r8,23988
	ctx.r4.s64 = ctx.r8.s64 + 23988;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// addi r6,r9,28852
	ctx.r6.s64 = ctx.r9.s64 + 28852;
	// stb r5,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r5.u8);
	// addi r3,r7,23944
	ctx.r3.s64 = ctx.r7.s64 + 23944;
	// addi r10,r11,28860
	ctx.r10.s64 = ctx.r11.s64 + 28860;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,12
	ctx.r8.s64 = 12;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x82a92018
	ctx.lr = 0x82AB80EC;
	sub_82A92018(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8100"))) PPC_WEAK_FUNC(sub_82AB8100);
PPC_FUNC_IMPL(__imp__sub_82AB8100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lis r9,-31951
	ctx.r9.s64 = -2093940736;
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// addi r6,r9,28868
	ctx.r6.s64 = ctx.r9.s64 + 28868;
	// addi r3,r5,23944
	ctx.r3.s64 = ctx.r5.s64 + 23944;
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// addi r10,r10,28876
	ctx.r10.s64 = ctx.r10.s64 + 28876;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r4,r4,24004
	ctx.r4.s64 = ctx.r4.s64 + 24004;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,24
	ctx.r8.s64 = 24;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82a92018
	ctx.lr = 0x82AB8170;
	sub_82A92018(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8180"))) PPC_WEAK_FUNC(sub_82AB8180);
PPC_FUNC_IMPL(__imp__sub_82AB8180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// lis r9,-31951
	ctx.r9.s64 = -2093940736;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// addi r6,r9,28884
	ctx.r6.s64 = ctx.r9.s64 + 28884;
	// stb r5,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r5.u8);
	// addi r4,r8,24012
	ctx.r4.s64 = ctx.r8.s64 + 24012;
	// addi r3,r7,23944
	ctx.r3.s64 = ctx.r7.s64 + 23944;
	// addi r10,r11,28892
	ctx.r10.s64 = ctx.r11.s64 + 28892;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,12
	ctx.r8.s64 = 12;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82a92018
	ctx.lr = 0x82AB81DC;
	sub_82A92018(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB81F0"))) PPC_WEAK_FUNC(sub_82AB81F0);
PPC_FUNC_IMPL(__imp__sub_82AB81F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r9,-31951
	ctx.r9.s64 = -2093940736;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r6,r9,28900
	ctx.r6.s64 = ctx.r9.s64 + 28900;
	// stb r5,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r5.u8);
	// addi r4,r8,24032
	ctx.r4.s64 = ctx.r8.s64 + 24032;
	// addi r3,r7,23944
	ctx.r3.s64 = ctx.r7.s64 + 23944;
	// addi r10,r11,28908
	ctx.r10.s64 = ctx.r11.s64 + 28908;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// bl 0x82a92180
	ctx.lr = 0x82AB8248;
	sub_82A92180(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8258"))) PPC_WEAK_FUNC(sub_82AB8258);
PPC_FUNC_IMPL(__imp__sub_82AB8258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r4,r9,24052
	ctx.r4.s64 = ctx.r9.s64 + 24052;
	// stb r7,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r7.u8);
	// addi r3,r8,23944
	ctx.r3.s64 = ctx.r8.s64 + 23944;
	// addi r10,r11,28916
	ctx.r10.s64 = ctx.r11.s64 + 28916;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82a92018
	ctx.lr = 0x82AB82A4;
	sub_82A92018(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB82B8"))) PPC_WEAK_FUNC(sub_82AB82B8);
PPC_FUNC_IMPL(__imp__sub_82AB82B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r10,24084
	ctx.r4.s64 = ctx.r10.s64 + 24084;
	// addi r3,r9,23944
	ctx.r3.s64 = ctx.r9.s64 + 23944;
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// addi r6,r11,28924
	ctx.r6.s64 = ctx.r11.s64 + 28924;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82a92018
	ctx.lr = 0x82AB8304;
	sub_82A92018(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

