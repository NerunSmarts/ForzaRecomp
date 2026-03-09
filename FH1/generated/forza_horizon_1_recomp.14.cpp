#include "forza_horizon_1_init.h"

__attribute__((alias("__imp__sub_82582C18"))) PPC_WEAK_FUNC(sub_82582C18);
PPC_FUNC_IMPL(__imp__sub_82582C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82582C20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82582C3C;
	sub_823F51A8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823f5040
	ctx.lr = 0x82582C44;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82582c68
	if (ctx.cr0.eq) goto loc_82582C68;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,4192
	ctx.r11.s64 = ctx.r11.s64 + 4192;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82582c6c
	goto loc_82582C6C;
loc_82582C68:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82582C6C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r11,11264
	ctx.r4.s64 = ctx.r11.s64 + 11264;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82582C88;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82582C90"))) PPC_WEAK_FUNC(sub_82582C90);
PPC_FUNC_IMPL(__imp__sub_82582C90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82582CA8"))) PPC_WEAK_FUNC(sub_82582CA8);
PPC_FUNC_IMPL(__imp__sub_82582CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82582CB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82582CCC;
	sub_823F51A8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823f5040
	ctx.lr = 0x82582CD4;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82582cf8
	if (ctx.cr0.eq) goto loc_82582CF8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,4200
	ctx.r11.s64 = ctx.r11.s64 + 4200;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82582cfc
	goto loc_82582CFC;
loc_82582CF8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82582CFC:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r11,11408
	ctx.r4.s64 = ctx.r11.s64 + 11408;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82582D18;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82582D20"))) PPC_WEAK_FUNC(sub_82582D20);
PPC_FUNC_IMPL(__imp__sub_82582D20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82582D38"))) PPC_WEAK_FUNC(sub_82582D38);
PPC_FUNC_IMPL(__imp__sub_82582D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82582D40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82582D5C;
	sub_823F51A8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823f5040
	ctx.lr = 0x82582D64;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82582d88
	if (ctx.cr0.eq) goto loc_82582D88;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,4208
	ctx.r11.s64 = ctx.r11.s64 + 4208;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82582d8c
	goto loc_82582D8C;
loc_82582D88:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82582D8C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r11,11552
	ctx.r4.s64 = ctx.r11.s64 + 11552;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82582DA8;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82582DB0"))) PPC_WEAK_FUNC(sub_82582DB0);
PPC_FUNC_IMPL(__imp__sub_82582DB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82582DC8"))) PPC_WEAK_FUNC(sub_82582DC8);
PPC_FUNC_IMPL(__imp__sub_82582DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82582DD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82582DE8;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x82582DF0;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82582e10
	if (ctx.cr0.eq) goto loc_82582E10;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,4216
	ctx.r11.s64 = ctx.r11.s64 + 4216;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82582e14
	goto loc_82582E14;
loc_82582E10:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82582E14:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,11696
	ctx.r4.s64 = ctx.r11.s64 + 11696;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82582E30;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82582E38"))) PPC_WEAK_FUNC(sub_82582E38);
PPC_FUNC_IMPL(__imp__sub_82582E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82582E40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82582E58;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x82582E60;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82582e80
	if (ctx.cr0.eq) goto loc_82582E80;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,4224
	ctx.r11.s64 = ctx.r11.s64 + 4224;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82582e84
	goto loc_82582E84;
loc_82582E80:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82582E84:
	// lis r11,-32036
	ctx.r11.s64 = -2099511296;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-29296
	ctx.r4.s64 = ctx.r11.s64 + -29296;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82582EA0;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82582EA8"))) PPC_WEAK_FUNC(sub_82582EA8);
PPC_FUNC_IMPL(__imp__sub_82582EA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82582EC0"))) PPC_WEAK_FUNC(sub_82582EC0);
PPC_FUNC_IMPL(__imp__sub_82582EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82582EC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82582EE0;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x82582EE8;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82582f08
	if (ctx.cr0.eq) goto loc_82582F08;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,4232
	ctx.r11.s64 = ctx.r11.s64 + 4232;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82582f0c
	goto loc_82582F0C;
loc_82582F08:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82582F0C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,11944
	ctx.r4.s64 = ctx.r11.s64 + 11944;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82582F28;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82582F30"))) PPC_WEAK_FUNC(sub_82582F30);
PPC_FUNC_IMPL(__imp__sub_82582F30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82582F50"))) PPC_WEAK_FUNC(sub_82582F50);
PPC_FUNC_IMPL(__imp__sub_82582F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de00
	ctx.lr = 0x82582F58;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,8
	ctx.r26.s64 = ctx.r3.s64 + 8;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82582F7C;
	sub_823F51A8(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x823f5040
	ctx.lr = 0x82582F84;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82582fb0
	if (ctx.cr0.eq) goto loc_82582FB0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,4240
	ctx.r11.s64 = ctx.r11.s64 + 4240;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r28.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82582fb4
	goto loc_82582FB4;
loc_82582FB0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82582FB4:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// addi r4,r11,12080
	ctx.r4.s64 = ctx.r11.s64 + 12080;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82582FD0;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82582FD8"))) PPC_WEAK_FUNC(sub_82582FD8);
PPC_FUNC_IMPL(__imp__sub_82582FD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82582FF8"))) PPC_WEAK_FUNC(sub_82582FF8);
PPC_FUNC_IMPL(__imp__sub_82582FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de00
	ctx.lr = 0x82583000;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,8
	ctx.r26.s64 = ctx.r3.s64 + 8;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82583024;
	sub_823F51A8(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x823f5040
	ctx.lr = 0x8258302C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82583058
	if (ctx.cr0.eq) goto loc_82583058;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,4248
	ctx.r11.s64 = ctx.r11.s64 + 4248;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r28.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8258305c
	goto loc_8258305C;
loc_82583058:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258305C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// addi r4,r11,12248
	ctx.r4.s64 = ctx.r11.s64 + 12248;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82583078;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82583080"))) PPC_WEAK_FUNC(sub_82583080);
PPC_FUNC_IMPL(__imp__sub_82583080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82583098"))) PPC_WEAK_FUNC(sub_82583098);
PPC_FUNC_IMPL(__imp__sub_82583098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x825830A0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x825830C0;
	sub_823F51A8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823f5040
	ctx.lr = 0x825830C8;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825830ec
	if (ctx.cr0.eq) goto loc_825830EC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f31,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,4256
	ctx.r11.s64 = ctx.r11.s64 + 4256;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825830f0
	goto loc_825830F0;
loc_825830EC:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825830F0:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r11,12416
	ctx.r4.s64 = ctx.r11.s64 + 12416;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8258310C;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82583118"))) PPC_WEAK_FUNC(sub_82583118);
PPC_FUNC_IMPL(__imp__sub_82583118) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82583130"))) PPC_WEAK_FUNC(sub_82583130);
PPC_FUNC_IMPL(__imp__sub_82583130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82583138;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82583154;
	sub_823F51A8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823f5040
	ctx.lr = 0x8258315C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82583180
	if (ctx.cr0.eq) goto loc_82583180;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,4264
	ctx.r11.s64 = ctx.r11.s64 + 4264;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82583184
	goto loc_82583184;
loc_82583180:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82583184:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r11,12568
	ctx.r4.s64 = ctx.r11.s64 + 12568;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x825831A0;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825831A8"))) PPC_WEAK_FUNC(sub_825831A8);
PPC_FUNC_IMPL(__imp__sub_825831A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825831B8"))) PPC_WEAK_FUNC(sub_825831B8);
PPC_FUNC_IMPL(__imp__sub_825831B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x825831C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r6,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// bl 0x823f51a8
	ctx.lr = 0x825831E0;
	sub_823F51A8(ctx, base);
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x823f5040
	ctx.lr = 0x825831E8;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82583214
	if (ctx.cr0.eq) goto loc_82583214;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,4272
	ctx.r11.s64 = ctx.r11.s64 + 4272;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a7d730
	ctx.lr = 0x8258320C;
	sub_82A7D730(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// b 0x82583218
	goto loc_82583218;
loc_82583214:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82583218:
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// addi r4,r11,-1568
	ctx.r4.s64 = ctx.r11.s64 + -1568;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82583234;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82583240"))) PPC_WEAK_FUNC(sub_82583240);
PPC_FUNC_IMPL(__imp__sub_82583240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82583248;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r6,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r7,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r7.u64);
	// std r8,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r8.u64);
	// std r9,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r9.u64);
	// std r10,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r10.u64);
	// bl 0x823f51a8
	ctx.lr = 0x82583278;
	sub_823F51A8(ctx, base);
	// li r4,108
	ctx.r4.s64 = 108;
	// bl 0x823f5040
	ctx.lr = 0x82583280;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825832ac
	if (ctx.cr0.eq) goto loc_825832AC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,4280
	ctx.r11.s64 = ctx.r11.s64 + 4280;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,104
	ctx.r5.s64 = 104;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a7d730
	ctx.lr = 0x825832A4;
	sub_82A7D730(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// b 0x825832b0
	goto loc_825832B0;
loc_825832AC:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825832B0:
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,108
	ctx.r6.s64 = 108;
	// addi r4,r11,-13944
	ctx.r4.s64 = ctx.r11.s64 + -13944;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x825832CC;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825832D8"))) PPC_WEAK_FUNC(sub_825832D8);
PPC_FUNC_IMPL(__imp__sub_825832D8) {
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
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r5.u64);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// std r6,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r6.u64);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// addi r11,r11,4288
	ctx.r11.s64 = ctx.r11.s64 + 4288;
	// std r8,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r8.u64);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// std r9,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r9.u64);
	// li r5,68
	ctx.r5.s64 = 68;
	// std r10,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r10.u64);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// vor128 v127,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a7d730
	ctx.lr = 0x82583338;
	sub_82A7D730(ctx, base);
	// lbz r11,239(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 239);
	// li r10,80
	ctx.r10.s64 = 80;
	// stfs f31,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r11.u8);
	// stvx128 v127,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v127,r1,r0
	ea = (ctx.r1.u32 + ctx.r0.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82583370"))) PPC_WEAK_FUNC(sub_82583370);
PPC_FUNC_IMPL(__imp__sub_82583370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82583378;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r9,80
	ctx.r9.s64 = 80;
	// lbz r31,72(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 72);
	// ld r30,60(r4)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r4.u32 + 60);
	// lfs f1,76(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f1.f64 = double(temp.f32);
	// lwz r29,68(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// ld r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 4);
	// lwz r10,120(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// lvx128 v1,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 12);
	// ld r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 20);
	// ld r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 28);
	// ld r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// ld r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 44);
	// ld r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 52);
	// stb r31,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r31.u8);
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// bctrl 
	ctx.lr = 0x825833D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825833D8"))) PPC_WEAK_FUNC(sub_825833D8);
PPC_FUNC_IMPL(__imp__sub_825833D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddf4
	ctx.lr = 0x825833E0;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// li r12,-112
	ctx.r12.s64 = -112;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r23,r3,8
	ctx.r23.s64 = ctx.r3.s64 + 8;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// vor128 v127,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82583424;
	sub_823F51A8(ctx, base);
	// li r4,96
	ctx.r4.s64 = 96;
	// bl 0x823f5040
	ctx.lr = 0x8258342C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258347c
	if (ctx.cr0.eq) goto loc_8258347C;
	// ld r10,344(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 344);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r11,367(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 367);
	// vor128 v1,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// lwz r31,352(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stb r11,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r11.u8);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// bl 0x825832d8
	ctx.lr = 0x82583474;
	sub_825832D8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x82583480
	goto loc_82583480;
loc_8258347C:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82583480:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// addi r4,r11,13168
	ctx.r4.s64 = ctx.r11.s64 + 13168;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8258349C;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// li r0,-112
	ctx.r0.s64 = -112;
	// lvx128 v127,r1,r0
	ea = (ctx.r1.u32 + ctx.r0.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82a7de44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825834B0"))) PPC_WEAK_FUNC(sub_825834B0);
PPC_FUNC_IMPL(__imp__sub_825834B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x825834B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82a7d730
	ctx.lr = 0x825834DC;
	sub_82A7D730(ctx, base);
	// lwz r11,148(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ld r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// ld r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// ld r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// ld r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// ld r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bctrl 
	ctx.lr = 0x82583508;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82583510"))) PPC_WEAK_FUNC(sub_82583510);
PPC_FUNC_IMPL(__imp__sub_82583510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82583518;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r7,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r7.u64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// std r8,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r8.u64);
	// std r9,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r9.u64);
	// std r10,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r10.u64);
	// bl 0x823f51a8
	ctx.lr = 0x82583548;
	sub_823F51A8(ctx, base);
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x823f5040
	ctx.lr = 0x82583550;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82583580
	if (ctx.cr0.eq) goto loc_82583580;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,4296
	ctx.r11.s64 = ctx.r11.s64 + 4296;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a7d730
	ctx.lr = 0x82583578;
	sub_82A7D730(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// b 0x82583584
	goto loc_82583584;
loc_82583580:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82583584:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// addi r4,r11,13488
	ctx.r4.s64 = ctx.r11.s64 + 13488;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x825835A0;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825835A8"))) PPC_WEAK_FUNC(sub_825835A8);
PPC_FUNC_IMPL(__imp__sub_825835A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x825835B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r6,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r8,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r8.u64);
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// std r7,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r7.u64);
	// std r9,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r9.u64);
	// std r10,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r10.u64);
	// bl 0x823f51a8
	ctx.lr = 0x825835E0;
	sub_823F51A8(ctx, base);
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x823f5040
	ctx.lr = 0x825835E8;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82583614
	if (ctx.cr0.eq) goto loc_82583614;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,4304
	ctx.r11.s64 = ctx.r11.s64 + 4304;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a7d730
	ctx.lr = 0x8258360C;
	sub_82A7D730(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// b 0x82583618
	goto loc_82583618;
loc_82583614:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82583618:
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// addi r4,r11,-30408
	ctx.r4.s64 = ctx.r11.s64 + -30408;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82583634;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82583640"))) PPC_WEAK_FUNC(sub_82583640);
PPC_FUNC_IMPL(__imp__sub_82583640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82583648;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r6,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r8,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r8.u64);
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// std r7,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r7.u64);
	// std r9,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r9.u64);
	// std r10,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r10.u64);
	// bl 0x823f51a8
	ctx.lr = 0x82583678;
	sub_823F51A8(ctx, base);
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x823f5040
	ctx.lr = 0x82583680;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825836ac
	if (ctx.cr0.eq) goto loc_825836AC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,4312
	ctx.r11.s64 = ctx.r11.s64 + 4312;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a7d730
	ctx.lr = 0x825836A4;
	sub_82A7D730(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// b 0x825836b0
	goto loc_825836B0;
loc_825836AC:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825836B0:
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// addi r4,r11,1792
	ctx.r4.s64 = ctx.r11.s64 + 1792;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x825836CC;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825836D8"))) PPC_WEAK_FUNC(sub_825836D8);
PPC_FUNC_IMPL(__imp__sub_825836D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x825836E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r6,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r8,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r8.u64);
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// std r7,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r7.u64);
	// std r9,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r9.u64);
	// std r10,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r10.u64);
	// bl 0x823f51a8
	ctx.lr = 0x82583710;
	sub_823F51A8(ctx, base);
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x823f5040
	ctx.lr = 0x82583718;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82583744
	if (ctx.cr0.eq) goto loc_82583744;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,4320
	ctx.r11.s64 = ctx.r11.s64 + 4320;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a7d730
	ctx.lr = 0x8258373C;
	sub_82A7D730(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// b 0x82583748
	goto loc_82583748;
loc_82583744:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82583748:
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// addi r4,r11,2208
	ctx.r4.s64 = ctx.r11.s64 + 2208;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82583764;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82583770"))) PPC_WEAK_FUNC(sub_82583770);
PPC_FUNC_IMPL(__imp__sub_82583770) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82583790"))) PPC_WEAK_FUNC(sub_82583790);
PPC_FUNC_IMPL(__imp__sub_82583790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82583798;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,8
	ctx.r27.s64 = ctx.r3.s64 + 8;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x823f51a8
	ctx.lr = 0x825837B8;
	sub_823F51A8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x823f5040
	ctx.lr = 0x825837C0;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825837e8
	if (ctx.cr0.eq) goto loc_825837E8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,4328
	ctx.r11.s64 = ctx.r11.s64 + 4328;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825837ec
	goto loc_825837EC;
loc_825837E8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825837EC:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r11,14192
	ctx.r4.s64 = ctx.r11.s64 + 14192;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82583808;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82583810"))) PPC_WEAK_FUNC(sub_82583810);
PPC_FUNC_IMPL(__imp__sub_82583810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82583818;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82583830;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x82583838;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82583858
	if (ctx.cr0.eq) goto loc_82583858;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,4336
	ctx.r11.s64 = ctx.r11.s64 + 4336;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8258385c
	goto loc_8258385C;
loc_82583858:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258385C:
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-504
	ctx.r4.s64 = ctx.r11.s64 + -504;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82583878;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82583880"))) PPC_WEAK_FUNC(sub_82583880);
PPC_FUNC_IMPL(__imp__sub_82583880) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82583898"))) PPC_WEAK_FUNC(sub_82583898);
PPC_FUNC_IMPL(__imp__sub_82583898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x825838A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x823f51a8
	ctx.lr = 0x825838BC;
	sub_823F51A8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823f5040
	ctx.lr = 0x825838C4;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825838e8
	if (ctx.cr0.eq) goto loc_825838E8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,4344
	ctx.r11.s64 = ctx.r11.s64 + 4344;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825838ec
	goto loc_825838EC;
loc_825838E8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825838EC:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r11,14464
	ctx.r4.s64 = ctx.r11.s64 + 14464;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82583908;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82583910"))) PPC_WEAK_FUNC(sub_82583910);
PPC_FUNC_IMPL(__imp__sub_82583910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82583918;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// li r5,56
	ctx.r5.s64 = 56;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82a7d730
	ctx.lr = 0x8258393C;
	sub_82A7D730(ctx, base);
	// lwz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ld r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// ld r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// ld r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// ld r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// ld r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// ld r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// bctrl 
	ctx.lr = 0x82583968;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82583970"))) PPC_WEAK_FUNC(sub_82583970);
PPC_FUNC_IMPL(__imp__sub_82583970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82583978;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r6,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r8,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r8.u64);
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// std r7,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r7.u64);
	// std r9,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r9.u64);
	// std r10,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r10.u64);
	// bl 0x823f51a8
	ctx.lr = 0x825839A8;
	sub_823F51A8(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x823f5040
	ctx.lr = 0x825839B0;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825839dc
	if (ctx.cr0.eq) goto loc_825839DC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,4352
	ctx.r11.s64 = ctx.r11.s64 + 4352;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,112
	ctx.r5.s64 = 112;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a7d730
	ctx.lr = 0x825839D4;
	sub_82A7D730(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// b 0x825839e0
	goto loc_825839E0;
loc_825839DC:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825839E0:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r4,r11,14608
	ctx.r4.s64 = ctx.r11.s64 + 14608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x825839FC;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82583A08"))) PPC_WEAK_FUNC(sub_82583A08);
PPC_FUNC_IMPL(__imp__sub_82583A08) {
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
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82583A34;
	sub_823F51A8(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x823f5040
	ctx.lr = 0x82583A3C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82583a80
	if (ctx.cr0.eq) goto loc_82583A80;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r10,r10,4360
	ctx.r10.s64 = ctx.r10.s64 + 4360;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// b 0x82583a84
	goto loc_82583A84;
loc_82583A80:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82583A84:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// addi r4,r11,5384
	ctx.r4.s64 = ctx.r11.s64 + 5384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82583AA0;
	sub_823F4FE8(ctx, base);
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

__attribute__((alias("__imp__sub_82583AB8"))) PPC_WEAK_FUNC(sub_82583AB8);
PPC_FUNC_IMPL(__imp__sub_82583AB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// ld r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 4);
	// rldicr r6,r9,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// ld r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82583AE0"))) PPC_WEAK_FUNC(sub_82583AE0);
PPC_FUNC_IMPL(__imp__sub_82583AE0) {
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
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r6,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// bl 0x823f51a8
	ctx.lr = 0x82583B10;
	sub_823F51A8(ctx, base);
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x823f5040
	ctx.lr = 0x82583B18;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82583b50
	if (ctx.cr0.eq) goto loc_82583B50;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r9,r10,4368
	ctx.r9.s64 = ctx.r10.s64 + 4368;
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82583B3C:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82583b3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82583B3C;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x82583b54
	goto loc_82583B54;
loc_82583B50:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82583B54:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r4,r11,15032
	ctx.r4.s64 = ctx.r11.s64 + 15032;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82583B70;
	sub_823F4FE8(ctx, base);
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

__attribute__((alias("__imp__sub_82583B88"))) PPC_WEAK_FUNC(sub_82583B88);
PPC_FUNC_IMPL(__imp__sub_82583B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82583B90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82583BAC;
	sub_823F51A8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823f5040
	ctx.lr = 0x82583BB4;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82583bd8
	if (ctx.cr0.eq) goto loc_82583BD8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,4376
	ctx.r11.s64 = ctx.r11.s64 + 4376;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82583bdc
	goto loc_82583BDC;
loc_82583BD8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82583BDC:
	// lis r11,-32184
	ctx.r11.s64 = -2109210624;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r11,-23096
	ctx.r4.s64 = ctx.r11.s64 + -23096;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82583BF8;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82583C00"))) PPC_WEAK_FUNC(sub_82583C00);
PPC_FUNC_IMPL(__imp__sub_82583C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82583C08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82583C24;
	sub_823F51A8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823f5040
	ctx.lr = 0x82583C2C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82583c50
	if (ctx.cr0.eq) goto loc_82583C50;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,4384
	ctx.r11.s64 = ctx.r11.s64 + 4384;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82583c54
	goto loc_82583C54;
loc_82583C50:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82583C54:
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r11,10856
	ctx.r4.s64 = ctx.r11.s64 + 10856;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82583C70;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82583C78"))) PPC_WEAK_FUNC(sub_82583C78);
PPC_FUNC_IMPL(__imp__sub_82583C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82583C80;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82583CA0;
	sub_823F51A8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823f5040
	ctx.lr = 0x82583CA8;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82583ccc
	if (ctx.cr0.eq) goto loc_82583CCC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f31,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,4392
	ctx.r11.s64 = ctx.r11.s64 + 4392;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82583cd0
	goto loc_82583CD0;
loc_82583CCC:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82583CD0:
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r11,7328
	ctx.r4.s64 = ctx.r11.s64 + 7328;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82583CEC;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82583CF8"))) PPC_WEAK_FUNC(sub_82583CF8);
PPC_FUNC_IMPL(__imp__sub_82583CF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82583D10"))) PPC_WEAK_FUNC(sub_82583D10);
PPC_FUNC_IMPL(__imp__sub_82583D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82583D18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82583D30;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x82583D38;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82583d58
	if (ctx.cr0.eq) goto loc_82583D58;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,4408
	ctx.r11.s64 = ctx.r11.s64 + 4408;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82583d5c
	goto loc_82583D5C;
loc_82583D58:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82583D5C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,15608
	ctx.r4.s64 = ctx.r11.s64 + 15608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82583D78;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82583D80"))) PPC_WEAK_FUNC(sub_82583D80);
PPC_FUNC_IMPL(__imp__sub_82583D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82583D88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82583DA0;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x82583DA8;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82583dc8
	if (ctx.cr0.eq) goto loc_82583DC8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,4416
	ctx.r11.s64 = ctx.r11.s64 + 4416;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82583dcc
	goto loc_82583DCC;
loc_82583DC8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82583DCC:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-13096
	ctx.r4.s64 = ctx.r11.s64 + -13096;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82583DE8;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82583DF0"))) PPC_WEAK_FUNC(sub_82583DF0);
PPC_FUNC_IMPL(__imp__sub_82583DF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82583E28"))) PPC_WEAK_FUNC(sub_82583E28);
PPC_FUNC_IMPL(__imp__sub_82583E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82583E30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82583E4C;
	sub_823F51A8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823f5040
	ctx.lr = 0x82583E54;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82583e78
	if (ctx.cr0.eq) goto loc_82583E78;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,4424
	ctx.r11.s64 = ctx.r11.s64 + 4424;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82583e7c
	goto loc_82583E7C;
loc_82583E78:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82583E7C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r11,15888
	ctx.r4.s64 = ctx.r11.s64 + 15888;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82583E98;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82583EA0"))) PPC_WEAK_FUNC(sub_82583EA0);
PPC_FUNC_IMPL(__imp__sub_82583EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82583EA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82583EC4;
	sub_823F51A8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823f5040
	ctx.lr = 0x82583ECC;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82583ef0
	if (ctx.cr0.eq) goto loc_82583EF0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82583ef4
	goto loc_82583EF4;
loc_82583EF0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82583EF4:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r11,864
	ctx.r4.s64 = ctx.r11.s64 + 864;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82583F10;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82583F18"))) PPC_WEAK_FUNC(sub_82583F18);
PPC_FUNC_IMPL(__imp__sub_82583F18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82583F38"))) PPC_WEAK_FUNC(sub_82583F38);
PPC_FUNC_IMPL(__imp__sub_82583F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82583F40;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,8
	ctx.r27.s64 = ctx.r3.s64 + 8;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82583F60;
	sub_823F51A8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x823f5040
	ctx.lr = 0x82583F68;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82583f90
	if (ctx.cr0.eq) goto loc_82583F90;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,4440
	ctx.r11.s64 = ctx.r11.s64 + 4440;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82583f94
	goto loc_82583F94;
loc_82583F90:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82583F94:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r11,16152
	ctx.r4.s64 = ctx.r11.s64 + 16152;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82583FB0;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82583FB8"))) PPC_WEAK_FUNC(sub_82583FB8);
PPC_FUNC_IMPL(__imp__sub_82583FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82583FC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,8
	ctx.r27.s64 = ctx.r3.s64 + 8;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82583FE0;
	sub_823F51A8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x823f5040
	ctx.lr = 0x82583FE8;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82584010
	if (ctx.cr0.eq) goto loc_82584010;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,4448
	ctx.r11.s64 = ctx.r11.s64 + 4448;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82584014
	goto loc_82584014;
loc_82584010:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82584014:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r5,16(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r11,5784
	ctx.r4.s64 = ctx.r11.s64 + 5784;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82584030;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82584038"))) PPC_WEAK_FUNC(sub_82584038);
PPC_FUNC_IMPL(__imp__sub_82584038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82584040;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82584058;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x82584060;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82584080
	if (ctx.cr0.eq) goto loc_82584080;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,4456
	ctx.r11.s64 = ctx.r11.s64 + 4456;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82584084
	goto loc_82584084;
loc_82584080:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82584084:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-11704
	ctx.r4.s64 = ctx.r11.s64 + -11704;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x825840A0;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825840A8"))) PPC_WEAK_FUNC(sub_825840A8);
PPC_FUNC_IMPL(__imp__sub_825840A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825840D0"))) PPC_WEAK_FUNC(sub_825840D0);
PPC_FUNC_IMPL(__imp__sub_825840D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x825840D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x823f51a8
	ctx.lr = 0x825840F4;
	sub_823F51A8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823f5040
	ctx.lr = 0x825840FC;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82584120
	if (ctx.cr0.eq) goto loc_82584120;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,4464
	ctx.r11.s64 = ctx.r11.s64 + 4464;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82584124
	goto loc_82584124;
loc_82584120:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82584124:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r11,16568
	ctx.r4.s64 = ctx.r11.s64 + 16568;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82584140;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82584148"))) PPC_WEAK_FUNC(sub_82584148);
PPC_FUNC_IMPL(__imp__sub_82584148) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82584160"))) PPC_WEAK_FUNC(sub_82584160);
PPC_FUNC_IMPL(__imp__sub_82584160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82584168;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82584184;
	sub_823F51A8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823f5040
	ctx.lr = 0x8258418C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825841b0
	if (ctx.cr0.eq) goto loc_825841B0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,4472
	ctx.r11.s64 = ctx.r11.s64 + 4472;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825841b4
	goto loc_825841B4;
loc_825841B0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825841B4:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r11,16712
	ctx.r4.s64 = ctx.r11.s64 + 16712;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x825841D0;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825841D8"))) PPC_WEAK_FUNC(sub_825841D8);
PPC_FUNC_IMPL(__imp__sub_825841D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x825841E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x823f51a8
	ctx.lr = 0x825841FC;
	sub_823F51A8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823f5040
	ctx.lr = 0x82584204;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82584228
	if (ctx.cr0.eq) goto loc_82584228;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,4480
	ctx.r11.s64 = ctx.r11.s64 + 4480;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8258422c
	goto loc_8258422C;
loc_82584228:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258422C:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r11,5816
	ctx.r4.s64 = ctx.r11.s64 + 5816;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82584248;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82584250"))) PPC_WEAK_FUNC(sub_82584250);
PPC_FUNC_IMPL(__imp__sub_82584250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82584258;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82584270;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x82584278;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82584298
	if (ctx.cr0.eq) goto loc_82584298;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,4488
	ctx.r11.s64 = ctx.r11.s64 + 4488;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8258429c
	goto loc_8258429C;
loc_82584298:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258429C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-11248
	ctx.r4.s64 = ctx.r11.s64 + -11248;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x825842B8;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825842C0"))) PPC_WEAK_FUNC(sub_825842C0);
PPC_FUNC_IMPL(__imp__sub_825842C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lwz r11,312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825842D8"))) PPC_WEAK_FUNC(sub_825842D8);
PPC_FUNC_IMPL(__imp__sub_825842D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x825842E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x825842F8;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x82584300;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82584320
	if (ctx.cr0.eq) goto loc_82584320;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,4496
	ctx.r11.s64 = ctx.r11.s64 + 4496;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82584324
	goto loc_82584324;
loc_82584320:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82584324:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,17088
	ctx.r4.s64 = ctx.r11.s64 + 17088;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82584340;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82584348"))) PPC_WEAK_FUNC(sub_82584348);
PPC_FUNC_IMPL(__imp__sub_82584348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82584350;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82584368;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x82584370;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82584390
	if (ctx.cr0.eq) goto loc_82584390;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,4504
	ctx.r11.s64 = ctx.r11.s64 + 4504;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82584394
	goto loc_82584394;
loc_82584390:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82584394:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-10656
	ctx.r4.s64 = ctx.r11.s64 + -10656;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x825843B0;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825843B8"))) PPC_WEAK_FUNC(sub_825843B8);
PPC_FUNC_IMPL(__imp__sub_825843B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825843D8"))) PPC_WEAK_FUNC(sub_825843D8);
PPC_FUNC_IMPL(__imp__sub_825843D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de00
	ctx.lr = 0x825843E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,8
	ctx.r26.s64 = ctx.r3.s64 + 8;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82584404;
	sub_823F51A8(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x823f5040
	ctx.lr = 0x8258440C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82584438
	if (ctx.cr0.eq) goto loc_82584438;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,4512
	ctx.r11.s64 = ctx.r11.s64 + 4512;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r28.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8258443c
	goto loc_8258443C;
loc_82584438:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258443C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// addi r4,r11,17336
	ctx.r4.s64 = ctx.r11.s64 + 17336;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82584458;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82584460"))) PPC_WEAK_FUNC(sub_82584460);
PPC_FUNC_IMPL(__imp__sub_82584460) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82584480"))) PPC_WEAK_FUNC(sub_82584480);
PPC_FUNC_IMPL(__imp__sub_82584480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de00
	ctx.lr = 0x82584488;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,8
	ctx.r26.s64 = ctx.r3.s64 + 8;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x823f51a8
	ctx.lr = 0x825844AC;
	sub_823F51A8(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x823f5040
	ctx.lr = 0x825844B4;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825844e0
	if (ctx.cr0.eq) goto loc_825844E0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,4520
	ctx.r11.s64 = ctx.r11.s64 + 4520;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r28.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825844e4
	goto loc_825844E4;
loc_825844E0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825844E4:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// addi r4,r11,17504
	ctx.r4.s64 = ctx.r11.s64 + 17504;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82584500;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82584508"))) PPC_WEAK_FUNC(sub_82584508);
PPC_FUNC_IMPL(__imp__sub_82584508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82584520"))) PPC_WEAK_FUNC(sub_82584520);
PPC_FUNC_IMPL(__imp__sub_82584520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82584528;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82584548;
	sub_823F51A8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823f5040
	ctx.lr = 0x82584550;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82584574
	if (ctx.cr0.eq) goto loc_82584574;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f31,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,4528
	ctx.r11.s64 = ctx.r11.s64 + 4528;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82584578
	goto loc_82584578;
loc_82584574:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82584578:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r11,17672
	ctx.r4.s64 = ctx.r11.s64 + 17672;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82584594;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825845A0"))) PPC_WEAK_FUNC(sub_825845A0);
PPC_FUNC_IMPL(__imp__sub_825845A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825845B8"))) PPC_WEAK_FUNC(sub_825845B8);
PPC_FUNC_IMPL(__imp__sub_825845B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x825845C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x823f51a8
	ctx.lr = 0x825845DC;
	sub_823F51A8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823f5040
	ctx.lr = 0x825845E4;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82584608
	if (ctx.cr0.eq) goto loc_82584608;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,4536
	ctx.r11.s64 = ctx.r11.s64 + 4536;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8258460c
	goto loc_8258460C;
loc_82584608:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258460C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r11,17824
	ctx.r4.s64 = ctx.r11.s64 + 17824;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82584628;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82584630"))) PPC_WEAK_FUNC(sub_82584630);
PPC_FUNC_IMPL(__imp__sub_82584630) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82584640"))) PPC_WEAK_FUNC(sub_82584640);
PPC_FUNC_IMPL(__imp__sub_82584640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82584648;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r6,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// bl 0x823f51a8
	ctx.lr = 0x82584668;
	sub_823F51A8(ctx, base);
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x823f5040
	ctx.lr = 0x82584670;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8258469c
	if (ctx.cr0.eq) goto loc_8258469C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,4544
	ctx.r11.s64 = ctx.r11.s64 + 4544;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a7d730
	ctx.lr = 0x82584694;
	sub_82A7D730(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// b 0x825846a0
	goto loc_825846A0;
loc_8258469C:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825846A0:
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// addi r4,r11,-28488
	ctx.r4.s64 = ctx.r11.s64 + -28488;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x825846BC;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825846C8"))) PPC_WEAK_FUNC(sub_825846C8);
PPC_FUNC_IMPL(__imp__sub_825846C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x825846D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r6,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r7,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r7.u64);
	// std r8,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r8.u64);
	// std r9,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r9.u64);
	// std r10,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r10.u64);
	// bl 0x823f51a8
	ctx.lr = 0x82584700;
	sub_823F51A8(ctx, base);
	// li r4,108
	ctx.r4.s64 = 108;
	// bl 0x823f5040
	ctx.lr = 0x82584708;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82584734
	if (ctx.cr0.eq) goto loc_82584734;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,4552
	ctx.r11.s64 = ctx.r11.s64 + 4552;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,104
	ctx.r5.s64 = 104;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a7d730
	ctx.lr = 0x8258472C;
	sub_82A7D730(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// b 0x82584738
	goto loc_82584738;
loc_82584734:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82584738:
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,108
	ctx.r6.s64 = 108;
	// addi r4,r11,-14928
	ctx.r4.s64 = ctx.r11.s64 + -14928;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82584754;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82584760"))) PPC_WEAK_FUNC(sub_82584760);
PPC_FUNC_IMPL(__imp__sub_82584760) {
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
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r5.u64);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// std r6,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r6.u64);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// addi r11,r11,4560
	ctx.r11.s64 = ctx.r11.s64 + 4560;
	// std r8,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r8.u64);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// std r9,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r9.u64);
	// li r5,68
	ctx.r5.s64 = 68;
	// std r10,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r10.u64);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// vor128 v127,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a7d730
	ctx.lr = 0x825847C0;
	sub_82A7D730(ctx, base);
	// lbz r11,239(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 239);
	// li r10,80
	ctx.r10.s64 = 80;
	// stfs f31,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r11.u8);
	// stvx128 v127,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v127,r1,r0
	ea = (ctx.r1.u32 + ctx.r0.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825847F8"))) PPC_WEAK_FUNC(sub_825847F8);
PPC_FUNC_IMPL(__imp__sub_825847F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddf4
	ctx.lr = 0x82584800;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// li r12,-112
	ctx.r12.s64 = -112;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r23,r3,8
	ctx.r23.s64 = ctx.r3.s64 + 8;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// vor128 v127,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82584844;
	sub_823F51A8(ctx, base);
	// li r4,96
	ctx.r4.s64 = 96;
	// bl 0x823f5040
	ctx.lr = 0x8258484C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258489c
	if (ctx.cr0.eq) goto loc_8258489C;
	// ld r10,344(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 344);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r11,367(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 367);
	// vor128 v1,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// lwz r31,352(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stb r11,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r11.u8);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// bl 0x82584760
	ctx.lr = 0x82584894;
	sub_82584760(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x825848a0
	goto loc_825848A0;
loc_8258489C:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825848A0:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r5,16(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// addi r4,r11,984
	ctx.r4.s64 = ctx.r11.s64 + 984;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x825848BC;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// li r0,-112
	ctx.r0.s64 = -112;
	// lvx128 v127,r1,r0
	ea = (ctx.r1.u32 + ctx.r0.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82a7de44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825848D0"))) PPC_WEAK_FUNC(sub_825848D0);
PPC_FUNC_IMPL(__imp__sub_825848D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x825848D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82a7d730
	ctx.lr = 0x825848FC;
	sub_82A7D730(ctx, base);
	// lwz r11,372(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 372);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ld r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// ld r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// ld r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// ld r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// ld r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bctrl 
	ctx.lr = 0x82584928;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82584930"))) PPC_WEAK_FUNC(sub_82584930);
PPC_FUNC_IMPL(__imp__sub_82584930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82584938;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r7,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r7.u64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// std r8,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r8.u64);
	// std r9,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r9.u64);
	// std r10,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r10.u64);
	// bl 0x823f51a8
	ctx.lr = 0x82584968;
	sub_823F51A8(ctx, base);
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x823f5040
	ctx.lr = 0x82584970;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825849a0
	if (ctx.cr0.eq) goto loc_825849A0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,4568
	ctx.r11.s64 = ctx.r11.s64 + 4568;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a7d730
	ctx.lr = 0x82584998;
	sub_82A7D730(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// b 0x825849a4
	goto loc_825849A4;
loc_825849A0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825849A4:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// addi r4,r11,18640
	ctx.r4.s64 = ctx.r11.s64 + 18640;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x825849C0;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825849C8"))) PPC_WEAK_FUNC(sub_825849C8);
PPC_FUNC_IMPL(__imp__sub_825849C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x825849D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r6,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r8,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r8.u64);
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// std r7,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r7.u64);
	// std r9,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r9.u64);
	// std r10,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r10.u64);
	// bl 0x823f51a8
	ctx.lr = 0x82584A00;
	sub_823F51A8(ctx, base);
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x823f5040
	ctx.lr = 0x82584A08;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82584a34
	if (ctx.cr0.eq) goto loc_82584A34;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,4576
	ctx.r11.s64 = ctx.r11.s64 + 4576;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a7d730
	ctx.lr = 0x82584A2C;
	sub_82A7D730(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// b 0x82584a38
	goto loc_82584A38;
loc_82584A34:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82584A38:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// addi r4,r11,2240
	ctx.r4.s64 = ctx.r11.s64 + 2240;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82584A54;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82584A60"))) PPC_WEAK_FUNC(sub_82584A60);
PPC_FUNC_IMPL(__imp__sub_82584A60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82584A68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r6,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r8,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r8.u64);
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// std r7,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r7.u64);
	// std r9,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r9.u64);
	// std r10,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r10.u64);
	// bl 0x823f51a8
	ctx.lr = 0x82584A98;
	sub_823F51A8(ctx, base);
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x823f5040
	ctx.lr = 0x82584AA0;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82584acc
	if (ctx.cr0.eq) goto loc_82584ACC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,4584
	ctx.r11.s64 = ctx.r11.s64 + 4584;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a7d730
	ctx.lr = 0x82584AC4;
	sub_82A7D730(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// b 0x82584ad0
	goto loc_82584AD0;
loc_82584ACC:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82584AD0:
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// addi r4,r11,1584
	ctx.r4.s64 = ctx.r11.s64 + 1584;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82584AEC;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82584AF8"))) PPC_WEAK_FUNC(sub_82584AF8);
PPC_FUNC_IMPL(__imp__sub_82584AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82584B00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r6,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r8,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r8.u64);
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// std r7,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r7.u64);
	// std r9,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r9.u64);
	// std r10,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r10.u64);
	// bl 0x823f51a8
	ctx.lr = 0x82584B30;
	sub_823F51A8(ctx, base);
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x823f5040
	ctx.lr = 0x82584B38;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82584b64
	if (ctx.cr0.eq) goto loc_82584B64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,4592
	ctx.r11.s64 = ctx.r11.s64 + 4592;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a7d730
	ctx.lr = 0x82584B5C;
	sub_82A7D730(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// b 0x82584b68
	goto loc_82584B68;
loc_82584B64:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82584B68:
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// addi r4,r11,2000
	ctx.r4.s64 = ctx.r11.s64 + 2000;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82584B84;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82584B90"))) PPC_WEAK_FUNC(sub_82584B90);
PPC_FUNC_IMPL(__imp__sub_82584B90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82584BB0"))) PPC_WEAK_FUNC(sub_82584BB0);
PPC_FUNC_IMPL(__imp__sub_82584BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82584BB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,8
	ctx.r27.s64 = ctx.r3.s64 + 8;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82584BD8;
	sub_823F51A8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x823f5040
	ctx.lr = 0x82584BE0;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82584c08
	if (ctx.cr0.eq) goto loc_82584C08;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,4600
	ctx.r11.s64 = ctx.r11.s64 + 4600;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82584c0c
	goto loc_82584C0C;
loc_82584C08:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82584C0C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r11,19344
	ctx.r4.s64 = ctx.r11.s64 + 19344;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82584C28;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82584C30"))) PPC_WEAK_FUNC(sub_82584C30);
PPC_FUNC_IMPL(__imp__sub_82584C30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82584C48"))) PPC_WEAK_FUNC(sub_82584C48);
PPC_FUNC_IMPL(__imp__sub_82584C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82584C50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82584C68;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x82584C70;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82584c90
	if (ctx.cr0.eq) goto loc_82584C90;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82584c94
	goto loc_82584C94;
loc_82584C90:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82584C94:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,19504
	ctx.r4.s64 = ctx.r11.s64 + 19504;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82584CB0;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82584CB8"))) PPC_WEAK_FUNC(sub_82584CB8);
PPC_FUNC_IMPL(__imp__sub_82584CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82584CC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r6,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r8,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r8.u64);
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// std r7,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r7.u64);
	// std r9,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r9.u64);
	// std r10,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r10.u64);
	// bl 0x823f51a8
	ctx.lr = 0x82584CF0;
	sub_823F51A8(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x823f5040
	ctx.lr = 0x82584CF8;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82584d24
	if (ctx.cr0.eq) goto loc_82584D24;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,4616
	ctx.r11.s64 = ctx.r11.s64 + 4616;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,112
	ctx.r5.s64 = 112;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a7d730
	ctx.lr = 0x82584D1C;
	sub_82A7D730(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// b 0x82584d28
	goto loc_82584D28;
loc_82584D24:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82584D28:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r4,r11,888
	ctx.r4.s64 = ctx.r11.s64 + 888;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82584D44;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82584D50"))) PPC_WEAK_FUNC(sub_82584D50);
PPC_FUNC_IMPL(__imp__sub_82584D50) {
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
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82584D7C;
	sub_823F51A8(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x823f5040
	ctx.lr = 0x82584D84;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82584dc8
	if (ctx.cr0.eq) goto loc_82584DC8;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r10,r10,4624
	ctx.r10.s64 = ctx.r10.s64 + 4624;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// b 0x82584dcc
	goto loc_82584DCC;
loc_82584DC8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82584DCC:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// addi r4,r11,320
	ctx.r4.s64 = ctx.r11.s64 + 320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82584DE8;
	sub_823F4FE8(ctx, base);
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

__attribute__((alias("__imp__sub_82584E00"))) PPC_WEAK_FUNC(sub_82584E00);
PPC_FUNC_IMPL(__imp__sub_82584E00) {
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
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r6,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// bl 0x823f51a8
	ctx.lr = 0x82584E30;
	sub_823F51A8(ctx, base);
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x823f5040
	ctx.lr = 0x82584E38;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82584e70
	if (ctx.cr0.eq) goto loc_82584E70;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r9,r10,4632
	ctx.r9.s64 = ctx.r10.s64 + 4632;
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82584E5C:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82584e5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82584E5C;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x82584e74
	goto loc_82584E74;
loc_82584E70:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82584E74:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r4,r11,5840
	ctx.r4.s64 = ctx.r11.s64 + 5840;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82584E90;
	sub_823F4FE8(ctx, base);
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

__attribute__((alias("__imp__sub_82584EA8"))) PPC_WEAK_FUNC(sub_82584EA8);
PPC_FUNC_IMPL(__imp__sub_82584EA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82584EC0"))) PPC_WEAK_FUNC(sub_82584EC0);
PPC_FUNC_IMPL(__imp__sub_82584EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82584EC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82584EE4;
	sub_823F51A8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823f5040
	ctx.lr = 0x82584EEC;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82584f10
	if (ctx.cr0.eq) goto loc_82584F10;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,4640
	ctx.r11.s64 = ctx.r11.s64 + 4640;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82584f14
	goto loc_82584F14;
loc_82584F10:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82584F14:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r11,20136
	ctx.r4.s64 = ctx.r11.s64 + 20136;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82584F30;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82584F38"))) PPC_WEAK_FUNC(sub_82584F38);
PPC_FUNC_IMPL(__imp__sub_82584F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82584F40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82584F58;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x82584F60;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82584f80
	if (ctx.cr0.eq) goto loc_82584F80;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,4648
	ctx.r11.s64 = ctx.r11.s64 + 4648;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82584f84
	goto loc_82584F84;
loc_82584F80:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82584F84:
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,7280
	ctx.r4.s64 = ctx.r11.s64 + 7280;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82584FA0;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82584FA8"))) PPC_WEAK_FUNC(sub_82584FA8);
PPC_FUNC_IMPL(__imp__sub_82584FA8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x825860c0
	sub_825860C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82584FB0"))) PPC_WEAK_FUNC(sub_82584FB0);
PPC_FUNC_IMPL(__imp__sub_82584FB0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825860c0
	sub_825860C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82584FB8"))) PPC_WEAK_FUNC(sub_82584FB8);
PPC_FUNC_IMPL(__imp__sub_82584FB8) {
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
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82584FDC;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x82584FE4;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82585000
	if (ctx.cr0.eq) goto loc_82585000;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,4656
	ctx.r11.s64 = ctx.r11.s64 + 4656;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82585004
	goto loc_82585004;
loc_82585000:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82585004:
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,21376
	ctx.r4.s64 = ctx.r11.s64 + 21376;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82585020;
	sub_823F4FE8(ctx, base);
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

__attribute__((alias("__imp__sub_82585038"))) PPC_WEAK_FUNC(sub_82585038);
PPC_FUNC_IMPL(__imp__sub_82585038) {
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
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8258505C;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x82585064;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82585080
	if (ctx.cr0.eq) goto loc_82585080;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,4664
	ctx.r11.s64 = ctx.r11.s64 + 4664;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82585084
	goto loc_82585084;
loc_82585080:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82585084:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-16792
	ctx.r4.s64 = ctx.r11.s64 + -16792;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x825850A0;
	sub_823F4FE8(ctx, base);
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

__attribute__((alias("__imp__sub_825850B8"))) PPC_WEAK_FUNC(sub_825850B8);
PPC_FUNC_IMPL(__imp__sub_825850B8) {
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
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x825850DC;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x825850E4;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82585100
	if (ctx.cr0.eq) goto loc_82585100;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,4672
	ctx.r11.s64 = ctx.r11.s64 + 4672;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82585104
	goto loc_82585104;
loc_82585100:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82585104:
	// lis r11,-32060
	ctx.r11.s64 = -2101084160;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,27936
	ctx.r4.s64 = ctx.r11.s64 + 27936;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82585120;
	sub_823F4FE8(ctx, base);
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

__attribute__((alias("__imp__sub_82585138"))) PPC_WEAK_FUNC(sub_82585138);
PPC_FUNC_IMPL(__imp__sub_82585138) {
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
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8258515C;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x82585164;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82585180
	if (ctx.cr0.eq) goto loc_82585180;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,4688
	ctx.r11.s64 = ctx.r11.s64 + 4688;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82585184
	goto loc_82585184;
loc_82585180:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82585184:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,11248
	ctx.r4.s64 = ctx.r11.s64 + 11248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x825851A0;
	sub_823F4FE8(ctx, base);
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

__attribute__((alias("__imp__sub_825851B8"))) PPC_WEAK_FUNC(sub_825851B8);
PPC_FUNC_IMPL(__imp__sub_825851B8) {
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
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x825851DC;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x825851E4;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82585200
	if (ctx.cr0.eq) goto loc_82585200;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,4696
	ctx.r11.s64 = ctx.r11.s64 + 4696;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82585204
	goto loc_82585204;
loc_82585200:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82585204:
	// lis r11,-32036
	ctx.r11.s64 = -2099511296;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-28768
	ctx.r4.s64 = ctx.r11.s64 + -28768;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82585220;
	sub_823F4FE8(ctx, base);
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

__attribute__((alias("__imp__sub_82585238"))) PPC_WEAK_FUNC(sub_82585238);
PPC_FUNC_IMPL(__imp__sub_82585238) {
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
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8258525C;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x82585264;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82585280
	if (ctx.cr0.eq) goto loc_82585280;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,4704
	ctx.r11.s64 = ctx.r11.s64 + 4704;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82585284
	goto loc_82585284;
loc_82585280:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82585284:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,12712
	ctx.r4.s64 = ctx.r11.s64 + 12712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x825852A0;
	sub_823F4FE8(ctx, base);
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

__attribute__((alias("__imp__sub_825852B8"))) PPC_WEAK_FUNC(sub_825852B8);
PPC_FUNC_IMPL(__imp__sub_825852B8) {
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
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x825852DC;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x825852E4;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82585300
	if (ctx.cr0.eq) goto loc_82585300;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,4712
	ctx.r11.s64 = ctx.r11.s64 + 4712;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82585304
	goto loc_82585304;
loc_82585300:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82585304:
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-24704
	ctx.r4.s64 = ctx.r11.s64 + -24704;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82585320;
	sub_823F4FE8(ctx, base);
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

__attribute__((alias("__imp__sub_82585338"))) PPC_WEAK_FUNC(sub_82585338);
PPC_FUNC_IMPL(__imp__sub_82585338) {
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
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8258535C;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x82585364;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82585380
	if (ctx.cr0.eq) goto loc_82585380;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,4736
	ctx.r11.s64 = ctx.r11.s64 + 4736;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82585384
	goto loc_82585384;
loc_82585380:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82585384:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,15856
	ctx.r4.s64 = ctx.r11.s64 + 15856;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x825853A0;
	sub_823F4FE8(ctx, base);
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

__attribute__((alias("__imp__sub_825853B8"))) PPC_WEAK_FUNC(sub_825853B8);
PPC_FUNC_IMPL(__imp__sub_825853B8) {
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
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x825853DC;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x825853E4;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82585400
	if (ctx.cr0.eq) goto loc_82585400;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,4744
	ctx.r11.s64 = ctx.r11.s64 + 4744;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82585404
	goto loc_82585404;
loc_82585400:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82585404:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,15872
	ctx.r4.s64 = ctx.r11.s64 + 15872;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82585420;
	sub_823F4FE8(ctx, base);
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

__attribute__((alias("__imp__sub_82585438"))) PPC_WEAK_FUNC(sub_82585438);
PPC_FUNC_IMPL(__imp__sub_82585438) {
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
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8258545C;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x82585464;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82585480
	if (ctx.cr0.eq) goto loc_82585480;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,4752
	ctx.r11.s64 = ctx.r11.s64 + 4752;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82585484
	goto loc_82585484;
loc_82585480:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82585484:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,16552
	ctx.r4.s64 = ctx.r11.s64 + 16552;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x825854A0;
	sub_823F4FE8(ctx, base);
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

__attribute__((alias("__imp__sub_825854B8"))) PPC_WEAK_FUNC(sub_825854B8);
PPC_FUNC_IMPL(__imp__sub_825854B8) {
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
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x825854DC;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x825854E4;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82585500
	if (ctx.cr0.eq) goto loc_82585500;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,4760
	ctx.r11.s64 = ctx.r11.s64 + 4760;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82585504
	goto loc_82585504;
loc_82585500:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82585504:
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,1504
	ctx.r4.s64 = ctx.r11.s64 + 1504;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82585520;
	sub_823F4FE8(ctx, base);
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

__attribute__((alias("__imp__sub_82585538"))) PPC_WEAK_FUNC(sub_82585538);
PPC_FUNC_IMPL(__imp__sub_82585538) {
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
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8258555C;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x82585564;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82585580
	if (ctx.cr0.eq) goto loc_82585580;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,4768
	ctx.r11.s64 = ctx.r11.s64 + 4768;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82585584
	goto loc_82585584;
loc_82585580:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82585584:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,17968
	ctx.r4.s64 = ctx.r11.s64 + 17968;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x825855A0;
	sub_823F4FE8(ctx, base);
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

__attribute__((alias("__imp__sub_825855B8"))) PPC_WEAK_FUNC(sub_825855B8);
PPC_FUNC_IMPL(__imp__sub_825855B8) {
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
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x825855DC;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x825855E4;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82585600
	if (ctx.cr0.eq) goto loc_82585600;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,4776
	ctx.r11.s64 = ctx.r11.s64 + 4776;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82585604
	goto loc_82585604;
loc_82585600:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82585604:
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,1488
	ctx.r4.s64 = ctx.r11.s64 + 1488;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82585620;
	sub_823F4FE8(ctx, base);
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

__attribute__((alias("__imp__sub_82585638"))) PPC_WEAK_FUNC(sub_82585638);
PPC_FUNC_IMPL(__imp__sub_82585638) {
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
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8258565C;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x82585664;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82585680
	if (ctx.cr0.eq) goto loc_82585680;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,4784
	ctx.r11.s64 = ctx.r11.s64 + 4784;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82585684
	goto loc_82585684;
loc_82585680:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82585684:
	// lis r11,-32184
	ctx.r11.s64 = -2109210624;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-23112
	ctx.r4.s64 = ctx.r11.s64 + -23112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x825856A0;
	sub_823F4FE8(ctx, base);
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

__attribute__((alias("__imp__sub_825856B8"))) PPC_WEAK_FUNC(sub_825856B8);
PPC_FUNC_IMPL(__imp__sub_825856B8) {
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
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x825856DC;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x825856E4;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82585700
	if (ctx.cr0.eq) goto loc_82585700;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,4792
	ctx.r11.s64 = ctx.r11.s64 + 4792;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82585704
	goto loc_82585704;
loc_82585700:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82585704:
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,8952
	ctx.r4.s64 = ctx.r11.s64 + 8952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82585720;
	sub_823F4FE8(ctx, base);
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

__attribute__((alias("__imp__sub_82585738"))) PPC_WEAK_FUNC(sub_82585738);
PPC_FUNC_IMPL(__imp__sub_82585738) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,1228
	ctx.r11.s64 = ctx.r11.s64 + 1228;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82c09c40
	ctx.lr = 0x82585760;
	sub_82C09C40(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,4812
	ctx.r11.s64 = ctx.r11.s64 + 4812;
	// addi r10,r10,4800
	ctx.r10.s64 = ctx.r10.s64 + 4800;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82585790"))) PPC_WEAK_FUNC(sub_82585790);
PPC_FUNC_IMPL(__imp__sub_82585790) {
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
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x825857B4;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x825857BC;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825857d8
	if (ctx.cr0.eq) goto loc_825857D8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,4888
	ctx.r11.s64 = ctx.r11.s64 + 4888;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825857dc
	goto loc_825857DC;
loc_825857D8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825857DC:
	// lis r11,-32036
	ctx.r11.s64 = -2099511296;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-29944
	ctx.r4.s64 = ctx.r11.s64 + -29944;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x825857F8;
	sub_823F4FE8(ctx, base);
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

__attribute__((alias("__imp__sub_82585810"))) PPC_WEAK_FUNC(sub_82585810);
PPC_FUNC_IMPL(__imp__sub_82585810) {
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
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82585834;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x8258583C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82585858
	if (ctx.cr0.eq) goto loc_82585858;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,4896
	ctx.r11.s64 = ctx.r11.s64 + 4896;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8258585c
	goto loc_8258585C;
loc_82585858:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258585C:
	// lis r11,-32062
	ctx.r11.s64 = -2101215232;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-26128
	ctx.r4.s64 = ctx.r11.s64 + -26128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82585878;
	sub_823F4FE8(ctx, base);
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

__attribute__((alias("__imp__sub_82585890"))) PPC_WEAK_FUNC(sub_82585890);
PPC_FUNC_IMPL(__imp__sub_82585890) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,1308
	ctx.r11.s64 = ctx.r11.s64 + 1308;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82c09c40
	ctx.lr = 0x825858B8;
	sub_82C09C40(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,4916
	ctx.r11.s64 = ctx.r11.s64 + 4916;
	// addi r10,r10,4904
	ctx.r10.s64 = ctx.r10.s64 + 4904;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_825858E8"))) PPC_WEAK_FUNC(sub_825858E8);
PPC_FUNC_IMPL(__imp__sub_825858E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82585900"))) PPC_WEAK_FUNC(sub_82585900);
PPC_FUNC_IMPL(__imp__sub_82585900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82585908;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82585928;
	sub_823F51A8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823f5040
	ctx.lr = 0x82585930;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82585954
	if (ctx.cr0.eq) goto loc_82585954;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f31,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,4984
	ctx.r11.s64 = ctx.r11.s64 + 4984;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82585958
	goto loc_82585958;
loc_82585954:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82585958:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r11,22760
	ctx.r4.s64 = ctx.r11.s64 + 22760;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82585974;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82585980"))) PPC_WEAK_FUNC(sub_82585980);
PPC_FUNC_IMPL(__imp__sub_82585980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82585998"))) PPC_WEAK_FUNC(sub_82585998);
PPC_FUNC_IMPL(__imp__sub_82585998) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x825859C4;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x825859CC;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825859ec
	if (ctx.cr0.eq) goto loc_825859EC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f31,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,4992
	ctx.r11.s64 = ctx.r11.s64 + 4992;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825859f0
	goto loc_825859F0;
loc_825859EC:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825859F0:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,22912
	ctx.r4.s64 = ctx.r11.s64 + 22912;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82585A0C;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82585A28"))) PPC_WEAK_FUNC(sub_82585A28);
PPC_FUNC_IMPL(__imp__sub_82585A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f3,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82585A48"))) PPC_WEAK_FUNC(sub_82585A48);
PPC_FUNC_IMPL(__imp__sub_82585A48) {
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// bl 0x823f51a8
	ctx.lr = 0x82585A84;
	sub_823F51A8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x823f5040
	ctx.lr = 0x82585A8C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82585ab4
	if (ctx.cr0.eq) goto loc_82585AB4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f31,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f30,8(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,5000
	ctx.r11.s64 = ctx.r11.s64 + 5000;
	// stfs f29,12(r3)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82585ab8
	goto loc_82585AB8;
loc_82585AB4:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82585AB8:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r11,23080
	ctx.r4.s64 = ctx.r11.s64 + 23080;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82585AD4;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82585AF8"))) PPC_WEAK_FUNC(sub_82585AF8);
PPC_FUNC_IMPL(__imp__sub_82585AF8) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// ld r31,72(r4)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r4.u32 + 72);
	// ld r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// lwz r30,24(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ld r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// ld r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// ld r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// ld r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// bctrl 
	ctx.lr = 0x82585B44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82585B60"))) PPC_WEAK_FUNC(sub_82585B60);
PPC_FUNC_IMPL(__imp__sub_82585B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82585B68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r6,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r8,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r8.u64);
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// std r7,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r7.u64);
	// std r9,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r9.u64);
	// std r10,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r10.u64);
	// bl 0x823f51a8
	ctx.lr = 0x82585B98;
	sub_823F51A8(ctx, base);
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x823f5040
	ctx.lr = 0x82585BA0;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82585bcc
	if (ctx.cr0.eq) goto loc_82585BCC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,5008
	ctx.r11.s64 = ctx.r11.s64 + 5008;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a7d730
	ctx.lr = 0x82585BC4;
	sub_82A7D730(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// b 0x82585bd0
	goto loc_82585BD0;
loc_82585BCC:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82585BD0:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,80
	ctx.r6.s64 = 80;
	// addi r4,r11,23288
	ctx.r4.s64 = ctx.r11.s64 + 23288;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82585BEC;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82585BF8"))) PPC_WEAK_FUNC(sub_82585BF8);
PPC_FUNC_IMPL(__imp__sub_82585BF8) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// ld r31,72(r4)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r4.u32 + 72);
	// ld r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// lwz r30,28(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ld r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// ld r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// ld r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// ld r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// bctrl 
	ctx.lr = 0x82585C44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82585C60"))) PPC_WEAK_FUNC(sub_82585C60);
PPC_FUNC_IMPL(__imp__sub_82585C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82585C68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r6,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r8,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r8.u64);
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// std r7,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r7.u64);
	// std r9,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r9.u64);
	// std r10,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r10.u64);
	// bl 0x823f51a8
	ctx.lr = 0x82585C98;
	sub_823F51A8(ctx, base);
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x823f5040
	ctx.lr = 0x82585CA0;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82585ccc
	if (ctx.cr0.eq) goto loc_82585CCC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,5016
	ctx.r11.s64 = ctx.r11.s64 + 5016;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a7d730
	ctx.lr = 0x82585CC4;
	sub_82A7D730(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// b 0x82585cd0
	goto loc_82585CD0;
loc_82585CCC:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82585CD0:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,80
	ctx.r6.s64 = 80;
	// addi r4,r11,23544
	ctx.r4.s64 = ctx.r11.s64 + 23544;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82585CEC;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82585CF8"))) PPC_WEAK_FUNC(sub_82585CF8);
PPC_FUNC_IMPL(__imp__sub_82585CF8) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// ld r31,72(r4)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r4.u32 + 72);
	// ld r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// lwz r30,32(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ld r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// ld r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// ld r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// ld r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// bctrl 
	ctx.lr = 0x82585D44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82585D60"))) PPC_WEAK_FUNC(sub_82585D60);
PPC_FUNC_IMPL(__imp__sub_82585D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82585D68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r6,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r8,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r8.u64);
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// std r7,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r7.u64);
	// std r9,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r9.u64);
	// std r10,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r10.u64);
	// bl 0x823f51a8
	ctx.lr = 0x82585D98;
	sub_823F51A8(ctx, base);
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x823f5040
	ctx.lr = 0x82585DA0;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82585dcc
	if (ctx.cr0.eq) goto loc_82585DCC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,5024
	ctx.r11.s64 = ctx.r11.s64 + 5024;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a7d730
	ctx.lr = 0x82585DC4;
	sub_82A7D730(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// b 0x82585dd0
	goto loc_82585DD0;
loc_82585DCC:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82585DD0:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,80
	ctx.r6.s64 = 80;
	// addi r4,r11,23800
	ctx.r4.s64 = ctx.r11.s64 + 23800;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82585DEC;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82585DF8"))) PPC_WEAK_FUNC(sub_82585DF8);
PPC_FUNC_IMPL(__imp__sub_82585DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// lbz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lvx128 v1,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82585E18"))) PPC_WEAK_FUNC(sub_82585E18);
PPC_FUNC_IMPL(__imp__sub_82585E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82585E20;
	__savegprlr_29(ctx, base);
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// vor128 v127,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82585E44;
	sub_823F51A8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x823f5040
	ctx.lr = 0x82585E4C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82585e74
	if (ctx.cr0.eq) goto loc_82585E74;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,5032
	ctx.r11.s64 = ctx.r11.s64 + 5032;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stvx128 v127,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82585e78
	goto loc_82585E78;
loc_82585E74:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82585E78:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r4,r11,24056
	ctx.r4.s64 = ctx.r11.s64 + 24056;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82585E94;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v127,r1,r0
	ea = (ctx.r1.u32 + ctx.r0.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82585EA8"))) PPC_WEAK_FUNC(sub_82585EA8);
PPC_FUNC_IMPL(__imp__sub_82585EA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lbz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82585EC0"))) PPC_WEAK_FUNC(sub_82585EC0);
PPC_FUNC_IMPL(__imp__sub_82585EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82585EC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82585EE4;
	sub_823F51A8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823f5040
	ctx.lr = 0x82585EEC;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82585f10
	if (ctx.cr0.eq) goto loc_82585F10;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r31,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r31.u8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,5040
	ctx.r11.s64 = ctx.r11.s64 + 5040;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82585f14
	goto loc_82585F14;
loc_82585F10:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82585F14:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r11,24232
	ctx.r4.s64 = ctx.r11.s64 + 24232;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82585F30;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82585F38"))) PPC_WEAK_FUNC(sub_82585F38);
PPC_FUNC_IMPL(__imp__sub_82585F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82585F40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82585F58;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x82585F60;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82585f80
	if (ctx.cr0.eq) goto loc_82585F80;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,5048
	ctx.r11.s64 = ctx.r11.s64 + 5048;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82585f84
	goto loc_82585F84;
loc_82585F80:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82585F84:
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,25040
	ctx.r4.s64 = ctx.r11.s64 + 25040;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82585FA0;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82585FA8"))) PPC_WEAK_FUNC(sub_82585FA8);
PPC_FUNC_IMPL(__imp__sub_82585FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,29772
	ctx.r11.s64 = ctx.r11.s64 + 29772;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82585FB8"))) PPC_WEAK_FUNC(sub_82585FB8);
PPC_FUNC_IMPL(__imp__sub_82585FB8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82586120
	sub_82586120(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82585FC0"))) PPC_WEAK_FUNC(sub_82585FC0);
PPC_FUNC_IMPL(__imp__sub_82585FC0) {
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
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82585FE4;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x82585FEC;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82586008
	if (ctx.cr0.eq) goto loc_82586008;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,5056
	ctx.r11.s64 = ctx.r11.s64 + 5056;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8258600c
	goto loc_8258600C;
loc_82586008:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258600C:
	// lis r11,-32036
	ctx.r11.s64 = -2099511296;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-29976
	ctx.r4.s64 = ctx.r11.s64 + -29976;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82586028;
	sub_823F4FE8(ctx, base);
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

__attribute__((alias("__imp__sub_82586040"))) PPC_WEAK_FUNC(sub_82586040);
PPC_FUNC_IMPL(__imp__sub_82586040) {
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
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82586064;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x8258606C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82586088
	if (ctx.cr0.eq) goto loc_82586088;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,5064
	ctx.r11.s64 = ctx.r11.s64 + 5064;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8258608c
	goto loc_8258608C;
loc_82586088:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258608C:
	// lis r11,-32062
	ctx.r11.s64 = -2101215232;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-26128
	ctx.r4.s64 = ctx.r11.s64 + -26128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x825860A8;
	sub_823F4FE8(ctx, base);
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

__attribute__((alias("__imp__sub_825860C0"))) PPC_WEAK_FUNC(sub_825860C0);
PPC_FUNC_IMPL(__imp__sub_825860C0) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82c09c68
	ctx.lr = 0x825860E4;
	sub_82C09C68(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-708
	ctx.r11.s64 = ctx.r11.s64 + -708;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq 0x82586100
	if (ctx.cr0.eq) goto loc_82586100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82586100;
	sub_823FD208(ctx, base);
loc_82586100:
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

__attribute__((alias("__imp__sub_82586120"))) PPC_WEAK_FUNC(sub_82586120);
PPC_FUNC_IMPL(__imp__sub_82586120) {
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82c09c68
	ctx.lr = 0x82586144;
	sub_82C09C68(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82586154
	if (ctx.cr0.eq) goto loc_82586154;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82586154;
	sub_823FD208(ctx, base);
loc_82586154:
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

__attribute__((alias("__imp__sub_82586170"))) PPC_WEAK_FUNC(sub_82586170);
PPC_FUNC_IMPL(__imp__sub_82586170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82586178;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3280);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825862f8
	if (ctx.cr6.eq) goto loc_825862F8;
	// lbz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825862d0
	if (ctx.cr0.eq) goto loc_825862D0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,2416(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2416);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r7,720
	ctx.r7.s64 = 720;
	// li r6,1280
	ctx.r6.s64 = 1280;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f31,3368(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3368);
	ctx.f31.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f30,3648(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3648);
	ctx.f30.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r29,16(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x823f5a00
	ctx.lr = 0x825861D8;
	sub_823F5A00(ctx, base);
	// lwz r3,2416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2416);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825861F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// lwz r3,-27412(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27412);
	// bl 0x82c3f050
	ctx.lr = 0x82586204;
	sub_82C3F050(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824676a0
	ctx.lr = 0x82586218;
	sub_824676A0(ctx, base);
	// lis r28,-31954
	ctx.r28.s64 = -2094137344;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r30,r28,27416
	ctx.r30.s64 = ctx.r28.s64 + 27416;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r30,2600
	ctx.r10.s64 = ctx.r30.s64 + 2600;
	// lwz r11,27416(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27416);
	// mulli r11,r11,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82470538
	ctx.lr = 0x8258623C;
	sub_82470538(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823e8de0
	ctx.lr = 0x82586248;
	sub_823E8DE0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8246cc50
	ctx.lr = 0x82586260;
	sub_8246CC50(ctx, base);
	// lwz r11,27416(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27416);
	// addi r5,r30,2600
	ctx.r5.s64 = ctx.r30.s64 + 2600;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r9,0
	ctx.r9.s64 = 0;
	// mulli r11,r11,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r4,r30,3120
	ctx.r4.s64 = ctx.r30.s64 + 3120;
	// addi r3,r31,3296
	ctx.r3.s64 = ctx.r31.s64 + 3296;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bl 0x82c3e310
	ctx.lr = 0x82586298;
	sub_82C3E310(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r4,3269(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3269);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x823f10c8
	ctx.lr = 0x825862D0;
	sub_823F10C8(ctx, base);
loc_825862D0:
	// lwz r11,3280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825862e8
	if (ctx.cr0.eq) goto loc_825862E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257d758
	ctx.lr = 0x825862E8;
	sub_8257D758(ctx, base);
loc_825862E8:
	// addi r3,r31,2280
	ctx.r3.s64 = ctx.r31.s64 + 2280;
	// bl 0x823e6738
	ctx.lr = 0x825862F0;
	sub_823E6738(ctx, base);
	// lwz r3,3280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// bl 0x825e4d28
	ctx.lr = 0x825862F8;
	sub_825E4D28(ctx, base);
loc_825862F8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82586308"))) PPC_WEAK_FUNC(sub_82586308);
PPC_FUNC_IMPL(__imp__sub_82586308) {
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
	// lwz r3,2416(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2416);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82586330;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,3277(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3277, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82586350"))) PPC_WEAK_FUNC(sub_82586350);
PPC_FUNC_IMPL(__imp__sub_82586350) {
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
	// lwz r3,2416(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2416);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82586378;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,3277(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3277, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82586398"))) PPC_WEAK_FUNC(sub_82586398);
PPC_FUNC_IMPL(__imp__sub_82586398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// lis r8,-31954
	ctx.r8.s64 = -2094137344;
	// rlwinm r9,r3,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,27064
	ctx.r11.s64 = ctx.r11.s64 + 27064;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r10,27180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27180);
	// lwz r9,27184(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27184);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// mftb r10
	ctx.r10.u64 = PPC_QUERY_TIMEBASE();
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r8,50
	ctx.r8.s64 = 50;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// divwu r8,r10,r8
	ctx.r8.u32 = ctx.r8.u32 ? ctx.r10.u32 / ctx.r8.u32 : 0;
	// subf r10,r9,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r9.u64;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// subf r9,r7,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r7.u64;
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// blt cr6,0x825863fc
	if (ctx.cr6.lt) goto loc_825863FC;
	// addi r10,r1,-12
	ctx.r10.s64 = ctx.r1.s64 + -12;
loc_825863FC:
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,27048(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27048);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// subfc r10,r10,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r10.u32;
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// stb r10,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82586420"))) PPC_WEAK_FUNC(sub_82586420);
PPC_FUNC_IMPL(__imp__sub_82586420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lfs f0,5392(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5392);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,5392
	ctx.r11.s64 = ctx.r3.s64 + 5392;
	// stfs f0,5488(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5488, temp.u32);
	// addi r10,r3,5488
	ctx.r10.s64 = ctx.r3.s64 + 5488;
	// lfs f0,5396(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5396);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// stfs f0,5492(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5492, temp.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// stvx128 v63,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,32
	ctx.r6.s64 = 32;
	// lvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stvx128 v63,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,48
	ctx.r7.s64 = 48;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,5456(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5456);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5552(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5552, temp.u32);
	// lfs f0,5460(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5460);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5556(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5556, temp.u32);
	// lwz r10,5464(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5464);
	// stw r10,5560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5560, ctx.r10.u32);
	// lbz r10,5468(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5468);
	// stb r10,5564(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5564, ctx.r10.u8);
	// lbz r10,5469(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5469);
	// stb r10,5565(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5565, ctx.r10.u8);
	// lwz r10,5472(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5472);
	// stw r10,5568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5568, ctx.r10.u32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5392(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5392, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5396(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5396, temp.u32);
	// lvx128 v63,r4,r5
	ea = (ctx.r4.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5456(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5456, temp.u32);
	// lfs f0,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5460(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5460, temp.u32);
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r11,5464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5464, ctx.r11.u32);
	// lbz r11,76(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 76);
	// stb r11,5468(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5468, ctx.r11.u8);
	// lbz r11,77(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 77);
	// stb r11,5469(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5469, ctx.r11.u8);
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// stw r11,5472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5472, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825864F8"))) PPC_WEAK_FUNC(sub_825864F8);
PPC_FUNC_IMPL(__imp__sub_825864F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r4,16
	ctx.r3.s64 = ctx.r4.s64 + 16;
	// b 0x824869a8
	sub_824869A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82586500"))) PPC_WEAK_FUNC(sub_82586500);
PPC_FUNC_IMPL(__imp__sub_82586500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r7,48
	ctx.r7.s64 = 48;
	// beq 0x825865e0
	if (ctx.cr0.eq) goto loc_825865E0;
	// lfs f0,5392(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5392);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,5392
	ctx.r11.s64 = ctx.r3.s64 + 5392;
	// stfs f0,5584(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5584, temp.u32);
	// addi r10,r3,5584
	ctx.r10.s64 = ctx.r3.s64 + 5584;
	// lfs f0,5396(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5396);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r3,5488
	ctx.r9.s64 = ctx.r3.s64 + 5488;
	// stfs f0,5588(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5588, temp.u32);
	// addi r8,r3,5680
	ctx.r8.s64 = ctx.r3.s64 + 5680;
	// lvx128 v63,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,5456(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5456);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5648(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5648, temp.u32);
	// lfs f0,5460(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5460);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5652(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5652, temp.u32);
	// lwz r11,5464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5464);
	// stw r11,5656(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5656, ctx.r11.u32);
	// lbz r11,5468(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5468);
	// stb r11,5660(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5660, ctx.r11.u8);
	// lbz r11,5469(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5469);
	// stb r11,5661(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5661, ctx.r11.u8);
	// lwz r11,5472(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5472);
	// stw r11,5664(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5664, ctx.r11.u32);
	// lfs f0,5488(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5680(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5680, temp.u32);
	// lfs f0,5492(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5492);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5684(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5684, temp.u32);
	// lvx128 v63,r9,r5
	ea = (ctx.r9.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r8,r5
	ea = (ctx.r8.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r8,r6
	ea = (ctx.r8.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r9,r7
	ea = (ctx.r9.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r8,r7
	ea = (ctx.r8.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,5552(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5552);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5744(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5744, temp.u32);
	// lfs f0,5556(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5556);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5748(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5748, temp.u32);
	// lwz r11,5560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5560);
	// stw r11,5752(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5752, ctx.r11.u32);
	// lbz r11,5564(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5564);
	// stb r11,5756(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5756, ctx.r11.u8);
	// lbz r11,5565(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5565);
	// stb r11,5757(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5757, ctx.r11.u8);
	// lwz r11,5568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5568);
	// stw r11,5760(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5760, ctx.r11.u32);
	// lwz r11,4872(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4872);
	// stw r11,4876(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4876, ctx.r11.u32);
	// b 0x825866a8
	goto loc_825866A8;
loc_825865E0:
	// lfs f0,5584(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5584);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,5584
	ctx.r11.s64 = ctx.r3.s64 + 5584;
	// stfs f0,5392(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5392, temp.u32);
	// addi r10,r3,5392
	ctx.r10.s64 = ctx.r3.s64 + 5392;
	// lfs f0,5588(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5588);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r3,5680
	ctx.r9.s64 = ctx.r3.s64 + 5680;
	// stfs f0,5396(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5396, temp.u32);
	// addi r8,r3,5488
	ctx.r8.s64 = ctx.r3.s64 + 5488;
	// lvx128 v63,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,5648(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5648);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5456(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5456, temp.u32);
	// lfs f0,5652(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5652);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5460(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5460, temp.u32);
	// lwz r11,5656(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5656);
	// stw r11,5464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5464, ctx.r11.u32);
	// lbz r11,5660(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5660);
	// stb r11,5468(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5468, ctx.r11.u8);
	// lbz r11,5661(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5661);
	// stb r11,5469(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5469, ctx.r11.u8);
	// lwz r11,5664(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5664);
	// stw r11,5472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5472, ctx.r11.u32);
	// lfs f0,5680(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5680);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5488(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5488, temp.u32);
	// lfs f0,5684(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5684);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5492(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5492, temp.u32);
	// lvx128 v63,r9,r5
	ea = (ctx.r9.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r8,r5
	ea = (ctx.r8.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r8,r6
	ea = (ctx.r8.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r9,r7
	ea = (ctx.r9.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r8,r7
	ea = (ctx.r8.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,5744(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5552(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5552, temp.u32);
	// lfs f0,5748(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5748);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5556(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5556, temp.u32);
	// lwz r11,5752(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5752);
	// stw r11,5560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5560, ctx.r11.u32);
	// lbz r11,5756(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5756);
	// stb r11,5564(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5564, ctx.r11.u8);
	// lbz r11,5757(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5757);
	// stb r11,5565(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5565, ctx.r11.u8);
	// lwz r11,5760(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5760);
	// stw r11,5568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5568, ctx.r11.u32);
	// lwz r11,4876(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4876);
	// stw r11,4872(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4872, ctx.r11.u32);
loc_825866A8:
	// stb r4,5776(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5776, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825866B0"))) PPC_WEAK_FUNC(sub_825866B0);
PPC_FUNC_IMPL(__imp__sub_825866B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddf8
	ctx.lr = 0x825866B8;
	__savegprlr_24(ctx, base);
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r9,2416(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2416);
	// std r4,336(r1)
	PPC_STORE_U64(ctx.r1.u32 + 336, ctx.r4.u64);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r28,r11,27416
	ctx.r28.s64 = ctx.r11.s64 + 27416;
	// std r5,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.r5.u64);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// std r6,352(r1)
	PPC_STORE_U64(ctx.r1.u32 + 352, ctx.r6.u64);
	// addi r10,r28,2600
	ctx.r10.s64 = ctx.r28.s64 + 2600;
	// lwz r11,27416(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27416);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,16(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mulli r11,r11,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f8150
	ctx.lr = 0x82586704;
	sub_823F8150(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r7,172(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,168(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f31,3648(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3648);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,3368(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3368);
	ctx.f30.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x823f5a00
	ctx.lr = 0x82586734;
	sub_823F5A00(ctx, base);
	// lwz r3,2424(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2424);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82586748;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,336(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825868e0
	if (ctx.cr6.lt) goto loc_825868E0;
	// beq cr6,0x825867cc
	if (ctx.cr6.eq) goto loc_825867CC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8258697c
	if (!ctx.cr6.lt) goto loc_8258697C;
	// li r30,0
	ctx.r30.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f10c8
	ctx.lr = 0x82586798;
	sub_823F10C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246cc50
	ctx.lr = 0x825867B0;
	sub_8246CC50(ctx, base);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lfs f1,348(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r27,3296
	ctx.r3.s64 = ctx.r27.s64 + 3296;
	// bl 0x82c3ec98
	ctx.lr = 0x825867C8;
	sub_82C3EC98(ctx, base);
	// b 0x8258697c
	goto loc_8258697C;
loc_825867CC:
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r26,9244(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9244);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r25,9260(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9260);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r24,9240(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9240);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823f10c8
	ctx.lr = 0x82586810;
	sub_823F10C8(ctx, base);
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// lwz r3,-27412(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27412);
	// bl 0x82c3f050
	ctx.lr = 0x8258681C;
	sub_82C3F050(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824676a0
	ctx.lr = 0x82586830;
	sub_824676A0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r10,r28,2600
	ctx.r10.s64 = ctx.r28.s64 + 2600;
	// mulli r11,r11,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82470538
	ctx.lr = 0x8258684C;
	sub_82470538(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e8de0
	ctx.lr = 0x82586858;
	sub_823E8DE0(ctx, base);
	// addi r28,r27,3296
	ctx.r28.s64 = ctx.r27.s64 + 3296;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f31,340(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	ctx.f31.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82c3e8e0
	ctx.lr = 0x8258688C;
	sub_82C3E8E0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824676a0
	ctx.lr = 0x825868A0;
	sub_824676A0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82470538
	ctx.lr = 0x825868B0;
	sub_82470538(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e8de0
	ctx.lr = 0x825868BC;
	sub_823E8DE0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246cc50
	ctx.lr = 0x825868D4;
	sub_8246CC50(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r30,210(r1)
	PPC_STORE_U8(ctx.r1.u32 + 210, ctx.r30.u8);
	// b 0x8258693c
	goto loc_8258693C;
loc_825868E0:
	// li r30,0
	ctx.r30.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f10c8
	ctx.lr = 0x82586918;
	sub_823F10C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246cc50
	ctx.lr = 0x82586930;
	sub_8246CC50(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r27,3296
	ctx.r3.s64 = ctx.r27.s64 + 3296;
	// stb r10,210(r1)
	PPC_STORE_U8(ctx.r1.u32 + 210, ctx.r10.u8);
loc_8258693C:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f0,344(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,348(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	ctx.f13.f64 = double(temp.f32);
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// lfs f12,352(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	ctx.f12.f64 = double(temp.f32);
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stb r30,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r30.u8);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// stfs f13,200(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stb r30,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r30.u8);
	// stfs f12,204(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stb r30,209(r1)
	PPC_STORE_U8(ctx.r1.u32 + 209, ctx.r30.u8);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x82c3ea60
	ctx.lr = 0x8258697C;
	sub_82C3EA60(ctx, base);
loc_8258697C:
	// lwz r3,2424(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2424);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82586990;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82a7de48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825869A0"))) PPC_WEAK_FUNC(sub_825869A0);
PPC_FUNC_IMPL(__imp__sub_825869A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x825869A8;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,4
	ctx.r11.s64 = 4;
	// lfs f30,3296(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3296);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f31.f64 = double(temp.f32);
	// fmr f13,f30
	ctx.f13.f64 = ctx.f30.f64;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_825869D4:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825869e0
	if (ctx.cr0.eq) goto loc_825869E0;
	// fmuls f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_825869E0:
	// rlwinm. r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825869f0
	if (ctx.cr0.eq) goto loc_825869F0;
	// fmuls f13,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// b 0x825869d4
	goto loc_825869D4;
loc_825869F0:
	// fsubs f12,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// li r11,20
	ctx.r11.s64 = 20;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// fctidz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82586A0C:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82586a18
	if (ctx.cr0.eq) goto loc_82586A18;
	// fmuls f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82586A18:
	// rlwinm. r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82586a28
	if (ctx.cr0.eq) goto loc_82586A28;
	// fmuls f0,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// b 0x82586a0c
	goto loc_82586A0C;
loc_82586A28:
	// fsubs f0,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r9,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// and r28,r10,r9
	ctx.r28.u64 = ctx.r10.u64 & ctx.r9.u64;
	// bne 0x82586ad8
	if (!ctx.cr0.eq) goto loc_82586AD8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// bne cr6,0x82586a60
	if (!ctx.cr6.eq) goto loc_82586A60;
	// lfs f1,3648(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3648);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82586b30
	goto loc_82586B30;
loc_82586A60:
	// lfs f29,3648(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3648);
	ctx.f29.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82586A6C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8257ffd0
	ctx.lr = 0x82586A78;
	sub_8257FFD0(ctx, base);
	// subfic r11,r31,20
	ctx.xer.ca = ctx.r31.u32 <= 20;
	ctx.r11.u64 = static_cast<uint64_t>(20) - ctx.r31.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// srw r11,r28,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// cmplwi cr6,r31,20
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 20, ctx.xer);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmadds f29,f1,f0,f29
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f29.f64));
	// blt cr6,0x82586a6c
	if (ctx.cr6.lt) goto loc_82586A6C;
	// li r11,14
	ctx.r11.s64 = 14;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82586AB0:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82586abc
	if (ctx.cr0.eq) goto loc_82586ABC;
	// fmuls f0,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
loc_82586ABC:
	// rlwinm. r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82586acc
	if (ctx.cr0.eq) goto loc_82586ACC;
	// fmuls f30,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// b 0x82586ab0
	goto loc_82586AB0;
loc_82586ACC:
	// fdivs f0,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// b 0x82586b30
	goto loc_82586B30;
loc_82586AD8:
	// addi r29,r11,-15
	ctx.r29.s64 = ctx.r11.s64 + -15;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82586AE4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8257ffd0
	ctx.lr = 0x82586AF0;
	sub_8257FFD0(ctx, base);
	// subfic r11,r31,20
	ctx.xer.ca = ctx.r31.u32 <= 20;
	ctx.r11.u64 = static_cast<uint64_t>(20) - ctx.r31.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// srw r11,r28,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// cmplwi cr6,r31,20
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 20, ctx.xer);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmadds f31,f1,f0,f31
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f31.f64));
	// blt cr6,0x82586ae4
	if (ctx.cr6.lt) goto loc_82586AE4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8257ffd0
	ctx.lr = 0x82586B2C;
	sub_8257FFD0(ctx, base);
	// fmuls f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
loc_82586B30:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82586B48"))) PPC_WEAK_FUNC(sub_82586B48);
PPC_FUNC_IMPL(__imp__sub_82586B48) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,3192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3192, ctx.r4.u32);
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// beq 0x82586b64
	if (ctx.cr0.eq) goto loc_82586B64;
	// li r11,1000
	ctx.r11.s64 = 1000;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
loc_82586B64:
	// rlwinm. r10,r4,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82586b88
	if (ctx.cr0.eq) goto loc_82586B88;
	// cmplwi cr6,r11,200
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 200, ctx.xer);
	// bge cr6,0x82586b80
	if (!ctx.cr6.lt) goto loc_82586B80;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,-1024
	ctx.r11.s64 = ctx.r11.s64 + -1024;
	// b 0x82586b84
	goto loc_82586B84;
loc_82586B80:
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
loc_82586B84:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82586B88:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82586b94
	if (!ctx.cr6.eq) goto loc_82586B94;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82586B94:
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// stw r11,27048(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27048, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82586BA0"))) PPC_WEAK_FUNC(sub_82586BA0);
PPC_FUNC_IMPL(__imp__sub_82586BA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2416);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x82c3f0e0
	sub_82C3F0E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82586BB0"))) PPC_WEAK_FUNC(sub_82586BB0);
PPC_FUNC_IMPL(__imp__sub_82586BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,2416(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2416);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,5868(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5868);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-31932
	ctx.r8.s64 = -2092695552;
	// lfs f11,5904(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5904);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,5892(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5892);
	ctx.f10.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f9,5880(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5880);
	ctx.f9.f64 = double(temp.f32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lfs f13,3296(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3296);
	ctx.f13.f64 = double(temp.f32);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// li r4,2
	ctx.r4.s64 = 2;
	// fmsubs f8,f3,f13,f0
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 - ctx.f0.f64));
	// lbz r11,19360(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 19360);
	// fmsubs f7,f2,f13,f0
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 - ctx.f0.f64));
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// fmsubs f13,f1,f13,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 - ctx.f0.f64));
	// lwz r10,200(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 200);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 & ctx.r7.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// fmuls f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f10,f7,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fnmsubs f1,f13,f9,f0
	ctx.f1.f64 = double(float(-(ctx.f13.f64 * ctx.f9.f64 - ctx.f0.f64)));
	// fmuls f3,f11,f12
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f2,f10,f12
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82586C28"))) PPC_WEAK_FUNC(sub_82586C28);
PPC_FUNC_IMPL(__imp__sub_82586C28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82586C30;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r3,2280
	ctx.r3.s64 = ctx.r3.s64 + 2280;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x823e6738
	ctx.lr = 0x82586C50;
	sub_823E6738(ctx, base);
	// stfd f1,5856(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 5856, ctx.f1.u64);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x82586c78
	if (ctx.cr6.lt) goto loc_82586C78;
	// beq cr6,0x82586c70
	if (ctx.cr6.eq) goto loc_82586C70;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// bge cr6,0x82586c7c
	if (!ctx.cr6.lt) goto loc_82586C7C;
	// stfs f31,5900(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5900, temp.u32);
	// b 0x82586c7c
	goto loc_82586C7C;
loc_82586C70:
	// stfs f31,5888(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5888, temp.u32);
	// b 0x82586c7c
	goto loc_82586C7C;
loc_82586C78:
	// stfs f31,5876(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5876, temp.u32);
loc_82586C7C:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82586ccc
	if (ctx.cr0.eq) goto loc_82586CCC;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x82586ca8
	if (ctx.cr6.lt) goto loc_82586CA8;
	// beq cr6,0x82586ca0
	if (ctx.cr6.eq) goto loc_82586CA0;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// bge cr6,0x82586cac
	if (!ctx.cr6.lt) goto loc_82586CAC;
	// stfs f31,5896(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5896, temp.u32);
	// b 0x82586cac
	goto loc_82586CAC;
loc_82586CA0:
	// stfs f31,5884(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5884, temp.u32);
	// b 0x82586cac
	goto loc_82586CAC;
loc_82586CA8:
	// stfs f31,5872(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5872, temp.u32);
loc_82586CAC:
	// lfs f1,5872(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5872);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,5884(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5884);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,5896(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5896);
	ctx.f3.f64 = double(temp.f32);
	// stfs f1,5876(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5876, temp.u32);
	// stfs f2,5888(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5888, temp.u32);
	// stfs f3,5900(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5900, temp.u32);
	// bl 0x82586bb0
	ctx.lr = 0x82586CCC;
	sub_82586BB0(ctx, base);
loc_82586CCC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82586CD8"))) PPC_WEAK_FUNC(sub_82586CD8);
PPC_FUNC_IMPL(__imp__sub_82586CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,5856(r3)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r3.u32 + 5856);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfd f31,3728(r11)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3728);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82586d94
	if (!ctx.cr6.gt) goto loc_82586D94;
	// addi r3,r3,2280
	ctx.r3.s64 = ctx.r3.s64 + 2280;
	// bl 0x823e6738
	ctx.lr = 0x82586D10;
	sub_823E6738(ctx, base);
	// lfd f0,5856(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 5856);
	// fsub f13,f1,f0
	ctx.f13.f64 = ctx.f1.f64 - ctx.f0.f64;
	// lfs f12,5864(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5864);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,3512(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3512);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// fdiv f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 / ctx.f12.f64;
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82586d40
	if (ctx.cr6.lt) goto loc_82586D40;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_82586D40:
	// lfs f0,5896(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5896);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,5884(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5884);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,5872(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5872);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,5900(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5900);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,5888(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5888);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f9,5876(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5876);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfd f8,0(r11)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fsubs f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// frsp f30,f8
	ctx.f30.f64 = double(float(ctx.f8.f64));
	// fmadds f3,f11,f30,f0
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f30.f64 + ctx.f0.f64));
	// fmadds f2,f10,f30,f13
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f30.f64 + ctx.f13.f64));
	// fmadds f1,f9,f30,f12
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f30.f64 + ctx.f12.f64));
	// bl 0x82586bb0
	ctx.lr = 0x82586D80;
	sub_82586BB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3368(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// ble cr6,0x82586d94
	if (!ctx.cr6.gt) goto loc_82586D94;
	// stfd f31,5856(r31)
	PPC_STORE_U64(ctx.r31.u32 + 5856, ctx.f31.u64);
loc_82586D94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82586DB0"))) PPC_WEAK_FUNC(sub_82586DB0);
PPC_FUNC_IMPL(__imp__sub_82586DB0) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r31,r11,19796
	ctx.r31.s64 = ctx.r11.s64 + 19796;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82586DD0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
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

__attribute__((alias("__imp__sub_82586DF8"))) PPC_WEAK_FUNC(sub_82586DF8);
PPC_FUNC_IMPL(__imp__sub_82586DF8) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r31,r11,19796
	ctx.r31.s64 = ctx.r11.s64 + 19796;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82586E18;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	// bl 0x831ece7c
	ctx.lr = 0x82586E30;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82586E48"))) PPC_WEAK_FUNC(sub_82586E48);
PPC_FUNC_IMPL(__imp__sub_82586E48) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r31,r11,20052
	ctx.r31.s64 = ctx.r11.s64 + 20052;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82586E68;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
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

__attribute__((alias("__imp__sub_82586E90"))) PPC_WEAK_FUNC(sub_82586E90);
PPC_FUNC_IMPL(__imp__sub_82586E90) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r31,r11,20052
	ctx.r31.s64 = ctx.r11.s64 + 20052;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82586EB0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	// bl 0x831ece7c
	ctx.lr = 0x82586EC8;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82586EE0"))) PPC_WEAK_FUNC(sub_82586EE0);
PPC_FUNC_IMPL(__imp__sub_82586EE0) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r31,r11,19580
	ctx.r31.s64 = ctx.r11.s64 + 19580;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82586F00;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
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

__attribute__((alias("__imp__sub_82586F28"))) PPC_WEAK_FUNC(sub_82586F28);
PPC_FUNC_IMPL(__imp__sub_82586F28) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r31,r11,19580
	ctx.r31.s64 = ctx.r11.s64 + 19580;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82586F48;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	// bl 0x831ece7c
	ctx.lr = 0x82586F60;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82586F78"))) PPC_WEAK_FUNC(sub_82586F78);
PPC_FUNC_IMPL(__imp__sub_82586F78) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r31,r11,19472
	ctx.r31.s64 = ctx.r11.s64 + 19472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82586F98;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
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

__attribute__((alias("__imp__sub_82586FC0"))) PPC_WEAK_FUNC(sub_82586FC0);
PPC_FUNC_IMPL(__imp__sub_82586FC0) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r31,r11,19472
	ctx.r31.s64 = ctx.r11.s64 + 19472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82586FE0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	// bl 0x831ece7c
	ctx.lr = 0x82586FF8;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82587010"))) PPC_WEAK_FUNC(sub_82587010);
PPC_FUNC_IMPL(__imp__sub_82587010) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r31,r11,19952
	ctx.r31.s64 = ctx.r11.s64 + 19952;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82587030;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
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

__attribute__((alias("__imp__sub_82587058"))) PPC_WEAK_FUNC(sub_82587058);
PPC_FUNC_IMPL(__imp__sub_82587058) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r31,r11,19952
	ctx.r31.s64 = ctx.r11.s64 + 19952;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82587078;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	// bl 0x831ece7c
	ctx.lr = 0x82587090;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_825870A8"))) PPC_WEAK_FUNC(sub_825870A8);
PPC_FUNC_IMPL(__imp__sub_825870A8) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r31,r11,20000
	ctx.r31.s64 = ctx.r11.s64 + 20000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x825870C8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
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

__attribute__((alias("__imp__sub_825870F0"))) PPC_WEAK_FUNC(sub_825870F0);
PPC_FUNC_IMPL(__imp__sub_825870F0) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r31,r11,20000
	ctx.r31.s64 = ctx.r11.s64 + 20000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82587110;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	// bl 0x831ece7c
	ctx.lr = 0x82587128;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82587140"))) PPC_WEAK_FUNC(sub_82587140);
PPC_FUNC_IMPL(__imp__sub_82587140) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r31,r11,19628
	ctx.r31.s64 = ctx.r11.s64 + 19628;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82587160;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
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

__attribute__((alias("__imp__sub_82587188"))) PPC_WEAK_FUNC(sub_82587188);
PPC_FUNC_IMPL(__imp__sub_82587188) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r31,r11,19628
	ctx.r31.s64 = ctx.r11.s64 + 19628;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x825871A8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	// bl 0x831ece7c
	ctx.lr = 0x825871C0;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_825871D8"))) PPC_WEAK_FUNC(sub_825871D8);
PPC_FUNC_IMPL(__imp__sub_825871D8) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r31,r11,19520
	ctx.r31.s64 = ctx.r11.s64 + 19520;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x825871F8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
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

__attribute__((alias("__imp__sub_82587220"))) PPC_WEAK_FUNC(sub_82587220);
PPC_FUNC_IMPL(__imp__sub_82587220) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r31,r11,19520
	ctx.r31.s64 = ctx.r11.s64 + 19520;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82587240;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	// bl 0x831ece7c
	ctx.lr = 0x82587258;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82587270"))) PPC_WEAK_FUNC(sub_82587270);
PPC_FUNC_IMPL(__imp__sub_82587270) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r31,r11,19844
	ctx.r31.s64 = ctx.r11.s64 + 19844;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82587290;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
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

__attribute__((alias("__imp__sub_825872B8"))) PPC_WEAK_FUNC(sub_825872B8);
PPC_FUNC_IMPL(__imp__sub_825872B8) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r31,r11,19844
	ctx.r31.s64 = ctx.r11.s64 + 19844;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x825872D8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	// bl 0x831ece7c
	ctx.lr = 0x825872F0;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82587308"))) PPC_WEAK_FUNC(sub_82587308);
PPC_FUNC_IMPL(__imp__sub_82587308) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r31,r11,13316
	ctx.r31.s64 = ctx.r11.s64 + 13316;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82587328;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
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

__attribute__((alias("__imp__sub_82587350"))) PPC_WEAK_FUNC(sub_82587350);
PPC_FUNC_IMPL(__imp__sub_82587350) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r31,r11,13316
	ctx.r31.s64 = ctx.r11.s64 + 13316;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82587370;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	// bl 0x831ece7c
	ctx.lr = 0x82587388;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_825873A0"))) PPC_WEAK_FUNC(sub_825873A0);
PPC_FUNC_IMPL(__imp__sub_825873A0) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r31,r11,18988
	ctx.r31.s64 = ctx.r11.s64 + 18988;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x825873C0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
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

__attribute__((alias("__imp__sub_825873E8"))) PPC_WEAK_FUNC(sub_825873E8);
PPC_FUNC_IMPL(__imp__sub_825873E8) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r31,r11,18988
	ctx.r31.s64 = ctx.r11.s64 + 18988;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82587408;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	// bl 0x831ece7c
	ctx.lr = 0x82587420;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82587438"))) PPC_WEAK_FUNC(sub_82587438);
PPC_FUNC_IMPL(__imp__sub_82587438) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r31,r11,-18048
	ctx.r31.s64 = ctx.r11.s64 + -18048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82587458;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
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

__attribute__((alias("__imp__sub_82587480"))) PPC_WEAK_FUNC(sub_82587480);
PPC_FUNC_IMPL(__imp__sub_82587480) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r31,r11,-18048
	ctx.r31.s64 = ctx.r11.s64 + -18048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x825874A0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	// bl 0x831ece7c
	ctx.lr = 0x825874B8;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_825874D0"))) PPC_WEAK_FUNC(sub_825874D0);
PPC_FUNC_IMPL(__imp__sub_825874D0) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r31,r11,22116
	ctx.r31.s64 = ctx.r11.s64 + 22116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x825874F0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
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

__attribute__((alias("__imp__sub_82587518"))) PPC_WEAK_FUNC(sub_82587518);
PPC_FUNC_IMPL(__imp__sub_82587518) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r31,r11,22116
	ctx.r31.s64 = ctx.r11.s64 + 22116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82587538;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	// bl 0x831ece7c
	ctx.lr = 0x82587550;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82587568"))) PPC_WEAK_FUNC(sub_82587568);
PPC_FUNC_IMPL(__imp__sub_82587568) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r31,r11,22372
	ctx.r31.s64 = ctx.r11.s64 + 22372;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82587588;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
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

__attribute__((alias("__imp__sub_825875B0"))) PPC_WEAK_FUNC(sub_825875B0);
PPC_FUNC_IMPL(__imp__sub_825875B0) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r31,r11,22372
	ctx.r31.s64 = ctx.r11.s64 + 22372;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x825875D0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	// bl 0x831ece7c
	ctx.lr = 0x825875E8;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82587600"))) PPC_WEAK_FUNC(sub_82587600);
PPC_FUNC_IMPL(__imp__sub_82587600) {
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
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r31,r11,5180
	ctx.r31.s64 = ctx.r11.s64 + 5180;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82587620;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
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

__attribute__((alias("__imp__sub_82587648"))) PPC_WEAK_FUNC(sub_82587648);
PPC_FUNC_IMPL(__imp__sub_82587648) {
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
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r31,r11,5180
	ctx.r31.s64 = ctx.r11.s64 + 5180;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82587668;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	// bl 0x831ece7c
	ctx.lr = 0x82587680;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82587698"))) PPC_WEAK_FUNC(sub_82587698);
PPC_FUNC_IMPL(__imp__sub_82587698) {
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
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r31,r11,5092
	ctx.r31.s64 = ctx.r11.s64 + 5092;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x825876B8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
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

__attribute__((alias("__imp__sub_825876E0"))) PPC_WEAK_FUNC(sub_825876E0);
PPC_FUNC_IMPL(__imp__sub_825876E0) {
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
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r31,r11,5092
	ctx.r31.s64 = ctx.r11.s64 + 5092;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82587700;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	// bl 0x831ece7c
	ctx.lr = 0x82587718;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82587730"))) PPC_WEAK_FUNC(sub_82587730);
PPC_FUNC_IMPL(__imp__sub_82587730) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r31,r11,-18100
	ctx.r31.s64 = ctx.r11.s64 + -18100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82587750;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
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

__attribute__((alias("__imp__sub_82587778"))) PPC_WEAK_FUNC(sub_82587778);
PPC_FUNC_IMPL(__imp__sub_82587778) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r31,r11,-18100
	ctx.r31.s64 = ctx.r11.s64 + -18100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82587798;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	// bl 0x831ece7c
	ctx.lr = 0x825877B0;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_825877C8"))) PPC_WEAK_FUNC(sub_825877C8);
PPC_FUNC_IMPL(__imp__sub_825877C8) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r31,r11,-19524
	ctx.r31.s64 = ctx.r11.s64 + -19524;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x825877E8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
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

__attribute__((alias("__imp__sub_82587810"))) PPC_WEAK_FUNC(sub_82587810);
PPC_FUNC_IMPL(__imp__sub_82587810) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r31,r11,-19524
	ctx.r31.s64 = ctx.r11.s64 + -19524;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82587830;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	// bl 0x831ece7c
	ctx.lr = 0x82587848;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82587860"))) PPC_WEAK_FUNC(sub_82587860);
PPC_FUNC_IMPL(__imp__sub_82587860) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r31,r11,-19980
	ctx.r31.s64 = ctx.r11.s64 + -19980;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82587880;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
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

__attribute__((alias("__imp__sub_825878A8"))) PPC_WEAK_FUNC(sub_825878A8);
PPC_FUNC_IMPL(__imp__sub_825878A8) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r31,r11,-19980
	ctx.r31.s64 = ctx.r11.s64 + -19980;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x825878C8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	// bl 0x831ece7c
	ctx.lr = 0x825878E0;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_825878F8"))) PPC_WEAK_FUNC(sub_825878F8);
PPC_FUNC_IMPL(__imp__sub_825878F8) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r31,r11,17940
	ctx.r31.s64 = ctx.r11.s64 + 17940;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82587918;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
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

__attribute__((alias("__imp__sub_82587940"))) PPC_WEAK_FUNC(sub_82587940);
PPC_FUNC_IMPL(__imp__sub_82587940) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r31,r11,17940
	ctx.r31.s64 = ctx.r11.s64 + 17940;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82587960;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	// bl 0x831ece7c
	ctx.lr = 0x82587978;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82587990"))) PPC_WEAK_FUNC(sub_82587990);
PPC_FUNC_IMPL(__imp__sub_82587990) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r31,r11,13540
	ctx.r31.s64 = ctx.r11.s64 + 13540;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x825879B0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
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

__attribute__((alias("__imp__sub_825879D8"))) PPC_WEAK_FUNC(sub_825879D8);
PPC_FUNC_IMPL(__imp__sub_825879D8) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r31,r11,13540
	ctx.r31.s64 = ctx.r11.s64 + 13540;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x825879F8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	// bl 0x831ece7c
	ctx.lr = 0x82587A10;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82587A28"))) PPC_WEAK_FUNC(sub_82587A28);
PPC_FUNC_IMPL(__imp__sub_82587A28) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r31,r11,-20372
	ctx.r31.s64 = ctx.r11.s64 + -20372;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82587A48;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
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

__attribute__((alias("__imp__sub_82587A70"))) PPC_WEAK_FUNC(sub_82587A70);
PPC_FUNC_IMPL(__imp__sub_82587A70) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r31,r11,-20372
	ctx.r31.s64 = ctx.r11.s64 + -20372;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82587A90;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	// bl 0x831ece7c
	ctx.lr = 0x82587AA8;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82587AC0"))) PPC_WEAK_FUNC(sub_82587AC0);
PPC_FUNC_IMPL(__imp__sub_82587AC0) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r31,r11,-21328
	ctx.r31.s64 = ctx.r11.s64 + -21328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82587AE0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
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

__attribute__((alias("__imp__sub_82587B08"))) PPC_WEAK_FUNC(sub_82587B08);
PPC_FUNC_IMPL(__imp__sub_82587B08) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r31,r11,-21328
	ctx.r31.s64 = ctx.r11.s64 + -21328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82587B28;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	// bl 0x831ece7c
	ctx.lr = 0x82587B40;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82587B58"))) PPC_WEAK_FUNC(sub_82587B58);
PPC_FUNC_IMPL(__imp__sub_82587B58) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r31,r11,-21272
	ctx.r31.s64 = ctx.r11.s64 + -21272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82587B78;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
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

__attribute__((alias("__imp__sub_82587BA0"))) PPC_WEAK_FUNC(sub_82587BA0);
PPC_FUNC_IMPL(__imp__sub_82587BA0) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r31,r11,-21272
	ctx.r31.s64 = ctx.r11.s64 + -21272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82587BC0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	// bl 0x831ece7c
	ctx.lr = 0x82587BD8;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82587BF0"))) PPC_WEAK_FUNC(sub_82587BF0);
PPC_FUNC_IMPL(__imp__sub_82587BF0) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r31,r11,12980
	ctx.r31.s64 = ctx.r11.s64 + 12980;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82587C10;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
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

__attribute__((alias("__imp__sub_82587C38"))) PPC_WEAK_FUNC(sub_82587C38);
PPC_FUNC_IMPL(__imp__sub_82587C38) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r31,r11,12980
	ctx.r31.s64 = ctx.r11.s64 + 12980;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82587C58;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	// bl 0x831ece7c
	ctx.lr = 0x82587C70;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82587C88"))) PPC_WEAK_FUNC(sub_82587C88);
PPC_FUNC_IMPL(__imp__sub_82587C88) {
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
	// beq cr6,0x82587cc0
	if (ctx.cr6.eq) goto loc_82587CC0;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r3,r4,8
	ctx.r3.s64 = ctx.r4.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82587CC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82587CC0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82587ce4
	if (ctx.cr6.eq) goto loc_82587CE4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82587CE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82587CE4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82587D00"))) PPC_WEAK_FUNC(sub_82587D00);
PPC_FUNC_IMPL(__imp__sub_82587D00) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,1500
	ctx.r11.s64 = ctx.r11.s64 + 1500;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82c09c40
	ctx.lr = 0x82587D28;
	sub_82C09C40(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,5084
	ctx.r11.s64 = ctx.r11.s64 + 5084;
	// addi r10,r10,5072
	ctx.r10.s64 = ctx.r10.s64 + 5072;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82587D58"))) PPC_WEAK_FUNC(sub_82587D58);
PPC_FUNC_IMPL(__imp__sub_82587D58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82587D70"))) PPC_WEAK_FUNC(sub_82587D70);
PPC_FUNC_IMPL(__imp__sub_82587D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82587D78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82587D94;
	sub_823F51A8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823f5040
	ctx.lr = 0x82587D9C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82587dc0
	if (ctx.cr0.eq) goto loc_82587DC0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,5336
	ctx.r11.s64 = ctx.r11.s64 + 5336;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82587dc4
	goto loc_82587DC4;
loc_82587DC0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82587DC4:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r11,32088
	ctx.r4.s64 = ctx.r11.s64 + 32088;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82587DE0;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82587DE8"))) PPC_WEAK_FUNC(sub_82587DE8);
PPC_FUNC_IMPL(__imp__sub_82587DE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82587E20"))) PPC_WEAK_FUNC(sub_82587E20);
PPC_FUNC_IMPL(__imp__sub_82587E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82587E28;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82587E48;
	sub_823F51A8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x823f5040
	ctx.lr = 0x82587E50;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82587e78
	if (ctx.cr0.eq) goto loc_82587E78;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,5352
	ctx.r11.s64 = ctx.r11.s64 + 5352;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82587e7c
	goto loc_82587E7C;
loc_82587E78:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82587E7C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,12(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r11,32256
	ctx.r4.s64 = ctx.r11.s64 + 32256;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82587E98;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82587EA0"))) PPC_WEAK_FUNC(sub_82587EA0);
PPC_FUNC_IMPL(__imp__sub_82587EA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82587EC0"))) PPC_WEAK_FUNC(sub_82587EC0);
PPC_FUNC_IMPL(__imp__sub_82587EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82587EC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82587EE0;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x82587EE8;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82587f08
	if (ctx.cr0.eq) goto loc_82587F08;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,5368
	ctx.r11.s64 = ctx.r11.s64 + 5368;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82587f0c
	goto loc_82587F0C;
loc_82587F08:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82587F0C:
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,26120
	ctx.r4.s64 = ctx.r11.s64 + 26120;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82587F28;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82587F30"))) PPC_WEAK_FUNC(sub_82587F30);
PPC_FUNC_IMPL(__imp__sub_82587F30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82587F48"))) PPC_WEAK_FUNC(sub_82587F48);
PPC_FUNC_IMPL(__imp__sub_82587F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82587F50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82587F68;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x82587F70;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82587f90
	if (ctx.cr0.eq) goto loc_82587F90;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,5376
	ctx.r11.s64 = ctx.r11.s64 + 5376;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82587f94
	goto loc_82587F94;
loc_82587F90:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82587F94:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,32560
	ctx.r4.s64 = ctx.r11.s64 + 32560;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82587FB0;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82587FB8"))) PPC_WEAK_FUNC(sub_82587FB8);
PPC_FUNC_IMPL(__imp__sub_82587FB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82587FD8"))) PPC_WEAK_FUNC(sub_82587FD8);
PPC_FUNC_IMPL(__imp__sub_82587FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82587FE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82588000;
	sub_823F51A8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x823f5040
	ctx.lr = 0x82588008;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82588030
	if (ctx.cr0.eq) goto loc_82588030;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,5384
	ctx.r11.s64 = ctx.r11.s64 + 5384;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82588034
	goto loc_82588034;
loc_82588030:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82588034:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,12(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r11,32696
	ctx.r4.s64 = ctx.r11.s64 + 32696;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82588050;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82588058"))) PPC_WEAK_FUNC(sub_82588058);
PPC_FUNC_IMPL(__imp__sub_82588058) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82588070"))) PPC_WEAK_FUNC(sub_82588070);
PPC_FUNC_IMPL(__imp__sub_82588070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82588078;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82588090;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x82588098;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825880b8
	if (ctx.cr0.eq) goto loc_825880B8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,5392
	ctx.r11.s64 = ctx.r11.s64 + 5392;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825880bc
	goto loc_825880BC;
loc_825880B8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825880BC:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-32680
	ctx.r4.s64 = ctx.r11.s64 + -32680;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x825880D8;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825880E0"))) PPC_WEAK_FUNC(sub_825880E0);
PPC_FUNC_IMPL(__imp__sub_825880E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82588110"))) PPC_WEAK_FUNC(sub_82588110);
PPC_FUNC_IMPL(__imp__sub_82588110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82588118;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82588138;
	sub_823F51A8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x823f5040
	ctx.lr = 0x82588140;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82588168
	if (ctx.cr0.eq) goto loc_82588168;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,5400
	ctx.r11.s64 = ctx.r11.s64 + 5400;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8258816c
	goto loc_8258816C;
loc_82588168:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258816C:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r5,12(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r11,-32528
	ctx.r4.s64 = ctx.r11.s64 + -32528;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82588188;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82588190"))) PPC_WEAK_FUNC(sub_82588190);
PPC_FUNC_IMPL(__imp__sub_82588190) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825881B0"))) PPC_WEAK_FUNC(sub_825881B0);
PPC_FUNC_IMPL(__imp__sub_825881B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de00
	ctx.lr = 0x825881B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,4
	ctx.r26.s64 = ctx.r3.s64 + 4;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x823f51a8
	ctx.lr = 0x825881DC;
	sub_823F51A8(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x823f5040
	ctx.lr = 0x825881E4;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82588210
	if (ctx.cr0.eq) goto loc_82588210;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,5408
	ctx.r11.s64 = ctx.r11.s64 + 5408;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r28.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82588214
	goto loc_82588214;
loc_82588210:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82588214:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r5,12(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// addi r4,r11,-32368
	ctx.r4.s64 = ctx.r11.s64 + -32368;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82588230;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82588238"))) PPC_WEAK_FUNC(sub_82588238);
PPC_FUNC_IMPL(__imp__sub_82588238) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82588250"))) PPC_WEAK_FUNC(sub_82588250);
PPC_FUNC_IMPL(__imp__sub_82588250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82588258;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82588274;
	sub_823F51A8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823f5040
	ctx.lr = 0x8258827C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825882a0
	if (ctx.cr0.eq) goto loc_825882A0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,5416
	ctx.r11.s64 = ctx.r11.s64 + 5416;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825882a4
	goto loc_825882A4;
loc_825882A0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825882A4:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r11,-32200
	ctx.r4.s64 = ctx.r11.s64 + -32200;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x825882C0;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825882C8"))) PPC_WEAK_FUNC(sub_825882C8);
PPC_FUNC_IMPL(__imp__sub_825882C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825882E8"))) PPC_WEAK_FUNC(sub_825882E8);
PPC_FUNC_IMPL(__imp__sub_825882E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x825882F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82588310;
	sub_823F51A8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x823f5040
	ctx.lr = 0x82588318;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82588340
	if (ctx.cr0.eq) goto loc_82588340;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,5424
	ctx.r11.s64 = ctx.r11.s64 + 5424;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82588344
	goto loc_82588344;
loc_82588340:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82588344:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r5,12(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r11,-32056
	ctx.r4.s64 = ctx.r11.s64 + -32056;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82588360;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82588368"))) PPC_WEAK_FUNC(sub_82588368);
PPC_FUNC_IMPL(__imp__sub_82588368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82588388"))) PPC_WEAK_FUNC(sub_82588388);
PPC_FUNC_IMPL(__imp__sub_82588388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82588390;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x823f51a8
	ctx.lr = 0x825883B8;
	sub_823F51A8(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x823f5040
	ctx.lr = 0x825883C0;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825883ec
	if (ctx.cr0.eq) goto loc_825883EC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f31,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,5432
	ctx.r11.s64 = ctx.r11.s64 + 5432;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825883f0
	goto loc_825883F0;
loc_825883EC:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825883F0:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r5,12(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// addi r4,r11,-31896
	ctx.r4.s64 = ctx.r11.s64 + -31896;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8258840C;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82588418"))) PPC_WEAK_FUNC(sub_82588418);
PPC_FUNC_IMPL(__imp__sub_82588418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f3,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lfs f2,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lfs f1,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,200(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82588440"))) PPC_WEAK_FUNC(sub_82588440);
PPC_FUNC_IMPL(__imp__sub_82588440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82588448;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8258847C;
	sub_823F51A8(ctx, base);
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x823f5040
	ctx.lr = 0x82588484;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825884b4
	if (ctx.cr0.eq) goto loc_825884B4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f31,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f30,16(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// addi r11,r11,5440
	ctx.r11.s64 = ctx.r11.s64 + 5440;
	// stfs f29,20(r3)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825884b8
	goto loc_825884B8;
loc_825884B4:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825884B8:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r4,r11,-31720
	ctx.r4.s64 = ctx.r11.s64 + -31720;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x825884D4;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825884E8"))) PPC_WEAK_FUNC(sub_825884E8);
PPC_FUNC_IMPL(__imp__sub_825884E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82588870
	sub_82588870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825884F0"))) PPC_WEAK_FUNC(sub_825884F0);
PPC_FUNC_IMPL(__imp__sub_825884F0) {
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
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82588514;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x8258851C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82588538
	if (ctx.cr0.eq) goto loc_82588538;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,5456
	ctx.r11.s64 = ctx.r11.s64 + 5456;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8258853c
	goto loc_8258853C;
loc_82588538:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258853C:
	// lis r11,-32062
	ctx.r11.s64 = -2101215232;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-26128
	ctx.r4.s64 = ctx.r11.s64 + -26128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82588558;
	sub_823F4FE8(ctx, base);
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

__attribute__((alias("__imp__sub_82588570"))) PPC_WEAK_FUNC(sub_82588570);
PPC_FUNC_IMPL(__imp__sub_82588570) {
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
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82588594;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x8258859C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825885b8
	if (ctx.cr0.eq) goto loc_825885B8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,5464
	ctx.r11.s64 = ctx.r11.s64 + 5464;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825885bc
	goto loc_825885BC;
loc_825885B8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825885BC:
	// lis r11,-32036
	ctx.r11.s64 = -2099511296;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-16176
	ctx.r4.s64 = ctx.r11.s64 + -16176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x825885D8;
	sub_823F4FE8(ctx, base);
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

__attribute__((alias("__imp__sub_825885F0"))) PPC_WEAK_FUNC(sub_825885F0);
PPC_FUNC_IMPL(__imp__sub_825885F0) {
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
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82588614;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x8258861C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82588638
	if (ctx.cr0.eq) goto loc_82588638;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,5472
	ctx.r11.s64 = ctx.r11.s64 + 5472;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8258863c
	goto loc_8258863C;
loc_82588638:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258863C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-15280
	ctx.r4.s64 = ctx.r11.s64 + -15280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82588658;
	sub_823F4FE8(ctx, base);
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

__attribute__((alias("__imp__sub_82588670"))) PPC_WEAK_FUNC(sub_82588670);
PPC_FUNC_IMPL(__imp__sub_82588670) {
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
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82588694;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x8258869C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825886b8
	if (ctx.cr0.eq) goto loc_825886B8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,5480
	ctx.r11.s64 = ctx.r11.s64 + 5480;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825886bc
	goto loc_825886BC;
loc_825886B8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825886BC:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-32544
	ctx.r4.s64 = ctx.r11.s64 + -32544;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x825886D8;
	sub_823F4FE8(ctx, base);
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

__attribute__((alias("__imp__sub_825886F0"))) PPC_WEAK_FUNC(sub_825886F0);
PPC_FUNC_IMPL(__imp__sub_825886F0) {
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
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82588714;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x8258871C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82588738
	if (ctx.cr0.eq) goto loc_82588738;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,5488
	ctx.r11.s64 = ctx.r11.s64 + 5488;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8258873c
	goto loc_8258873C;
loc_82588738:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258873C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-13744
	ctx.r4.s64 = ctx.r11.s64 + -13744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82588758;
	sub_823F4FE8(ctx, base);
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

__attribute__((alias("__imp__sub_82588770"))) PPC_WEAK_FUNC(sub_82588770);
PPC_FUNC_IMPL(__imp__sub_82588770) {
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
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82588794;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x8258879C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825887b8
	if (ctx.cr0.eq) goto loc_825887B8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,5496
	ctx.r11.s64 = ctx.r11.s64 + 5496;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825887bc
	goto loc_825887BC;
loc_825887B8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825887BC:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-13728
	ctx.r4.s64 = ctx.r11.s64 + -13728;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x825887D8;
	sub_823F4FE8(ctx, base);
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

__attribute__((alias("__imp__sub_825887F0"))) PPC_WEAK_FUNC(sub_825887F0);
PPC_FUNC_IMPL(__imp__sub_825887F0) {
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
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82588814;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x8258881C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82588838
	if (ctx.cr0.eq) goto loc_82588838;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,5504
	ctx.r11.s64 = ctx.r11.s64 + 5504;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8258883c
	goto loc_8258883C;
loc_82588838:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258883C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-13712
	ctx.r4.s64 = ctx.r11.s64 + -13712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82588858;
	sub_823F4FE8(ctx, base);
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

__attribute__((alias("__imp__sub_82588870"))) PPC_WEAK_FUNC(sub_82588870);
PPC_FUNC_IMPL(__imp__sub_82588870) {
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82c09c68
	ctx.lr = 0x82588894;
	sub_82C09C68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8247a9a8
	ctx.lr = 0x8258889C;
	sub_8247A9A8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825888ac
	if (ctx.cr0.eq) goto loc_825888AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x825888AC;
	sub_823FD208(ctx, base);
loc_825888AC:
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

__attribute__((alias("__imp__sub_825888C8"))) PPC_WEAK_FUNC(sub_825888C8);
PPC_FUNC_IMPL(__imp__sub_825888C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82588908
	if (ctx.cr0.eq) goto loc_82588908;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_82588908:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82588918"))) PPC_WEAK_FUNC(sub_82588918);
PPC_FUNC_IMPL(__imp__sub_82588918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82588920;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,5512
	ctx.r11.s64 = ctx.r11.s64 + 5512;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// rlwinm r3,r4,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x82588950;
	sub_82C0F6C0(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82588970"))) PPC_WEAK_FUNC(sub_82588970);
PPC_FUNC_IMPL(__imp__sub_82588970) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,5512
	ctx.r8.s64 = ctx.r11.s64 + 5512;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x825889b4
	if (!ctx.cr6.gt) goto loc_825889B4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_825889A8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x825889a8
	if (ctx.cr6.lt) goto loc_825889A8;
loc_825889B4:
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x823fd208
	ctx.lr = 0x825889C8;
	sub_823FD208(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,1752
	ctx.r11.s64 = ctx.r11.s64 + 1752;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_825889E8"))) PPC_WEAK_FUNC(sub_825889E8);
PPC_FUNC_IMPL(__imp__sub_825889E8) {
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
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82588a20
	if (ctx.cr0.eq) goto loc_82588A20;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82588A20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82588A20:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// bne cr6,0x82588a30
	if (!ctx.cr6.eq) goto loc_82588A30;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82588A30:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82588a50
	if (ctx.cr6.eq) goto loc_82588A50;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82588A50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82588A50:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82588A70"))) PPC_WEAK_FUNC(sub_82588A70);
PPC_FUNC_IMPL(__imp__sub_82588A70) {
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
	// bl 0x82588970
	ctx.lr = 0x82588A90;
	sub_82588970(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82588aa0
	if (ctx.cr0.eq) goto loc_82588AA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82588AA0;
	sub_823FD208(ctx, base);
loc_82588AA0:
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

__attribute__((alias("__imp__sub_82588AC0"))) PPC_WEAK_FUNC(sub_82588AC0);
PPC_FUNC_IMPL(__imp__sub_82588AC0) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82588b10
	if (ctx.cr6.eq) goto loc_82588B10;
	// bl 0x8257fc80
	ctx.lr = 0x82588AE4;
	sub_8257FC80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82e4de20
	ctx.lr = 0x82588AF0;
	sub_82E4DE20(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82588b10
	if (ctx.cr0.eq) goto loc_82588B10;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82588B0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82588b14
	goto loc_82588B14;
loc_82588B10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82588B14:
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

__attribute__((alias("__imp__sub_82588B28"))) PPC_WEAK_FUNC(sub_82588B28);
PPC_FUNC_IMPL(__imp__sub_82588B28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82588B30;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,88(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// lbz r9,92(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 92);
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lbz r6,93(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 93);
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r31,96(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// lfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// li r29,48
	ctx.r29.s64 = 48;
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r28,r1,128
	ctx.r28.s64 = ctx.r1.s64 + 128;
	// lfs f12,80(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// lvx128 v63,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r9,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r9.u8);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f11,148(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r6,157(r1)
	PPC_STORE_U8(ctx.r1.u32 + 157, ctx.r6.u8);
	// lvx128 v63,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,96(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// stvx128 v63,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// lvx128 v63,r11,r29
	ea = (ctx.r11.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82588BBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82588BC8"))) PPC_WEAK_FUNC(sub_82588BC8);
PPC_FUNC_IMPL(__imp__sub_82588BC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82588BD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,-8
	ctx.r29.s64 = ctx.r3.s64 + -8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82588BE8;
	sub_823F51A8(ctx, base);
	// li r4,112
	ctx.r4.s64 = 112;
	// bl 0x823f5040
	ctx.lr = 0x82588BF0;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82588c74
	if (ctx.cr0.eq) goto loc_82588C74;
	// li r8,16
	ctx.r8.s64 = 16;
	// lwz r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r9,32
	ctx.r9.s64 = 32;
	// lbz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 76);
	// li r10,48
	ctx.r10.s64 = 48;
	// lbz r4,77(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 77);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lwz r28,80(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r27,r7,5520
	ctx.r27.s64 = ctx.r7.s64 + 5520;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lfs f11,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// lvx128 v63,r31,r8
	ea = (ctx.r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r31,r9
	ea = (ctx.r31.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stvx128 v63,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r6,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r6.u32);
	// stfs f12,80(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stb r5,92(r3)
	PPC_STORE_U8(ctx.r3.u32 + 92, ctx.r5.u8);
	// stfs f11,84(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stb r4,93(r3)
	PPC_STORE_U8(ctx.r3.u32 + 93, ctx.r4.u8);
	// stvx128 v62,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r28,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r28.u32);
	// stvx128 v61,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82588c78
	goto loc_82588C78;
loc_82588C74:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82588C78:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,112
	ctx.r6.s64 = 112;
	// addi r4,r11,-29912
	ctx.r4.s64 = ctx.r11.s64 + -29912;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82588C94;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82588CA0"))) PPC_WEAK_FUNC(sub_82588CA0);
PPC_FUNC_IMPL(__imp__sub_82588CA0) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r10,5528
	ctx.r10.s64 = ctx.r10.s64 + 5528;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r30,r4,16
	ctx.r30.s64 = ctx.r4.s64 + 16;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824e2f58
	ctx.lr = 0x82588CE0;
	sub_824E2F58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824869a8
	ctx.lr = 0x82588CE8;
	sub_824869A8(ctx, base);
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

__attribute__((alias("__imp__sub_82588D08"))) PPC_WEAK_FUNC(sub_82588D08);
PPC_FUNC_IMPL(__imp__sub_82588D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x824e2f58
	ctx.lr = 0x82588D34;
	sub_824E2F58(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82588D4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82588D60"))) PPC_WEAK_FUNC(sub_82588D60);
PPC_FUNC_IMPL(__imp__sub_82588D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82588D68;
	__savegprlr_28(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,-8
	ctx.r28.s64 = ctx.r3.s64 + -8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82588D80;
	sub_823F51A8(ctx, base);
	// li r4,176
	ctx.r4.s64 = 176;
	// bl 0x823f5040
	ctx.lr = 0x82588D88;
	sub_823F5040(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82588db8
	if (ctx.cr0.eq) goto loc_82588DB8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x824e2f58
	ctx.lr = 0x82588DA4;
	sub_824E2F58(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82588ca0
	ctx.lr = 0x82588DB0;
	sub_82588CA0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x82588dbc
	goto loc_82588DBC;
loc_82588DB8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82588DBC:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,176
	ctx.r6.s64 = 176;
	// addi r4,r11,-29432
	ctx.r4.s64 = ctx.r11.s64 + -29432;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82588DD8;
	sub_823F4FE8(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x824869a8
	ctx.lr = 0x82588DE0;
	sub_824869A8(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82588DE8"))) PPC_WEAK_FUNC(sub_82588DE8);
PPC_FUNC_IMPL(__imp__sub_82588DE8) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r11,r11,5528
	ctx.r11.s64 = ctx.r11.s64 + 5528;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x824869a8
	ctx.lr = 0x82588E10;
	sub_824869A8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,29772
	ctx.r11.s64 = ctx.r11.s64 + 29772;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82588E38"))) PPC_WEAK_FUNC(sub_82588E38);
PPC_FUNC_IMPL(__imp__sub_82588E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82588E40;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r11,-13984
	ctx.r28.s64 = ctx.r11.s64 + -13984;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,168(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 168);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82588E78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82588E8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// beq 0x82588ec0
	if (ctx.cr0.eq) goto loc_82588EC0;
	// lwz r9,44(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// addi r11,r29,32
	ctx.r11.s64 = ctx.r29.s64 + 32;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82588ebc
	if (!ctx.cr6.gt) goto loc_82588EBC;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_82588EB0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82588eb0
	if (ctx.cr6.lt) goto loc_82588EB0;
loc_82588EBC:
	// stw r27,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r27.u32);
loc_82588EC0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82588fbc
	if (!ctx.cr6.gt) goto loc_82588FBC;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82588ED0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82588EE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82588ef8
	if (ctx.cr0.eq) goto loc_82588EF8;
	// addi r3,r29,32
	ctx.r3.s64 = ctx.r29.s64 + 32;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825888c8
	ctx.lr = 0x82588EF8;
	sub_825888C8(ctx, base);
loc_82588EF8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,204(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82588F18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,13
	ctx.r4.s64 = ctx.r11.s64 + 13;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82588F3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82588F60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82588F84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82588FA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82588ed0
	if (ctx.cr6.lt) goto loc_82588ED0;
loc_82588FBC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82588FC8"))) PPC_WEAK_FUNC(sub_82588FC8);
PPC_FUNC_IMPL(__imp__sub_82588FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82588FD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31952
	ctx.r30.s64 = -2094006272;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,23748(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23748);
	// bl 0x82865438
	ctx.lr = 0x82588FE8;
	sub_82865438(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,68(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82589004;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82589088
	if (ctx.cr6.eq) goto loc_82589088;
	// lbz r11,12562(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 12562);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82589088
	if (!ctx.cr0.eq) goto loc_82589088;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x8249eec8
	ctx.lr = 0x82589020;
	sub_8249EEC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82589088
	if (!ctx.cr0.eq) goto loc_82589088;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82589048
	if (ctx.cr6.eq) goto loc_82589048;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82589048
	if (ctx.cr6.eq) goto loc_82589048;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8258904c
	if (!ctx.cr6.eq) goto loc_8258904C;
loc_82589048:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8258904C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82589080
	if (!ctx.cr0.eq) goto loc_82589080;
	// lwz r3,23748(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23748);
	// bl 0x82d6ae20
	ctx.lr = 0x8258905C;
	sub_82D6AE20(ctx, base);
	// bl 0x82865340
	ctx.lr = 0x82589060;
	sub_82865340(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82589080
	if (!ctx.cr0.eq) goto loc_82589080;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-3624(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3624);
	// bl 0x8262b090
	ctx.lr = 0x82589078;
	sub_8262B090(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82589088
	if (!ctx.cr0.eq) goto loc_82589088;
loc_82589080:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8258908c
	goto loc_8258908C;
loc_82589088:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258908C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825890a8
	if (ctx.cr0.eq) goto loc_825890A8;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x8249ee28
	ctx.lr = 0x8258909C;
	sub_8249EE28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x825890ac
	if (ctx.cr0.eq) goto loc_825890AC;
loc_825890A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825890AC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825890B8"))) PPC_WEAK_FUNC(sub_825890B8);
PPC_FUNC_IMPL(__imp__sub_825890B8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825891ec
	if (ctx.cr6.eq) goto loc_825891EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825890EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825891ec
	if (ctx.cr0.eq) goto loc_825891EC;
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82589108
	if (ctx.cr0.eq) goto loc_82589108;
loc_82589100:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825891f0
	goto loc_825891F0;
loc_82589108:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,944(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 944);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,22012(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22012);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82589100
	if (ctx.cr6.gt) goto loc_82589100;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r3,23748(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23748);
	// bl 0x82865438
	ctx.lr = 0x82589130;
	sub_82865438(ctx, base);
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f13,948(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82589170
	if (!ctx.cr6.gt) goto loc_82589170;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82589164
	if (ctx.cr6.eq) goto loc_82589164;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82589164
	if (ctx.cr6.eq) goto loc_82589164;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82589168
	if (!ctx.cr6.eq) goto loc_82589168;
loc_82589164:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82589168:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82589100
	if (ctx.cr0.eq) goto loc_82589100;
loc_82589170:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82589184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8249e4b8
	ctx.lr = 0x82589188;
	sub_8249E4B8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1224);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258919C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82589100
	if (!ctx.cr0.eq) goto loc_82589100;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825891B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8249e4b8
	ctx.lr = 0x825891BC;
	sub_8249E4B8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825891D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,3648(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x825891f0
	if (ctx.cr6.lt) goto loc_825891F0;
loc_825891EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825891F0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_82589208"))) PPC_WEAK_FUNC(sub_82589208);
PPC_FUNC_IMPL(__imp__sub_82589208) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r3,-4060(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4060);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82589278
	if (ctx.cr6.eq) goto loc_82589278;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8247fc10
	ctx.lr = 0x82589238;
	sub_8247FC10(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82589278
	if (ctx.cr6.eq) goto loc_82589278;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-4060(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4060);
	// bl 0x8247fc10
	ctx.lr = 0x82589250;
	sub_8247FC10(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824878f0
	ctx.lr = 0x8258925C;
	sub_824878F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82589278
	if (ctx.cr0.eq) goto loc_82589278;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82589274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82589278:
	// bl 0x82479e88
	ctx.lr = 0x8258927C;
	sub_82479E88(ctx, base);
	// lwz r11,2372(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2372);
	// clrlwi. r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bne 0x825892a0
	if (!ctx.cr0.eq) goto loc_825892A0;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x825892a4
	if (ctx.cr0.eq) goto loc_825892A4;
loc_825892A0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_825892A4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_825892C0"))) PPC_WEAK_FUNC(sub_825892C0);
PPC_FUNC_IMPL(__imp__sub_825892C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x825892C8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// lfs f31,3368(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3368);
	ctx.f31.f64 = double(temp.f32);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82589390
	if (!ctx.cr6.lt) goto loc_82589390;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-4060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4060);
	// bl 0x8247fc10
	ctx.lr = 0x82589308;
	sub_8247FC10(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824878f0
	ctx.lr = 0x82589314;
	sub_824878F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82589390
	if (ctx.cr0.eq) goto loc_82589390;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82589330;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82589348;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r29,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r29.u64;
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_82589390:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825893A0"))) PPC_WEAK_FUNC(sub_825893A0);
PPC_FUNC_IMPL(__imp__sub_825893A0) {
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
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r3,23748(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23748);
	// bl 0x828653d8
	ctx.lr = 0x825893B8;
	sub_828653D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825893e8
	if (ctx.cr0.eq) goto loc_825893E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825893D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// bl 0x8252a370
	ctx.lr = 0x825893D8;
	sub_8252A370(ctx, base);
	// lbz r11,89(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 89);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x825893ec
	goto loc_825893EC;
loc_825893E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825893EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82589400"))) PPC_WEAK_FUNC(sub_82589400);
PPC_FUNC_IMPL(__imp__sub_82589400) {
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
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,32356
	ctx.r31.s64 = ctx.r11.s64 + 32356;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82589428;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r11,32636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32636);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82589440
	if (ctx.cr0.eq) goto loc_82589440;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r10,116(r11)
	PPC_STORE_U8(ctx.r11.u32 + 116, ctx.r10.u8);
loc_82589440:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece7c
	ctx.lr = 0x82589448;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82589460"))) PPC_WEAK_FUNC(sub_82589460);
PPC_FUNC_IMPL(__imp__sub_82589460) {
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
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,32388
	ctx.r31.s64 = ctx.r11.s64 + 32388;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82589488;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r11,32636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32636);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825894a0
	if (ctx.cr0.eq) goto loc_825894A0;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r10,117(r11)
	PPC_STORE_U8(ctx.r11.u32 + 117, ctx.r10.u8);
loc_825894A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece7c
	ctx.lr = 0x825894A8;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_825894C0"))) PPC_WEAK_FUNC(sub_825894C0);
PPC_FUNC_IMPL(__imp__sub_825894C0) {
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
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,27344
	ctx.r31.s64 = ctx.r11.s64 + 27344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x825894E8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r11,32636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32636);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82589500
	if (ctx.cr0.eq) goto loc_82589500;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r10,118(r11)
	PPC_STORE_U8(ctx.r11.u32 + 118, ctx.r10.u8);
loc_82589500:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece7c
	ctx.lr = 0x82589508;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82589520"))) PPC_WEAK_FUNC(sub_82589520);
PPC_FUNC_IMPL(__imp__sub_82589520) {
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
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,32248
	ctx.r31.s64 = ctx.r11.s64 + 32248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82589548;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r11,32636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32636);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82589560
	if (ctx.cr0.eq) goto loc_82589560;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r10,119(r11)
	PPC_STORE_U8(ctx.r11.u32 + 119, ctx.r10.u8);
loc_82589560:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece7c
	ctx.lr = 0x82589568;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82589580"))) PPC_WEAK_FUNC(sub_82589580);
PPC_FUNC_IMPL(__imp__sub_82589580) {
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
	// stb r4,162(r3)
	PPC_STORE_U8(ctx.r3.u32 + 162, ctx.r4.u8);
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r5,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r5.u32);
	// bne 0x825895d0
	if (!ctx.cr0.eq) goto loc_825895D0;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r3,9800(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9800);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825895d0
	if (ctx.cr6.eq) goto loc_825895D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825895C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r11.u8);
loc_825895D0:
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

__attribute__((alias("__imp__sub_825895E8"))) PPC_WEAK_FUNC(sub_825895E8);
PPC_FUNC_IMPL(__imp__sub_825895E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r3,9800(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9800);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82589610"))) PPC_WEAK_FUNC(sub_82589610);
PPC_FUNC_IMPL(__imp__sub_82589610) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82589618"))) PPC_WEAK_FUNC(sub_82589618);
PPC_FUNC_IMPL(__imp__sub_82589618) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82589620"))) PPC_WEAK_FUNC(sub_82589620);
PPC_FUNC_IMPL(__imp__sub_82589620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,32(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,36(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// addi r9,r9,18884
	ctx.r9.s64 = ctx.r9.s64 + 18884;
	// lwz r6,44(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfs f11,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f10,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r11,60(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825896A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825896B0"))) PPC_WEAK_FUNC(sub_825896B0);
PPC_FUNC_IMPL(__imp__sub_825896B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x825896B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x825896D0;
	sub_823F51A8(ctx, base);
	// li r4,48
	ctx.r4.s64 = 48;
	// bl 0x823f5040
	ctx.lr = 0x825896D8;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82589750
	if (ctx.cr0.eq) goto loc_82589750;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,5536
	ctx.r11.s64 = ctx.r11.s64 + 5536;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,18884
	ctx.r9.s64 = ctx.r9.s64 + 18884;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// lfs f10,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stfs f11,24(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stfs f10,28(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stw r6,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r6.u32);
	// stw r5,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r5.u32);
	// b 0x82589754
	goto loc_82589754;
loc_82589750:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82589754:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// addi r4,r11,-27104
	ctx.r4.s64 = ctx.r11.s64 + -27104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82589770;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82589778"))) PPC_WEAK_FUNC(sub_82589778);
PPC_FUNC_IMPL(__imp__sub_82589778) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82582118
	ctx.lr = 0x825897A0;
	sub_82582118(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825897B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_825897D0"))) PPC_WEAK_FUNC(sub_825897D0);
PPC_FUNC_IMPL(__imp__sub_825897D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x825897D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x825897F0;
	sub_823F51A8(ctx, base);
	// li r4,84
	ctx.r4.s64 = 84;
	// bl 0x823f5040
	ctx.lr = 0x825897F8;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8258982c
	if (ctx.cr0.eq) goto loc_8258982C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82582118
	ctx.lr = 0x8258980C;
	sub_82582118(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,5544
	ctx.r11.s64 = ctx.r11.s64 + 5544;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82582118
	ctx.lr = 0x82589824;
	sub_82582118(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// b 0x82589830
	goto loc_82589830;
loc_8258982C:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82589830:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,84
	ctx.r6.s64 = 84;
	// addi r4,r11,-26760
	ctx.r4.s64 = ctx.r11.s64 + -26760;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8258984C;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82589858"))) PPC_WEAK_FUNC(sub_82589858);
PPC_FUNC_IMPL(__imp__sub_82589858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,24(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,32(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// addi r9,r9,18884
	ctx.r9.s64 = ctx.r9.s64 + 18884;
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f12,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfs f11,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,68(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 68);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825898C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825898D8"))) PPC_WEAK_FUNC(sub_825898D8);
PPC_FUNC_IMPL(__imp__sub_825898D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x825898E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x825898F8;
	sub_823F51A8(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x823f5040
	ctx.lr = 0x82589900;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82589964
	if (ctx.cr0.eq) goto loc_82589964;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,5552
	ctx.r11.s64 = ctx.r11.s64 + 5552;
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,18884
	ctx.r9.s64 = ctx.r9.s64 + 18884;
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stfs f11,16(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// b 0x82589968
	goto loc_82589968;
loc_82589964:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82589968:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,36
	ctx.r6.s64 = 36;
	// addi r4,r11,-26536
	ctx.r4.s64 = ctx.r11.s64 + -26536;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82589984;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82589990"))) PPC_WEAK_FUNC(sub_82589990);
PPC_FUNC_IMPL(__imp__sub_82589990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,32(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,36(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// addi r9,r9,18884
	ctx.r9.s64 = ctx.r9.s64 + 18884;
	// lwz r6,44(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfs f11,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f10,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r11,72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82589A10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82589A20"))) PPC_WEAK_FUNC(sub_82589A20);
PPC_FUNC_IMPL(__imp__sub_82589A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82589A28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82589A40;
	sub_823F51A8(ctx, base);
	// li r4,48
	ctx.r4.s64 = 48;
	// bl 0x823f5040
	ctx.lr = 0x82589A48;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82589ac0
	if (ctx.cr0.eq) goto loc_82589AC0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,5560
	ctx.r11.s64 = ctx.r11.s64 + 5560;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,18884
	ctx.r9.s64 = ctx.r9.s64 + 18884;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// lfs f10,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stfs f11,24(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stfs f10,28(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stw r6,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r6.u32);
	// stw r5,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r5.u32);
	// b 0x82589ac4
	goto loc_82589AC4;
loc_82589AC0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82589AC4:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// addi r4,r11,-26224
	ctx.r4.s64 = ctx.r11.s64 + -26224;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82589AE0;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82589AE8"))) PPC_WEAK_FUNC(sub_82589AE8);
PPC_FUNC_IMPL(__imp__sub_82589AE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82472908
	sub_82472908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82589AF0"))) PPC_WEAK_FUNC(sub_82589AF0);
PPC_FUNC_IMPL(__imp__sub_82589AF0) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82589b18
	if (ctx.cr6.eq) goto loc_82589B18;
	// bl 0x823ea800
	ctx.lr = 0x82589B18;
	sub_823EA800(ctx, base);
loc_82589B18:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82589b30
	if (ctx.cr6.eq) goto loc_82589B30;
	// bl 0x823ea800
	ctx.lr = 0x82589B30;
	sub_823EA800(ctx, base);
loc_82589B30:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82589B50"))) PPC_WEAK_FUNC(sub_82589B50);
PPC_FUNC_IMPL(__imp__sub_82589B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddfc
	ctx.lr = 0x82589B58;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,2416(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2416);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r7,720
	ctx.r7.s64 = 720;
	// li r6,1280
	ctx.r6.s64 = 1280;
	// lfs f31,3368(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3368);
	ctx.f31.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f30,3648(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3648);
	ctx.f30.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r28,16(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x823f5a00
	ctx.lr = 0x82589BA0;
	sub_823F5A00(ctx, base);
	// lwz r3,2416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2416);
	// ld r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82589BC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r27,-31965
	ctx.r27.s64 = -2094858240;
	// lwz r3,-27412(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -27412);
	// bl 0x82c3f050
	ctx.lr = 0x82589BCC;
	sub_82C3F050(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824676a0
	ctx.lr = 0x82589BE0;
	sub_824676A0(ctx, base);
	// lis r26,-31954
	ctx.r26.s64 = -2094137344;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r29,r26,27416
	ctx.r29.s64 = ctx.r26.s64 + 27416;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r29,2600
	ctx.r10.s64 = ctx.r29.s64 + 2600;
	// lwz r11,27416(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 27416);
	// mulli r11,r11,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82470538
	ctx.lr = 0x82589C04;
	sub_82470538(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823e8de0
	ctx.lr = 0x82589C10;
	sub_823E8DE0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8246cc50
	ctx.lr = 0x82589C28;
	sub_8246CC50(ctx, base);
	// addi r3,r31,2280
	ctx.r3.s64 = ctx.r31.s64 + 2280;
	// bl 0x823e6738
	ctx.lr = 0x82589C30;
	sub_823E6738(ctx, base);
	// lwz r3,3280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// bl 0x825e9028
	ctx.lr = 0x82589C38;
	sub_825E9028(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lbz r4,3269(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3269);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823f10c8
	ctx.lr = 0x82589C74;
	sub_823F10C8(ctx, base);
	// lwz r3,2416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2416);
	// ld r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82589C94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-27412(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -27412);
	// bl 0x82c3f050
	ctx.lr = 0x82589C9C;
	sub_82C3F050(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824676a0
	ctx.lr = 0x82589CB0;
	sub_824676A0(ctx, base);
	// lwz r11,27416(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 27416);
	// addi r10,r29,2600
	ctx.r10.s64 = ctx.r29.s64 + 2600;
	// mulli r11,r11,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82470538
	ctx.lr = 0x82589CCC;
	sub_82470538(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823e8de0
	ctx.lr = 0x82589CD8;
	sub_823E8DE0(ctx, base);
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82589d2c
	if (!ctx.cr6.eq) goto loc_82589D2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257d758
	ctx.lr = 0x82589CEC;
	sub_8257D758(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82589D00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82c07930
	ctx.lr = 0x82589D04;
	sub_82C07930(ctx, base);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4660
	ctx.r5.s64 = 4660;
	// li r4,17
	ctx.r4.s64 = 17;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82589D2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82589D2C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a7de4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82589D40"))) PPC_WEAK_FUNC(sub_82589D40);
PPC_FUNC_IMPL(__imp__sub_82589D40) {
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
	// bl 0x8245bb90
	ctx.lr = 0x82589D5C;
	sub_8245BB90(ctx, base);
	// addi r30,r3,148
	ctx.r30.s64 = ctx.r3.s64 + 148;
	// lbz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 88);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82589d78
	if (ctx.cr0.eq) goto loc_82589D78;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,32280
	ctx.r3.s64 = ctx.r11.s64 + 32280;
	// bl 0x82c3f8a0
	ctx.lr = 0x82589D78;
	sub_82C3F8A0(ctx, base);
loc_82589D78:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,2416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2416);
	// bl 0x82c27600
	ctx.lr = 0x82589D84;
	sub_82C27600(ctx, base);
	// bl 0x8245bb90
	ctx.lr = 0x82589D88;
	sub_8245BB90(ctx, base);
	// bl 0x82c33ca0
	ctx.lr = 0x82589D8C;
	sub_82C33CA0(ctx, base);
	// bl 0x82c07930
	ctx.lr = 0x82589D90;
	sub_82C07930(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,14
	ctx.r4.s64 = 14;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82589DBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r30,3171(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3171, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_82589DD8"))) PPC_WEAK_FUNC(sub_82589DD8);
PPC_FUNC_IMPL(__imp__sub_82589DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82589DE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-1200(r1)
	ea = -1200 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8245bb90
	ctx.lr = 0x82589DEC;
	sub_8245BB90(ctx, base);
	// addi r31,r3,148
	ctx.r31.s64 = ctx.r3.s64 + 148;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// stb r11,393(r31)
	PPC_STORE_U8(ctx.r31.u32 + 393, ctx.r11.u8);
	// addi r11,r10,-56
	ctx.r11.s64 = ctx.r10.s64 + -56;
	// lbz r10,4936(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4936);
	// stb r10,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r10.u8);
	// stb r29,4936(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4936, ctx.r29.u8);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82d35328
	ctx.lr = 0x82589E1C;
	sub_82D35328(ctx, base);
	// lwz r30,592(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82589ecc
	if (ctx.cr6.eq) goto loc_82589ECC;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x82d799d8
	ctx.lr = 0x82589E30;
	sub_82D799D8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82589E44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// li r5,560
	ctx.r5.s64 = 560;
	// bl 0x82a7d730
	ctx.lr = 0x82589E54;
	sub_82A7D730(ctx, base);
	// lbz r11,748(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 748);
	// lbz r10,749(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 749);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lbz r9,750(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 750);
	// addi r4,r1,664
	ctx.r4.s64 = ctx.r1.s64 + 664;
	// lbz r8,914(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 914);
	// li r5,504
	ctx.r5.s64 = 504;
	// stb r29,748(r1)
	PPC_STORE_U8(ctx.r1.u32 + 748, ctx.r29.u8);
	// stb r29,749(r1)
	PPC_STORE_U8(ctx.r1.u32 + 749, ctx.r29.u8);
	// stb r29,750(r1)
	PPC_STORE_U8(ctx.r1.u32 + 750, ctx.r29.u8);
	// stb r29,914(r1)
	PPC_STORE_U8(ctx.r1.u32 + 914, ctx.r29.u8);
	// lbz r7,704(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 704);
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// stb r10,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r10.u8);
	// stb r9,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r9.u8);
	// stb r8,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r8.u8);
	// stb r7,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r7.u8);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82a7d730
	ctx.lr = 0x82589EA0;
	sub_82A7D730(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,608(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 608);
	// ld r5,616(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 616);
	// ld r6,624(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 624);
	// ld r7,632(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 632);
	// ld r8,640(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 640);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// ld r9,648(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 648);
	// ld r10,656(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 656);
	// bctrl 
	ctx.lr = 0x82589ECC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82589ECC:
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82de7330
	ctx.lr = 0x82589ED4;
	sub_82DE7330(ctx, base);
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82589EE0"))) PPC_WEAK_FUNC(sub_82589EE0);
PPC_FUNC_IMPL(__imp__sub_82589EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82589EE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8245bb90
	ctx.lr = 0x82589EF4;
	sub_8245BB90(ctx, base);
	// addi r30,r3,148
	ctx.r30.s64 = ctx.r3.s64 + 148;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// addi r10,r10,-56
	ctx.r10.s64 = ctx.r10.s64 + -56;
	// lbz r9,7(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7);
	// stb r11,392(r30)
	PPC_STORE_U8(ctx.r30.u32 + 392, ctx.r11.u8);
	// stb r11,358(r30)
	PPC_STORE_U8(ctx.r30.u32 + 358, ctx.r11.u8);
	// stb r11,393(r30)
	PPC_STORE_U8(ctx.r30.u32 + 393, ctx.r11.u8);
	// stb r9,4936(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4936, ctx.r9.u8);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82d35328
	ctx.lr = 0x82589F24;
	sub_82D35328(ctx, base);
	// lwz r29,592(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82589f9c
	if (ctx.cr6.eq) goto loc_82589F9C;
	// lbz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// addi r11,r31,5936
	ctx.r11.s64 = ctx.r31.s64 + 5936;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// li r5,504
	ctx.r5.s64 = 504;
	// stb r10,6076(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6076, ctx.r10.u8);
	// lbz r11,9(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// stb r11,6077(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6077, ctx.r11.u8);
	// lbz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// stb r11,6078(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6078, ctx.r11.u8);
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// stb r11,6032(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6032, ctx.r11.u8);
	// lbz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6);
	// stb r11,6242(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6242, ctx.r11.u8);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82a7d730
	ctx.lr = 0x82589F70;
	sub_82A7D730(ctx, base);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r4,5936(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 5936);
	// ld r5,5944(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 5944);
	// ld r6,5952(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 5952);
	// ld r7,5960(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 5960);
	// ld r8,5968(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 5968);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// ld r9,5976(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 5976);
	// ld r10,5984(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 5984);
	// bctrl 
	ctx.lr = 0x82589F9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82589F9C:
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82de7330
	ctx.lr = 0x82589FA4;
	sub_82DE7330(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82589FB0"))) PPC_WEAK_FUNC(sub_82589FB0);
PPC_FUNC_IMPL(__imp__sub_82589FB0) {
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
	// lwz r3,2460(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2460);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82589FE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,2472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2472);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82589FF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258A008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258A010;
	sub_82DE7330(ctx, base);
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

__attribute__((alias("__imp__sub_8258A028"))) PPC_WEAK_FUNC(sub_8258A028);
PPC_FUNC_IMPL(__imp__sub_8258A028) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,2420
	ctx.r4.s64 = ctx.r11.s64 + 2420;
	// b 0x826e1b10
	sub_826E1B10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258A038"))) PPC_WEAK_FUNC(sub_8258A038);
PPC_FUNC_IMPL(__imp__sub_8258A038) {
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
	// bl 0x82c07930
	ctx.lr = 0x8258A048;
	sub_82C07930(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,14
	ctx.r4.s64 = 14;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258A074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258A088"))) PPC_WEAK_FUNC(sub_8258A088);
PPC_FUNC_IMPL(__imp__sub_8258A088) {
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
	// bl 0x82c07930
	ctx.lr = 0x8258A098;
	sub_82C07930(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,14
	ctx.r4.s64 = 14;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258A0C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258A0D8"))) PPC_WEAK_FUNC(sub_8258A0D8);
PPC_FUNC_IMPL(__imp__sub_8258A0D8) {
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
	// bl 0x82c07930
	ctx.lr = 0x8258A0E8;
	sub_82C07930(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,14
	ctx.r4.s64 = 14;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258A114;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258A128"))) PPC_WEAK_FUNC(sub_8258A128);
PPC_FUNC_IMPL(__imp__sub_8258A128) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,3217(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3217, ctx.r11.u8);
	// lwz r3,3232(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3232);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,3232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3232, ctx.r11.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8258A158"))) PPC_WEAK_FUNC(sub_8258A158);
PPC_FUNC_IMPL(__imp__sub_8258A158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddf0
	ctx.lr = 0x8258A160;
	__savegprlr_22(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r24,r11,27416
	ctx.r24.s64 = ctx.r11.s64 + 27416;
	// addi r10,r24,2600
	ctx.r10.s64 = ctx.r24.s64 + 2600;
	// lwz r11,27416(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27416);
	// mulli r11,r11,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// add r23,r11,r10
	ctx.r23.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8245bb90
	ctx.lr = 0x8258A184;
	sub_8245BB90(ctx, base);
	// addi r31,r3,148
	ctx.r31.s64 = ctx.r3.s64 + 148;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8258a250
	if (!ctx.cr6.eq) goto loc_8258A250;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8258a250
	if (!ctx.cr6.eq) goto loc_8258A250;
	// addi r7,r1,148
	ctx.r7.s64 = ctx.r1.s64 + 148;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c32d88
	ctx.lr = 0x8258A1C4;
	sub_82C32D88(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r5,3236(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3236);
	// lwz r7,148(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r4,3240(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3240);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// mullw r10,r4,r8
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// mullw r8,r6,r5
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r6,68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r5,72(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// divwu r26,r3,r6
	ctx.r26.u32 = ctx.r6.u32 ? ctx.r3.u32 / ctx.r6.u32 : 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// divwu r25,r10,r5
	ctx.r25.u32 = ctx.r5.u32 ? ctx.r10.u32 / ctx.r5.u32 : 0;
	// rlwinm. r22,r11,27,31,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// divwu r29,r8,r6
	ctx.r29.u32 = ctx.r6.u32 ? ctx.r8.u32 / ctx.r6.u32 : 0;
	// divwu r27,r9,r5
	ctx.r27.u32 = ctx.r5.u32 ? ctx.r9.u32 / ctx.r5.u32 : 0;
	// beq 0x8258a28c
	if (ctx.cr0.eq) goto loc_8258A28C;
	// stb r28,41(r31)
	PPC_STORE_U8(ctx.r31.u32 + 41, ctx.r28.u8);
	// b 0x8258a28c
	goto loc_8258A28C;
loc_8258A250:
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823f8150
	ctx.lr = 0x8258A260;
	sub_823F8150(ctx, base);
	// lwz r11,312(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// li r22,1
	ctx.r22.s64 = 1;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lwz r29,3236(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3236);
	// lwz r27,3240(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3240);
loc_8258A28C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82c48cd0
	ctx.lr = 0x8258A298;
	sub_82C48CD0(ctx, base);
	// subf r31,r26,r29
	ctx.r31.u64 = ctx.r29.u64 - ctx.r26.u64;
	// subf r29,r25,r27
	ctx.r29.u64 = ctx.r27.u64 - ctx.r25.u64;
	// lis r6,6184
	ctx.r6.s64 = 405274624;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,390
	ctx.r6.u64 = ctx.r6.u64 | 390;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82c48bb8
	ctx.lr = 0x8258A2BC;
	sub_82C48BB8(ctx, base);
	// lis r7,10280
	ctx.r7.s64 = 673710080;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// ori r7,r7,262
	ctx.r7.u64 = ctx.r7.u64 | 262;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a40eb8
	ctx.lr = 0x8258A2F8;
	sub_82A40EB8(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r4,28(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// bl 0x82a41350
	ctx.lr = 0x8258A304;
	sub_82A41350(ctx, base);
	// bl 0x82479e88
	ctx.lr = 0x8258A308;
	sub_82479E88(ctx, base);
	// lbz r11,3552(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3552);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r27,r11,4
	ctx.r27.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x8258a39c
	if (!ctx.cr6.eq) goto loc_8258A39C;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8258a39c
	if (!ctx.cr6.eq) goto loc_8258A39C;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x8258a39c
	if (!ctx.cr6.eq) goto loc_8258A39C;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x8258a39c
	if (!ctx.cr6.eq) goto loc_8258A39C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f2,3368(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3368);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f1,3648(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3648);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823f5a00
	ctx.lr = 0x8258A374;
	sub_823F5A00(ctx, base);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r30,3296
	ctx.r3.s64 = ctx.r30.s64 + 3296;
	// bl 0x82c3e310
	ctx.lr = 0x8258A398;
	sub_82C3E310(ctx, base);
	// b 0x8258a3d0
	goto loc_8258A3D0;
loc_8258A39C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r11,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r11.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r30,3296
	ctx.r3.s64 = ctx.r30.s64 + 3296;
	// bl 0x82c3e0c8
	ctx.lr = 0x8258A3D0;
	sub_82C3E0C8(ctx, base);
loc_8258A3D0:
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// bl 0x82c48c60
	ctx.lr = 0x8258A3E8;
	sub_82C48C60(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82c48d28
	ctx.lr = 0x8258A3F0;
	sub_82C48D28(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x823f8150
	ctx.lr = 0x8258A400;
	sub_823F8150(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x829e7978
	ctx.lr = 0x8258A418;
	sub_829E7978(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,3228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3228);
	// bl 0x82465eb8
	ctx.lr = 0x8258A424;
	sub_82465EB8(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r3,3232(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3232);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258a4a8
	if (ctx.cr0.eq) goto loc_8258A4A8;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r25,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r25.u32);
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// stw r8,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r31,3236(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3236);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// lwz r29,216(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r27,156(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// rlwinm r26,r11,0,0,26
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// lwz r10,96(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8258A484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r4,r31,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x82a43988
	ctx.lr = 0x8258A4A4;
	sub_82A43988(ctx, base);
	// b 0x8258a538
	goto loc_8258A538;
loc_8258A4A8:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r29,156(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// subf r24,r10,r11
	ctx.r24.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258A4C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// subf. r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x8258a538
	if (!ctx.cr0.gt) goto loc_8258A538;
	// rlwinm r24,r24,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
loc_8258A4E4:
	// lwz r8,216(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r9,3236(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3236);
	// add r7,r31,r25
	ctx.r7.u64 = ctx.r31.u64 + ctx.r25.u64;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r9,r26
	ctx.r10.u64 = ctx.r9.u64 + ctx.r26.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r3,r10,r27
	ctx.r3.u64 = ctx.r10.u64 + ctx.r27.u64;
	// bl 0x82a7d730
	ctx.lr = 0x8258A520;
	sub_82A7D730(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8258a4e4
	if (ctx.cr6.lt) goto loc_8258A4E4;
loc_8258A538:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x829e6dd8
	ctx.lr = 0x8258A544;
	sub_829E6DD8(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82c0f6c0
	ctx.lr = 0x8258A54C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258a570
	if (ctx.cr0.eq) goto loc_8258A570;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// addi r11,r11,140
	ctx.r11.s64 = ctx.r11.s64 + 140;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8258a574
	goto loc_8258A574;
loc_8258A570:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8258A574:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d35328
	ctx.lr = 0x8258A57C;
	sub_82D35328(ctx, base);
	// clrlwi. r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,3228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3228);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// beq 0x8258a5cc
	if (ctx.cr0.eq) goto loc_8258A5CC;
	// bl 0x82c07930
	ctx.lr = 0x8258A594;
	sub_82C07930(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824afb20
	ctx.lr = 0x8258A5A8;
	sub_824AFB20(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,3224(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3224);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,3220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3220);
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258A5CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8258A5CC:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82de7330
	ctx.lr = 0x8258A5D4;
	sub_82DE7330(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82a7de40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258A5E0"))) PPC_WEAK_FUNC(sub_8258A5E0);
PPC_FUNC_IMPL(__imp__sub_8258A5E0) {
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
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r31,-3864(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3864);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243cc28
	ctx.lr = 0x8258A608;
	sub_8243CC28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d87648
	ctx.lr = 0x8258A618;
	sub_82D87648(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258A620;
	sub_82DE7330(ctx, base);
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

__attribute__((alias("__imp__sub_8258A638"))) PPC_WEAK_FUNC(sub_8258A638);
PPC_FUNC_IMPL(__imp__sub_8258A638) {
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
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r31,-3864(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3864);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243cc28
	ctx.lr = 0x8258A658;
	sub_8243CC28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d84750
	ctx.lr = 0x8258A664;
	sub_82D84750(ctx, base);
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

__attribute__((alias("__imp__sub_8258A678"))) PPC_WEAK_FUNC(sub_8258A678);
PPC_FUNC_IMPL(__imp__sub_8258A678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddfc
	ctx.lr = 0x8258A680;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258A6A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,720
	ctx.r5.s64 = 720;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258A6C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r30,728
	ctx.r4.s64 = ctx.r30.s64 + 728;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258A6E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r30,736
	ctx.r4.s64 = ctx.r30.s64 + 736;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258A6FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,748(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 748);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,744(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 744);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,68(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258A72C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,744(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 744);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258A74C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,760(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 760);
	// li r27,1504
	ctx.r27.s64 = 1504;
	// lwz r11,764(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 764);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// divw r11,r11,r27
	ctx.r11.s32 = (ctx.r27.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r27.s32 == -1)) ? ctx.r11.s32 / ctx.r27.s32 : 0;
	// addi r29,r30,760
	ctx.r29.s64 = ctx.r30.s64 + 760;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// lwz r10,68(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8258A784;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,760(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 760);
	// lwz r10,764(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 764);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// divw. r10,r10,r27
	ctx.r10.s32 = (ctx.r27.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r27.s32 == -1)) ? ctx.r10.s32 / ctx.r27.s32 : 0;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8258a7dc
	if (ctx.cr0.eq) goto loc_8258A7DC;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8258A79C:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r10,r28,1504
	ctx.r10.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(1504));
	// lwz r9,68(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// li r5,1504
	ctx.r5.s64 = 1504;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8258A7BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r28,r10,24
	ctx.r28.u64 = ctx.r10.u32 & 0xFF;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// divw r10,r10,r27
	ctx.r10.s32 = (ctx.r27.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r27.s32 == -1)) ? ctx.r10.s32 / ctx.r27.s32 : 0;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8258a79c
	if (ctx.cr6.lt) goto loc_8258A79C;
loc_8258A7DC:
	// lwz r10,792(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 792);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,796(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 796);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lwz r10,68(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8258A80C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8258a940
	if (ctx.cr0.eq) goto loc_8258A940;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
loc_8258A824:
	// lwz r11,776(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 776);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,68(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x8258A850;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8258a88c
	if (ctx.cr6.eq) goto loc_8258A88C;
	// lwz r11,776(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 776);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8258a874
	if (ctx.cr6.lt) goto loc_8258A874;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8258A874:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,68(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258A88C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8258A88C:
	// lwz r11,792(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 792);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258A8AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,792(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 792);
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258A8C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258A8E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258a928
	if (ctx.cr6.eq) goto loc_8258A928;
	// lwz r10,792(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 792);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r3,r28,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258A910;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258A928;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8258A928:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,28
	ctx.r27.s64 = ctx.r27.s64 + 28;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8258a824
	if (ctx.cr6.lt) goto loc_8258A824;
loc_8258A940:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258A948"))) PPC_WEAK_FUNC(sub_8258A948);
PPC_FUNC_IMPL(__imp__sub_8258A948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258A950;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,24
	ctx.r3.s64 = 24;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8258A96C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258a990
	if (ctx.cr0.eq) goto loc_8258A990;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1400
	ctx.r11.s64 = ctx.r11.s64 + 1400;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8258a994
	goto loc_8258A994;
loc_8258A990:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8258A994:
	// stfs f31,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// bl 0x82c07930
	ctx.lr = 0x8258A9A4;
	sub_82C07930(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d35328
	ctx.lr = 0x8258A9B8;
	sub_82D35328(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1001
	ctx.r5.s64 = 1001;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258A9DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258A9E8"))) PPC_WEAK_FUNC(sub_8258A9E8);
PPC_FUNC_IMPL(__imp__sub_8258A9E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258A9F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8258AA04;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258aa28
	if (ctx.cr0.eq) goto loc_8258AA28;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1432
	ctx.r11.s64 = ctx.r11.s64 + 1432;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8258aa2c
	goto loc_8258AA2C;
loc_8258AA28:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8258AA2C:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// bl 0x82c07930
	ctx.lr = 0x8258AA38;
	sub_82C07930(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d35328
	ctx.lr = 0x8258AA4C;
	sub_82D35328(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1002
	ctx.r5.s64 = 1002;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258AA70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258AA78"))) PPC_WEAK_FUNC(sub_8258AA78);
PPC_FUNC_IMPL(__imp__sub_8258AA78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258AA80;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8258AA94;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258aab8
	if (ctx.cr0.eq) goto loc_8258AAB8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1432
	ctx.r11.s64 = ctx.r11.s64 + 1432;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8258aabc
	goto loc_8258AABC;
loc_8258AAB8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8258AABC:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// bl 0x82c07930
	ctx.lr = 0x8258AAC8;
	sub_82C07930(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d35328
	ctx.lr = 0x8258AADC;
	sub_82D35328(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1003
	ctx.r5.s64 = 1003;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258AB00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258AB08"))) PPC_WEAK_FUNC(sub_8258AB08);
PPC_FUNC_IMPL(__imp__sub_8258AB08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258AB10;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8258AB24;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258ab48
	if (ctx.cr0.eq) goto loc_8258AB48;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1432
	ctx.r11.s64 = ctx.r11.s64 + 1432;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8258ab4c
	goto loc_8258AB4C;
loc_8258AB48:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8258AB4C:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// bl 0x82c07930
	ctx.lr = 0x8258AB58;
	sub_82C07930(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d35328
	ctx.lr = 0x8258AB6C;
	sub_82D35328(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1004
	ctx.r5.s64 = 1004;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258AB90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258AB98"))) PPC_WEAK_FUNC(sub_8258AB98);
PPC_FUNC_IMPL(__imp__sub_8258AB98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258ABA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,19796
	ctx.r29.s64 = ctx.r11.s64 + 19796;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece6c
	ctx.lr = 0x8258ABBC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d35328
	ctx.lr = 0x8258ABD0;
	sub_82D35328(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece7c
	ctx.lr = 0x8258ABD8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258ABE8"))) PPC_WEAK_FUNC(sub_8258ABE8);
PPC_FUNC_IMPL(__imp__sub_8258ABE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258ABF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,20052
	ctx.r29.s64 = ctx.r11.s64 + 20052;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece6c
	ctx.lr = 0x8258AC0C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d35328
	ctx.lr = 0x8258AC20;
	sub_82D35328(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece7c
	ctx.lr = 0x8258AC28;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258AC38"))) PPC_WEAK_FUNC(sub_8258AC38);
PPC_FUNC_IMPL(__imp__sub_8258AC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258AC40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,19580
	ctx.r29.s64 = ctx.r11.s64 + 19580;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece6c
	ctx.lr = 0x8258AC5C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d35328
	ctx.lr = 0x8258AC70;
	sub_82D35328(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece7c
	ctx.lr = 0x8258AC78;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258AC88"))) PPC_WEAK_FUNC(sub_8258AC88);
PPC_FUNC_IMPL(__imp__sub_8258AC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258AC90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,19472
	ctx.r29.s64 = ctx.r11.s64 + 19472;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece6c
	ctx.lr = 0x8258ACAC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d35328
	ctx.lr = 0x8258ACC0;
	sub_82D35328(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece7c
	ctx.lr = 0x8258ACC8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258ACD8"))) PPC_WEAK_FUNC(sub_8258ACD8);
PPC_FUNC_IMPL(__imp__sub_8258ACD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258ACE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,19952
	ctx.r29.s64 = ctx.r11.s64 + 19952;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece6c
	ctx.lr = 0x8258ACFC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d35328
	ctx.lr = 0x8258AD10;
	sub_82D35328(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece7c
	ctx.lr = 0x8258AD18;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258AD28"))) PPC_WEAK_FUNC(sub_8258AD28);
PPC_FUNC_IMPL(__imp__sub_8258AD28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258AD30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,20000
	ctx.r29.s64 = ctx.r11.s64 + 20000;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece6c
	ctx.lr = 0x8258AD4C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d35328
	ctx.lr = 0x8258AD60;
	sub_82D35328(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece7c
	ctx.lr = 0x8258AD68;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258AD78"))) PPC_WEAK_FUNC(sub_8258AD78);
PPC_FUNC_IMPL(__imp__sub_8258AD78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258AD80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,19628
	ctx.r29.s64 = ctx.r11.s64 + 19628;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece6c
	ctx.lr = 0x8258AD9C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d35328
	ctx.lr = 0x8258ADB0;
	sub_82D35328(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece7c
	ctx.lr = 0x8258ADB8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258ADC8"))) PPC_WEAK_FUNC(sub_8258ADC8);
PPC_FUNC_IMPL(__imp__sub_8258ADC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258ADD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,19520
	ctx.r29.s64 = ctx.r11.s64 + 19520;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece6c
	ctx.lr = 0x8258ADEC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d35328
	ctx.lr = 0x8258AE00;
	sub_82D35328(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece7c
	ctx.lr = 0x8258AE08;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258AE18"))) PPC_WEAK_FUNC(sub_8258AE18);
PPC_FUNC_IMPL(__imp__sub_8258AE18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258AE20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,19844
	ctx.r29.s64 = ctx.r11.s64 + 19844;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece6c
	ctx.lr = 0x8258AE3C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d35328
	ctx.lr = 0x8258AE50;
	sub_82D35328(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece7c
	ctx.lr = 0x8258AE58;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258AE68"))) PPC_WEAK_FUNC(sub_8258AE68);
PPC_FUNC_IMPL(__imp__sub_8258AE68) {
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
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x8258ae94
	if (ctx.cr0.eq) goto loc_8258AE94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246fed8
	ctx.lr = 0x8258AE94;
	sub_8246FED8(ctx, base);
loc_8258AE94:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8258aea8
	if (ctx.cr6.eq) goto loc_8258AEA8;
	// bl 0x823ea800
	ctx.lr = 0x8258AEA8;
	sub_823EA800(ctx, base);
loc_8258AEA8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_8258AEC8"))) PPC_WEAK_FUNC(sub_8258AEC8);
PPC_FUNC_IMPL(__imp__sub_8258AEC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258AED0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,13316
	ctx.r29.s64 = ctx.r11.s64 + 13316;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece6c
	ctx.lr = 0x8258AEEC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d35328
	ctx.lr = 0x8258AF00;
	sub_82D35328(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece7c
	ctx.lr = 0x8258AF08;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258AF18"))) PPC_WEAK_FUNC(sub_8258AF18);
PPC_FUNC_IMPL(__imp__sub_8258AF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258AF20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,18988
	ctx.r29.s64 = ctx.r11.s64 + 18988;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece6c
	ctx.lr = 0x8258AF3C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d35328
	ctx.lr = 0x8258AF50;
	sub_82D35328(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece7c
	ctx.lr = 0x8258AF58;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258AF68"))) PPC_WEAK_FUNC(sub_8258AF68);
PPC_FUNC_IMPL(__imp__sub_8258AF68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258AF70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,-18048
	ctx.r29.s64 = ctx.r11.s64 + -18048;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece6c
	ctx.lr = 0x8258AF8C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d35328
	ctx.lr = 0x8258AFA0;
	sub_82D35328(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece7c
	ctx.lr = 0x8258AFA8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258AFB8"))) PPC_WEAK_FUNC(sub_8258AFB8);
PPC_FUNC_IMPL(__imp__sub_8258AFB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258AFC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,22116
	ctx.r29.s64 = ctx.r11.s64 + 22116;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece6c
	ctx.lr = 0x8258AFDC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d35328
	ctx.lr = 0x8258AFF0;
	sub_82D35328(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece7c
	ctx.lr = 0x8258AFF8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258B008"))) PPC_WEAK_FUNC(sub_8258B008);
PPC_FUNC_IMPL(__imp__sub_8258B008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258B010;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,22372
	ctx.r29.s64 = ctx.r11.s64 + 22372;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece6c
	ctx.lr = 0x8258B02C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d35328
	ctx.lr = 0x8258B040;
	sub_82D35328(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece7c
	ctx.lr = 0x8258B048;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258B058"))) PPC_WEAK_FUNC(sub_8258B058);
PPC_FUNC_IMPL(__imp__sub_8258B058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258B060;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,5180
	ctx.r29.s64 = ctx.r11.s64 + 5180;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece6c
	ctx.lr = 0x8258B07C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d35328
	ctx.lr = 0x8258B090;
	sub_82D35328(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece7c
	ctx.lr = 0x8258B098;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258B0A8"))) PPC_WEAK_FUNC(sub_8258B0A8);
PPC_FUNC_IMPL(__imp__sub_8258B0A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258B0B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,5092
	ctx.r29.s64 = ctx.r11.s64 + 5092;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece6c
	ctx.lr = 0x8258B0CC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d35328
	ctx.lr = 0x8258B0E0;
	sub_82D35328(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece7c
	ctx.lr = 0x8258B0E8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258B0F8"))) PPC_WEAK_FUNC(sub_8258B0F8);
PPC_FUNC_IMPL(__imp__sub_8258B0F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258B100;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,-18100
	ctx.r29.s64 = ctx.r11.s64 + -18100;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece6c
	ctx.lr = 0x8258B11C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d35328
	ctx.lr = 0x8258B130;
	sub_82D35328(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece7c
	ctx.lr = 0x8258B138;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258B148"))) PPC_WEAK_FUNC(sub_8258B148);
PPC_FUNC_IMPL(__imp__sub_8258B148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258B150;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,-19524
	ctx.r29.s64 = ctx.r11.s64 + -19524;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece6c
	ctx.lr = 0x8258B16C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d35328
	ctx.lr = 0x8258B180;
	sub_82D35328(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece7c
	ctx.lr = 0x8258B188;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258B198"))) PPC_WEAK_FUNC(sub_8258B198);
PPC_FUNC_IMPL(__imp__sub_8258B198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258B1A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,-19980
	ctx.r29.s64 = ctx.r11.s64 + -19980;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece6c
	ctx.lr = 0x8258B1BC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d35328
	ctx.lr = 0x8258B1D0;
	sub_82D35328(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece7c
	ctx.lr = 0x8258B1D8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258B1E8"))) PPC_WEAK_FUNC(sub_8258B1E8);
PPC_FUNC_IMPL(__imp__sub_8258B1E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258B1F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,17940
	ctx.r29.s64 = ctx.r11.s64 + 17940;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece6c
	ctx.lr = 0x8258B20C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d35328
	ctx.lr = 0x8258B220;
	sub_82D35328(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece7c
	ctx.lr = 0x8258B228;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258B238"))) PPC_WEAK_FUNC(sub_8258B238);
PPC_FUNC_IMPL(__imp__sub_8258B238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258B240;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,13540
	ctx.r29.s64 = ctx.r11.s64 + 13540;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece6c
	ctx.lr = 0x8258B25C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d35328
	ctx.lr = 0x8258B270;
	sub_82D35328(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece7c
	ctx.lr = 0x8258B278;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258B288"))) PPC_WEAK_FUNC(sub_8258B288);
PPC_FUNC_IMPL(__imp__sub_8258B288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258B290;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,-20372
	ctx.r29.s64 = ctx.r11.s64 + -20372;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece6c
	ctx.lr = 0x8258B2AC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d35328
	ctx.lr = 0x8258B2C0;
	sub_82D35328(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece7c
	ctx.lr = 0x8258B2C8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258B2D8"))) PPC_WEAK_FUNC(sub_8258B2D8);
PPC_FUNC_IMPL(__imp__sub_8258B2D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258B2E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,-21328
	ctx.r29.s64 = ctx.r11.s64 + -21328;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece6c
	ctx.lr = 0x8258B2FC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d35328
	ctx.lr = 0x8258B310;
	sub_82D35328(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece7c
	ctx.lr = 0x8258B318;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258B328"))) PPC_WEAK_FUNC(sub_8258B328);
PPC_FUNC_IMPL(__imp__sub_8258B328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258B330;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,-21272
	ctx.r29.s64 = ctx.r11.s64 + -21272;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece6c
	ctx.lr = 0x8258B34C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d35328
	ctx.lr = 0x8258B360;
	sub_82D35328(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece7c
	ctx.lr = 0x8258B368;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258B378"))) PPC_WEAK_FUNC(sub_8258B378);
PPC_FUNC_IMPL(__imp__sub_8258B378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258B380;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,12980
	ctx.r29.s64 = ctx.r11.s64 + 12980;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece6c
	ctx.lr = 0x8258B39C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d35328
	ctx.lr = 0x8258B3B0;
	sub_82D35328(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ece7c
	ctx.lr = 0x8258B3B8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258B3C8"))) PPC_WEAK_FUNC(sub_8258B3C8);
PPC_FUNC_IMPL(__imp__sub_8258B3C8) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lwz r3,7960(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7960);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8258b3fc
	if (ctx.cr6.eq) goto loc_8258B3FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258B3FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8258B3FC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,7960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7960, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8258B418"))) PPC_WEAK_FUNC(sub_8258B418);
PPC_FUNC_IMPL(__imp__sub_8258B418) {
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
	// bl 0x82587d00
	ctx.lr = 0x8258B430;
	sub_82587D00(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,11876
	ctx.r11.s64 = ctx.r11.s64 + 11876;
	// addi r10,r10,5596
	ctx.r10.s64 = ctx.r10.s64 + 5596;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8258B468"))) PPC_WEAK_FUNC(sub_8258B468);
PPC_FUNC_IMPL(__imp__sub_8258B468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
loc_8258B46C:
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
	// bne 0x8258b46c
	if (!ctx.cr0.eq) goto loc_8258B46C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258B490"))) PPC_WEAK_FUNC(sub_8258B490);
PPC_FUNC_IMPL(__imp__sub_8258B490) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8258b4e8
	sub_8258B4E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258B498"))) PPC_WEAK_FUNC(sub_8258B498);
PPC_FUNC_IMPL(__imp__sub_8258B498) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,11876
	ctx.r11.s64 = ctx.r11.s64 + 11876;
	// addi r10,r10,5596
	ctx.r10.s64 = ctx.r10.s64 + 5596;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82c09c68
	ctx.lr = 0x8258B4CC;
	sub_82C09C68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8247a9a8
	ctx.lr = 0x8258B4D4;
	sub_8247A9A8(ctx, base);
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

__attribute__((alias("__imp__sub_8258B4E8"))) PPC_WEAK_FUNC(sub_8258B4E8);
PPC_FUNC_IMPL(__imp__sub_8258B4E8) {
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
	// bl 0x8258b498
	ctx.lr = 0x8258B508;
	sub_8258B498(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258b518
	if (ctx.cr0.eq) goto loc_8258B518;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8258B518;
	sub_823FD208(ctx, base);
loc_8258B518:
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

__attribute__((alias("__imp__sub_8258B538"))) PPC_WEAK_FUNC(sub_8258B538);
PPC_FUNC_IMPL(__imp__sub_8258B538) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne cr6,0x8258b574
	if (!ctx.cr6.eq) goto loc_8258B574;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8258b5b4
	goto loc_8258B5B4;
loc_8258B574:
	// lis r11,819
	ctx.r11.s64 = 53673984;
	// ori r11,r11,13107
	ctx.r11.u64 = ctx.r11.u64 | 13107;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8258b590
	if (!ctx.cr6.gt) goto loc_8258B590;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,18928
	ctx.r3.s64 = ctx.r11.s64 + 18928;
	// bl 0x82a90538
	ctx.lr = 0x8258B590;
	sub_82A90538(ctx, base);
loc_8258B590:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d6be28
	ctx.lr = 0x8258B59C;
	sub_82D6BE28(ctx, base);
	// mulli r11,r30,80
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(80));
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8258B5B4:
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

__attribute__((alias("__imp__sub_8258B5D0"))) PPC_WEAK_FUNC(sub_8258B5D0);
PPC_FUNC_IMPL(__imp__sub_8258B5D0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne cr6,0x8258b60c
	if (!ctx.cr6.eq) goto loc_8258B60C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8258b64c
	goto loc_8258B64C;
loc_8258B60C:
	// lis r11,630
	ctx.r11.s64 = 41287680;
	// ori r11,r11,10082
	ctx.r11.u64 = ctx.r11.u64 | 10082;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8258b628
	if (!ctx.cr6.gt) goto loc_8258B628;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,18928
	ctx.r3.s64 = ctx.r11.s64 + 18928;
	// bl 0x82a90538
	ctx.lr = 0x8258B628;
	sub_82A90538(ctx, base);
loc_8258B628:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824e6380
	ctx.lr = 0x8258B634;
	sub_824E6380(ctx, base);
	// mulli r11,r30,104
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(104));
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8258B64C:
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

__attribute__((alias("__imp__sub_8258B668"))) PPC_WEAK_FUNC(sub_8258B668);
PPC_FUNC_IMPL(__imp__sub_8258B668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258B670;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8258b6d4
	if (!ctx.cr6.eq) goto loc_8258B6D4;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8258b6d4
	if (ctx.cr6.lt) goto loc_8258B6D4;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8258b6d4
	if (!ctx.cr6.lt) goto loc_8258B6D4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82a7dca0
	ctx.lr = 0x8258B6CC;
	sub_82A7DCA0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x8258b6d8
	goto loc_8258B6D8;
loc_8258B6D4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_8258B6D8:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258B6F0"))) PPC_WEAK_FUNC(sub_8258B6F0);
PPC_FUNC_IMPL(__imp__sub_8258B6F0) {
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
	// bl 0x82e4de48
	ctx.lr = 0x8258B708;
	sub_82E4DE48(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,5604
	ctx.r11.s64 = ctx.r11.s64 + 5604;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8257fc30
	ctx.lr = 0x8258B718;
	sub_8257FC30(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_8258B740"))) PPC_WEAK_FUNC(sub_8258B740);
PPC_FUNC_IMPL(__imp__sub_8258B740) {
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
	// bl 0x82e4de48
	ctx.lr = 0x8258B758;
	sub_82E4DE48(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,5616
	ctx.r11.s64 = ctx.r11.s64 + 5616;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8257fcd0
	ctx.lr = 0x8258B768;
	sub_8257FCD0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_8258B790"))) PPC_WEAK_FUNC(sub_8258B790);
PPC_FUNC_IMPL(__imp__sub_8258B790) {
	PPC_FUNC_PROLOGUE();
	// b 0x8257fc80
	sub_8257FC80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258B798"))) PPC_WEAK_FUNC(sub_8258B798);
PPC_FUNC_IMPL(__imp__sub_8258B798) {
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
	// bl 0x82e4de48
	ctx.lr = 0x8258B7B0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,5628
	ctx.r11.s64 = ctx.r11.s64 + 5628;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8257fd20
	ctx.lr = 0x8258B7C0;
	sub_8257FD20(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_8258B7E8"))) PPC_WEAK_FUNC(sub_8258B7E8);
PPC_FUNC_IMPL(__imp__sub_8258B7E8) {
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
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// lwz r11,32504(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32504);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8258b818
	if (!ctx.cr0.eq) goto loc_8258B818;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// stw r11,32504(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32504, ctx.r11.u32);
	// addi r3,r9,-17320
	ctx.r3.s64 = ctx.r9.s64 + -17320;
	// bl 0x82a7e6b0
	ctx.lr = 0x8258B818;
	sub_82A7E6B0(ctx, base);
loc_8258B818:
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,32500
	ctx.r3.s64 = ctx.r11.s64 + 32500;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258B830"))) PPC_WEAK_FUNC(sub_8258B830);
PPC_FUNC_IMPL(__imp__sub_8258B830) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x824afb20
	ctx.lr = 0x8258B854;
	sub_824AFB20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e637e8
	ctx.lr = 0x8258B860;
	sub_82E637E8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,6948
	ctx.r11.s64 = ctx.r11.s64 + 6948;
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82de7330
	ctx.lr = 0x8258B87C;
	sub_82DE7330(ctx, base);
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

__attribute__((alias("__imp__sub_8258B898"))) PPC_WEAK_FUNC(sub_8258B898);
PPC_FUNC_IMPL(__imp__sub_8258B898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r3,208
	ctx.r11.s64 = ctx.r3.s64 + 208;
loc_8258B89C:
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
	// bne 0x8258b89c
	if (!ctx.cr0.eq) goto loc_8258B89C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258B8C0"))) PPC_WEAK_FUNC(sub_8258B8C0);
PPC_FUNC_IMPL(__imp__sub_8258B8C0) {
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
	// addi r11,r3,208
	ctx.r11.s64 = ctx.r3.s64 + 208;
loc_8258B8D4:
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
	// bne 0x8258b8d4
	if (!ctx.cr0.eq) goto loc_8258B8D4;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8258b918
	if (!ctx.cr6.eq) goto loc_8258B918;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8258b918
	if (ctx.cr6.eq) goto loc_8258B918;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258B918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8258B918:
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

__attribute__((alias("__imp__sub_8258B930"))) PPC_WEAK_FUNC(sub_8258B930);
PPC_FUNC_IMPL(__imp__sub_8258B930) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,6948
	ctx.r11.s64 = ctx.r11.s64 + 6948;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82e61860
	ctx.lr = 0x8258B95C;
	sub_82E61860(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258b96c
	if (ctx.cr0.eq) goto loc_8258B96C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8258B96C;
	sub_823FD208(ctx, base);
loc_8258B96C:
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

__attribute__((alias("__imp__sub_8258B988"))) PPC_WEAK_FUNC(sub_8258B988);
PPC_FUNC_IMPL(__imp__sub_8258B988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258B990;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x824afb20
	ctx.lr = 0x8258B9A8;
	sub_824AFB20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82cd2618
	ctx.lr = 0x8258B9B8;
	sub_82CD2618(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,7620
	ctx.r11.s64 = ctx.r11.s64 + 7620;
	// stw r10,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82de7330
	ctx.lr = 0x8258B9D4;
	sub_82DE7330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258B9E0"))) PPC_WEAK_FUNC(sub_8258B9E0);
PPC_FUNC_IMPL(__imp__sub_8258B9E0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,7620
	ctx.r11.s64 = ctx.r11.s64 + 7620;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82cd2788
	ctx.lr = 0x8258BA0C;
	sub_82CD2788(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258ba1c
	if (ctx.cr0.eq) goto loc_8258BA1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8258BA1C;
	sub_823FD208(ctx, base);
loc_8258BA1C:
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

__attribute__((alias("__imp__sub_8258BA38"))) PPC_WEAK_FUNC(sub_8258BA38);
PPC_FUNC_IMPL(__imp__sub_8258BA38) {
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
	// bl 0x8257fc30
	ctx.lr = 0x8258BA50;
	sub_8257FC30(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8258ba64
	if (ctx.cr6.eq) goto loc_8258BA64;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8258BA64:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_8258BA80"))) PPC_WEAK_FUNC(sub_8258BA80);
PPC_FUNC_IMPL(__imp__sub_8258BA80) {
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
	// bl 0x8257fcd0
	ctx.lr = 0x8258BA98;
	sub_8257FCD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8258baac
	if (ctx.cr6.eq) goto loc_8258BAAC;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8258BAAC:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_8258BAC8"))) PPC_WEAK_FUNC(sub_8258BAC8);
PPC_FUNC_IMPL(__imp__sub_8258BAC8) {
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
	// bl 0x8257fd20
	ctx.lr = 0x8258BAE0;
	sub_8257FD20(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8258baf4
	if (ctx.cr6.eq) goto loc_8258BAF4;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8258BAF4:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_8258BB10"))) PPC_WEAK_FUNC(sub_8258BB10);
PPC_FUNC_IMPL(__imp__sub_8258BB10) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8258bb58
	if (ctx.cr6.eq) goto loc_8258BB58;
loc_8258BB38:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82cd08c8
	ctx.lr = 0x8258BB4C;
	sub_82CD08C8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8258bb38
	if (!ctx.cr6.eq) goto loc_8258BB38;
loc_8258BB58:
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

__attribute__((alias("__imp__sub_8258BB70"))) PPC_WEAK_FUNC(sub_8258BB70);
PPC_FUNC_IMPL(__imp__sub_8258BB70) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82c0f6c0
	ctx.lr = 0x8258BB84;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258bba0
	if (ctx.cr0.eq) goto loc_8258BBA0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,2492
	ctx.r10.s64 = ctx.r10.s64 + 2492;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8258bba4
	goto loc_8258BBA4;
loc_8258BBA0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258BBA4:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// stw r11,19572(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19572, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258BBC0"))) PPC_WEAK_FUNC(sub_8258BBC0);
PPC_FUNC_IMPL(__imp__sub_8258BBC0) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82c0f6c0
	ctx.lr = 0x8258BBD4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258bbf0
	if (ctx.cr0.eq) goto loc_8258BBF0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,2532
	ctx.r10.s64 = ctx.r10.s64 + 2532;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8258bbf4
	goto loc_8258BBF4;
loc_8258BBF0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258BBF4:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// stw r11,19944(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19944, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258BC10"))) PPC_WEAK_FUNC(sub_8258BC10);
PPC_FUNC_IMPL(__imp__sub_8258BC10) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82c0f6c0
	ctx.lr = 0x8258BC24;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258bc40
	if (ctx.cr0.eq) goto loc_8258BC40;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,2572
	ctx.r10.s64 = ctx.r10.s64 + 2572;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8258bc44
	goto loc_8258BC44;
loc_8258BC40:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258BC44:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// stw r11,20100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20100, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258BC60"))) PPC_WEAK_FUNC(sub_8258BC60);
PPC_FUNC_IMPL(__imp__sub_8258BC60) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82c0f6c0
	ctx.lr = 0x8258BC74;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258bc90
	if (ctx.cr0.eq) goto loc_8258BC90;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,2612
	ctx.r10.s64 = ctx.r10.s64 + 2612;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8258bc94
	goto loc_8258BC94;
loc_8258BC90:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258BC94:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258BCB0"))) PPC_WEAK_FUNC(sub_8258BCB0);
PPC_FUNC_IMPL(__imp__sub_8258BCB0) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82c0f6c0
	ctx.lr = 0x8258BCC4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258bce0
	if (ctx.cr0.eq) goto loc_8258BCE0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,2652
	ctx.r10.s64 = ctx.r10.s64 + 2652;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8258bce4
	goto loc_8258BCE4;
loc_8258BCE0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258BCE4:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// stw r11,20048(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20048, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258BD00"))) PPC_WEAK_FUNC(sub_8258BD00);
PPC_FUNC_IMPL(__imp__sub_8258BD00) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82c0f6c0
	ctx.lr = 0x8258BD14;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258bd30
	if (ctx.cr0.eq) goto loc_8258BD30;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,2692
	ctx.r10.s64 = ctx.r10.s64 + 2692;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8258bd34
	goto loc_8258BD34;
loc_8258BD30:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258BD34:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// stw r11,19676(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19676, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258BD50"))) PPC_WEAK_FUNC(sub_8258BD50);
PPC_FUNC_IMPL(__imp__sub_8258BD50) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82c0f6c0
	ctx.lr = 0x8258BD64;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258bd80
	if (ctx.cr0.eq) goto loc_8258BD80;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,2732
	ctx.r10.s64 = ctx.r10.s64 + 2732;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8258bd84
	goto loc_8258BD84;
loc_8258BD80:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258BD84:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// stw r11,19680(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19680, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258BDA0"))) PPC_WEAK_FUNC(sub_8258BDA0);
PPC_FUNC_IMPL(__imp__sub_8258BDA0) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82c0f6c0
	ctx.lr = 0x8258BDB4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258bdd0
	if (ctx.cr0.eq) goto loc_8258BDD0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,2772
	ctx.r10.s64 = ctx.r10.s64 + 2772;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8258bdd4
	goto loc_8258BDD4;
loc_8258BDD0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258BDD4:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// stw r11,19948(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19948, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258BDF0"))) PPC_WEAK_FUNC(sub_8258BDF0);
PPC_FUNC_IMPL(__imp__sub_8258BDF0) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82c0f6c0
	ctx.lr = 0x8258BE04;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258be20
	if (ctx.cr0.eq) goto loc_8258BE20;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,2812
	ctx.r10.s64 = ctx.r10.s64 + 2812;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8258be24
	goto loc_8258BE24;
loc_8258BE20:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258BE24:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// stw r11,13312(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13312, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258BE40"))) PPC_WEAK_FUNC(sub_8258BE40);
PPC_FUNC_IMPL(__imp__sub_8258BE40) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82c0f6c0
	ctx.lr = 0x8258BE54;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258be70
	if (ctx.cr0.eq) goto loc_8258BE70;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,2852
	ctx.r10.s64 = ctx.r10.s64 + 2852;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8258be74
	goto loc_8258BE74;
loc_8258BE70:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258BE74:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// stw r11,19044(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19044, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258BE90"))) PPC_WEAK_FUNC(sub_8258BE90);
PPC_FUNC_IMPL(__imp__sub_8258BE90) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82c0f6c0
	ctx.lr = 0x8258BEA4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258bec0
	if (ctx.cr0.eq) goto loc_8258BEC0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,2892
	ctx.r10.s64 = ctx.r10.s64 + 2892;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8258bec4
	goto loc_8258BEC4;
loc_8258BEC0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258BEC4:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// stw r11,-18104(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18104, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258BEE0"))) PPC_WEAK_FUNC(sub_8258BEE0);
PPC_FUNC_IMPL(__imp__sub_8258BEE0) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82c0f6c0
	ctx.lr = 0x8258BEF4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258bf10
	if (ctx.cr0.eq) goto loc_8258BF10;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,2932
	ctx.r10.s64 = ctx.r10.s64 + 2932;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8258bf14
	goto loc_8258BF14;
loc_8258BF10:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258BF14:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// stw r11,22112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22112, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258BF30"))) PPC_WEAK_FUNC(sub_8258BF30);
PPC_FUNC_IMPL(__imp__sub_8258BF30) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82c0f6c0
	ctx.lr = 0x8258BF44;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258bf60
	if (ctx.cr0.eq) goto loc_8258BF60;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,2972
	ctx.r10.s64 = ctx.r10.s64 + 2972;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8258bf64
	goto loc_8258BF64;
loc_8258BF60:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258BF64:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// stw r11,22368(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22368, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258BF80"))) PPC_WEAK_FUNC(sub_8258BF80);
PPC_FUNC_IMPL(__imp__sub_8258BF80) {
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
	// bl 0x825e4b78
	ctx.lr = 0x8258BF98;
	sub_825E4B78(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// addi r11,r11,5640
	ctx.r11.s64 = ctx.r11.s64 + 5640;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a0e238
	ctx.lr = 0x8258BFAC;
	sub_82A0E238(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8258BFD0"))) PPC_WEAK_FUNC(sub_8258BFD0);
PPC_FUNC_IMPL(__imp__sub_8258BFD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// beq cr6,0x8258c00c
	if (ctx.cr6.eq) goto loc_8258C00C;
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x8258bffc
	if (!ctx.cr6.eq) goto loc_8258BFFC;
	// lbz r11,41(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8258c000
	if (ctx.cr6.eq) goto loc_8258C000;
loc_8258BFFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258C000:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8258c010
	if (!ctx.cr0.eq) goto loc_8258C010;
loc_8258C00C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258C010:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258C018"))) PPC_WEAK_FUNC(sub_8258C018);
PPC_FUNC_IMPL(__imp__sub_8258C018) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// beq cr6,0x8258c054
	if (ctx.cr6.eq) goto loc_8258C054;
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x8258c044
	if (!ctx.cr6.eq) goto loc_8258C044;
	// lbz r11,41(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8258c048
	if (ctx.cr6.eq) goto loc_8258C048;
loc_8258C044:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258C048:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8258c058
	if (!ctx.cr0.eq) goto loc_8258C058;
loc_8258C054:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258C058:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258C060"))) PPC_WEAK_FUNC(sub_8258C060);
PPC_FUNC_IMPL(__imp__sub_8258C060) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// addi r11,r11,5640
	ctx.r11.s64 = ctx.r11.s64 + 5640;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82de7330
	ctx.lr = 0x8258C090;
	sub_82DE7330(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-632
	ctx.r11.s64 = ctx.r11.s64 + -632;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x8258c0ac
	if (ctx.cr0.eq) goto loc_8258C0AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8258C0AC;
	sub_823FD208(ctx, base);
loc_8258C0AC:
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

__attribute__((alias("__imp__sub_8258C0C8"))) PPC_WEAK_FUNC(sub_8258C0C8);
PPC_FUNC_IMPL(__imp__sub_8258C0C8) {
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
	// bl 0x825e55d0
	ctx.lr = 0x8258C0E4;
	sub_825E55D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,5696
	ctx.r11.s64 = ctx.r11.s64 + 5696;
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// addi r3,r31,276
	ctx.r3.s64 = ctx.r31.s64 + 276;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a0e238
	ctx.lr = 0x8258C100;
	sub_82A0E238(ctx, base);
	// stb r30,280(r31)
	PPC_STORE_U8(ctx.r31.u32 + 280, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_8258C120"))) PPC_WEAK_FUNC(sub_8258C120);
PPC_FUNC_IMPL(__imp__sub_8258C120) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,276
	ctx.r3.s64 = ctx.r3.s64 + 276;
	// addi r11,r11,5696
	ctx.r11.s64 = ctx.r11.s64 + 5696;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82de7330
	ctx.lr = 0x8258C150;
	sub_82DE7330(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-632
	ctx.r11.s64 = ctx.r11.s64 + -632;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x8258c16c
	if (ctx.cr0.eq) goto loc_8258C16C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8258C16C;
	sub_823FD208(ctx, base);
loc_8258C16C:
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

__attribute__((alias("__imp__sub_8258C188"))) PPC_WEAK_FUNC(sub_8258C188);
PPC_FUNC_IMPL(__imp__sub_8258C188) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,5752
	ctx.r11.s64 = ctx.r11.s64 + 5752;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x824afb20
	ctx.lr = 0x8258C1B8;
	sub_824AFB20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258C1C0;
	sub_82DE7330(ctx, base);
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

__attribute__((alias("__imp__sub_8258C1E0"))) PPC_WEAK_FUNC(sub_8258C1E0);
PPC_FUNC_IMPL(__imp__sub_8258C1E0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,5752
	ctx.r11.s64 = ctx.r11.s64 + 5752;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82de7330
	ctx.lr = 0x8258C208;
	sub_82DE7330(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,29772
	ctx.r11.s64 = ctx.r11.s64 + 29772;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8258C230"))) PPC_WEAK_FUNC(sub_8258C230);
PPC_FUNC_IMPL(__imp__sub_8258C230) {
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
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824afb20
	ctx.lr = 0x8258C258;
	sub_824AFB20(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258C26C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8258C288"))) PPC_WEAK_FUNC(sub_8258C288);
PPC_FUNC_IMPL(__imp__sub_8258C288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8258C290;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,-8
	ctx.r28.s64 = ctx.r3.s64 + -8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8258C2A8;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8258C2B0;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8258c2d8
	if (ctx.cr0.eq) goto loc_8258C2D8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x8258C2C4;
	sub_824AFB20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258c188
	ctx.lr = 0x8258C2D0;
	sub_8258C188(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x8258c2dc
	goto loc_8258C2DC;
loc_8258C2D8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258C2DC:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-15824
	ctx.r4.s64 = ctx.r11.s64 + -15824;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8258C2F8;
	sub_823F4FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258C300;
	sub_82DE7330(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258C308"))) PPC_WEAK_FUNC(sub_8258C308);
PPC_FUNC_IMPL(__imp__sub_8258C308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8258C310;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,5760
	ctx.r11.s64 = ctx.r11.s64 + 5760;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x824afb20
	ctx.lr = 0x8258C338;
	sub_824AFB20(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x824afb20
	ctx.lr = 0x8258C344;
	sub_824AFB20(ctx, base);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258C350;
	sub_82DE7330(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258C358;
	sub_82DE7330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258C368"))) PPC_WEAK_FUNC(sub_8258C368);
PPC_FUNC_IMPL(__imp__sub_8258C368) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r11,r11,5760
	ctx.r11.s64 = ctx.r11.s64 + 5760;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82de7330
	ctx.lr = 0x8258C390;
	sub_82DE7330(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82de7330
	ctx.lr = 0x8258C398;
	sub_82DE7330(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,29772
	ctx.r11.s64 = ctx.r11.s64 + 29772;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8258C3B8"))) PPC_WEAK_FUNC(sub_8258C3B8);
PPC_FUNC_IMPL(__imp__sub_8258C3B8) {
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
	// bl 0x8258c368
	ctx.lr = 0x8258C3D0;
	sub_8258C368(ctx, base);
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

__attribute__((alias("__imp__sub_8258C3E8"))) PPC_WEAK_FUNC(sub_8258C3E8);
PPC_FUNC_IMPL(__imp__sub_8258C3E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x8258C3F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r28,12(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x824afb20
	ctx.lr = 0x8258C410;
	sub_824AFB20(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x824afb20
	ctx.lr = 0x8258C420;
	sub_824AFB20(ctx, base);
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258C43C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258C448"))) PPC_WEAK_FUNC(sub_8258C448);
PPC_FUNC_IMPL(__imp__sub_8258C448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddfc
	ctx.lr = 0x8258C450;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,-8
	ctx.r26.s64 = ctx.r3.s64 + -8;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8258C470;
	sub_823F51A8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x823f5040
	ctx.lr = 0x8258C478;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8258c4b8
	if (ctx.cr0.eq) goto loc_8258C4B8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x8258C48C;
	sub_824AFB20(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x824afb20
	ctx.lr = 0x8258C49C;
	sub_824AFB20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x8258c308
	ctx.lr = 0x8258C4B0;
	sub_8258C308(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x8258c4bc
	goto loc_8258C4BC;
loc_8258C4B8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258C4BC:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r11,-15384
	ctx.r4.s64 = ctx.r11.s64 + -15384;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8258C4D8;
	sub_823F4FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258C4E0;
	sub_82DE7330(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258C4E8;
	sub_82DE7330(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258C4F0"))) PPC_WEAK_FUNC(sub_8258C4F0);
PPC_FUNC_IMPL(__imp__sub_8258C4F0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// addi r11,r11,5768
	ctx.r11.s64 = ctx.r11.s64 + 5768;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82de7330
	ctx.lr = 0x8258C518;
	sub_82DE7330(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,29772
	ctx.r11.s64 = ctx.r11.s64 + 29772;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8258C540"))) PPC_WEAK_FUNC(sub_8258C540);
PPC_FUNC_IMPL(__imp__sub_8258C540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x8258C548;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r28,20(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r27,16(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x824afb20
	ctx.lr = 0x8258C56C;
	sub_824AFB20(ctx, base);
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258C590;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258C598"))) PPC_WEAK_FUNC(sub_8258C598);
PPC_FUNC_IMPL(__imp__sub_8258C598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddf8
	ctx.lr = 0x8258C5A0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r24,r3,-8
	ctx.r24.s64 = ctx.r3.s64 + -8;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8258C5C8;
	sub_823F51A8(ctx, base);
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x823f5040
	ctx.lr = 0x8258C5D0;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8258c620
	if (ctx.cr0.eq) goto loc_8258C620;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x8258C5E4;
	sub_824AFB20(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,5768
	ctx.r11.s64 = ctx.r11.s64 + 5768;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x824afb20
	ctx.lr = 0x8258C608;
	sub_824AFB20(ctx, base);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258C618;
	sub_82DE7330(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// b 0x8258c624
	goto loc_8258C624;
loc_8258C620:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258C624:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r5,4(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r4,r11,-15040
	ctx.r4.s64 = ctx.r11.s64 + -15040;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8258C640;
	sub_823F4FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258C648;
	sub_82DE7330(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258C650"))) PPC_WEAK_FUNC(sub_8258C650);
PPC_FUNC_IMPL(__imp__sub_8258C650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8258C658;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,5776
	ctx.r11.s64 = ctx.r11.s64 + 5776;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x824afb20
	ctx.lr = 0x8258C680;
	sub_824AFB20(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x824afb20
	ctx.lr = 0x8258C68C;
	sub_824AFB20(ctx, base);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258C698;
	sub_82DE7330(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258C6A0;
	sub_82DE7330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258C6B0"))) PPC_WEAK_FUNC(sub_8258C6B0);
PPC_FUNC_IMPL(__imp__sub_8258C6B0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r11,r11,5776
	ctx.r11.s64 = ctx.r11.s64 + 5776;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82de7330
	ctx.lr = 0x8258C6D8;
	sub_82DE7330(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82de7330
	ctx.lr = 0x8258C6E0;
	sub_82DE7330(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,29772
	ctx.r11.s64 = ctx.r11.s64 + 29772;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8258C700"))) PPC_WEAK_FUNC(sub_8258C700);
PPC_FUNC_IMPL(__imp__sub_8258C700) {
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
	// bl 0x8258c6b0
	ctx.lr = 0x8258C718;
	sub_8258C6B0(ctx, base);
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

__attribute__((alias("__imp__sub_8258C730"))) PPC_WEAK_FUNC(sub_8258C730);
PPC_FUNC_IMPL(__imp__sub_8258C730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x8258C738;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r28,12(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x824afb20
	ctx.lr = 0x8258C758;
	sub_824AFB20(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x824afb20
	ctx.lr = 0x8258C768;
	sub_824AFB20(ctx, base);
	// lwz r11,208(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 208);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258C784;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258C790"))) PPC_WEAK_FUNC(sub_8258C790);
PPC_FUNC_IMPL(__imp__sub_8258C790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddfc
	ctx.lr = 0x8258C798;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,-8
	ctx.r26.s64 = ctx.r3.s64 + -8;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8258C7B8;
	sub_823F51A8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x823f5040
	ctx.lr = 0x8258C7C0;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8258c800
	if (ctx.cr0.eq) goto loc_8258C800;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x8258C7D4;
	sub_824AFB20(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x824afb20
	ctx.lr = 0x8258C7E4;
	sub_824AFB20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x8258c650
	ctx.lr = 0x8258C7F8;
	sub_8258C650(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x8258c804
	goto loc_8258C804;
loc_8258C800:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258C804:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r11,-14544
	ctx.r4.s64 = ctx.r11.s64 + -14544;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8258C820;
	sub_823F4FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258C828;
	sub_82DE7330(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258C830;
	sub_82DE7330(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258C838"))) PPC_WEAK_FUNC(sub_8258C838);
PPC_FUNC_IMPL(__imp__sub_8258C838) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,5784
	ctx.r11.s64 = ctx.r11.s64 + 5784;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x824afb20
	ctx.lr = 0x8258C868;
	sub_824AFB20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258C870;
	sub_82DE7330(ctx, base);
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

__attribute__((alias("__imp__sub_8258C890"))) PPC_WEAK_FUNC(sub_8258C890);
PPC_FUNC_IMPL(__imp__sub_8258C890) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,5784
	ctx.r11.s64 = ctx.r11.s64 + 5784;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82de7330
	ctx.lr = 0x8258C8B8;
	sub_82DE7330(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,29772
	ctx.r11.s64 = ctx.r11.s64 + 29772;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8258C8E0"))) PPC_WEAK_FUNC(sub_8258C8E0);
PPC_FUNC_IMPL(__imp__sub_8258C8E0) {
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
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824afb20
	ctx.lr = 0x8258C908;
	sub_824AFB20(ctx, base);
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258C91C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8258C938"))) PPC_WEAK_FUNC(sub_8258C938);
PPC_FUNC_IMPL(__imp__sub_8258C938) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,5792
	ctx.r11.s64 = ctx.r11.s64 + 5792;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x824afb20
	ctx.lr = 0x8258C968;
	sub_824AFB20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258C970;
	sub_82DE7330(ctx, base);
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

__attribute__((alias("__imp__sub_8258C990"))) PPC_WEAK_FUNC(sub_8258C990);
PPC_FUNC_IMPL(__imp__sub_8258C990) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,5792
	ctx.r11.s64 = ctx.r11.s64 + 5792;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82de7330
	ctx.lr = 0x8258C9B8;
	sub_82DE7330(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,29772
	ctx.r11.s64 = ctx.r11.s64 + 29772;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8258C9E0"))) PPC_WEAK_FUNC(sub_8258C9E0);
PPC_FUNC_IMPL(__imp__sub_8258C9E0) {
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
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824afb20
	ctx.lr = 0x8258CA08;
	sub_824AFB20(ctx, base);
	// lwz r11,188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258CA1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8258CA38"))) PPC_WEAK_FUNC(sub_8258CA38);
PPC_FUNC_IMPL(__imp__sub_8258CA38) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,5800
	ctx.r11.s64 = ctx.r11.s64 + 5800;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x824afb20
	ctx.lr = 0x8258CA68;
	sub_824AFB20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258CA70;
	sub_82DE7330(ctx, base);
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

__attribute__((alias("__imp__sub_8258CA90"))) PPC_WEAK_FUNC(sub_8258CA90);
PPC_FUNC_IMPL(__imp__sub_8258CA90) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,5800
	ctx.r11.s64 = ctx.r11.s64 + 5800;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82de7330
	ctx.lr = 0x8258CAB8;
	sub_82DE7330(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,29772
	ctx.r11.s64 = ctx.r11.s64 + 29772;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8258CAE0"))) PPC_WEAK_FUNC(sub_8258CAE0);
PPC_FUNC_IMPL(__imp__sub_8258CAE0) {
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
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824afb20
	ctx.lr = 0x8258CB08;
	sub_824AFB20(ctx, base);
	// lwz r11,244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258CB1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8258CB38"))) PPC_WEAK_FUNC(sub_8258CB38);
PPC_FUNC_IMPL(__imp__sub_8258CB38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8258CB40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,-8
	ctx.r28.s64 = ctx.r3.s64 + -8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8258CB58;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8258CB60;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8258cb88
	if (ctx.cr0.eq) goto loc_8258CB88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x8258CB74;
	sub_824AFB20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258ca38
	ctx.lr = 0x8258CB80;
	sub_8258CA38(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x8258cb8c
	goto loc_8258CB8C;
loc_8258CB88:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258CB8C:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-13600
	ctx.r4.s64 = ctx.r11.s64 + -13600;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8258CBA8;
	sub_823F4FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258CBB0;
	sub_82DE7330(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258CBB8"))) PPC_WEAK_FUNC(sub_8258CBB8);
PPC_FUNC_IMPL(__imp__sub_8258CBB8) {
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
	// bl 0x824afb20
	ctx.lr = 0x8258CBD8;
	sub_824AFB20(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82a7d730
	ctx.lr = 0x8258CBE8;
	sub_82A7D730(ctx, base);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8258CC10"))) PPC_WEAK_FUNC(sub_8258CC10);
PPC_FUNC_IMPL(__imp__sub_8258CC10) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82c0f6c0
	ctx.lr = 0x8258CC24;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258cc40
	if (ctx.cr0.eq) goto loc_8258CC40;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,3176
	ctx.r10.s64 = ctx.r10.s64 + 3176;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8258cc44
	goto loc_8258CC44;
loc_8258CC40:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258CC44:
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// stw r11,5276(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5276, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258CC60"))) PPC_WEAK_FUNC(sub_8258CC60);
PPC_FUNC_IMPL(__imp__sub_8258CC60) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82c0f6c0
	ctx.lr = 0x8258CC74;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258cc90
	if (ctx.cr0.eq) goto loc_8258CC90;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,3216
	ctx.r10.s64 = ctx.r10.s64 + 3216;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8258cc94
	goto loc_8258CC94;
loc_8258CC90:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258CC94:
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// stw r11,5332(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5332, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258CCB0"))) PPC_WEAK_FUNC(sub_8258CCB0);
PPC_FUNC_IMPL(__imp__sub_8258CCB0) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82c0f6c0
	ctx.lr = 0x8258CCC4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258cce0
	if (ctx.cr0.eq) goto loc_8258CCE0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,3256
	ctx.r10.s64 = ctx.r10.s64 + 3256;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8258cce4
	goto loc_8258CCE4;
loc_8258CCE0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258CCE4:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// stw r11,-18052(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18052, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258CD00"))) PPC_WEAK_FUNC(sub_8258CD00);
PPC_FUNC_IMPL(__imp__sub_8258CD00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x8258CD08;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 84);
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r3,23748(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 23748);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// addi r27,r11,10
	ctx.r27.s64 = ctx.r11.s64 + 10;
	// bl 0x82865438
	ctx.lr = 0x8258CD38;
	sub_82865438(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x8258cd5c
	if (ctx.cr6.eq) goto loc_8258CD5C;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x8258cd5c
	if (ctx.cr6.eq) goto loc_8258CD5C;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8258cd60
	if (!ctx.cr6.eq) goto loc_8258CD60;
loc_8258CD5C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8258CD60:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258cf38
	if (ctx.cr0.eq) goto loc_8258CF38;
	// lbz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 84);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8258cf38
	if (!ctx.cr0.eq) goto loc_8258CF38;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x8258cda8
	if (!ctx.cr6.eq) goto loc_8258CDA8;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r3,-3892(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3892);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258cf38
	if (ctx.cr0.eq) goto loc_8258CF38;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82629ad0
	ctx.lr = 0x8258CD98;
	sub_82629AD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258cf38
	if (ctx.cr0.eq) goto loc_8258CF38;
	// li r27,20
	ctx.r27.s64 = 20;
	// b 0x8258cf38
	goto loc_8258CF38;
loc_8258CDA8:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8258ce38
	if (!ctx.cr6.eq) goto loc_8258CE38;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r29,-3892(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3892);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq 0x8258cf38
	if (ctx.cr0.eq) goto loc_8258CF38;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82629ad0
	ctx.lr = 0x8258CDCC;
	sub_82629AD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8258cf38
	if (!ctx.cr0.eq) goto loc_8258CF38;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-4060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4060);
	// bl 0x8247fc10
	ctx.lr = 0x8258CDE4;
	sub_8247FC10(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82486ce8
	ctx.lr = 0x8258CDEC;
	sub_82486CE8(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8258ce20
	goto loc_8258CE20;
loc_8258CDF8:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,12384(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12384);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8258ce1c
	if (!ctx.cr6.eq) goto loc_8258CE1C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82629ad0
	ctx.lr = 0x8258CE14;
	sub_82629AD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8258ce30
	if (!ctx.cr0.eq) goto loc_8258CE30;
loc_8258CE1C:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_8258CE20:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8258cdf8
	if (!ctx.cr6.eq) goto loc_8258CDF8;
	// b 0x8258cf38
	goto loc_8258CF38;
loc_8258CE30:
	// li r27,19
	ctx.r27.s64 = 19;
	// b 0x8258cf38
	goto loc_8258CF38;
loc_8258CE38:
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x8258cf38
	if (!ctx.cr6.eq) goto loc_8258CF38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8249e4c8
	ctx.lr = 0x8258CE48;
	sub_8249E4C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258cf38
	if (ctx.cr0.eq) goto loc_8258CF38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8249e4c8
	ctx.lr = 0x8258CE58;
	sub_8249E4C8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258CE68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8258cf38
	if (ctx.cr0.eq) goto loc_8258CF38;
	// lwz r3,23748(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 23748);
	// lbz r31,629(r30)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + 629);
	// bl 0x82865438
	ctx.lr = 0x8258CE7C;
	sub_82865438(ctx, base);
	// lbz r11,641(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 641);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8258cf38
	if (!ctx.cr6.eq) goto loc_8258CF38;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-4060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4060);
	// bl 0x8247fc10
	ctx.lr = 0x8258CE9C;
	sub_8247FC10(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82486ce8
	ctx.lr = 0x8258CEA4;
	sub_82486CE8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8258cf38
	if (ctx.cr6.eq) goto loc_8258CF38;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8258CEB8:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,12384(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12384);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8258ced8
	if (ctx.cr6.eq) goto loc_8258CED8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8258ceb8
	if (!ctx.cr6.eq) goto loc_8258CEB8;
	// b 0x8258cf38
	goto loc_8258CF38;
loc_8258CED8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8249e4c8
	ctx.lr = 0x8258CEE0;
	sub_8249E4C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258cf38
	if (ctx.cr0.eq) goto loc_8258CF38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8249e4c8
	ctx.lr = 0x8258CEF0;
	sub_8249E4C8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258CF00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258cf38
	if (ctx.cr0.eq) goto loc_8258CF38;
	// lbz r10,628(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 628);
	// lbz r9,628(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 628);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8258cf38
	if (ctx.cr6.eq) goto loc_8258CF38;
	// lwz r3,23748(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 23748);
	// lbz r31,629(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 629);
	// bl 0x82865438
	ctx.lr = 0x8258CF24;
	sub_82865438(ctx, base);
	// lbz r11,641(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 641);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8258cf38
	if (ctx.cr6.eq) goto loc_8258CF38;
	// li r27,21
	ctx.r27.s64 = 21;
loc_8258CF38:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258CF48"))) PPC_WEAK_FUNC(sub_8258CF48);
PPC_FUNC_IMPL(__imp__sub_8258CF48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258CF50;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x825890b8
	ctx.lr = 0x8258CF70;
	sub_825890B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258cf94
	if (ctx.cr0.eq) goto loc_8258CF94;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258CF8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8258cfdc
	goto loc_8258CFDC;
loc_8258CF94:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3648(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3648);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8258cfb0
	if (!ctx.cr6.gt) goto loc_8258CFB0;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// b 0x8258cfdc
	goto loc_8258CFDC;
loc_8258CFB0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258CFD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258cfe0
	if (ctx.cr0.eq) goto loc_8258CFE0;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
loc_8258CFDC:
	// stfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
loc_8258CFE0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258CFF0"))) PPC_WEAK_FUNC(sub_8258CFF0);
PPC_FUNC_IMPL(__imp__sub_8258CFF0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// addi r11,r11,5812
	ctx.r11.s64 = ctx.r11.s64 + 5812;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82de7330
	ctx.lr = 0x8258D018;
	sub_82DE7330(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x82411478
	ctx.lr = 0x8258D028;
	sub_82411478(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82de7330
	ctx.lr = 0x8258D030;
	sub_82DE7330(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82411478
	ctx.lr = 0x8258D040;
	sub_82411478(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82de7330
	ctx.lr = 0x8258D048;
	sub_82DE7330(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,-268
	ctx.r11.s64 = ctx.r11.s64 + -268;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8258D068"))) PPC_WEAK_FUNC(sub_8258D068);
PPC_FUNC_IMPL(__imp__sub_8258D068) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258D094;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x8258d0a4
	if (!ctx.cr6.lt) goto loc_8258D0A4;
	// addi r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 1;
	// b 0x8258d0b8
	goto loc_8258D0B8;
loc_8258D0A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258D0B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8258D0B8:
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

__attribute__((alias("__imp__sub_8258D0D0"))) PPC_WEAK_FUNC(sub_8258D0D0);
PPC_FUNC_IMPL(__imp__sub_8258D0D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// addi r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 + 52;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8258d0e4
	if (ctx.cr6.lt) goto loc_8258D0E4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8258D0E4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258D0F0"))) PPC_WEAK_FUNC(sub_8258D0F0);
PPC_FUNC_IMPL(__imp__sub_8258D0F0) {
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
	// addi r4,r4,84
	ctx.r4.s64 = ctx.r4.s64 + 84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824afb20
	ctx.lr = 0x8258D10C;
	sub_824AFB20(ctx, base);
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

__attribute__((alias("__imp__sub_8258D128"))) PPC_WEAK_FUNC(sub_8258D128);
PPC_FUNC_IMPL(__imp__sub_8258D128) {
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
	// bl 0x8258cff0
	ctx.lr = 0x8258D148;
	sub_8258CFF0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258d158
	if (ctx.cr0.eq) goto loc_8258D158;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8258D158;
	sub_823FD208(ctx, base);
loc_8258D158:
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

__attribute__((alias("__imp__sub_8258D178"))) PPC_WEAK_FUNC(sub_8258D178);
PPC_FUNC_IMPL(__imp__sub_8258D178) {
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
	// bl 0x824afb20
	ctx.lr = 0x8258D198;
	sub_824AFB20(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// bl 0x824afb20
	ctx.lr = 0x8258D1A4;
	sub_824AFB20(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8258D1E0"))) PPC_WEAK_FUNC(sub_8258D1E0);
PPC_FUNC_IMPL(__imp__sub_8258D1E0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,88(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// lwz r8,92(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// divw r9,r8,r9
	ctx.r9.s32 = (ctx.r9.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r8.s32 / ctx.r9.s32 : 0;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8258d294
	if (!ctx.cr6.lt) goto loc_8258D294;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82cade48
	ctx.lr = 0x8258D23C;
	sub_82CADE48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x824afb20
	ctx.lr = 0x8258D248;
	sub_824AFB20(ctx, base);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x8258D254;
	sub_824AFB20(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82cad5e8
	ctx.lr = 0x8258D264;
	sub_82CAD5E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826e1b10
	ctx.lr = 0x8258D270;
	sub_826E1B10(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82de7330
	ctx.lr = 0x8258D278;
	sub_82DE7330(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x8258D280;
	sub_82DE7330(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82de7330
	ctx.lr = 0x8258D288;
	sub_82DE7330(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82de7330
	ctx.lr = 0x8258D290;
	sub_82DE7330(ctx, base);
	// b 0x8258d2c0
	goto loc_8258D2C0;
loc_8258D294:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258d2c0
	if (ctx.cr6.eq) goto loc_8258D2C0;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x824afb20
	ctx.lr = 0x8258D2AC;
	sub_824AFB20(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826e1b10
	ctx.lr = 0x8258D2B8;
	sub_826E1B10(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82de7330
	ctx.lr = 0x8258D2C0;
	sub_82DE7330(ctx, base);
loc_8258D2C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_8258D2E0"))) PPC_WEAK_FUNC(sub_8258D2E0);
PPC_FUNC_IMPL(__imp__sub_8258D2E0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,88(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r8,92(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// divw r9,r8,r9
	ctx.r9.s32 = (ctx.r9.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r8.s32 / ctx.r9.s32 : 0;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8258d3e0
	if (!ctx.cr6.lt) goto loc_8258D3E0;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82cade48
	ctx.lr = 0x8258D33C;
	sub_82CADE48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824afb20
	ctx.lr = 0x8258D348;
	sub_824AFB20(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82cade48
	ctx.lr = 0x8258D358;
	sub_82CADE48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x824afb20
	ctx.lr = 0x8258D364;
	sub_824AFB20(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-9332
	ctx.r4.s64 = ctx.r11.s64 + -9332;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824984c8
	ctx.lr = 0x8258D378;
	sub_824984C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x8258D384;
	sub_824AFB20(ctx, base);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82cad650
	ctx.lr = 0x8258D398;
	sub_82CAD650(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826e1b10
	ctx.lr = 0x8258D3A4;
	sub_826E1B10(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82de7330
	ctx.lr = 0x8258D3AC;
	sub_82DE7330(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x8258D3B4;
	sub_82DE7330(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82de7330
	ctx.lr = 0x8258D3BC;
	sub_82DE7330(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82de7330
	ctx.lr = 0x8258D3C4;
	sub_82DE7330(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82de7330
	ctx.lr = 0x8258D3CC;
	sub_82DE7330(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82de7330
	ctx.lr = 0x8258D3D4;
	sub_82DE7330(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82de7330
	ctx.lr = 0x8258D3DC;
	sub_82DE7330(ctx, base);
	// b 0x8258d3f8
	goto loc_8258D3F8;
loc_8258D3E0:
	// bl 0x82cad4d8
	ctx.lr = 0x8258D3E4;
	sub_82CAD4D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826e1b10
	ctx.lr = 0x8258D3F0;
	sub_826E1B10(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82de7330
	ctx.lr = 0x8258D3F8;
	sub_82DE7330(ctx, base);
loc_8258D3F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_8258D418"))) PPC_WEAK_FUNC(sub_8258D418);
PPC_FUNC_IMPL(__imp__sub_8258D418) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,88(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// lwz r9,92(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8258d504
	if (!ctx.cr6.lt) goto loc_8258D504;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8258d4a4
	if (!ctx.cr6.eq) goto loc_8258D4A4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,5908
	ctx.r3.s64 = ctx.r11.s64 + 5908;
	// bl 0x82ca7538
	ctx.lr = 0x8258D478;
	sub_82CA7538(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,5884
	ctx.r4.s64 = ctx.r11.s64 + 5884;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82cabb80
	ctx.lr = 0x8258D48C;
	sub_82CABB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826e1b10
	ctx.lr = 0x8258D498;
	sub_826E1B10(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82de7330
	ctx.lr = 0x8258D4A0;
	sub_82DE7330(ctx, base);
	// b 0x8258d530
	goto loc_8258D530;
loc_8258D4A4:
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8264ccd0
	ctx.lr = 0x8258D4B0;
	sub_8264CCD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x824afb20
	ctx.lr = 0x8258D4BC;
	sub_824AFB20(ctx, base);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x8258D4C8;
	sub_824AFB20(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82cad5e8
	ctx.lr = 0x8258D4D8;
	sub_82CAD5E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826e1b10
	ctx.lr = 0x8258D4E4;
	sub_826E1B10(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82de7330
	ctx.lr = 0x8258D4EC;
	sub_82DE7330(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x8258D4F4;
	sub_82DE7330(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82de7330
	ctx.lr = 0x8258D4FC;
	sub_82DE7330(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// b 0x8258d52c
	goto loc_8258D52C;
loc_8258D504:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258d530
	if (ctx.cr6.eq) goto loc_8258D530;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x824afb20
	ctx.lr = 0x8258D51C;
	sub_824AFB20(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826e1b10
	ctx.lr = 0x8258D528;
	sub_826E1B10(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
loc_8258D52C:
	// bl 0x82de7330
	ctx.lr = 0x8258D530;
	sub_82DE7330(ctx, base);
loc_8258D530:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_8258D550"))) PPC_WEAK_FUNC(sub_8258D550);
PPC_FUNC_IMPL(__imp__sub_8258D550) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,88(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// lwz r8,92(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// divw r9,r8,r9
	ctx.r9.s32 = (ctx.r9.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r8.s32 / ctx.r9.s32 : 0;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8258d604
	if (!ctx.cr6.lt) goto loc_8258D604;
	// mulli r10,r10,20
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(20));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82cade48
	ctx.lr = 0x8258D5AC;
	sub_82CADE48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x824afb20
	ctx.lr = 0x8258D5B8;
	sub_824AFB20(ctx, base);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x8258D5C4;
	sub_824AFB20(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82cad5e8
	ctx.lr = 0x8258D5D4;
	sub_82CAD5E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826e1b10
	ctx.lr = 0x8258D5E0;
	sub_826E1B10(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82de7330
	ctx.lr = 0x8258D5E8;
	sub_82DE7330(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x8258D5F0;
	sub_82DE7330(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82de7330
	ctx.lr = 0x8258D5F8;
	sub_82DE7330(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82de7330
	ctx.lr = 0x8258D600;
	sub_82DE7330(ctx, base);
	// b 0x8258d630
	goto loc_8258D630;
loc_8258D604:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258d630
	if (ctx.cr6.eq) goto loc_8258D630;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x824afb20
	ctx.lr = 0x8258D61C;
	sub_824AFB20(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826e1b10
	ctx.lr = 0x8258D628;
	sub_826E1B10(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82de7330
	ctx.lr = 0x8258D630;
	sub_82DE7330(ctx, base);
loc_8258D630:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_8258D650"))) PPC_WEAK_FUNC(sub_8258D650);
PPC_FUNC_IMPL(__imp__sub_8258D650) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,88(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r8,92(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// divw r9,r8,r9
	ctx.r9.s32 = (ctx.r9.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r8.s32 / ctx.r9.s32 : 0;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8258d750
	if (!ctx.cr6.lt) goto loc_8258D750;
	// mulli r10,r10,20
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(20));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82cade48
	ctx.lr = 0x8258D6AC;
	sub_82CADE48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824afb20
	ctx.lr = 0x8258D6B8;
	sub_824AFB20(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82cade48
	ctx.lr = 0x8258D6C8;
	sub_82CADE48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x824afb20
	ctx.lr = 0x8258D6D4;
	sub_824AFB20(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-9332
	ctx.r4.s64 = ctx.r11.s64 + -9332;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824984c8
	ctx.lr = 0x8258D6E8;
	sub_824984C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x8258D6F4;
	sub_824AFB20(ctx, base);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82cad650
	ctx.lr = 0x8258D708;
	sub_82CAD650(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826e1b10
	ctx.lr = 0x8258D714;
	sub_826E1B10(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82de7330
	ctx.lr = 0x8258D71C;
	sub_82DE7330(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x8258D724;
	sub_82DE7330(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82de7330
	ctx.lr = 0x8258D72C;
	sub_82DE7330(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82de7330
	ctx.lr = 0x8258D734;
	sub_82DE7330(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82de7330
	ctx.lr = 0x8258D73C;
	sub_82DE7330(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82de7330
	ctx.lr = 0x8258D744;
	sub_82DE7330(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82de7330
	ctx.lr = 0x8258D74C;
	sub_82DE7330(ctx, base);
	// b 0x8258d768
	goto loc_8258D768;
loc_8258D750:
	// bl 0x82cad4d8
	ctx.lr = 0x8258D754;
	sub_82CAD4D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826e1b10
	ctx.lr = 0x8258D760;
	sub_826E1B10(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82de7330
	ctx.lr = 0x8258D768;
	sub_82DE7330(ctx, base);
loc_8258D768:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_8258D788"))) PPC_WEAK_FUNC(sub_8258D788);
PPC_FUNC_IMPL(__imp__sub_8258D788) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,5812
	ctx.r11.s64 = ctx.r11.s64 + 5812;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82411478
	ctx.lr = 0x8258D7D0;
	sub_82411478(ctx, base);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82411478
	ctx.lr = 0x8258D7E4;
	sub_82411478(ctx, base);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8258D808"))) PPC_WEAK_FUNC(sub_8258D808);
PPC_FUNC_IMPL(__imp__sub_8258D808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258D810;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r5,r10,-29388
	ctx.r5.s64 = ctx.r10.s64 + -29388;
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258D83C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82411478
	ctx.lr = 0x8258D84C;
	sub_82411478(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,-8468
	ctx.r5.s64 = ctx.r11.s64 + -8468;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258D86C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8258d880
	if (!ctx.cr6.lt) goto loc_8258D880;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_8258D880:
	// bl 0x82ca7538
	ctx.lr = 0x8258D884;
	sub_82CA7538(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r29,r11,5884
	ctx.r29.s64 = ctx.r11.s64 + 5884;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82cabb80
	ctx.lr = 0x8258D89C;
	sub_82CABB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// bl 0x826e1b10
	ctx.lr = 0x8258D8A8;
	sub_826E1B10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x8258D8B0;
	sub_82DE7330(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// addi r5,r11,-8480
	ctx.r5.s64 = ctx.r11.s64 + -8480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258D8D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r30,80
	ctx.r4.s64 = ctx.r30.s64 + 80;
	// addi r5,r11,5952
	ctx.r5.s64 = ctx.r11.s64 + 5952;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258D8F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,-8496
	ctx.r5.s64 = ctx.r11.s64 + -8496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258D910;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8258d924
	if (!ctx.cr6.lt) goto loc_8258D924;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_8258D924:
	// bl 0x82ca7538
	ctx.lr = 0x8258D928;
	sub_82CA7538(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cabb80
	ctx.lr = 0x8258D938;
	sub_82CABB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,84
	ctx.r3.s64 = ctx.r30.s64 + 84;
	// bl 0x826e1b10
	ctx.lr = 0x8258D944;
	sub_826E1B10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x8258D94C;
	sub_82DE7330(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,5940
	ctx.r5.s64 = ctx.r11.s64 + 5940;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258D96C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8258d980
	if (!ctx.cr6.lt) goto loc_8258D980;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_8258D980:
	// bl 0x82ca7538
	ctx.lr = 0x8258D984;
	sub_82CA7538(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cabb80
	ctx.lr = 0x8258D994;
	sub_82CABB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x826e1b10
	ctx.lr = 0x8258D9A0;
	sub_826E1B10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x8258D9A8;
	sub_82DE7330(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82411478
	ctx.lr = 0x8258D9B8;
	sub_82411478(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258D9C0"))) PPC_WEAK_FUNC(sub_8258D9C0);
PPC_FUNC_IMPL(__imp__sub_8258D9C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258D9C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// b 0x8258d9f8
	goto loc_8258D9F8;
loc_8258D9DC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258D9F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_8258D9F8:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8258d9dc
	if (!ctx.cr6.eq) goto loc_8258D9DC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258DA10"))) PPC_WEAK_FUNC(sub_8258DA10);
PPC_FUNC_IMPL(__imp__sub_8258DA10) {
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
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8258da48
	goto loc_8258DA48;
loc_8258DA30:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258DA44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_8258DA48:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8258da30
	if (!ctx.cr6.eq) goto loc_8258DA30;
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

__attribute__((alias("__imp__sub_8258DA70"))) PPC_WEAK_FUNC(sub_8258DA70);
PPC_FUNC_IMPL(__imp__sub_8258DA70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258DA78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x825893a0
	ctx.lr = 0x8258DA88;
	sub_825893A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258dac0
	if (ctx.cr0.eq) goto loc_8258DAC0;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8258dab4
	goto loc_8258DAB4;
loc_8258DA98:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258DAB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_8258DAB4:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8258da98
	if (!ctx.cr6.eq) goto loc_8258DA98;
loc_8258DAC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258DAC8"))) PPC_WEAK_FUNC(sub_8258DAC8);
PPC_FUNC_IMPL(__imp__sub_8258DAC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258DAD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x825893a0
	ctx.lr = 0x8258DAE0;
	sub_825893A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258db18
	if (ctx.cr0.eq) goto loc_8258DB18;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8258db0c
	goto loc_8258DB0C;
loc_8258DAF0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258DB08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_8258DB0C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8258daf0
	if (!ctx.cr6.eq) goto loc_8258DAF0;
loc_8258DB18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258DB20"))) PPC_WEAK_FUNC(sub_8258DB20);
PPC_FUNC_IMPL(__imp__sub_8258DB20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x8258DB28;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8258db88
	goto loc_8258DB88;
loc_8258DB38:
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258DB50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r28,20(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8252d680
	ctx.lr = 0x8258DB5C;
	sub_8252D680(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82548600
	ctx.lr = 0x8258DB6C;
	sub_82548600(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258DB84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_8258DB88:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8258db38
	if (!ctx.cr6.eq) goto loc_8258DB38;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258DBA0"))) PPC_WEAK_FUNC(sub_8258DBA0);
PPC_FUNC_IMPL(__imp__sub_8258DBA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258DBA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x8258dbdc
	goto loc_8258DBDC;
loc_8258DBBC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258DBD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// add r29,r3,r10
	ctx.r29.u64 = ctx.r3.u64 + ctx.r10.u64;
loc_8258DBDC:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8258dbbc
	if (!ctx.cr6.eq) goto loc_8258DBBC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258DBF8"))) PPC_WEAK_FUNC(sub_8258DBF8);
PPC_FUNC_IMPL(__imp__sub_8258DBF8) {
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
	// bl 0x8258dba0
	ctx.lr = 0x8258DC10;
	sub_8258DBA0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,23748(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23748);
	// bl 0x828653d8
	ctx.lr = 0x8258DC20;
	sub_828653D8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258DC30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
	// blt cr6,0x8258dc44
	if (ctx.cr6.lt) goto loc_8258DC44;
	// li r4,48
	ctx.r4.s64 = 48;
	// bl 0x824962a0
	ctx.lr = 0x8258DC44;
	sub_824962A0(ctx, base);
loc_8258DC44:
	// cmpwi cr6,r31,20
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 20, ctx.xer);
	// blt cr6,0x8258dc58
	if (ctx.cr6.lt) goto loc_8258DC58;
	// li r4,49
	ctx.r4.s64 = 49;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824962a0
	ctx.lr = 0x8258DC58;
	sub_824962A0(ctx, base);
loc_8258DC58:
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

__attribute__((alias("__imp__sub_8258DC70"))) PPC_WEAK_FUNC(sub_8258DC70);
PPC_FUNC_IMPL(__imp__sub_8258DC70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x8258DC78;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8258dca0
	if (ctx.cr6.lt) goto loc_8258DCA0;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// blt cr6,0x8258dca4
	if (ctx.cr6.lt) goto loc_8258DCA4;
loc_8258DCA0:
	// li r30,2
	ctx.r30.s64 = 2;
loc_8258DCA4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x8258dd44
	if (ctx.cr6.gt) goto loc_8258DD44;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82cade48
	ctx.lr = 0x8258DCCC;
	sub_82CADE48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x824afb20
	ctx.lr = 0x8258DCD8;
	sub_824AFB20(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r4,r10,-9292
	ctx.r4.s64 = ctx.r10.s64 + -9292;
	// lwz r5,5276(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5276);
	// bl 0x82cabb80
	ctx.lr = 0x8258DCF0;
	sub_82CABB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824afb20
	ctx.lr = 0x8258DCFC;
	sub_824AFB20(ctx, base);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82cad5e8
	ctx.lr = 0x8258DD0C;
	sub_82CAD5E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826e1b10
	ctx.lr = 0x8258DD18;
	sub_826E1B10(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82de7330
	ctx.lr = 0x8258DD20;
	sub_82DE7330(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82de7330
	ctx.lr = 0x8258DD28;
	sub_82DE7330(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82de7330
	ctx.lr = 0x8258DD30;
	sub_82DE7330(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82de7330
	ctx.lr = 0x8258DD38;
	sub_82DE7330(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82de7330
	ctx.lr = 0x8258DD40;
	sub_82DE7330(ctx, base);
	// b 0x8258dd6c
	goto loc_8258DD6C;
loc_8258DD44:
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-9292
	ctx.r4.s64 = ctx.r10.s64 + -9292;
	// lwz r5,5268(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5268);
	// bl 0x82cabb80
	ctx.lr = 0x8258DD58;
	sub_82CABB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826e1b10
	ctx.lr = 0x8258DD64;
	sub_826E1B10(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82de7330
	ctx.lr = 0x8258DD6C;
	sub_82DE7330(ctx, base);
loc_8258DD6C:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,22
	ctx.r5.s64 = 22;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82cadf10
	ctx.lr = 0x8258DD84;
	sub_82CADF10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824afb20
	ctx.lr = 0x8258DD90;
	sub_824AFB20(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-9268
	ctx.r4.s64 = ctx.r11.s64 + -9268;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824984c8
	ctx.lr = 0x8258DDA4;
	sub_824984C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x824afb20
	ctx.lr = 0x8258DDB0;
	sub_824AFB20(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,27280
	ctx.r11.s64 = ctx.r11.s64 + 27280;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f31,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x824afb20
	ctx.lr = 0x8258DDC8;
	sub_824AFB20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82cad4d8
	ctx.lr = 0x8258DDD4;
	sub_82CAD4D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x824afb20
	ctx.lr = 0x8258DDE0;
	sub_824AFB20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82cad5e8
	ctx.lr = 0x8258DDF4;
	sub_82CAD5E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x824afb20
	ctx.lr = 0x8258DE00;
	sub_824AFB20(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x824afb20
	ctx.lr = 0x8258DE10;
	sub_824AFB20(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// bl 0x82553638
	ctx.lr = 0x8258DE30;
	sub_82553638(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82de7330
	ctx.lr = 0x8258DE38;
	sub_82DE7330(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82de7330
	ctx.lr = 0x8258DE40;
	sub_82DE7330(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82de7330
	ctx.lr = 0x8258DE48;
	sub_82DE7330(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82de7330
	ctx.lr = 0x8258DE50;
	sub_82DE7330(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82de7330
	ctx.lr = 0x8258DE58;
	sub_82DE7330(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82de7330
	ctx.lr = 0x8258DE60;
	sub_82DE7330(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258de84
	if (ctx.cr6.eq) goto loc_8258DE84;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,20648(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20648);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r9,49(r11)
	PPC_STORE_U8(ctx.r11.u32 + 49, ctx.r9.u8);
loc_8258DE84:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82de7330
	ctx.lr = 0x8258DE8C;
	sub_82DE7330(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x8258DE94;
	sub_82DE7330(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258DEA0"))) PPC_WEAK_FUNC(sub_8258DEA0);
PPC_FUNC_IMPL(__imp__sub_8258DEA0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258DEBC;
	sub_82DE7330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258DEC4;
	sub_82DE7330(ctx, base);
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

__attribute__((alias("__imp__sub_8258DED8"))) PPC_WEAK_FUNC(sub_8258DED8);
PPC_FUNC_IMPL(__imp__sub_8258DED8) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,5976
	ctx.r11.s64 = ctx.r11.s64 + 5976;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x824afb20
	ctx.lr = 0x8258DF08;
	sub_824AFB20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258DF10;
	sub_82DE7330(ctx, base);
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

__attribute__((alias("__imp__sub_8258DF30"))) PPC_WEAK_FUNC(sub_8258DF30);
PPC_FUNC_IMPL(__imp__sub_8258DF30) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,5976
	ctx.r11.s64 = ctx.r11.s64 + 5976;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82de7330
	ctx.lr = 0x8258DF58;
	sub_82DE7330(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,29772
	ctx.r11.s64 = ctx.r11.s64 + 29772;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8258DF80"))) PPC_WEAK_FUNC(sub_8258DF80);
PPC_FUNC_IMPL(__imp__sub_8258DF80) {
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
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824afb20
	ctx.lr = 0x8258DFA8;
	sub_824AFB20(ctx, base);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258DFBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8258DFD8"))) PPC_WEAK_FUNC(sub_8258DFD8);
PPC_FUNC_IMPL(__imp__sub_8258DFD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8258DFE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,-8
	ctx.r28.s64 = ctx.r3.s64 + -8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8258DFF8;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8258E000;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8258e028
	if (ctx.cr0.eq) goto loc_8258E028;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x8258E014;
	sub_824AFB20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258ded8
	ctx.lr = 0x8258E020;
	sub_8258DED8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x8258e02c
	goto loc_8258E02C;
loc_8258E028:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258E02C:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r5,20(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-8320
	ctx.r4.s64 = ctx.r11.s64 + -8320;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8258E048;
	sub_823F4FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258E050;
	sub_82DE7330(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258E058"))) PPC_WEAK_FUNC(sub_8258E058);
PPC_FUNC_IMPL(__imp__sub_8258E058) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,5984
	ctx.r11.s64 = ctx.r11.s64 + 5984;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x824afb20
	ctx.lr = 0x8258E088;
	sub_824AFB20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258E090;
	sub_82DE7330(ctx, base);
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

__attribute__((alias("__imp__sub_8258E0B0"))) PPC_WEAK_FUNC(sub_8258E0B0);
PPC_FUNC_IMPL(__imp__sub_8258E0B0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,5984
	ctx.r11.s64 = ctx.r11.s64 + 5984;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82de7330
	ctx.lr = 0x8258E0D8;
	sub_82DE7330(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,29772
	ctx.r11.s64 = ctx.r11.s64 + 29772;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8258E100"))) PPC_WEAK_FUNC(sub_8258E100);
PPC_FUNC_IMPL(__imp__sub_8258E100) {
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
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824afb20
	ctx.lr = 0x8258E128;
	sub_824AFB20(ctx, base);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258E13C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8258E158"))) PPC_WEAK_FUNC(sub_8258E158);
PPC_FUNC_IMPL(__imp__sub_8258E158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8258E160;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,-8
	ctx.r28.s64 = ctx.r3.s64 + -8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8258E178;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8258E180;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8258e1a8
	if (ctx.cr0.eq) goto loc_8258E1A8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x8258E194;
	sub_824AFB20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258e058
	ctx.lr = 0x8258E1A0;
	sub_8258E058(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x8258e1ac
	goto loc_8258E1AC;
loc_8258E1A8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258E1AC:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r5,20(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-7936
	ctx.r4.s64 = ctx.r11.s64 + -7936;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8258E1C8;
	sub_823F4FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258E1D0;
	sub_82DE7330(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258E1D8"))) PPC_WEAK_FUNC(sub_8258E1D8);
PPC_FUNC_IMPL(__imp__sub_8258E1D8) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,5992
	ctx.r11.s64 = ctx.r11.s64 + 5992;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x824afb20
	ctx.lr = 0x8258E208;
	sub_824AFB20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258E210;
	sub_82DE7330(ctx, base);
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

__attribute__((alias("__imp__sub_8258E230"))) PPC_WEAK_FUNC(sub_8258E230);
PPC_FUNC_IMPL(__imp__sub_8258E230) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,5992
	ctx.r11.s64 = ctx.r11.s64 + 5992;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82de7330
	ctx.lr = 0x8258E258;
	sub_82DE7330(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,29772
	ctx.r11.s64 = ctx.r11.s64 + 29772;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8258E280"))) PPC_WEAK_FUNC(sub_8258E280);
PPC_FUNC_IMPL(__imp__sub_8258E280) {
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
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824afb20
	ctx.lr = 0x8258E2A8;
	sub_824AFB20(ctx, base);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258E2BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8258E2D8"))) PPC_WEAK_FUNC(sub_8258E2D8);
PPC_FUNC_IMPL(__imp__sub_8258E2D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8258E2E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,-8
	ctx.r28.s64 = ctx.r3.s64 + -8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8258E2F8;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8258E300;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8258e328
	if (ctx.cr0.eq) goto loc_8258E328;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x8258E314;
	sub_824AFB20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258e1d8
	ctx.lr = 0x8258E320;
	sub_8258E1D8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x8258e32c
	goto loc_8258E32C;
loc_8258E328:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258E32C:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r5,20(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-7552
	ctx.r4.s64 = ctx.r11.s64 + -7552;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8258E348;
	sub_823F4FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258E350;
	sub_82DE7330(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258E358"))) PPC_WEAK_FUNC(sub_8258E358);
PPC_FUNC_IMPL(__imp__sub_8258E358) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,6000
	ctx.r11.s64 = ctx.r11.s64 + 6000;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x824afb20
	ctx.lr = 0x8258E388;
	sub_824AFB20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258E390;
	sub_82DE7330(ctx, base);
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

__attribute__((alias("__imp__sub_8258E3B0"))) PPC_WEAK_FUNC(sub_8258E3B0);
PPC_FUNC_IMPL(__imp__sub_8258E3B0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,6000
	ctx.r11.s64 = ctx.r11.s64 + 6000;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82de7330
	ctx.lr = 0x8258E3D8;
	sub_82DE7330(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,29772
	ctx.r11.s64 = ctx.r11.s64 + 29772;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8258E400"))) PPC_WEAK_FUNC(sub_8258E400);
PPC_FUNC_IMPL(__imp__sub_8258E400) {
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
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824afb20
	ctx.lr = 0x8258E428;
	sub_824AFB20(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258E43C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8258E458"))) PPC_WEAK_FUNC(sub_8258E458);
PPC_FUNC_IMPL(__imp__sub_8258E458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8258E460;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8258E478;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8258E480;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8258e4a8
	if (ctx.cr0.eq) goto loc_8258E4A8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x8258E494;
	sub_824AFB20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258e358
	ctx.lr = 0x8258E4A0;
	sub_8258E358(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x8258e4ac
	goto loc_8258E4AC;
loc_8258E4A8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258E4AC:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-7168
	ctx.r4.s64 = ctx.r11.s64 + -7168;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8258E4C8;
	sub_823F4FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258E4D0;
	sub_82DE7330(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258E4D8"))) PPC_WEAK_FUNC(sub_8258E4D8);
PPC_FUNC_IMPL(__imp__sub_8258E4D8) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,6008
	ctx.r11.s64 = ctx.r11.s64 + 6008;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x824afb20
	ctx.lr = 0x8258E508;
	sub_824AFB20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258E510;
	sub_82DE7330(ctx, base);
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

__attribute__((alias("__imp__sub_8258E530"))) PPC_WEAK_FUNC(sub_8258E530);
PPC_FUNC_IMPL(__imp__sub_8258E530) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,6008
	ctx.r11.s64 = ctx.r11.s64 + 6008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82de7330
	ctx.lr = 0x8258E558;
	sub_82DE7330(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,29772
	ctx.r11.s64 = ctx.r11.s64 + 29772;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8258E580"))) PPC_WEAK_FUNC(sub_8258E580);
PPC_FUNC_IMPL(__imp__sub_8258E580) {
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
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824afb20
	ctx.lr = 0x8258E5A8;
	sub_824AFB20(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258E5BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8258E5D8"))) PPC_WEAK_FUNC(sub_8258E5D8);
PPC_FUNC_IMPL(__imp__sub_8258E5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8258E5E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8258E5F8;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8258E600;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8258e628
	if (ctx.cr0.eq) goto loc_8258E628;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x8258E614;
	sub_824AFB20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258e4d8
	ctx.lr = 0x8258E620;
	sub_8258E4D8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x8258e62c
	goto loc_8258E62C;
loc_8258E628:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258E62C:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-6784
	ctx.r4.s64 = ctx.r11.s64 + -6784;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8258E648;
	sub_823F4FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258E650;
	sub_82DE7330(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258E658"))) PPC_WEAK_FUNC(sub_8258E658);
PPC_FUNC_IMPL(__imp__sub_8258E658) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,6016
	ctx.r11.s64 = ctx.r11.s64 + 6016;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x824afb20
	ctx.lr = 0x8258E688;
	sub_824AFB20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258E690;
	sub_82DE7330(ctx, base);
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

__attribute__((alias("__imp__sub_8258E6B0"))) PPC_WEAK_FUNC(sub_8258E6B0);
PPC_FUNC_IMPL(__imp__sub_8258E6B0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,6016
	ctx.r11.s64 = ctx.r11.s64 + 6016;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82de7330
	ctx.lr = 0x8258E6D8;
	sub_82DE7330(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,29772
	ctx.r11.s64 = ctx.r11.s64 + 29772;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8258E700"))) PPC_WEAK_FUNC(sub_8258E700);
PPC_FUNC_IMPL(__imp__sub_8258E700) {
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
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824afb20
	ctx.lr = 0x8258E728;
	sub_824AFB20(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258E73C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8258E758"))) PPC_WEAK_FUNC(sub_8258E758);
PPC_FUNC_IMPL(__imp__sub_8258E758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8258E760;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8258E778;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8258E780;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8258e7a8
	if (ctx.cr0.eq) goto loc_8258E7A8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x8258E794;
	sub_824AFB20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258e658
	ctx.lr = 0x8258E7A0;
	sub_8258E658(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x8258e7ac
	goto loc_8258E7AC;
loc_8258E7A8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258E7AC:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-6400
	ctx.r4.s64 = ctx.r11.s64 + -6400;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8258E7C8;
	sub_823F4FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258E7D0;
	sub_82DE7330(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258E7D8"))) PPC_WEAK_FUNC(sub_8258E7D8);
PPC_FUNC_IMPL(__imp__sub_8258E7D8) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,6024
	ctx.r11.s64 = ctx.r11.s64 + 6024;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x824afb20
	ctx.lr = 0x8258E808;
	sub_824AFB20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258E810;
	sub_82DE7330(ctx, base);
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

__attribute__((alias("__imp__sub_8258E830"))) PPC_WEAK_FUNC(sub_8258E830);
PPC_FUNC_IMPL(__imp__sub_8258E830) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,6024
	ctx.r11.s64 = ctx.r11.s64 + 6024;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82de7330
	ctx.lr = 0x8258E858;
	sub_82DE7330(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,29772
	ctx.r11.s64 = ctx.r11.s64 + 29772;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8258E880"))) PPC_WEAK_FUNC(sub_8258E880);
PPC_FUNC_IMPL(__imp__sub_8258E880) {
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
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824afb20
	ctx.lr = 0x8258E8A8;
	sub_824AFB20(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258E8BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8258E8D8"))) PPC_WEAK_FUNC(sub_8258E8D8);
PPC_FUNC_IMPL(__imp__sub_8258E8D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8258E8E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8258E8F8;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8258E900;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8258e928
	if (ctx.cr0.eq) goto loc_8258E928;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x8258E914;
	sub_824AFB20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258e7d8
	ctx.lr = 0x8258E920;
	sub_8258E7D8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x8258e92c
	goto loc_8258E92C;
loc_8258E928:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258E92C:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-6016
	ctx.r4.s64 = ctx.r11.s64 + -6016;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8258E948;
	sub_823F4FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258E950;
	sub_82DE7330(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258E958"))) PPC_WEAK_FUNC(sub_8258E958);
PPC_FUNC_IMPL(__imp__sub_8258E958) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,6032
	ctx.r11.s64 = ctx.r11.s64 + 6032;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x824afb20
	ctx.lr = 0x8258E988;
	sub_824AFB20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258E990;
	sub_82DE7330(ctx, base);
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

__attribute__((alias("__imp__sub_8258E9B0"))) PPC_WEAK_FUNC(sub_8258E9B0);
PPC_FUNC_IMPL(__imp__sub_8258E9B0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,6032
	ctx.r11.s64 = ctx.r11.s64 + 6032;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82de7330
	ctx.lr = 0x8258E9D8;
	sub_82DE7330(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,29772
	ctx.r11.s64 = ctx.r11.s64 + 29772;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8258EA00"))) PPC_WEAK_FUNC(sub_8258EA00);
PPC_FUNC_IMPL(__imp__sub_8258EA00) {
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
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824afb20
	ctx.lr = 0x8258EA28;
	sub_824AFB20(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258EA3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8258EA58"))) PPC_WEAK_FUNC(sub_8258EA58);
PPC_FUNC_IMPL(__imp__sub_8258EA58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8258EA60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8258EA78;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8258EA80;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8258eaa8
	if (ctx.cr0.eq) goto loc_8258EAA8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x8258EA94;
	sub_824AFB20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258e958
	ctx.lr = 0x8258EAA0;
	sub_8258E958(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x8258eaac
	goto loc_8258EAAC;
loc_8258EAA8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258EAAC:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-5632
	ctx.r4.s64 = ctx.r11.s64 + -5632;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8258EAC8;
	sub_823F4FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258EAD0;
	sub_82DE7330(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258EAD8"))) PPC_WEAK_FUNC(sub_8258EAD8);
PPC_FUNC_IMPL(__imp__sub_8258EAD8) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,6040
	ctx.r11.s64 = ctx.r11.s64 + 6040;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82de7330
	ctx.lr = 0x8258EB00;
	sub_82DE7330(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,29772
	ctx.r11.s64 = ctx.r11.s64 + 29772;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8258EB28"))) PPC_WEAK_FUNC(sub_8258EB28);
PPC_FUNC_IMPL(__imp__sub_8258EB28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258EB30;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x824afb20
	ctx.lr = 0x8258EB50;
	sub_824AFB20(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258EB68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258EB70"))) PPC_WEAK_FUNC(sub_8258EB70);
PPC_FUNC_IMPL(__imp__sub_8258EB70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de00
	ctx.lr = 0x8258EB78;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8258EB94;
	sub_823F51A8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823f5040
	ctx.lr = 0x8258EB9C;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8258ebe0
	if (ctx.cr0.eq) goto loc_8258EBE0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x8258EBB0;
	sub_824AFB20(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r11,r11,6040
	ctx.r11.s64 = ctx.r11.s64 + 6040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x824afb20
	ctx.lr = 0x8258EBCC;
	sub_824AFB20(ctx, base);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258EBD8;
	sub_82DE7330(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// b 0x8258ebe4
	goto loc_8258EBE4;
loc_8258EBE0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258EBE4:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r11,-5336
	ctx.r4.s64 = ctx.r11.s64 + -5336;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8258EC00;
	sub_823F4FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258EC08;
	sub_82DE7330(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258EC10"))) PPC_WEAK_FUNC(sub_8258EC10);
PPC_FUNC_IMPL(__imp__sub_8258EC10) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,6048
	ctx.r11.s64 = ctx.r11.s64 + 6048;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x824afb20
	ctx.lr = 0x8258EC40;
	sub_824AFB20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258EC48;
	sub_82DE7330(ctx, base);
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

__attribute__((alias("__imp__sub_8258EC68"))) PPC_WEAK_FUNC(sub_8258EC68);
PPC_FUNC_IMPL(__imp__sub_8258EC68) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,6048
	ctx.r11.s64 = ctx.r11.s64 + 6048;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82de7330
	ctx.lr = 0x8258EC90;
	sub_82DE7330(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,29772
	ctx.r11.s64 = ctx.r11.s64 + 29772;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8258ECB8"))) PPC_WEAK_FUNC(sub_8258ECB8);
PPC_FUNC_IMPL(__imp__sub_8258ECB8) {
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
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824afb20
	ctx.lr = 0x8258ECE0;
	sub_824AFB20(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258ECF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8258ED10"))) PPC_WEAK_FUNC(sub_8258ED10);
PPC_FUNC_IMPL(__imp__sub_8258ED10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8258ED18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8258ED30;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8258ED38;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8258ed60
	if (ctx.cr0.eq) goto loc_8258ED60;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x8258ED4C;
	sub_824AFB20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258ec10
	ctx.lr = 0x8258ED58;
	sub_8258EC10(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x8258ed64
	goto loc_8258ED64;
loc_8258ED60:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258ED64:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-4936
	ctx.r4.s64 = ctx.r11.s64 + -4936;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8258ED80;
	sub_823F4FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258ED88;
	sub_82DE7330(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258ED90"))) PPC_WEAK_FUNC(sub_8258ED90);
PPC_FUNC_IMPL(__imp__sub_8258ED90) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,6056
	ctx.r11.s64 = ctx.r11.s64 + 6056;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x824afb20
	ctx.lr = 0x8258EDC0;
	sub_824AFB20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258EDC8;
	sub_82DE7330(ctx, base);
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

__attribute__((alias("__imp__sub_8258EDE8"))) PPC_WEAK_FUNC(sub_8258EDE8);
PPC_FUNC_IMPL(__imp__sub_8258EDE8) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,6056
	ctx.r11.s64 = ctx.r11.s64 + 6056;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82de7330
	ctx.lr = 0x8258EE10;
	sub_82DE7330(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,29772
	ctx.r11.s64 = ctx.r11.s64 + 29772;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8258EE38"))) PPC_WEAK_FUNC(sub_8258EE38);
PPC_FUNC_IMPL(__imp__sub_8258EE38) {
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
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824afb20
	ctx.lr = 0x8258EE60;
	sub_824AFB20(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258EE74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8258EE90"))) PPC_WEAK_FUNC(sub_8258EE90);
PPC_FUNC_IMPL(__imp__sub_8258EE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8258EE98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8258EEB0;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8258EEB8;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8258eee0
	if (ctx.cr0.eq) goto loc_8258EEE0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x8258EECC;
	sub_824AFB20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258ed90
	ctx.lr = 0x8258EED8;
	sub_8258ED90(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x8258eee4
	goto loc_8258EEE4;
loc_8258EEE0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258EEE4:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-4552
	ctx.r4.s64 = ctx.r11.s64 + -4552;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8258EF00;
	sub_823F4FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258EF08;
	sub_82DE7330(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258EF10"))) PPC_WEAK_FUNC(sub_8258EF10);
PPC_FUNC_IMPL(__imp__sub_8258EF10) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,6064
	ctx.r11.s64 = ctx.r11.s64 + 6064;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82de7330
	ctx.lr = 0x8258EF38;
	sub_82DE7330(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,29772
	ctx.r11.s64 = ctx.r11.s64 + 29772;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8258EF60"))) PPC_WEAK_FUNC(sub_8258EF60);
PPC_FUNC_IMPL(__imp__sub_8258EF60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258EF68;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// bl 0x824afb20
	ctx.lr = 0x8258EF88;
	sub_824AFB20(ctx, base);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258EFA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258EFA8"))) PPC_WEAK_FUNC(sub_8258EFA8);
PPC_FUNC_IMPL(__imp__sub_8258EFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de00
	ctx.lr = 0x8258EFB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8258EFCC;
	sub_823F51A8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823f5040
	ctx.lr = 0x8258EFD4;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8258f018
	if (ctx.cr0.eq) goto loc_8258F018;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x8258EFE8;
	sub_824AFB20(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r11,r11,6064
	ctx.r11.s64 = ctx.r11.s64 + 6064;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x824afb20
	ctx.lr = 0x8258F004;
	sub_824AFB20(ctx, base);
	// stb r28,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r28.u8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258F010;
	sub_82DE7330(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// b 0x8258f01c
	goto loc_8258F01C;
loc_8258F018:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258F01C:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r11,-4256
	ctx.r4.s64 = ctx.r11.s64 + -4256;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8258F038;
	sub_823F4FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258F040;
	sub_82DE7330(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258F048"))) PPC_WEAK_FUNC(sub_8258F048);
PPC_FUNC_IMPL(__imp__sub_8258F048) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,6072
	ctx.r11.s64 = ctx.r11.s64 + 6072;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82de7330
	ctx.lr = 0x8258F070;
	sub_82DE7330(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,29772
	ctx.r11.s64 = ctx.r11.s64 + 29772;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8258F098"))) PPC_WEAK_FUNC(sub_8258F098);
PPC_FUNC_IMPL(__imp__sub_8258F098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de00
	ctx.lr = 0x8258F0A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8258F0BC;
	sub_823F51A8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823f5040
	ctx.lr = 0x8258F0C4;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8258f108
	if (ctx.cr0.eq) goto loc_8258F108;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x8258F0D8;
	sub_824AFB20(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r11,r11,6072
	ctx.r11.s64 = ctx.r11.s64 + 6072;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x824afb20
	ctx.lr = 0x8258F0F4;
	sub_824AFB20(ctx, base);
	// stb r28,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r28.u8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258F100;
	sub_82DE7330(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// b 0x8258f10c
	goto loc_8258F10C;
loc_8258F108:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258F10C:
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r11,-512
	ctx.r4.s64 = ctx.r11.s64 + -512;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8258F128;
	sub_823F4FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258F130;
	sub_82DE7330(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258F138"))) PPC_WEAK_FUNC(sub_8258F138);
PPC_FUNC_IMPL(__imp__sub_8258F138) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,6080
	ctx.r11.s64 = ctx.r11.s64 + 6080;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82de7330
	ctx.lr = 0x8258F160;
	sub_82DE7330(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,29772
	ctx.r11.s64 = ctx.r11.s64 + 29772;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8258F188"))) PPC_WEAK_FUNC(sub_8258F188);
PPC_FUNC_IMPL(__imp__sub_8258F188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258F190;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// bl 0x824afb20
	ctx.lr = 0x8258F1B0;
	sub_824AFB20(ctx, base);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258F1C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258F1D0"))) PPC_WEAK_FUNC(sub_8258F1D0);
PPC_FUNC_IMPL(__imp__sub_8258F1D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de00
	ctx.lr = 0x8258F1D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8258F1F4;
	sub_823F51A8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823f5040
	ctx.lr = 0x8258F1FC;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8258f240
	if (ctx.cr0.eq) goto loc_8258F240;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x8258F210;
	sub_824AFB20(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r11,r11,6080
	ctx.r11.s64 = ctx.r11.s64 + 6080;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x824afb20
	ctx.lr = 0x8258F22C;
	sub_824AFB20(ctx, base);
	// stb r28,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r28.u8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258F238;
	sub_82DE7330(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// b 0x8258f244
	goto loc_8258F244;
loc_8258F240:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258F244:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r11,-3704
	ctx.r4.s64 = ctx.r11.s64 + -3704;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8258F260;
	sub_823F4FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258F268;
	sub_82DE7330(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258F270"))) PPC_WEAK_FUNC(sub_8258F270);
PPC_FUNC_IMPL(__imp__sub_8258F270) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,6088
	ctx.r11.s64 = ctx.r11.s64 + 6088;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x824afb20
	ctx.lr = 0x8258F2A0;
	sub_824AFB20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258F2A8;
	sub_82DE7330(ctx, base);
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

__attribute__((alias("__imp__sub_8258F2C8"))) PPC_WEAK_FUNC(sub_8258F2C8);
PPC_FUNC_IMPL(__imp__sub_8258F2C8) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,6088
	ctx.r11.s64 = ctx.r11.s64 + 6088;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82de7330
	ctx.lr = 0x8258F2F0;
	sub_82DE7330(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,29772
	ctx.r11.s64 = ctx.r11.s64 + 29772;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8258F318"))) PPC_WEAK_FUNC(sub_8258F318);
PPC_FUNC_IMPL(__imp__sub_8258F318) {
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
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824afb20
	ctx.lr = 0x8258F340;
	sub_824AFB20(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258F354;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8258F370"))) PPC_WEAK_FUNC(sub_8258F370);
PPC_FUNC_IMPL(__imp__sub_8258F370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8258F378;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8258F390;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8258F398;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8258f3c0
	if (ctx.cr0.eq) goto loc_8258F3C0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x8258F3AC;
	sub_824AFB20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258f270
	ctx.lr = 0x8258F3B8;
	sub_8258F270(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x8258f3c4
	goto loc_8258F3C4;
loc_8258F3C0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258F3C4:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-3304
	ctx.r4.s64 = ctx.r11.s64 + -3304;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8258F3E0;
	sub_823F4FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258F3E8;
	sub_82DE7330(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258F3F0"))) PPC_WEAK_FUNC(sub_8258F3F0);
PPC_FUNC_IMPL(__imp__sub_8258F3F0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,6096
	ctx.r11.s64 = ctx.r11.s64 + 6096;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82de7330
	ctx.lr = 0x8258F418;
	sub_82DE7330(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,29772
	ctx.r11.s64 = ctx.r11.s64 + 29772;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8258F440"))) PPC_WEAK_FUNC(sub_8258F440);
PPC_FUNC_IMPL(__imp__sub_8258F440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258F448;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824afb20
	ctx.lr = 0x8258F470;
	sub_824AFB20(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258F48C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258F498"))) PPC_WEAK_FUNC(sub_8258F498);
PPC_FUNC_IMPL(__imp__sub_8258F498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de00
	ctx.lr = 0x8258F4A0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8258F4C4;
	sub_823F51A8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x823f5040
	ctx.lr = 0x8258F4CC;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8258f514
	if (ctx.cr0.eq) goto loc_8258F514;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x8258F4E0;
	sub_824AFB20(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r11,r11,6096
	ctx.r11.s64 = ctx.r11.s64 + 6096;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x824afb20
	ctx.lr = 0x8258F4FC;
	sub_824AFB20(ctx, base);
	// stfs f31,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258F50C;
	sub_82DE7330(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// b 0x8258f518
	goto loc_8258F518;
loc_8258F514:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258F518:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r11,-3008
	ctx.r4.s64 = ctx.r11.s64 + -3008;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8258F534;
	sub_823F4FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258F53C;
	sub_82DE7330(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a7de50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258F548"))) PPC_WEAK_FUNC(sub_8258F548);
PPC_FUNC_IMPL(__imp__sub_8258F548) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,6104
	ctx.r11.s64 = ctx.r11.s64 + 6104;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x824afb20
	ctx.lr = 0x8258F578;
	sub_824AFB20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258F580;
	sub_82DE7330(ctx, base);
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

__attribute__((alias("__imp__sub_8258F5A0"))) PPC_WEAK_FUNC(sub_8258F5A0);
PPC_FUNC_IMPL(__imp__sub_8258F5A0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,6104
	ctx.r11.s64 = ctx.r11.s64 + 6104;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82de7330
	ctx.lr = 0x8258F5C8;
	sub_82DE7330(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,29772
	ctx.r11.s64 = ctx.r11.s64 + 29772;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8258F5F0"))) PPC_WEAK_FUNC(sub_8258F5F0);
PPC_FUNC_IMPL(__imp__sub_8258F5F0) {
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
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824afb20
	ctx.lr = 0x8258F618;
	sub_824AFB20(ctx, base);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258F62C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8258F648"))) PPC_WEAK_FUNC(sub_8258F648);
PPC_FUNC_IMPL(__imp__sub_8258F648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8258F650;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8258F668;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8258F670;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8258f698
	if (ctx.cr0.eq) goto loc_8258F698;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x8258F684;
	sub_824AFB20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258f548
	ctx.lr = 0x8258F690;
	sub_8258F548(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x8258f69c
	goto loc_8258F69C;
loc_8258F698:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258F69C:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-2576
	ctx.r4.s64 = ctx.r11.s64 + -2576;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8258F6B8;
	sub_823F4FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258F6C0;
	sub_82DE7330(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258F6C8"))) PPC_WEAK_FUNC(sub_8258F6C8);
PPC_FUNC_IMPL(__imp__sub_8258F6C8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82411478
	ctx.lr = 0x8258F6E4;
	sub_82411478(ctx, base);
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

__attribute__((alias("__imp__sub_8258F6F8"))) PPC_WEAK_FUNC(sub_8258F6F8);
PPC_FUNC_IMPL(__imp__sub_8258F6F8) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82c0f6c0
	ctx.lr = 0x8258F70C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258f728
	if (ctx.cr0.eq) goto loc_8258F728;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,3724
	ctx.r10.s64 = ctx.r10.s64 + 3724;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8258f72c
	goto loc_8258F72C;
loc_8258F728:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258F72C:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// stw r11,-19476(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19476, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258F748"))) PPC_WEAK_FUNC(sub_8258F748);
PPC_FUNC_IMPL(__imp__sub_8258F748) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82c0f6c0
	ctx.lr = 0x8258F75C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258f778
	if (ctx.cr0.eq) goto loc_8258F778;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,3764
	ctx.r10.s64 = ctx.r10.s64 + 3764;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8258f77c
	goto loc_8258F77C;
loc_8258F778:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258F77C:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// stw r11,-19984(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19984, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258F798"))) PPC_WEAK_FUNC(sub_8258F798);
PPC_FUNC_IMPL(__imp__sub_8258F798) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82c0f6c0
	ctx.lr = 0x8258F7AC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258f7c8
	if (ctx.cr0.eq) goto loc_8258F7C8;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,3804
	ctx.r10.s64 = ctx.r10.s64 + 3804;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8258f7cc
	goto loc_8258F7CC;
loc_8258F7C8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258F7CC:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// stw r11,17988(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17988, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258F7E8"))) PPC_WEAK_FUNC(sub_8258F7E8);
PPC_FUNC_IMPL(__imp__sub_8258F7E8) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82c0f6c0
	ctx.lr = 0x8258F7FC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258f818
	if (ctx.cr0.eq) goto loc_8258F818;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,3844
	ctx.r10.s64 = ctx.r10.s64 + 3844;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8258f81c
	goto loc_8258F81C;
loc_8258F818:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258F81C:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// stw r11,13588(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13588, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258F838"))) PPC_WEAK_FUNC(sub_8258F838);
PPC_FUNC_IMPL(__imp__sub_8258F838) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82c0f6c0
	ctx.lr = 0x8258F84C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258f868
	if (ctx.cr0.eq) goto loc_8258F868;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,3884
	ctx.r10.s64 = ctx.r10.s64 + 3884;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8258f86c
	goto loc_8258F86C;
loc_8258F868:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258F86C:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// stw r11,-20276(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20276, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258F888"))) PPC_WEAK_FUNC(sub_8258F888);
PPC_FUNC_IMPL(__imp__sub_8258F888) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82c0f6c0
	ctx.lr = 0x8258F89C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258f8b8
	if (ctx.cr0.eq) goto loc_8258F8B8;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,3924
	ctx.r10.s64 = ctx.r10.s64 + 3924;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8258f8bc
	goto loc_8258F8BC;
loc_8258F8B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258F8BC:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// stw r11,-21276(r10)
	PPC_STORE_U32(ctx.r10.u32 + -21276, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258F8D8"))) PPC_WEAK_FUNC(sub_8258F8D8);
PPC_FUNC_IMPL(__imp__sub_8258F8D8) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82c0f6c0
	ctx.lr = 0x8258F8EC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258f908
	if (ctx.cr0.eq) goto loc_8258F908;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,3964
	ctx.r10.s64 = ctx.r10.s64 + 3964;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8258f90c
	goto loc_8258F90C;
loc_8258F908:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258F90C:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// stw r11,-21280(r10)
	PPC_STORE_U32(ctx.r10.u32 + -21280, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258F928"))) PPC_WEAK_FUNC(sub_8258F928);
PPC_FUNC_IMPL(__imp__sub_8258F928) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82c0f6c0
	ctx.lr = 0x8258F93C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258f958
	if (ctx.cr0.eq) goto loc_8258F958;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,4004
	ctx.r10.s64 = ctx.r10.s64 + 4004;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8258f95c
	goto loc_8258F95C;
loc_8258F958:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258F95C:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// stw r11,12804(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12804, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258F978"))) PPC_WEAK_FUNC(sub_8258F978);
PPC_FUNC_IMPL(__imp__sub_8258F978) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82de7330
	ctx.lr = 0x8258F9A8;
	sub_82DE7330(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82de7330
	ctx.lr = 0x8258F9B0;
	sub_82DE7330(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258f9c0
	if (ctx.cr0.eq) goto loc_8258F9C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8258F9C0;
	sub_823FD208(ctx, base);
loc_8258F9C0:
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

__attribute__((alias("__imp__sub_8258F9E0"))) PPC_WEAK_FUNC(sub_8258F9E0);
PPC_FUNC_IMPL(__imp__sub_8258F9E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x8258F9E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r11,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r11.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82460500
	ctx.lr = 0x8258FA04;
	sub_82460500(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258FA14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82c0f6c0
	ctx.lr = 0x8258FA20;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258fa38
	if (ctx.cr0.eq) goto loc_8258FA38;
	// addi r4,r31,2488
	ctx.r4.s64 = ctx.r31.s64 + 2488;
	// bl 0x8257ee08
	ctx.lr = 0x8258FA30;
	sub_8257EE08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8258fa3c
	goto loc_8258FA3C;
loc_8258FA38:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8258FA3C:
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82587c88
	ctx.lr = 0x8258FA44;
	sub_82587C88(ctx, base);
	// addi r4,r31,2520
	ctx.r4.s64 = ctx.r31.s64 + 2520;
	// lwz r29,592(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c09c80
	ctx.lr = 0x8258FA54;
	sub_82C09C80(ctx, base);
	// stw r30,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r30.u32);
	// addi r4,r31,2416
	ctx.r4.s64 = ctx.r31.s64 + 2416;
	// addi r3,r1,596
	ctx.r3.s64 = ctx.r1.s64 + 596;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x824afb20
	ctx.lr = 0x8258FA68;
	sub_824AFB20(ctx, base);
	// lwz r11,196(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 196);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258FA7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r1,596
	ctx.r3.s64 = ctx.r1.s64 + 596;
	// addi r4,r11,24872
	ctx.r4.s64 = ctx.r11.s64 + 24872;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x824afb20
	ctx.lr = 0x8258FA90;
	sub_824AFB20(ctx, base);
	// lwz r11,188(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 188);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258FAA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,3296
	ctx.r4.s64 = ctx.r31.s64 + 3296;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258FABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,3440
	ctx.r4.s64 = ctx.r31.s64 + 3440;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258FAD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r31,5936
	ctx.r11.s64 = ctx.r31.s64 + 5936;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// li r5,504
	ctx.r5.s64 = 504;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82a7d730
	ctx.lr = 0x8258FAEC;
	sub_82A7D730(ctx, base);
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,5936(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 5936);
	// ld r5,5944(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 5944);
	// ld r6,5952(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 5952);
	// ld r7,5960(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 5960);
	// ld r8,5968(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 5968);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// ld r9,5976(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 5976);
	// ld r10,5984(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 5984);
	// bctrl 
	ctx.lr = 0x8258FB18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8258fb24
	if (ctx.cr6.eq) goto loc_8258FB24;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
loc_8258FB24:
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825889e8
	ctx.lr = 0x8258FB30;
	sub_825889E8(ctx, base);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x8247d670
	ctx.lr = 0x8258FB38;
	sub_8247D670(ctx, base);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258FB40"))) PPC_WEAK_FUNC(sub_8258FB40);
PPC_FUNC_IMPL(__imp__sub_8258FB40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r4,416
	ctx.r3.s64 = ctx.r4.s64 + 416;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258FB48"))) PPC_WEAK_FUNC(sub_8258FB48);
PPC_FUNC_IMPL(__imp__sub_8258FB48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258FB50;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3112);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x824afb20
	ctx.lr = 0x8258FB6C;
	sub_824AFB20(ctx, base);
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258FB80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258FB88;
	sub_82DE7330(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258FB90"))) PPC_WEAK_FUNC(sub_8258FB90);
PPC_FUNC_IMPL(__imp__sub_8258FB90) {
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
	// addi r4,r4,2460
	ctx.r4.s64 = ctx.r4.s64 + 2460;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824afb20
	ctx.lr = 0x8258FBAC;
	sub_824AFB20(ctx, base);
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

__attribute__((alias("__imp__sub_8258FBC8"))) PPC_WEAK_FUNC(sub_8258FBC8);
PPC_FUNC_IMPL(__imp__sub_8258FBC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8258b3c8
	sub_8258B3C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258FBD0"))) PPC_WEAK_FUNC(sub_8258FBD0);
PPC_FUNC_IMPL(__imp__sub_8258FBD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258FBD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3112);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x824afb20
	ctx.lr = 0x8258FBF4;
	sub_824AFB20(ctx, base);
	// lwz r11,184(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258FC08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258FC10;
	sub_82DE7330(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258FC18"))) PPC_WEAK_FUNC(sub_8258FC18);
PPC_FUNC_IMPL(__imp__sub_8258FC18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x8258FC20;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// bne cr6,0x8258fc40
	if (!ctx.cr6.eq) goto loc_8258FC40;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258FC40:
	// addi r30,r28,-8
	ctx.r30.s64 = ctx.r28.s64 + -8;
	// lwz r29,28(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8258FC50;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8258FC58;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8258fc80
	if (ctx.cr0.eq) goto loc_8258FC80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d35328
	ctx.lr = 0x8258FC6C;
	sub_82D35328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258c838
	ctx.lr = 0x8258FC78;
	sub_8258C838(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x8258fc84
	goto loc_8258FC84;
loc_8258FC80:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258FC84:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-14112
	ctx.r4.s64 = ctx.r11.s64 + -14112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8258FCA0;
	sub_823F4FE8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258FCA8;
	sub_82DE7330(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258FCB0"))) PPC_WEAK_FUNC(sub_8258FCB0);
PPC_FUNC_IMPL(__imp__sub_8258FCB0) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stb r11,3172(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3172, ctx.r11.u8);
	// addi r3,r3,3160
	ctx.r3.s64 = ctx.r3.s64 + 3160;
	// bl 0x826e1b10
	ctx.lr = 0x8258FCD4;
	sub_826E1B10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258FCDC;
	sub_82DE7330(ctx, base);
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

__attribute__((alias("__imp__sub_8258FCF0"))) PPC_WEAK_FUNC(sub_8258FCF0);
PPC_FUNC_IMPL(__imp__sub_8258FCF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8258FCF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3112);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x824afb20
	ctx.lr = 0x8258FD14;
	sub_824AFB20(ctx, base);
	// lwz r11,188(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 188);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258FD28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258FD30;
	sub_82DE7330(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258FD38"))) PPC_WEAK_FUNC(sub_8258FD38);
PPC_FUNC_IMPL(__imp__sub_8258FD38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x8258FD40;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// bne cr6,0x8258fd60
	if (!ctx.cr6.eq) goto loc_8258FD60;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258FD60:
	// addi r30,r28,-8
	ctx.r30.s64 = ctx.r28.s64 + -8;
	// lwz r29,28(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8258FD70;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8258FD78;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8258fda0
	if (ctx.cr0.eq) goto loc_8258FDA0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d35328
	ctx.lr = 0x8258FD8C;
	sub_82D35328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258c938
	ctx.lr = 0x8258FD98;
	sub_8258C938(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x8258fda4
	goto loc_8258FDA4;
loc_8258FDA0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258FDA4:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-13856
	ctx.r4.s64 = ctx.r11.s64 + -13856;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8258FDC0;
	sub_823F4FE8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258FDC8;
	sub_82DE7330(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258FDD0"))) PPC_WEAK_FUNC(sub_8258FDD0);
PPC_FUNC_IMPL(__imp__sub_8258FDD0) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stb r11,3186(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3186, ctx.r11.u8);
	// addi r3,r3,3164
	ctx.r3.s64 = ctx.r3.s64 + 3164;
	// bl 0x826e1b10
	ctx.lr = 0x8258FDF4;
	sub_826E1B10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258FDFC;
	sub_82DE7330(ctx, base);
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

__attribute__((alias("__imp__sub_8258FE10"))) PPC_WEAK_FUNC(sub_8258FE10);
PPC_FUNC_IMPL(__imp__sub_8258FE10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de00
	ctx.lr = 0x8258FE18;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3112);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r27,8(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// bl 0x824afb20
	ctx.lr = 0x8258FE40;
	sub_824AFB20(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x824afb20
	ctx.lr = 0x8258FE50;
	sub_824AFB20(ctx, base);
	// lwz r11,60(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258FE6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258FE74;
	sub_82DE7330(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258FE7C;
	sub_82DE7330(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258FE88"))) PPC_WEAK_FUNC(sub_8258FE88);
PPC_FUNC_IMPL(__imp__sub_8258FE88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8258FE90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,3170(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3170, ctx.r11.u8);
	// addi r3,r3,3204
	ctx.r3.s64 = ctx.r3.s64 + 3204;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x826e1b10
	ctx.lr = 0x8258FEB4;
	sub_826E1B10(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,3208
	ctx.r3.s64 = ctx.r31.s64 + 3208;
	// bl 0x826e1b10
	ctx.lr = 0x8258FEC0;
	sub_826E1B10(ctx, base);
	// stw r28,3212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3212, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258FECC;
	sub_82DE7330(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258FED4;
	sub_82DE7330(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258FEE0"))) PPC_WEAK_FUNC(sub_8258FEE0);
PPC_FUNC_IMPL(__imp__sub_8258FEE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddfc
	ctx.lr = 0x8258FEE8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,3112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3112);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stb r10,3216(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3216, ctx.r10.u8);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r25,8(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// bl 0x824afb20
	ctx.lr = 0x8258FF20;
	sub_824AFB20(ctx, base);
	// lwz r11,64(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 64);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x8258FF44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258FF4C;
	sub_82DE7330(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258FF58"))) PPC_WEAK_FUNC(sub_8258FF58);
PPC_FUNC_IMPL(__imp__sub_8258FF58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8258FF60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,3220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3220, ctx.r4.u32);
	// stw r5,3224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3224, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,3217(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3217, ctx.r11.u8);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r3,3232
	ctx.r3.s64 = ctx.r3.s64 + 3232;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// bl 0x826e1b10
	ctx.lr = 0x8258FF90;
	sub_826E1B10(ctx, base);
	// stw r29,3236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3236, ctx.r29.u32);
	// stw r28,3240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3240, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7330
	ctx.lr = 0x8258FFA0;
	sub_82DE7330(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258FFA8"))) PPC_WEAK_FUNC(sub_8258FFA8);
PPC_FUNC_IMPL(__imp__sub_8258FFA8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31954
	ctx.r8.s64 = -2094137344;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,32508
	ctx.r3.s64 = ctx.r11.s64 + 32508;
	// lwz r11,32516(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32516);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r10,r10,5576
	ctx.r10.s64 = ctx.r10.s64 + 5576;
	// addi r9,r9,5568
	ctx.r9.s64 = ctx.r9.s64 + 5568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,32516(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32516, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258FFE8"))) PPC_WEAK_FUNC(sub_8258FFE8);
PPC_FUNC_IMPL(__imp__sub_8258FFE8) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,6120
	ctx.r11.s64 = ctx.r11.s64 + 6120;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a0e238
	ctx.lr = 0x8259001C;
	sub_82A0E238(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82590040"))) PPC_WEAK_FUNC(sub_82590040);
PPC_FUNC_IMPL(__imp__sub_82590040) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82de7330
	ctx.lr = 0x8259005C;
	sub_82DE7330(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82de7330
	ctx.lr = 0x82590064;
	sub_82DE7330(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,22024
	ctx.r11.s64 = ctx.r11.s64 + 22024;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8247a9a8
	ctx.lr = 0x82590078;
	sub_8247A9A8(ctx, base);
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

