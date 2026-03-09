#include "forza_horizon_1_init.h"

__attribute__((alias("__imp__sub_82901B18"))) PPC_WEAK_FUNC(sub_82901B18);
PPC_FUNC_IMPL(__imp__sub_82901B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82901B20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x82901B34;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82901b60
	if (ctx.cr0.eq) goto loc_82901B60;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-3568
	ctx.r10.s64 = ctx.r10.s64 + -3568;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82901b64
	goto loc_82901B64;
loc_82901B60:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82901B64:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82901b74
	if (ctx.cr6.eq) goto loc_82901B74;
	// bl 0x823e19b0
	ctx.lr = 0x82901B74;
	sub_823E19B0(ctx, base);
loc_82901B74:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82901B88"))) PPC_WEAK_FUNC(sub_82901B88);
PPC_FUNC_IMPL(__imp__sub_82901B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82901B90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x82901BA4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82901bd0
	if (ctx.cr0.eq) goto loc_82901BD0;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-3516
	ctx.r10.s64 = ctx.r10.s64 + -3516;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82901bd4
	goto loc_82901BD4;
loc_82901BD0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82901BD4:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82901be4
	if (ctx.cr6.eq) goto loc_82901BE4;
	// bl 0x823e19b0
	ctx.lr = 0x82901BE4;
	sub_823E19B0(ctx, base);
loc_82901BE4:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82901BF8"))) PPC_WEAK_FUNC(sub_82901BF8);
PPC_FUNC_IMPL(__imp__sub_82901BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82901C00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x82901C14;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82901c40
	if (ctx.cr0.eq) goto loc_82901C40;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-3464
	ctx.r10.s64 = ctx.r10.s64 + -3464;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82901c44
	goto loc_82901C44;
loc_82901C40:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82901C44:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82901c54
	if (ctx.cr6.eq) goto loc_82901C54;
	// bl 0x823e19b0
	ctx.lr = 0x82901C54;
	sub_823E19B0(ctx, base);
loc_82901C54:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82901C68"))) PPC_WEAK_FUNC(sub_82901C68);
PPC_FUNC_IMPL(__imp__sub_82901C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82901C70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x82901C84;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82901cb0
	if (ctx.cr0.eq) goto loc_82901CB0;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-3412
	ctx.r10.s64 = ctx.r10.s64 + -3412;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82901cb4
	goto loc_82901CB4;
loc_82901CB0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82901CB4:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82901cc4
	if (ctx.cr6.eq) goto loc_82901CC4;
	// bl 0x823e19b0
	ctx.lr = 0x82901CC4;
	sub_823E19B0(ctx, base);
loc_82901CC4:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82901CD8"))) PPC_WEAK_FUNC(sub_82901CD8);
PPC_FUNC_IMPL(__imp__sub_82901CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82901CE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x82901CF4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82901d20
	if (ctx.cr0.eq) goto loc_82901D20;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-3360
	ctx.r10.s64 = ctx.r10.s64 + -3360;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82901d24
	goto loc_82901D24;
loc_82901D20:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82901D24:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82901d34
	if (ctx.cr6.eq) goto loc_82901D34;
	// bl 0x823e19b0
	ctx.lr = 0x82901D34;
	sub_823E19B0(ctx, base);
loc_82901D34:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82901D48"))) PPC_WEAK_FUNC(sub_82901D48);
PPC_FUNC_IMPL(__imp__sub_82901D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82901D50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x82901D64;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82901d90
	if (ctx.cr0.eq) goto loc_82901D90;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-3308
	ctx.r10.s64 = ctx.r10.s64 + -3308;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82901d94
	goto loc_82901D94;
loc_82901D90:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82901D94:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82901da4
	if (ctx.cr6.eq) goto loc_82901DA4;
	// bl 0x823e19b0
	ctx.lr = 0x82901DA4;
	sub_823E19B0(ctx, base);
loc_82901DA4:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82901DB8"))) PPC_WEAK_FUNC(sub_82901DB8);
PPC_FUNC_IMPL(__imp__sub_82901DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82901DC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x82901DD4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82901e00
	if (ctx.cr0.eq) goto loc_82901E00;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-3256
	ctx.r10.s64 = ctx.r10.s64 + -3256;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82901e04
	goto loc_82901E04;
loc_82901E00:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82901E04:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82901e14
	if (ctx.cr6.eq) goto loc_82901E14;
	// bl 0x823e19b0
	ctx.lr = 0x82901E14;
	sub_823E19B0(ctx, base);
loc_82901E14:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82901E28"))) PPC_WEAK_FUNC(sub_82901E28);
PPC_FUNC_IMPL(__imp__sub_82901E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82901E30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x82901E44;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82901e70
	if (ctx.cr0.eq) goto loc_82901E70;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-3204
	ctx.r10.s64 = ctx.r10.s64 + -3204;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82901e74
	goto loc_82901E74;
loc_82901E70:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82901E74:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82901e84
	if (ctx.cr6.eq) goto loc_82901E84;
	// bl 0x823e19b0
	ctx.lr = 0x82901E84;
	sub_823E19B0(ctx, base);
loc_82901E84:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82901E98"))) PPC_WEAK_FUNC(sub_82901E98);
PPC_FUNC_IMPL(__imp__sub_82901E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82901EA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x82901EB4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82901ee0
	if (ctx.cr0.eq) goto loc_82901EE0;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-3152
	ctx.r10.s64 = ctx.r10.s64 + -3152;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82901ee4
	goto loc_82901EE4;
loc_82901EE0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82901EE4:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82901ef4
	if (ctx.cr6.eq) goto loc_82901EF4;
	// bl 0x823e19b0
	ctx.lr = 0x82901EF4;
	sub_823E19B0(ctx, base);
loc_82901EF4:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82901F08"))) PPC_WEAK_FUNC(sub_82901F08);
PPC_FUNC_IMPL(__imp__sub_82901F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82901F10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x82901F24;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82901f50
	if (ctx.cr0.eq) goto loc_82901F50;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-3100
	ctx.r10.s64 = ctx.r10.s64 + -3100;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82901f54
	goto loc_82901F54;
loc_82901F50:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82901F54:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82901f64
	if (ctx.cr6.eq) goto loc_82901F64;
	// bl 0x823e19b0
	ctx.lr = 0x82901F64;
	sub_823E19B0(ctx, base);
loc_82901F64:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82901F78"))) PPC_WEAK_FUNC(sub_82901F78);
PPC_FUNC_IMPL(__imp__sub_82901F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82901F80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x82901F94;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82901fc0
	if (ctx.cr0.eq) goto loc_82901FC0;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-3048
	ctx.r10.s64 = ctx.r10.s64 + -3048;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82901fc4
	goto loc_82901FC4;
loc_82901FC0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82901FC4:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82901fd4
	if (ctx.cr6.eq) goto loc_82901FD4;
	// bl 0x823e19b0
	ctx.lr = 0x82901FD4;
	sub_823E19B0(ctx, base);
loc_82901FD4:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82901FE8"))) PPC_WEAK_FUNC(sub_82901FE8);
PPC_FUNC_IMPL(__imp__sub_82901FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82901FF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x82902004;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82902030
	if (ctx.cr0.eq) goto loc_82902030;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-2996
	ctx.r10.s64 = ctx.r10.s64 + -2996;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82902034
	goto loc_82902034;
loc_82902030:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82902034:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82902044
	if (ctx.cr6.eq) goto loc_82902044;
	// bl 0x823e19b0
	ctx.lr = 0x82902044;
	sub_823E19B0(ctx, base);
loc_82902044:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82902058"))) PPC_WEAK_FUNC(sub_82902058);
PPC_FUNC_IMPL(__imp__sub_82902058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82902060;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x82902074;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829020a0
	if (ctx.cr0.eq) goto loc_829020A0;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-2944
	ctx.r10.s64 = ctx.r10.s64 + -2944;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x829020a4
	goto loc_829020A4;
loc_829020A0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_829020A4:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829020b4
	if (ctx.cr6.eq) goto loc_829020B4;
	// bl 0x823e19b0
	ctx.lr = 0x829020B4;
	sub_823E19B0(ctx, base);
loc_829020B4:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829020C8"))) PPC_WEAK_FUNC(sub_829020C8);
PPC_FUNC_IMPL(__imp__sub_829020C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x829020D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,31336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31336);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82902114
	if (!ctx.cr0.eq) goto loc_82902114;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,31336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31336, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x829020F4;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828fb488
	ctx.lr = 0x829020FC;
	sub_828FB488(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-2928
	ctx.r4.s64 = ctx.r11.s64 + -2928;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x82902110;
	sub_82E4E838(ctx, base);
	// lwz r11,31336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31336);
loc_82902114:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82902140
	if (!ctx.cr0.eq) goto loc_82902140;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,31336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31336, ctx.r11.u32);
	// addi r3,r10,31328
	ctx.r3.s64 = ctx.r10.s64 + 31328;
	// bl 0x828fd888
	ctx.lr = 0x82902130;
	sub_828FD888(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3528
	ctx.r3.s64 = ctx.r11.s64 + -3528;
	// bl 0x82a7e6b0
	ctx.lr = 0x8290213C;
	sub_82A7E6B0(ctx, base);
	// lwz r11,31336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31336);
loc_82902140:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82902184
	if (!ctx.cr0.eq) goto loc_82902184;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,31336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31336, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,31312
	ctx.r31.s64 = ctx.r29.s64 + 31312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x82902164;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-4484
	ctx.r11.s64 = ctx.r11.s64 + -4484;
	// stw r11,31312(r29)
	PPC_STORE_U32(ctx.r29.u32 + 31312, ctx.r11.u32);
	// bl 0x828fe1e8
	ctx.lr = 0x82902178;
	sub_828FE1E8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3544
	ctx.r3.s64 = ctx.r11.s64 + -3544;
	// bl 0x82a7e6b0
	ctx.lr = 0x82902184;
	sub_82A7E6B0(ctx, base);
loc_82902184:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82902190"))) PPC_WEAK_FUNC(sub_82902190);
PPC_FUNC_IMPL(__imp__sub_82902190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82902198;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,31364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31364);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x829021dc
	if (!ctx.cr0.eq) goto loc_829021DC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,31364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31364, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x829021BC;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828fb4d8
	ctx.lr = 0x829021C4;
	sub_828FB4D8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-2916
	ctx.r4.s64 = ctx.r11.s64 + -2916;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x829021D8;
	sub_82E4E838(ctx, base);
	// lwz r11,31364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31364);
loc_829021DC:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82902208
	if (!ctx.cr0.eq) goto loc_82902208;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,31364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31364, ctx.r11.u32);
	// addi r3,r10,31356
	ctx.r3.s64 = ctx.r10.s64 + 31356;
	// bl 0x828fd8d8
	ctx.lr = 0x829021F8;
	sub_828FD8D8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3488
	ctx.r3.s64 = ctx.r11.s64 + -3488;
	// bl 0x82a7e6b0
	ctx.lr = 0x82902204;
	sub_82A7E6B0(ctx, base);
	// lwz r11,31364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31364);
loc_82902208:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8290224c
	if (!ctx.cr0.eq) goto loc_8290224C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,31364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31364, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,31340
	ctx.r31.s64 = ctx.r29.s64 + 31340;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8290222C;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-4432
	ctx.r11.s64 = ctx.r11.s64 + -4432;
	// stw r11,31340(r29)
	PPC_STORE_U32(ctx.r29.u32 + 31340, ctx.r11.u32);
	// bl 0x828fe230
	ctx.lr = 0x82902240;
	sub_828FE230(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3504
	ctx.r3.s64 = ctx.r11.s64 + -3504;
	// bl 0x82a7e6b0
	ctx.lr = 0x8290224C;
	sub_82A7E6B0(ctx, base);
loc_8290224C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82902258"))) PPC_WEAK_FUNC(sub_82902258);
PPC_FUNC_IMPL(__imp__sub_82902258) {
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
	// bl 0x828fea58
	ctx.lr = 0x82902278;
	sub_828FEA58(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82902288
	if (ctx.cr0.eq) goto loc_82902288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82902288;
	sub_823FD208(ctx, base);
loc_82902288:
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

__attribute__((alias("__imp__sub_829022A8"))) PPC_WEAK_FUNC(sub_829022A8);
PPC_FUNC_IMPL(__imp__sub_829022A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x829022B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,31392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31392);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x829022f4
	if (!ctx.cr0.eq) goto loc_829022F4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,31392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31392, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x829022D4;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828fb528
	ctx.lr = 0x829022DC;
	sub_828FB528(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-2888
	ctx.r4.s64 = ctx.r11.s64 + -2888;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x829022F0;
	sub_82E4E838(ctx, base);
	// lwz r11,31392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31392);
loc_829022F4:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82902320
	if (!ctx.cr0.eq) goto loc_82902320;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,31392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31392, ctx.r11.u32);
	// addi r3,r10,31384
	ctx.r3.s64 = ctx.r10.s64 + 31384;
	// bl 0x828fd928
	ctx.lr = 0x82902310;
	sub_828FD928(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3448
	ctx.r3.s64 = ctx.r11.s64 + -3448;
	// bl 0x82a7e6b0
	ctx.lr = 0x8290231C;
	sub_82A7E6B0(ctx, base);
	// lwz r11,31392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31392);
loc_82902320:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82902364
	if (!ctx.cr0.eq) goto loc_82902364;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,31392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31392, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,31368
	ctx.r31.s64 = ctx.r29.s64 + 31368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x82902344;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-4380
	ctx.r11.s64 = ctx.r11.s64 + -4380;
	// stw r11,31368(r29)
	PPC_STORE_U32(ctx.r29.u32 + 31368, ctx.r11.u32);
	// bl 0x828fe278
	ctx.lr = 0x82902358;
	sub_828FE278(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3464
	ctx.r3.s64 = ctx.r11.s64 + -3464;
	// bl 0x82a7e6b0
	ctx.lr = 0x82902364;
	sub_82A7E6B0(ctx, base);
loc_82902364:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82902370"))) PPC_WEAK_FUNC(sub_82902370);
PPC_FUNC_IMPL(__imp__sub_82902370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82902378;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,31420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31420);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x829023bc
	if (!ctx.cr0.eq) goto loc_829023BC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,31420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31420, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x8290239C;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828fb578
	ctx.lr = 0x829023A4;
	sub_828FB578(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-2856
	ctx.r4.s64 = ctx.r11.s64 + -2856;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x829023B8;
	sub_82E4E838(ctx, base);
	// lwz r11,31420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31420);
loc_829023BC:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x829023e8
	if (!ctx.cr0.eq) goto loc_829023E8;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,31420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31420, ctx.r11.u32);
	// addi r3,r10,31412
	ctx.r3.s64 = ctx.r10.s64 + 31412;
	// bl 0x828fd978
	ctx.lr = 0x829023D8;
	sub_828FD978(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3408
	ctx.r3.s64 = ctx.r11.s64 + -3408;
	// bl 0x82a7e6b0
	ctx.lr = 0x829023E4;
	sub_82A7E6B0(ctx, base);
	// lwz r11,31420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31420);
loc_829023E8:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8290242c
	if (!ctx.cr0.eq) goto loc_8290242C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,31420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31420, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,31396
	ctx.r31.s64 = ctx.r29.s64 + 31396;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8290240C;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-4328
	ctx.r11.s64 = ctx.r11.s64 + -4328;
	// stw r11,31396(r29)
	PPC_STORE_U32(ctx.r29.u32 + 31396, ctx.r11.u32);
	// bl 0x828fe2c0
	ctx.lr = 0x82902420;
	sub_828FE2C0(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3424
	ctx.r3.s64 = ctx.r11.s64 + -3424;
	// bl 0x82a7e6b0
	ctx.lr = 0x8290242C;
	sub_82A7E6B0(ctx, base);
loc_8290242C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82902438"))) PPC_WEAK_FUNC(sub_82902438);
PPC_FUNC_IMPL(__imp__sub_82902438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82902440;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,31448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31448);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82902484
	if (!ctx.cr0.eq) goto loc_82902484;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,31448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31448, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x82902464;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828fb5c8
	ctx.lr = 0x8290246C;
	sub_828FB5C8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-2836
	ctx.r4.s64 = ctx.r11.s64 + -2836;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x82902480;
	sub_82E4E838(ctx, base);
	// lwz r11,31448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31448);
loc_82902484:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x829024b0
	if (!ctx.cr0.eq) goto loc_829024B0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,31448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31448, ctx.r11.u32);
	// addi r3,r10,31440
	ctx.r3.s64 = ctx.r10.s64 + 31440;
	// bl 0x828fd9c8
	ctx.lr = 0x829024A0;
	sub_828FD9C8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3368
	ctx.r3.s64 = ctx.r11.s64 + -3368;
	// bl 0x82a7e6b0
	ctx.lr = 0x829024AC;
	sub_82A7E6B0(ctx, base);
	// lwz r11,31448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31448);
loc_829024B0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x829024f4
	if (!ctx.cr0.eq) goto loc_829024F4;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,31448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31448, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,31424
	ctx.r31.s64 = ctx.r29.s64 + 31424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x829024D4;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-4276
	ctx.r11.s64 = ctx.r11.s64 + -4276;
	// stw r11,31424(r29)
	PPC_STORE_U32(ctx.r29.u32 + 31424, ctx.r11.u32);
	// bl 0x828fe308
	ctx.lr = 0x829024E8;
	sub_828FE308(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3384
	ctx.r3.s64 = ctx.r11.s64 + -3384;
	// bl 0x82a7e6b0
	ctx.lr = 0x829024F4;
	sub_82A7E6B0(ctx, base);
loc_829024F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82902500"))) PPC_WEAK_FUNC(sub_82902500);
PPC_FUNC_IMPL(__imp__sub_82902500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82902508;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,31476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31476);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8290254c
	if (!ctx.cr0.eq) goto loc_8290254C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,31476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31476, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x8290252C;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828fb618
	ctx.lr = 0x82902534;
	sub_828FB618(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-2812
	ctx.r4.s64 = ctx.r11.s64 + -2812;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x82902548;
	sub_82E4E838(ctx, base);
	// lwz r11,31476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31476);
loc_8290254C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82902578
	if (!ctx.cr0.eq) goto loc_82902578;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,31476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31476, ctx.r11.u32);
	// addi r3,r10,31468
	ctx.r3.s64 = ctx.r10.s64 + 31468;
	// bl 0x828fda18
	ctx.lr = 0x82902568;
	sub_828FDA18(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3328
	ctx.r3.s64 = ctx.r11.s64 + -3328;
	// bl 0x82a7e6b0
	ctx.lr = 0x82902574;
	sub_82A7E6B0(ctx, base);
	// lwz r11,31476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31476);
loc_82902578:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x829025bc
	if (!ctx.cr0.eq) goto loc_829025BC;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,31476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31476, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,31452
	ctx.r31.s64 = ctx.r29.s64 + 31452;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8290259C;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-4224
	ctx.r11.s64 = ctx.r11.s64 + -4224;
	// stw r11,31452(r29)
	PPC_STORE_U32(ctx.r29.u32 + 31452, ctx.r11.u32);
	// bl 0x828fe350
	ctx.lr = 0x829025B0;
	sub_828FE350(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3344
	ctx.r3.s64 = ctx.r11.s64 + -3344;
	// bl 0x82a7e6b0
	ctx.lr = 0x829025BC;
	sub_82A7E6B0(ctx, base);
loc_829025BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829025C8"))) PPC_WEAK_FUNC(sub_829025C8);
PPC_FUNC_IMPL(__imp__sub_829025C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x829025D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,31504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31504);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82902614
	if (!ctx.cr0.eq) goto loc_82902614;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,31504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31504, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x829025F4;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828fb668
	ctx.lr = 0x829025FC;
	sub_828FB668(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-2784
	ctx.r4.s64 = ctx.r11.s64 + -2784;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x82902610;
	sub_82E4E838(ctx, base);
	// lwz r11,31504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31504);
loc_82902614:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82902640
	if (!ctx.cr0.eq) goto loc_82902640;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,31504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31504, ctx.r11.u32);
	// addi r3,r10,31496
	ctx.r3.s64 = ctx.r10.s64 + 31496;
	// bl 0x828fda68
	ctx.lr = 0x82902630;
	sub_828FDA68(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3288
	ctx.r3.s64 = ctx.r11.s64 + -3288;
	// bl 0x82a7e6b0
	ctx.lr = 0x8290263C;
	sub_82A7E6B0(ctx, base);
	// lwz r11,31504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31504);
loc_82902640:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82902684
	if (!ctx.cr0.eq) goto loc_82902684;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,31504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31504, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,31480
	ctx.r31.s64 = ctx.r29.s64 + 31480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x82902664;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-4172
	ctx.r11.s64 = ctx.r11.s64 + -4172;
	// stw r11,31480(r29)
	PPC_STORE_U32(ctx.r29.u32 + 31480, ctx.r11.u32);
	// bl 0x828fe398
	ctx.lr = 0x82902678;
	sub_828FE398(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3304
	ctx.r3.s64 = ctx.r11.s64 + -3304;
	// bl 0x82a7e6b0
	ctx.lr = 0x82902684;
	sub_82A7E6B0(ctx, base);
loc_82902684:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82902690"))) PPC_WEAK_FUNC(sub_82902690);
PPC_FUNC_IMPL(__imp__sub_82902690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82902698;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,31532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31532);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x829026dc
	if (!ctx.cr0.eq) goto loc_829026DC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,31532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31532, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x829026BC;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828fb6b8
	ctx.lr = 0x829026C4;
	sub_828FB6B8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-2748
	ctx.r4.s64 = ctx.r11.s64 + -2748;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x829026D8;
	sub_82E4E838(ctx, base);
	// lwz r11,31532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31532);
loc_829026DC:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82902708
	if (!ctx.cr0.eq) goto loc_82902708;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,31532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31532, ctx.r11.u32);
	// addi r3,r10,31524
	ctx.r3.s64 = ctx.r10.s64 + 31524;
	// bl 0x828fdab8
	ctx.lr = 0x829026F8;
	sub_828FDAB8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3248
	ctx.r3.s64 = ctx.r11.s64 + -3248;
	// bl 0x82a7e6b0
	ctx.lr = 0x82902704;
	sub_82A7E6B0(ctx, base);
	// lwz r11,31532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31532);
loc_82902708:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8290274c
	if (!ctx.cr0.eq) goto loc_8290274C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,31532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31532, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,31508
	ctx.r31.s64 = ctx.r29.s64 + 31508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8290272C;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-4120
	ctx.r11.s64 = ctx.r11.s64 + -4120;
	// stw r11,31508(r29)
	PPC_STORE_U32(ctx.r29.u32 + 31508, ctx.r11.u32);
	// bl 0x828fe3e0
	ctx.lr = 0x82902740;
	sub_828FE3E0(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3264
	ctx.r3.s64 = ctx.r11.s64 + -3264;
	// bl 0x82a7e6b0
	ctx.lr = 0x8290274C;
	sub_82A7E6B0(ctx, base);
loc_8290274C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82902758"))) PPC_WEAK_FUNC(sub_82902758);
PPC_FUNC_IMPL(__imp__sub_82902758) {
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
	// bl 0x828feed8
	ctx.lr = 0x82902778;
	sub_828FEED8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82902788
	if (ctx.cr0.eq) goto loc_82902788;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82902788;
	sub_823FD208(ctx, base);
loc_82902788:
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

__attribute__((alias("__imp__sub_829027A8"))) PPC_WEAK_FUNC(sub_829027A8);
PPC_FUNC_IMPL(__imp__sub_829027A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x829027B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,31560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31560);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x829027f4
	if (!ctx.cr0.eq) goto loc_829027F4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,31560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31560, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x829027D4;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828fb708
	ctx.lr = 0x829027DC;
	sub_828FB708(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-2728
	ctx.r4.s64 = ctx.r11.s64 + -2728;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x829027F0;
	sub_82E4E838(ctx, base);
	// lwz r11,31560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31560);
loc_829027F4:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82902820
	if (!ctx.cr0.eq) goto loc_82902820;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,31560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31560, ctx.r11.u32);
	// addi r3,r10,31552
	ctx.r3.s64 = ctx.r10.s64 + 31552;
	// bl 0x828fdb08
	ctx.lr = 0x82902810;
	sub_828FDB08(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3208
	ctx.r3.s64 = ctx.r11.s64 + -3208;
	// bl 0x82a7e6b0
	ctx.lr = 0x8290281C;
	sub_82A7E6B0(ctx, base);
	// lwz r11,31560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31560);
loc_82902820:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82902864
	if (!ctx.cr0.eq) goto loc_82902864;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,31560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31560, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,31536
	ctx.r31.s64 = ctx.r29.s64 + 31536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x82902844;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-4068
	ctx.r11.s64 = ctx.r11.s64 + -4068;
	// stw r11,31536(r29)
	PPC_STORE_U32(ctx.r29.u32 + 31536, ctx.r11.u32);
	// bl 0x828fe428
	ctx.lr = 0x82902858;
	sub_828FE428(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3224
	ctx.r3.s64 = ctx.r11.s64 + -3224;
	// bl 0x82a7e6b0
	ctx.lr = 0x82902864;
	sub_82A7E6B0(ctx, base);
loc_82902864:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82902870"))) PPC_WEAK_FUNC(sub_82902870);
PPC_FUNC_IMPL(__imp__sub_82902870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82902878;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,31588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31588);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x829028bc
	if (!ctx.cr0.eq) goto loc_829028BC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,31588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31588, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x8290289C;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828fb758
	ctx.lr = 0x829028A4;
	sub_828FB758(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-2708
	ctx.r4.s64 = ctx.r11.s64 + -2708;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x829028B8;
	sub_82E4E838(ctx, base);
	// lwz r11,31588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31588);
loc_829028BC:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x829028e8
	if (!ctx.cr0.eq) goto loc_829028E8;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,31588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31588, ctx.r11.u32);
	// addi r3,r10,31580
	ctx.r3.s64 = ctx.r10.s64 + 31580;
	// bl 0x828fdb58
	ctx.lr = 0x829028D8;
	sub_828FDB58(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3168
	ctx.r3.s64 = ctx.r11.s64 + -3168;
	// bl 0x82a7e6b0
	ctx.lr = 0x829028E4;
	sub_82A7E6B0(ctx, base);
	// lwz r11,31588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31588);
loc_829028E8:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8290292c
	if (!ctx.cr0.eq) goto loc_8290292C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,31588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31588, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,31564
	ctx.r31.s64 = ctx.r29.s64 + 31564;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8290290C;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-4016
	ctx.r11.s64 = ctx.r11.s64 + -4016;
	// stw r11,31564(r29)
	PPC_STORE_U32(ctx.r29.u32 + 31564, ctx.r11.u32);
	// bl 0x828fe470
	ctx.lr = 0x82902920;
	sub_828FE470(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3184
	ctx.r3.s64 = ctx.r11.s64 + -3184;
	// bl 0x82a7e6b0
	ctx.lr = 0x8290292C;
	sub_82A7E6B0(ctx, base);
loc_8290292C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82902938"))) PPC_WEAK_FUNC(sub_82902938);
PPC_FUNC_IMPL(__imp__sub_82902938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82902940;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,31616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31616);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82902984
	if (!ctx.cr0.eq) goto loc_82902984;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,31616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31616, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x82902964;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828fb7a8
	ctx.lr = 0x8290296C;
	sub_828FB7A8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-2692
	ctx.r4.s64 = ctx.r11.s64 + -2692;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x82902980;
	sub_82E4E838(ctx, base);
	// lwz r11,31616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31616);
loc_82902984:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x829029b0
	if (!ctx.cr0.eq) goto loc_829029B0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,31616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31616, ctx.r11.u32);
	// addi r3,r10,31608
	ctx.r3.s64 = ctx.r10.s64 + 31608;
	// bl 0x828fdba8
	ctx.lr = 0x829029A0;
	sub_828FDBA8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3128
	ctx.r3.s64 = ctx.r11.s64 + -3128;
	// bl 0x82a7e6b0
	ctx.lr = 0x829029AC;
	sub_82A7E6B0(ctx, base);
	// lwz r11,31616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31616);
loc_829029B0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x829029f4
	if (!ctx.cr0.eq) goto loc_829029F4;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,31616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31616, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,31592
	ctx.r31.s64 = ctx.r29.s64 + 31592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x829029D4;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3964
	ctx.r11.s64 = ctx.r11.s64 + -3964;
	// stw r11,31592(r29)
	PPC_STORE_U32(ctx.r29.u32 + 31592, ctx.r11.u32);
	// bl 0x828fe4b8
	ctx.lr = 0x829029E8;
	sub_828FE4B8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3144
	ctx.r3.s64 = ctx.r11.s64 + -3144;
	// bl 0x82a7e6b0
	ctx.lr = 0x829029F4;
	sub_82A7E6B0(ctx, base);
loc_829029F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82902A00"))) PPC_WEAK_FUNC(sub_82902A00);
PPC_FUNC_IMPL(__imp__sub_82902A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82902A08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,31644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31644);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82902a4c
	if (!ctx.cr0.eq) goto loc_82902A4C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,31644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31644, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x82902A2C;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828fb7f8
	ctx.lr = 0x82902A34;
	sub_828FB7F8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-2668
	ctx.r4.s64 = ctx.r11.s64 + -2668;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x82902A48;
	sub_82E4E838(ctx, base);
	// lwz r11,31644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31644);
loc_82902A4C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82902a78
	if (!ctx.cr0.eq) goto loc_82902A78;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,31644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31644, ctx.r11.u32);
	// addi r3,r10,31636
	ctx.r3.s64 = ctx.r10.s64 + 31636;
	// bl 0x828fdbf8
	ctx.lr = 0x82902A68;
	sub_828FDBF8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3088
	ctx.r3.s64 = ctx.r11.s64 + -3088;
	// bl 0x82a7e6b0
	ctx.lr = 0x82902A74;
	sub_82A7E6B0(ctx, base);
	// lwz r11,31644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31644);
loc_82902A78:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82902abc
	if (!ctx.cr0.eq) goto loc_82902ABC;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,31644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31644, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,31620
	ctx.r31.s64 = ctx.r29.s64 + 31620;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x82902A9C;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3912
	ctx.r11.s64 = ctx.r11.s64 + -3912;
	// stw r11,31620(r29)
	PPC_STORE_U32(ctx.r29.u32 + 31620, ctx.r11.u32);
	// bl 0x828fe500
	ctx.lr = 0x82902AB0;
	sub_828FE500(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3104
	ctx.r3.s64 = ctx.r11.s64 + -3104;
	// bl 0x82a7e6b0
	ctx.lr = 0x82902ABC;
	sub_82A7E6B0(ctx, base);
loc_82902ABC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82902AC8"))) PPC_WEAK_FUNC(sub_82902AC8);
PPC_FUNC_IMPL(__imp__sub_82902AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82902AD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,31672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31672);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82902b14
	if (!ctx.cr0.eq) goto loc_82902B14;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,31672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31672, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x82902AF4;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828fb848
	ctx.lr = 0x82902AFC;
	sub_828FB848(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-2644
	ctx.r4.s64 = ctx.r11.s64 + -2644;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x82902B10;
	sub_82E4E838(ctx, base);
	// lwz r11,31672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31672);
loc_82902B14:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82902b40
	if (!ctx.cr0.eq) goto loc_82902B40;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,31672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31672, ctx.r11.u32);
	// addi r3,r10,31664
	ctx.r3.s64 = ctx.r10.s64 + 31664;
	// bl 0x828fdc48
	ctx.lr = 0x82902B30;
	sub_828FDC48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3048
	ctx.r3.s64 = ctx.r11.s64 + -3048;
	// bl 0x82a7e6b0
	ctx.lr = 0x82902B3C;
	sub_82A7E6B0(ctx, base);
	// lwz r11,31672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31672);
loc_82902B40:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82902b84
	if (!ctx.cr0.eq) goto loc_82902B84;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,31672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31672, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,31648
	ctx.r31.s64 = ctx.r29.s64 + 31648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x82902B64;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3860
	ctx.r11.s64 = ctx.r11.s64 + -3860;
	// stw r11,31648(r29)
	PPC_STORE_U32(ctx.r29.u32 + 31648, ctx.r11.u32);
	// bl 0x828fe548
	ctx.lr = 0x82902B78;
	sub_828FE548(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3064
	ctx.r3.s64 = ctx.r11.s64 + -3064;
	// bl 0x82a7e6b0
	ctx.lr = 0x82902B84;
	sub_82A7E6B0(ctx, base);
loc_82902B84:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82902B90"))) PPC_WEAK_FUNC(sub_82902B90);
PPC_FUNC_IMPL(__imp__sub_82902B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82902B98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,31700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31700);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82902bdc
	if (!ctx.cr0.eq) goto loc_82902BDC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,31700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31700, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x82902BBC;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828fb898
	ctx.lr = 0x82902BC4;
	sub_828FB898(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-2612
	ctx.r4.s64 = ctx.r11.s64 + -2612;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x82902BD8;
	sub_82E4E838(ctx, base);
	// lwz r11,31700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31700);
loc_82902BDC:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82902c08
	if (!ctx.cr0.eq) goto loc_82902C08;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,31700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31700, ctx.r11.u32);
	// addi r3,r10,31692
	ctx.r3.s64 = ctx.r10.s64 + 31692;
	// bl 0x828fdc98
	ctx.lr = 0x82902BF8;
	sub_828FDC98(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3008
	ctx.r3.s64 = ctx.r11.s64 + -3008;
	// bl 0x82a7e6b0
	ctx.lr = 0x82902C04;
	sub_82A7E6B0(ctx, base);
	// lwz r11,31700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31700);
loc_82902C08:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82902c4c
	if (!ctx.cr0.eq) goto loc_82902C4C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,31700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31700, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,31676
	ctx.r31.s64 = ctx.r29.s64 + 31676;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x82902C2C;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3808
	ctx.r11.s64 = ctx.r11.s64 + -3808;
	// stw r11,31676(r29)
	PPC_STORE_U32(ctx.r29.u32 + 31676, ctx.r11.u32);
	// bl 0x828fe590
	ctx.lr = 0x82902C40;
	sub_828FE590(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3024
	ctx.r3.s64 = ctx.r11.s64 + -3024;
	// bl 0x82a7e6b0
	ctx.lr = 0x82902C4C;
	sub_82A7E6B0(ctx, base);
loc_82902C4C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82902C58"))) PPC_WEAK_FUNC(sub_82902C58);
PPC_FUNC_IMPL(__imp__sub_82902C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82902C60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,31728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31728);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82902ca4
	if (!ctx.cr0.eq) goto loc_82902CA4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,31728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31728, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x82902C84;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828fb8e8
	ctx.lr = 0x82902C8C;
	sub_828FB8E8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-2592
	ctx.r4.s64 = ctx.r11.s64 + -2592;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x82902CA0;
	sub_82E4E838(ctx, base);
	// lwz r11,31728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31728);
loc_82902CA4:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82902cd0
	if (!ctx.cr0.eq) goto loc_82902CD0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,31728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31728, ctx.r11.u32);
	// addi r3,r10,31720
	ctx.r3.s64 = ctx.r10.s64 + 31720;
	// bl 0x828fdce8
	ctx.lr = 0x82902CC0;
	sub_828FDCE8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-2968
	ctx.r3.s64 = ctx.r11.s64 + -2968;
	// bl 0x82a7e6b0
	ctx.lr = 0x82902CCC;
	sub_82A7E6B0(ctx, base);
	// lwz r11,31728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31728);
loc_82902CD0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82902d14
	if (!ctx.cr0.eq) goto loc_82902D14;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,31728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31728, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,31704
	ctx.r31.s64 = ctx.r29.s64 + 31704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x82902CF4;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3756
	ctx.r11.s64 = ctx.r11.s64 + -3756;
	// stw r11,31704(r29)
	PPC_STORE_U32(ctx.r29.u32 + 31704, ctx.r11.u32);
	// bl 0x828fe5d8
	ctx.lr = 0x82902D08;
	sub_828FE5D8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-2984
	ctx.r3.s64 = ctx.r11.s64 + -2984;
	// bl 0x82a7e6b0
	ctx.lr = 0x82902D14;
	sub_82A7E6B0(ctx, base);
loc_82902D14:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82902D20"))) PPC_WEAK_FUNC(sub_82902D20);
PPC_FUNC_IMPL(__imp__sub_82902D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82902D28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,31756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31756);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82902d6c
	if (!ctx.cr0.eq) goto loc_82902D6C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,31756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31756, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x82902D4C;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828fb938
	ctx.lr = 0x82902D54;
	sub_828FB938(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-2572
	ctx.r4.s64 = ctx.r11.s64 + -2572;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x82902D68;
	sub_82E4E838(ctx, base);
	// lwz r11,31756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31756);
loc_82902D6C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82902d98
	if (!ctx.cr0.eq) goto loc_82902D98;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,31756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31756, ctx.r11.u32);
	// addi r3,r10,31748
	ctx.r3.s64 = ctx.r10.s64 + 31748;
	// bl 0x828fdd38
	ctx.lr = 0x82902D88;
	sub_828FDD38(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-2928
	ctx.r3.s64 = ctx.r11.s64 + -2928;
	// bl 0x82a7e6b0
	ctx.lr = 0x82902D94;
	sub_82A7E6B0(ctx, base);
	// lwz r11,31756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31756);
loc_82902D98:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82902ddc
	if (!ctx.cr0.eq) goto loc_82902DDC;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,31756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31756, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,31732
	ctx.r31.s64 = ctx.r29.s64 + 31732;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x82902DBC;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3704
	ctx.r11.s64 = ctx.r11.s64 + -3704;
	// stw r11,31732(r29)
	PPC_STORE_U32(ctx.r29.u32 + 31732, ctx.r11.u32);
	// bl 0x828fe620
	ctx.lr = 0x82902DD0;
	sub_828FE620(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-2944
	ctx.r3.s64 = ctx.r11.s64 + -2944;
	// bl 0x82a7e6b0
	ctx.lr = 0x82902DDC;
	sub_82A7E6B0(ctx, base);
loc_82902DDC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82902DE8"))) PPC_WEAK_FUNC(sub_82902DE8);
PPC_FUNC_IMPL(__imp__sub_82902DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82902DF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,31784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31784);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82902e34
	if (!ctx.cr0.eq) goto loc_82902E34;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,31784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31784, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x82902E14;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828fb988
	ctx.lr = 0x82902E1C;
	sub_828FB988(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-2528
	ctx.r4.s64 = ctx.r11.s64 + -2528;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x82902E30;
	sub_82E4E838(ctx, base);
	// lwz r11,31784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31784);
loc_82902E34:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82902e60
	if (!ctx.cr0.eq) goto loc_82902E60;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,31784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31784, ctx.r11.u32);
	// addi r3,r10,31776
	ctx.r3.s64 = ctx.r10.s64 + 31776;
	// bl 0x828fdd88
	ctx.lr = 0x82902E50;
	sub_828FDD88(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-2888
	ctx.r3.s64 = ctx.r11.s64 + -2888;
	// bl 0x82a7e6b0
	ctx.lr = 0x82902E5C;
	sub_82A7E6B0(ctx, base);
	// lwz r11,31784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31784);
loc_82902E60:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82902ea4
	if (!ctx.cr0.eq) goto loc_82902EA4;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,31784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31784, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,31760
	ctx.r31.s64 = ctx.r29.s64 + 31760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x82902E84;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3652
	ctx.r11.s64 = ctx.r11.s64 + -3652;
	// stw r11,31760(r29)
	PPC_STORE_U32(ctx.r29.u32 + 31760, ctx.r11.u32);
	// bl 0x828fe668
	ctx.lr = 0x82902E98;
	sub_828FE668(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-2904
	ctx.r3.s64 = ctx.r11.s64 + -2904;
	// bl 0x82a7e6b0
	ctx.lr = 0x82902EA4;
	sub_82A7E6B0(ctx, base);
loc_82902EA4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82902EB0"))) PPC_WEAK_FUNC(sub_82902EB0);
PPC_FUNC_IMPL(__imp__sub_82902EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82902EB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,31812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31812);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82902efc
	if (!ctx.cr0.eq) goto loc_82902EFC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,31812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31812, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x82902EDC;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828fb9d8
	ctx.lr = 0x82902EE4;
	sub_828FB9D8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-6924
	ctx.r4.s64 = ctx.r11.s64 + -6924;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x82902EF8;
	sub_82E4E838(ctx, base);
	// lwz r11,31812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31812);
loc_82902EFC:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82902f28
	if (!ctx.cr0.eq) goto loc_82902F28;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,31812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31812, ctx.r11.u32);
	// addi r3,r10,31804
	ctx.r3.s64 = ctx.r10.s64 + 31804;
	// bl 0x828fddd8
	ctx.lr = 0x82902F18;
	sub_828FDDD8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-2848
	ctx.r3.s64 = ctx.r11.s64 + -2848;
	// bl 0x82a7e6b0
	ctx.lr = 0x82902F24;
	sub_82A7E6B0(ctx, base);
	// lwz r11,31812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31812);
loc_82902F28:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82902f6c
	if (!ctx.cr0.eq) goto loc_82902F6C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,31812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31812, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,31788
	ctx.r31.s64 = ctx.r29.s64 + 31788;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x82902F4C;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3600
	ctx.r11.s64 = ctx.r11.s64 + -3600;
	// stw r11,31788(r29)
	PPC_STORE_U32(ctx.r29.u32 + 31788, ctx.r11.u32);
	// bl 0x828fe6b0
	ctx.lr = 0x82902F60;
	sub_828FE6B0(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-2864
	ctx.r3.s64 = ctx.r11.s64 + -2864;
	// bl 0x82a7e6b0
	ctx.lr = 0x82902F6C;
	sub_82A7E6B0(ctx, base);
loc_82902F6C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82902F78"))) PPC_WEAK_FUNC(sub_82902F78);
PPC_FUNC_IMPL(__imp__sub_82902F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82902F80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,31840(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31840);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82902fc4
	if (!ctx.cr0.eq) goto loc_82902FC4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,31840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31840, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x82902FA4;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828fba28
	ctx.lr = 0x82902FAC;
	sub_828FBA28(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-2508
	ctx.r4.s64 = ctx.r11.s64 + -2508;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x82902FC0;
	sub_82E4E838(ctx, base);
	// lwz r11,31840(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31840);
loc_82902FC4:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82902ff0
	if (!ctx.cr0.eq) goto loc_82902FF0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,31840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31840, ctx.r11.u32);
	// addi r3,r10,31832
	ctx.r3.s64 = ctx.r10.s64 + 31832;
	// bl 0x828fde28
	ctx.lr = 0x82902FE0;
	sub_828FDE28(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-2808
	ctx.r3.s64 = ctx.r11.s64 + -2808;
	// bl 0x82a7e6b0
	ctx.lr = 0x82902FEC;
	sub_82A7E6B0(ctx, base);
	// lwz r11,31840(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31840);
loc_82902FF0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82903034
	if (!ctx.cr0.eq) goto loc_82903034;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,31840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31840, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,31816
	ctx.r31.s64 = ctx.r29.s64 + 31816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x82903014;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3548
	ctx.r11.s64 = ctx.r11.s64 + -3548;
	// stw r11,31816(r29)
	PPC_STORE_U32(ctx.r29.u32 + 31816, ctx.r11.u32);
	// bl 0x828fe6f8
	ctx.lr = 0x82903028;
	sub_828FE6F8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-2824
	ctx.r3.s64 = ctx.r11.s64 + -2824;
	// bl 0x82a7e6b0
	ctx.lr = 0x82903034;
	sub_82A7E6B0(ctx, base);
loc_82903034:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82903040"))) PPC_WEAK_FUNC(sub_82903040);
PPC_FUNC_IMPL(__imp__sub_82903040) {
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
	// bl 0x828ff190
	ctx.lr = 0x82903060;
	sub_828FF190(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82903070
	if (ctx.cr0.eq) goto loc_82903070;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82903070;
	sub_823FD208(ctx, base);
loc_82903070:
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

__attribute__((alias("__imp__sub_82903090"))) PPC_WEAK_FUNC(sub_82903090);
PPC_FUNC_IMPL(__imp__sub_82903090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82903098;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,31868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31868);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x829030dc
	if (!ctx.cr0.eq) goto loc_829030DC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,31868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31868, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x829030BC;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828fba78
	ctx.lr = 0x829030C4;
	sub_828FBA78(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-2492
	ctx.r4.s64 = ctx.r11.s64 + -2492;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x829030D8;
	sub_82E4E838(ctx, base);
	// lwz r11,31868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31868);
loc_829030DC:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82903108
	if (!ctx.cr0.eq) goto loc_82903108;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,31868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31868, ctx.r11.u32);
	// addi r3,r10,31860
	ctx.r3.s64 = ctx.r10.s64 + 31860;
	// bl 0x828fde78
	ctx.lr = 0x829030F8;
	sub_828FDE78(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-2768
	ctx.r3.s64 = ctx.r11.s64 + -2768;
	// bl 0x82a7e6b0
	ctx.lr = 0x82903104;
	sub_82A7E6B0(ctx, base);
	// lwz r11,31868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31868);
loc_82903108:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8290314c
	if (!ctx.cr0.eq) goto loc_8290314C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,31868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31868, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,31844
	ctx.r31.s64 = ctx.r29.s64 + 31844;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8290312C;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3496
	ctx.r11.s64 = ctx.r11.s64 + -3496;
	// stw r11,31844(r29)
	PPC_STORE_U32(ctx.r29.u32 + 31844, ctx.r11.u32);
	// bl 0x828fe740
	ctx.lr = 0x82903140;
	sub_828FE740(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-2784
	ctx.r3.s64 = ctx.r11.s64 + -2784;
	// bl 0x82a7e6b0
	ctx.lr = 0x8290314C;
	sub_82A7E6B0(ctx, base);
loc_8290314C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82903158"))) PPC_WEAK_FUNC(sub_82903158);
PPC_FUNC_IMPL(__imp__sub_82903158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82903160;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,31896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31896);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x829031a4
	if (!ctx.cr0.eq) goto loc_829031A4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,31896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31896, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x82903184;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828fbac8
	ctx.lr = 0x8290318C;
	sub_828FBAC8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-2476
	ctx.r4.s64 = ctx.r11.s64 + -2476;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x829031A0;
	sub_82E4E838(ctx, base);
	// lwz r11,31896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31896);
loc_829031A4:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x829031d0
	if (!ctx.cr0.eq) goto loc_829031D0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,31896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31896, ctx.r11.u32);
	// addi r3,r10,31888
	ctx.r3.s64 = ctx.r10.s64 + 31888;
	// bl 0x828fdec8
	ctx.lr = 0x829031C0;
	sub_828FDEC8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-2728
	ctx.r3.s64 = ctx.r11.s64 + -2728;
	// bl 0x82a7e6b0
	ctx.lr = 0x829031CC;
	sub_82A7E6B0(ctx, base);
	// lwz r11,31896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31896);
loc_829031D0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82903214
	if (!ctx.cr0.eq) goto loc_82903214;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,31896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31896, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,31872
	ctx.r31.s64 = ctx.r29.s64 + 31872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x829031F4;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3444
	ctx.r11.s64 = ctx.r11.s64 + -3444;
	// stw r11,31872(r29)
	PPC_STORE_U32(ctx.r29.u32 + 31872, ctx.r11.u32);
	// bl 0x828fe788
	ctx.lr = 0x82903208;
	sub_828FE788(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-2744
	ctx.r3.s64 = ctx.r11.s64 + -2744;
	// bl 0x82a7e6b0
	ctx.lr = 0x82903214;
	sub_82A7E6B0(ctx, base);
loc_82903214:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82903220"))) PPC_WEAK_FUNC(sub_82903220);
PPC_FUNC_IMPL(__imp__sub_82903220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82903228;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,31924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31924);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8290326c
	if (!ctx.cr0.eq) goto loc_8290326C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,31924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31924, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x8290324C;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828fbb18
	ctx.lr = 0x82903254;
	sub_828FBB18(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-2448
	ctx.r4.s64 = ctx.r11.s64 + -2448;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x82903268;
	sub_82E4E838(ctx, base);
	// lwz r11,31924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31924);
loc_8290326C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82903298
	if (!ctx.cr0.eq) goto loc_82903298;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,31924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31924, ctx.r11.u32);
	// addi r3,r10,31916
	ctx.r3.s64 = ctx.r10.s64 + 31916;
	// bl 0x828fdf18
	ctx.lr = 0x82903288;
	sub_828FDF18(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-2688
	ctx.r3.s64 = ctx.r11.s64 + -2688;
	// bl 0x82a7e6b0
	ctx.lr = 0x82903294;
	sub_82A7E6B0(ctx, base);
	// lwz r11,31924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31924);
loc_82903298:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x829032dc
	if (!ctx.cr0.eq) goto loc_829032DC;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,31924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31924, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,31900
	ctx.r31.s64 = ctx.r29.s64 + 31900;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x829032BC;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3392
	ctx.r11.s64 = ctx.r11.s64 + -3392;
	// stw r11,31900(r29)
	PPC_STORE_U32(ctx.r29.u32 + 31900, ctx.r11.u32);
	// bl 0x828fe7d0
	ctx.lr = 0x829032D0;
	sub_828FE7D0(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-2704
	ctx.r3.s64 = ctx.r11.s64 + -2704;
	// bl 0x82a7e6b0
	ctx.lr = 0x829032DC;
	sub_82A7E6B0(ctx, base);
loc_829032DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829032E8"))) PPC_WEAK_FUNC(sub_829032E8);
PPC_FUNC_IMPL(__imp__sub_829032E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x829032F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,31952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31952);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82903334
	if (!ctx.cr0.eq) goto loc_82903334;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,31952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31952, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x82903314;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828fbb68
	ctx.lr = 0x8290331C;
	sub_828FBB68(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-2416
	ctx.r4.s64 = ctx.r11.s64 + -2416;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x82903330;
	sub_82E4E838(ctx, base);
	// lwz r11,31952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31952);
loc_82903334:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82903360
	if (!ctx.cr0.eq) goto loc_82903360;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,31952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31952, ctx.r11.u32);
	// addi r3,r10,31944
	ctx.r3.s64 = ctx.r10.s64 + 31944;
	// bl 0x828fdf68
	ctx.lr = 0x82903350;
	sub_828FDF68(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-2648
	ctx.r3.s64 = ctx.r11.s64 + -2648;
	// bl 0x82a7e6b0
	ctx.lr = 0x8290335C;
	sub_82A7E6B0(ctx, base);
	// lwz r11,31952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31952);
loc_82903360:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x829033a4
	if (!ctx.cr0.eq) goto loc_829033A4;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,31952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31952, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,31928
	ctx.r31.s64 = ctx.r29.s64 + 31928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x82903384;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3340
	ctx.r11.s64 = ctx.r11.s64 + -3340;
	// stw r11,31928(r29)
	PPC_STORE_U32(ctx.r29.u32 + 31928, ctx.r11.u32);
	// bl 0x828fe818
	ctx.lr = 0x82903398;
	sub_828FE818(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-2664
	ctx.r3.s64 = ctx.r11.s64 + -2664;
	// bl 0x82a7e6b0
	ctx.lr = 0x829033A4;
	sub_82A7E6B0(ctx, base);
loc_829033A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829033B0"))) PPC_WEAK_FUNC(sub_829033B0);
PPC_FUNC_IMPL(__imp__sub_829033B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x829033B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,31980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31980);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x829033fc
	if (!ctx.cr0.eq) goto loc_829033FC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,31980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31980, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x829033DC;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828fbbb8
	ctx.lr = 0x829033E4;
	sub_828FBBB8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-2396
	ctx.r4.s64 = ctx.r11.s64 + -2396;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x829033F8;
	sub_82E4E838(ctx, base);
	// lwz r11,31980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31980);
loc_829033FC:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82903428
	if (!ctx.cr0.eq) goto loc_82903428;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,31980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31980, ctx.r11.u32);
	// addi r3,r10,31972
	ctx.r3.s64 = ctx.r10.s64 + 31972;
	// bl 0x828fdfb8
	ctx.lr = 0x82903418;
	sub_828FDFB8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-2608
	ctx.r3.s64 = ctx.r11.s64 + -2608;
	// bl 0x82a7e6b0
	ctx.lr = 0x82903424;
	sub_82A7E6B0(ctx, base);
	// lwz r11,31980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31980);
loc_82903428:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8290346c
	if (!ctx.cr0.eq) goto loc_8290346C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,31980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31980, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,31956
	ctx.r31.s64 = ctx.r29.s64 + 31956;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8290344C;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3288
	ctx.r11.s64 = ctx.r11.s64 + -3288;
	// stw r11,31956(r29)
	PPC_STORE_U32(ctx.r29.u32 + 31956, ctx.r11.u32);
	// bl 0x828fe860
	ctx.lr = 0x82903460;
	sub_828FE860(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-2624
	ctx.r3.s64 = ctx.r11.s64 + -2624;
	// bl 0x82a7e6b0
	ctx.lr = 0x8290346C;
	sub_82A7E6B0(ctx, base);
loc_8290346C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82903478"))) PPC_WEAK_FUNC(sub_82903478);
PPC_FUNC_IMPL(__imp__sub_82903478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82903480;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,32008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32008);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x829034c4
	if (!ctx.cr0.eq) goto loc_829034C4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,32008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32008, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x829034A4;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828fbc08
	ctx.lr = 0x829034AC;
	sub_828FBC08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-2376
	ctx.r4.s64 = ctx.r11.s64 + -2376;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x829034C0;
	sub_82E4E838(ctx, base);
	// lwz r11,32008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32008);
loc_829034C4:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x829034f0
	if (!ctx.cr0.eq) goto loc_829034F0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,32008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32008, ctx.r11.u32);
	// addi r3,r10,32000
	ctx.r3.s64 = ctx.r10.s64 + 32000;
	// bl 0x828fe008
	ctx.lr = 0x829034E0;
	sub_828FE008(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-2568
	ctx.r3.s64 = ctx.r11.s64 + -2568;
	// bl 0x82a7e6b0
	ctx.lr = 0x829034EC;
	sub_82A7E6B0(ctx, base);
	// lwz r11,32008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32008);
loc_829034F0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82903534
	if (!ctx.cr0.eq) goto loc_82903534;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,32008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32008, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,31984
	ctx.r31.s64 = ctx.r29.s64 + 31984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x82903514;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3236
	ctx.r11.s64 = ctx.r11.s64 + -3236;
	// stw r11,31984(r29)
	PPC_STORE_U32(ctx.r29.u32 + 31984, ctx.r11.u32);
	// bl 0x828fe8a8
	ctx.lr = 0x82903528;
	sub_828FE8A8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-2584
	ctx.r3.s64 = ctx.r11.s64 + -2584;
	// bl 0x82a7e6b0
	ctx.lr = 0x82903534;
	sub_82A7E6B0(ctx, base);
loc_82903534:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82903540"))) PPC_WEAK_FUNC(sub_82903540);
PPC_FUNC_IMPL(__imp__sub_82903540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82903548;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,32036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32036);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8290358c
	if (!ctx.cr0.eq) goto loc_8290358C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,32036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32036, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x8290356C;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828fbc58
	ctx.lr = 0x82903574;
	sub_828FBC58(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-2356
	ctx.r4.s64 = ctx.r11.s64 + -2356;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x82903588;
	sub_82E4E838(ctx, base);
	// lwz r11,32036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32036);
loc_8290358C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x829035b8
	if (!ctx.cr0.eq) goto loc_829035B8;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,32036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32036, ctx.r11.u32);
	// addi r3,r10,32028
	ctx.r3.s64 = ctx.r10.s64 + 32028;
	// bl 0x828fe058
	ctx.lr = 0x829035A8;
	sub_828FE058(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-2528
	ctx.r3.s64 = ctx.r11.s64 + -2528;
	// bl 0x82a7e6b0
	ctx.lr = 0x829035B4;
	sub_82A7E6B0(ctx, base);
	// lwz r11,32036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32036);
loc_829035B8:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x829035fc
	if (!ctx.cr0.eq) goto loc_829035FC;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,32036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32036, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,32012
	ctx.r31.s64 = ctx.r29.s64 + 32012;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x829035DC;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3184
	ctx.r11.s64 = ctx.r11.s64 + -3184;
	// stw r11,32012(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32012, ctx.r11.u32);
	// bl 0x828fe8f0
	ctx.lr = 0x829035F0;
	sub_828FE8F0(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-2544
	ctx.r3.s64 = ctx.r11.s64 + -2544;
	// bl 0x82a7e6b0
	ctx.lr = 0x829035FC;
	sub_82A7E6B0(ctx, base);
loc_829035FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82903608"))) PPC_WEAK_FUNC(sub_82903608);
PPC_FUNC_IMPL(__imp__sub_82903608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82903610;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,32064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32064);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82903654
	if (!ctx.cr0.eq) goto loc_82903654;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,32064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32064, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x82903634;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828fbca8
	ctx.lr = 0x8290363C;
	sub_828FBCA8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-2328
	ctx.r4.s64 = ctx.r11.s64 + -2328;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x82903650;
	sub_82E4E838(ctx, base);
	// lwz r11,32064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32064);
loc_82903654:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82903680
	if (!ctx.cr0.eq) goto loc_82903680;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,32064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32064, ctx.r11.u32);
	// addi r3,r10,32056
	ctx.r3.s64 = ctx.r10.s64 + 32056;
	// bl 0x828fe0a8
	ctx.lr = 0x82903670;
	sub_828FE0A8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-2488
	ctx.r3.s64 = ctx.r11.s64 + -2488;
	// bl 0x82a7e6b0
	ctx.lr = 0x8290367C;
	sub_82A7E6B0(ctx, base);
	// lwz r11,32064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32064);
loc_82903680:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x829036c4
	if (!ctx.cr0.eq) goto loc_829036C4;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,32064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32064, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,32040
	ctx.r31.s64 = ctx.r29.s64 + 32040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x829036A4;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3132
	ctx.r11.s64 = ctx.r11.s64 + -3132;
	// stw r11,32040(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32040, ctx.r11.u32);
	// bl 0x828fe938
	ctx.lr = 0x829036B8;
	sub_828FE938(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-2504
	ctx.r3.s64 = ctx.r11.s64 + -2504;
	// bl 0x82a7e6b0
	ctx.lr = 0x829036C4;
	sub_82A7E6B0(ctx, base);
loc_829036C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829036D0"))) PPC_WEAK_FUNC(sub_829036D0);
PPC_FUNC_IMPL(__imp__sub_829036D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x829036D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,32092(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32092);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8290371c
	if (!ctx.cr0.eq) goto loc_8290371C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,32092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32092, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x829036FC;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828fbcf8
	ctx.lr = 0x82903704;
	sub_828FBCF8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-2304
	ctx.r4.s64 = ctx.r11.s64 + -2304;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x82903718;
	sub_82E4E838(ctx, base);
	// lwz r11,32092(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32092);
loc_8290371C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82903748
	if (!ctx.cr0.eq) goto loc_82903748;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,32092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32092, ctx.r11.u32);
	// addi r3,r10,32084
	ctx.r3.s64 = ctx.r10.s64 + 32084;
	// bl 0x828fe0f8
	ctx.lr = 0x82903738;
	sub_828FE0F8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-2448
	ctx.r3.s64 = ctx.r11.s64 + -2448;
	// bl 0x82a7e6b0
	ctx.lr = 0x82903744;
	sub_82A7E6B0(ctx, base);
	// lwz r11,32092(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32092);
loc_82903748:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8290378c
	if (!ctx.cr0.eq) goto loc_8290378C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,32092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32092, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,32068
	ctx.r31.s64 = ctx.r29.s64 + 32068;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8290376C;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3080
	ctx.r11.s64 = ctx.r11.s64 + -3080;
	// stw r11,32068(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32068, ctx.r11.u32);
	// bl 0x828fe980
	ctx.lr = 0x82903780;
	sub_828FE980(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-2464
	ctx.r3.s64 = ctx.r11.s64 + -2464;
	// bl 0x82a7e6b0
	ctx.lr = 0x8290378C;
	sub_82A7E6B0(ctx, base);
loc_8290378C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82903798"))) PPC_WEAK_FUNC(sub_82903798);
PPC_FUNC_IMPL(__imp__sub_82903798) {
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
	// bl 0x828ff370
	ctx.lr = 0x829037B8;
	sub_828FF370(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829037c8
	if (ctx.cr0.eq) goto loc_829037C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x829037C8;
	sub_823FD208(ctx, base);
loc_829037C8:
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

__attribute__((alias("__imp__sub_829037E8"))) PPC_WEAK_FUNC(sub_829037E8);
PPC_FUNC_IMPL(__imp__sub_829037E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x829037F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,32120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32120);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82903834
	if (!ctx.cr0.eq) goto loc_82903834;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,32120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32120, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x82903814;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828fbd48
	ctx.lr = 0x8290381C;
	sub_828FBD48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-2272
	ctx.r4.s64 = ctx.r11.s64 + -2272;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x82903830;
	sub_82E4E838(ctx, base);
	// lwz r11,32120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32120);
loc_82903834:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82903860
	if (!ctx.cr0.eq) goto loc_82903860;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,32120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32120, ctx.r11.u32);
	// addi r3,r10,32112
	ctx.r3.s64 = ctx.r10.s64 + 32112;
	// bl 0x828fe148
	ctx.lr = 0x82903850;
	sub_828FE148(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-2408
	ctx.r3.s64 = ctx.r11.s64 + -2408;
	// bl 0x82a7e6b0
	ctx.lr = 0x8290385C;
	sub_82A7E6B0(ctx, base);
	// lwz r11,32120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32120);
loc_82903860:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x829038a4
	if (!ctx.cr0.eq) goto loc_829038A4;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,32120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32120, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,32096
	ctx.r31.s64 = ctx.r29.s64 + 32096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x82903884;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3028
	ctx.r11.s64 = ctx.r11.s64 + -3028;
	// stw r11,32096(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32096, ctx.r11.u32);
	// bl 0x828fe9c8
	ctx.lr = 0x82903898;
	sub_828FE9C8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-2424
	ctx.r3.s64 = ctx.r11.s64 + -2424;
	// bl 0x82a7e6b0
	ctx.lr = 0x829038A4;
	sub_82A7E6B0(ctx, base);
loc_829038A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829038B0"))) PPC_WEAK_FUNC(sub_829038B0);
PPC_FUNC_IMPL(__imp__sub_829038B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x829038B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,32148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32148);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x829038fc
	if (!ctx.cr0.eq) goto loc_829038FC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,32148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32148, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x829038DC;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828fbd98
	ctx.lr = 0x829038E4;
	sub_828FBD98(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-2244
	ctx.r4.s64 = ctx.r11.s64 + -2244;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x829038F8;
	sub_82E4E838(ctx, base);
	// lwz r11,32148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32148);
loc_829038FC:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82903928
	if (!ctx.cr0.eq) goto loc_82903928;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,32148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32148, ctx.r11.u32);
	// addi r3,r10,32140
	ctx.r3.s64 = ctx.r10.s64 + 32140;
	// bl 0x828fe198
	ctx.lr = 0x82903918;
	sub_828FE198(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-2368
	ctx.r3.s64 = ctx.r11.s64 + -2368;
	// bl 0x82a7e6b0
	ctx.lr = 0x82903924;
	sub_82A7E6B0(ctx, base);
	// lwz r11,32148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32148);
loc_82903928:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8290396c
	if (!ctx.cr0.eq) goto loc_8290396C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,32148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32148, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,32124
	ctx.r31.s64 = ctx.r29.s64 + 32124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8290394C;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-2976
	ctx.r11.s64 = ctx.r11.s64 + -2976;
	// stw r11,32124(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32124, ctx.r11.u32);
	// bl 0x828fea10
	ctx.lr = 0x82903960;
	sub_828FEA10(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-2384
	ctx.r3.s64 = ctx.r11.s64 + -2384;
	// bl 0x82a7e6b0
	ctx.lr = 0x8290396C;
	sub_82A7E6B0(ctx, base);
loc_8290396C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82903978"))) PPC_WEAK_FUNC(sub_82903978);
PPC_FUNC_IMPL(__imp__sub_82903978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82903980;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fc1a0
	ctx.lr = 0x8290398C;
	sub_828FC1A0(ctx, base);
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829039ec
	if (ctx.cr0.eq) goto loc_829039EC;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lis r29,-31954
	ctx.r29.s64 = -2094137344;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x829039d0
	if (!ctx.cr6.gt) goto loc_829039D0;
	// lwz r30,9800(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 9800);
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82407ac8
	ctx.lr = 0x829039BC;
	sub_82407AC8(ctx, base);
	// lwz r11,260(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829039D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829039D0:
	// lwz r30,9800(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 9800);
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82407ac8
	ctx.lr = 0x829039E4;
	sub_82407AC8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82903a08
	goto loc_82903A08;
loc_829039EC:
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,9800(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9800);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82407ac8
	ctx.lr = 0x82903A04;
	sub_82407AC8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
loc_82903A08:
	// lwz r11,268(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 268);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82903A1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r11,32636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32636);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82903a44
	if (ctx.cr0.eq) goto loc_82903A44;
	// lbz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// stb r10,163(r11)
	PPC_STORE_U8(ctx.r11.u32 + 163, ctx.r10.u8);
	// lbz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r10,161(r11)
	PPC_STORE_U8(ctx.r11.u32 + 161, ctx.r10.u8);
loc_82903A44:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82903A50"))) PPC_WEAK_FUNC(sub_82903A50);
PPC_FUNC_IMPL(__imp__sub_82903A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82903A58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828fb488
	ctx.lr = 0x82903A68;
	sub_828FB488(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x82903A84;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82903a9c
	if (ctx.cr0.eq) goto loc_82903A9C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828ff3c8
	ctx.lr = 0x82903A94;
	sub_828FF3C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82903aa0
	goto loc_82903AA0;
loc_82903A9C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82903AA0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x829013a8
	ctx.lr = 0x82903AB0;
	sub_829013A8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x82903ABC;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82903acc
	if (ctx.cr6.eq) goto loc_82903ACC;
	// bl 0x823e19b0
	ctx.lr = 0x82903ACC;
	sub_823E19B0(ctx, base);
loc_82903ACC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82903AD8"))) PPC_WEAK_FUNC(sub_82903AD8);
PPC_FUNC_IMPL(__imp__sub_82903AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82903AE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828fb4d8
	ctx.lr = 0x82903AF0;
	sub_828FB4D8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x82903B0C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82903b24
	if (ctx.cr0.eq) goto loc_82903B24;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828ff4d8
	ctx.lr = 0x82903B1C;
	sub_828FF4D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82903b28
	goto loc_82903B28;
loc_82903B24:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82903B28:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82901418
	ctx.lr = 0x82903B38;
	sub_82901418(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x82903B44;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82903b54
	if (ctx.cr6.eq) goto loc_82903B54;
	// bl 0x823e19b0
	ctx.lr = 0x82903B54;
	sub_823E19B0(ctx, base);
loc_82903B54:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82903B60"))) PPC_WEAK_FUNC(sub_82903B60);
PPC_FUNC_IMPL(__imp__sub_82903B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82903B68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828fb528
	ctx.lr = 0x82903B78;
	sub_828FB528(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x82903B94;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82903bac
	if (ctx.cr0.eq) goto loc_82903BAC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828ff5e8
	ctx.lr = 0x82903BA4;
	sub_828FF5E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82903bb0
	goto loc_82903BB0;
loc_82903BAC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82903BB0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82901488
	ctx.lr = 0x82903BC0;
	sub_82901488(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x82903BCC;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82903bdc
	if (ctx.cr6.eq) goto loc_82903BDC;
	// bl 0x823e19b0
	ctx.lr = 0x82903BDC;
	sub_823E19B0(ctx, base);
loc_82903BDC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82903BE8"))) PPC_WEAK_FUNC(sub_82903BE8);
PPC_FUNC_IMPL(__imp__sub_82903BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82903BF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828fb578
	ctx.lr = 0x82903C00;
	sub_828FB578(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x82903C1C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82903c34
	if (ctx.cr0.eq) goto loc_82903C34;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828ff6f8
	ctx.lr = 0x82903C2C;
	sub_828FF6F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82903c38
	goto loc_82903C38;
loc_82903C34:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82903C38:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x829014f8
	ctx.lr = 0x82903C48;
	sub_829014F8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x82903C54;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82903c64
	if (ctx.cr6.eq) goto loc_82903C64;
	// bl 0x823e19b0
	ctx.lr = 0x82903C64;
	sub_823E19B0(ctx, base);
loc_82903C64:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82903C70"))) PPC_WEAK_FUNC(sub_82903C70);
PPC_FUNC_IMPL(__imp__sub_82903C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82903C78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828fb5c8
	ctx.lr = 0x82903C88;
	sub_828FB5C8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x82903CA4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82903cbc
	if (ctx.cr0.eq) goto loc_82903CBC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828ff808
	ctx.lr = 0x82903CB4;
	sub_828FF808(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82903cc0
	goto loc_82903CC0;
loc_82903CBC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82903CC0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82901568
	ctx.lr = 0x82903CD0;
	sub_82901568(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x82903CDC;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82903cec
	if (ctx.cr6.eq) goto loc_82903CEC;
	// bl 0x823e19b0
	ctx.lr = 0x82903CEC;
	sub_823E19B0(ctx, base);
loc_82903CEC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82903CF8"))) PPC_WEAK_FUNC(sub_82903CF8);
PPC_FUNC_IMPL(__imp__sub_82903CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82903D00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828fb618
	ctx.lr = 0x82903D10;
	sub_828FB618(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x82903D2C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82903d44
	if (ctx.cr0.eq) goto loc_82903D44;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828ff918
	ctx.lr = 0x82903D3C;
	sub_828FF918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82903d48
	goto loc_82903D48;
loc_82903D44:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82903D48:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x829015d8
	ctx.lr = 0x82903D58;
	sub_829015D8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x82903D64;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82903d74
	if (ctx.cr6.eq) goto loc_82903D74;
	// bl 0x823e19b0
	ctx.lr = 0x82903D74;
	sub_823E19B0(ctx, base);
loc_82903D74:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82903D80"))) PPC_WEAK_FUNC(sub_82903D80);
PPC_FUNC_IMPL(__imp__sub_82903D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82903D88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828fb668
	ctx.lr = 0x82903D98;
	sub_828FB668(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x82903DB4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82903dcc
	if (ctx.cr0.eq) goto loc_82903DCC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828ffa28
	ctx.lr = 0x82903DC4;
	sub_828FFA28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82903dd0
	goto loc_82903DD0;
loc_82903DCC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82903DD0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82901648
	ctx.lr = 0x82903DE0;
	sub_82901648(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x82903DEC;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82903dfc
	if (ctx.cr6.eq) goto loc_82903DFC;
	// bl 0x823e19b0
	ctx.lr = 0x82903DFC;
	sub_823E19B0(ctx, base);
loc_82903DFC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82903E08"))) PPC_WEAK_FUNC(sub_82903E08);
PPC_FUNC_IMPL(__imp__sub_82903E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82903E10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828fb6b8
	ctx.lr = 0x82903E20;
	sub_828FB6B8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x82903E3C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82903e54
	if (ctx.cr0.eq) goto loc_82903E54;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828ffb38
	ctx.lr = 0x82903E4C;
	sub_828FFB38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82903e58
	goto loc_82903E58;
loc_82903E54:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82903E58:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x829016b8
	ctx.lr = 0x82903E68;
	sub_829016B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x82903E74;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82903e84
	if (ctx.cr6.eq) goto loc_82903E84;
	// bl 0x823e19b0
	ctx.lr = 0x82903E84;
	sub_823E19B0(ctx, base);
loc_82903E84:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82903E90"))) PPC_WEAK_FUNC(sub_82903E90);
PPC_FUNC_IMPL(__imp__sub_82903E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82903E98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828fb708
	ctx.lr = 0x82903EA8;
	sub_828FB708(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x82903EC4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82903edc
	if (ctx.cr0.eq) goto loc_82903EDC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828ffc48
	ctx.lr = 0x82903ED4;
	sub_828FFC48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82903ee0
	goto loc_82903EE0;
loc_82903EDC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82903EE0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82901728
	ctx.lr = 0x82903EF0;
	sub_82901728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x82903EFC;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82903f0c
	if (ctx.cr6.eq) goto loc_82903F0C;
	// bl 0x823e19b0
	ctx.lr = 0x82903F0C;
	sub_823E19B0(ctx, base);
loc_82903F0C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82903F18"))) PPC_WEAK_FUNC(sub_82903F18);
PPC_FUNC_IMPL(__imp__sub_82903F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82903F20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828fb758
	ctx.lr = 0x82903F30;
	sub_828FB758(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x82903F4C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82903f64
	if (ctx.cr0.eq) goto loc_82903F64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828ffd58
	ctx.lr = 0x82903F5C;
	sub_828FFD58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82903f68
	goto loc_82903F68;
loc_82903F64:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82903F68:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82901798
	ctx.lr = 0x82903F78;
	sub_82901798(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x82903F84;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82903f94
	if (ctx.cr6.eq) goto loc_82903F94;
	// bl 0x823e19b0
	ctx.lr = 0x82903F94;
	sub_823E19B0(ctx, base);
loc_82903F94:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82903FA0"))) PPC_WEAK_FUNC(sub_82903FA0);
PPC_FUNC_IMPL(__imp__sub_82903FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82903FA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828fb7a8
	ctx.lr = 0x82903FB8;
	sub_828FB7A8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x82903FD4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82903fec
	if (ctx.cr0.eq) goto loc_82903FEC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828ffe68
	ctx.lr = 0x82903FE4;
	sub_828FFE68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82903ff0
	goto loc_82903FF0;
loc_82903FEC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82903FF0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82901808
	ctx.lr = 0x82904000;
	sub_82901808(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x8290400C;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290401c
	if (ctx.cr6.eq) goto loc_8290401C;
	// bl 0x823e19b0
	ctx.lr = 0x8290401C;
	sub_823E19B0(ctx, base);
loc_8290401C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82904028"))) PPC_WEAK_FUNC(sub_82904028);
PPC_FUNC_IMPL(__imp__sub_82904028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82904030;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828fb7f8
	ctx.lr = 0x82904040;
	sub_828FB7F8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x8290405C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82904074
	if (ctx.cr0.eq) goto loc_82904074;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828fff78
	ctx.lr = 0x8290406C;
	sub_828FFF78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82904078
	goto loc_82904078;
loc_82904074:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82904078:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82901878
	ctx.lr = 0x82904088;
	sub_82901878(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x82904094;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829040a4
	if (ctx.cr6.eq) goto loc_829040A4;
	// bl 0x823e19b0
	ctx.lr = 0x829040A4;
	sub_823E19B0(ctx, base);
loc_829040A4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829040B0"))) PPC_WEAK_FUNC(sub_829040B0);
PPC_FUNC_IMPL(__imp__sub_829040B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x829040B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828fb848
	ctx.lr = 0x829040C8;
	sub_828FB848(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x829040E4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829040fc
	if (ctx.cr0.eq) goto loc_829040FC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82900088
	ctx.lr = 0x829040F4;
	sub_82900088(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82904100
	goto loc_82904100;
loc_829040FC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82904100:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x829018e8
	ctx.lr = 0x82904110;
	sub_829018E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x8290411C;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290412c
	if (ctx.cr6.eq) goto loc_8290412C;
	// bl 0x823e19b0
	ctx.lr = 0x8290412C;
	sub_823E19B0(ctx, base);
loc_8290412C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82904138"))) PPC_WEAK_FUNC(sub_82904138);
PPC_FUNC_IMPL(__imp__sub_82904138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82904140;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828fb898
	ctx.lr = 0x82904150;
	sub_828FB898(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x8290416C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82904184
	if (ctx.cr0.eq) goto loc_82904184;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82900198
	ctx.lr = 0x8290417C;
	sub_82900198(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82904188
	goto loc_82904188;
loc_82904184:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82904188:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82901958
	ctx.lr = 0x82904198;
	sub_82901958(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x829041A4;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829041b4
	if (ctx.cr6.eq) goto loc_829041B4;
	// bl 0x823e19b0
	ctx.lr = 0x829041B4;
	sub_823E19B0(ctx, base);
loc_829041B4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829041C0"))) PPC_WEAK_FUNC(sub_829041C0);
PPC_FUNC_IMPL(__imp__sub_829041C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x829041C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828fb8e8
	ctx.lr = 0x829041D8;
	sub_828FB8E8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x829041F4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8290420c
	if (ctx.cr0.eq) goto loc_8290420C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x829002a8
	ctx.lr = 0x82904204;
	sub_829002A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82904210
	goto loc_82904210;
loc_8290420C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82904210:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x829019c8
	ctx.lr = 0x82904220;
	sub_829019C8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x8290422C;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290423c
	if (ctx.cr6.eq) goto loc_8290423C;
	// bl 0x823e19b0
	ctx.lr = 0x8290423C;
	sub_823E19B0(ctx, base);
loc_8290423C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82904248"))) PPC_WEAK_FUNC(sub_82904248);
PPC_FUNC_IMPL(__imp__sub_82904248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82904250;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828fb938
	ctx.lr = 0x82904260;
	sub_828FB938(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x8290427C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82904294
	if (ctx.cr0.eq) goto loc_82904294;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x829003b8
	ctx.lr = 0x8290428C;
	sub_829003B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82904298
	goto loc_82904298;
loc_82904294:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82904298:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82901a38
	ctx.lr = 0x829042A8;
	sub_82901A38(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x829042B4;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829042c4
	if (ctx.cr6.eq) goto loc_829042C4;
	// bl 0x823e19b0
	ctx.lr = 0x829042C4;
	sub_823E19B0(ctx, base);
loc_829042C4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829042D0"))) PPC_WEAK_FUNC(sub_829042D0);
PPC_FUNC_IMPL(__imp__sub_829042D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x829042D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828fb988
	ctx.lr = 0x829042E8;
	sub_828FB988(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x82904304;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8290431c
	if (ctx.cr0.eq) goto loc_8290431C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x829004c8
	ctx.lr = 0x82904314;
	sub_829004C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82904320
	goto loc_82904320;
loc_8290431C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82904320:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82901aa8
	ctx.lr = 0x82904330;
	sub_82901AA8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x8290433C;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290434c
	if (ctx.cr6.eq) goto loc_8290434C;
	// bl 0x823e19b0
	ctx.lr = 0x8290434C;
	sub_823E19B0(ctx, base);
loc_8290434C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82904358"))) PPC_WEAK_FUNC(sub_82904358);
PPC_FUNC_IMPL(__imp__sub_82904358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82904360;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828fb9d8
	ctx.lr = 0x82904370;
	sub_828FB9D8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x8290438C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829043a4
	if (ctx.cr0.eq) goto loc_829043A4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x829005d8
	ctx.lr = 0x8290439C;
	sub_829005D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829043a8
	goto loc_829043A8;
loc_829043A4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_829043A8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82901b18
	ctx.lr = 0x829043B8;
	sub_82901B18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x829043C4;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829043d4
	if (ctx.cr6.eq) goto loc_829043D4;
	// bl 0x823e19b0
	ctx.lr = 0x829043D4;
	sub_823E19B0(ctx, base);
loc_829043D4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829043E0"))) PPC_WEAK_FUNC(sub_829043E0);
PPC_FUNC_IMPL(__imp__sub_829043E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x829043E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828fba28
	ctx.lr = 0x829043F8;
	sub_828FBA28(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x82904414;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8290442c
	if (ctx.cr0.eq) goto loc_8290442C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x829006e8
	ctx.lr = 0x82904424;
	sub_829006E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82904430
	goto loc_82904430;
loc_8290442C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82904430:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82901b88
	ctx.lr = 0x82904440;
	sub_82901B88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x8290444C;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290445c
	if (ctx.cr6.eq) goto loc_8290445C;
	// bl 0x823e19b0
	ctx.lr = 0x8290445C;
	sub_823E19B0(ctx, base);
loc_8290445C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82904468"))) PPC_WEAK_FUNC(sub_82904468);
PPC_FUNC_IMPL(__imp__sub_82904468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82904470;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828fba78
	ctx.lr = 0x82904480;
	sub_828FBA78(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x8290449C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829044b4
	if (ctx.cr0.eq) goto loc_829044B4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x829007f8
	ctx.lr = 0x829044AC;
	sub_829007F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829044b8
	goto loc_829044B8;
loc_829044B4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_829044B8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82901bf8
	ctx.lr = 0x829044C8;
	sub_82901BF8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x829044D4;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829044e4
	if (ctx.cr6.eq) goto loc_829044E4;
	// bl 0x823e19b0
	ctx.lr = 0x829044E4;
	sub_823E19B0(ctx, base);
loc_829044E4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829044F0"))) PPC_WEAK_FUNC(sub_829044F0);
PPC_FUNC_IMPL(__imp__sub_829044F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x829044F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828fbac8
	ctx.lr = 0x82904508;
	sub_828FBAC8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x82904524;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8290453c
	if (ctx.cr0.eq) goto loc_8290453C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82900908
	ctx.lr = 0x82904534;
	sub_82900908(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82904540
	goto loc_82904540;
loc_8290453C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82904540:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82901c68
	ctx.lr = 0x82904550;
	sub_82901C68(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x8290455C;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290456c
	if (ctx.cr6.eq) goto loc_8290456C;
	// bl 0x823e19b0
	ctx.lr = 0x8290456C;
	sub_823E19B0(ctx, base);
loc_8290456C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82904578"))) PPC_WEAK_FUNC(sub_82904578);
PPC_FUNC_IMPL(__imp__sub_82904578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82904580;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828fbb18
	ctx.lr = 0x82904590;
	sub_828FBB18(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x829045AC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829045c4
	if (ctx.cr0.eq) goto loc_829045C4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82900a18
	ctx.lr = 0x829045BC;
	sub_82900A18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829045c8
	goto loc_829045C8;
loc_829045C4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_829045C8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82901cd8
	ctx.lr = 0x829045D8;
	sub_82901CD8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x829045E4;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829045f4
	if (ctx.cr6.eq) goto loc_829045F4;
	// bl 0x823e19b0
	ctx.lr = 0x829045F4;
	sub_823E19B0(ctx, base);
loc_829045F4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82904600"))) PPC_WEAK_FUNC(sub_82904600);
PPC_FUNC_IMPL(__imp__sub_82904600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82904608;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828fbb68
	ctx.lr = 0x82904618;
	sub_828FBB68(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x82904634;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8290464c
	if (ctx.cr0.eq) goto loc_8290464C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82900b28
	ctx.lr = 0x82904644;
	sub_82900B28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82904650
	goto loc_82904650;
loc_8290464C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82904650:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82901d48
	ctx.lr = 0x82904660;
	sub_82901D48(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x8290466C;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290467c
	if (ctx.cr6.eq) goto loc_8290467C;
	// bl 0x823e19b0
	ctx.lr = 0x8290467C;
	sub_823E19B0(ctx, base);
loc_8290467C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82904688"))) PPC_WEAK_FUNC(sub_82904688);
PPC_FUNC_IMPL(__imp__sub_82904688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82904690;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828fbbb8
	ctx.lr = 0x829046A0;
	sub_828FBBB8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x829046BC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829046d4
	if (ctx.cr0.eq) goto loc_829046D4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82900c38
	ctx.lr = 0x829046CC;
	sub_82900C38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829046d8
	goto loc_829046D8;
loc_829046D4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_829046D8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82901db8
	ctx.lr = 0x829046E8;
	sub_82901DB8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x829046F4;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82904704
	if (ctx.cr6.eq) goto loc_82904704;
	// bl 0x823e19b0
	ctx.lr = 0x82904704;
	sub_823E19B0(ctx, base);
loc_82904704:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82904710"))) PPC_WEAK_FUNC(sub_82904710);
PPC_FUNC_IMPL(__imp__sub_82904710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82904718;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828fbc08
	ctx.lr = 0x82904728;
	sub_828FBC08(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x82904744;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8290475c
	if (ctx.cr0.eq) goto loc_8290475C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82900d48
	ctx.lr = 0x82904754;
	sub_82900D48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82904760
	goto loc_82904760;
loc_8290475C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82904760:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82901e28
	ctx.lr = 0x82904770;
	sub_82901E28(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x8290477C;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290478c
	if (ctx.cr6.eq) goto loc_8290478C;
	// bl 0x823e19b0
	ctx.lr = 0x8290478C;
	sub_823E19B0(ctx, base);
loc_8290478C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82904798"))) PPC_WEAK_FUNC(sub_82904798);
PPC_FUNC_IMPL(__imp__sub_82904798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x829047A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828fbc58
	ctx.lr = 0x829047B0;
	sub_828FBC58(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x829047CC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829047e4
	if (ctx.cr0.eq) goto loc_829047E4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82900e58
	ctx.lr = 0x829047DC;
	sub_82900E58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829047e8
	goto loc_829047E8;
loc_829047E4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_829047E8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82901e98
	ctx.lr = 0x829047F8;
	sub_82901E98(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x82904804;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82904814
	if (ctx.cr6.eq) goto loc_82904814;
	// bl 0x823e19b0
	ctx.lr = 0x82904814;
	sub_823E19B0(ctx, base);
loc_82904814:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82904820"))) PPC_WEAK_FUNC(sub_82904820);
PPC_FUNC_IMPL(__imp__sub_82904820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82904828;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828fbca8
	ctx.lr = 0x82904838;
	sub_828FBCA8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x82904854;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8290486c
	if (ctx.cr0.eq) goto loc_8290486C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82900f68
	ctx.lr = 0x82904864;
	sub_82900F68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82904870
	goto loc_82904870;
loc_8290486C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82904870:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82901f08
	ctx.lr = 0x82904880;
	sub_82901F08(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x8290488C;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290489c
	if (ctx.cr6.eq) goto loc_8290489C;
	// bl 0x823e19b0
	ctx.lr = 0x8290489C;
	sub_823E19B0(ctx, base);
loc_8290489C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829048A8"))) PPC_WEAK_FUNC(sub_829048A8);
PPC_FUNC_IMPL(__imp__sub_829048A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x829048B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828fbcf8
	ctx.lr = 0x829048C0;
	sub_828FBCF8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x829048DC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829048f4
	if (ctx.cr0.eq) goto loc_829048F4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82901078
	ctx.lr = 0x829048EC;
	sub_82901078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829048f8
	goto loc_829048F8;
loc_829048F4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_829048F8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82901f78
	ctx.lr = 0x82904908;
	sub_82901F78(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x82904914;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82904924
	if (ctx.cr6.eq) goto loc_82904924;
	// bl 0x823e19b0
	ctx.lr = 0x82904924;
	sub_823E19B0(ctx, base);
loc_82904924:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82904930"))) PPC_WEAK_FUNC(sub_82904930);
PPC_FUNC_IMPL(__imp__sub_82904930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82904938;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828fbd48
	ctx.lr = 0x82904948;
	sub_828FBD48(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x82904964;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8290497c
	if (ctx.cr0.eq) goto loc_8290497C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82901188
	ctx.lr = 0x82904974;
	sub_82901188(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82904980
	goto loc_82904980;
loc_8290497C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82904980:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82901fe8
	ctx.lr = 0x82904990;
	sub_82901FE8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x8290499C;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829049ac
	if (ctx.cr6.eq) goto loc_829049AC;
	// bl 0x823e19b0
	ctx.lr = 0x829049AC;
	sub_823E19B0(ctx, base);
loc_829049AC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829049B8"))) PPC_WEAK_FUNC(sub_829049B8);
PPC_FUNC_IMPL(__imp__sub_829049B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x829049C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828fbd98
	ctx.lr = 0x829049D0;
	sub_828FBD98(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x829049EC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82904a04
	if (ctx.cr0.eq) goto loc_82904A04;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82901298
	ctx.lr = 0x829049FC;
	sub_82901298(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82904a08
	goto loc_82904A08;
loc_82904A04:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82904A08:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82902058
	ctx.lr = 0x82904A18;
	sub_82902058(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x82904A24;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82904a34
	if (ctx.cr6.eq) goto loc_82904A34;
	// bl 0x823e19b0
	ctx.lr = 0x82904A34;
	sub_823E19B0(ctx, base);
loc_82904A34:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82904A40"))) PPC_WEAK_FUNC(sub_82904A40);
PPC_FUNC_IMPL(__imp__sub_82904A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82904A48;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82904b3c
	if (!ctx.cr6.eq) goto loc_82904B3C;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x82904A74;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82904b3c
	if (ctx.cr0.eq) goto loc_82904B3C;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82c0f6c0
	ctx.lr = 0x82904A84;
	sub_82C0F6C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82904af0
	if (ctx.cr0.eq) goto loc_82904AF0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r29,3
	ctx.r29.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82904AA0;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82904AB0;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82904AB8;
	sub_824992B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x82904AC4;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829095b0
	ctx.lr = 0x82904AD4;
	sub_829095B0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-6852
	ctx.r11.s64 = ctx.r11.s64 + -6852;
	// stb r10,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r10.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82904af4
	goto loc_82904AF4;
loc_82904AF0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82904AF4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82903a50
	ctx.lr = 0x82904AFC;
	sub_82903A50(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x82904B04;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82904b20
	if (ctx.cr0.eq) goto loc_82904B20;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82904b20
	if (ctx.cr6.eq) goto loc_82904B20;
	// bl 0x823e19b0
	ctx.lr = 0x82904B20;
	sub_823E19B0(ctx, base);
loc_82904B20:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82904b44
	if (ctx.cr0.eq) goto loc_82904B44;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82904b44
	if (ctx.cr6.eq) goto loc_82904B44;
	// bl 0x823e19b0
	ctx.lr = 0x82904B38;
	sub_823E19B0(ctx, base);
	// b 0x82904b44
	goto loc_82904B44;
loc_82904B3C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82904B44;
	sub_8289D980(ctx, base);
loc_82904B44:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82904B50"))) PPC_WEAK_FUNC(sub_82904B50);
PPC_FUNC_IMPL(__imp__sub_82904B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82904B58;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82904c44
	if (!ctx.cr6.eq) goto loc_82904C44;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x82904B84;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82904c44
	if (ctx.cr0.eq) goto loc_82904C44;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82c0f6c0
	ctx.lr = 0x82904B94;
	sub_82C0F6C0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82904bf8
	if (ctx.cr0.eq) goto loc_82904BF8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r29,3
	ctx.r29.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82904BB0;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82904BC0;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82904BC8;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x82904BD4;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829095b0
	ctx.lr = 0x82904BE4;
	sub_829095B0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-6792
	ctx.r11.s64 = ctx.r11.s64 + -6792;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82904bfc
	goto loc_82904BFC;
loc_82904BF8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82904BFC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82903ad8
	ctx.lr = 0x82904C04;
	sub_82903AD8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x82904C0C;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82904c28
	if (ctx.cr0.eq) goto loc_82904C28;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82904c28
	if (ctx.cr6.eq) goto loc_82904C28;
	// bl 0x823e19b0
	ctx.lr = 0x82904C28;
	sub_823E19B0(ctx, base);
loc_82904C28:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82904c4c
	if (ctx.cr0.eq) goto loc_82904C4C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82904c4c
	if (ctx.cr6.eq) goto loc_82904C4C;
	// bl 0x823e19b0
	ctx.lr = 0x82904C40;
	sub_823E19B0(ctx, base);
	// b 0x82904c4c
	goto loc_82904C4C;
loc_82904C44:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82904C4C;
	sub_8289D980(ctx, base);
loc_82904C4C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82904C58"))) PPC_WEAK_FUNC(sub_82904C58);
PPC_FUNC_IMPL(__imp__sub_82904C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82904C60;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82904d54
	if (!ctx.cr6.eq) goto loc_82904D54;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x82904C8C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82904d54
	if (ctx.cr0.eq) goto loc_82904D54;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82c0f6c0
	ctx.lr = 0x82904C9C;
	sub_82C0F6C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82904d08
	if (ctx.cr0.eq) goto loc_82904D08;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r29,3
	ctx.r29.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82904CB8;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82904CC8;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82904CD0;
	sub_824992B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x82904CDC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82908298
	ctx.lr = 0x82904CEC;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-6732
	ctx.r11.s64 = ctx.r11.s64 + -6732;
	// stb r10,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r10.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82904d0c
	goto loc_82904D0C;
loc_82904D08:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82904D0C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82903b60
	ctx.lr = 0x82904D14;
	sub_82903B60(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x82904D1C;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82904d38
	if (ctx.cr0.eq) goto loc_82904D38;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82904d38
	if (ctx.cr6.eq) goto loc_82904D38;
	// bl 0x823e19b0
	ctx.lr = 0x82904D38;
	sub_823E19B0(ctx, base);
loc_82904D38:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82904d5c
	if (ctx.cr0.eq) goto loc_82904D5C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82904d5c
	if (ctx.cr6.eq) goto loc_82904D5C;
	// bl 0x823e19b0
	ctx.lr = 0x82904D50;
	sub_823E19B0(ctx, base);
	// b 0x82904d5c
	goto loc_82904D5C;
loc_82904D54:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82904D5C;
	sub_8289D980(ctx, base);
loc_82904D5C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82904D68"))) PPC_WEAK_FUNC(sub_82904D68);
PPC_FUNC_IMPL(__imp__sub_82904D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82904D70;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82904e64
	if (!ctx.cr6.eq) goto loc_82904E64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x82904D9C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82904e64
	if (ctx.cr0.eq) goto loc_82904E64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82c0f6c0
	ctx.lr = 0x82904DAC;
	sub_82C0F6C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82904e18
	if (ctx.cr0.eq) goto loc_82904E18;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r29,3
	ctx.r29.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82904DC8;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82904DD8;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82904DE0;
	sub_824992B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x82904DEC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829095b0
	ctx.lr = 0x82904DFC;
	sub_829095B0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-6672
	ctx.r11.s64 = ctx.r11.s64 + -6672;
	// stb r10,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r10.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82904e1c
	goto loc_82904E1C;
loc_82904E18:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82904E1C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82903be8
	ctx.lr = 0x82904E24;
	sub_82903BE8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x82904E2C;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82904e48
	if (ctx.cr0.eq) goto loc_82904E48;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82904e48
	if (ctx.cr6.eq) goto loc_82904E48;
	// bl 0x823e19b0
	ctx.lr = 0x82904E48;
	sub_823E19B0(ctx, base);
loc_82904E48:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82904e6c
	if (ctx.cr0.eq) goto loc_82904E6C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82904e6c
	if (ctx.cr6.eq) goto loc_82904E6C;
	// bl 0x823e19b0
	ctx.lr = 0x82904E60;
	sub_823E19B0(ctx, base);
	// b 0x82904e6c
	goto loc_82904E6C;
loc_82904E64:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82904E6C;
	sub_8289D980(ctx, base);
loc_82904E6C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82904E78"))) PPC_WEAK_FUNC(sub_82904E78);
PPC_FUNC_IMPL(__imp__sub_82904E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82904E80;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82904f6c
	if (!ctx.cr6.eq) goto loc_82904F6C;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x82904EAC;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82904f6c
	if (ctx.cr0.eq) goto loc_82904F6C;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82c0f6c0
	ctx.lr = 0x82904EBC;
	sub_82C0F6C0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82904f20
	if (ctx.cr0.eq) goto loc_82904F20;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r29,3
	ctx.r29.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82904ED8;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82904EE8;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82904EF0;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x82904EFC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829095b0
	ctx.lr = 0x82904F0C;
	sub_829095B0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-6612
	ctx.r11.s64 = ctx.r11.s64 + -6612;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82904f24
	goto loc_82904F24;
loc_82904F20:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82904F24:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82903c70
	ctx.lr = 0x82904F2C;
	sub_82903C70(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x82904F34;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82904f50
	if (ctx.cr0.eq) goto loc_82904F50;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82904f50
	if (ctx.cr6.eq) goto loc_82904F50;
	// bl 0x823e19b0
	ctx.lr = 0x82904F50;
	sub_823E19B0(ctx, base);
loc_82904F50:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82904f74
	if (ctx.cr0.eq) goto loc_82904F74;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82904f74
	if (ctx.cr6.eq) goto loc_82904F74;
	// bl 0x823e19b0
	ctx.lr = 0x82904F68;
	sub_823E19B0(ctx, base);
	// b 0x82904f74
	goto loc_82904F74;
loc_82904F6C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82904F74;
	sub_8289D980(ctx, base);
loc_82904F74:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82904F80"))) PPC_WEAK_FUNC(sub_82904F80);
PPC_FUNC_IMPL(__imp__sub_82904F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82904F88;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82905074
	if (!ctx.cr6.eq) goto loc_82905074;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x82904FB4;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905074
	if (ctx.cr0.eq) goto loc_82905074;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82c0f6c0
	ctx.lr = 0x82904FC4;
	sub_82C0F6C0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82905028
	if (ctx.cr0.eq) goto loc_82905028;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r29,3
	ctx.r29.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82904FE0;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82904FF0;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82904FF8;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x82905004;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829095b0
	ctx.lr = 0x82905014;
	sub_829095B0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-6552
	ctx.r11.s64 = ctx.r11.s64 + -6552;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8290502c
	goto loc_8290502C;
loc_82905028:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8290502C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82903cf8
	ctx.lr = 0x82905034;
	sub_82903CF8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x8290503C;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905058
	if (ctx.cr0.eq) goto loc_82905058;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82905058
	if (ctx.cr6.eq) goto loc_82905058;
	// bl 0x823e19b0
	ctx.lr = 0x82905058;
	sub_823E19B0(ctx, base);
loc_82905058:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290507c
	if (ctx.cr0.eq) goto loc_8290507C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290507c
	if (ctx.cr6.eq) goto loc_8290507C;
	// bl 0x823e19b0
	ctx.lr = 0x82905070;
	sub_823E19B0(ctx, base);
	// b 0x8290507c
	goto loc_8290507C;
loc_82905074:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x8290507C;
	sub_8289D980(ctx, base);
loc_8290507C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82905088"))) PPC_WEAK_FUNC(sub_82905088);
PPC_FUNC_IMPL(__imp__sub_82905088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82905090;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8290517c
	if (!ctx.cr6.eq) goto loc_8290517C;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x829050BC;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290517c
	if (ctx.cr0.eq) goto loc_8290517C;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82c0f6c0
	ctx.lr = 0x829050CC;
	sub_82C0F6C0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82905130
	if (ctx.cr0.eq) goto loc_82905130;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r29,3
	ctx.r29.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x829050E8;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x829050F8;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82905100;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x8290510C;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829095b0
	ctx.lr = 0x8290511C;
	sub_829095B0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-6492
	ctx.r11.s64 = ctx.r11.s64 + -6492;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82905134
	goto loc_82905134;
loc_82905130:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82905134:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82903d80
	ctx.lr = 0x8290513C;
	sub_82903D80(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x82905144;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905160
	if (ctx.cr0.eq) goto loc_82905160;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82905160
	if (ctx.cr6.eq) goto loc_82905160;
	// bl 0x823e19b0
	ctx.lr = 0x82905160;
	sub_823E19B0(ctx, base);
loc_82905160:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905184
	if (ctx.cr0.eq) goto loc_82905184;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82905184
	if (ctx.cr6.eq) goto loc_82905184;
	// bl 0x823e19b0
	ctx.lr = 0x82905178;
	sub_823E19B0(ctx, base);
	// b 0x82905184
	goto loc_82905184;
loc_8290517C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82905184;
	sub_8289D980(ctx, base);
loc_82905184:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82905190"))) PPC_WEAK_FUNC(sub_82905190);
PPC_FUNC_IMPL(__imp__sub_82905190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82905198;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82905278
	if (!ctx.cr6.eq) goto loc_82905278;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x829051C4;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905278
	if (ctx.cr0.eq) goto loc_82905278;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82c0f6c0
	ctx.lr = 0x829051D4;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8290522c
	if (ctx.cr0.eq) goto loc_8290522C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x829051F0;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82905200;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82905208;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x82905214;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x828fee80
	ctx.lr = 0x82905224;
	sub_828FEE80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82905230
	goto loc_82905230;
loc_8290522C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82905230:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82903e08
	ctx.lr = 0x82905238;
	sub_82903E08(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x82905240;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290525c
	if (ctx.cr0.eq) goto loc_8290525C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290525c
	if (ctx.cr6.eq) goto loc_8290525C;
	// bl 0x823e19b0
	ctx.lr = 0x8290525C;
	sub_823E19B0(ctx, base);
loc_8290525C:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905280
	if (ctx.cr0.eq) goto loc_82905280;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82905280
	if (ctx.cr6.eq) goto loc_82905280;
	// bl 0x823e19b0
	ctx.lr = 0x82905274;
	sub_823E19B0(ctx, base);
	// b 0x82905280
	goto loc_82905280;
loc_82905278:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82905280;
	sub_8289D980(ctx, base);
loc_82905280:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82905290"))) PPC_WEAK_FUNC(sub_82905290);
PPC_FUNC_IMPL(__imp__sub_82905290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82905298;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82905378
	if (!ctx.cr6.eq) goto loc_82905378;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x829052C4;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905378
	if (ctx.cr0.eq) goto loc_82905378;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82c0f6c0
	ctx.lr = 0x829052D4;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8290532c
	if (ctx.cr0.eq) goto loc_8290532C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x829052F0;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82905300;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82905308;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x82905314;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x828fef28
	ctx.lr = 0x82905324;
	sub_828FEF28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82905330
	goto loc_82905330;
loc_8290532C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82905330:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82903e90
	ctx.lr = 0x82905338;
	sub_82903E90(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x82905340;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290535c
	if (ctx.cr0.eq) goto loc_8290535C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290535c
	if (ctx.cr6.eq) goto loc_8290535C;
	// bl 0x823e19b0
	ctx.lr = 0x8290535C;
	sub_823E19B0(ctx, base);
loc_8290535C:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905380
	if (ctx.cr0.eq) goto loc_82905380;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82905380
	if (ctx.cr6.eq) goto loc_82905380;
	// bl 0x823e19b0
	ctx.lr = 0x82905374;
	sub_823E19B0(ctx, base);
	// b 0x82905380
	goto loc_82905380;
loc_82905378:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82905380;
	sub_8289D980(ctx, base);
loc_82905380:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82905390"))) PPC_WEAK_FUNC(sub_82905390);
PPC_FUNC_IMPL(__imp__sub_82905390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82905398;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82905478
	if (!ctx.cr6.eq) goto loc_82905478;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x829053C4;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905478
	if (ctx.cr0.eq) goto loc_82905478;
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x82c0f6c0
	ctx.lr = 0x829053D4;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8290542c
	if (ctx.cr0.eq) goto loc_8290542C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x829053F0;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82905400;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82905408;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x82905414;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x828ff018
	ctx.lr = 0x82905424;
	sub_828FF018(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82905430
	goto loc_82905430;
loc_8290542C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82905430:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82903f18
	ctx.lr = 0x82905438;
	sub_82903F18(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x82905440;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290545c
	if (ctx.cr0.eq) goto loc_8290545C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290545c
	if (ctx.cr6.eq) goto loc_8290545C;
	// bl 0x823e19b0
	ctx.lr = 0x8290545C;
	sub_823E19B0(ctx, base);
loc_8290545C:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905480
	if (ctx.cr0.eq) goto loc_82905480;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82905480
	if (ctx.cr6.eq) goto loc_82905480;
	// bl 0x823e19b0
	ctx.lr = 0x82905474;
	sub_823E19B0(ctx, base);
	// b 0x82905480
	goto loc_82905480;
loc_82905478:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82905480;
	sub_8289D980(ctx, base);
loc_82905480:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82905490"))) PPC_WEAK_FUNC(sub_82905490);
PPC_FUNC_IMPL(__imp__sub_82905490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82905498;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82905584
	if (!ctx.cr6.eq) goto loc_82905584;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x829054C4;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905584
	if (ctx.cr0.eq) goto loc_82905584;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82c0f6c0
	ctx.lr = 0x829054D4;
	sub_82C0F6C0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82905538
	if (ctx.cr0.eq) goto loc_82905538;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r29,3
	ctx.r29.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x829054F0;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82905500;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82905508;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x82905514;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82908298
	ctx.lr = 0x82905524;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-6432
	ctx.r11.s64 = ctx.r11.s64 + -6432;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8290553c
	goto loc_8290553C;
loc_82905538:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8290553C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82903fa0
	ctx.lr = 0x82905544;
	sub_82903FA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x8290554C;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905568
	if (ctx.cr0.eq) goto loc_82905568;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82905568
	if (ctx.cr6.eq) goto loc_82905568;
	// bl 0x823e19b0
	ctx.lr = 0x82905568;
	sub_823E19B0(ctx, base);
loc_82905568:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290558c
	if (ctx.cr0.eq) goto loc_8290558C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290558c
	if (ctx.cr6.eq) goto loc_8290558C;
	// bl 0x823e19b0
	ctx.lr = 0x82905580;
	sub_823E19B0(ctx, base);
	// b 0x8290558c
	goto loc_8290558C;
loc_82905584:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x8290558C;
	sub_8289D980(ctx, base);
loc_8290558C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82905598"))) PPC_WEAK_FUNC(sub_82905598);
PPC_FUNC_IMPL(__imp__sub_82905598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x829055A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82905680
	if (!ctx.cr6.eq) goto loc_82905680;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x829055CC;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905680
	if (ctx.cr0.eq) goto loc_82905680;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82c0f6c0
	ctx.lr = 0x829055DC;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82905634
	if (ctx.cr0.eq) goto loc_82905634;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x829055F8;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82905608;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82905610;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x8290561C;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x828fb398
	ctx.lr = 0x8290562C;
	sub_828FB398(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82905638
	goto loc_82905638;
loc_82905634:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82905638:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82904028
	ctx.lr = 0x82905640;
	sub_82904028(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x82905648;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905664
	if (ctx.cr0.eq) goto loc_82905664;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82905664
	if (ctx.cr6.eq) goto loc_82905664;
	// bl 0x823e19b0
	ctx.lr = 0x82905664;
	sub_823E19B0(ctx, base);
loc_82905664:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905688
	if (ctx.cr0.eq) goto loc_82905688;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82905688
	if (ctx.cr6.eq) goto loc_82905688;
	// bl 0x823e19b0
	ctx.lr = 0x8290567C;
	sub_823E19B0(ctx, base);
	// b 0x82905688
	goto loc_82905688;
loc_82905680:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82905688;
	sub_8289D980(ctx, base);
loc_82905688:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82905698"))) PPC_WEAK_FUNC(sub_82905698);
PPC_FUNC_IMPL(__imp__sub_82905698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x829056A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82905780
	if (!ctx.cr6.eq) goto loc_82905780;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x829056CC;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905780
	if (ctx.cr0.eq) goto loc_82905780;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82c0f6c0
	ctx.lr = 0x829056DC;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82905734
	if (ctx.cr0.eq) goto loc_82905734;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x829056F8;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82905708;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82905710;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x8290571C;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x828fc2d8
	ctx.lr = 0x8290572C;
	sub_828FC2D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82905738
	goto loc_82905738;
loc_82905734:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82905738:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829040b0
	ctx.lr = 0x82905740;
	sub_829040B0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x82905748;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905764
	if (ctx.cr0.eq) goto loc_82905764;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82905764
	if (ctx.cr6.eq) goto loc_82905764;
	// bl 0x823e19b0
	ctx.lr = 0x82905764;
	sub_823E19B0(ctx, base);
loc_82905764:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905788
	if (ctx.cr0.eq) goto loc_82905788;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82905788
	if (ctx.cr6.eq) goto loc_82905788;
	// bl 0x823e19b0
	ctx.lr = 0x8290577C;
	sub_823E19B0(ctx, base);
	// b 0x82905788
	goto loc_82905788;
loc_82905780:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82905788;
	sub_8289D980(ctx, base);
loc_82905788:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82905798"))) PPC_WEAK_FUNC(sub_82905798);
PPC_FUNC_IMPL(__imp__sub_82905798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x829057A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82905880
	if (!ctx.cr6.eq) goto loc_82905880;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x829057CC;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905880
	if (ctx.cr0.eq) goto loc_82905880;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82c0f6c0
	ctx.lr = 0x829057DC;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82905834
	if (ctx.cr0.eq) goto loc_82905834;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x829057F8;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82905808;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82905810;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x8290581C;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x828fc390
	ctx.lr = 0x8290582C;
	sub_828FC390(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82905838
	goto loc_82905838;
loc_82905834:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82905838:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82904138
	ctx.lr = 0x82905840;
	sub_82904138(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x82905848;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905864
	if (ctx.cr0.eq) goto loc_82905864;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82905864
	if (ctx.cr6.eq) goto loc_82905864;
	// bl 0x823e19b0
	ctx.lr = 0x82905864;
	sub_823E19B0(ctx, base);
loc_82905864:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905888
	if (ctx.cr0.eq) goto loc_82905888;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82905888
	if (ctx.cr6.eq) goto loc_82905888;
	// bl 0x823e19b0
	ctx.lr = 0x8290587C;
	sub_823E19B0(ctx, base);
	// b 0x82905888
	goto loc_82905888;
loc_82905880:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82905888;
	sub_8289D980(ctx, base);
loc_82905888:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82905898"))) PPC_WEAK_FUNC(sub_82905898);
PPC_FUNC_IMPL(__imp__sub_82905898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x829058A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82905994
	if (!ctx.cr6.eq) goto loc_82905994;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x829058CC;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905994
	if (ctx.cr0.eq) goto loc_82905994;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82c0f6c0
	ctx.lr = 0x829058DC;
	sub_82C0F6C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82905948
	if (ctx.cr0.eq) goto loc_82905948;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r29,3
	ctx.r29.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x829058F8;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82905908;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82905910;
	sub_824992B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x8290591C;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829095b0
	ctx.lr = 0x8290592C;
	sub_829095B0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-6300
	ctx.r11.s64 = ctx.r11.s64 + -6300;
	// stb r10,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r10.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8290594c
	goto loc_8290594C;
loc_82905948:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8290594C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829041c0
	ctx.lr = 0x82905954;
	sub_829041C0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x8290595C;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905978
	if (ctx.cr0.eq) goto loc_82905978;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82905978
	if (ctx.cr6.eq) goto loc_82905978;
	// bl 0x823e19b0
	ctx.lr = 0x82905978;
	sub_823E19B0(ctx, base);
loc_82905978:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290599c
	if (ctx.cr0.eq) goto loc_8290599C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290599c
	if (ctx.cr6.eq) goto loc_8290599C;
	// bl 0x823e19b0
	ctx.lr = 0x82905990;
	sub_823E19B0(ctx, base);
	// b 0x8290599c
	goto loc_8290599C;
loc_82905994:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x8290599C;
	sub_8289D980(ctx, base);
loc_8290599C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829059A8"))) PPC_WEAK_FUNC(sub_829059A8);
PPC_FUNC_IMPL(__imp__sub_829059A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x829059B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82905a9c
	if (!ctx.cr6.eq) goto loc_82905A9C;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x829059DC;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905a9c
	if (ctx.cr0.eq) goto loc_82905A9C;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82c0f6c0
	ctx.lr = 0x829059EC;
	sub_82C0F6C0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82905a50
	if (ctx.cr0.eq) goto loc_82905A50;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r29,3
	ctx.r29.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82905A08;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82905A18;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82905A20;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x82905A2C;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82908298
	ctx.lr = 0x82905A3C;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-6240
	ctx.r11.s64 = ctx.r11.s64 + -6240;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82905a54
	goto loc_82905A54;
loc_82905A50:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82905A54:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82904248
	ctx.lr = 0x82905A5C;
	sub_82904248(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x82905A64;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905a80
	if (ctx.cr0.eq) goto loc_82905A80;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82905a80
	if (ctx.cr6.eq) goto loc_82905A80;
	// bl 0x823e19b0
	ctx.lr = 0x82905A80;
	sub_823E19B0(ctx, base);
loc_82905A80:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905aa4
	if (ctx.cr0.eq) goto loc_82905AA4;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82905aa4
	if (ctx.cr6.eq) goto loc_82905AA4;
	// bl 0x823e19b0
	ctx.lr = 0x82905A98;
	sub_823E19B0(ctx, base);
	// b 0x82905aa4
	goto loc_82905AA4;
loc_82905A9C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82905AA4;
	sub_8289D980(ctx, base);
loc_82905AA4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82905AB0"))) PPC_WEAK_FUNC(sub_82905AB0);
PPC_FUNC_IMPL(__imp__sub_82905AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82905AB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82905b98
	if (!ctx.cr6.eq) goto loc_82905B98;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x82905AE4;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905b98
	if (ctx.cr0.eq) goto loc_82905B98;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82c0f6c0
	ctx.lr = 0x82905AF4;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82905b4c
	if (ctx.cr0.eq) goto loc_82905B4C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82905B10;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82905B20;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82905B28;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x82905B34;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x828fc570
	ctx.lr = 0x82905B44;
	sub_828FC570(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82905b50
	goto loc_82905B50;
loc_82905B4C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82905B50:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829042d0
	ctx.lr = 0x82905B58;
	sub_829042D0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x82905B60;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905b7c
	if (ctx.cr0.eq) goto loc_82905B7C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82905b7c
	if (ctx.cr6.eq) goto loc_82905B7C;
	// bl 0x823e19b0
	ctx.lr = 0x82905B7C;
	sub_823E19B0(ctx, base);
loc_82905B7C:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905ba0
	if (ctx.cr0.eq) goto loc_82905BA0;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82905ba0
	if (ctx.cr6.eq) goto loc_82905BA0;
	// bl 0x823e19b0
	ctx.lr = 0x82905B94;
	sub_823E19B0(ctx, base);
	// b 0x82905ba0
	goto loc_82905BA0;
loc_82905B98:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82905BA0;
	sub_8289D980(ctx, base);
loc_82905BA0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82905BB0"))) PPC_WEAK_FUNC(sub_82905BB0);
PPC_FUNC_IMPL(__imp__sub_82905BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82905BB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82905c98
	if (!ctx.cr6.eq) goto loc_82905C98;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x82905BE4;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905c98
	if (ctx.cr0.eq) goto loc_82905C98;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82c0f6c0
	ctx.lr = 0x82905BF4;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82905c4c
	if (ctx.cr0.eq) goto loc_82905C4C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82905C10;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82905C20;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82905C28;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x82905C34;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x828fc640
	ctx.lr = 0x82905C44;
	sub_828FC640(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82905c50
	goto loc_82905C50;
loc_82905C4C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82905C50:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82904358
	ctx.lr = 0x82905C58;
	sub_82904358(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x82905C60;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905c7c
	if (ctx.cr0.eq) goto loc_82905C7C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82905c7c
	if (ctx.cr6.eq) goto loc_82905C7C;
	// bl 0x823e19b0
	ctx.lr = 0x82905C7C;
	sub_823E19B0(ctx, base);
loc_82905C7C:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905ca0
	if (ctx.cr0.eq) goto loc_82905CA0;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82905ca0
	if (ctx.cr6.eq) goto loc_82905CA0;
	// bl 0x823e19b0
	ctx.lr = 0x82905C94;
	sub_823E19B0(ctx, base);
	// b 0x82905ca0
	goto loc_82905CA0;
loc_82905C98:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82905CA0;
	sub_8289D980(ctx, base);
loc_82905CA0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82905CB0"))) PPC_WEAK_FUNC(sub_82905CB0);
PPC_FUNC_IMPL(__imp__sub_82905CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82905CB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82905d98
	if (!ctx.cr6.eq) goto loc_82905D98;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x82905CE4;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905d98
	if (ctx.cr0.eq) goto loc_82905D98;
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x82c0f6c0
	ctx.lr = 0x82905CF4;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82905d4c
	if (ctx.cr0.eq) goto loc_82905D4C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82905D10;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82905D20;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82905D28;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x82905D34;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x828ff128
	ctx.lr = 0x82905D44;
	sub_828FF128(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82905d50
	goto loc_82905D50;
loc_82905D4C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82905D50:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829043e0
	ctx.lr = 0x82905D58;
	sub_829043E0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x82905D60;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905d7c
	if (ctx.cr0.eq) goto loc_82905D7C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82905d7c
	if (ctx.cr6.eq) goto loc_82905D7C;
	// bl 0x823e19b0
	ctx.lr = 0x82905D7C;
	sub_823E19B0(ctx, base);
loc_82905D7C:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905da0
	if (ctx.cr0.eq) goto loc_82905DA0;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82905da0
	if (ctx.cr6.eq) goto loc_82905DA0;
	// bl 0x823e19b0
	ctx.lr = 0x82905D94;
	sub_823E19B0(ctx, base);
	// b 0x82905da0
	goto loc_82905DA0;
loc_82905D98:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82905DA0;
	sub_8289D980(ctx, base);
loc_82905DA0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82905DB0"))) PPC_WEAK_FUNC(sub_82905DB0);
PPC_FUNC_IMPL(__imp__sub_82905DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82905DB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82905eac
	if (!ctx.cr6.eq) goto loc_82905EAC;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x82905DE4;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905eac
	if (ctx.cr0.eq) goto loc_82905EAC;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82c0f6c0
	ctx.lr = 0x82905DF4;
	sub_82C0F6C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82905e60
	if (ctx.cr0.eq) goto loc_82905E60;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r29,3
	ctx.r29.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82905E10;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82905E20;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82905E28;
	sub_824992B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x82905E34;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829095b0
	ctx.lr = 0x82905E44;
	sub_829095B0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-6180
	ctx.r11.s64 = ctx.r11.s64 + -6180;
	// stb r10,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r10.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82905e64
	goto loc_82905E64;
loc_82905E60:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82905E64:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82904468
	ctx.lr = 0x82905E6C;
	sub_82904468(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x82905E74;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905e90
	if (ctx.cr0.eq) goto loc_82905E90;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82905e90
	if (ctx.cr6.eq) goto loc_82905E90;
	// bl 0x823e19b0
	ctx.lr = 0x82905E90;
	sub_823E19B0(ctx, base);
loc_82905E90:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905eb4
	if (ctx.cr0.eq) goto loc_82905EB4;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82905eb4
	if (ctx.cr6.eq) goto loc_82905EB4;
	// bl 0x823e19b0
	ctx.lr = 0x82905EA8;
	sub_823E19B0(ctx, base);
	// b 0x82905eb4
	goto loc_82905EB4;
loc_82905EAC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82905EB4;
	sub_8289D980(ctx, base);
loc_82905EB4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82905EC0"))) PPC_WEAK_FUNC(sub_82905EC0);
PPC_FUNC_IMPL(__imp__sub_82905EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82905EC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82905fbc
	if (!ctx.cr6.eq) goto loc_82905FBC;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x82905EF4;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905fbc
	if (ctx.cr0.eq) goto loc_82905FBC;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82c0f6c0
	ctx.lr = 0x82905F04;
	sub_82C0F6C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82905f70
	if (ctx.cr0.eq) goto loc_82905F70;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r29,3
	ctx.r29.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82905F20;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82905F30;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82905F38;
	sub_824992B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x82905F44;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829095b0
	ctx.lr = 0x82905F54;
	sub_829095B0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-6120
	ctx.r11.s64 = ctx.r11.s64 + -6120;
	// stb r10,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r10.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82905f74
	goto loc_82905F74;
loc_82905F70:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82905F74:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829044f0
	ctx.lr = 0x82905F7C;
	sub_829044F0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x82905F84;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905fa0
	if (ctx.cr0.eq) goto loc_82905FA0;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82905fa0
	if (ctx.cr6.eq) goto loc_82905FA0;
	// bl 0x823e19b0
	ctx.lr = 0x82905FA0;
	sub_823E19B0(ctx, base);
loc_82905FA0:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82905fc4
	if (ctx.cr0.eq) goto loc_82905FC4;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82905fc4
	if (ctx.cr6.eq) goto loc_82905FC4;
	// bl 0x823e19b0
	ctx.lr = 0x82905FB8;
	sub_823E19B0(ctx, base);
	// b 0x82905fc4
	goto loc_82905FC4;
loc_82905FBC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82905FC4;
	sub_8289D980(ctx, base);
loc_82905FC4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82905FD0"))) PPC_WEAK_FUNC(sub_82905FD0);
PPC_FUNC_IMPL(__imp__sub_82905FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82905FD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x829060cc
	if (!ctx.cr6.eq) goto loc_829060CC;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x82906004;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829060cc
	if (ctx.cr0.eq) goto loc_829060CC;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82c0f6c0
	ctx.lr = 0x82906014;
	sub_82C0F6C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82906080
	if (ctx.cr0.eq) goto loc_82906080;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r29,3
	ctx.r29.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82906030;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82906040;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82906048;
	sub_824992B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x82906054;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829095b0
	ctx.lr = 0x82906064;
	sub_829095B0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-6060
	ctx.r11.s64 = ctx.r11.s64 + -6060;
	// stb r10,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r10.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82906084
	goto loc_82906084;
loc_82906080:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82906084:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82904578
	ctx.lr = 0x8290608C;
	sub_82904578(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x82906094;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829060b0
	if (ctx.cr0.eq) goto loc_829060B0;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829060b0
	if (ctx.cr6.eq) goto loc_829060B0;
	// bl 0x823e19b0
	ctx.lr = 0x829060B0;
	sub_823E19B0(ctx, base);
loc_829060B0:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829060d4
	if (ctx.cr0.eq) goto loc_829060D4;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829060d4
	if (ctx.cr6.eq) goto loc_829060D4;
	// bl 0x823e19b0
	ctx.lr = 0x829060C8;
	sub_823E19B0(ctx, base);
	// b 0x829060d4
	goto loc_829060D4;
loc_829060CC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x829060D4;
	sub_8289D980(ctx, base);
loc_829060D4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829060E0"))) PPC_WEAK_FUNC(sub_829060E0);
PPC_FUNC_IMPL(__imp__sub_829060E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x829060E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x829061dc
	if (!ctx.cr6.eq) goto loc_829061DC;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x82906114;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829061dc
	if (ctx.cr0.eq) goto loc_829061DC;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82c0f6c0
	ctx.lr = 0x82906124;
	sub_82C0F6C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82906190
	if (ctx.cr0.eq) goto loc_82906190;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r29,3
	ctx.r29.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82906140;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82906150;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82906158;
	sub_824992B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x82906164;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82908298
	ctx.lr = 0x82906174;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-6000
	ctx.r11.s64 = ctx.r11.s64 + -6000;
	// stb r10,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r10.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82906194
	goto loc_82906194;
loc_82906190:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82906194:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82904600
	ctx.lr = 0x8290619C;
	sub_82904600(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x829061A4;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829061c0
	if (ctx.cr0.eq) goto loc_829061C0;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829061c0
	if (ctx.cr6.eq) goto loc_829061C0;
	// bl 0x823e19b0
	ctx.lr = 0x829061C0;
	sub_823E19B0(ctx, base);
loc_829061C0:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829061e4
	if (ctx.cr0.eq) goto loc_829061E4;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829061e4
	if (ctx.cr6.eq) goto loc_829061E4;
	// bl 0x823e19b0
	ctx.lr = 0x829061D8;
	sub_823E19B0(ctx, base);
	// b 0x829061e4
	goto loc_829061E4;
loc_829061DC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x829061E4;
	sub_8289D980(ctx, base);
loc_829061E4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829061F0"))) PPC_WEAK_FUNC(sub_829061F0);
PPC_FUNC_IMPL(__imp__sub_829061F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x829061F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x829062e4
	if (!ctx.cr6.eq) goto loc_829062E4;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x82906224;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829062e4
	if (ctx.cr0.eq) goto loc_829062E4;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82c0f6c0
	ctx.lr = 0x82906234;
	sub_82C0F6C0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82906298
	if (ctx.cr0.eq) goto loc_82906298;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r29,3
	ctx.r29.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82906250;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82906260;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82906268;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x82906274;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829095b0
	ctx.lr = 0x82906284;
	sub_829095B0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-5940
	ctx.r11.s64 = ctx.r11.s64 + -5940;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8290629c
	goto loc_8290629C;
loc_82906298:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8290629C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82904688
	ctx.lr = 0x829062A4;
	sub_82904688(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x829062AC;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829062c8
	if (ctx.cr0.eq) goto loc_829062C8;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829062c8
	if (ctx.cr6.eq) goto loc_829062C8;
	// bl 0x823e19b0
	ctx.lr = 0x829062C8;
	sub_823E19B0(ctx, base);
loc_829062C8:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829062ec
	if (ctx.cr0.eq) goto loc_829062EC;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829062ec
	if (ctx.cr6.eq) goto loc_829062EC;
	// bl 0x823e19b0
	ctx.lr = 0x829062E0;
	sub_823E19B0(ctx, base);
	// b 0x829062ec
	goto loc_829062EC;
loc_829062E4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x829062EC;
	sub_8289D980(ctx, base);
loc_829062EC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829062F8"))) PPC_WEAK_FUNC(sub_829062F8);
PPC_FUNC_IMPL(__imp__sub_829062F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82906300;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x829063f4
	if (!ctx.cr6.eq) goto loc_829063F4;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x8290632C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829063f4
	if (ctx.cr0.eq) goto loc_829063F4;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82c0f6c0
	ctx.lr = 0x8290633C;
	sub_82C0F6C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x829063a8
	if (ctx.cr0.eq) goto loc_829063A8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r29,3
	ctx.r29.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82906358;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82906368;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82906370;
	sub_824992B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x8290637C;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829095b0
	ctx.lr = 0x8290638C;
	sub_829095B0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-5880
	ctx.r11.s64 = ctx.r11.s64 + -5880;
	// stb r10,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r10.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x829063ac
	goto loc_829063AC;
loc_829063A8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829063AC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82904710
	ctx.lr = 0x829063B4;
	sub_82904710(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x829063BC;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829063d8
	if (ctx.cr0.eq) goto loc_829063D8;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829063d8
	if (ctx.cr6.eq) goto loc_829063D8;
	// bl 0x823e19b0
	ctx.lr = 0x829063D8;
	sub_823E19B0(ctx, base);
loc_829063D8:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829063fc
	if (ctx.cr0.eq) goto loc_829063FC;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829063fc
	if (ctx.cr6.eq) goto loc_829063FC;
	// bl 0x823e19b0
	ctx.lr = 0x829063F0;
	sub_823E19B0(ctx, base);
	// b 0x829063fc
	goto loc_829063FC;
loc_829063F4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x829063FC;
	sub_8289D980(ctx, base);
loc_829063FC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82906408"))) PPC_WEAK_FUNC(sub_82906408);
PPC_FUNC_IMPL(__imp__sub_82906408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82906410;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x829064f0
	if (!ctx.cr6.eq) goto loc_829064F0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x8290643C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829064f0
	if (ctx.cr0.eq) goto loc_829064F0;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82c0f6c0
	ctx.lr = 0x8290644C;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x829064a4
	if (ctx.cr0.eq) goto loc_829064A4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82906468;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82906478;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82906480;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x8290648C;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x828fc988
	ctx.lr = 0x8290649C;
	sub_828FC988(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829064a8
	goto loc_829064A8;
loc_829064A4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829064A8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82904798
	ctx.lr = 0x829064B0;
	sub_82904798(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x829064B8;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829064d4
	if (ctx.cr0.eq) goto loc_829064D4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829064d4
	if (ctx.cr6.eq) goto loc_829064D4;
	// bl 0x823e19b0
	ctx.lr = 0x829064D4;
	sub_823E19B0(ctx, base);
loc_829064D4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829064f8
	if (ctx.cr0.eq) goto loc_829064F8;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829064f8
	if (ctx.cr6.eq) goto loc_829064F8;
	// bl 0x823e19b0
	ctx.lr = 0x829064EC;
	sub_823E19B0(ctx, base);
	// b 0x829064f8
	goto loc_829064F8;
loc_829064F0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x829064F8;
	sub_8289D980(ctx, base);
loc_829064F8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82906508"))) PPC_WEAK_FUNC(sub_82906508);
PPC_FUNC_IMPL(__imp__sub_82906508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82906510;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82906604
	if (!ctx.cr6.eq) goto loc_82906604;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x8290653C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82906604
	if (ctx.cr0.eq) goto loc_82906604;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82c0f6c0
	ctx.lr = 0x8290654C;
	sub_82C0F6C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x829065b8
	if (ctx.cr0.eq) goto loc_829065B8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r29,3
	ctx.r29.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82906568;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82906578;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82906580;
	sub_824992B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x8290658C;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829095b0
	ctx.lr = 0x8290659C;
	sub_829095B0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-5820
	ctx.r11.s64 = ctx.r11.s64 + -5820;
	// stb r10,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r10.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x829065bc
	goto loc_829065BC;
loc_829065B8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829065BC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82904820
	ctx.lr = 0x829065C4;
	sub_82904820(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x829065CC;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829065e8
	if (ctx.cr0.eq) goto loc_829065E8;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829065e8
	if (ctx.cr6.eq) goto loc_829065E8;
	// bl 0x823e19b0
	ctx.lr = 0x829065E8;
	sub_823E19B0(ctx, base);
loc_829065E8:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290660c
	if (ctx.cr0.eq) goto loc_8290660C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290660c
	if (ctx.cr6.eq) goto loc_8290660C;
	// bl 0x823e19b0
	ctx.lr = 0x82906600;
	sub_823E19B0(ctx, base);
	// b 0x8290660c
	goto loc_8290660C;
loc_82906604:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x8290660C;
	sub_8289D980(ctx, base);
loc_8290660C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82906618"))) PPC_WEAK_FUNC(sub_82906618);
PPC_FUNC_IMPL(__imp__sub_82906618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82906620;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82906700
	if (!ctx.cr6.eq) goto loc_82906700;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x8290664C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82906700
	if (ctx.cr0.eq) goto loc_82906700;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82c0f6c0
	ctx.lr = 0x8290665C;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x829066b4
	if (ctx.cr0.eq) goto loc_829066B4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82906678;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82906688;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82906690;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x8290669C;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x828ff2c8
	ctx.lr = 0x829066AC;
	sub_828FF2C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829066b8
	goto loc_829066B8;
loc_829066B4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829066B8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829048a8
	ctx.lr = 0x829066C0;
	sub_829048A8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x829066C8;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829066e4
	if (ctx.cr0.eq) goto loc_829066E4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829066e4
	if (ctx.cr6.eq) goto loc_829066E4;
	// bl 0x823e19b0
	ctx.lr = 0x829066E4;
	sub_823E19B0(ctx, base);
loc_829066E4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82906708
	if (ctx.cr0.eq) goto loc_82906708;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82906708
	if (ctx.cr6.eq) goto loc_82906708;
	// bl 0x823e19b0
	ctx.lr = 0x829066FC;
	sub_823E19B0(ctx, base);
	// b 0x82906708
	goto loc_82906708;
loc_82906700:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82906708;
	sub_8289D980(ctx, base);
loc_82906708:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82906718"))) PPC_WEAK_FUNC(sub_82906718);
PPC_FUNC_IMPL(__imp__sub_82906718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82906720;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82906800
	if (!ctx.cr6.eq) goto loc_82906800;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x8290674C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82906800
	if (ctx.cr0.eq) goto loc_82906800;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82c0f6c0
	ctx.lr = 0x8290675C;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x829067b4
	if (ctx.cr0.eq) goto loc_829067B4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82906778;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82906788;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82906790;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x8290679C;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x828fb438
	ctx.lr = 0x829067AC;
	sub_828FB438(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829067b8
	goto loc_829067B8;
loc_829067B4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829067B8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82904930
	ctx.lr = 0x829067C0;
	sub_82904930(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x829067C8;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829067e4
	if (ctx.cr0.eq) goto loc_829067E4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829067e4
	if (ctx.cr6.eq) goto loc_829067E4;
	// bl 0x823e19b0
	ctx.lr = 0x829067E4;
	sub_823E19B0(ctx, base);
loc_829067E4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82906808
	if (ctx.cr0.eq) goto loc_82906808;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82906808
	if (ctx.cr6.eq) goto loc_82906808;
	// bl 0x823e19b0
	ctx.lr = 0x829067FC;
	sub_823E19B0(ctx, base);
	// b 0x82906808
	goto loc_82906808;
loc_82906800:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82906808;
	sub_8289D980(ctx, base);
loc_82906808:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82906818"))) PPC_WEAK_FUNC(sub_82906818);
PPC_FUNC_IMPL(__imp__sub_82906818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82906820;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82906914
	if (!ctx.cr6.eq) goto loc_82906914;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x8290684C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82906914
	if (ctx.cr0.eq) goto loc_82906914;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82c0f6c0
	ctx.lr = 0x8290685C;
	sub_82C0F6C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x829068c8
	if (ctx.cr0.eq) goto loc_829068C8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r29,3
	ctx.r29.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82906878;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82906888;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82906890;
	sub_824992B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x8290689C;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82908298
	ctx.lr = 0x829068AC;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-5700
	ctx.r11.s64 = ctx.r11.s64 + -5700;
	// stb r10,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r10.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x829068cc
	goto loc_829068CC;
loc_829068C8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829068CC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829049b8
	ctx.lr = 0x829068D4;
	sub_829049B8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x829068DC;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829068f8
	if (ctx.cr0.eq) goto loc_829068F8;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829068f8
	if (ctx.cr6.eq) goto loc_829068F8;
	// bl 0x823e19b0
	ctx.lr = 0x829068F8;
	sub_823E19B0(ctx, base);
loc_829068F8:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290691c
	if (ctx.cr0.eq) goto loc_8290691C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290691c
	if (ctx.cr6.eq) goto loc_8290691C;
	// bl 0x823e19b0
	ctx.lr = 0x82906910;
	sub_823E19B0(ctx, base);
	// b 0x8290691c
	goto loc_8290691C;
loc_82906914:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x8290691C;
	sub_8289D980(ctx, base);
loc_8290691C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82906928"))) PPC_WEAK_FUNC(sub_82906928);
PPC_FUNC_IMPL(__imp__sub_82906928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82906930;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x828fc1a0
	ctx.lr = 0x82906938;
	sub_828FC1A0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8247f018
	ctx.lr = 0x82906944;
	sub_8247F018(ctx, base);
	// bl 0x82577ad8
	ctx.lr = 0x82906948;
	sub_82577AD8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290695C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x829069f8
	goto loc_829069F8;
loc_82906968:
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x824afb20
	ctx.lr = 0x82906974;
	sub_824AFB20(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290698C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x829069e8
	if (ctx.cr0.eq) goto loc_829069E8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829069A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829069d0
	if (ctx.cr0.eq) goto loc_829069D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829069C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x829069d4
	if (!ctx.cr0.eq) goto loc_829069D4;
loc_829069D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_829069D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x824aca68
	ctx.lr = 0x829069E8;
	sub_824ACA68(ctx, base);
loc_829069E8:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82de7330
	ctx.lr = 0x829069F0;
	sub_82DE7330(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_829069F8:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82906968
	if (!ctx.cr6.eq) goto loc_82906968;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x828736e0
	ctx.lr = 0x82906A08;
	sub_828736E0(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x823fd208
	ctx.lr = 0x82906A10;
	sub_823FD208(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82906A18"))) PPC_WEAK_FUNC(sub_82906A18);
PPC_FUNC_IMPL(__imp__sub_82906A18) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,32164(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32164, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82906A28"))) PPC_WEAK_FUNC(sub_82906A28);
PPC_FUNC_IMPL(__imp__sub_82906A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82906A30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,16(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82906a58
	if (ctx.cr6.eq) goto loc_82906A58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aadfe0
	ctx.lr = 0x82906A50;
	sub_82AADFE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82906A58;
	sub_823FD208(ctx, base);
loc_82906A58:
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x82c0f6c0
	ctx.lr = 0x82906A60;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82906a80
	if (ctx.cr0.eq) goto loc_82906A80;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-2104
	ctx.r6.s64 = ctx.r11.s64 + -2104;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82aae178
	ctx.lr = 0x82906A7C;
	sub_82AAE178(ctx, base);
	// b 0x82906a84
	goto loc_82906A84;
loc_82906A80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82906A84:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82906A98"))) PPC_WEAK_FUNC(sub_82906A98);
PPC_FUNC_IMPL(__imp__sub_82906A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82906AA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82906a28
	ctx.lr = 0x82906ABC;
	sub_82906A28(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82906ad8
	if (!ctx.cr6.eq) goto loc_82906AD8;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,32768
	ctx.r3.u64 = ctx.r3.u64 | 32768;
	// bl 0x82c0f6c0
	ctx.lr = 0x82906AD4;
	sub_82C0F6C0(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_82906AD8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 8;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ab8088
	ctx.lr = 0x82906AFC;
	sub_82AB8088(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x82906b10
	if (!ctx.cr0.lt) goto loc_82906B10;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82aadb68
	ctx.lr = 0x82906B0C;
	sub_82AADB68(ctx, base);
	// b 0x82906b18
	goto loc_82906B18;
loc_82906B10:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
loc_82906B18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82906B20"))) PPC_WEAK_FUNC(sub_82906B20);
PPC_FUNC_IMPL(__imp__sub_82906B20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3340);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82906b3c
	if (ctx.cr6.gt) goto loc_82906B3C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82906B3C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82906B48"))) PPC_WEAK_FUNC(sub_82906B48);
PPC_FUNC_IMPL(__imp__sub_82906B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82e512a0
	ctx.lr = 0x82906B58;
	sub_82E512A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82906b7c
	if (ctx.cr0.eq) goto loc_82906B7C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// lfs f0,3648(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
loc_82906B7C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82906B90"))) PPC_WEAK_FUNC(sub_82906B90);
PPC_FUNC_IMPL(__imp__sub_82906B90) {
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
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e4eed8
	ctx.lr = 0x82906BB4;
	sub_82E4EED8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-2000
	ctx.r11.s64 = ctx.r11.s64 + -2000;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82906BE0"))) PPC_WEAK_FUNC(sub_82906BE0);
PPC_FUNC_IMPL(__imp__sub_82906BE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e4f380
	sub_82E4F380(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82906BE8"))) PPC_WEAK_FUNC(sub_82906BE8);
PPC_FUNC_IMPL(__imp__sub_82906BE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x825d5340
	sub_825D5340(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82906BF0"))) PPC_WEAK_FUNC(sub_82906BF0);
PPC_FUNC_IMPL(__imp__sub_82906BF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e4fc00
	sub_82E4FC00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82906BF8"))) PPC_WEAK_FUNC(sub_82906BF8);
PPC_FUNC_IMPL(__imp__sub_82906BF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e4fdd8
	sub_82E4FDD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82906C00"))) PPC_WEAK_FUNC(sub_82906C00);
PPC_FUNC_IMPL(__imp__sub_82906C00) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82906C20"))) PPC_WEAK_FUNC(sub_82906C20);
PPC_FUNC_IMPL(__imp__sub_82906C20) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82906C40"))) PPC_WEAK_FUNC(sub_82906C40);
PPC_FUNC_IMPL(__imp__sub_82906C40) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82906C60"))) PPC_WEAK_FUNC(sub_82906C60);
PPC_FUNC_IMPL(__imp__sub_82906C60) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82906C80"))) PPC_WEAK_FUNC(sub_82906C80);
PPC_FUNC_IMPL(__imp__sub_82906C80) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82906CA0"))) PPC_WEAK_FUNC(sub_82906CA0);
PPC_FUNC_IMPL(__imp__sub_82906CA0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82906CC0"))) PPC_WEAK_FUNC(sub_82906CC0);
PPC_FUNC_IMPL(__imp__sub_82906CC0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82906CE0"))) PPC_WEAK_FUNC(sub_82906CE0);
PPC_FUNC_IMPL(__imp__sub_82906CE0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82906D00"))) PPC_WEAK_FUNC(sub_82906D00);
PPC_FUNC_IMPL(__imp__sub_82906D00) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82906D28"))) PPC_WEAK_FUNC(sub_82906D28);
PPC_FUNC_IMPL(__imp__sub_82906D28) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82906D48"))) PPC_WEAK_FUNC(sub_82906D48);
PPC_FUNC_IMPL(__imp__sub_82906D48) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82906D68"))) PPC_WEAK_FUNC(sub_82906D68);
PPC_FUNC_IMPL(__imp__sub_82906D68) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82906D88"))) PPC_WEAK_FUNC(sub_82906D88);
PPC_FUNC_IMPL(__imp__sub_82906D88) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82906DA8"))) PPC_WEAK_FUNC(sub_82906DA8);
PPC_FUNC_IMPL(__imp__sub_82906DA8) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-25772
	ctx.r11.s64 = ctx.r11.s64 + -25772;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82906dd4
	if (ctx.cr0.eq) goto loc_82906DD4;
	// bl 0x823fd208
	ctx.lr = 0x82906DD4;
	sub_823FD208(ctx, base);
loc_82906DD4:
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

__attribute__((alias("__imp__sub_82906DF0"))) PPC_WEAK_FUNC(sub_82906DF0);
PPC_FUNC_IMPL(__imp__sub_82906DF0) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,32416
	ctx.r31.s64 = ctx.r11.s64 + 32416;
	// lwz r11,32428(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32428);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82906e28
	if (!ctx.cr0.eq) goto loc_82906E28;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32428(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32428, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82906E28;
	sub_8289D980(ctx, base);
loc_82906E28:
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

__attribute__((alias("__imp__sub_82906E40"))) PPC_WEAK_FUNC(sub_82906E40);
PPC_FUNC_IMPL(__imp__sub_82906E40) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,32432
	ctx.r31.s64 = ctx.r11.s64 + 32432;
	// lwz r11,32444(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32444);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82906e78
	if (!ctx.cr0.eq) goto loc_82906E78;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32444, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82906E78;
	sub_8289D980(ctx, base);
loc_82906E78:
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

__attribute__((alias("__imp__sub_82906E90"))) PPC_WEAK_FUNC(sub_82906E90);
PPC_FUNC_IMPL(__imp__sub_82906E90) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,32448
	ctx.r31.s64 = ctx.r11.s64 + 32448;
	// lwz r11,32460(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32460);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82906ec8
	if (!ctx.cr0.eq) goto loc_82906EC8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32460(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32460, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82906EC8;
	sub_8289D980(ctx, base);
loc_82906EC8:
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

__attribute__((alias("__imp__sub_82906EE0"))) PPC_WEAK_FUNC(sub_82906EE0);
PPC_FUNC_IMPL(__imp__sub_82906EE0) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,32464
	ctx.r31.s64 = ctx.r11.s64 + 32464;
	// lwz r11,32476(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32476);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82906f18
	if (!ctx.cr0.eq) goto loc_82906F18;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32476(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32476, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82906F18;
	sub_8289D980(ctx, base);
loc_82906F18:
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

__attribute__((alias("__imp__sub_82906F30"))) PPC_WEAK_FUNC(sub_82906F30);
PPC_FUNC_IMPL(__imp__sub_82906F30) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,32480
	ctx.r31.s64 = ctx.r11.s64 + 32480;
	// lwz r11,32492(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32492);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82906f68
	if (!ctx.cr0.eq) goto loc_82906F68;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32492(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32492, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82906F68;
	sub_8289D980(ctx, base);
loc_82906F68:
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

__attribute__((alias("__imp__sub_82906F80"))) PPC_WEAK_FUNC(sub_82906F80);
PPC_FUNC_IMPL(__imp__sub_82906F80) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,32496
	ctx.r31.s64 = ctx.r11.s64 + 32496;
	// lwz r11,32508(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32508);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82906fb8
	if (!ctx.cr0.eq) goto loc_82906FB8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32508, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82906FB8;
	sub_8289D980(ctx, base);
loc_82906FB8:
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

__attribute__((alias("__imp__sub_82906FD0"))) PPC_WEAK_FUNC(sub_82906FD0);
PPC_FUNC_IMPL(__imp__sub_82906FD0) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,32512
	ctx.r31.s64 = ctx.r11.s64 + 32512;
	// lwz r11,32524(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32524);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82907008
	if (!ctx.cr0.eq) goto loc_82907008;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32524(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32524, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82907008;
	sub_8289D980(ctx, base);
loc_82907008:
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

__attribute__((alias("__imp__sub_82907020"))) PPC_WEAK_FUNC(sub_82907020);
PPC_FUNC_IMPL(__imp__sub_82907020) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,32528
	ctx.r31.s64 = ctx.r11.s64 + 32528;
	// lwz r11,32540(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32540);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82907058
	if (!ctx.cr0.eq) goto loc_82907058;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32540(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32540, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82907058;
	sub_8289D980(ctx, base);
loc_82907058:
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

__attribute__((alias("__imp__sub_82907070"))) PPC_WEAK_FUNC(sub_82907070);
PPC_FUNC_IMPL(__imp__sub_82907070) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,32544
	ctx.r31.s64 = ctx.r11.s64 + 32544;
	// lwz r11,32556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32556);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829070a8
	if (!ctx.cr0.eq) goto loc_829070A8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32556(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32556, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x829070A8;
	sub_8289D980(ctx, base);
loc_829070A8:
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

__attribute__((alias("__imp__sub_829070C0"))) PPC_WEAK_FUNC(sub_829070C0);
PPC_FUNC_IMPL(__imp__sub_829070C0) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,32560
	ctx.r31.s64 = ctx.r11.s64 + 32560;
	// lwz r11,32572(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32572);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829070f8
	if (!ctx.cr0.eq) goto loc_829070F8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32572(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32572, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x829070F8;
	sub_8289D980(ctx, base);
loc_829070F8:
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

__attribute__((alias("__imp__sub_82907110"))) PPC_WEAK_FUNC(sub_82907110);
PPC_FUNC_IMPL(__imp__sub_82907110) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,32576
	ctx.r31.s64 = ctx.r11.s64 + 32576;
	// lwz r11,32588(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32588);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82907148
	if (!ctx.cr0.eq) goto loc_82907148;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32588(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32588, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82907148;
	sub_8289D980(ctx, base);
loc_82907148:
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

__attribute__((alias("__imp__sub_82907160"))) PPC_WEAK_FUNC(sub_82907160);
PPC_FUNC_IMPL(__imp__sub_82907160) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,32592
	ctx.r31.s64 = ctx.r11.s64 + 32592;
	// lwz r11,32604(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32604);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82907198
	if (!ctx.cr0.eq) goto loc_82907198;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32604(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32604, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82907198;
	sub_8289D980(ctx, base);
loc_82907198:
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

__attribute__((alias("__imp__sub_829071B0"))) PPC_WEAK_FUNC(sub_829071B0);
PPC_FUNC_IMPL(__imp__sub_829071B0) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,32608
	ctx.r31.s64 = ctx.r11.s64 + 32608;
	// lwz r11,32620(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32620);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829071e8
	if (!ctx.cr0.eq) goto loc_829071E8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32620(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32620, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x829071E8;
	sub_8289D980(ctx, base);
loc_829071E8:
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

__attribute__((alias("__imp__sub_82907200"))) PPC_WEAK_FUNC(sub_82907200);
PPC_FUNC_IMPL(__imp__sub_82907200) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,32624
	ctx.r31.s64 = ctx.r11.s64 + 32624;
	// lwz r11,32636(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32636);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82907238
	if (!ctx.cr0.eq) goto loc_82907238;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32636(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32636, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82907238;
	sub_8289D980(ctx, base);
loc_82907238:
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

__attribute__((alias("__imp__sub_82907250"))) PPC_WEAK_FUNC(sub_82907250);
PPC_FUNC_IMPL(__imp__sub_82907250) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,32640
	ctx.r31.s64 = ctx.r11.s64 + 32640;
	// lwz r11,32652(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32652);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82907288
	if (!ctx.cr0.eq) goto loc_82907288;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32652(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32652, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82907288;
	sub_8289D980(ctx, base);
loc_82907288:
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

__attribute__((alias("__imp__sub_829072A0"))) PPC_WEAK_FUNC(sub_829072A0);
PPC_FUNC_IMPL(__imp__sub_829072A0) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,32656
	ctx.r31.s64 = ctx.r11.s64 + 32656;
	// lwz r11,32668(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32668);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829072d8
	if (!ctx.cr0.eq) goto loc_829072D8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32668(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32668, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x829072D8;
	sub_8289D980(ctx, base);
loc_829072D8:
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

__attribute__((alias("__imp__sub_829072F0"))) PPC_WEAK_FUNC(sub_829072F0);
PPC_FUNC_IMPL(__imp__sub_829072F0) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,32672
	ctx.r31.s64 = ctx.r11.s64 + 32672;
	// lwz r11,32684(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32684);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82907328
	if (!ctx.cr0.eq) goto loc_82907328;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32684(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32684, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82907328;
	sub_8289D980(ctx, base);
loc_82907328:
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

__attribute__((alias("__imp__sub_82907340"))) PPC_WEAK_FUNC(sub_82907340);
PPC_FUNC_IMPL(__imp__sub_82907340) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,32688
	ctx.r31.s64 = ctx.r11.s64 + 32688;
	// lwz r11,32700(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32700);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82907378
	if (!ctx.cr0.eq) goto loc_82907378;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32700(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32700, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82907378;
	sub_8289D980(ctx, base);
loc_82907378:
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

__attribute__((alias("__imp__sub_82907390"))) PPC_WEAK_FUNC(sub_82907390);
PPC_FUNC_IMPL(__imp__sub_82907390) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,32704
	ctx.r31.s64 = ctx.r11.s64 + 32704;
	// lwz r11,32716(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32716);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829073c8
	if (!ctx.cr0.eq) goto loc_829073C8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32716(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32716, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x829073C8;
	sub_8289D980(ctx, base);
loc_829073C8:
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

__attribute__((alias("__imp__sub_829073E0"))) PPC_WEAK_FUNC(sub_829073E0);
PPC_FUNC_IMPL(__imp__sub_829073E0) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,32720
	ctx.r31.s64 = ctx.r11.s64 + 32720;
	// lwz r11,32732(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32732);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82907418
	if (!ctx.cr0.eq) goto loc_82907418;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32732(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32732, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82907418;
	sub_8289D980(ctx, base);
loc_82907418:
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

__attribute__((alias("__imp__sub_82907430"))) PPC_WEAK_FUNC(sub_82907430);
PPC_FUNC_IMPL(__imp__sub_82907430) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,32736
	ctx.r31.s64 = ctx.r11.s64 + 32736;
	// lwz r11,32748(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32748);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82907468
	if (!ctx.cr0.eq) goto loc_82907468;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32748(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32748, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82907468;
	sub_8289D980(ctx, base);
loc_82907468:
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

__attribute__((alias("__imp__sub_82907480"))) PPC_WEAK_FUNC(sub_82907480);
PPC_FUNC_IMPL(__imp__sub_82907480) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,32752
	ctx.r31.s64 = ctx.r11.s64 + 32752;
	// lwz r11,32764(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32764);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829074b8
	if (!ctx.cr0.eq) goto loc_829074B8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32764(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32764, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x829074B8;
	sub_8289D980(ctx, base);
loc_829074B8:
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

__attribute__((alias("__imp__sub_829074D0"))) PPC_WEAK_FUNC(sub_829074D0);
PPC_FUNC_IMPL(__imp__sub_829074D0) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-32768
	ctx.r31.s64 = ctx.r11.s64 + -32768;
	// lwz r11,-32756(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32756);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82907508
	if (!ctx.cr0.eq) goto loc_82907508;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-32756(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32756, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82907508;
	sub_8289D980(ctx, base);
loc_82907508:
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

__attribute__((alias("__imp__sub_82907520"))) PPC_WEAK_FUNC(sub_82907520);
PPC_FUNC_IMPL(__imp__sub_82907520) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-32752
	ctx.r31.s64 = ctx.r11.s64 + -32752;
	// lwz r11,-32740(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32740);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82907558
	if (!ctx.cr0.eq) goto loc_82907558;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-32740(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32740, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82907558;
	sub_8289D980(ctx, base);
loc_82907558:
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

__attribute__((alias("__imp__sub_82907570"))) PPC_WEAK_FUNC(sub_82907570);
PPC_FUNC_IMPL(__imp__sub_82907570) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-32736
	ctx.r31.s64 = ctx.r11.s64 + -32736;
	// lwz r11,-32724(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32724);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829075a8
	if (!ctx.cr0.eq) goto loc_829075A8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-32724(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32724, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x829075A8;
	sub_8289D980(ctx, base);
loc_829075A8:
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

__attribute__((alias("__imp__sub_829075C0"))) PPC_WEAK_FUNC(sub_829075C0);
PPC_FUNC_IMPL(__imp__sub_829075C0) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-32720
	ctx.r31.s64 = ctx.r11.s64 + -32720;
	// lwz r11,-32708(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32708);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829075f8
	if (!ctx.cr0.eq) goto loc_829075F8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-32708(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32708, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x829075F8;
	sub_8289D980(ctx, base);
loc_829075F8:
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

__attribute__((alias("__imp__sub_82907610"))) PPC_WEAK_FUNC(sub_82907610);
PPC_FUNC_IMPL(__imp__sub_82907610) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-32704
	ctx.r31.s64 = ctx.r11.s64 + -32704;
	// lwz r11,-32692(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32692);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82907648
	if (!ctx.cr0.eq) goto loc_82907648;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-32692(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32692, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82907648;
	sub_8289D980(ctx, base);
loc_82907648:
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

__attribute__((alias("__imp__sub_82907660"))) PPC_WEAK_FUNC(sub_82907660);
PPC_FUNC_IMPL(__imp__sub_82907660) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-32688
	ctx.r31.s64 = ctx.r11.s64 + -32688;
	// lwz r11,-32676(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32676);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82907698
	if (!ctx.cr0.eq) goto loc_82907698;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-32676(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32676, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82907698;
	sub_8289D980(ctx, base);
loc_82907698:
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

__attribute__((alias("__imp__sub_829076B0"))) PPC_WEAK_FUNC(sub_829076B0);
PPC_FUNC_IMPL(__imp__sub_829076B0) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-32672
	ctx.r31.s64 = ctx.r11.s64 + -32672;
	// lwz r11,-32660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32660);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829076e8
	if (!ctx.cr0.eq) goto loc_829076E8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-32660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32660, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x829076E8;
	sub_8289D980(ctx, base);
loc_829076E8:
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

__attribute__((alias("__imp__sub_82907700"))) PPC_WEAK_FUNC(sub_82907700);
PPC_FUNC_IMPL(__imp__sub_82907700) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-32656
	ctx.r31.s64 = ctx.r11.s64 + -32656;
	// lwz r11,-32644(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32644);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82907738
	if (!ctx.cr0.eq) goto loc_82907738;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-32644(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32644, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82907738;
	sub_8289D980(ctx, base);
loc_82907738:
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

__attribute__((alias("__imp__sub_82907750"))) PPC_WEAK_FUNC(sub_82907750);
PPC_FUNC_IMPL(__imp__sub_82907750) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-32640
	ctx.r31.s64 = ctx.r11.s64 + -32640;
	// lwz r11,-32628(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32628);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82907788
	if (!ctx.cr0.eq) goto loc_82907788;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-32628(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32628, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82907788;
	sub_8289D980(ctx, base);
loc_82907788:
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

__attribute__((alias("__imp__sub_829077A0"))) PPC_WEAK_FUNC(sub_829077A0);
PPC_FUNC_IMPL(__imp__sub_829077A0) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-32624
	ctx.r31.s64 = ctx.r11.s64 + -32624;
	// lwz r11,-32612(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32612);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829077d8
	if (!ctx.cr0.eq) goto loc_829077D8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-32612(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32612, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x829077D8;
	sub_8289D980(ctx, base);
loc_829077D8:
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

__attribute__((alias("__imp__sub_829077F0"))) PPC_WEAK_FUNC(sub_829077F0);
PPC_FUNC_IMPL(__imp__sub_829077F0) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-32608
	ctx.r31.s64 = ctx.r11.s64 + -32608;
	// lwz r11,-32596(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32596);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82907828
	if (!ctx.cr0.eq) goto loc_82907828;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-32596(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32596, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82907828;
	sub_8289D980(ctx, base);
loc_82907828:
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

__attribute__((alias("__imp__sub_82907840"))) PPC_WEAK_FUNC(sub_82907840);
PPC_FUNC_IMPL(__imp__sub_82907840) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-32592
	ctx.r31.s64 = ctx.r11.s64 + -32592;
	// lwz r11,-32580(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32580);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82907878
	if (!ctx.cr0.eq) goto loc_82907878;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-32580(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32580, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82907878;
	sub_8289D980(ctx, base);
loc_82907878:
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

__attribute__((alias("__imp__sub_82907890"))) PPC_WEAK_FUNC(sub_82907890);
PPC_FUNC_IMPL(__imp__sub_82907890) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-32576
	ctx.r31.s64 = ctx.r11.s64 + -32576;
	// lwz r11,-32564(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32564);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829078c8
	if (!ctx.cr0.eq) goto loc_829078C8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-32564(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32564, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x829078C8;
	sub_8289D980(ctx, base);
loc_829078C8:
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

__attribute__((alias("__imp__sub_829078E0"))) PPC_WEAK_FUNC(sub_829078E0);
PPC_FUNC_IMPL(__imp__sub_829078E0) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-32560
	ctx.r31.s64 = ctx.r11.s64 + -32560;
	// lwz r11,-32548(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32548);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82907918
	if (!ctx.cr0.eq) goto loc_82907918;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-32548(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32548, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82907918;
	sub_8289D980(ctx, base);
loc_82907918:
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

__attribute__((alias("__imp__sub_82907930"))) PPC_WEAK_FUNC(sub_82907930);
PPC_FUNC_IMPL(__imp__sub_82907930) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-32544
	ctx.r31.s64 = ctx.r11.s64 + -32544;
	// lwz r11,-32532(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32532);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82907968
	if (!ctx.cr0.eq) goto loc_82907968;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-32532(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32532, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82907968;
	sub_8289D980(ctx, base);
loc_82907968:
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

__attribute__((alias("__imp__sub_82907980"))) PPC_WEAK_FUNC(sub_82907980);
PPC_FUNC_IMPL(__imp__sub_82907980) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-32528
	ctx.r31.s64 = ctx.r11.s64 + -32528;
	// lwz r11,-32516(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32516);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829079b8
	if (!ctx.cr0.eq) goto loc_829079B8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-32516(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32516, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x829079B8;
	sub_8289D980(ctx, base);
loc_829079B8:
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

__attribute__((alias("__imp__sub_829079D0"))) PPC_WEAK_FUNC(sub_829079D0);
PPC_FUNC_IMPL(__imp__sub_829079D0) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-32512
	ctx.r31.s64 = ctx.r11.s64 + -32512;
	// lwz r11,-32500(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32500);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82907a08
	if (!ctx.cr0.eq) goto loc_82907A08;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-32500(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32500, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82907A08;
	sub_8289D980(ctx, base);
loc_82907A08:
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

__attribute__((alias("__imp__sub_82907A20"))) PPC_WEAK_FUNC(sub_82907A20);
PPC_FUNC_IMPL(__imp__sub_82907A20) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-32496
	ctx.r31.s64 = ctx.r11.s64 + -32496;
	// lwz r11,-32484(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32484);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82907a58
	if (!ctx.cr0.eq) goto loc_82907A58;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-32484(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32484, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82907A58;
	sub_8289D980(ctx, base);
loc_82907A58:
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

__attribute__((alias("__imp__sub_82907A70"))) PPC_WEAK_FUNC(sub_82907A70);
PPC_FUNC_IMPL(__imp__sub_82907A70) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-32480
	ctx.r31.s64 = ctx.r11.s64 + -32480;
	// lwz r11,-32468(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32468);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82907aa8
	if (!ctx.cr0.eq) goto loc_82907AA8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-32468(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32468, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82907AA8;
	sub_8289D980(ctx, base);
loc_82907AA8:
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

__attribute__((alias("__imp__sub_82907AC0"))) PPC_WEAK_FUNC(sub_82907AC0);
PPC_FUNC_IMPL(__imp__sub_82907AC0) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-32464
	ctx.r31.s64 = ctx.r11.s64 + -32464;
	// lwz r11,-32452(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32452);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82907af8
	if (!ctx.cr0.eq) goto loc_82907AF8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-32452(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32452, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82907AF8;
	sub_8289D980(ctx, base);
loc_82907AF8:
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

__attribute__((alias("__imp__sub_82907B10"))) PPC_WEAK_FUNC(sub_82907B10);
PPC_FUNC_IMPL(__imp__sub_82907B10) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-32448
	ctx.r31.s64 = ctx.r11.s64 + -32448;
	// lwz r11,-32436(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32436);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82907b48
	if (!ctx.cr0.eq) goto loc_82907B48;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-32436(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32436, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82907B48;
	sub_8289D980(ctx, base);
loc_82907B48:
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

__attribute__((alias("__imp__sub_82907B60"))) PPC_WEAK_FUNC(sub_82907B60);
PPC_FUNC_IMPL(__imp__sub_82907B60) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-32432
	ctx.r31.s64 = ctx.r11.s64 + -32432;
	// lwz r11,-32420(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32420);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82907b98
	if (!ctx.cr0.eq) goto loc_82907B98;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-32420(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32420, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82907B98;
	sub_8289D980(ctx, base);
loc_82907B98:
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

__attribute__((alias("__imp__sub_82907BB0"))) PPC_WEAK_FUNC(sub_82907BB0);
PPC_FUNC_IMPL(__imp__sub_82907BB0) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-32416
	ctx.r31.s64 = ctx.r11.s64 + -32416;
	// lwz r11,-32404(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32404);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82907be8
	if (!ctx.cr0.eq) goto loc_82907BE8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-32404(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32404, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82907BE8;
	sub_8289D980(ctx, base);
loc_82907BE8:
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

__attribute__((alias("__imp__sub_82907C00"))) PPC_WEAK_FUNC(sub_82907C00);
PPC_FUNC_IMPL(__imp__sub_82907C00) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-32400
	ctx.r31.s64 = ctx.r11.s64 + -32400;
	// lwz r11,-32388(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32388);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82907c38
	if (!ctx.cr0.eq) goto loc_82907C38;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-32388(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32388, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82907C38;
	sub_8289D980(ctx, base);
loc_82907C38:
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

__attribute__((alias("__imp__sub_82907C50"))) PPC_WEAK_FUNC(sub_82907C50);
PPC_FUNC_IMPL(__imp__sub_82907C50) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-32384
	ctx.r31.s64 = ctx.r11.s64 + -32384;
	// lwz r11,-32372(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32372);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82907c88
	if (!ctx.cr0.eq) goto loc_82907C88;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-32372(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32372, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82907C88;
	sub_8289D980(ctx, base);
loc_82907C88:
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

__attribute__((alias("__imp__sub_82907CA0"))) PPC_WEAK_FUNC(sub_82907CA0);
PPC_FUNC_IMPL(__imp__sub_82907CA0) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-32368
	ctx.r31.s64 = ctx.r11.s64 + -32368;
	// lwz r11,-32356(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32356);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82907cd8
	if (!ctx.cr0.eq) goto loc_82907CD8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-32356(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32356, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82907CD8;
	sub_8289D980(ctx, base);
loc_82907CD8:
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

__attribute__((alias("__imp__sub_82907CF0"))) PPC_WEAK_FUNC(sub_82907CF0);
PPC_FUNC_IMPL(__imp__sub_82907CF0) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-32352
	ctx.r31.s64 = ctx.r11.s64 + -32352;
	// lwz r11,-32340(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32340);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82907d28
	if (!ctx.cr0.eq) goto loc_82907D28;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-32340(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32340, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82907D28;
	sub_8289D980(ctx, base);
loc_82907D28:
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

__attribute__((alias("__imp__sub_82907D40"))) PPC_WEAK_FUNC(sub_82907D40);
PPC_FUNC_IMPL(__imp__sub_82907D40) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-32336
	ctx.r31.s64 = ctx.r11.s64 + -32336;
	// lwz r11,-32324(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32324);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82907d78
	if (!ctx.cr0.eq) goto loc_82907D78;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-32324(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32324, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82907D78;
	sub_8289D980(ctx, base);
loc_82907D78:
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

__attribute__((alias("__imp__sub_82907D90"))) PPC_WEAK_FUNC(sub_82907D90);
PPC_FUNC_IMPL(__imp__sub_82907D90) {
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
	// bl 0x82e4de08
	ctx.lr = 0x82907DB0;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1832
	ctx.r11.s64 = ctx.r11.s64 + -1832;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82907DE0"))) PPC_WEAK_FUNC(sub_82907DE0);
PPC_FUNC_IMPL(__imp__sub_82907DE0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1832
	ctx.r11.s64 = ctx.r11.s64 + -1832;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x82907E04;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82907e2c
	if (ctx.cr0.eq) goto loc_82907E2C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82907e2c
	if (ctx.cr6.eq) goto loc_82907E2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82907E2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82907E2C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
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

__attribute__((alias("__imp__sub_82907E50"))) PPC_WEAK_FUNC(sub_82907E50);
PPC_FUNC_IMPL(__imp__sub_82907E50) {
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
	// bl 0x82e4de08
	ctx.lr = 0x82907E70;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1812
	ctx.r11.s64 = ctx.r11.s64 + -1812;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82907EA0"))) PPC_WEAK_FUNC(sub_82907EA0);
PPC_FUNC_IMPL(__imp__sub_82907EA0) {
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
	// bl 0x82907de0
	ctx.lr = 0x82907EC0;
	sub_82907DE0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82907ed0
	if (ctx.cr0.eq) goto loc_82907ED0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82907ED0;
	sub_823FD208(ctx, base);
loc_82907ED0:
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

__attribute__((alias("__imp__sub_82907EF0"))) PPC_WEAK_FUNC(sub_82907EF0);
PPC_FUNC_IMPL(__imp__sub_82907EF0) {
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
	// bl 0x82e53a38
	ctx.lr = 0x82907F10;
	sub_82E53A38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c01030
	ctx.lr = 0x82907F18;
	sub_82C01030(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r5,r11,11984
	ctx.r5.s64 = ctx.r11.s64 + 11984;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82907F34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c01030
	ctx.lr = 0x82907F3C;
	sub_82C01030(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r31,33
	ctx.r4.s64 = ctx.r31.s64 + 33;
	// addi r5,r11,-1740
	ctx.r5.s64 = ctx.r11.s64 + -1740;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82907F58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c01030
	ctx.lr = 0x82907F60;
	sub_82C01030(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r31,34
	ctx.r4.s64 = ctx.r31.s64 + 34;
	// addi r5,r11,-1756
	ctx.r5.s64 = ctx.r11.s64 + -1756;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82907F7C;
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

__attribute__((alias("__imp__sub_82907F98"))) PPC_WEAK_FUNC(sub_82907F98);
PPC_FUNC_IMPL(__imp__sub_82907F98) {
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
	// bl 0x82e53a38
	ctx.lr = 0x82907FB8;
	sub_82E53A38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c01030
	ctx.lr = 0x82907FC0;
	sub_82C01030(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// addi r5,r11,12128
	ctx.r5.s64 = ctx.r11.s64 + 12128;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82907FDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c01030
	ctx.lr = 0x82907FE4;
	sub_82C01030(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// addi r5,r11,-1724
	ctx.r5.s64 = ctx.r11.s64 + -1724;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82908000;
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

__attribute__((alias("__imp__sub_82908018"))) PPC_WEAK_FUNC(sub_82908018);
PPC_FUNC_IMPL(__imp__sub_82908018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82908020;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830b2320
	ctx.lr = 0x82908040;
	sub_830B2320(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r11,-30880(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30880);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bctrl 
	ctx.lr = 0x82908070;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82908090
	if (!ctx.cr6.eq) goto loc_82908090;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82908094
	if (ctx.cr6.eq) goto loc_82908094;
loc_82908090:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82908094:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829080b8
	if (ctx.cr0.eq) goto loc_829080B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c7968
	ctx.lr = 0x829080A4;
	sub_828C7968(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x829080b8
	if (!ctx.cr0.eq) goto loc_829080B8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e51010
	ctx.lr = 0x829080B8;
	sub_82E51010(ctx, base);
loc_829080B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829080C0"))) PPC_WEAK_FUNC(sub_829080C0);
PPC_FUNC_IMPL(__imp__sub_829080C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x829080C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82e53a38
	ctx.lr = 0x829080D8;
	sub_82E53A38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c01030
	ctx.lr = 0x829080E0;
	sub_82C01030(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r30,128
	ctx.r4.s64 = ctx.r30.s64 + 128;
	// addi r5,r11,-1696
	ctx.r5.s64 = ctx.r11.s64 + -1696;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829080FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c01030
	ctx.lr = 0x82908104;
	sub_82C01030(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82908118;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829081c0
	if (ctx.cr0.eq) goto loc_829081C0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r27,r11,-1708
	ctx.r27.s64 = ctx.r11.s64 + -1708;
loc_82908128:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c01030
	ctx.lr = 0x82908130;
	sub_82C01030(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290814C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a7f710
	ctx.lr = 0x82908158;
	sub_82A7F710(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82908184
	if (!ctx.cr0.eq) goto loc_82908184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,64(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r29,r30,64
	ctx.r29.s64 = ctx.r30.s64 + 64;
	// bl 0x82c01030
	ctx.lr = 0x82908170;
	sub_82C01030(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82908184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82908184:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c01030
	ctx.lr = 0x8290818C;
	sub_82C01030(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290819C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c01030
	ctx.lr = 0x829081A4;
	sub_82C01030(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829081B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82908128
	if (!ctx.cr0.eq) goto loc_82908128;
loc_829081C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829081C8"))) PPC_WEAK_FUNC(sub_829081C8);
PPC_FUNC_IMPL(__imp__sub_829081C8) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x830b2320
	ctx.lr = 0x829081EC;
	sub_830B2320(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82e512a0
	ctx.lr = 0x829081F8;
	sub_82E512A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82908218"))) PPC_WEAK_FUNC(sub_82908218);
PPC_FUNC_IMPL(__imp__sub_82908218) {
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
	// bl 0x82e53a38
	ctx.lr = 0x82908238;
	sub_82E53A38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c01030
	ctx.lr = 0x82908240;
	sub_82C01030(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// addi r5,r11,-1672
	ctx.r5.s64 = ctx.r11.s64 + -1672;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290825C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c01030
	ctx.lr = 0x82908264;
	sub_82C01030(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r31,93
	ctx.r4.s64 = ctx.r31.s64 + 93;
	// addi r5,r11,-1688
	ctx.r5.s64 = ctx.r11.s64 + -1688;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82908280;
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

__attribute__((alias("__imp__sub_82908298"))) PPC_WEAK_FUNC(sub_82908298);
PPC_FUNC_IMPL(__imp__sub_82908298) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82e50df8
	ctx.lr = 0x829082B8;
	sub_82E50DF8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1648
	ctx.r11.s64 = ctx.r11.s64 + -1648;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_829082E8"))) PPC_WEAK_FUNC(sub_829082E8);
PPC_FUNC_IMPL(__imp__sub_829082E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-2060
	ctx.r11.s64 = ctx.r11.s64 + -2060;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82e50e28
	sub_82E50E28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829082F8"))) PPC_WEAK_FUNC(sub_829082F8);
PPC_FUNC_IMPL(__imp__sub_829082F8) {
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
	// bl 0x82906b90
	ctx.lr = 0x82908310;
	sub_82906B90(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1588
	ctx.r11.s64 = ctx.r11.s64 + -1588;
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

__attribute__((alias("__imp__sub_82908338"))) PPC_WEAK_FUNC(sub_82908338);
PPC_FUNC_IMPL(__imp__sub_82908338) {
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
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// stw r11,32160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32160, ctx.r11.u32);
	// bl 0x82e4fc00
	ctx.lr = 0x82908358;
	sub_82E4FC00(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32160, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82908378"))) PPC_WEAK_FUNC(sub_82908378);
PPC_FUNC_IMPL(__imp__sub_82908378) {
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
	// bl 0x82908298
	ctx.lr = 0x82908390;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,-1452
	ctx.r11.s64 = ctx.r11.s64 + -1452;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r5,r10,-31960
	ctx.r5.s64 = ctx.r10.s64 + -31960;
	// bl 0x82e50ea8
	ctx.lr = 0x829083B0;
	sub_82E50EA8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// addi r5,r11,-1480
	ctx.r5.s64 = ctx.r11.s64 + -1480;
	// bl 0x82e50ea8
	ctx.lr = 0x829083C4;
	sub_82E50EA8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r5,r11,-1500
	ctx.r5.s64 = ctx.r11.s64 + -1500;
	// bl 0x82e50ea8
	ctx.lr = 0x829083D8;
	sub_82E50EA8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// addi r5,r11,-1528
	ctx.r5.s64 = ctx.r11.s64 + -1528;
	// bl 0x82e50ea8
	ctx.lr = 0x829083EC;
	sub_82E50EA8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r5,r11,-1544
	ctx.r5.s64 = ctx.r11.s64 + -1544;
	// bl 0x82e50ea8
	ctx.lr = 0x82908400;
	sub_82E50EA8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// addi r5,r11,-1552
	ctx.r5.s64 = ctx.r11.s64 + -1552;
	// bl 0x82e50ea8
	ctx.lr = 0x82908414;
	sub_82E50EA8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// addi r5,r11,-1568
	ctx.r5.s64 = ctx.r11.s64 + -1568;
	// bl 0x82e50ea8
	ctx.lr = 0x82908428;
	sub_82E50EA8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// addi r5,r11,-10104
	ctx.r5.s64 = ctx.r11.s64 + -10104;
	// bl 0x82e50ea8
	ctx.lr = 0x8290843C;
	sub_82E50EA8(ctx, base);
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

__attribute__((alias("__imp__sub_82908458"))) PPC_WEAK_FUNC(sub_82908458);
PPC_FUNC_IMPL(__imp__sub_82908458) {
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
	// bl 0x82908298
	ctx.lr = 0x82908470;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-1376
	ctx.r11.s64 = ctx.r11.s64 + -1376;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r5,r10,17944
	ctx.r5.s64 = ctx.r10.s64 + 17944;
	// bl 0x82e50ea8
	ctx.lr = 0x82908490;
	sub_82E50EA8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// addi r5,r11,-1396
	ctx.r5.s64 = ctx.r11.s64 + -1396;
	// bl 0x82e50ea8
	ctx.lr = 0x829084A4;
	sub_82E50EA8(ctx, base);
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

__attribute__((alias("__imp__sub_829084C0"))) PPC_WEAK_FUNC(sub_829084C0);
PPC_FUNC_IMPL(__imp__sub_829084C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x829084C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830b2320
	ctx.lr = 0x829084E8;
	sub_830B2320(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82629a38
	ctx.lr = 0x829084F0;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82908528
	if (ctx.cr0.eq) goto loc_82908528;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r11,32164(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 32164);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82908520
	if (ctx.cr0.eq) goto loc_82908520;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// bl 0x82e51010
	ctx.lr = 0x82908514;
	sub_82E51010(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,32164(r29)
	PPC_STORE_U8(ctx.r29.u32 + 32164, ctx.r11.u8);
	// b 0x82908528
	goto loc_82908528;
loc_82908520:
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// bl 0x82e51010
	ctx.lr = 0x82908528;
	sub_82E51010(ctx, base);
loc_82908528:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82908530"))) PPC_WEAK_FUNC(sub_82908530);
PPC_FUNC_IMPL(__imp__sub_82908530) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-2108
	ctx.r11.s64 = ctx.r11.s64 + -2108;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x823fd208
	ctx.lr = 0x82908558;
	sub_823FD208(ctx, base);
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82908574
	if (ctx.cr6.eq) goto loc_82908574;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aadfe0
	ctx.lr = 0x8290856C;
	sub_82AADFE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82908574;
	sub_823FD208(ctx, base);
loc_82908574:
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

__attribute__((alias("__imp__sub_82908588"))) PPC_WEAK_FUNC(sub_82908588);
PPC_FUNC_IMPL(__imp__sub_82908588) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lbz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1316
	ctx.r11.s64 = ctx.r11.s64 + -1316;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bne 0x829085c8
	if (!ctx.cr0.eq) goto loc_829085C8;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829085c8
	if (ctx.cr6.eq) goto loc_829085C8;
	// bl 0x82aadbb8
	ctx.lr = 0x829085C8;
	sub_82AADBB8(ctx, base);
loc_829085C8:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82908530
	ctx.lr = 0x829085D0;
	sub_82908530(ctx, base);
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

__attribute__((alias("__imp__sub_829085E8"))) PPC_WEAK_FUNC(sub_829085E8);
PPC_FUNC_IMPL(__imp__sub_829085E8) {
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
	// bl 0x82e53a38
	ctx.lr = 0x82908608;
	sub_82E53A38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c01030
	ctx.lr = 0x82908610;
	sub_82C01030(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r5,r11,-1304
	ctx.r5.s64 = ctx.r11.s64 + -1304;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290862C;
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

__attribute__((alias("__imp__sub_82908648"))) PPC_WEAK_FUNC(sub_82908648);
PPC_FUNC_IMPL(__imp__sub_82908648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82908650;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r3,68
	ctx.r3.s64 = 68;
	// addi r11,r11,-1284
	ctx.r11.s64 = ctx.r11.s64 + -1284;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x82908674;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82908694
	if (ctx.cr0.eq) goto loc_82908694;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-12876
	ctx.r6.s64 = ctx.r11.s64 + -12876;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82aae178
	ctx.lr = 0x82908690;
	sub_82AAE178(ctx, base);
	// b 0x82908698
	goto loc_82908698;
loc_82908694:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82908698:
	// stw r3,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r3.u32);
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82a7f140
	ctx.lr = 0x829086AC;
	sub_82A7F140(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// beq cr6,0x829086d0
	if (ctx.cr6.eq) goto loc_829086D0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,30632
	ctx.r4.s64 = ctx.r11.s64 + 30632;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8252d250
	ctx.lr = 0x829086D0;
	sub_8252D250(ctx, base);
loc_829086D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829086E0"))) PPC_WEAK_FUNC(sub_829086E0);
PPC_FUNC_IMPL(__imp__sub_829086E0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r31,212(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// addi r11,r11,-1284
	ctx.r11.s64 = ctx.r11.s64 + -1284;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82908718
	if (ctx.cr6.eq) goto loc_82908718;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aadfe0
	ctx.lr = 0x82908710;
	sub_82AADFE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82908718;
	sub_823FD208(ctx, base);
loc_82908718:
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

__attribute__((alias("__imp__sub_82908730"))) PPC_WEAK_FUNC(sub_82908730);
PPC_FUNC_IMPL(__imp__sub_82908730) {
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r10,r10,-1276
	ctx.r10.s64 = ctx.r10.s64 + -1276;
	// addi r9,r9,-1284
	ctx.r9.s64 = ctx.r9.s64 + -1284;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r30.u32);
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82a7f140
	ctx.lr = 0x8290877C;
	sub_82A7F140(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// stb r11,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_829087A8"))) PPC_WEAK_FUNC(sub_829087A8);
PPC_FUNC_IMPL(__imp__sub_829087A8) {
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
	// bl 0x82908298
	ctx.lr = 0x829087C0;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-1200
	ctx.r11.s64 = ctx.r11.s64 + -1200;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r5,r10,10812
	ctx.r5.s64 = ctx.r10.s64 + 10812;
	// bl 0x82e50ea8
	ctx.lr = 0x829087E0;
	sub_82E50EA8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// addi r5,r11,10808
	ctx.r5.s64 = ctx.r11.s64 + 10808;
	// bl 0x82e50ea8
	ctx.lr = 0x829087F4;
	sub_82E50EA8(ctx, base);
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

__attribute__((alias("__imp__sub_82908810"))) PPC_WEAK_FUNC(sub_82908810);
PPC_FUNC_IMPL(__imp__sub_82908810) {
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
	// bl 0x82908298
	ctx.lr = 0x82908828;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-1140
	ctx.r11.s64 = ctx.r11.s64 + -1140;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r5,r10,15768
	ctx.r5.s64 = ctx.r10.s64 + 15768;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82e50ed8
	ctx.lr = 0x8290884C;
	sub_82E50ED8(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82e51260
	ctx.lr = 0x82908860;
	sub_82E51260(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1944
	ctx.r11.s64 = ctx.r11.s64 + -1944;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82908888"))) PPC_WEAK_FUNC(sub_82908888);
PPC_FUNC_IMPL(__imp__sub_82908888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82908890;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830b2320
	ctx.lr = 0x829088B4;
	sub_830B2320(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82e512a0
	ctx.lr = 0x829088C0;
	sub_82E512A0(ctx, base);
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,-30880(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30880);
	// lfs f0,3340(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3340);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82908900
	if (ctx.cr6.gt) goto loc_82908900;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82908900:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82908914
	if (ctx.cr0.eq) goto loc_82908914;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e51010
	ctx.lr = 0x82908914;
	sub_82E51010(ctx, base);
loc_82908914:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82908920"))) PPC_WEAK_FUNC(sub_82908920);
PPC_FUNC_IMPL(__imp__sub_82908920) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x830b2320
	ctx.lr = 0x82908934;
	sub_830B2320(ctx, base);
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// lis r8,-31952
	ctx.r8.s64 = -2094006272;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,32165(r9)
	PPC_STORE_U8(ctx.r9.u32 + 32165, ctx.r11.u8);
	// stb r10,32166(r8)
	PPC_STORE_U8(ctx.r8.u32 + 32166, ctx.r10.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82908960"))) PPC_WEAK_FUNC(sub_82908960);
PPC_FUNC_IMPL(__imp__sub_82908960) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// lis r8,-31952
	ctx.r8.s64 = -2094006272;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stb r11,32165(r9)
	PPC_STORE_U8(ctx.r9.u32 + 32165, ctx.r11.u8);
	// stb r10,32166(r8)
	PPC_STORE_U8(ctx.r8.u32 + 32166, ctx.r10.u8);
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82908980"))) PPC_WEAK_FUNC(sub_82908980);
PPC_FUNC_IMPL(__imp__sub_82908980) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x830b2320
	ctx.lr = 0x82908994;
	sub_830B2320(ctx, base);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,32169(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32169, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829089B0"))) PPC_WEAK_FUNC(sub_829089B0);
PPC_FUNC_IMPL(__imp__sub_829089B0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stb r11,32169(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32169, ctx.r11.u8);
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829089C8"))) PPC_WEAK_FUNC(sub_829089C8);
PPC_FUNC_IMPL(__imp__sub_829089C8) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x830b2320
	ctx.lr = 0x829089DC;
	sub_830B2320(ctx, base);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,32170(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32170, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829089F8"))) PPC_WEAK_FUNC(sub_829089F8);
PPC_FUNC_IMPL(__imp__sub_829089F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stb r11,32170(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32170, ctx.r11.u8);
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82908A10"))) PPC_WEAK_FUNC(sub_82908A10);
PPC_FUNC_IMPL(__imp__sub_82908A10) {
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
	// bl 0x82908298
	ctx.lr = 0x82908A28;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,-272
	ctx.r11.s64 = ctx.r11.s64 + -272;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r5,r10,-288
	ctx.r5.s64 = ctx.r10.s64 + -288;
	// bl 0x82e50ea8
	ctx.lr = 0x82908A48;
	sub_82E50EA8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// addi r5,r11,-304
	ctx.r5.s64 = ctx.r11.s64 + -304;
	// bl 0x82e50ea8
	ctx.lr = 0x82908A5C;
	sub_82E50EA8(ctx, base);
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

__attribute__((alias("__imp__sub_82908A78"))) PPC_WEAK_FUNC(sub_82908A78);
PPC_FUNC_IMPL(__imp__sub_82908A78) {
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
	// bl 0x82e53a38
	ctx.lr = 0x82908A98;
	sub_82E53A38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c01030
	ctx.lr = 0x82908AA0;
	sub_82C01030(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r5,r11,-156
	ctx.r5.s64 = ctx.r11.s64 + -156;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82908ABC;
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

__attribute__((alias("__imp__sub_82908AD8"))) PPC_WEAK_FUNC(sub_82908AD8);
PPC_FUNC_IMPL(__imp__sub_82908AD8) {
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
	// bl 0x82e53a38
	ctx.lr = 0x82908AF8;
	sub_82E53A38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c01030
	ctx.lr = 0x82908B00;
	sub_82C01030(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r5,r11,-88
	ctx.r5.s64 = ctx.r11.s64 + -88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82908B1C;
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

__attribute__((alias("__imp__sub_82908B38"))) PPC_WEAK_FUNC(sub_82908B38);
PPC_FUNC_IMPL(__imp__sub_82908B38) {
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
	// bl 0x82908298
	ctx.lr = 0x82908B50;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r10,-6792
	ctx.r5.s64 = ctx.r10.s64 + -6792;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82e50e38
	ctx.lr = 0x82908B74;
	sub_82E50E38(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,11928
	ctx.r11.s64 = ctx.r11.s64 + 11928;
	// stb r10,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82908BA0"))) PPC_WEAK_FUNC(sub_82908BA0);
PPC_FUNC_IMPL(__imp__sub_82908BA0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// addi r10,r10,11928
	ctx.r10.s64 = ctx.r10.s64 + 11928;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bl 0x82e50e70
	ctx.lr = 0x82908BD4;
	sub_82E50E70(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-2060
	ctx.r11.s64 = ctx.r11.s64 + -2060;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82e50e28
	ctx.lr = 0x82908BE8;
	sub_82E50E28(ctx, base);
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

__attribute__((alias("__imp__sub_82908C00"))) PPC_WEAK_FUNC(sub_82908C00);
PPC_FUNC_IMPL(__imp__sub_82908C00) {
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
	// bl 0x82908298
	ctx.lr = 0x82908C18;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r10,20632
	ctx.r5.s64 = ctx.r10.s64 + 20632;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82e50e38
	ctx.lr = 0x82908C3C;
	sub_82E50E38(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,11928
	ctx.r11.s64 = ctx.r11.s64 + 11928;
	// stb r10,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82908C68"))) PPC_WEAK_FUNC(sub_82908C68);
PPC_FUNC_IMPL(__imp__sub_82908C68) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// addi r10,r10,11928
	ctx.r10.s64 = ctx.r10.s64 + 11928;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bl 0x82e50e70
	ctx.lr = 0x82908C9C;
	sub_82E50E70(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-2060
	ctx.r11.s64 = ctx.r11.s64 + -2060;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82e50e28
	ctx.lr = 0x82908CB0;
	sub_82E50E28(ctx, base);
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

__attribute__((alias("__imp__sub_82908CC8"))) PPC_WEAK_FUNC(sub_82908CC8);
PPC_FUNC_IMPL(__imp__sub_82908CC8) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830b2320
	ctx.lr = 0x82908CE4;
	sub_830B2320(ctx, base);
	// lbz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stb r11,26596(r10)
	PPC_STORE_U8(ctx.r10.u32 + 26596, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82908D08"))) PPC_WEAK_FUNC(sub_82908D08);
PPC_FUNC_IMPL(__imp__sub_82908D08) {
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
	// bl 0x82908298
	ctx.lr = 0x82908D20;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,288
	ctx.r11.s64 = ctx.r11.s64 + 288;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r5,r10,12820
	ctx.r5.s64 = ctx.r10.s64 + 12820;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82e50ed8
	ctx.lr = 0x82908D44;
	sub_82E50ED8(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82e51260
	ctx.lr = 0x82908D58;
	sub_82E51260(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1928
	ctx.r11.s64 = ctx.r11.s64 + -1928;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82908D80"))) PPC_WEAK_FUNC(sub_82908D80);
PPC_FUNC_IMPL(__imp__sub_82908D80) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x830b2320
	ctx.lr = 0x82908DA4;
	sub_830B2320(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82e512a0
	ctx.lr = 0x82908DB0;
	sub_82E512A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lfs f0,3368(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
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

__attribute__((alias("__imp__sub_82908DE0"))) PPC_WEAK_FUNC(sub_82908DE0);
PPC_FUNC_IMPL(__imp__sub_82908DE0) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x830b2320
	ctx.lr = 0x82908DF4;
	sub_830B2320(ctx, base);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,32172(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32172, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82908E10"))) PPC_WEAK_FUNC(sub_82908E10);
PPC_FUNC_IMPL(__imp__sub_82908E10) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stb r11,32172(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32172, ctx.r11.u8);
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82908E28"))) PPC_WEAK_FUNC(sub_82908E28);
PPC_FUNC_IMPL(__imp__sub_82908E28) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x830b2320
	ctx.lr = 0x82908E3C;
	sub_830B2320(ctx, base);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,32173(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32173, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82908E58"))) PPC_WEAK_FUNC(sub_82908E58);
PPC_FUNC_IMPL(__imp__sub_82908E58) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stb r11,32173(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32173, ctx.r11.u8);
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82908E70"))) PPC_WEAK_FUNC(sub_82908E70);
PPC_FUNC_IMPL(__imp__sub_82908E70) {
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
	// bl 0x82908298
	ctx.lr = 0x82908E88;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,708
	ctx.r11.s64 = ctx.r11.s64 + 708;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r5,r10,10812
	ctx.r5.s64 = ctx.r10.s64 + 10812;
	// bl 0x82e50ea8
	ctx.lr = 0x82908EA8;
	sub_82E50EA8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// addi r5,r11,10808
	ctx.r5.s64 = ctx.r11.s64 + 10808;
	// bl 0x82e50ea8
	ctx.lr = 0x82908EBC;
	sub_82E50EA8(ctx, base);
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

__attribute__((alias("__imp__sub_82908ED8"))) PPC_WEAK_FUNC(sub_82908ED8);
PPC_FUNC_IMPL(__imp__sub_82908ED8) {
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
	// bl 0x82908298
	ctx.lr = 0x82908EF0;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,768
	ctx.r11.s64 = ctx.r11.s64 + 768;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r5,r10,10812
	ctx.r5.s64 = ctx.r10.s64 + 10812;
	// bl 0x82e50ea8
	ctx.lr = 0x82908F10;
	sub_82E50EA8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// addi r5,r11,10808
	ctx.r5.s64 = ctx.r11.s64 + 10808;
	// bl 0x82e50ea8
	ctx.lr = 0x82908F24;
	sub_82E50EA8(ctx, base);
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

__attribute__((alias("__imp__sub_82908F40"))) PPC_WEAK_FUNC(sub_82908F40);
PPC_FUNC_IMPL(__imp__sub_82908F40) {
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
	// bl 0x82908298
	ctx.lr = 0x82908F58;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,856
	ctx.r11.s64 = ctx.r11.s64 + 856;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r5,r10,840
	ctx.r5.s64 = ctx.r10.s64 + 840;
	// bl 0x82e50ea8
	ctx.lr = 0x82908F78;
	sub_82E50EA8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// addi r5,r11,824
	ctx.r5.s64 = ctx.r11.s64 + 824;
	// bl 0x82e50ea8
	ctx.lr = 0x82908F8C;
	sub_82E50EA8(ctx, base);
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

__attribute__((alias("__imp__sub_82908FA8"))) PPC_WEAK_FUNC(sub_82908FA8);
PPC_FUNC_IMPL(__imp__sub_82908FA8) {
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
	// bl 0x82e512a0
	ctx.lr = 0x82908FB8;
	sub_82E512A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82908ff0
	if (ctx.cr0.eq) goto loc_82908FF0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r9,r11,-1316
	ctx.r9.s64 = ctx.r11.s64 + -1316;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r10,r10,-2108
	ctx.r10.s64 = ctx.r10.s64 + -2108;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stb r9,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r9.u8);
loc_82908FF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82909000"))) PPC_WEAK_FUNC(sub_82909000);
PPC_FUNC_IMPL(__imp__sub_82909000) {
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
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1908
	ctx.r11.s64 = ctx.r11.s64 + -1908;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// bl 0x82e4f4e8
	ctx.lr = 0x82909030;
	sub_82E4F4E8(ctx, base);
	// li r11,1042
	ctx.r11.s64 = 1042;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82909050"))) PPC_WEAK_FUNC(sub_82909050);
PPC_FUNC_IMPL(__imp__sub_82909050) {
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
	ctx.lr = 0x82909068;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,916
	ctx.r11.s64 = ctx.r11.s64 + 916;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82646710
	ctx.lr = 0x82909078;
	sub_82646710(ctx, base);
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

__attribute__((alias("__imp__sub_829090A0"))) PPC_WEAK_FUNC(sub_829090A0);
PPC_FUNC_IMPL(__imp__sub_829090A0) {
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
	// bl 0x82646710
	ctx.lr = 0x829090B8;
	sub_82646710(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x829090cc
	if (ctx.cr6.eq) goto loc_829090CC;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_829090CC:
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

__attribute__((alias("__imp__sub_829090E8"))) PPC_WEAK_FUNC(sub_829090E8);
PPC_FUNC_IMPL(__imp__sub_829090E8) {
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
	// bl 0x825ade78
	ctx.lr = 0x82909104;
	sub_825ADE78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82e4e8c0
	ctx.lr = 0x8290910C;
	sub_82E4E8C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82e4e188
	ctx.lr = 0x8290911C;
	sub_82E4E188(ctx, base);
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

__attribute__((alias("__imp__sub_82909138"))) PPC_WEAK_FUNC(sub_82909138);
PPC_FUNC_IMPL(__imp__sub_82909138) {
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
	// beq cr6,0x82909188
	if (ctx.cr6.eq) goto loc_82909188;
	// bl 0x825ade78
	ctx.lr = 0x8290915C;
	sub_825ADE78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82e4de20
	ctx.lr = 0x82909168;
	sub_82E4DE20(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82909188
	if (ctx.cr0.eq) goto loc_82909188;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82909184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8290918c
	goto loc_8290918C;
loc_82909188:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290918C:
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

__attribute__((alias("__imp__sub_829091A0"))) PPC_WEAK_FUNC(sub_829091A0);
PPC_FUNC_IMPL(__imp__sub_829091A0) {
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
	// bl 0x82908298
	ctx.lr = 0x829091B8;
	sub_82908298(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,928
	ctx.r10.s64 = ctx.r10.s64 + 928;
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stb r11,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r11.u8);
	// stb r11,34(r31)
	PPC_STORE_U8(ctx.r31.u32 + 34, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_829091F0"))) PPC_WEAK_FUNC(sub_829091F0);
PPC_FUNC_IMPL(__imp__sub_829091F0) {
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
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-4508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4508);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82909230
	if (ctx.cr6.eq) goto loc_82909230;
	// lbz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// bl 0x825f4a90
	ctx.lr = 0x82909230;
	sub_825F4A90(ctx, base);
loc_82909230:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,-4456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4456);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x829092d0
	if (ctx.cr6.eq) goto loc_829092D0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// bl 0x830a0530
	ctx.lr = 0x8290925C;
	sub_830A0530(ctx, base);
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82909290
	if (!ctx.cr0.eq) goto loc_82909290;
	// lbz r10,34(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 34);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82909290
	if (ctx.cr0.eq) goto loc_82909290;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290928C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x829092d0
	goto loc_829092D0;
loc_82909290:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829092d0
	if (ctx.cr6.eq) goto loc_829092D0;
	// lbz r11,33(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 33);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829092d0
	if (ctx.cr0.eq) goto loc_829092D0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829092BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829092D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829092D0:
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

__attribute__((alias("__imp__sub_829092E8"))) PPC_WEAK_FUNC(sub_829092E8);
PPC_FUNC_IMPL(__imp__sub_829092E8) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830b2320
	ctx.lr = 0x82909308;
	sub_830B2320(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,-4024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4024);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82909360
	if (ctx.cr6.eq) goto loc_82909360;
	// lbz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82909348
	if (ctx.cr0.eq) goto loc_82909348;
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828dc630
	ctx.lr = 0x82909340;
	sub_828DC630(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82909354
	if (!ctx.cr0.eq) goto loc_82909354;
loc_82909348:
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828d56f8
	ctx.lr = 0x82909354;
	sub_828D56F8(ctx, base);
loc_82909354:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828d3e00
	ctx.lr = 0x82909360;
	sub_828D3E00(ctx, base);
loc_82909360:
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

__attribute__((alias("__imp__sub_82909378"))) PPC_WEAK_FUNC(sub_82909378);
PPC_FUNC_IMPL(__imp__sub_82909378) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830b2320
	ctx.lr = 0x82909394;
	sub_830B2320(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r3,23980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23980);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x829093b0
	if (ctx.cr6.eq) goto loc_829093B0;
	// bl 0x8288b8c8
	ctx.lr = 0x829093AC;
	sub_8288B8C8(ctx, base);
	// b 0x829093b4
	goto loc_829093B4;
loc_829093B0:
	// bl 0x8288b840
	ctx.lr = 0x829093B4;
	sub_8288B840(ctx, base);
loc_829093B4:
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

__attribute__((alias("__imp__sub_829093C8"))) PPC_WEAK_FUNC(sub_829093C8);
PPC_FUNC_IMPL(__imp__sub_829093C8) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830b2320
	ctx.lr = 0x829093E4;
	sub_830B2320(ctx, base);
	// lbz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 128);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829093fc
	if (ctx.cr0.eq) goto loc_829093FC;
	// bl 0x828c7938
	ctx.lr = 0x829093F8;
	sub_828C7938(ctx, base);
	// b 0x82909400
	goto loc_82909400;
loc_829093FC:
	// bl 0x828c7950
	ctx.lr = 0x82909400;
	sub_828C7950(ctx, base);
loc_82909400:
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

__attribute__((alias("__imp__sub_82909418"))) PPC_WEAK_FUNC(sub_82909418);
PPC_FUNC_IMPL(__imp__sub_82909418) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x830b2320
	ctx.lr = 0x82909430;
	sub_830B2320(ctx, base);
	// bl 0x825f6fb0
	ctx.lr = 0x82909434;
	sub_825F6FB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-4468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4468);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82909470
	if (ctx.cr6.eq) goto loc_82909470;
	// bl 0x82497828
	ctx.lr = 0x82909454;
	sub_82497828(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828af580
	ctx.lr = 0x82909464;
	sub_828AF580(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82909470
	if (ctx.cr0.eq) goto loc_82909470;
	// bl 0x828dcae8
	ctx.lr = 0x82909470;
	sub_828DCAE8(ctx, base);
loc_82909470:
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

__attribute__((alias("__imp__sub_82909488"))) PPC_WEAK_FUNC(sub_82909488);
PPC_FUNC_IMPL(__imp__sub_82909488) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-2060
	ctx.r11.s64 = ctx.r11.s64 + -2060;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82e50e28
	ctx.lr = 0x829094B4;
	sub_82E50E28(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829094c4
	if (ctx.cr0.eq) goto loc_829094C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x829094C4;
	sub_823FD208(ctx, base);
loc_829094C4:
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

__attribute__((alias("__imp__sub_829094E0"))) PPC_WEAK_FUNC(sub_829094E0);
PPC_FUNC_IMPL(__imp__sub_829094E0) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x830b2320
	ctx.lr = 0x829094F8;
	sub_830B2320(ctx, base);
	// bl 0x825f6fb0
	ctx.lr = 0x829094FC;
	sub_825F6FB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-4468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4468);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82487268
	ctx.lr = 0x82909514;
	sub_82487268(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828af580
	ctx.lr = 0x82909524;
	sub_828AF580(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82909530
	if (ctx.cr0.eq) goto loc_82909530;
	// bl 0x828d4070
	ctx.lr = 0x82909530;
	sub_828D4070(ctx, base);
loc_82909530:
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

__attribute__((alias("__imp__sub_82909548"))) PPC_WEAK_FUNC(sub_82909548);
PPC_FUNC_IMPL(__imp__sub_82909548) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x830b2320
	ctx.lr = 0x82909560;
	sub_830B2320(ctx, base);
	// bl 0x825f6fb0
	ctx.lr = 0x82909564;
	sub_825F6FB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-4468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4468);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82487268
	ctx.lr = 0x8290957C;
	sub_82487268(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828af580
	ctx.lr = 0x8290958C;
	sub_828AF580(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82909598
	if (ctx.cr0.eq) goto loc_82909598;
	// bl 0x828d4090
	ctx.lr = 0x82909598;
	sub_828D4090(ctx, base);
loc_82909598:
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

__attribute__((alias("__imp__sub_829095B0"))) PPC_WEAK_FUNC(sub_829095B0);
PPC_FUNC_IMPL(__imp__sub_829095B0) {
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
	// bl 0x82908298
	ctx.lr = 0x829095C8;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1168
	ctx.r11.s64 = ctx.r11.s64 + 1168;
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

__attribute__((alias("__imp__sub_829095F0"))) PPC_WEAK_FUNC(sub_829095F0);
PPC_FUNC_IMPL(__imp__sub_829095F0) {
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
	// bl 0x82908298
	ctx.lr = 0x82909608;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,1276
	ctx.r11.s64 = ctx.r11.s64 + 1276;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r5,r10,1248
	ctx.r5.s64 = ctx.r10.s64 + 1248;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82e50ed8
	ctx.lr = 0x8290962C;
	sub_82E50ED8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// addi r5,r11,1224
	ctx.r5.s64 = ctx.r11.s64 + 1224;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82e50ed8
	ctx.lr = 0x82909644;
	sub_82E50ED8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82e51260
	ctx.lr = 0x82909658;
	sub_82E51260(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,9364
	ctx.r10.s64 = ctx.r10.s64 + 9364;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// stb r11,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r11.u8);
	// stb r11,93(r31)
	PPC_STORE_U8(ctx.r31.u32 + 93, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82909688"))) PPC_WEAK_FUNC(sub_82909688);
PPC_FUNC_IMPL(__imp__sub_82909688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82909690;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,-30876(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30876);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82909704
	if (ctx.cr6.eq) goto loc_82909704;
	// addi r28,r3,80
	ctx.r28.s64 = ctx.r3.s64 + 80;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e512a0
	ctx.lr = 0x829096C8;
	sub_82E512A0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82909704
	if (!ctx.cr0.eq) goto loc_82909704;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lbz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// addi r4,r29,48
	ctx.r4.s64 = ctx.r29.s64 + 48;
	// lwz r3,19100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19100);
	// bl 0x824e57b8
	ctx.lr = 0x829096E8;
	sub_824E57B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82909704
	if (ctx.cr0.eq) goto loc_82909704;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e512a0
	ctx.lr = 0x829096FC;
	sub_82E512A0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
loc_82909704:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82611b80
	ctx.lr = 0x82909710;
	sub_82611B80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82909744
	if (ctx.cr0.eq) goto loc_82909744;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82e512a0
	ctx.lr = 0x82909724;
	sub_82E512A0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8290973c
	if (!ctx.cr0.eq) goto loc_8290973C;
	// lbz r11,93(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 93);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82909744
	if (ctx.cr0.eq) goto loc_82909744;
loc_8290973C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82909748
	goto loc_82909748;
loc_82909744:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82909748:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82909758"))) PPC_WEAK_FUNC(sub_82909758);
PPC_FUNC_IMPL(__imp__sub_82909758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82909760;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830b2320
	ctx.lr = 0x82909784;
	sub_830B2320(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,-30876(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30876);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829097f4
	if (ctx.cr6.eq) goto loc_829097F4;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// lwz r3,19100(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19100);
	// bl 0x824e5848
	ctx.lr = 0x829097B0;
	sub_824E5848(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829097f4
	if (ctx.cr0.eq) goto loc_829097F4;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829097d8
	if (!ctx.cr6.eq) goto loc_829097D8;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x829097dc
	if (ctx.cr6.eq) goto loc_829097DC;
loc_829097D8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_829097DC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x829097ec
	if (!ctx.cr0.eq) goto loc_829097EC;
	// bl 0x82e50fc0
	ctx.lr = 0x829097E8;
	sub_82E50FC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_829097EC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e51010
	ctx.lr = 0x829097F4;
	sub_82E51010(ctx, base);
loc_829097F4:
	// lbz r11,93(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 93);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82909850
	if (ctx.cr0.eq) goto loc_82909850;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r30,r31,56
	ctx.r30.s64 = ctx.r31.s64 + 56;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82909820
	if (!ctx.cr6.eq) goto loc_82909820;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82909824
	if (ctx.cr6.eq) goto loc_82909824;
loc_82909820:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82909824:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82909850
	if (ctx.cr0.eq) goto loc_82909850;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82e512a0
	ctx.lr = 0x82909838;
	sub_82E512A0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82909850
	if (!ctx.cr0.eq) goto loc_82909850;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e51010
	ctx.lr = 0x82909850;
	sub_82E51010(ctx, base);
loc_82909850:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82909858"))) PPC_WEAK_FUNC(sub_82909858);
PPC_FUNC_IMPL(__imp__sub_82909858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82909860;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x830b2320
	ctx.lr = 0x82909878;
	sub_830B2320(ctx, base);
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e512a0
	ctx.lr = 0x82909888;
	sub_82E512A0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829098d4
	if (ctx.cr0.eq) goto loc_829098D4;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,-30876(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30876);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829098c0
	if (ctx.cr6.eq) goto loc_829098C0;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// lwz r3,19100(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19100);
	// bl 0x824e5810
	ctx.lr = 0x829098C0;
	sub_824E5810(ctx, base);
loc_829098C0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e512a0
	ctx.lr = 0x829098CC;
	sub_82E512A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
loc_829098D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829098E0"))) PPC_WEAK_FUNC(sub_829098E0);
PPC_FUNC_IMPL(__imp__sub_829098E0) {
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
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,-30876(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30876);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82909930
	if (ctx.cr6.eq) goto loc_82909930;
	// addic. r31,r11,48
	ctx.xer.ca = ctx.r11.u32 > 4294967247;
	ctx.r31.s64 = ctx.r11.s64 + 48;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82909930
	if (ctx.cr0.eq) goto loc_82909930;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,19100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19100);
	// bl 0x82f6cd08
	ctx.lr = 0x82909924;
	sub_82F6CD08(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82909934
	if (!ctx.cr0.eq) goto loc_82909934;
loc_82909930:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82909934:
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

__attribute__((alias("__imp__sub_82909948"))) PPC_WEAK_FUNC(sub_82909948);
PPC_FUNC_IMPL(__imp__sub_82909948) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r11,1332
	ctx.r5.s64 = ctx.r11.s64 + 1332;
	// bl 0x82909000
	ctx.lr = 0x82909968;
	sub_82909000(ctx, base);
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

__attribute__((alias("__imp__sub_82909980"))) PPC_WEAK_FUNC(sub_82909980);
PPC_FUNC_IMPL(__imp__sub_82909980) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-2000
	ctx.r11.s64 = ctx.r11.s64 + -2000;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82e4ef68
	ctx.lr = 0x829099AC;
	sub_82E4EF68(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829099bc
	if (ctx.cr0.eq) goto loc_829099BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x829099BC;
	sub_823FD208(ctx, base);
loc_829099BC:
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

__attribute__((alias("__imp__sub_829099D8"))) PPC_WEAK_FUNC(sub_829099D8);
PPC_FUNC_IMPL(__imp__sub_829099D8) {
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
	// bl 0x82e4fdd8
	ctx.lr = 0x829099F4;
	sub_82E4FDD8(ctx, base);
	// lis r30,-31954
	ctx.r30.s64 = -2094137344;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// b 0x82909a0c
	goto loc_82909A0C;
loc_82909A00:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,19100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19100);
	// bl 0x824e5810
	ctx.lr = 0x82909A0C;
	sub_824E5810(ctx, base);
loc_82909A0C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,19100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19100);
	// bl 0x82f6cd08
	ctx.lr = 0x82909A18;
	sub_82F6CD08(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82909a00
	if (!ctx.cr0.eq) goto loc_82909A00;
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

__attribute__((alias("__imp__sub_82909A38"))) PPC_WEAK_FUNC(sub_82909A38);
PPC_FUNC_IMPL(__imp__sub_82909A38) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830b2320
	ctx.lr = 0x82909A64;
	sub_830B2320(ctx, base);
	// bl 0x82479e88
	ctx.lr = 0x82909A68;
	sub_82479E88(ctx, base);
	// lwz r11,2372(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2372);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82909a7c
	if (!ctx.cr6.eq) goto loc_82909A7C;
	// addi r4,r31,152
	ctx.r4.s64 = ctx.r31.s64 + 152;
	// b 0x82909af8
	goto loc_82909AF8;
loc_82909A7C:
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r3,25444(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25444);
	// bl 0x82616af0
	ctx.lr = 0x82909A88;
	sub_82616AF0(ctx, base);
	// bl 0x82c0f2c0
	ctx.lr = 0x82909A8C;
	sub_82C0F2C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82909af4
	if (ctx.cr0.eq) goto loc_82909AF4;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82909aec
	if (ctx.cr6.eq) goto loc_82909AEC;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x82909ae4
	if (ctx.cr6.eq) goto loc_82909AE4;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// beq cr6,0x82909adc
	if (ctx.cr6.eq) goto loc_82909ADC;
	// cmpwi cr6,r3,12
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 12, ctx.xer);
	// beq cr6,0x82909ad4
	if (ctx.cr6.eq) goto loc_82909AD4;
	// cmpwi cr6,r3,17
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 17, ctx.xer);
	// beq cr6,0x82909acc
	if (ctx.cr6.eq) goto loc_82909ACC;
	// cmpwi cr6,r3,18
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 18, ctx.xer);
	// bne cr6,0x82909b00
	if (!ctx.cr6.eq) goto loc_82909B00;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// b 0x82909af8
	goto loc_82909AF8;
loc_82909ACC:
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// b 0x82909af8
	goto loc_82909AF8;
loc_82909AD4:
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// b 0x82909af8
	goto loc_82909AF8;
loc_82909ADC:
	// addi r4,r31,176
	ctx.r4.s64 = ctx.r31.s64 + 176;
	// b 0x82909af8
	goto loc_82909AF8;
loc_82909AE4:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// b 0x82909af8
	goto loc_82909AF8;
loc_82909AEC:
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// b 0x82909af8
	goto loc_82909AF8;
loc_82909AF4:
	// addi r4,r31,200
	ctx.r4.s64 = ctx.r31.s64 + 200;
loc_82909AF8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e51010
	ctx.lr = 0x82909B00;
	sub_82E51010(ctx, base);
loc_82909B00:
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

__attribute__((alias("__imp__sub_82909B18"))) PPC_WEAK_FUNC(sub_82909B18);
PPC_FUNC_IMPL(__imp__sub_82909B18) {
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
	// bl 0x82908530
	ctx.lr = 0x82909B38;
	sub_82908530(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82909b48
	if (ctx.cr0.eq) goto loc_82909B48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82909B48;
	sub_823FD208(ctx, base);
loc_82909B48:
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

__attribute__((alias("__imp__sub_82909B68"))) PPC_WEAK_FUNC(sub_82909B68);
PPC_FUNC_IMPL(__imp__sub_82909B68) {
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
	// bl 0x82908588
	ctx.lr = 0x82909B88;
	sub_82908588(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82909b98
	if (ctx.cr0.eq) goto loc_82909B98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82909B98;
	sub_823FD208(ctx, base);
loc_82909B98:
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

__attribute__((alias("__imp__sub_82909BB8"))) PPC_WEAK_FUNC(sub_82909BB8);
PPC_FUNC_IMPL(__imp__sub_82909BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82909BC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-848(r1)
	ea = -848 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82909cb0
	if (!ctx.cr6.eq) goto loc_82909CB0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82909cac
	if (ctx.cr6.eq) goto loc_82909CAC;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82c0f6c0
	ctx.lr = 0x82909BF0;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82909c0c
	if (ctx.cr0.eq) goto loc_82909C0C;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82c7e0b0
	ctx.lr = 0x82909C04;
	sub_82C7E0B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82909c10
	goto loc_82909C10;
loc_82909C0C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82909C10:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d35328
	ctx.lr = 0x82909C18;
	sub_82D35328(ctx, base);
	// li r3,140
	ctx.r3.s64 = 140;
	// bl 0x82c0f6c0
	ctx.lr = 0x82909C20;
	sub_82C0F6C0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82909c48
	if (ctx.cr0.eq) goto loc_82909C48;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824afb20
	ctx.lr = 0x82909C34;
	sub_824AFB20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c6fe88
	ctx.lr = 0x82909C40;
	sub_82C6FE88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82909c4c
	goto loc_82909C4C;
loc_82909C48:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82909C4C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82d35328
	ctx.lr = 0x82909C54;
	sub_82D35328(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825f5830
	ctx.lr = 0x82909C5C;
	sub_825F5830(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r11,8468
	ctx.r5.s64 = ctx.r11.s64 + 8468;
	// bl 0x8260a4d8
	ctx.lr = 0x82909C70;
	sub_8260A4D8(ctx, base);
	// lis r30,-31954
	ctx.r30.s64 = -2094137344;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r29,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r29.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,720
	ctx.r5.s64 = 720;
	// lwz r11,-4084(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4084);
	// addi r3,r11,2244
	ctx.r3.s64 = ctx.r11.s64 + 2244;
	// bl 0x82a7d730
	ctx.lr = 0x82909C94;
	sub_82A7D730(ctx, base);
	// lwz r11,-4084(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4084);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stb r29,2997(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2997, ctx.r29.u8);
	// bl 0x82de7330
	ctx.lr = 0x82909CA4;
	sub_82DE7330(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x82909CAC;
	sub_82DE7330(ctx, base);
loc_82909CAC:
	// stb r29,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r29.u8);
loc_82909CB0:
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82909CB8"))) PPC_WEAK_FUNC(sub_82909CB8);
PPC_FUNC_IMPL(__imp__sub_82909CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r10.u8);
	// lwz r11,-4084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4084);
	// stw r4,3000(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3000, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82909CD0"))) PPC_WEAK_FUNC(sub_82909CD0);
PPC_FUNC_IMPL(__imp__sub_82909CD0) {
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
	// bl 0x82908298
	ctx.lr = 0x82909CE8;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1356
	ctx.r11.s64 = ctx.r11.s64 + 1356;
	// stb r10,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r10.u8);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// addi r5,r10,15768
	ctx.r5.s64 = ctx.r10.s64 + 15768;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82e50ed8
	ctx.lr = 0x82909D14;
	sub_82E50ED8(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82e51260
	ctx.lr = 0x82909D28;
	sub_82E51260(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1976
	ctx.r11.s64 = ctx.r11.s64 + -1976;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82909D50"))) PPC_WEAK_FUNC(sub_82909D50);
PPC_FUNC_IMPL(__imp__sub_82909D50) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// lwz r11,-4084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4084);
	// stb r10,2997(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2997, ctx.r10.u8);
	// bl 0x82e512a0
	ctx.lr = 0x82909D78;
	sub_82E512A0(ctx, base);
	// lwz r11,-4084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4084);
	// lwz r5,2964(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2964);
	// lwz r4,2240(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2240);
	// bl 0x82906a98
	ctx.lr = 0x82909D88;
	sub_82906A98(ctx, base);
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

__attribute__((alias("__imp__sub_82909DA0"))) PPC_WEAK_FUNC(sub_82909DA0);
PPC_FUNC_IMPL(__imp__sub_82909DA0) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x830b2320
	ctx.lr = 0x82909DC4;
	sub_830B2320(ctx, base);
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82909ddc
	if (!ctx.cr0.eq) goto loc_82909DDC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82909d50
	ctx.lr = 0x82909DDC;
	sub_82909D50(ctx, base);
loc_82909DDC:
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

__attribute__((alias("__imp__sub_82909DF8"))) PPC_WEAK_FUNC(sub_82909DF8);
PPC_FUNC_IMPL(__imp__sub_82909DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82909E00;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830b2320
	ctx.lr = 0x82909E20;
	sub_830B2320(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x82e512a0
	ctx.lr = 0x82909E2C;
	sub_82E512A0(ctx, base);
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82909e88
	if (!ctx.cr6.eq) goto loc_82909E88;
	// lis r29,-31954
	ctx.r29.s64 = -2094137344;
	// lwz r11,-4084(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4084);
	// lbz r10,2996(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2996);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82909e88
	if (ctx.cr0.eq) goto loc_82909E88;
	// lbz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82909e74
	if (!ctx.cr0.eq) goto loc_82909E74;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82909e74
	if (ctx.cr6.eq) goto loc_82909E74;
	// bl 0x82aadbb8
	ctx.lr = 0x82909E70;
	sub_82AADBB8(ctx, base);
	// lwz r11,-4084(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4084);
loc_82909E74:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r10,2996(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2996, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82909d50
	ctx.lr = 0x82909E88;
	sub_82909D50(ctx, base);
loc_82909E88:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82909ea8
	if (!ctx.cr6.eq) goto loc_82909EA8;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82909eac
	if (ctx.cr6.eq) goto loc_82909EAC;
loc_82909EA8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82909EAC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82909ed4
	if (ctx.cr0.eq) goto loc_82909ED4;
	// lbz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82909ed4
	if (ctx.cr0.eq) goto loc_82909ED4;
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82909ed4
	if (!ctx.cr0.eq) goto loc_82909ED4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e51010
	ctx.lr = 0x82909ED4;
	sub_82E51010(ctx, base);
loc_82909ED4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82909EE0"))) PPC_WEAK_FUNC(sub_82909EE0);
PPC_FUNC_IMPL(__imp__sub_82909EE0) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x830b2320
	ctx.lr = 0x82909EF4;
	sub_830B2320(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,-4084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4084);
	// stw r10,3000(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3000, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82909F18"))) PPC_WEAK_FUNC(sub_82909F18);
PPC_FUNC_IMPL(__imp__sub_82909F18) {
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
	// bl 0x829086e0
	ctx.lr = 0x82909F38;
	sub_829086E0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82909f48
	if (ctx.cr0.eq) goto loc_82909F48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82909F48;
	sub_823FD208(ctx, base);
loc_82909F48:
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

__attribute__((alias("__imp__sub_82909F68"))) PPC_WEAK_FUNC(sub_82909F68);
PPC_FUNC_IMPL(__imp__sub_82909F68) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// li r5,200
	ctx.r5.s64 = 200;
	// bl 0x82a7d730
	ctx.lr = 0x82909F94;
	sub_82A7D730(ctx, base);
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// addi r3,r31,212
	ctx.r3.s64 = ctx.r31.s64 + 212;
	// addi r4,r30,212
	ctx.r4.s64 = ctx.r30.s64 + 212;
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// bl 0x827a9390
	ctx.lr = 0x82909FA8;
	sub_827A9390(ctx, base);
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

__attribute__((alias("__imp__sub_82909FC8"))) PPC_WEAK_FUNC(sub_82909FC8);
PPC_FUNC_IMPL(__imp__sub_82909FC8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8290a060
	if (!ctx.cr6.eq) goto loc_8290A060;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-4060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4060);
	// bl 0x8247fc10
	ctx.lr = 0x8290A000;
	sub_8247FC10(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82489988
	ctx.lr = 0x8290A008;
	sub_82489988(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3648(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8290a024
	if (!ctx.cr6.eq) goto loc_8290A024;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
loc_8290A024:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290a034
	if (ctx.cr6.eq) goto loc_8290A034;
	// addi r4,r31,208
	ctx.r4.s64 = ctx.r31.s64 + 208;
	// bl 0x828e9e40
	ctx.lr = 0x8290A034;
	sub_828E9E40(ctx, base);
loc_8290A034:
	// lis r30,-31954
	ctx.r30.s64 = -2094137344;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// li r5,200
	ctx.r5.s64 = 200;
	// lwz r11,-4084(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4084);
	// addi r3,r11,2032
	ctx.r3.s64 = ctx.r11.s64 + 2032;
	// bl 0x82a7d730
	ctx.lr = 0x8290A04C;
	sub_82A7D730(ctx, base);
	// lwz r11,-4084(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4084);
	// lwz r9,216(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,2232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2232, ctx.r9.u32);
	// stb r10,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r10.u8);
loc_8290A060:
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

__attribute__((alias("__imp__sub_8290A078"))) PPC_WEAK_FUNC(sub_8290A078);
PPC_FUNC_IMPL(__imp__sub_8290A078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,17
	ctx.r11.u64 = ctx.r11.u64 | 17;
	// stb r10,224(r3)
	PPC_STORE_U8(ctx.r3.u32 + 224, ctx.r10.u8);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r11,-4084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4084);
	// stw r4,3000(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3000, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290A0A0"))) PPC_WEAK_FUNC(sub_8290A0A0);
PPC_FUNC_IMPL(__imp__sub_8290A0A0) {
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
	// bl 0x82908298
	ctx.lr = 0x8290A0B8;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1416
	ctx.r11.s64 = ctx.r11.s64 + 1416;
	// stb r10,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r10.u8);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// addi r5,r10,15768
	ctx.r5.s64 = ctx.r10.s64 + 15768;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82e50ed8
	ctx.lr = 0x8290A0E4;
	sub_82E50ED8(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,240
	ctx.r5.s64 = 240;
	// bl 0x82e51260
	ctx.lr = 0x8290A0F8;
	sub_82E51260(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1960
	ctx.r11.s64 = ctx.r11.s64 + -1960;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8290A120"))) PPC_WEAK_FUNC(sub_8290A120);
PPC_FUNC_IMPL(__imp__sub_8290A120) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x830b2320
	ctx.lr = 0x8290A134;
	sub_830B2320(ctx, base);
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,-4084(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4084);
	// stw r10,3000(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3000, ctx.r10.u32);
	// lwz r11,-4084(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4084);
	// std r10,2024(r11)
	PPC_STORE_U64(ctx.r11.u32 + 2024, ctx.r10.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290A160"))) PPC_WEAK_FUNC(sub_8290A160);
PPC_FUNC_IMPL(__imp__sub_8290A160) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x830b2320
	ctx.lr = 0x8290A178;
	sub_830B2320(ctx, base);
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lwz r3,-4060(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4060);
	// bl 0x82d6add0
	ctx.lr = 0x8290A184;
	sub_82D6ADD0(ctx, base);
	// bl 0x82bb0098
	ctx.lr = 0x8290A188;
	sub_82BB0098(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290A198;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8290a1ac
	if (!ctx.cr0.eq) goto loc_8290A1AC;
	// lwz r3,-4060(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4060);
	// bl 0x82d6add0
	ctx.lr = 0x8290A1A8;
	sub_82D6ADD0(ctx, base);
	// bl 0x8251b4d0
	ctx.lr = 0x8290A1AC;
	sub_8251B4D0(ctx, base);
loc_8290A1AC:
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

__attribute__((alias("__imp__sub_8290A1C0"))) PPC_WEAK_FUNC(sub_8290A1C0);
PPC_FUNC_IMPL(__imp__sub_8290A1C0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,9348
	ctx.r11.s64 = ctx.r11.s64 + 9348;
	// addi r10,r10,-2060
	ctx.r10.s64 = ctx.r10.s64 + -2060;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e50e28
	ctx.lr = 0x8290A1F8;
	sub_82E50E28(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290a208
	if (ctx.cr0.eq) goto loc_8290A208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8290A208;
	sub_823FD208(ctx, base);
loc_8290A208:
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

__attribute__((alias("__imp__sub_8290A228"))) PPC_WEAK_FUNC(sub_8290A228);
PPC_FUNC_IMPL(__imp__sub_8290A228) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82646710
	ctx.lr = 0x8290A240;
	sub_82646710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252b150
	ctx.lr = 0x8290A24C;
	sub_8252B150(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r10,1476
	ctx.r10.s64 = ctx.r10.s64 + 1476;
	// lfs f0,3648(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
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

__attribute__((alias("__imp__sub_8290A280"))) PPC_WEAK_FUNC(sub_8290A280);
PPC_FUNC_IMPL(__imp__sub_8290A280) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8264c528
	ctx.lr = 0x8290A29C;
	sub_8264C528(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290a2b0
	if (ctx.cr6.eq) goto loc_8290A2B0;
	// bl 0x8252a3a0
	ctx.lr = 0x8290A2AC;
	sub_8252A3A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8290A2B0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x8290A2B8;
	sub_82DE7330(ctx, base);
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

__attribute__((alias("__imp__sub_8290A2D0"))) PPC_WEAK_FUNC(sub_8290A2D0);
PPC_FUNC_IMPL(__imp__sub_8290A2D0) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830b2320
	ctx.lr = 0x8290A2EC;
	sub_830B2320(ctx, base);
	// bl 0x8290a280
	ctx.lr = 0x8290A2F0;
	sub_8290A280(ctx, base);
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// lis r8,-31952
	ctx.r8.s64 = -2094006272;
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,32167(r9)
	PPC_STORE_U8(ctx.r9.u32 + 32167, ctx.r11.u8);
	// stb r10,32168(r8)
	PPC_STORE_U8(ctx.r8.u32 + 32168, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_8290A320"))) PPC_WEAK_FUNC(sub_8290A320);
PPC_FUNC_IMPL(__imp__sub_8290A320) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830b2320
	ctx.lr = 0x8290A33C;
	sub_830B2320(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lbz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// lwz r11,-4060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4060);
	// stb r10,493(r11)
	PPC_STORE_U8(ctx.r11.u32 + 493, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_8290A360"))) PPC_WEAK_FUNC(sub_8290A360);
PPC_FUNC_IMPL(__imp__sub_8290A360) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x830b2320
	ctx.lr = 0x8290A378;
	sub_830B2320(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r3,-4060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4060);
	// bl 0x8247d318
	ctx.lr = 0x8290A384;
	sub_8247D318(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290a3d0
	if (ctx.cr0.eq) goto loc_8290A3D0;
	// bl 0x825f6fb0
	ctx.lr = 0x8290A390;
	sub_825F6FB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-4468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4468);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82487268
	ctx.lr = 0x8290A3A8;
	sub_82487268(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828af580
	ctx.lr = 0x8290A3B8;
	sub_828AF580(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8290a3d0
	if (ctx.cr0.eq) goto loc_8290A3D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828d8ab0
	ctx.lr = 0x8290A3C8;
	sub_828D8AB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828ce688
	ctx.lr = 0x8290A3D0;
	sub_828CE688(ctx, base);
loc_8290A3D0:
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

__attribute__((alias("__imp__sub_8290A3E8"))) PPC_WEAK_FUNC(sub_8290A3E8);
PPC_FUNC_IMPL(__imp__sub_8290A3E8) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x830b2320
	ctx.lr = 0x8290A400;
	sub_830B2320(ctx, base);
	// bl 0x825f6fb0
	ctx.lr = 0x8290A404;
	sub_825F6FB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-4468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4468);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82487268
	ctx.lr = 0x8290A41C;
	sub_82487268(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828af580
	ctx.lr = 0x8290A42C;
	sub_828AF580(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8290a438
	if (ctx.cr0.eq) goto loc_8290A438;
	// bl 0x828ca6e8
	ctx.lr = 0x8290A438;
	sub_828CA6E8(ctx, base);
loc_8290A438:
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

__attribute__((alias("__imp__sub_8290A450"))) PPC_WEAK_FUNC(sub_8290A450);
PPC_FUNC_IMPL(__imp__sub_8290A450) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830b2320
	ctx.lr = 0x8290A46C;
	sub_830B2320(ctx, base);
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stb r11,24612(r10)
	PPC_STORE_U8(ctx.r10.u32 + 24612, ctx.r11.u8);
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8290a4c4
	if (ctx.cr0.eq) goto loc_8290A4C4;
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// lis r5,-31952
	ctx.r5.s64 = -2094006272;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r5,25504
	ctx.r4.s64 = ctx.r5.s64 + 25504;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,-4084(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4084);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r3,1323
	ctx.r3.s64 = 1323;
	// stb r11,12(r4)
	PPC_STORE_U8(ctx.r4.u32 + 12, ctx.r11.u8);
	// stb r10,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r10.u8);
	// stb r9,13(r4)
	PPC_STORE_U8(ctx.r4.u32 + 13, ctx.r9.u8);
	// stw r8,25504(r5)
	PPC_STORE_U32(ctx.r5.u32 + 25504, ctx.r8.u32);
	// stw r7,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r7.u32);
	// stw r3,884(r6)
	PPC_STORE_U32(ctx.r6.u32 + 884, ctx.r3.u32);
loc_8290A4C4:
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

__attribute__((alias("__imp__sub_8290A4D8"))) PPC_WEAK_FUNC(sub_8290A4D8);
PPC_FUNC_IMPL(__imp__sub_8290A4D8) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x830b2320
	ctx.lr = 0x8290A4F0;
	sub_830B2320(ctx, base);
	// bl 0x825f6fb0
	ctx.lr = 0x8290A4F4;
	sub_825F6FB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-4468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4468);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82487268
	ctx.lr = 0x8290A50C;
	sub_82487268(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828af580
	ctx.lr = 0x8290A51C;
	sub_828AF580(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8290a528
	if (ctx.cr0.eq) goto loc_8290A528;
	// bl 0x828de700
	ctx.lr = 0x8290A528;
	sub_828DE700(ctx, base);
loc_8290A528:
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

__attribute__((alias("__imp__sub_8290A540"))) PPC_WEAK_FUNC(sub_8290A540);
PPC_FUNC_IMPL(__imp__sub_8290A540) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830b2320
	ctx.lr = 0x8290A56C;
	sub_830B2320(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r11,-4084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4084);
	// addi r11,r11,912
	ctx.r11.s64 = ctx.r11.s64 + 912;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8290a588
	if (ctx.cr6.lt) goto loc_8290A588;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8290A588:
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r10,r31,80
	ctx.r10.s64 = ctx.r31.s64 + 80;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x8290a59c
	if (ctx.cr6.lt) goto loc_8290A59C;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8290A59C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8290a5c0
	if (ctx.cr0.eq) goto loc_8290A5C0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8290a59c
	if (ctx.cr6.eq) goto loc_8290A59C;
loc_8290A5C0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// beq 0x8290a5d4
	if (ctx.cr0.eq) goto loc_8290A5D4;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
loc_8290A5D4:
	// bl 0x82e51010
	ctx.lr = 0x8290A5D8;
	sub_82E51010(ctx, base);
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

__attribute__((alias("__imp__sub_8290A5F0"))) PPC_WEAK_FUNC(sub_8290A5F0);
PPC_FUNC_IMPL(__imp__sub_8290A5F0) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x830b2320
	ctx.lr = 0x8290A608;
	sub_830B2320(ctx, base);
	// bl 0x825f6fb0
	ctx.lr = 0x8290A60C;
	sub_825F6FB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-4468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4468);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82487268
	ctx.lr = 0x8290A624;
	sub_82487268(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828af580
	ctx.lr = 0x8290A634;
	sub_828AF580(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8290a640
	if (ctx.cr0.eq) goto loc_8290A640;
	// bl 0x828d7eb0
	ctx.lr = 0x8290A640;
	sub_828D7EB0(ctx, base);
loc_8290A640:
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

__attribute__((alias("__imp__sub_8290A658"))) PPC_WEAK_FUNC(sub_8290A658);
PPC_FUNC_IMPL(__imp__sub_8290A658) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x830b2320
	ctx.lr = 0x8290A670;
	sub_830B2320(ctx, base);
	// bl 0x825f6fb0
	ctx.lr = 0x8290A674;
	sub_825F6FB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-4468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4468);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82487268
	ctx.lr = 0x8290A68C;
	sub_82487268(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828af580
	ctx.lr = 0x8290A69C;
	sub_828AF580(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8290a6a8
	if (ctx.cr0.eq) goto loc_8290A6A8;
	// bl 0x828ce228
	ctx.lr = 0x8290A6A8;
	sub_828CE228(ctx, base);
loc_8290A6A8:
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

__attribute__((alias("__imp__sub_8290A6C0"))) PPC_WEAK_FUNC(sub_8290A6C0);
PPC_FUNC_IMPL(__imp__sub_8290A6C0) {
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
	// bl 0x82908ba0
	ctx.lr = 0x8290A6E0;
	sub_82908BA0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290a6f0
	if (ctx.cr0.eq) goto loc_8290A6F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8290A6F0;
	sub_823FD208(ctx, base);
loc_8290A6F0:
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

__attribute__((alias("__imp__sub_8290A710"))) PPC_WEAK_FUNC(sub_8290A710);
PPC_FUNC_IMPL(__imp__sub_8290A710) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830b2320
	ctx.lr = 0x8290A72C;
	sub_830B2320(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lbz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// lwz r3,-4060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4060);
	// bl 0x8247fc90
	ctx.lr = 0x8290A73C;
	sub_8247FC90(ctx, base);
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

__attribute__((alias("__imp__sub_8290A750"))) PPC_WEAK_FUNC(sub_8290A750);
PPC_FUNC_IMPL(__imp__sub_8290A750) {
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
	// bl 0x82908c68
	ctx.lr = 0x8290A770;
	sub_82908C68(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290a780
	if (ctx.cr0.eq) goto loc_8290A780;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8290A780;
	sub_823FD208(ctx, base);
loc_8290A780:
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

__attribute__((alias("__imp__sub_8290A7A0"))) PPC_WEAK_FUNC(sub_8290A7A0);
PPC_FUNC_IMPL(__imp__sub_8290A7A0) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x830b2320
	ctx.lr = 0x8290A7B8;
	sub_830B2320(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8255a490
	ctx.lr = 0x8290A7C4;
	sub_8255A490(ctx, base);
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lwz r3,-4060(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4060);
	// bl 0x82880b40
	ctx.lr = 0x8290A7D0;
	sub_82880B40(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824f04b0
	ctx.lr = 0x8290A7D8;
	sub_824F04B0(ctx, base);
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// bl 0x824d47b8
	ctx.lr = 0x8290A7E0;
	sub_824D47B8(ctx, base);
	// lwz r3,-4060(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4060);
	// bl 0x82880b40
	ctx.lr = 0x8290A7E8;
	sub_82880B40(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824f04b0
	ctx.lr = 0x8290A7F0;
	sub_824F04B0(ctx, base);
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// bl 0x824cdb80
	ctx.lr = 0x8290A7F8;
	sub_824CDB80(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8255a500
	ctx.lr = 0x8290A800;
	sub_8255A500(ctx, base);
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

__attribute__((alias("__imp__sub_8290A818"))) PPC_WEAK_FUNC(sub_8290A818);
PPC_FUNC_IMPL(__imp__sub_8290A818) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x830b2320
	ctx.lr = 0x8290A830;
	sub_830B2320(ctx, base);
	// bl 0x825f6fb0
	ctx.lr = 0x8290A834;
	sub_825F6FB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-4468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4468);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82487268
	ctx.lr = 0x8290A84C;
	sub_82487268(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828af580
	ctx.lr = 0x8290A85C;
	sub_828AF580(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8290a874
	if (ctx.cr0.eq) goto loc_8290A874;
	// lwz r3,212(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290a874
	if (ctx.cr6.eq) goto loc_8290A874;
	// bl 0x828c9e98
	ctx.lr = 0x8290A874;
	sub_828C9E98(ctx, base);
loc_8290A874:
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

__attribute__((alias("__imp__sub_8290A888"))) PPC_WEAK_FUNC(sub_8290A888);
PPC_FUNC_IMPL(__imp__sub_8290A888) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x830b2320
	ctx.lr = 0x8290A89C;
	sub_830B2320(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r3,23748(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23748);
	// bl 0x82866740
	ctx.lr = 0x8290A8A8;
	sub_82866740(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r11,9800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9800);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8290a8d8
	if (ctx.cr0.eq) goto loc_8290A8D8;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8290a8d8
	if (ctx.cr0.eq) goto loc_8290A8D8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r11,356(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 356);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290A8D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290A8D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290A8E8"))) PPC_WEAK_FUNC(sub_8290A8E8);
PPC_FUNC_IMPL(__imp__sub_8290A8E8) {
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
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r3,23748(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23748);
	// bl 0x82866740
	ctx.lr = 0x8290A910;
	sub_82866740(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r11,9800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9800);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8290a93c
	if (ctx.cr0.eq) goto loc_8290A93C;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8290a93c
	if (ctx.cr0.eq) goto loc_8290A93C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,364(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 364);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290A93C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290A93C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830b2320
	ctx.lr = 0x8290A948;
	sub_830B2320(ctx, base);
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

__attribute__((alias("__imp__sub_8290A960"))) PPC_WEAK_FUNC(sub_8290A960);
PPC_FUNC_IMPL(__imp__sub_8290A960) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x830b2320
	ctx.lr = 0x8290A974;
	sub_830B2320(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r3,-4084(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4084);
	// bl 0x826426d8
	ctx.lr = 0x8290A980;
	sub_826426D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290A990"))) PPC_WEAK_FUNC(sub_8290A990);
PPC_FUNC_IMPL(__imp__sub_8290A990) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x830b2320
	ctx.lr = 0x8290A9A4;
	sub_830B2320(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r3,-4084(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4084);
	// bl 0x826426f0
	ctx.lr = 0x8290A9B0;
	sub_826426F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290A9C0"))) PPC_WEAK_FUNC(sub_8290A9C0);
PPC_FUNC_IMPL(__imp__sub_8290A9C0) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830b2320
	ctx.lr = 0x8290A9EC;
	sub_830B2320(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r11,-4084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4084);
	// lwz r3,896(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 896);
	// bl 0x824c6bd8
	ctx.lr = 0x8290A9FC;
	sub_824C6BD8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8290aa28
	if (!ctx.cr6.eq) goto loc_8290AA28;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r3,-4060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4060);
	// bl 0x8247d318
	ctx.lr = 0x8290AA10;
	sub_8247D318(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8290aa28
	if (!ctx.cr0.eq) goto loc_8290AA28;
	// bl 0x824b53b8
	ctx.lr = 0x8290AA1C;
	sub_824B53B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// beq 0x8290aa2c
	if (ctx.cr0.eq) goto loc_8290AA2C;
loc_8290AA28:
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
loc_8290AA2C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e51010
	ctx.lr = 0x8290AA34;
	sub_82E51010(ctx, base);
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

__attribute__((alias("__imp__sub_8290AA50"))) PPC_WEAK_FUNC(sub_8290AA50);
PPC_FUNC_IMPL(__imp__sub_8290AA50) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8290aaa4
	if (ctx.cr6.eq) goto loc_8290AAA4;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r3,-4060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4060);
	// bl 0x82880b40
	ctx.lr = 0x8290AA78;
	sub_82880B40(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824f04b0
	ctx.lr = 0x8290AA80;
	sub_824F04B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8290aa98
	if (ctx.cr0.eq) goto loc_8290AA98;
	// bl 0x824e4b90
	ctx.lr = 0x8290AA8C;
	sub_824E4B90(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8290aa9c
	if (ctx.cr6.eq) goto loc_8290AA9C;
loc_8290AA98:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8290AA9C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8290aaa8
	goto loc_8290AAA8;
loc_8290AAA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290AAA8:
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

__attribute__((alias("__imp__sub_8290AAC0"))) PPC_WEAK_FUNC(sub_8290AAC0);
PPC_FUNC_IMPL(__imp__sub_8290AAC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x8290AAC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830b2320
	ctx.lr = 0x8290AAE4;
	sub_830B2320(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,-4084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4084);
	// ld r30,2040(r11)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 2040);
	// lwz r28,2160(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2160);
	// bl 0x82577ad8
	ctx.lr = 0x8290AAFC;
	sub_82577AD8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290AB0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290AB1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpld cr6,r3,r30
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r30.u64, ctx.xer);
	// beq cr6,0x8290ab44
	if (ctx.cr6.eq) goto loc_8290AB44;
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, 0, ctx.xer);
	// beq cr6,0x8290ab44
	if (ctx.cr6.eq) goto loc_8290AB44;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8290ab44
	if (ctx.cr6.eq) goto loc_8290AB44;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8290aa50
	ctx.lr = 0x8290AB40;
	sub_8290AA50(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_8290AB44:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// bne 0x8290ab58
	if (!ctx.cr0.eq) goto loc_8290AB58;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
loc_8290AB58:
	// bl 0x82e51010
	ctx.lr = 0x8290AB5C;
	sub_82E51010(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290AB68"))) PPC_WEAK_FUNC(sub_8290AB68);
PPC_FUNC_IMPL(__imp__sub_8290AB68) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830b2320
	ctx.lr = 0x8290AB94;
	sub_830B2320(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,-3988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3988);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290abc4
	if (ctx.cr6.eq) goto loc_8290ABC4;
	// bl 0x82613e28
	ctx.lr = 0x8290ABB8;
	sub_82613E28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// bne 0x8290abc8
	if (!ctx.cr0.eq) goto loc_8290ABC8;
loc_8290ABC4:
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
loc_8290ABC8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e51010
	ctx.lr = 0x8290ABD0;
	sub_82E51010(ctx, base);
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

__attribute__((alias("__imp__sub_8290ABE8"))) PPC_WEAK_FUNC(sub_8290ABE8);
PPC_FUNC_IMPL(__imp__sub_8290ABE8) {
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
	// bl 0x82e4de08
	ctx.lr = 0x8290AC08;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1580
	ctx.r11.s64 = ctx.r11.s64 + 1580;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8290AC38"))) PPC_WEAK_FUNC(sub_8290AC38);
PPC_FUNC_IMPL(__imp__sub_8290AC38) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,1580
	ctx.r11.s64 = ctx.r11.s64 + 1580;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8290AC5C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290ac84
	if (ctx.cr0.eq) goto loc_8290AC84;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290ac84
	if (ctx.cr6.eq) goto loc_8290AC84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290AC84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290AC84:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
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

__attribute__((alias("__imp__sub_8290ACA8"))) PPC_WEAK_FUNC(sub_8290ACA8);
PPC_FUNC_IMPL(__imp__sub_8290ACA8) {
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
	// bl 0x8290ac38
	ctx.lr = 0x8290ACC8;
	sub_8290AC38(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290acd8
	if (ctx.cr0.eq) goto loc_8290ACD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8290ACD8;
	sub_823FD208(ctx, base);
loc_8290ACD8:
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

__attribute__((alias("__imp__sub_8290ACF8"))) PPC_WEAK_FUNC(sub_8290ACF8);
PPC_FUNC_IMPL(__imp__sub_8290ACF8) {
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
	ctx.lr = 0x8290AD10;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,1620
	ctx.r11.s64 = ctx.r11.s64 + 1620;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82906df0
	ctx.lr = 0x8290AD20;
	sub_82906DF0(ctx, base);
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

__attribute__((alias("__imp__sub_8290AD48"))) PPC_WEAK_FUNC(sub_8290AD48);
PPC_FUNC_IMPL(__imp__sub_8290AD48) {
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
	ctx.lr = 0x8290AD60;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,1632
	ctx.r11.s64 = ctx.r11.s64 + 1632;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82906e40
	ctx.lr = 0x8290AD70;
	sub_82906E40(ctx, base);
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

__attribute__((alias("__imp__sub_8290AD98"))) PPC_WEAK_FUNC(sub_8290AD98);
PPC_FUNC_IMPL(__imp__sub_8290AD98) {
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
	ctx.lr = 0x8290ADB0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,1644
	ctx.r11.s64 = ctx.r11.s64 + 1644;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82906e90
	ctx.lr = 0x8290ADC0;
	sub_82906E90(ctx, base);
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

__attribute__((alias("__imp__sub_8290ADE8"))) PPC_WEAK_FUNC(sub_8290ADE8);
PPC_FUNC_IMPL(__imp__sub_8290ADE8) {
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
	ctx.lr = 0x8290AE00;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,1656
	ctx.r11.s64 = ctx.r11.s64 + 1656;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82906ee0
	ctx.lr = 0x8290AE10;
	sub_82906EE0(ctx, base);
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

__attribute__((alias("__imp__sub_8290AE38"))) PPC_WEAK_FUNC(sub_8290AE38);
PPC_FUNC_IMPL(__imp__sub_8290AE38) {
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
	ctx.lr = 0x8290AE50;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,1668
	ctx.r11.s64 = ctx.r11.s64 + 1668;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82906f30
	ctx.lr = 0x8290AE60;
	sub_82906F30(ctx, base);
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

__attribute__((alias("__imp__sub_8290AE88"))) PPC_WEAK_FUNC(sub_8290AE88);
PPC_FUNC_IMPL(__imp__sub_8290AE88) {
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
	ctx.lr = 0x8290AEA0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,1680
	ctx.r11.s64 = ctx.r11.s64 + 1680;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82906f80
	ctx.lr = 0x8290AEB0;
	sub_82906F80(ctx, base);
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

__attribute__((alias("__imp__sub_8290AED8"))) PPC_WEAK_FUNC(sub_8290AED8);
PPC_FUNC_IMPL(__imp__sub_8290AED8) {
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
	ctx.lr = 0x8290AEF0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,1692
	ctx.r11.s64 = ctx.r11.s64 + 1692;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82906fd0
	ctx.lr = 0x8290AF00;
	sub_82906FD0(ctx, base);
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

__attribute__((alias("__imp__sub_8290AF28"))) PPC_WEAK_FUNC(sub_8290AF28);
PPC_FUNC_IMPL(__imp__sub_8290AF28) {
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
	ctx.lr = 0x8290AF40;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,1704
	ctx.r11.s64 = ctx.r11.s64 + 1704;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82907020
	ctx.lr = 0x8290AF50;
	sub_82907020(ctx, base);
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

__attribute__((alias("__imp__sub_8290AF78"))) PPC_WEAK_FUNC(sub_8290AF78);
PPC_FUNC_IMPL(__imp__sub_8290AF78) {
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
	ctx.lr = 0x8290AF90;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,1716
	ctx.r11.s64 = ctx.r11.s64 + 1716;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82907070
	ctx.lr = 0x8290AFA0;
	sub_82907070(ctx, base);
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

__attribute__((alias("__imp__sub_8290AFC8"))) PPC_WEAK_FUNC(sub_8290AFC8);
PPC_FUNC_IMPL(__imp__sub_8290AFC8) {
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
	ctx.lr = 0x8290AFE0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,1728
	ctx.r11.s64 = ctx.r11.s64 + 1728;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x829070c0
	ctx.lr = 0x8290AFF0;
	sub_829070C0(ctx, base);
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

__attribute__((alias("__imp__sub_8290B018"))) PPC_WEAK_FUNC(sub_8290B018);
PPC_FUNC_IMPL(__imp__sub_8290B018) {
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
	ctx.lr = 0x8290B030;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,1740
	ctx.r11.s64 = ctx.r11.s64 + 1740;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82907110
	ctx.lr = 0x8290B040;
	sub_82907110(ctx, base);
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

__attribute__((alias("__imp__sub_8290B068"))) PPC_WEAK_FUNC(sub_8290B068);
PPC_FUNC_IMPL(__imp__sub_8290B068) {
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
	ctx.lr = 0x8290B080;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,1752
	ctx.r11.s64 = ctx.r11.s64 + 1752;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82907160
	ctx.lr = 0x8290B090;
	sub_82907160(ctx, base);
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

__attribute__((alias("__imp__sub_8290B0B8"))) PPC_WEAK_FUNC(sub_8290B0B8);
PPC_FUNC_IMPL(__imp__sub_8290B0B8) {
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
	ctx.lr = 0x8290B0D0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,1764
	ctx.r11.s64 = ctx.r11.s64 + 1764;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x829071b0
	ctx.lr = 0x8290B0E0;
	sub_829071B0(ctx, base);
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

__attribute__((alias("__imp__sub_8290B108"))) PPC_WEAK_FUNC(sub_8290B108);
PPC_FUNC_IMPL(__imp__sub_8290B108) {
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
	ctx.lr = 0x8290B120;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,1776
	ctx.r11.s64 = ctx.r11.s64 + 1776;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82907200
	ctx.lr = 0x8290B130;
	sub_82907200(ctx, base);
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

__attribute__((alias("__imp__sub_8290B158"))) PPC_WEAK_FUNC(sub_8290B158);
PPC_FUNC_IMPL(__imp__sub_8290B158) {
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
	ctx.lr = 0x8290B170;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,1788
	ctx.r11.s64 = ctx.r11.s64 + 1788;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82907250
	ctx.lr = 0x8290B180;
	sub_82907250(ctx, base);
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

__attribute__((alias("__imp__sub_8290B1A8"))) PPC_WEAK_FUNC(sub_8290B1A8);
PPC_FUNC_IMPL(__imp__sub_8290B1A8) {
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
	ctx.lr = 0x8290B1C0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,1800
	ctx.r11.s64 = ctx.r11.s64 + 1800;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x829072a0
	ctx.lr = 0x8290B1D0;
	sub_829072A0(ctx, base);
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

__attribute__((alias("__imp__sub_8290B1F8"))) PPC_WEAK_FUNC(sub_8290B1F8);
PPC_FUNC_IMPL(__imp__sub_8290B1F8) {
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
	ctx.lr = 0x8290B210;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,1812
	ctx.r11.s64 = ctx.r11.s64 + 1812;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x829072f0
	ctx.lr = 0x8290B220;
	sub_829072F0(ctx, base);
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

__attribute__((alias("__imp__sub_8290B248"))) PPC_WEAK_FUNC(sub_8290B248);
PPC_FUNC_IMPL(__imp__sub_8290B248) {
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
	ctx.lr = 0x8290B260;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,1824
	ctx.r11.s64 = ctx.r11.s64 + 1824;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82907340
	ctx.lr = 0x8290B270;
	sub_82907340(ctx, base);
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

__attribute__((alias("__imp__sub_8290B298"))) PPC_WEAK_FUNC(sub_8290B298);
PPC_FUNC_IMPL(__imp__sub_8290B298) {
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
	ctx.lr = 0x8290B2B0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,1836
	ctx.r11.s64 = ctx.r11.s64 + 1836;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82907390
	ctx.lr = 0x8290B2C0;
	sub_82907390(ctx, base);
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

__attribute__((alias("__imp__sub_8290B2E8"))) PPC_WEAK_FUNC(sub_8290B2E8);
PPC_FUNC_IMPL(__imp__sub_8290B2E8) {
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
	ctx.lr = 0x8290B300;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,1848
	ctx.r11.s64 = ctx.r11.s64 + 1848;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x829073e0
	ctx.lr = 0x8290B310;
	sub_829073E0(ctx, base);
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

__attribute__((alias("__imp__sub_8290B338"))) PPC_WEAK_FUNC(sub_8290B338);
PPC_FUNC_IMPL(__imp__sub_8290B338) {
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
	ctx.lr = 0x8290B350;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,1860
	ctx.r11.s64 = ctx.r11.s64 + 1860;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82907430
	ctx.lr = 0x8290B360;
	sub_82907430(ctx, base);
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

__attribute__((alias("__imp__sub_8290B388"))) PPC_WEAK_FUNC(sub_8290B388);
PPC_FUNC_IMPL(__imp__sub_8290B388) {
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
	ctx.lr = 0x8290B3A0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,1872
	ctx.r11.s64 = ctx.r11.s64 + 1872;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82907480
	ctx.lr = 0x8290B3B0;
	sub_82907480(ctx, base);
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

__attribute__((alias("__imp__sub_8290B3D8"))) PPC_WEAK_FUNC(sub_8290B3D8);
PPC_FUNC_IMPL(__imp__sub_8290B3D8) {
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
	ctx.lr = 0x8290B3F0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,1884
	ctx.r11.s64 = ctx.r11.s64 + 1884;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x829074d0
	ctx.lr = 0x8290B400;
	sub_829074D0(ctx, base);
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

__attribute__((alias("__imp__sub_8290B428"))) PPC_WEAK_FUNC(sub_8290B428);
PPC_FUNC_IMPL(__imp__sub_8290B428) {
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
	ctx.lr = 0x8290B440;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,1896
	ctx.r11.s64 = ctx.r11.s64 + 1896;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82907520
	ctx.lr = 0x8290B450;
	sub_82907520(ctx, base);
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

__attribute__((alias("__imp__sub_8290B478"))) PPC_WEAK_FUNC(sub_8290B478);
PPC_FUNC_IMPL(__imp__sub_8290B478) {
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
	ctx.lr = 0x8290B490;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,1908
	ctx.r11.s64 = ctx.r11.s64 + 1908;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82907570
	ctx.lr = 0x8290B4A0;
	sub_82907570(ctx, base);
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

__attribute__((alias("__imp__sub_8290B4C8"))) PPC_WEAK_FUNC(sub_8290B4C8);
PPC_FUNC_IMPL(__imp__sub_8290B4C8) {
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
	ctx.lr = 0x8290B4E0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,1920
	ctx.r11.s64 = ctx.r11.s64 + 1920;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x829075c0
	ctx.lr = 0x8290B4F0;
	sub_829075C0(ctx, base);
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

__attribute__((alias("__imp__sub_8290B518"))) PPC_WEAK_FUNC(sub_8290B518);
PPC_FUNC_IMPL(__imp__sub_8290B518) {
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
	ctx.lr = 0x8290B530;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,1932
	ctx.r11.s64 = ctx.r11.s64 + 1932;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82907610
	ctx.lr = 0x8290B540;
	sub_82907610(ctx, base);
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

__attribute__((alias("__imp__sub_8290B568"))) PPC_WEAK_FUNC(sub_8290B568);
PPC_FUNC_IMPL(__imp__sub_8290B568) {
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
	ctx.lr = 0x8290B580;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,1944
	ctx.r11.s64 = ctx.r11.s64 + 1944;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82907660
	ctx.lr = 0x8290B590;
	sub_82907660(ctx, base);
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

__attribute__((alias("__imp__sub_8290B5B8"))) PPC_WEAK_FUNC(sub_8290B5B8);
PPC_FUNC_IMPL(__imp__sub_8290B5B8) {
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
	ctx.lr = 0x8290B5D0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,1956
	ctx.r11.s64 = ctx.r11.s64 + 1956;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x829076b0
	ctx.lr = 0x8290B5E0;
	sub_829076B0(ctx, base);
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

__attribute__((alias("__imp__sub_8290B608"))) PPC_WEAK_FUNC(sub_8290B608);
PPC_FUNC_IMPL(__imp__sub_8290B608) {
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
	ctx.lr = 0x8290B620;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,1968
	ctx.r11.s64 = ctx.r11.s64 + 1968;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82907700
	ctx.lr = 0x8290B630;
	sub_82907700(ctx, base);
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

__attribute__((alias("__imp__sub_8290B658"))) PPC_WEAK_FUNC(sub_8290B658);
PPC_FUNC_IMPL(__imp__sub_8290B658) {
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
	ctx.lr = 0x8290B670;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,1980
	ctx.r11.s64 = ctx.r11.s64 + 1980;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82907750
	ctx.lr = 0x8290B680;
	sub_82907750(ctx, base);
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

__attribute__((alias("__imp__sub_8290B6A8"))) PPC_WEAK_FUNC(sub_8290B6A8);
PPC_FUNC_IMPL(__imp__sub_8290B6A8) {
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
	ctx.lr = 0x8290B6C0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,1992
	ctx.r11.s64 = ctx.r11.s64 + 1992;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x829077a0
	ctx.lr = 0x8290B6D0;
	sub_829077A0(ctx, base);
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

__attribute__((alias("__imp__sub_8290B6F8"))) PPC_WEAK_FUNC(sub_8290B6F8);
PPC_FUNC_IMPL(__imp__sub_8290B6F8) {
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
	ctx.lr = 0x8290B710;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,2004
	ctx.r11.s64 = ctx.r11.s64 + 2004;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x829077f0
	ctx.lr = 0x8290B720;
	sub_829077F0(ctx, base);
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

__attribute__((alias("__imp__sub_8290B748"))) PPC_WEAK_FUNC(sub_8290B748);
PPC_FUNC_IMPL(__imp__sub_8290B748) {
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
	ctx.lr = 0x8290B760;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,2016
	ctx.r11.s64 = ctx.r11.s64 + 2016;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82907840
	ctx.lr = 0x8290B770;
	sub_82907840(ctx, base);
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

__attribute__((alias("__imp__sub_8290B798"))) PPC_WEAK_FUNC(sub_8290B798);
PPC_FUNC_IMPL(__imp__sub_8290B798) {
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
	ctx.lr = 0x8290B7B0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,2028
	ctx.r11.s64 = ctx.r11.s64 + 2028;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82907890
	ctx.lr = 0x8290B7C0;
	sub_82907890(ctx, base);
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

__attribute__((alias("__imp__sub_8290B7E8"))) PPC_WEAK_FUNC(sub_8290B7E8);
PPC_FUNC_IMPL(__imp__sub_8290B7E8) {
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
	ctx.lr = 0x8290B800;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,2040
	ctx.r11.s64 = ctx.r11.s64 + 2040;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x829078e0
	ctx.lr = 0x8290B810;
	sub_829078E0(ctx, base);
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

__attribute__((alias("__imp__sub_8290B838"))) PPC_WEAK_FUNC(sub_8290B838);
PPC_FUNC_IMPL(__imp__sub_8290B838) {
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
	ctx.lr = 0x8290B850;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,2052
	ctx.r11.s64 = ctx.r11.s64 + 2052;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82907930
	ctx.lr = 0x8290B860;
	sub_82907930(ctx, base);
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

__attribute__((alias("__imp__sub_8290B888"))) PPC_WEAK_FUNC(sub_8290B888);
PPC_FUNC_IMPL(__imp__sub_8290B888) {
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
	ctx.lr = 0x8290B8A0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,2064
	ctx.r11.s64 = ctx.r11.s64 + 2064;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82907980
	ctx.lr = 0x8290B8B0;
	sub_82907980(ctx, base);
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

__attribute__((alias("__imp__sub_8290B8D8"))) PPC_WEAK_FUNC(sub_8290B8D8);
PPC_FUNC_IMPL(__imp__sub_8290B8D8) {
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
	ctx.lr = 0x8290B8F0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,2076
	ctx.r11.s64 = ctx.r11.s64 + 2076;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x829079d0
	ctx.lr = 0x8290B900;
	sub_829079D0(ctx, base);
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

__attribute__((alias("__imp__sub_8290B928"))) PPC_WEAK_FUNC(sub_8290B928);
PPC_FUNC_IMPL(__imp__sub_8290B928) {
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
	ctx.lr = 0x8290B940;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,2088
	ctx.r11.s64 = ctx.r11.s64 + 2088;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82907a20
	ctx.lr = 0x8290B950;
	sub_82907A20(ctx, base);
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

__attribute__((alias("__imp__sub_8290B978"))) PPC_WEAK_FUNC(sub_8290B978);
PPC_FUNC_IMPL(__imp__sub_8290B978) {
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
	ctx.lr = 0x8290B990;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,2100
	ctx.r11.s64 = ctx.r11.s64 + 2100;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82907a70
	ctx.lr = 0x8290B9A0;
	sub_82907A70(ctx, base);
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

__attribute__((alias("__imp__sub_8290B9C8"))) PPC_WEAK_FUNC(sub_8290B9C8);
PPC_FUNC_IMPL(__imp__sub_8290B9C8) {
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
	ctx.lr = 0x8290B9E0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,2112
	ctx.r11.s64 = ctx.r11.s64 + 2112;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82907ac0
	ctx.lr = 0x8290B9F0;
	sub_82907AC0(ctx, base);
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

__attribute__((alias("__imp__sub_8290BA18"))) PPC_WEAK_FUNC(sub_8290BA18);
PPC_FUNC_IMPL(__imp__sub_8290BA18) {
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
	ctx.lr = 0x8290BA30;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,2124
	ctx.r11.s64 = ctx.r11.s64 + 2124;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82907b10
	ctx.lr = 0x8290BA40;
	sub_82907B10(ctx, base);
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

__attribute__((alias("__imp__sub_8290BA68"))) PPC_WEAK_FUNC(sub_8290BA68);
PPC_FUNC_IMPL(__imp__sub_8290BA68) {
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
	ctx.lr = 0x8290BA80;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,2136
	ctx.r11.s64 = ctx.r11.s64 + 2136;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82907b60
	ctx.lr = 0x8290BA90;
	sub_82907B60(ctx, base);
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

__attribute__((alias("__imp__sub_8290BAB8"))) PPC_WEAK_FUNC(sub_8290BAB8);
PPC_FUNC_IMPL(__imp__sub_8290BAB8) {
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
	ctx.lr = 0x8290BAD0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 + 2148;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82907bb0
	ctx.lr = 0x8290BAE0;
	sub_82907BB0(ctx, base);
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

__attribute__((alias("__imp__sub_8290BB08"))) PPC_WEAK_FUNC(sub_8290BB08);
PPC_FUNC_IMPL(__imp__sub_8290BB08) {
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
	ctx.lr = 0x8290BB20;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,2160
	ctx.r11.s64 = ctx.r11.s64 + 2160;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82907c00
	ctx.lr = 0x8290BB30;
	sub_82907C00(ctx, base);
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

__attribute__((alias("__imp__sub_8290BB58"))) PPC_WEAK_FUNC(sub_8290BB58);
PPC_FUNC_IMPL(__imp__sub_8290BB58) {
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
	ctx.lr = 0x8290BB70;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,2172
	ctx.r11.s64 = ctx.r11.s64 + 2172;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82907c50
	ctx.lr = 0x8290BB80;
	sub_82907C50(ctx, base);
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

__attribute__((alias("__imp__sub_8290BBA8"))) PPC_WEAK_FUNC(sub_8290BBA8);
PPC_FUNC_IMPL(__imp__sub_8290BBA8) {
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
	ctx.lr = 0x8290BBC0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,2184
	ctx.r11.s64 = ctx.r11.s64 + 2184;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82907ca0
	ctx.lr = 0x8290BBD0;
	sub_82907CA0(ctx, base);
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

__attribute__((alias("__imp__sub_8290BBF8"))) PPC_WEAK_FUNC(sub_8290BBF8);
PPC_FUNC_IMPL(__imp__sub_8290BBF8) {
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
	ctx.lr = 0x8290BC10;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,2196
	ctx.r11.s64 = ctx.r11.s64 + 2196;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82907cf0
	ctx.lr = 0x8290BC20;
	sub_82907CF0(ctx, base);
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

__attribute__((alias("__imp__sub_8290BC48"))) PPC_WEAK_FUNC(sub_8290BC48);
PPC_FUNC_IMPL(__imp__sub_8290BC48) {
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
	ctx.lr = 0x8290BC60;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,2208
	ctx.r11.s64 = ctx.r11.s64 + 2208;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82907d40
	ctx.lr = 0x8290BC70;
	sub_82907D40(ctx, base);
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

__attribute__((alias("__imp__sub_8290BC98"))) PPC_WEAK_FUNC(sub_8290BC98);
PPC_FUNC_IMPL(__imp__sub_8290BC98) {
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
	// bl 0x82906df0
	ctx.lr = 0x8290BCB0;
	sub_82906DF0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290bcc4
	if (ctx.cr6.eq) goto loc_8290BCC4;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290BCC4:
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

__attribute__((alias("__imp__sub_8290BCE0"))) PPC_WEAK_FUNC(sub_8290BCE0);
PPC_FUNC_IMPL(__imp__sub_8290BCE0) {
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
	// bl 0x82906e40
	ctx.lr = 0x8290BCF8;
	sub_82906E40(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290bd0c
	if (ctx.cr6.eq) goto loc_8290BD0C;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290BD0C:
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

__attribute__((alias("__imp__sub_8290BD28"))) PPC_WEAK_FUNC(sub_8290BD28);
PPC_FUNC_IMPL(__imp__sub_8290BD28) {
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
	// bl 0x82906e90
	ctx.lr = 0x8290BD40;
	sub_82906E90(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290bd54
	if (ctx.cr6.eq) goto loc_8290BD54;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290BD54:
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

__attribute__((alias("__imp__sub_8290BD70"))) PPC_WEAK_FUNC(sub_8290BD70);
PPC_FUNC_IMPL(__imp__sub_8290BD70) {
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
	// bl 0x82906ee0
	ctx.lr = 0x8290BD88;
	sub_82906EE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290bd9c
	if (ctx.cr6.eq) goto loc_8290BD9C;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290BD9C:
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

__attribute__((alias("__imp__sub_8290BDB8"))) PPC_WEAK_FUNC(sub_8290BDB8);
PPC_FUNC_IMPL(__imp__sub_8290BDB8) {
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
	// bl 0x82906f30
	ctx.lr = 0x8290BDD0;
	sub_82906F30(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290bde4
	if (ctx.cr6.eq) goto loc_8290BDE4;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290BDE4:
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

__attribute__((alias("__imp__sub_8290BE00"))) PPC_WEAK_FUNC(sub_8290BE00);
PPC_FUNC_IMPL(__imp__sub_8290BE00) {
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
	// bl 0x82906f80
	ctx.lr = 0x8290BE18;
	sub_82906F80(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290be2c
	if (ctx.cr6.eq) goto loc_8290BE2C;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290BE2C:
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

__attribute__((alias("__imp__sub_8290BE48"))) PPC_WEAK_FUNC(sub_8290BE48);
PPC_FUNC_IMPL(__imp__sub_8290BE48) {
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
	// bl 0x82906fd0
	ctx.lr = 0x8290BE60;
	sub_82906FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290be74
	if (ctx.cr6.eq) goto loc_8290BE74;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290BE74:
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

__attribute__((alias("__imp__sub_8290BE90"))) PPC_WEAK_FUNC(sub_8290BE90);
PPC_FUNC_IMPL(__imp__sub_8290BE90) {
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
	// bl 0x82907020
	ctx.lr = 0x8290BEA8;
	sub_82907020(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290bebc
	if (ctx.cr6.eq) goto loc_8290BEBC;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290BEBC:
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

__attribute__((alias("__imp__sub_8290BED8"))) PPC_WEAK_FUNC(sub_8290BED8);
PPC_FUNC_IMPL(__imp__sub_8290BED8) {
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
	// bl 0x82907070
	ctx.lr = 0x8290BEF0;
	sub_82907070(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290bf04
	if (ctx.cr6.eq) goto loc_8290BF04;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290BF04:
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

__attribute__((alias("__imp__sub_8290BF20"))) PPC_WEAK_FUNC(sub_8290BF20);
PPC_FUNC_IMPL(__imp__sub_8290BF20) {
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
	// bl 0x829070c0
	ctx.lr = 0x8290BF38;
	sub_829070C0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290bf4c
	if (ctx.cr6.eq) goto loc_8290BF4C;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290BF4C:
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

__attribute__((alias("__imp__sub_8290BF68"))) PPC_WEAK_FUNC(sub_8290BF68);
PPC_FUNC_IMPL(__imp__sub_8290BF68) {
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
	// bl 0x82907110
	ctx.lr = 0x8290BF80;
	sub_82907110(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290bf94
	if (ctx.cr6.eq) goto loc_8290BF94;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290BF94:
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

__attribute__((alias("__imp__sub_8290BFB0"))) PPC_WEAK_FUNC(sub_8290BFB0);
PPC_FUNC_IMPL(__imp__sub_8290BFB0) {
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
	// bl 0x82907160
	ctx.lr = 0x8290BFC8;
	sub_82907160(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290bfdc
	if (ctx.cr6.eq) goto loc_8290BFDC;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290BFDC:
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

__attribute__((alias("__imp__sub_8290BFF8"))) PPC_WEAK_FUNC(sub_8290BFF8);
PPC_FUNC_IMPL(__imp__sub_8290BFF8) {
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
	// bl 0x829071b0
	ctx.lr = 0x8290C010;
	sub_829071B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290c024
	if (ctx.cr6.eq) goto loc_8290C024;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290C024:
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

__attribute__((alias("__imp__sub_8290C040"))) PPC_WEAK_FUNC(sub_8290C040);
PPC_FUNC_IMPL(__imp__sub_8290C040) {
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
	// bl 0x82907200
	ctx.lr = 0x8290C058;
	sub_82907200(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290c06c
	if (ctx.cr6.eq) goto loc_8290C06C;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290C06C:
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

__attribute__((alias("__imp__sub_8290C088"))) PPC_WEAK_FUNC(sub_8290C088);
PPC_FUNC_IMPL(__imp__sub_8290C088) {
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
	// bl 0x82907250
	ctx.lr = 0x8290C0A0;
	sub_82907250(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290c0b4
	if (ctx.cr6.eq) goto loc_8290C0B4;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290C0B4:
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

__attribute__((alias("__imp__sub_8290C0D0"))) PPC_WEAK_FUNC(sub_8290C0D0);
PPC_FUNC_IMPL(__imp__sub_8290C0D0) {
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
	// bl 0x829072a0
	ctx.lr = 0x8290C0E8;
	sub_829072A0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290c0fc
	if (ctx.cr6.eq) goto loc_8290C0FC;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290C0FC:
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

__attribute__((alias("__imp__sub_8290C118"))) PPC_WEAK_FUNC(sub_8290C118);
PPC_FUNC_IMPL(__imp__sub_8290C118) {
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
	// bl 0x829072f0
	ctx.lr = 0x8290C130;
	sub_829072F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290c144
	if (ctx.cr6.eq) goto loc_8290C144;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290C144:
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

__attribute__((alias("__imp__sub_8290C160"))) PPC_WEAK_FUNC(sub_8290C160);
PPC_FUNC_IMPL(__imp__sub_8290C160) {
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
	// bl 0x82907340
	ctx.lr = 0x8290C178;
	sub_82907340(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290c18c
	if (ctx.cr6.eq) goto loc_8290C18C;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290C18C:
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

__attribute__((alias("__imp__sub_8290C1A8"))) PPC_WEAK_FUNC(sub_8290C1A8);
PPC_FUNC_IMPL(__imp__sub_8290C1A8) {
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
	// bl 0x82907390
	ctx.lr = 0x8290C1C0;
	sub_82907390(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290c1d4
	if (ctx.cr6.eq) goto loc_8290C1D4;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290C1D4:
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

__attribute__((alias("__imp__sub_8290C1F0"))) PPC_WEAK_FUNC(sub_8290C1F0);
PPC_FUNC_IMPL(__imp__sub_8290C1F0) {
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
	// bl 0x829073e0
	ctx.lr = 0x8290C208;
	sub_829073E0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290c21c
	if (ctx.cr6.eq) goto loc_8290C21C;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290C21C:
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

__attribute__((alias("__imp__sub_8290C238"))) PPC_WEAK_FUNC(sub_8290C238);
PPC_FUNC_IMPL(__imp__sub_8290C238) {
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
	// bl 0x82907430
	ctx.lr = 0x8290C250;
	sub_82907430(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290c264
	if (ctx.cr6.eq) goto loc_8290C264;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290C264:
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

__attribute__((alias("__imp__sub_8290C280"))) PPC_WEAK_FUNC(sub_8290C280);
PPC_FUNC_IMPL(__imp__sub_8290C280) {
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
	// bl 0x82907480
	ctx.lr = 0x8290C298;
	sub_82907480(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290c2ac
	if (ctx.cr6.eq) goto loc_8290C2AC;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290C2AC:
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

__attribute__((alias("__imp__sub_8290C2C8"))) PPC_WEAK_FUNC(sub_8290C2C8);
PPC_FUNC_IMPL(__imp__sub_8290C2C8) {
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
	// bl 0x829074d0
	ctx.lr = 0x8290C2E0;
	sub_829074D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290c2f4
	if (ctx.cr6.eq) goto loc_8290C2F4;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290C2F4:
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

__attribute__((alias("__imp__sub_8290C310"))) PPC_WEAK_FUNC(sub_8290C310);
PPC_FUNC_IMPL(__imp__sub_8290C310) {
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
	// bl 0x82907520
	ctx.lr = 0x8290C328;
	sub_82907520(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290c33c
	if (ctx.cr6.eq) goto loc_8290C33C;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290C33C:
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

__attribute__((alias("__imp__sub_8290C358"))) PPC_WEAK_FUNC(sub_8290C358);
PPC_FUNC_IMPL(__imp__sub_8290C358) {
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
	// bl 0x82907570
	ctx.lr = 0x8290C370;
	sub_82907570(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290c384
	if (ctx.cr6.eq) goto loc_8290C384;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290C384:
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

__attribute__((alias("__imp__sub_8290C3A0"))) PPC_WEAK_FUNC(sub_8290C3A0);
PPC_FUNC_IMPL(__imp__sub_8290C3A0) {
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
	// bl 0x829075c0
	ctx.lr = 0x8290C3B8;
	sub_829075C0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290c3cc
	if (ctx.cr6.eq) goto loc_8290C3CC;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290C3CC:
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

__attribute__((alias("__imp__sub_8290C3E8"))) PPC_WEAK_FUNC(sub_8290C3E8);
PPC_FUNC_IMPL(__imp__sub_8290C3E8) {
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
	// bl 0x82907610
	ctx.lr = 0x8290C400;
	sub_82907610(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290c414
	if (ctx.cr6.eq) goto loc_8290C414;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290C414:
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

__attribute__((alias("__imp__sub_8290C430"))) PPC_WEAK_FUNC(sub_8290C430);
PPC_FUNC_IMPL(__imp__sub_8290C430) {
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
	// bl 0x82907660
	ctx.lr = 0x8290C448;
	sub_82907660(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290c45c
	if (ctx.cr6.eq) goto loc_8290C45C;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290C45C:
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

__attribute__((alias("__imp__sub_8290C478"))) PPC_WEAK_FUNC(sub_8290C478);
PPC_FUNC_IMPL(__imp__sub_8290C478) {
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
	// bl 0x829076b0
	ctx.lr = 0x8290C490;
	sub_829076B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290c4a4
	if (ctx.cr6.eq) goto loc_8290C4A4;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290C4A4:
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

__attribute__((alias("__imp__sub_8290C4C0"))) PPC_WEAK_FUNC(sub_8290C4C0);
PPC_FUNC_IMPL(__imp__sub_8290C4C0) {
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
	// bl 0x82907700
	ctx.lr = 0x8290C4D8;
	sub_82907700(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290c4ec
	if (ctx.cr6.eq) goto loc_8290C4EC;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290C4EC:
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

__attribute__((alias("__imp__sub_8290C508"))) PPC_WEAK_FUNC(sub_8290C508);
PPC_FUNC_IMPL(__imp__sub_8290C508) {
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
	// bl 0x82907750
	ctx.lr = 0x8290C520;
	sub_82907750(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290c534
	if (ctx.cr6.eq) goto loc_8290C534;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290C534:
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

__attribute__((alias("__imp__sub_8290C550"))) PPC_WEAK_FUNC(sub_8290C550);
PPC_FUNC_IMPL(__imp__sub_8290C550) {
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
	// bl 0x829077a0
	ctx.lr = 0x8290C568;
	sub_829077A0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290c57c
	if (ctx.cr6.eq) goto loc_8290C57C;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290C57C:
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

__attribute__((alias("__imp__sub_8290C598"))) PPC_WEAK_FUNC(sub_8290C598);
PPC_FUNC_IMPL(__imp__sub_8290C598) {
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
	// bl 0x829077f0
	ctx.lr = 0x8290C5B0;
	sub_829077F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290c5c4
	if (ctx.cr6.eq) goto loc_8290C5C4;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290C5C4:
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

__attribute__((alias("__imp__sub_8290C5E0"))) PPC_WEAK_FUNC(sub_8290C5E0);
PPC_FUNC_IMPL(__imp__sub_8290C5E0) {
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
	// bl 0x82907840
	ctx.lr = 0x8290C5F8;
	sub_82907840(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290c60c
	if (ctx.cr6.eq) goto loc_8290C60C;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290C60C:
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

__attribute__((alias("__imp__sub_8290C628"))) PPC_WEAK_FUNC(sub_8290C628);
PPC_FUNC_IMPL(__imp__sub_8290C628) {
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
	// bl 0x82907890
	ctx.lr = 0x8290C640;
	sub_82907890(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290c654
	if (ctx.cr6.eq) goto loc_8290C654;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290C654:
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

__attribute__((alias("__imp__sub_8290C670"))) PPC_WEAK_FUNC(sub_8290C670);
PPC_FUNC_IMPL(__imp__sub_8290C670) {
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
	// bl 0x829078e0
	ctx.lr = 0x8290C688;
	sub_829078E0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290c69c
	if (ctx.cr6.eq) goto loc_8290C69C;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290C69C:
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

__attribute__((alias("__imp__sub_8290C6B8"))) PPC_WEAK_FUNC(sub_8290C6B8);
PPC_FUNC_IMPL(__imp__sub_8290C6B8) {
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
	// bl 0x82907930
	ctx.lr = 0x8290C6D0;
	sub_82907930(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290c6e4
	if (ctx.cr6.eq) goto loc_8290C6E4;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290C6E4:
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

__attribute__((alias("__imp__sub_8290C700"))) PPC_WEAK_FUNC(sub_8290C700);
PPC_FUNC_IMPL(__imp__sub_8290C700) {
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
	// bl 0x82907980
	ctx.lr = 0x8290C718;
	sub_82907980(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290c72c
	if (ctx.cr6.eq) goto loc_8290C72C;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290C72C:
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

__attribute__((alias("__imp__sub_8290C748"))) PPC_WEAK_FUNC(sub_8290C748);
PPC_FUNC_IMPL(__imp__sub_8290C748) {
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
	// bl 0x829079d0
	ctx.lr = 0x8290C760;
	sub_829079D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290c774
	if (ctx.cr6.eq) goto loc_8290C774;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290C774:
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

__attribute__((alias("__imp__sub_8290C790"))) PPC_WEAK_FUNC(sub_8290C790);
PPC_FUNC_IMPL(__imp__sub_8290C790) {
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
	// bl 0x82907a20
	ctx.lr = 0x8290C7A8;
	sub_82907A20(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290c7bc
	if (ctx.cr6.eq) goto loc_8290C7BC;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290C7BC:
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

__attribute__((alias("__imp__sub_8290C7D8"))) PPC_WEAK_FUNC(sub_8290C7D8);
PPC_FUNC_IMPL(__imp__sub_8290C7D8) {
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
	// bl 0x82907a70
	ctx.lr = 0x8290C7F0;
	sub_82907A70(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290c804
	if (ctx.cr6.eq) goto loc_8290C804;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290C804:
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

__attribute__((alias("__imp__sub_8290C820"))) PPC_WEAK_FUNC(sub_8290C820);
PPC_FUNC_IMPL(__imp__sub_8290C820) {
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
	// bl 0x82907ac0
	ctx.lr = 0x8290C838;
	sub_82907AC0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290c84c
	if (ctx.cr6.eq) goto loc_8290C84C;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290C84C:
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

__attribute__((alias("__imp__sub_8290C868"))) PPC_WEAK_FUNC(sub_8290C868);
PPC_FUNC_IMPL(__imp__sub_8290C868) {
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
	// bl 0x82907b10
	ctx.lr = 0x8290C880;
	sub_82907B10(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290c894
	if (ctx.cr6.eq) goto loc_8290C894;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290C894:
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

__attribute__((alias("__imp__sub_8290C8B0"))) PPC_WEAK_FUNC(sub_8290C8B0);
PPC_FUNC_IMPL(__imp__sub_8290C8B0) {
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
	// bl 0x82907b60
	ctx.lr = 0x8290C8C8;
	sub_82907B60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290c8dc
	if (ctx.cr6.eq) goto loc_8290C8DC;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290C8DC:
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

__attribute__((alias("__imp__sub_8290C8F8"))) PPC_WEAK_FUNC(sub_8290C8F8);
PPC_FUNC_IMPL(__imp__sub_8290C8F8) {
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
	// bl 0x82907bb0
	ctx.lr = 0x8290C910;
	sub_82907BB0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290c924
	if (ctx.cr6.eq) goto loc_8290C924;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290C924:
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

__attribute__((alias("__imp__sub_8290C940"))) PPC_WEAK_FUNC(sub_8290C940);
PPC_FUNC_IMPL(__imp__sub_8290C940) {
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
	// bl 0x82907c00
	ctx.lr = 0x8290C958;
	sub_82907C00(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290c96c
	if (ctx.cr6.eq) goto loc_8290C96C;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290C96C:
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

__attribute__((alias("__imp__sub_8290C988"))) PPC_WEAK_FUNC(sub_8290C988);
PPC_FUNC_IMPL(__imp__sub_8290C988) {
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
	// bl 0x82907c50
	ctx.lr = 0x8290C9A0;
	sub_82907C50(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290c9b4
	if (ctx.cr6.eq) goto loc_8290C9B4;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290C9B4:
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

__attribute__((alias("__imp__sub_8290C9D0"))) PPC_WEAK_FUNC(sub_8290C9D0);
PPC_FUNC_IMPL(__imp__sub_8290C9D0) {
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
	// bl 0x82907ca0
	ctx.lr = 0x8290C9E8;
	sub_82907CA0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290c9fc
	if (ctx.cr6.eq) goto loc_8290C9FC;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290C9FC:
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

__attribute__((alias("__imp__sub_8290CA18"))) PPC_WEAK_FUNC(sub_8290CA18);
PPC_FUNC_IMPL(__imp__sub_8290CA18) {
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
	// bl 0x82907cf0
	ctx.lr = 0x8290CA30;
	sub_82907CF0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290ca44
	if (ctx.cr6.eq) goto loc_8290CA44;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290CA44:
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

__attribute__((alias("__imp__sub_8290CA60"))) PPC_WEAK_FUNC(sub_8290CA60);
PPC_FUNC_IMPL(__imp__sub_8290CA60) {
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
	// bl 0x82907d40
	ctx.lr = 0x8290CA78;
	sub_82907D40(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8290ca8c
	if (ctx.cr6.eq) goto loc_8290CA8C;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8290CA8C:
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

__attribute__((alias("__imp__sub_8290CAA8"))) PPC_WEAK_FUNC(sub_8290CAA8);
PPC_FUNC_IMPL(__imp__sub_8290CAA8) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lwz r11,-32316(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32316);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8290cad8
	if (!ctx.cr0.eq) goto loc_8290CAD8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// stw r11,-32316(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32316, ctx.r11.u32);
	// addi r3,r9,-288
	ctx.r3.s64 = ctx.r9.s64 + -288;
	// bl 0x82a7e6b0
	ctx.lr = 0x8290CAD8;
	sub_82A7E6B0(ctx, base);
loc_8290CAD8:
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-32320
	ctx.r3.s64 = ctx.r11.s64 + -32320;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290CAF0"))) PPC_WEAK_FUNC(sub_8290CAF0);
PPC_FUNC_IMPL(__imp__sub_8290CAF0) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830b2320
	ctx.lr = 0x8290CB0C;
	sub_830B2320(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829091f0
	ctx.lr = 0x8290CB14;
	sub_829091F0(ctx, base);
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

__attribute__((alias("__imp__sub_8290CB28"))) PPC_WEAK_FUNC(sub_8290CB28);
PPC_FUNC_IMPL(__imp__sub_8290CB28) {
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
	// bl 0x82908298
	ctx.lr = 0x8290CB44;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,2220
	ctx.r11.s64 = ctx.r11.s64 + 2220;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82411478
	ctx.lr = 0x8290CB68;
	sub_82411478(ctx, base);
	// stb r30,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_8290CB88"))) PPC_WEAK_FUNC(sub_8290CB88);
PPC_FUNC_IMPL(__imp__sub_8290CB88) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// addi r11,r11,2220
	ctx.r11.s64 = ctx.r11.s64 + 2220;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82411478
	ctx.lr = 0x8290CBB8;
	sub_82411478(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-2060
	ctx.r11.s64 = ctx.r11.s64 + -2060;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82e50e28
	ctx.lr = 0x8290CBCC;
	sub_82E50E28(ctx, base);
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

__attribute__((alias("__imp__sub_8290CBE0"))) PPC_WEAK_FUNC(sub_8290CBE0);
PPC_FUNC_IMPL(__imp__sub_8290CBE0) {
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
	// bl 0x82908298
	ctx.lr = 0x8290CBF8;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,2340
	ctx.r11.s64 = ctx.r11.s64 + 2340;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r5,r10,15768
	ctx.r5.s64 = ctx.r10.s64 + 15768;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82e50ed8
	ctx.lr = 0x8290CC1C;
	sub_82E50ED8(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x828c78b8
	ctx.lr = 0x8290CC24;
	sub_828C78B8(ctx, base);
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

__attribute__((alias("__imp__sub_8290CC40"))) PPC_WEAK_FUNC(sub_8290CC40);
PPC_FUNC_IMPL(__imp__sub_8290CC40) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// addi r11,r11,2340
	ctx.r11.s64 = ctx.r11.s64 + 2340;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828c7910
	ctx.lr = 0x8290CC68;
	sub_828C7910(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-2060
	ctx.r11.s64 = ctx.r11.s64 + -2060;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82e50e28
	ctx.lr = 0x8290CC7C;
	sub_82E50E28(ctx, base);
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

__attribute__((alias("__imp__sub_8290CC90"))) PPC_WEAK_FUNC(sub_8290CC90);
PPC_FUNC_IMPL(__imp__sub_8290CC90) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,9348
	ctx.r11.s64 = ctx.r11.s64 + 9348;
	// addi r10,r10,-2060
	ctx.r10.s64 = ctx.r10.s64 + -2060;
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e50e28
	ctx.lr = 0x8290CCC8;
	sub_82E50E28(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290ccd8
	if (ctx.cr0.eq) goto loc_8290CCD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8290CCD8;
	sub_823FD208(ctx, base);
loc_8290CCD8:
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

__attribute__((alias("__imp__sub_8290CCF8"))) PPC_WEAK_FUNC(sub_8290CCF8);
PPC_FUNC_IMPL(__imp__sub_8290CCF8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lbz r10,224(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 224);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1276
	ctx.r11.s64 = ctx.r11.s64 + -1276;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bne 0x8290cd38
	if (!ctx.cr0.eq) goto loc_8290CD38;
	// lwz r3,220(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290cd38
	if (ctx.cr6.eq) goto loc_8290CD38;
	// bl 0x82aadbb8
	ctx.lr = 0x8290CD38;
	sub_82AADBB8(ctx, base);
loc_8290CD38:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x829086e0
	ctx.lr = 0x8290CD40;
	sub_829086E0(ctx, base);
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

__attribute__((alias("__imp__sub_8290CD58"))) PPC_WEAK_FUNC(sub_8290CD58);
PPC_FUNC_IMPL(__imp__sub_8290CD58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8290CD60;
	__savegprlr_29(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82908648
	ctx.lr = 0x8290CD84;
	sub_82908648(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82909f68
	ctx.lr = 0x8290CD90;
	sub_82909F68(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-4084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4084);
	// lwz r10,2020(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2020);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8290cdb8
	if (!ctx.cr6.eq) goto loc_8290CDB8;
	// lwz r11,3536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3536);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8290cdb8
	if (!ctx.cr6.eq) goto loc_8290CDB8;
	// li r4,1
	ctx.r4.s64 = 1;
loc_8290CDB8:
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// addi r7,r31,216
	ctx.r7.s64 = ctx.r31.s64 + 216;
	// addi r6,r31,16
	ctx.r6.s64 = ctx.r31.s64 + 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// bl 0x82ab9228
	ctx.lr = 0x8290CDD4;
	sub_82AB9228(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x8290cde8
	if (!ctx.cr0.lt) goto loc_8290CDE8;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x82aadb68
	ctx.lr = 0x8290CDE4;
	sub_82AADB68(ctx, base);
	// b 0x8290cdf0
	goto loc_8290CDF0;
loc_8290CDE8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r11.u8);
loc_8290CDF0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829086e0
	ctx.lr = 0x8290CDF8;
	sub_829086E0(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290CE00"))) PPC_WEAK_FUNC(sub_8290CE00);
PPC_FUNC_IMPL(__imp__sub_8290CE00) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,9348
	ctx.r11.s64 = ctx.r11.s64 + 9348;
	// addi r10,r10,-2060
	ctx.r10.s64 = ctx.r10.s64 + -2060;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e50e28
	ctx.lr = 0x8290CE38;
	sub_82E50E28(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290ce48
	if (ctx.cr0.eq) goto loc_8290CE48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8290CE48;
	sub_823FD208(ctx, base);
loc_8290CE48:
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

__attribute__((alias("__imp__sub_8290CE68"))) PPC_WEAK_FUNC(sub_8290CE68);
PPC_FUNC_IMPL(__imp__sub_8290CE68) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// lwz r11,-4084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4084);
	// std r10,2040(r11)
	PPC_STORE_U64(ctx.r11.u32 + 2040, ctx.r10.u64);
	// bl 0x82e512a0
	ctx.lr = 0x8290CE90;
	sub_82E512A0(ctx, base);
	// lwz r11,-4084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4084);
	// ld r5,2024(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 2024);
	// lwz r4,3352(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3352);
	// bl 0x8290cd58
	ctx.lr = 0x8290CEA0;
	sub_8290CD58(ctx, base);
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

__attribute__((alias("__imp__sub_8290CEB8"))) PPC_WEAK_FUNC(sub_8290CEB8);
PPC_FUNC_IMPL(__imp__sub_8290CEB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddfc
	ctx.lr = 0x8290CEC0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830b2320
	ctx.lr = 0x8290CEE0;
	sub_830B2320(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// bl 0x82e512a0
	ctx.lr = 0x8290CEEC;
	sub_82E512A0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,23988(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23988);
	// bl 0x82882378
	ctx.lr = 0x8290CEFC;
	sub_82882378(ctx, base);
	// lbz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8290cf90
	if (!ctx.cr6.eq) goto loc_8290CF90;
	// clrlwi. r25,r3,24
	ctx.r25.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne 0x8290cf90
	if (!ctx.cr0.eq) goto loc_8290CF90;
	// lis r29,-31954
	ctx.r29.s64 = -2094137344;
	// lwz r11,-4084(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4084);
	// lbz r10,2995(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2995);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8290cf60
	if (ctx.cr0.eq) goto loc_8290CF60;
	// lbz r10,224(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 224);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8290cf4c
	if (!ctx.cr0.eq) goto loc_8290CF4C;
	// lwz r3,220(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8290cf4c
	if (ctx.cr6.eq) goto loc_8290CF4C;
	// bl 0x82aadbb8
	ctx.lr = 0x8290CF48;
	sub_82AADBB8(ctx, base);
	// lwz r11,-4084(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4084);
loc_8290CF4C:
	// stb r27,2995(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2995, ctx.r27.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8290ce68
	ctx.lr = 0x8290CF5C;
	sub_8290CE68(ctx, base);
	// lwz r11,-4084(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4084);
loc_8290CF60:
	// lbz r11,2994(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2994);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8290cfb4
	if (ctx.cr0.eq) goto loc_8290CFB4;
	// lbz r11,224(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 224);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8290cfb4
	if (!ctx.cr0.eq) goto loc_8290CFB4;
	// lwz r3,220(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290cfb4
	if (ctx.cr6.eq) goto loc_8290CFB4;
	// bl 0x82aadbb8
	ctx.lr = 0x8290CF8C;
	sub_82AADBB8(ctx, base);
	// b 0x8290cfb4
	goto loc_8290CFB4;
loc_8290CF90:
	// clrlwi. r25,r3,24
	ctx.r25.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne 0x8290cfb4
	if (!ctx.cr0.eq) goto loc_8290CFB4;
	// lbz r11,232(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 232);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8290cfb4
	if (!ctx.cr6.eq) goto loc_8290CFB4;
	// stb r27,232(r28)
	PPC_STORE_U8(ctx.r28.u32 + 232, ctx.r27.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8290ce68
	ctx.lr = 0x8290CFB4;
	sub_8290CE68(ctx, base);
loc_8290CFB4:
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8290cfd4
	if (!ctx.cr6.eq) goto loc_8290CFD4;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// beq cr6,0x8290cfd8
	if (ctx.cr6.eq) goto loc_8290CFD8;
loc_8290CFD4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8290CFD8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290d008
	if (ctx.cr0.eq) goto loc_8290D008;
	// lbz r11,224(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 224);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8290d008
	if (ctx.cr0.eq) goto loc_8290D008;
	// lbz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8290d008
	if (!ctx.cr0.eq) goto loc_8290D008;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x8290d008
	if (!ctx.cr6.eq) goto loc_8290D008;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e51010
	ctx.lr = 0x8290D008;
	sub_82E51010(ctx, base);
loc_8290D008:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290D010"))) PPC_WEAK_FUNC(sub_8290D010);
PPC_FUNC_IMPL(__imp__sub_8290D010) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x830b2320
	ctx.lr = 0x8290D034;
	sub_830B2320(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82e512a0
	ctx.lr = 0x8290D040;
	sub_82E512A0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,-4460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4460);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x828d09e8
	ctx.lr = 0x8290D064;
	sub_828D09E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826e1b10
	ctx.lr = 0x8290D070;
	sub_826E1B10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x8290D078;
	sub_82DE7330(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290d090
	if (ctx.cr6.eq) goto loc_8290D090;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3648(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
loc_8290D090:
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

__attribute__((alias("__imp__sub_8290D0A8"))) PPC_WEAK_FUNC(sub_8290D0A8);
PPC_FUNC_IMPL(__imp__sub_8290D0A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8290D0B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-32288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32288);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8290d0f4
	if (!ctx.cr0.eq) goto loc_8290D0F4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-32288(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32288, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x8290D0D4;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82646710
	ctx.lr = 0x8290D0DC;
	sub_82646710(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,2396
	ctx.r4.s64 = ctx.r11.s64 + 2396;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x8290D0F0;
	sub_82E4E838(ctx, base);
	// lwz r11,-32288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32288);
loc_8290D0F4:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8290d120
	if (!ctx.cr0.eq) goto loc_8290D120;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// stw r11,-32288(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32288, ctx.r11.u32);
	// addi r3,r10,-32296
	ctx.r3.s64 = ctx.r10.s64 + -32296;
	// bl 0x82909050
	ctx.lr = 0x8290D110;
	sub_82909050(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-1712
	ctx.r3.s64 = ctx.r11.s64 + -1712;
	// bl 0x82a7e6b0
	ctx.lr = 0x8290D11C;
	sub_82A7E6B0(ctx, base);
	// lwz r11,-32288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32288);
loc_8290D120:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8290d164
	if (!ctx.cr0.eq) goto loc_8290D164;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// stw r11,-32288(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32288, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r29,-32312
	ctx.r31.s64 = ctx.r29.s64 + -32312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8290D144;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1568
	ctx.r11.s64 = ctx.r11.s64 + 1568;
	// stw r11,-32312(r29)
	PPC_STORE_U32(ctx.r29.u32 + -32312, ctx.r11.u32);
	// bl 0x829090a0
	ctx.lr = 0x8290D158;
	sub_829090A0(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-1728
	ctx.r3.s64 = ctx.r11.s64 + -1728;
	// bl 0x82a7e6b0
	ctx.lr = 0x8290D164;
	sub_82A7E6B0(ctx, base);
loc_8290D164:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290D170"))) PPC_WEAK_FUNC(sub_8290D170);
PPC_FUNC_IMPL(__imp__sub_8290D170) {
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
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// lis r8,-31952
	ctx.r8.s64 = -2094006272;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,32167(r9)
	PPC_STORE_U8(ctx.r9.u32 + 32167, ctx.r11.u8);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stb r10,32168(r8)
	PPC_STORE_U8(ctx.r8.u32 + 32168, ctx.r10.u8);
	// bl 0x8290a280
	ctx.lr = 0x8290D1A8;
	sub_8290A280(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8290d1c0
	if (ctx.cr6.eq) goto loc_8290D1C0;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,32164(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32164, ctx.r11.u8);
loc_8290D1C0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830b2320
	ctx.lr = 0x8290D1CC;
	sub_830B2320(ctx, base);
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

__attribute__((alias("__imp__sub_8290D1E8"))) PPC_WEAK_FUNC(sub_8290D1E8);
PPC_FUNC_IMPL(__imp__sub_8290D1E8) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x830b2320
	ctx.lr = 0x8290D204;
	sub_830B2320(ctx, base);
	// bl 0x825f6fb0
	ctx.lr = 0x8290D208;
	sub_825F6FB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-4012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4012);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8290d28c
	if (ctx.cr6.eq) goto loc_8290D28C;
	// bl 0x825f6fb0
	ctx.lr = 0x8290D228;
	sub_825F6FB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-3976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3976);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8290d28c
	if (ctx.cr6.eq) goto loc_8290D28C;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-4060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4060);
	// bl 0x8247fc10
	ctx.lr = 0x8290D254;
	sub_8247FC10(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8248bae8
	ctx.lr = 0x8290D25C;
	sub_8248BAE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x8290D268;
	sub_824AFB20(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b66c0
	ctx.lr = 0x8290D274;
	sub_824B66C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8299fa70
	ctx.lr = 0x8290D284;
	sub_8299FA70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x8290D28C;
	sub_82DE7330(ctx, base);
loc_8290D28C:
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

__attribute__((alias("__imp__sub_8290D2A8"))) PPC_WEAK_FUNC(sub_8290D2A8);
PPC_FUNC_IMPL(__imp__sub_8290D2A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x830b2320
	ctx.lr = 0x8290D2BC;
	sub_830B2320(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-4060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4060);
	// bl 0x8247fc10
	ctx.lr = 0x8290D2CC;
	sub_8247FC10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x8290D2D8;
	sub_824AFB20(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290d330
	if (ctx.cr6.eq) goto loc_8290D330;
	// bl 0x82486cf0
	ctx.lr = 0x8290D2E8;
	sub_82486CF0(ctx, base);
	// lbz r11,10507(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10507);
	// lbz r10,10504(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10504);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8290d300
	if (!ctx.cr0.eq) goto loc_8290D300;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,10504(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10504, ctx.r9.u8);
loc_8290D300:
	// lbz r9,10505(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10505);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8290d318
	if (!ctx.cr0.eq) goto loc_8290D318;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lfs f0,-19932(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19932);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10488(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10488, temp.u32);
loc_8290D318:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8290d324
	if (!ctx.cr6.eq) goto loc_8290D324;
	// stb r10,10504(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10504, ctx.r10.u8);
loc_8290D324:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfs f1,-19936(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19936);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825c6e08
	ctx.lr = 0x8290D330;
	sub_825C6E08(ctx, base);
loc_8290D330:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x8290D338;
	sub_82DE7330(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290D348"))) PPC_WEAK_FUNC(sub_8290D348);
PPC_FUNC_IMPL(__imp__sub_8290D348) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// addi r11,r11,2420
	ctx.r11.s64 = ctx.r11.s64 + 2420;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82411478
	ctx.lr = 0x8290D378;
	sub_82411478(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-2060
	ctx.r11.s64 = ctx.r11.s64 + -2060;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82e50e28
	ctx.lr = 0x8290D38C;
	sub_82E50E28(ctx, base);
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

__attribute__((alias("__imp__sub_8290D3A0"))) PPC_WEAK_FUNC(sub_8290D3A0);
PPC_FUNC_IMPL(__imp__sub_8290D3A0) {
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
	// bl 0x82908298
	ctx.lr = 0x8290D3B8;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,2480
	ctx.r11.s64 = ctx.r11.s64 + 2480;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r5,r10,10812
	ctx.r5.s64 = ctx.r10.s64 + 10812;
	// bl 0x82e50ea8
	ctx.lr = 0x8290D3D8;
	sub_82E50EA8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// addi r5,r11,10808
	ctx.r5.s64 = ctx.r11.s64 + 10808;
	// bl 0x82e50ea8
	ctx.lr = 0x8290D3EC;
	sub_82E50EA8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82411478
	ctx.lr = 0x8290D3FC;
	sub_82411478(ctx, base);
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

__attribute__((alias("__imp__sub_8290D418"))) PPC_WEAK_FUNC(sub_8290D418);
PPC_FUNC_IMPL(__imp__sub_8290D418) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// addi r11,r11,2480
	ctx.r11.s64 = ctx.r11.s64 + 2480;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82411478
	ctx.lr = 0x8290D448;
	sub_82411478(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-2060
	ctx.r11.s64 = ctx.r11.s64 + -2060;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82e50e28
	ctx.lr = 0x8290D45C;
	sub_82E50E28(ctx, base);
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

__attribute__((alias("__imp__sub_8290D470"))) PPC_WEAK_FUNC(sub_8290D470);
PPC_FUNC_IMPL(__imp__sub_8290D470) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// addi r11,r11,1508
	ctx.r11.s64 = ctx.r11.s64 + 1508;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lbz r11,32171(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32171);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8290d540
	if (ctx.cr0.eq) goto loc_8290D540;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-4060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4060);
	// bl 0x8247fc10
	ctx.lr = 0x8290D4B4;
	sub_8247FC10(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8248bae8
	ctx.lr = 0x8290D4BC;
	sub_8248BAE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x8290D4C8;
	sub_824AFB20(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290d4dc
	if (ctx.cr6.eq) goto loc_8290D4DC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8249e570
	ctx.lr = 0x8290D4DC;
	sub_8249E570(ctx, base);
loc_8290D4DC:
	// bl 0x825f6fb0
	ctx.lr = 0x8290D4E0;
	sub_825F6FB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,-4508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4508);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x825fcd48
	ctx.lr = 0x8290D4FC;
	sub_825FCD48(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lis r9,-31964
	ctx.r9.s64 = -2094792704;
	// addi r6,r10,-7168
	ctx.r6.s64 = ctx.r10.s64 + -7168;
	// addi r5,r9,-17580
	ctx.r5.s64 = ctx.r9.s64 + -17580;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x823e4818
	ctx.lr = 0x8290D520;
	sub_823E4818(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8290d530
	if (ctx.cr0.eq) goto loc_8290D530;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82b6a9f8
	ctx.lr = 0x8290D530;
	sub_82B6A9F8(ctx, base);
loc_8290D530:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,32171(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32171, ctx.r11.u8);
	// bl 0x82de7330
	ctx.lr = 0x8290D540;
	sub_82DE7330(ctx, base);
loc_8290D540:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-2060
	ctx.r11.s64 = ctx.r11.s64 + -2060;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82e50e28
	ctx.lr = 0x8290D554;
	sub_82E50E28(ctx, base);
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

__attribute__((alias("__imp__sub_8290D570"))) PPC_WEAK_FUNC(sub_8290D570);
PPC_FUNC_IMPL(__imp__sub_8290D570) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830b2320
	ctx.lr = 0x8290D58C;
	sub_830B2320(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-4060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4060);
	// bl 0x8247fc10
	ctx.lr = 0x8290D59C;
	sub_8247FC10(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8248bae8
	ctx.lr = 0x8290D5A4;
	sub_8248BAE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x8290D5B0;
	sub_824AFB20(ctx, base);
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8290d634
	if (ctx.cr0.eq) goto loc_8290D634;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290d634
	if (ctx.cr6.eq) goto loc_8290D634;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8249e570
	ctx.lr = 0x8290D5D0;
	sub_8249E570(ctx, base);
	// bl 0x825f6fb0
	ctx.lr = 0x8290D5D4;
	sub_825F6FB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,-4508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4508);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x825fcd48
	ctx.lr = 0x8290D5F0;
	sub_825FCD48(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lis r9,-31964
	ctx.r9.s64 = -2094792704;
	// addi r6,r10,-7168
	ctx.r6.s64 = ctx.r10.s64 + -7168;
	// addi r5,r9,-17580
	ctx.r5.s64 = ctx.r9.s64 + -17580;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x823e4818
	ctx.lr = 0x8290D614;
	sub_823E4818(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8290d624
	if (ctx.cr0.eq) goto loc_8290D624;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82b6a9f8
	ctx.lr = 0x8290D624;
	sub_82B6A9F8(ctx, base);
loc_8290D624:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,32171(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32171, ctx.r11.u8);
	// b 0x8290d6a8
	goto loc_8290D6A8;
loc_8290D634:
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lbz r11,32171(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32171);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8290d6a8
	if (!ctx.cr0.eq) goto loc_8290D6A8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8249e570
	ctx.lr = 0x8290D64C;
	sub_8249E570(ctx, base);
	// bl 0x825f6fb0
	ctx.lr = 0x8290D650;
	sub_825F6FB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,-4508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4508);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x825fcd48
	ctx.lr = 0x8290D66C;
	sub_825FCD48(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lis r9,-31964
	ctx.r9.s64 = -2094792704;
	// addi r6,r10,-7168
	ctx.r6.s64 = ctx.r10.s64 + -7168;
	// addi r5,r9,-17580
	ctx.r5.s64 = ctx.r9.s64 + -17580;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x823e4818
	ctx.lr = 0x8290D690;
	sub_823E4818(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8290d6a0
	if (ctx.cr0.eq) goto loc_8290D6A0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82b6a9f8
	ctx.lr = 0x8290D6A0;
	sub_82B6A9F8(ctx, base);
loc_8290D6A0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,32171(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32171, ctx.r11.u8);
loc_8290D6A8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x8290D6B0;
	sub_82DE7330(ctx, base);
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

__attribute__((alias("__imp__sub_8290D6C8"))) PPC_WEAK_FUNC(sub_8290D6C8);
PPC_FUNC_IMPL(__imp__sub_8290D6C8) {
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
	// bl 0x82e4de08
	ctx.lr = 0x8290D6E8;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2552
	ctx.r11.s64 = ctx.r11.s64 + 2552;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8290D718"))) PPC_WEAK_FUNC(sub_8290D718);
PPC_FUNC_IMPL(__imp__sub_8290D718) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,2552
	ctx.r11.s64 = ctx.r11.s64 + 2552;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8290D73C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290d764
	if (ctx.cr0.eq) goto loc_8290D764;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290d764
	if (ctx.cr6.eq) goto loc_8290D764;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290D764;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290D764:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
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

__attribute__((alias("__imp__sub_8290D788"))) PPC_WEAK_FUNC(sub_8290D788);
PPC_FUNC_IMPL(__imp__sub_8290D788) {
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
	// bl 0x8290d718
	ctx.lr = 0x8290D7A8;
	sub_8290D718(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290d7b8
	if (ctx.cr0.eq) goto loc_8290D7B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8290D7B8;
	sub_823FD208(ctx, base);
loc_8290D7B8:
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

__attribute__((alias("__imp__sub_8290D7D8"))) PPC_WEAK_FUNC(sub_8290D7D8);
PPC_FUNC_IMPL(__imp__sub_8290D7D8) {
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
	// bl 0x82e4de08
	ctx.lr = 0x8290D7F8;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2604
	ctx.r11.s64 = ctx.r11.s64 + 2604;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8290D828"))) PPC_WEAK_FUNC(sub_8290D828);
PPC_FUNC_IMPL(__imp__sub_8290D828) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,2604
	ctx.r11.s64 = ctx.r11.s64 + 2604;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8290D84C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290d874
	if (ctx.cr0.eq) goto loc_8290D874;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290d874
	if (ctx.cr6.eq) goto loc_8290D874;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290D874;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290D874:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
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

__attribute__((alias("__imp__sub_8290D898"))) PPC_WEAK_FUNC(sub_8290D898);
PPC_FUNC_IMPL(__imp__sub_8290D898) {
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
	// bl 0x8290d828
	ctx.lr = 0x8290D8B8;
	sub_8290D828(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290d8c8
	if (ctx.cr0.eq) goto loc_8290D8C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8290D8C8;
	sub_823FD208(ctx, base);
loc_8290D8C8:
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

__attribute__((alias("__imp__sub_8290D8E8"))) PPC_WEAK_FUNC(sub_8290D8E8);
PPC_FUNC_IMPL(__imp__sub_8290D8E8) {
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
	// bl 0x82e4de08
	ctx.lr = 0x8290D908;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2656
	ctx.r11.s64 = ctx.r11.s64 + 2656;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8290D938"))) PPC_WEAK_FUNC(sub_8290D938);
PPC_FUNC_IMPL(__imp__sub_8290D938) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,2656
	ctx.r11.s64 = ctx.r11.s64 + 2656;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8290D95C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290d984
	if (ctx.cr0.eq) goto loc_8290D984;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290d984
	if (ctx.cr6.eq) goto loc_8290D984;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290D984;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290D984:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
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

__attribute__((alias("__imp__sub_8290D9A8"))) PPC_WEAK_FUNC(sub_8290D9A8);
PPC_FUNC_IMPL(__imp__sub_8290D9A8) {
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
	// bl 0x8290d938
	ctx.lr = 0x8290D9C8;
	sub_8290D938(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290d9d8
	if (ctx.cr0.eq) goto loc_8290D9D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8290D9D8;
	sub_823FD208(ctx, base);
loc_8290D9D8:
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

__attribute__((alias("__imp__sub_8290D9F8"))) PPC_WEAK_FUNC(sub_8290D9F8);
PPC_FUNC_IMPL(__imp__sub_8290D9F8) {
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
	// bl 0x82e4de08
	ctx.lr = 0x8290DA18;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2708
	ctx.r11.s64 = ctx.r11.s64 + 2708;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8290DA48"))) PPC_WEAK_FUNC(sub_8290DA48);
PPC_FUNC_IMPL(__imp__sub_8290DA48) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,2708
	ctx.r11.s64 = ctx.r11.s64 + 2708;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8290DA6C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290da94
	if (ctx.cr0.eq) goto loc_8290DA94;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290da94
	if (ctx.cr6.eq) goto loc_8290DA94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290DA94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290DA94:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
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

__attribute__((alias("__imp__sub_8290DAB8"))) PPC_WEAK_FUNC(sub_8290DAB8);
PPC_FUNC_IMPL(__imp__sub_8290DAB8) {
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
	// bl 0x8290da48
	ctx.lr = 0x8290DAD8;
	sub_8290DA48(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290dae8
	if (ctx.cr0.eq) goto loc_8290DAE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8290DAE8;
	sub_823FD208(ctx, base);
loc_8290DAE8:
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

__attribute__((alias("__imp__sub_8290DB08"))) PPC_WEAK_FUNC(sub_8290DB08);
PPC_FUNC_IMPL(__imp__sub_8290DB08) {
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
	// bl 0x82e4de08
	ctx.lr = 0x8290DB28;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2760
	ctx.r11.s64 = ctx.r11.s64 + 2760;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8290DB58"))) PPC_WEAK_FUNC(sub_8290DB58);
PPC_FUNC_IMPL(__imp__sub_8290DB58) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,2760
	ctx.r11.s64 = ctx.r11.s64 + 2760;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8290DB7C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290dba4
	if (ctx.cr0.eq) goto loc_8290DBA4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290dba4
	if (ctx.cr6.eq) goto loc_8290DBA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290DBA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290DBA4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
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

__attribute__((alias("__imp__sub_8290DBC8"))) PPC_WEAK_FUNC(sub_8290DBC8);
PPC_FUNC_IMPL(__imp__sub_8290DBC8) {
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
	// bl 0x8290db58
	ctx.lr = 0x8290DBE8;
	sub_8290DB58(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290dbf8
	if (ctx.cr0.eq) goto loc_8290DBF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8290DBF8;
	sub_823FD208(ctx, base);
loc_8290DBF8:
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

__attribute__((alias("__imp__sub_8290DC18"))) PPC_WEAK_FUNC(sub_8290DC18);
PPC_FUNC_IMPL(__imp__sub_8290DC18) {
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
	// bl 0x82e4de08
	ctx.lr = 0x8290DC38;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2812
	ctx.r11.s64 = ctx.r11.s64 + 2812;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8290DC68"))) PPC_WEAK_FUNC(sub_8290DC68);
PPC_FUNC_IMPL(__imp__sub_8290DC68) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,2812
	ctx.r11.s64 = ctx.r11.s64 + 2812;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8290DC8C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290dcb4
	if (ctx.cr0.eq) goto loc_8290DCB4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290dcb4
	if (ctx.cr6.eq) goto loc_8290DCB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290DCB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290DCB4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
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

__attribute__((alias("__imp__sub_8290DCD8"))) PPC_WEAK_FUNC(sub_8290DCD8);
PPC_FUNC_IMPL(__imp__sub_8290DCD8) {
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
	// bl 0x8290dc68
	ctx.lr = 0x8290DCF8;
	sub_8290DC68(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290dd08
	if (ctx.cr0.eq) goto loc_8290DD08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8290DD08;
	sub_823FD208(ctx, base);
loc_8290DD08:
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

__attribute__((alias("__imp__sub_8290DD28"))) PPC_WEAK_FUNC(sub_8290DD28);
PPC_FUNC_IMPL(__imp__sub_8290DD28) {
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
	// bl 0x82e4de08
	ctx.lr = 0x8290DD48;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2864
	ctx.r11.s64 = ctx.r11.s64 + 2864;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8290DD78"))) PPC_WEAK_FUNC(sub_8290DD78);
PPC_FUNC_IMPL(__imp__sub_8290DD78) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,2864
	ctx.r11.s64 = ctx.r11.s64 + 2864;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8290DD9C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290ddc4
	if (ctx.cr0.eq) goto loc_8290DDC4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290ddc4
	if (ctx.cr6.eq) goto loc_8290DDC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290DDC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290DDC4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
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

__attribute__((alias("__imp__sub_8290DDE8"))) PPC_WEAK_FUNC(sub_8290DDE8);
PPC_FUNC_IMPL(__imp__sub_8290DDE8) {
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
	// bl 0x8290dd78
	ctx.lr = 0x8290DE08;
	sub_8290DD78(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290de18
	if (ctx.cr0.eq) goto loc_8290DE18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8290DE18;
	sub_823FD208(ctx, base);
loc_8290DE18:
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

__attribute__((alias("__imp__sub_8290DE38"))) PPC_WEAK_FUNC(sub_8290DE38);
PPC_FUNC_IMPL(__imp__sub_8290DE38) {
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
	// bl 0x82e4de08
	ctx.lr = 0x8290DE58;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2916
	ctx.r11.s64 = ctx.r11.s64 + 2916;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8290DE88"))) PPC_WEAK_FUNC(sub_8290DE88);
PPC_FUNC_IMPL(__imp__sub_8290DE88) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,2916
	ctx.r11.s64 = ctx.r11.s64 + 2916;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8290DEAC;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290ded4
	if (ctx.cr0.eq) goto loc_8290DED4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290ded4
	if (ctx.cr6.eq) goto loc_8290DED4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290DED4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290DED4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
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

__attribute__((alias("__imp__sub_8290DEF8"))) PPC_WEAK_FUNC(sub_8290DEF8);
PPC_FUNC_IMPL(__imp__sub_8290DEF8) {
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
	// bl 0x8290de88
	ctx.lr = 0x8290DF18;
	sub_8290DE88(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290df28
	if (ctx.cr0.eq) goto loc_8290DF28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8290DF28;
	sub_823FD208(ctx, base);
loc_8290DF28:
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

__attribute__((alias("__imp__sub_8290DF48"))) PPC_WEAK_FUNC(sub_8290DF48);
PPC_FUNC_IMPL(__imp__sub_8290DF48) {
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
	// bl 0x82e4de08
	ctx.lr = 0x8290DF68;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2968
	ctx.r11.s64 = ctx.r11.s64 + 2968;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8290DF98"))) PPC_WEAK_FUNC(sub_8290DF98);
PPC_FUNC_IMPL(__imp__sub_8290DF98) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,2968
	ctx.r11.s64 = ctx.r11.s64 + 2968;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8290DFBC;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290dfe4
	if (ctx.cr0.eq) goto loc_8290DFE4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290dfe4
	if (ctx.cr6.eq) goto loc_8290DFE4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290DFE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290DFE4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
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

__attribute__((alias("__imp__sub_8290E008"))) PPC_WEAK_FUNC(sub_8290E008);
PPC_FUNC_IMPL(__imp__sub_8290E008) {
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
	// bl 0x8290df98
	ctx.lr = 0x8290E028;
	sub_8290DF98(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290e038
	if (ctx.cr0.eq) goto loc_8290E038;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8290E038;
	sub_823FD208(ctx, base);
loc_8290E038:
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

__attribute__((alias("__imp__sub_8290E058"))) PPC_WEAK_FUNC(sub_8290E058);
PPC_FUNC_IMPL(__imp__sub_8290E058) {
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
	// bl 0x82e4de08
	ctx.lr = 0x8290E078;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,3020
	ctx.r11.s64 = ctx.r11.s64 + 3020;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8290E0A8"))) PPC_WEAK_FUNC(sub_8290E0A8);
PPC_FUNC_IMPL(__imp__sub_8290E0A8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,3020
	ctx.r11.s64 = ctx.r11.s64 + 3020;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8290E0CC;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290e0f4
	if (ctx.cr0.eq) goto loc_8290E0F4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290e0f4
	if (ctx.cr6.eq) goto loc_8290E0F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290E0F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290E0F4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
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

__attribute__((alias("__imp__sub_8290E118"))) PPC_WEAK_FUNC(sub_8290E118);
PPC_FUNC_IMPL(__imp__sub_8290E118) {
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
	// bl 0x8290e0a8
	ctx.lr = 0x8290E138;
	sub_8290E0A8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290e148
	if (ctx.cr0.eq) goto loc_8290E148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8290E148;
	sub_823FD208(ctx, base);
loc_8290E148:
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

__attribute__((alias("__imp__sub_8290E168"))) PPC_WEAK_FUNC(sub_8290E168);
PPC_FUNC_IMPL(__imp__sub_8290E168) {
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
	// bl 0x82e512a0
	ctx.lr = 0x8290E178;
	sub_82E512A0(ctx, base);
	// bl 0x82908588
	ctx.lr = 0x8290E17C;
	sub_82908588(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E190"))) PPC_WEAK_FUNC(sub_8290E190);
PPC_FUNC_IMPL(__imp__sub_8290E190) {
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
	// bl 0x82e4de08
	ctx.lr = 0x8290E1B0;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,3072
	ctx.r11.s64 = ctx.r11.s64 + 3072;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8290E1E0"))) PPC_WEAK_FUNC(sub_8290E1E0);
PPC_FUNC_IMPL(__imp__sub_8290E1E0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,3072
	ctx.r11.s64 = ctx.r11.s64 + 3072;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8290E204;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290e22c
	if (ctx.cr0.eq) goto loc_8290E22C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290e22c
	if (ctx.cr6.eq) goto loc_8290E22C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290E22C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290E22C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
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

__attribute__((alias("__imp__sub_8290E250"))) PPC_WEAK_FUNC(sub_8290E250);
PPC_FUNC_IMPL(__imp__sub_8290E250) {
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
	// bl 0x8290e1e0
	ctx.lr = 0x8290E270;
	sub_8290E1E0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290e280
	if (ctx.cr0.eq) goto loc_8290E280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8290E280;
	sub_823FD208(ctx, base);
loc_8290E280:
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

__attribute__((alias("__imp__sub_8290E2A0"))) PPC_WEAK_FUNC(sub_8290E2A0);
PPC_FUNC_IMPL(__imp__sub_8290E2A0) {
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
	// bl 0x82e512a0
	ctx.lr = 0x8290E2B4;
	sub_82E512A0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8290e2cc
	if (ctx.cr0.eq) goto loc_8290E2CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82908730
	ctx.lr = 0x8290E2C4;
	sub_82908730(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,232(r31)
	PPC_STORE_U8(ctx.r31.u32 + 232, ctx.r11.u8);
loc_8290E2CC:
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

__attribute__((alias("__imp__sub_8290E2E0"))) PPC_WEAK_FUNC(sub_8290E2E0);
PPC_FUNC_IMPL(__imp__sub_8290E2E0) {
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
	// bl 0x82e4de08
	ctx.lr = 0x8290E300;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,3124
	ctx.r11.s64 = ctx.r11.s64 + 3124;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8290E330"))) PPC_WEAK_FUNC(sub_8290E330);
PPC_FUNC_IMPL(__imp__sub_8290E330) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,3124
	ctx.r11.s64 = ctx.r11.s64 + 3124;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8290E354;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290e37c
	if (ctx.cr0.eq) goto loc_8290E37C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290e37c
	if (ctx.cr6.eq) goto loc_8290E37C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290E37C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290E37C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
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

__attribute__((alias("__imp__sub_8290E3A0"))) PPC_WEAK_FUNC(sub_8290E3A0);
PPC_FUNC_IMPL(__imp__sub_8290E3A0) {
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
	// bl 0x8290e330
	ctx.lr = 0x8290E3C0;
	sub_8290E330(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290e3d0
	if (ctx.cr0.eq) goto loc_8290E3D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8290E3D0;
	sub_823FD208(ctx, base);
loc_8290E3D0:
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

__attribute__((alias("__imp__sub_8290E3F0"))) PPC_WEAK_FUNC(sub_8290E3F0);
PPC_FUNC_IMPL(__imp__sub_8290E3F0) {
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
	// bl 0x82e4de08
	ctx.lr = 0x8290E410;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,3176
	ctx.r11.s64 = ctx.r11.s64 + 3176;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8290E440"))) PPC_WEAK_FUNC(sub_8290E440);
PPC_FUNC_IMPL(__imp__sub_8290E440) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,3176
	ctx.r11.s64 = ctx.r11.s64 + 3176;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8290E464;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290e48c
	if (ctx.cr0.eq) goto loc_8290E48C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290e48c
	if (ctx.cr6.eq) goto loc_8290E48C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290E48C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290E48C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
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

__attribute__((alias("__imp__sub_8290E4B0"))) PPC_WEAK_FUNC(sub_8290E4B0);
PPC_FUNC_IMPL(__imp__sub_8290E4B0) {
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
	// bl 0x8290e440
	ctx.lr = 0x8290E4D0;
	sub_8290E440(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290e4e0
	if (ctx.cr0.eq) goto loc_8290E4E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8290E4E0;
	sub_823FD208(ctx, base);
loc_8290E4E0:
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

__attribute__((alias("__imp__sub_8290E500"))) PPC_WEAK_FUNC(sub_8290E500);
PPC_FUNC_IMPL(__imp__sub_8290E500) {
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
	// bl 0x82e4de08
	ctx.lr = 0x8290E520;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,3228
	ctx.r11.s64 = ctx.r11.s64 + 3228;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8290E550"))) PPC_WEAK_FUNC(sub_8290E550);
PPC_FUNC_IMPL(__imp__sub_8290E550) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,3228
	ctx.r11.s64 = ctx.r11.s64 + 3228;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8290E574;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290e59c
	if (ctx.cr0.eq) goto loc_8290E59C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290e59c
	if (ctx.cr6.eq) goto loc_8290E59C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290E59C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290E59C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
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

__attribute__((alias("__imp__sub_8290E5C0"))) PPC_WEAK_FUNC(sub_8290E5C0);
PPC_FUNC_IMPL(__imp__sub_8290E5C0) {
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
	// bl 0x8290e550
	ctx.lr = 0x8290E5E0;
	sub_8290E550(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290e5f0
	if (ctx.cr0.eq) goto loc_8290E5F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8290E5F0;
	sub_823FD208(ctx, base);
loc_8290E5F0:
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

__attribute__((alias("__imp__sub_8290E610"))) PPC_WEAK_FUNC(sub_8290E610);
PPC_FUNC_IMPL(__imp__sub_8290E610) {
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
	// bl 0x82e4de08
	ctx.lr = 0x8290E630;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,3280
	ctx.r11.s64 = ctx.r11.s64 + 3280;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8290E660"))) PPC_WEAK_FUNC(sub_8290E660);
PPC_FUNC_IMPL(__imp__sub_8290E660) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,3280
	ctx.r11.s64 = ctx.r11.s64 + 3280;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8290E684;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290e6ac
	if (ctx.cr0.eq) goto loc_8290E6AC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290e6ac
	if (ctx.cr6.eq) goto loc_8290E6AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290E6AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290E6AC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
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

__attribute__((alias("__imp__sub_8290E6D0"))) PPC_WEAK_FUNC(sub_8290E6D0);
PPC_FUNC_IMPL(__imp__sub_8290E6D0) {
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
	// bl 0x8290e660
	ctx.lr = 0x8290E6F0;
	sub_8290E660(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290e700
	if (ctx.cr0.eq) goto loc_8290E700;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8290E700;
	sub_823FD208(ctx, base);
loc_8290E700:
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

__attribute__((alias("__imp__sub_8290E720"))) PPC_WEAK_FUNC(sub_8290E720);
PPC_FUNC_IMPL(__imp__sub_8290E720) {
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
	// bl 0x82e4de08
	ctx.lr = 0x8290E740;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,3332
	ctx.r11.s64 = ctx.r11.s64 + 3332;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8290E770"))) PPC_WEAK_FUNC(sub_8290E770);
PPC_FUNC_IMPL(__imp__sub_8290E770) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,3332
	ctx.r11.s64 = ctx.r11.s64 + 3332;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8290E794;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290e7bc
	if (ctx.cr0.eq) goto loc_8290E7BC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290e7bc
	if (ctx.cr6.eq) goto loc_8290E7BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290E7BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290E7BC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
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

__attribute__((alias("__imp__sub_8290E7E0"))) PPC_WEAK_FUNC(sub_8290E7E0);
PPC_FUNC_IMPL(__imp__sub_8290E7E0) {
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
	// bl 0x8290e770
	ctx.lr = 0x8290E800;
	sub_8290E770(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290e810
	if (ctx.cr0.eq) goto loc_8290E810;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8290E810;
	sub_823FD208(ctx, base);
loc_8290E810:
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

__attribute__((alias("__imp__sub_8290E830"))) PPC_WEAK_FUNC(sub_8290E830);
PPC_FUNC_IMPL(__imp__sub_8290E830) {
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
	// bl 0x82e4de08
	ctx.lr = 0x8290E850;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,3384
	ctx.r11.s64 = ctx.r11.s64 + 3384;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8290E880"))) PPC_WEAK_FUNC(sub_8290E880);
PPC_FUNC_IMPL(__imp__sub_8290E880) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,3384
	ctx.r11.s64 = ctx.r11.s64 + 3384;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8290E8A4;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290e8cc
	if (ctx.cr0.eq) goto loc_8290E8CC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290e8cc
	if (ctx.cr6.eq) goto loc_8290E8CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290E8CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290E8CC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
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

__attribute__((alias("__imp__sub_8290E8F0"))) PPC_WEAK_FUNC(sub_8290E8F0);
PPC_FUNC_IMPL(__imp__sub_8290E8F0) {
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
	// bl 0x8290e880
	ctx.lr = 0x8290E910;
	sub_8290E880(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290e920
	if (ctx.cr0.eq) goto loc_8290E920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8290E920;
	sub_823FD208(ctx, base);
loc_8290E920:
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

__attribute__((alias("__imp__sub_8290E940"))) PPC_WEAK_FUNC(sub_8290E940);
PPC_FUNC_IMPL(__imp__sub_8290E940) {
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
	// bl 0x82e4de08
	ctx.lr = 0x8290E960;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,3436
	ctx.r11.s64 = ctx.r11.s64 + 3436;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8290E990"))) PPC_WEAK_FUNC(sub_8290E990);
PPC_FUNC_IMPL(__imp__sub_8290E990) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,3436
	ctx.r11.s64 = ctx.r11.s64 + 3436;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8290E9B4;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290e9dc
	if (ctx.cr0.eq) goto loc_8290E9DC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290e9dc
	if (ctx.cr6.eq) goto loc_8290E9DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290E9DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290E9DC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
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

__attribute__((alias("__imp__sub_8290EA00"))) PPC_WEAK_FUNC(sub_8290EA00);
PPC_FUNC_IMPL(__imp__sub_8290EA00) {
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
	// bl 0x8290e990
	ctx.lr = 0x8290EA20;
	sub_8290E990(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290ea30
	if (ctx.cr0.eq) goto loc_8290EA30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8290EA30;
	sub_823FD208(ctx, base);
loc_8290EA30:
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

__attribute__((alias("__imp__sub_8290EA50"))) PPC_WEAK_FUNC(sub_8290EA50);
PPC_FUNC_IMPL(__imp__sub_8290EA50) {
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
	// bl 0x82e4de08
	ctx.lr = 0x8290EA70;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,3488
	ctx.r11.s64 = ctx.r11.s64 + 3488;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8290EAA0"))) PPC_WEAK_FUNC(sub_8290EAA0);
PPC_FUNC_IMPL(__imp__sub_8290EAA0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,3488
	ctx.r11.s64 = ctx.r11.s64 + 3488;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8290EAC4;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290eaec
	if (ctx.cr0.eq) goto loc_8290EAEC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290eaec
	if (ctx.cr6.eq) goto loc_8290EAEC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290EAEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290EAEC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
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

__attribute__((alias("__imp__sub_8290EB10"))) PPC_WEAK_FUNC(sub_8290EB10);
PPC_FUNC_IMPL(__imp__sub_8290EB10) {
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
	// bl 0x8290eaa0
	ctx.lr = 0x8290EB30;
	sub_8290EAA0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290eb40
	if (ctx.cr0.eq) goto loc_8290EB40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8290EB40;
	sub_823FD208(ctx, base);
loc_8290EB40:
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

__attribute__((alias("__imp__sub_8290EB60"))) PPC_WEAK_FUNC(sub_8290EB60);
PPC_FUNC_IMPL(__imp__sub_8290EB60) {
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
	// bl 0x82e4de08
	ctx.lr = 0x8290EB80;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,3540
	ctx.r11.s64 = ctx.r11.s64 + 3540;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8290EBB0"))) PPC_WEAK_FUNC(sub_8290EBB0);
PPC_FUNC_IMPL(__imp__sub_8290EBB0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,3540
	ctx.r11.s64 = ctx.r11.s64 + 3540;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8290EBD4;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290ebfc
	if (ctx.cr0.eq) goto loc_8290EBFC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290ebfc
	if (ctx.cr6.eq) goto loc_8290EBFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290EBFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290EBFC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
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

__attribute__((alias("__imp__sub_8290EC20"))) PPC_WEAK_FUNC(sub_8290EC20);
PPC_FUNC_IMPL(__imp__sub_8290EC20) {
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
	// bl 0x8290ebb0
	ctx.lr = 0x8290EC40;
	sub_8290EBB0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290ec50
	if (ctx.cr0.eq) goto loc_8290EC50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8290EC50;
	sub_823FD208(ctx, base);
loc_8290EC50:
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

__attribute__((alias("__imp__sub_8290EC70"))) PPC_WEAK_FUNC(sub_8290EC70);
PPC_FUNC_IMPL(__imp__sub_8290EC70) {
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
	// bl 0x82e4de08
	ctx.lr = 0x8290EC90;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,3592
	ctx.r11.s64 = ctx.r11.s64 + 3592;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8290ECC0"))) PPC_WEAK_FUNC(sub_8290ECC0);
PPC_FUNC_IMPL(__imp__sub_8290ECC0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,3592
	ctx.r11.s64 = ctx.r11.s64 + 3592;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8290ECE4;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290ed0c
	if (ctx.cr0.eq) goto loc_8290ED0C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290ed0c
	if (ctx.cr6.eq) goto loc_8290ED0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290ED0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290ED0C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
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

__attribute__((alias("__imp__sub_8290ED30"))) PPC_WEAK_FUNC(sub_8290ED30);
PPC_FUNC_IMPL(__imp__sub_8290ED30) {
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
	// bl 0x8290ecc0
	ctx.lr = 0x8290ED50;
	sub_8290ECC0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290ed60
	if (ctx.cr0.eq) goto loc_8290ED60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8290ED60;
	sub_823FD208(ctx, base);
loc_8290ED60:
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

__attribute__((alias("__imp__sub_8290ED80"))) PPC_WEAK_FUNC(sub_8290ED80);
PPC_FUNC_IMPL(__imp__sub_8290ED80) {
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
	// bl 0x82e4de08
	ctx.lr = 0x8290EDA0;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,3644
	ctx.r11.s64 = ctx.r11.s64 + 3644;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8290EDD0"))) PPC_WEAK_FUNC(sub_8290EDD0);
PPC_FUNC_IMPL(__imp__sub_8290EDD0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,3644
	ctx.r11.s64 = ctx.r11.s64 + 3644;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8290EDF4;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290ee1c
	if (ctx.cr0.eq) goto loc_8290EE1C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290ee1c
	if (ctx.cr6.eq) goto loc_8290EE1C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290EE1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290EE1C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
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

__attribute__((alias("__imp__sub_8290EE40"))) PPC_WEAK_FUNC(sub_8290EE40);
PPC_FUNC_IMPL(__imp__sub_8290EE40) {
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
	// bl 0x8290edd0
	ctx.lr = 0x8290EE60;
	sub_8290EDD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290ee70
	if (ctx.cr0.eq) goto loc_8290EE70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8290EE70;
	sub_823FD208(ctx, base);
loc_8290EE70:
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

__attribute__((alias("__imp__sub_8290EE90"))) PPC_WEAK_FUNC(sub_8290EE90);
PPC_FUNC_IMPL(__imp__sub_8290EE90) {
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
	// bl 0x82e4de08
	ctx.lr = 0x8290EEB0;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,3696
	ctx.r11.s64 = ctx.r11.s64 + 3696;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8290EEE0"))) PPC_WEAK_FUNC(sub_8290EEE0);
PPC_FUNC_IMPL(__imp__sub_8290EEE0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,3696
	ctx.r11.s64 = ctx.r11.s64 + 3696;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8290EF04;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290ef2c
	if (ctx.cr0.eq) goto loc_8290EF2C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290ef2c
	if (ctx.cr6.eq) goto loc_8290EF2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290EF2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290EF2C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
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

__attribute__((alias("__imp__sub_8290EF50"))) PPC_WEAK_FUNC(sub_8290EF50);
PPC_FUNC_IMPL(__imp__sub_8290EF50) {
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
	// bl 0x8290eee0
	ctx.lr = 0x8290EF70;
	sub_8290EEE0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290ef80
	if (ctx.cr0.eq) goto loc_8290EF80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8290EF80;
	sub_823FD208(ctx, base);
loc_8290EF80:
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

__attribute__((alias("__imp__sub_8290EFA0"))) PPC_WEAK_FUNC(sub_8290EFA0);
PPC_FUNC_IMPL(__imp__sub_8290EFA0) {
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
	// bl 0x82e4de08
	ctx.lr = 0x8290EFC0;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,3748
	ctx.r11.s64 = ctx.r11.s64 + 3748;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8290EFF0"))) PPC_WEAK_FUNC(sub_8290EFF0);
PPC_FUNC_IMPL(__imp__sub_8290EFF0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,3748
	ctx.r11.s64 = ctx.r11.s64 + 3748;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8290F014;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290f03c
	if (ctx.cr0.eq) goto loc_8290F03C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290f03c
	if (ctx.cr6.eq) goto loc_8290F03C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290F03C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290F03C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
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

__attribute__((alias("__imp__sub_8290F060"))) PPC_WEAK_FUNC(sub_8290F060);
PPC_FUNC_IMPL(__imp__sub_8290F060) {
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
	// bl 0x8290eff0
	ctx.lr = 0x8290F080;
	sub_8290EFF0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290f090
	if (ctx.cr0.eq) goto loc_8290F090;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8290F090;
	sub_823FD208(ctx, base);
loc_8290F090:
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

__attribute__((alias("__imp__sub_8290F0B0"))) PPC_WEAK_FUNC(sub_8290F0B0);
PPC_FUNC_IMPL(__imp__sub_8290F0B0) {
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
	// bl 0x82e4de08
	ctx.lr = 0x8290F0D0;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,3800
	ctx.r11.s64 = ctx.r11.s64 + 3800;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8290F100"))) PPC_WEAK_FUNC(sub_8290F100);
PPC_FUNC_IMPL(__imp__sub_8290F100) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,3800
	ctx.r11.s64 = ctx.r11.s64 + 3800;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8290F124;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290f14c
	if (ctx.cr0.eq) goto loc_8290F14C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8290f14c
	if (ctx.cr6.eq) goto loc_8290F14C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290F14C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290F14C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
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

__attribute__((alias("__imp__sub_8290F170"))) PPC_WEAK_FUNC(sub_8290F170);
PPC_FUNC_IMPL(__imp__sub_8290F170) {
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
	// bl 0x8290f100
	ctx.lr = 0x8290F190;
	sub_8290F100(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8290f1a0
	if (ctx.cr0.eq) goto loc_8290F1A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8290F1A0;
	sub_823FD208(ctx, base);
loc_8290F1A0:
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

