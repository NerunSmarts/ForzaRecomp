#include "forza_horizon_1_init.h"

__attribute__((alias("__imp__sub_82575A98"))) PPC_WEAK_FUNC(sub_82575A98);
PPC_FUNC_IMPL(__imp__sub_82575A98) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82575ad4
	if (ctx.cr6.eq) goto loc_82575AD4;
loc_82575ABC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256ec78
	ctx.lr = 0x82575AC8;
	sub_8256EC78(ctx, base);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82575abc
	if (!ctx.cr6.eq) goto loc_82575ABC;
loc_82575AD4:
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

__attribute__((alias("__imp__sub_82575AF0"))) PPC_WEAK_FUNC(sub_82575AF0);
PPC_FUNC_IMPL(__imp__sub_82575AF0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82575b30
	if (ctx.cr6.eq) goto loc_82575B30;
loc_82575B14:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82411478
	ctx.lr = 0x82575B24;
	sub_82411478(ctx, base);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82575b14
	if (!ctx.cr6.eq) goto loc_82575B14;
loc_82575B30:
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

__attribute__((alias("__imp__sub_82575B48"))) PPC_WEAK_FUNC(sub_82575B48);
PPC_FUNC_IMPL(__imp__sub_82575B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de00
	ctx.lr = 0x82575B50;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,1092
	ctx.r10.s64 = 71565312;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r10,r10,17475
	ctx.r10.u64 = ctx.r10.u64 | 17475;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82575b94
	if (ctx.cr6.lt) goto loc_82575B94;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r7,12
	ctx.r3.s64 = ctx.r7.s64 + 12;
	// bl 0x8256fef0
	ctx.lr = 0x82575B80;
	sub_8256FEF0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823fd208
	ctx.lr = 0x82575B88;
	sub_823FD208(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,19572
	ctx.r3.s64 = ctx.r11.s64 + 19572;
	// bl 0x82a90538
	ctx.lr = 0x82575B94;
	sub_82A90538(ctx, base);
loc_82575B94:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r6,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r6.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82575bc0
	if (!ctx.cr6.eq) goto loc_82575BC0;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82575bf8
	goto loc_82575BF8;
loc_82575BC0:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82575be4
	if (ctx.cr0.eq) goto loc_82575BE4;
	// stw r28,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82575bfc
	if (!ctx.cr6.eq) goto loc_82575BFC;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// b 0x82575bfc
	goto loc_82575BFC;
loc_82575BE4:
	// stw r28,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82575bfc
	if (!ctx.cr6.eq) goto loc_82575BFC;
loc_82575BF8:
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
loc_82575BFC:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 72);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82575cfc
	if (!ctx.cr0.eq) goto loc_82575CFC;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82575C18:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82575c7c
	if (!ctx.cr6.eq) goto loc_82575C7C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 72);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82575c8c
	if (ctx.cr0.eq) goto loc_82575C8C;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82575c54
	if (!ctx.cr6.eq) goto loc_82575C54;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x826979e0
	ctx.lr = 0x82575C54;
	sub_826979E0(ctx, base);
loc_82575C54:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82697a48
	ctx.lr = 0x82575C78;
	sub_82697A48(ctx, base);
	// b 0x82575cec
	goto loc_82575CEC;
loc_82575C7C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 72);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82575cb0
	if (!ctx.cr0.eq) goto loc_82575CB0;
loc_82575C8C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,72(r10)
	PPC_STORE_U8(ctx.r10.u32 + 72, ctx.r29.u8);
	// stb r29,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82575cec
	goto loc_82575CEC;
loc_82575CB0:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82575cc8
	if (!ctx.cr6.eq) goto loc_82575CC8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82697a48
	ctx.lr = 0x82575CC8;
	sub_82697A48(ctx, base);
loc_82575CC8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x826979e0
	ctx.lr = 0x82575CEC;
	sub_826979E0(ctx, base);
loc_82575CEC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 72);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82575c18
	if (ctx.cr0.eq) goto loc_82575C18;
loc_82575CFC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r28,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r28.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82575D18"))) PPC_WEAK_FUNC(sub_82575D18);
PPC_FUNC_IMPL(__imp__sub_82575D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de00
	ctx.lr = 0x82575D20;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,585
	ctx.r10.s64 = 38338560;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r10,r10,9361
	ctx.r10.u64 = ctx.r10.u64 | 9361;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82575d64
	if (ctx.cr6.lt) goto loc_82575D64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r7,16
	ctx.r3.s64 = ctx.r7.s64 + 16;
	// bl 0x8256fa90
	ctx.lr = 0x82575D50;
	sub_8256FA90(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823fd208
	ctx.lr = 0x82575D58;
	sub_823FD208(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,19572
	ctx.r3.s64 = ctx.r11.s64 + 19572;
	// bl 0x82a90538
	ctx.lr = 0x82575D64;
	sub_82A90538(ctx, base);
loc_82575D64:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r6,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r6.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82575d90
	if (!ctx.cr6.eq) goto loc_82575D90;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82575dc8
	goto loc_82575DC8;
loc_82575D90:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82575db4
	if (ctx.cr0.eq) goto loc_82575DB4;
	// stw r28,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82575dcc
	if (!ctx.cr6.eq) goto loc_82575DCC;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// b 0x82575dcc
	goto loc_82575DCC;
loc_82575DB4:
	// stw r28,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82575dcc
	if (!ctx.cr6.eq) goto loc_82575DCC;
loc_82575DC8:
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
loc_82575DCC:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 128);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82575ecc
	if (!ctx.cr0.eq) goto loc_82575ECC;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82575DE8:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82575e4c
	if (!ctx.cr6.eq) goto loc_82575E4C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 128);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82575e5c
	if (ctx.cr0.eq) goto loc_82575E5C;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82575e24
	if (!ctx.cr6.eq) goto loc_82575E24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x824e8e90
	ctx.lr = 0x82575E24;
	sub_824E8E90(ctx, base);
loc_82575E24:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,128(r11)
	PPC_STORE_U8(ctx.r11.u32 + 128, ctx.r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,128(r11)
	PPC_STORE_U8(ctx.r11.u32 + 128, ctx.r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x824e8ef8
	ctx.lr = 0x82575E48;
	sub_824E8EF8(ctx, base);
	// b 0x82575ebc
	goto loc_82575EBC;
loc_82575E4C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 128);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82575e80
	if (!ctx.cr0.eq) goto loc_82575E80;
loc_82575E5C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,128(r10)
	PPC_STORE_U8(ctx.r10.u32 + 128, ctx.r29.u8);
	// stb r29,128(r11)
	PPC_STORE_U8(ctx.r11.u32 + 128, ctx.r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,128(r11)
	PPC_STORE_U8(ctx.r11.u32 + 128, ctx.r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82575ebc
	goto loc_82575EBC;
loc_82575E80:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82575e98
	if (!ctx.cr6.eq) goto loc_82575E98;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x824e8ef8
	ctx.lr = 0x82575E98;
	sub_824E8EF8(ctx, base);
loc_82575E98:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,128(r11)
	PPC_STORE_U8(ctx.r11.u32 + 128, ctx.r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,128(r11)
	PPC_STORE_U8(ctx.r11.u32 + 128, ctx.r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x824e8e90
	ctx.lr = 0x82575EBC;
	sub_824E8E90(ctx, base);
loc_82575EBC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 128);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82575de8
	if (ctx.cr0.eq) goto loc_82575DE8;
loc_82575ECC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r28,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r28.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,128(r11)
	PPC_STORE_U8(ctx.r11.u32 + 128, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82575EE8"))) PPC_WEAK_FUNC(sub_82575EE8);
PPC_FUNC_IMPL(__imp__sub_82575EE8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82575f24
	if (ctx.cr6.eq) goto loc_82575F24;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82482878
	ctx.lr = 0x82575F18;
	sub_82482878(ctx, base);
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8256fa10
	ctx.lr = 0x82575F24;
	sub_8256FA10(ctx, base);
loc_82575F24:
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

__attribute__((alias("__imp__sub_82575F40"))) PPC_WEAK_FUNC(sub_82575F40);
PPC_FUNC_IMPL(__imp__sub_82575F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82575F48;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,18876
	ctx.r11.s64 = ctx.r11.s64 + 18876;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r10,r10,-10020
	ctx.r10.s64 = ctx.r10.s64 + -10020;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r9,r9,-7360
	ctx.r9.s64 = ctx.r9.s64 + -7360;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r8,-4100
	ctx.r8.s64 = ctx.r8.s64 + -4100;
	// addi r10,r7,-3956
	ctx.r10.s64 = ctx.r7.s64 + -3956;
	// addi r11,r11,-4116
	ctx.r11.s64 = ctx.r11.s64 + -4116;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r9,r6,-3980
	ctx.r9.s64 = ctx.r6.s64 + -3980;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// bl 0x824683b0
	ctx.lr = 0x82575FBC;
	sub_824683B0(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8247f018
	ctx.lr = 0x82575FC8;
	sub_8247F018(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8247f018
	ctx.lr = 0x82575FD4;
	sub_8247F018(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8247f018
	ctx.lr = 0x82575FE0;
	sub_8247F018(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8247f018
	ctx.lr = 0x82575FEC;
	sub_8247F018(ctx, base);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// bl 0x82c07930
	ctx.lr = 0x82575FF4;
	sub_82C07930(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,18
	ctx.r5.s64 = 18;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82576010;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82576020"))) PPC_WEAK_FUNC(sub_82576020);
PPC_FUNC_IMPL(__imp__sub_82576020) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82576030"))) PPC_WEAK_FUNC(sub_82576030);
PPC_FUNC_IMPL(__imp__sub_82576030) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// b 0x8256c0b8
	sub_8256C0B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82576038"))) PPC_WEAK_FUNC(sub_82576038);
PPC_FUNC_IMPL(__imp__sub_82576038) {
	PPC_FUNC_PROLOGUE();
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
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r11,r11,-4100
	ctx.r11.s64 = ctx.r11.s64 + -4100;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-3956
	ctx.r10.s64 = ctx.r10.s64 + -3956;
	// addi r9,r9,-4116
	ctx.r9.s64 = ctx.r9.s64 + -4116;
	// addi r11,r8,-3980
	ctx.r11.s64 = ctx.r8.s64 + -3980;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// bl 0x82c07930
	ctx.lr = 0x82576088;
	sub_82C07930(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,18
	ctx.r5.s64 = 18;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825760A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82568dc8
	ctx.lr = 0x825760AC;
	sub_82568DC8(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82840b88
	ctx.lr = 0x825760B4;
	sub_82840B88(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x823fd208
	ctx.lr = 0x825760BC;
	sub_823FD208(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x828736e0
	ctx.lr = 0x825760C4;
	sub_828736E0(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x823fd208
	ctx.lr = 0x825760CC;
	sub_823FD208(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x828736e0
	ctx.lr = 0x825760D4;
	sub_828736E0(ctx, base);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x823fd208
	ctx.lr = 0x825760DC;
	sub_823FD208(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x828736e0
	ctx.lr = 0x825760E4;
	sub_828736E0(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x823fd208
	ctx.lr = 0x825760EC;
	sub_823FD208(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x830b2320
	ctx.lr = 0x825760F4;
	sub_830B2320(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82de7330
	ctx.lr = 0x825760FC;
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

__attribute__((alias("__imp__sub_82576118"))) PPC_WEAK_FUNC(sub_82576118);
PPC_FUNC_IMPL(__imp__sub_82576118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de00
	ctx.lr = 0x82576120;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,20
	ctx.r26.s64 = ctx.r3.s64 + 20;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82576134;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_82576134:
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x825761c0
	goto loc_825761C0;
loc_82576144:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825761c8
	if (!ctx.cr0.eq) goto loc_825761C8;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824afb20
	ctx.lr = 0x8257615C;
	sub_824AFB20(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82576174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825761b0
	if (ctx.cr0.eq) goto loc_825761B0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82576190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825761b0
	if (ctx.cr0.eq) goto loc_825761B0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82573660
	ctx.lr = 0x825761A8;
	sub_82573660(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x825761b4
	goto loc_825761B4;
loc_825761B0:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_825761B4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x825761BC;
	sub_82DE7330(ctx, base);
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
loc_825761C0:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82576144
	if (!ctx.cr6.eq) goto loc_82576144;
loc_825761C8:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82576134
	if (!ctx.cr0.eq) goto loc_82576134;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831ece7c
	ctx.lr = 0x825761D8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825761E0"))) PPC_WEAK_FUNC(sub_825761E0);
PPC_FUNC_IMPL(__imp__sub_825761E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x825761E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257620C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82576238
	if (ctx.cr0.eq) goto loc_82576238;
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82576238
	if (ctx.cr0.eq) goto loc_82576238;
	// bl 0x82cf5418
	ctx.lr = 0x82576220;
	sub_82CF5418(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82576230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82576454
	if (ctx.cr0.eq) goto loc_82576454;
loc_82576238:
	// addi r4,r29,-4
	ctx.r4.s64 = ctx.r29.s64 + -4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d35328
	ctx.lr = 0x82576244;
	sub_82D35328(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257625C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82576278
	if (ctx.cr0.eq) goto loc_82576278;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r28,-8
	ctx.r3.s64 = ctx.r28.s64 + -8;
	// bl 0x82573660
	ctx.lr = 0x82576274;
	sub_82573660(ctx, base);
	// b 0x825763e0
	goto loc_825763E0;
loc_82576278:
	// bl 0x82ced1e0
	ctx.lr = 0x8257627C;
	sub_82CED1E0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257628C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82576390
	if (ctx.cr0.eq) goto loc_82576390;
	// bl 0x82cfbb90
	ctx.lr = 0x82576298;
	sub_82CFBB90(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8257630c
	if (ctx.cr0.eq) goto loc_8257630C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,0(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825762B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,8
	ctx.r8.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// bctrl 
	ctx.lr = 0x825762E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82ced508
	ctx.lr = 0x825762E4;
	sub_82CED508(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825762F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257630C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257630C:
	// bl 0x82cf5428
	ctx.lr = 0x82576310;
	sub_82CF5428(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257632C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82576340;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82576354;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82ced1e0
	ctx.lr = 0x8257635C;
	sub_82CED1E0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82576378;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82576390;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82576390:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825763A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825763d4
	if (ctx.cr0.eq) goto loc_825763D4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r30,19076(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19076);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825763C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824eff38
	ctx.lr = 0x825763D4;
	sub_824EFF38(ctx, base);
loc_825763D4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r28,-8
	ctx.r3.s64 = ctx.r28.s64 + -8;
	// bl 0x825723b0
	ctx.lr = 0x825763E0;
	sub_825723B0(ctx, base);
loc_825763E0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825763F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257644c
	if (ctx.cr0.eq) goto loc_8257644C;
	// bl 0x82cf5418
	ctx.lr = 0x82576400;
	sub_82CF5418(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82576410;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257644c
	if (ctx.cr0.eq) goto loc_8257644C;
	// bl 0x82cf5428
	ctx.lr = 0x8257641C;
	sub_82CF5428(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82576438;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257644C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257644C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x82576454;
	sub_82DE7330(ctx, base);
loc_82576454:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82576460"))) PPC_WEAK_FUNC(sub_82576460);
PPC_FUNC_IMPL(__imp__sub_82576460) {
	PPC_FUNC_PROLOGUE();
	// b 0x82573660
	sub_82573660(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82576468"))) PPC_WEAK_FUNC(sub_82576468);
PPC_FUNC_IMPL(__imp__sub_82576468) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8256f268
	ctx.lr = 0x8257648C;
	sub_8256F268(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825764a4
	if (ctx.cr6.eq) goto loc_825764A4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573660
	ctx.lr = 0x825764A4;
	sub_82573660(ctx, base);
loc_825764A4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x825764AC;
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

__attribute__((alias("__imp__sub_825764C0"))) PPC_WEAK_FUNC(sub_825764C0);
PPC_FUNC_IMPL(__imp__sub_825764C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x825764C8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,23748(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23748);
	// bl 0x82865438
	ctx.lr = 0x825764F0;
	sub_82865438(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x82576528
	if (!ctx.cr6.eq) goto loc_82576528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8256d5f8
	ctx.lr = 0x82576508;
	sub_8256D5F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82576528
	if (ctx.cr0.eq) goto loc_82576528;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82574178
	ctx.lr = 0x82576524;
	sub_82574178(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82576528:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82576538"))) PPC_WEAK_FUNC(sub_82576538);
PPC_FUNC_IMPL(__imp__sub_82576538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddf8
	ctx.lr = 0x82576540;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r5,r10,-3904
	ctx.r5.s64 = ctx.r10.s64 + -3904;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// addi r4,r24,56
	ctx.r4.s64 = ctx.r24.s64 + 56;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257656C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-3912
	ctx.r5.s64 = ctx.r11.s64 + -3912;
	// addi r4,r24,52
	ctx.r4.s64 = ctx.r24.s64 + 52;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257658C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-3920
	ctx.r4.s64 = ctx.r11.s64 + -3920;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825765B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825765C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825766f8
	if (ctx.cr0.eq) goto loc_825766F8;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r30,r9,-1464
	ctx.r30.s64 = ctx.r9.s64 + -1464;
	// addi r29,r8,-3932
	ctx.r29.s64 = ctx.r8.s64 + -3932;
	// addi r28,r7,-3944
	ctx.r28.s64 = ctx.r7.s64 + -3944;
	// addi r27,r10,16732
	ctx.r27.s64 = ctx.r10.s64 + 16732;
	// addi r25,r11,-3952
	ctx.r25.s64 = ctx.r11.s64 + -3952;
loc_825765FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257661C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825766c4
	if (ctx.cr0.eq) goto loc_825766C4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82a7f710
	ctx.lr = 0x82576630;
	sub_82A7F710(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825766c4
	if (!ctx.cr0.eq) goto loc_825766C4;
	// li r11,54
	ctx.r11.s64 = 54;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,54
	ctx.r6.s64 = 54;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ffcd8
	ctx.lr = 0x82576658;
	sub_825FFCD8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82576680;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257669C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r24,36
	ctx.r3.s64 = ctx.r24.s64 + 36;
	// stb r26,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r26.u8);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x8261e660
	ctx.lr = 0x825766C4;
	sub_8261E660(ctx, base);
loc_825766C4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825766D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825766F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825765fc
	if (!ctx.cr0.eq) goto loc_825765FC;
loc_825766F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257670C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a7de48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82576718"))) PPC_WEAK_FUNC(sub_82576718);
PPC_FUNC_IMPL(__imp__sub_82576718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x8257674c
	if (ctx.cr6.eq) goto loc_8257674C;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82575a98
	ctx.lr = 0x82576744;
	sub_82575A98(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823fd208
	ctx.lr = 0x8257674C;
	sub_823FD208(ctx, base);
loc_8257674C:
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

__attribute__((alias("__imp__sub_82576770"))) PPC_WEAK_FUNC(sub_82576770);
PPC_FUNC_IMPL(__imp__sub_82576770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82576778;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,73(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 73);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// b 0x825767bc
	goto loc_825767BC;
loc_82576790:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82576770
	ctx.lr = 0x8257679C;
	sub_82576770(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8256fef0
	ctx.lr = 0x825767AC;
	sub_8256FEF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823fd208
	ctx.lr = 0x825767B4;
	sub_823FD208(ctx, base);
	// lbz r11,73(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 73);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_825767BC:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82576790
	if (ctx.cr0.eq) goto loc_82576790;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825767D0"))) PPC_WEAK_FUNC(sub_825767D0);
PPC_FUNC_IMPL(__imp__sub_825767D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddf4
	ctx.lr = 0x825767D8;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,4(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r23,1
	ctx.r23.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// addi r31,r5,12
	ctx.r31.s64 = ctx.r5.s64 + 12;
	// lwz r30,4(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// lbz r11,73(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 73);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825768a0
	if (!ctx.cr0.eq) goto loc_825768A0;
	// clrlwi r24,r6,24
	ctx.r24.u64 = ctx.r6.u32 & 0xFF;
loc_8257680C:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82576850
	if (ctx.cr6.eq) goto loc_82576850;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82576834
	if (ctx.cr6.lt) goto loc_82576834;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82576838
	goto loc_82576838;
loc_82576834:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_82576838:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x823efa18
	ctx.lr = 0x82576844;
	sub_823EFA18(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// xori r29,r11,1
	ctx.r29.u64 = ctx.r11.u64 ^ 1;
	// b 0x82576880
	goto loc_82576880;
loc_82576850:
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwz r7,28(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82576868
	if (ctx.cr6.lt) goto loc_82576868;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82576868:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823efa18
	ctx.lr = 0x8257687C;
	sub_823EFA18(ctx, base);
	// rlwinm r29,r3,1,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
loc_82576880:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82576890
	if (ctx.cr0.eq) goto loc_82576890;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82576894
	goto loc_82576894;
loc_82576890:
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_82576894:
	// lbz r11,73(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 73);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8257680c
	if (ctx.cr0.eq) goto loc_8257680C;
loc_825768A0:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// beq 0x825768f4
	if (ctx.cr0.eq) goto loc_825768F4;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825768ec
	if (!ctx.cr6.eq) goto loc_825768EC;
	// li r5,1
	ctx.r5.s64 = 1;
loc_825768C8:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// bl 0x82575b48
	ctx.lr = 0x825768D8;
	sub_82575B48(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r23,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r23.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x82576954
	goto loc_82576954;
loc_825768EC:
	// bl 0x82697950
	ctx.lr = 0x825768F0;
	sub_82697950(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825768F4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82576910
	if (ctx.cr6.lt) goto loc_82576910;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82576914
	goto loc_82576914;
loc_82576910:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_82576914:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x823efa18
	ctx.lr = 0x82576920;
	sub_823EFA18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82576934
	if (!ctx.cr0.lt) goto loc_82576934;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x825768c8
	goto loc_825768C8;
loc_82576934:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256fef0
	ctx.lr = 0x82576940;
	sub_8256FEF0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823fd208
	ctx.lr = 0x82576948;
	sub_823FD208(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// stb r11,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r11.u8);
loc_82576954:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a7de44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82576960"))) PPC_WEAK_FUNC(sub_82576960);
PPC_FUNC_IMPL(__imp__sub_82576960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddf4
	ctx.lr = 0x82576968;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,4(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r23,1
	ctx.r23.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// addi r31,r5,16
	ctx.r31.s64 = ctx.r5.s64 + 16;
	// lwz r30,4(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// lbz r11,129(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 129);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82576a30
	if (!ctx.cr0.eq) goto loc_82576A30;
	// clrlwi r24,r6,24
	ctx.r24.u64 = ctx.r6.u32 & 0xFF;
loc_8257699C:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x825769e0
	if (ctx.cr6.eq) goto loc_825769E0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x825769c4
	if (ctx.cr6.lt) goto loc_825769C4;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x825769c8
	goto loc_825769C8;
loc_825769C4:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_825769C8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x823efa18
	ctx.lr = 0x825769D4;
	sub_823EFA18(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// xori r29,r11,1
	ctx.r29.u64 = ctx.r11.u64 ^ 1;
	// b 0x82576a10
	goto loc_82576A10;
loc_825769E0:
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// lwz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x825769f8
	if (ctx.cr6.lt) goto loc_825769F8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825769F8:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823efa18
	ctx.lr = 0x82576A0C;
	sub_823EFA18(ctx, base);
	// rlwinm r29,r3,1,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
loc_82576A10:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82576a20
	if (ctx.cr0.eq) goto loc_82576A20;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82576a24
	goto loc_82576A24;
loc_82576A20:
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_82576A24:
	// lbz r11,129(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 129);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8257699c
	if (ctx.cr0.eq) goto loc_8257699C;
loc_82576A30:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// beq 0x82576a84
	if (ctx.cr0.eq) goto loc_82576A84;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82576a7c
	if (!ctx.cr6.eq) goto loc_82576A7C;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82576A58:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// bl 0x82575d18
	ctx.lr = 0x82576A68;
	sub_82575D18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r23,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r23.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x82576ae4
	goto loc_82576AE4;
loc_82576A7C:
	// bl 0x825c79e0
	ctx.lr = 0x82576A80;
	sub_825C79E0(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82576A84:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82576aa0
	if (ctx.cr6.lt) goto loc_82576AA0;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82576aa4
	goto loc_82576AA4;
loc_82576AA0:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_82576AA4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x823efa18
	ctx.lr = 0x82576AB0;
	sub_823EFA18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82576ac4
	if (!ctx.cr0.lt) goto loc_82576AC4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x82576a58
	goto loc_82576A58;
loc_82576AC4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256fa90
	ctx.lr = 0x82576AD0;
	sub_8256FA90(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823fd208
	ctx.lr = 0x82576AD8;
	sub_823FD208(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// stb r11,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r11.u8);
loc_82576AE4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a7de44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82576AF0"))) PPC_WEAK_FUNC(sub_82576AF0);
PPC_FUNC_IMPL(__imp__sub_82576AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82576AF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82576b44
	if (ctx.cr6.eq) goto loc_82576B44;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82576b44
	if (ctx.cr6.eq) goto loc_82576B44;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82572d48
	ctx.lr = 0x82576B34;
	sub_82572D48(ctx, base);
	// subf r11,r30,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r30.u64;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82576B44:
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82576B58"))) PPC_WEAK_FUNC(sub_82576B58);
PPC_FUNC_IMPL(__imp__sub_82576B58) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82576038
	ctx.lr = 0x82576B78;
	sub_82576038(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82576b88
	if (ctx.cr0.eq) goto loc_82576B88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82576B88;
	sub_823FD208(ctx, base);
loc_82576B88:
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

__attribute__((alias("__imp__sub_82576BA8"))) PPC_WEAK_FUNC(sub_82576BA8);
PPC_FUNC_IMPL(__imp__sub_82576BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82576BB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r4,1620(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1620, ctx.r4.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r7,r3,-4
	ctx.r7.s64 = ctx.r3.s64 + -4;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f0,3648(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// li r6,50
	ctx.r6.s64 = 50;
loc_82576BD4:
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r8,r10,-16
	ctx.r8.s64 = ctx.r10.s64 + -16;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82576BE4:
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r9,r29
	PPC_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r31.u32);
	// bdnz 0x82576be4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82576BE4;
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r8,r10,-8
	ctx.r8.s64 = ctx.r10.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82576C08:
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r9,r29
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r29.u32, temp.u32);
	// bdnz 0x82576c08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82576C08;
	// li r9,5
	ctx.r9.s64 = 5;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82576C28:
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r9,r29
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r29.u32, temp.u32);
	// bdnz 0x82576c28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82576C28;
	// addi r10,r10,27
	ctx.r10.s64 = ctx.r10.s64 + 27;
	// stfs f0,88(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 88, temp.u32);
	// stfs f0,92(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 92, temp.u32);
	// stw r6,96(r7)
	PPC_STORE_U32(ctx.r7.u32 + 96, ctx.r6.u32);
	// stfs f0,100(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 100, temp.u32);
	// cmplwi cr6,r10,421
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 421, ctx.xer);
	// stfs f0,104(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 104, temp.u32);
	// stwu r6,108(r7)
	ea = 108 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// blt cr6,0x82576bd4
	if (ctx.cr6.lt) goto loc_82576BD4;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82576C64:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825738e8
	ctx.lr = 0x82576C74;
	sub_825738E8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,108
	ctx.r30.s64 = ctx.r30.s64 + 108;
	// cmplwi cr6,r31,15
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 15, ctx.xer);
	// blt cr6,0x82576c64
	if (ctx.cr6.lt) goto loc_82576C64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82576C90"))) PPC_WEAK_FUNC(sub_82576C90);
PPC_FUNC_IMPL(__imp__sub_82576C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82576C98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82576cdc
	if (ctx.cr6.eq) goto loc_82576CDC;
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x828736e0
	ctx.lr = 0x82576CB4;
	sub_828736E0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82576cd4
	goto loc_82576CD4;
loc_82576CC0:
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8255d310
	ctx.lr = 0x82576CD0;
	sub_8255D310(ctx, base);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82576CD4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82576cc0
	if (!ctx.cr6.eq) goto loc_82576CC0;
loc_82576CDC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82576CE8"))) PPC_WEAK_FUNC(sub_82576CE8);
PPC_FUNC_IMPL(__imp__sub_82576CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddfc
	ctx.lr = 0x82576CF0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1638
	ctx.r11.s64 = 107347968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,26214
	ctx.r11.u64 = ctx.r11.u64 | 26214;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82576d18
	if (!ctx.cr6.gt) goto loc_82576D18;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,18928
	ctx.r3.s64 = ctx.r11.s64 + 18928;
	// bl 0x82a90538
	ctx.lr = 0x82576D18;
	sub_82A90538(ctx, base);
loc_82576D18:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r25,40
	ctx.r25.s64 = 40;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// divw r11,r11,r25
	ctx.r11.s32 = (ctx.r25.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r25.s32 == -1)) ? ctx.r11.s32 / ctx.r25.s32 : 0;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x82576dbc
	if (!ctx.cr6.lt) goto loc_82576DBC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824e64b8
	ctx.lr = 0x82576D40;
	sub_824E64B8(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82576d70
	goto loc_82576D70;
loc_82576D54:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82576d68
	if (ctx.cr6.eq) goto loc_82576D68;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8256f8f8
	ctx.lr = 0x82576D68;
	sub_8256F8F8(ctx, base);
loc_82576D68:
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// addi r28,r28,40
	ctx.r28.s64 = ctx.r28.s64 + 40;
loc_82576D70:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82576d54
	if (!ctx.cr6.eq) goto loc_82576D54;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// subf r11,r3,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r3.u64;
	// divw r30,r11,r25
	ctx.r30.s32 = (ctx.r25.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r25.s32 == -1)) ? ctx.r11.s32 / ctx.r25.s32 : 0;
	// beq cr6,0x82576da0
	if (ctx.cr6.eq) goto loc_82576DA0;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// bl 0x82575a98
	ctx.lr = 0x82576D98;
	sub_82575A98(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823fd208
	ctx.lr = 0x82576DA0;
	sub_823FD208(ctx, base);
loc_82576DA0:
	// mulli r10,r26,40
	ctx.r10.s64 = static_cast<int64_t>(ctx.r26.u64 * static_cast<uint64_t>(40));
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mulli r11,r30,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(40));
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82576DBC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82576DC8"))) PPC_WEAK_FUNC(sub_82576DC8);
PPC_FUNC_IMPL(__imp__sub_82576DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82576770
	ctx.lr = 0x82576DE8;
	sub_82576770(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82576E20"))) PPC_WEAK_FUNC(sub_82576E20);
PPC_FUNC_IMPL(__imp__sub_82576E20) {
	PPC_FUNC_PROLOGUE();
	// lis r10,1638
	ctx.r10.s64 = 107347968;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,40
	ctx.r9.s64 = 40;
	// ori r8,r10,26214
	ctx.r8.u64 = ctx.r10.u64 | 26214;
	// subf r10,r11,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subf r7,r4,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r4.u64;
	// divw r10,r10,r9
	ctx.r10.s32 = (ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82576e54
	if (!ctx.cr6.lt) goto loc_82576E54;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,18928
	ctx.r3.s64 = ctx.r11.s64 + 18928;
	// b 0x82a90538
	sub_82A90538(ctx, base);
	return;
loc_82576E54:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// divw r11,r11,r9
	ctx.r11.s32 = (ctx.r9.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r11.s32 / ctx.r9.s32 : 0;
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
	// blt cr6,0x82576e84
	if (ctx.cr6.lt) goto loc_82576E84;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82576E84:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82576e90
	if (!ctx.cr6.lt) goto loc_82576E90;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82576E90:
	// b 0x82576ce8
	sub_82576CE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82576E94"))) PPC_WEAK_FUNC(sub_82576E94);
PPC_FUNC_IMPL(__imp__sub_82576E94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82576E98"))) PPC_WEAK_FUNC(sub_82576E98);
PPC_FUNC_IMPL(__imp__sub_82576E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddfc
	ctx.lr = 0x82576EA0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2340
	ctx.r11.s64 = 153354240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,37449
	ctx.r11.u64 = ctx.r11.u64 | 37449;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82576ec8
	if (!ctx.cr6.gt) goto loc_82576EC8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,18928
	ctx.r3.s64 = ctx.r11.s64 + 18928;
	// bl 0x82a90538
	ctx.lr = 0x82576EC8;
	sub_82A90538(ctx, base);
loc_82576EC8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r25,28
	ctx.r25.s64 = 28;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// divw r11,r11,r25
	ctx.r11.s32 = (ctx.r25.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r25.s32 == -1)) ? ctx.r11.s32 / ctx.r25.s32 : 0;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x82576f6c
	if (!ctx.cr6.lt) goto loc_82576F6C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8256bbf0
	ctx.lr = 0x82576EF0;
	sub_8256BBF0(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82576f20
	goto loc_82576F20;
loc_82576F04:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82576f18
	if (ctx.cr6.eq) goto loc_82576F18;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82482878
	ctx.lr = 0x82576F18;
	sub_82482878(ctx, base);
loc_82576F18:
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// addi r28,r28,28
	ctx.r28.s64 = ctx.r28.s64 + 28;
loc_82576F20:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82576f04
	if (!ctx.cr6.eq) goto loc_82576F04;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// subf r11,r3,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r3.u64;
	// divw r30,r11,r25
	ctx.r30.s32 = (ctx.r25.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r25.s32 == -1)) ? ctx.r11.s32 / ctx.r25.s32 : 0;
	// beq cr6,0x82576f50
	if (ctx.cr6.eq) goto loc_82576F50;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// bl 0x82575af0
	ctx.lr = 0x82576F48;
	sub_82575AF0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823fd208
	ctx.lr = 0x82576F50;
	sub_823FD208(ctx, base);
loc_82576F50:
	// mulli r10,r26,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r26.u64 * static_cast<uint64_t>(28));
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mulli r11,r30,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(28));
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82576F6C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82576F78"))) PPC_WEAK_FUNC(sub_82576F78);
PPC_FUNC_IMPL(__imp__sub_82576F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddfc
	ctx.lr = 0x82576F80;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2047
	ctx.r11.s64 = 134152192;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82576fa8
	if (!ctx.cr6.gt) goto loc_82576FA8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,18928
	ctx.r3.s64 = ctx.r11.s64 + 18928;
	// bl 0x82a90538
	ctx.lr = 0x82576FA8;
	sub_82A90538(ctx, base);
loc_82576FA8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x8257704c
	if (!ctx.cr6.lt) goto loc_8257704C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82637760
	ctx.lr = 0x82576FCC;
	sub_82637760(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82577008
	if (ctx.cr6.eq) goto loc_82577008;
	// addi r26,r31,12
	ctx.r26.s64 = ctx.r31.s64 + 12;
loc_82576FE8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x828da3e8
	ctx.lr = 0x82576FF8;
	sub_828DA3E8(ctx, base);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82576fe8
	if (!ctx.cr6.eq) goto loc_82576FE8;
loc_82577008:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// subf r11,r3,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r3.u64;
	// srawi r30,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 5;
	// beq cr6,0x82577030
	if (ctx.cr6.eq) goto loc_82577030;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// bl 0x8263d668
	ctx.lr = 0x82577028;
	sub_8263D668(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823fd208
	ctx.lr = 0x82577030;
	sub_823FD208(ctx, base);
loc_82577030:
	// rlwinm r10,r25,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8257704C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82577058"))) PPC_WEAK_FUNC(sub_82577058);
PPC_FUNC_IMPL(__imp__sub_82577058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddfc
	ctx.lr = 0x82577060;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2047
	ctx.r11.s64 = 134152192;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82577088
	if (!ctx.cr6.gt) goto loc_82577088;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,18928
	ctx.r3.s64 = ctx.r11.s64 + 18928;
	// bl 0x82a90538
	ctx.lr = 0x82577088;
	sub_82A90538(ctx, base);
loc_82577088:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x8257712c
	if (!ctx.cr6.lt) goto loc_8257712C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82637760
	ctx.lr = 0x825770AC;
	sub_82637760(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x825770e8
	if (ctx.cr6.eq) goto loc_825770E8;
	// addi r26,r31,12
	ctx.r26.s64 = ctx.r31.s64 + 12;
loc_825770C8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8256fff0
	ctx.lr = 0x825770D8;
	sub_8256FFF0(ctx, base);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x825770c8
	if (!ctx.cr6.eq) goto loc_825770C8;
loc_825770E8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// subf r11,r3,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r3.u64;
	// srawi r30,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 5;
	// beq cr6,0x82577110
	if (ctx.cr6.eq) goto loc_82577110;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// bl 0x8263d668
	ctx.lr = 0x82577108;
	sub_8263D668(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823fd208
	ctx.lr = 0x82577110;
	sub_823FD208(ctx, base);
loc_82577110:
	// rlwinm r10,r25,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8257712C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82577138"))) PPC_WEAK_FUNC(sub_82577138);
PPC_FUNC_IMPL(__imp__sub_82577138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddfc
	ctx.lr = 0x82577140;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2340
	ctx.r11.s64 = 153354240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,37449
	ctx.r11.u64 = ctx.r11.u64 | 37449;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82577168
	if (!ctx.cr6.gt) goto loc_82577168;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,18928
	ctx.r3.s64 = ctx.r11.s64 + 18928;
	// bl 0x82a90538
	ctx.lr = 0x82577168;
	sub_82A90538(ctx, base);
loc_82577168:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r25,28
	ctx.r25.s64 = 28;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// divw r11,r11,r25
	ctx.r11.s32 = (ctx.r25.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r25.s32 == -1)) ? ctx.r11.s32 / ctx.r25.s32 : 0;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x8257720c
	if (!ctx.cr6.lt) goto loc_8257720C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8256bbf0
	ctx.lr = 0x82577190;
	sub_8256BBF0(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x825771c0
	goto loc_825771C0;
loc_825771A4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x825771b8
	if (ctx.cr6.eq) goto loc_825771B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82407ac8
	ctx.lr = 0x825771B8;
	sub_82407AC8(ctx, base);
loc_825771B8:
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// addi r28,r28,28
	ctx.r28.s64 = ctx.r28.s64 + 28;
loc_825771C0:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x825771a4
	if (!ctx.cr6.eq) goto loc_825771A4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// subf r11,r3,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r3.u64;
	// divw r30,r11,r25
	ctx.r30.s32 = (ctx.r25.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r25.s32 == -1)) ? ctx.r11.s32 / ctx.r25.s32 : 0;
	// beq cr6,0x825771f0
	if (ctx.cr6.eq) goto loc_825771F0;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// bl 0x82575af0
	ctx.lr = 0x825771E8;
	sub_82575AF0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823fd208
	ctx.lr = 0x825771F0;
	sub_823FD208(ctx, base);
loc_825771F0:
	// mulli r10,r26,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r26.u64 * static_cast<uint64_t>(28));
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mulli r11,r30,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(28));
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8257720C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82577218"))) PPC_WEAK_FUNC(sub_82577218);
PPC_FUNC_IMPL(__imp__sub_82577218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82577220;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r4,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 5;
	// bl 0x8256c408
	ctx.lr = 0x82577250;
	sub_8256C408(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82577298
	if (ctx.cr0.eq) goto loc_82577298;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r28,4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82577294
	if (ctx.cr6.eq) goto loc_82577294;
	// addi r27,r31,12
	ctx.r27.s64 = ctx.r31.s64 + 12;
loc_82577274:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x828da3e8
	ctx.lr = 0x82577284;
	sub_828DA3E8(ctx, base);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82577274
	if (!ctx.cr6.eq) goto loc_82577274;
loc_82577294:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_82577298:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825772A8"))) PPC_WEAK_FUNC(sub_825772A8);
PPC_FUNC_IMPL(__imp__sub_825772A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x825772B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r4,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 5;
	// bl 0x8256c408
	ctx.lr = 0x825772E0;
	sub_8256C408(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82577328
	if (ctx.cr0.eq) goto loc_82577328;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r28,4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82577324
	if (ctx.cr6.eq) goto loc_82577324;
	// addi r27,r31,12
	ctx.r27.s64 = ctx.r31.s64 + 12;
loc_82577304:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8256fff0
	ctx.lr = 0x82577314;
	sub_8256FFF0(ctx, base);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82577304
	if (!ctx.cr6.eq) goto loc_82577304;
loc_82577324:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_82577328:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82577338"))) PPC_WEAK_FUNC(sub_82577338);
PPC_FUNC_IMPL(__imp__sub_82577338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82577340;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,28
	ctx.r10.s64 = 28;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// divw r4,r11,r10
	ctx.r4.s32 = (ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0;
	// bl 0x82bfbd88
	ctx.lr = 0x82577374;
	sub_82BFBD88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825773bc
	if (ctx.cr0.eq) goto loc_825773BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x825773b8
	if (ctx.cr6.eq) goto loc_825773B8;
loc_82577394:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825773a8
	if (ctx.cr6.eq) goto loc_825773A8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82407ac8
	ctx.lr = 0x825773A8;
	sub_82407AC8(ctx, base);
loc_825773A8:
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82577394
	if (!ctx.cr6.eq) goto loc_82577394;
loc_825773B8:
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
loc_825773BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825773C8"))) PPC_WEAK_FUNC(sub_825773C8);
PPC_FUNC_IMPL(__imp__sub_825773C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddfc
	ctx.lr = 0x825773D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// addi r31,r6,12
	ctx.r31.s64 = ctx.r6.s64 + 12;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82577410
	if (!ctx.cr6.eq) goto loc_82577410;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
loc_825773F8:
	// li r5,1
	ctx.r5.s64 = 1;
loc_825773FC:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82577408:
	// bl 0x82575b48
	ctx.lr = 0x8257740C;
	sub_82575B48(ctx, base);
	// b 0x8257762c
	goto loc_8257762C;
loc_82577410:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8257745c
	if (!ctx.cr6.eq) goto loc_8257745C;
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// addi r11,r28,12
	ctx.r11.s64 = ctx.r28.s64 + 12;
	// lwz r7,28(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82577438
	if (ctx.cr6.lt) goto loc_82577438;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82577438:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823efa18
	ctx.lr = 0x8257744C;
	sub_823EFA18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8257760c
	if (!ctx.cr0.lt) goto loc_8257760C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// b 0x825773f8
	goto loc_825773F8;
loc_8257745C:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825774ac
	if (!ctx.cr6.eq) goto loc_825774AC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82577484
	if (ctx.cr6.lt) goto loc_82577484;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82577488
	goto loc_82577488;
loc_82577484:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_82577488:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x823efa18
	ctx.lr = 0x82577494;
	sub_823EFA18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8257760c
	if (!ctx.cr0.lt) goto loc_8257760C;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x825773fc
	goto loc_825773FC;
loc_825774AC:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// addi r29,r28,12
	ctx.r29.s64 = ctx.r28.s64 + 12;
	// lwz r7,28(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x825774c8
	if (ctx.cr6.lt) goto loc_825774C8;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x825774cc
	goto loc_825774CC;
loc_825774C8:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_825774CC:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823efa18
	ctx.lr = 0x825774DC;
	sub_823EFA18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8257755c
	if (!ctx.cr0.lt) goto loc_8257755C;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82697950
	ctx.lr = 0x825774F0;
	sub_82697950(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// blt cr6,0x82577510
	if (ctx.cr6.lt) goto loc_82577510;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82577514
	goto loc_82577514;
loc_82577510:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_82577514:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x823efa18
	ctx.lr = 0x82577520;
	sub_823EFA18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8257755c
	if (!ctx.cr0.lt) goto loc_8257755C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r11,73(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82577550
	if (ctx.cr0.eq) goto loc_82577550;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82577548:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82577408
	goto loc_82577408;
loc_82577550:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
loc_82577554:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82577408
	goto loc_82577408;
loc_8257755C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82577574
	if (ctx.cr6.lt) goto loc_82577574;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82577578
	goto loc_82577578;
loc_82577574:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_82577578:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823efa18
	ctx.lr = 0x82577588;
	sub_823EFA18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8257760c
	if (!ctx.cr0.lt) goto loc_8257760C;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8256ba90
	ctx.lr = 0x8257759C;
	sub_8256BA90(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825775e0
	if (ctx.cr6.eq) goto loc_825775E0;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwz r7,28(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x825775c4
	if (ctx.cr6.lt) goto loc_825775C4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825775C4:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823efa18
	ctx.lr = 0x825775D8;
	sub_823EFA18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8257760c
	if (!ctx.cr0.lt) goto loc_8257760C;
loc_825775E0:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r11,73(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82577604
	if (ctx.cr0.eq) goto loc_82577604;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// b 0x82577548
	goto loc_82577548;
loc_82577604:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// b 0x82577554
	goto loc_82577554;
loc_8257760C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825767d0
	ctx.lr = 0x82577620;
	sub_825767D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_8257762C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82577638"))) PPC_WEAK_FUNC(sub_82577638);
PPC_FUNC_IMPL(__imp__sub_82577638) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8257767c
	if (ctx.cr6.eq) goto loc_8257767C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82572ce8
	ctx.lr = 0x82577668;
	sub_82572CE8(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8263d668
	ctx.lr = 0x82577678;
	sub_8263D668(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8257767C:
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

__attribute__((alias("__imp__sub_82577698"))) PPC_WEAK_FUNC(sub_82577698);
PPC_FUNC_IMPL(__imp__sub_82577698) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x825776dc
	if (ctx.cr6.eq) goto loc_825776DC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82571320
	ctx.lr = 0x825776C8;
	sub_82571320(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8263d668
	ctx.lr = 0x825776D8;
	sub_8263D668(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_825776DC:
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

__attribute__((alias("__imp__sub_825776F8"))) PPC_WEAK_FUNC(sub_825776F8);
PPC_FUNC_IMPL(__imp__sub_825776F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82577700;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82697b18
	ctx.lr = 0x8257770C;
	sub_82697B18(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addic. r31,r3,12
	ctx.xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r31.s64 = ctx.r3.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8257773c
	if (ctx.cr0.eq) goto loc_8257773C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r30,28
	ctx.r29.s64 = ctx.r30.s64 + 28;
	// bl 0x82482878
	ctx.lr = 0x82577728;
	sub_82482878(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82407ac8
	ctx.lr = 0x82577734;
	sub_82407AC8(ctx, base);
	// lbz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 56);
	// stb r11,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r11.u8);
loc_8257773C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82577748"))) PPC_WEAK_FUNC(sub_82577748);
PPC_FUNC_IMPL(__imp__sub_82577748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddfc
	ctx.lr = 0x82577750;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// addi r31,r6,16
	ctx.r31.s64 = ctx.r6.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82577790
	if (!ctx.cr6.eq) goto loc_82577790;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
loc_82577778:
	// li r5,1
	ctx.r5.s64 = 1;
loc_8257777C:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82577788:
	// bl 0x82575d18
	ctx.lr = 0x8257778C;
	sub_82575D18(ctx, base);
	// b 0x825779ac
	goto loc_825779AC;
loc_82577790:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825777dc
	if (!ctx.cr6.eq) goto loc_825777DC;
	// lwz r10,36(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// addi r11,r28,16
	ctx.r11.s64 = ctx.r28.s64 + 16;
	// lwz r7,32(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x825777b8
	if (ctx.cr6.lt) goto loc_825777B8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825777B8:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823efa18
	ctx.lr = 0x825777CC;
	sub_823EFA18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8257798c
	if (!ctx.cr0.lt) goto loc_8257798C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// b 0x82577778
	goto loc_82577778;
loc_825777DC:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8257782c
	if (!ctx.cr6.eq) goto loc_8257782C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82577804
	if (ctx.cr6.lt) goto loc_82577804;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82577808
	goto loc_82577808;
loc_82577804:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_82577808:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x823efa18
	ctx.lr = 0x82577814;
	sub_823EFA18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8257798c
	if (!ctx.cr0.lt) goto loc_8257798C;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8257777c
	goto loc_8257777C;
loc_8257782C:
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// addi r29,r28,16
	ctx.r29.s64 = ctx.r28.s64 + 16;
	// lwz r7,32(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82577848
	if (ctx.cr6.lt) goto loc_82577848;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x8257784c
	goto loc_8257784C;
loc_82577848:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_8257784C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823efa18
	ctx.lr = 0x8257785C;
	sub_823EFA18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x825778dc
	if (!ctx.cr0.lt) goto loc_825778DC;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825c79e0
	ctx.lr = 0x82577870;
	sub_825C79E0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// blt cr6,0x82577890
	if (ctx.cr6.lt) goto loc_82577890;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82577894
	goto loc_82577894;
loc_82577890:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_82577894:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x823efa18
	ctx.lr = 0x825778A0;
	sub_823EFA18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x825778dc
	if (!ctx.cr0.lt) goto loc_825778DC;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r11,129(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 129);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825778d0
	if (ctx.cr0.eq) goto loc_825778D0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_825778C8:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82577788
	goto loc_82577788;
loc_825778D0:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
loc_825778D4:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82577788
	goto loc_82577788;
loc_825778DC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x825778f4
	if (ctx.cr6.lt) goto loc_825778F4;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x825778f8
	goto loc_825778F8;
loc_825778F4:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_825778F8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823efa18
	ctx.lr = 0x82577908;
	sub_823EFA18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8257798c
	if (!ctx.cr0.lt) goto loc_8257798C;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825c7968
	ctx.lr = 0x8257791C;
	sub_825C7968(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82577960
	if (ctx.cr6.eq) goto loc_82577960;
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// lwz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82577944
	if (ctx.cr6.lt) goto loc_82577944;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82577944:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823efa18
	ctx.lr = 0x82577958;
	sub_823EFA18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8257798c
	if (!ctx.cr0.lt) goto loc_8257798C;
loc_82577960:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r11,129(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 129);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82577984
	if (ctx.cr0.eq) goto loc_82577984;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// b 0x825778c8
	goto loc_825778C8;
loc_82577984:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// b 0x825778d4
	goto loc_825778D4;
loc_8257798C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82576960
	ctx.lr = 0x825779A0;
	sub_82576960(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_825779AC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825779B8"))) PPC_WEAK_FUNC(sub_825779B8);
PPC_FUNC_IMPL(__imp__sub_825779B8) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825779ec
	if (!ctx.cr6.eq) goto loc_825779EC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82e6fbb8
	ctx.lr = 0x825779EC;
	sub_82E6FBB8(ctx, base);
loc_825779EC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8259a748
	ctx.lr = 0x825779FC;
	sub_8259A748(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
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

__attribute__((alias("__imp__sub_82577A20"))) PPC_WEAK_FUNC(sub_82577A20);
PPC_FUNC_IMPL(__imp__sub_82577A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3276(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3276);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82577A30"))) PPC_WEAK_FUNC(sub_82577A30);
PPC_FUNC_IMPL(__imp__sub_82577A30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,19308(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19308);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82577A40"))) PPC_WEAK_FUNC(sub_82577A40);
PPC_FUNC_IMPL(__imp__sub_82577A40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3264(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3264);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82577A50"))) PPC_WEAK_FUNC(sub_82577A50);
PPC_FUNC_IMPL(__imp__sub_82577A50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,40
	ctx.r10.s64 = 40;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// divw r3,r11,r10
	ctx.r3.s32 = (ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82577A68"))) PPC_WEAK_FUNC(sub_82577A68);
PPC_FUNC_IMPL(__imp__sub_82577A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-3824
	ctx.r4.s64 = ctx.r11.s64 + -3824;
	// bl 0x82450f48
	ctx.lr = 0x82577A88;
	sub_82450F48(ctx, base);
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

__attribute__((alias("__imp__sub_82577AA0"))) PPC_WEAK_FUNC(sub_82577AA0);
PPC_FUNC_IMPL(__imp__sub_82577AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,27104
	ctx.r4.s64 = ctx.r11.s64 + 27104;
	// bl 0x82450f48
	ctx.lr = 0x82577AC0;
	sub_82450F48(ctx, base);
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

__attribute__((alias("__imp__sub_82577AD8"))) PPC_WEAK_FUNC(sub_82577AD8);
PPC_FUNC_IMPL(__imp__sub_82577AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r31,r11,26652
	ctx.r31.s64 = ctx.r11.s64 + 26652;
	// lwz r11,26752(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26752);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82577b1c
	if (!ctx.cr0.eq) goto loc_82577B1C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,26752(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26752, ctx.r11.u32);
	// bl 0x82575f40
	ctx.lr = 0x82577B10;
	sub_82575F40(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-17600
	ctx.r3.s64 = ctx.r11.s64 + -17600;
	// bl 0x82a7e6b0
	ctx.lr = 0x82577B1C;
	sub_82A7E6B0(ctx, base);
loc_82577B1C:
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

__attribute__((alias("__imp__sub_82577B38"))) PPC_WEAK_FUNC(sub_82577B38);
PPC_FUNC_IMPL(__imp__sub_82577B38) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// b 0x82576c90
	sub_82576C90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82577B48"))) PPC_WEAK_FUNC(sub_82577B48);
PPC_FUNC_IMPL(__imp__sub_82577B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82577B50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82577B68;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82576c90
	ctx.lr = 0x82577B74;
	sub_82576C90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece7c
	ctx.lr = 0x82577B7C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82577B88"))) PPC_WEAK_FUNC(sub_82577B88);
PPC_FUNC_IMPL(__imp__sub_82577B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82577B90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831ece6c
	ctx.lr = 0x82577BA8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r30,72
	ctx.r4.s64 = ctx.r30.s64 + 72;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82576c90
	ctx.lr = 0x82577BB4;
	sub_82576C90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece7c
	ctx.lr = 0x82577BBC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82577BC8"))) PPC_WEAK_FUNC(sub_82577BC8);
PPC_FUNC_IMPL(__imp__sub_82577BC8) {
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
	// bl 0x825a4130
	ctx.lr = 0x82577BE0;
	sub_825A4130(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r10,-3808
	ctx.r10.s64 = ctx.r10.s64 + -3808;
	// lfs f0,3648(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// bl 0x8257bdb8
	ctx.lr = 0x82577C0C;
	sub_8257BDB8(ctx, base);
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

__attribute__((alias("__imp__sub_82577C28"))) PPC_WEAK_FUNC(sub_82577C28);
PPC_FUNC_IMPL(__imp__sub_82577C28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3208(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3208);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82577C38"))) PPC_WEAK_FUNC(sub_82577C38);
PPC_FUNC_IMPL(__imp__sub_82577C38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3488);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82577C48"))) PPC_WEAK_FUNC(sub_82577C48);
PPC_FUNC_IMPL(__imp__sub_82577C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x825a4130
	ctx.lr = 0x82577C60;
	sub_825A4130(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3748
	ctx.r11.s64 = ctx.r11.s64 + -3748;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8257bdb8
	ctx.lr = 0x82577C74;
	sub_8257BDB8(ctx, base);
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

__attribute__((alias("__imp__sub_82577C90"))) PPC_WEAK_FUNC(sub_82577C90);
PPC_FUNC_IMPL(__imp__sub_82577C90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3280(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3280);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82577CA0"))) PPC_WEAK_FUNC(sub_82577CA0);
PPC_FUNC_IMPL(__imp__sub_82577CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x825a4130
	ctx.lr = 0x82577CB8;
	sub_825A4130(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3684
	ctx.r11.s64 = ctx.r11.s64 + -3684;
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

__attribute__((alias("__imp__sub_82577CE0"))) PPC_WEAK_FUNC(sub_82577CE0);
PPC_FUNC_IMPL(__imp__sub_82577CE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,32544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32544);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82577CF0"))) PPC_WEAK_FUNC(sub_82577CF0);
PPC_FUNC_IMPL(__imp__sub_82577CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-3628
	ctx.r4.s64 = ctx.r11.s64 + -3628;
	// bl 0x82450f48
	ctx.lr = 0x82577D10;
	sub_82450F48(ctx, base);
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

__attribute__((alias("__imp__sub_82577D28"))) PPC_WEAK_FUNC(sub_82577D28);
PPC_FUNC_IMPL(__imp__sub_82577D28) {
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
	// bl 0x825a4130
	ctx.lr = 0x82577D40;
	sub_825A4130(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r10,-3604
	ctx.r10.s64 = ctx.r10.s64 + -3604;
	// lfs f0,3256(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3256);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82577D70"))) PPC_WEAK_FUNC(sub_82577D70);
PPC_FUNC_IMPL(__imp__sub_82577D70) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825a4130
	ctx.lr = 0x82577D90;
	sub_825A4130(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r30,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r30.u8);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-3544
	ctx.r10.s64 = ctx.r10.s64 + -3544;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// lfs f0,3648(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257bdb8
	ctx.lr = 0x82577DC8;
	sub_8257BDB8(ctx, base);
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

__attribute__((alias("__imp__sub_82577DE8"))) PPC_WEAK_FUNC(sub_82577DE8);
PPC_FUNC_IMPL(__imp__sub_82577DE8) {
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
	// bl 0x825a4130
	ctx.lr = 0x82577E00;
	sub_825A4130(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r10,-3484
	ctx.r10.s64 = ctx.r10.s64 + -3484;
	// lfs f0,3648(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// bl 0x8257bdb8
	ctx.lr = 0x82577E24;
	sub_8257BDB8(ctx, base);
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

__attribute__((alias("__imp__sub_82577E40"))) PPC_WEAK_FUNC(sub_82577E40);
PPC_FUNC_IMPL(__imp__sub_82577E40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,-3692(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3692);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82577E50"))) PPC_WEAK_FUNC(sub_82577E50);
PPC_FUNC_IMPL(__imp__sub_82577E50) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825a4130
	ctx.lr = 0x82577E70;
	sub_825A4130(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-3424
	ctx.r9.s64 = ctx.r11.s64 + -3424;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lfs f0,3648(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stb r11,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82577EC0"))) PPC_WEAK_FUNC(sub_82577EC0);
PPC_FUNC_IMPL(__imp__sub_82577EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// addi r11,r11,-3424
	ctx.r11.s64 = ctx.r11.s64 + -3424;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82d6e950
	ctx.lr = 0x82577EE8;
	sub_82D6E950(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,-3880
	ctx.r11.s64 = ctx.r11.s64 + -3880;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82576718
	ctx.lr = 0x82577EFC;
	sub_82576718(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82577F10"))) PPC_WEAK_FUNC(sub_82577F10);
PPC_FUNC_IMPL(__imp__sub_82577F10) {
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
	// bl 0x825a4130
	ctx.lr = 0x82577F28;
	sub_825A4130(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-3364
	ctx.r10.s64 = ctx.r10.s64 + -3364;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// lfs f0,3648(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stw r8,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82577F78"))) PPC_WEAK_FUNC(sub_82577F78);
PPC_FUNC_IMPL(__imp__sub_82577F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-3308
	ctx.r4.s64 = ctx.r11.s64 + -3308;
	// bl 0x82450f48
	ctx.lr = 0x82577F98;
	sub_82450F48(ctx, base);
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

__attribute__((alias("__imp__sub_82577FB0"))) PPC_WEAK_FUNC(sub_82577FB0);
PPC_FUNC_IMPL(__imp__sub_82577FB0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825a4130
	ctx.lr = 0x82577FD0;
	sub_825A4130(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,255
	ctx.r8.s64 = 255;
	// addi r9,r9,-3280
	ctx.r9.s64 = ctx.r9.s64 + -3280;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lfs f0,3648(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// stb r8,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r8.u8);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82578020"))) PPC_WEAK_FUNC(sub_82578020);
PPC_FUNC_IMPL(__imp__sub_82578020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x825a4130
	ctx.lr = 0x82578038;
	sub_825A4130(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3220
	ctx.r11.s64 = ctx.r11.s64 + -3220;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8257bdb8
	ctx.lr = 0x8257804C;
	sub_8257BDB8(ctx, base);
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

__attribute__((alias("__imp__sub_82578068"))) PPC_WEAK_FUNC(sub_82578068);
PPC_FUNC_IMPL(__imp__sub_82578068) {
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
	// bl 0x825a4130
	ctx.lr = 0x82578080;
	sub_825A4130(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r10,-3160
	ctx.r10.s64 = ctx.r10.s64 + -3160;
	// lfs f0,3648(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825780B8"))) PPC_WEAK_FUNC(sub_825780B8);
PPC_FUNC_IMPL(__imp__sub_825780B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3432(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3432);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825780C8"))) PPC_WEAK_FUNC(sub_825780C8);
PPC_FUNC_IMPL(__imp__sub_825780C8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825a4130
	ctx.lr = 0x825780E8;
	sub_825A4130(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-3100
	ctx.r10.s64 = ctx.r10.s64 + -3100;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// lfs f0,3648(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stw r8,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r8.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// bl 0x8257bdb8
	ctx.lr = 0x82578128;
	sub_8257BDB8(ctx, base);
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

__attribute__((alias("__imp__sub_82578148"))) PPC_WEAK_FUNC(sub_82578148);
PPC_FUNC_IMPL(__imp__sub_82578148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-7200
	ctx.r4.s64 = ctx.r11.s64 + -7200;
	// bl 0x82450f48
	ctx.lr = 0x82578168;
	sub_82450F48(ctx, base);
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

__attribute__((alias("__imp__sub_82578180"))) PPC_WEAK_FUNC(sub_82578180);
PPC_FUNC_IMPL(__imp__sub_82578180) {
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
	// bl 0x825a4130
	ctx.lr = 0x82578198;
	sub_825A4130(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r10,-3040
	ctx.r10.s64 = ctx.r10.s64 + -3040;
	// lfs f0,3648(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// bl 0x8257bdb8
	ctx.lr = 0x825781C4;
	sub_8257BDB8(ctx, base);
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

__attribute__((alias("__imp__sub_825781E0"))) PPC_WEAK_FUNC(sub_825781E0);
PPC_FUNC_IMPL(__imp__sub_825781E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-7032
	ctx.r4.s64 = ctx.r11.s64 + -7032;
	// bl 0x82450f48
	ctx.lr = 0x82578200;
	sub_82450F48(ctx, base);
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

__attribute__((alias("__imp__sub_82578218"))) PPC_WEAK_FUNC(sub_82578218);
PPC_FUNC_IMPL(__imp__sub_82578218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// addi r11,r11,-2980
	ctx.r11.s64 = ctx.r11.s64 + -2980;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82576718
	ctx.lr = 0x82578240;
	sub_82576718(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,-3880
	ctx.r11.s64 = ctx.r11.s64 + -3880;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82576718
	ctx.lr = 0x82578254;
	sub_82576718(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82578268"))) PPC_WEAK_FUNC(sub_82578268);
PPC_FUNC_IMPL(__imp__sub_82578268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-3920
	ctx.r4.s64 = ctx.r11.s64 + -3920;
	// bl 0x82450f48
	ctx.lr = 0x82578288;
	sub_82450F48(ctx, base);
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

__attribute__((alias("__imp__sub_825782A0"))) PPC_WEAK_FUNC(sub_825782A0);
PPC_FUNC_IMPL(__imp__sub_825782A0) {
	PPC_FUNC_PROLOGUE();
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
	// bge cr6,0x825782d8
	if (!ctx.cr6.lt) goto loc_825782D8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x825782dc
	if (!ctx.cr6.gt) goto loc_825782DC;
loc_825782D8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_825782DC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82578328
	if (ctx.cr0.eq) goto loc_82578328;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,40
	ctx.r9.s64 = 40;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r10,r30
	ctx.r10.u64 = ctx.r30.u64 - ctx.r10.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// divw r30,r10,r9
	ctx.r30.s32 = (ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0;
	// bne cr6,0x8257830c
	if (!ctx.cr6.eq) goto loc_8257830C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82576e20
	ctx.lr = 0x8257830C;
	sub_82576E20(ctx, base);
loc_8257830C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82578354
	if (ctx.cr6.eq) goto loc_82578354;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(40));
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82578350
	goto loc_82578350;
loc_82578328:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82578340
	if (!ctx.cr6.eq) goto loc_82578340;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82576e20
	ctx.lr = 0x82578340;
	sub_82576E20(ctx, base);
loc_82578340:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82578354
	if (ctx.cr6.eq) goto loc_82578354;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82578350:
	// bl 0x8256f8f8
	ctx.lr = 0x82578354;
	sub_8256F8F8(ctx, base);
loc_82578354:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
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

__attribute__((alias("__imp__sub_82578378"))) PPC_WEAK_FUNC(sub_82578378);
PPC_FUNC_IMPL(__imp__sub_82578378) {
	PPC_FUNC_PROLOGUE();
	// lis r10,2340
	ctx.r10.s64 = 153354240;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,28
	ctx.r9.s64 = 28;
	// ori r8,r10,37449
	ctx.r8.u64 = ctx.r10.u64 | 37449;
	// subf r10,r11,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subf r7,r4,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r4.u64;
	// divw r10,r10,r9
	ctx.r10.s32 = (ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825783ac
	if (!ctx.cr6.lt) goto loc_825783AC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,18928
	ctx.r3.s64 = ctx.r11.s64 + 18928;
	// b 0x82a90538
	sub_82A90538(ctx, base);
	return;
loc_825783AC:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// divw r11,r11,r9
	ctx.r11.s32 = (ctx.r9.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r11.s32 / ctx.r9.s32 : 0;
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
	// blt cr6,0x825783dc
	if (ctx.cr6.lt) goto loc_825783DC;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_825783DC:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825783e8
	if (!ctx.cr6.lt) goto loc_825783E8;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_825783E8:
	// b 0x82576e98
	sub_82576E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825783EC"))) PPC_WEAK_FUNC(sub_825783EC);
PPC_FUNC_IMPL(__imp__sub_825783EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825783F0"))) PPC_WEAK_FUNC(sub_825783F0);
PPC_FUNC_IMPL(__imp__sub_825783F0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,2047
	ctx.r10.s64 = 134152192;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// subf r10,r11,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r8,r4,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r4.u64;
	// srawi r10,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 5;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82578420
	if (!ctx.cr6.lt) goto loc_82578420;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,18928
	ctx.r3.s64 = ctx.r11.s64 + 18928;
	// b 0x82a90538
	sub_82A90538(ctx, base);
	return;
loc_82578420:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
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
	// blt cr6,0x82578450
	if (ctx.cr6.lt) goto loc_82578450;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82578450:
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8257845c
	if (!ctx.cr6.lt) goto loc_8257845C;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_8257845C:
	// b 0x82576f78
	sub_82576F78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82578460"))) PPC_WEAK_FUNC(sub_82578460);
PPC_FUNC_IMPL(__imp__sub_82578460) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82578468"))) PPC_WEAK_FUNC(sub_82578468);
PPC_FUNC_IMPL(__imp__sub_82578468) {
	PPC_FUNC_PROLOGUE();
	// lis r10,2047
	ctx.r10.s64 = 134152192;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// subf r10,r11,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r8,r4,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r4.u64;
	// srawi r10,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 5;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82578498
	if (!ctx.cr6.lt) goto loc_82578498;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,18928
	ctx.r3.s64 = ctx.r11.s64 + 18928;
	// b 0x82a90538
	sub_82A90538(ctx, base);
	return;
loc_82578498:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
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
	// blt cr6,0x825784c8
	if (ctx.cr6.lt) goto loc_825784C8;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_825784C8:
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x825784d4
	if (!ctx.cr6.lt) goto loc_825784D4;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_825784D4:
	// b 0x82577058
	sub_82577058(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825784D8"))) PPC_WEAK_FUNC(sub_825784D8);
PPC_FUNC_IMPL(__imp__sub_825784D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825784E0"))) PPC_WEAK_FUNC(sub_825784E0);
PPC_FUNC_IMPL(__imp__sub_825784E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,2340
	ctx.r10.s64 = 153354240;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,28
	ctx.r9.s64 = 28;
	// ori r8,r10,37449
	ctx.r8.u64 = ctx.r10.u64 | 37449;
	// subf r10,r11,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subf r7,r4,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r4.u64;
	// divw r10,r10,r9
	ctx.r10.s32 = (ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82578514
	if (!ctx.cr6.lt) goto loc_82578514;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,18928
	ctx.r3.s64 = ctx.r11.s64 + 18928;
	// b 0x82a90538
	sub_82A90538(ctx, base);
	return;
loc_82578514:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// divw r11,r11,r9
	ctx.r11.s32 = (ctx.r9.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r11.s32 / ctx.r9.s32 : 0;
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
	// blt cr6,0x82578544
	if (ctx.cr6.lt) goto loc_82578544;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82578544:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82578550
	if (!ctx.cr6.lt) goto loc_82578550;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82578550:
	// b 0x82577138
	sub_82577138(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82578554"))) PPC_WEAK_FUNC(sub_82578554);
PPC_FUNC_IMPL(__imp__sub_82578554) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82578558"))) PPC_WEAK_FUNC(sub_82578558);
PPC_FUNC_IMPL(__imp__sub_82578558) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82407ac8
	ctx.lr = 0x82578578;
	sub_82407AC8(ctx, base);
	// lfs f0,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// lfs f0,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f0,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f0,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// bl 0x825772a8
	ctx.lr = 0x825785A4;
	sub_825772A8(ctx, base);
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

__attribute__((alias("__imp__sub_825785C0"))) PPC_WEAK_FUNC(sub_825785C0);
PPC_FUNC_IMPL(__imp__sub_825785C0) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82407ac8
	ctx.lr = 0x825785E0;
	sub_82407AC8(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// bl 0x82571270
	ctx.lr = 0x825785EC;
	sub_82571270(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// bl 0x82577218
	ctx.lr = 0x825785F8;
	sub_82577218(ctx, base);
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

__attribute__((alias("__imp__sub_82578618"))) PPC_WEAK_FUNC(sub_82578618);
PPC_FUNC_IMPL(__imp__sub_82578618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82578620;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82578780
	if (ctx.cr6.eq) goto loc_82578780;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r11,r3,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r3.u64;
	// srawi. r9,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 5;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82578654
	if (!ctx.cr0.eq) goto loc_82578654;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82577638
	ctx.lr = 0x82578650;
	sub_82577638(ctx, base);
	// b 0x82578780
	goto loc_82578780;
loc_82578654:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r10,r11,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r11.u64;
	// srawi r10,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 5;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x825786a8
	if (ctx.cr6.gt) goto loc_825786A8;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x82572ce8
	ctx.lr = 0x82578678;
	sub_82572CE8(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8263d668
	ctx.lr = 0x82578684;
	sub_8263D668(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x82578780
	goto loc_82578780;
loc_825786A8:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// srawi r8,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 5;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82578708
	if (ctx.cr6.gt) goto loc_82578708;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// add r30,r10,r3
	ctx.r30.u64 = ctx.r10.u64 + ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82572ce8
	ctx.lr = 0x825786D0;
	sub_82572CE8(ctx, base);
	// lwz r28,4(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8257877c
	if (ctx.cr6.eq) goto loc_8257877C;
	// addi r27,r31,12
	ctx.r27.s64 = ctx.r31.s64 + 12;
loc_825786E4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x828da3e8
	ctx.lr = 0x825786F4;
	sub_828DA3E8(ctx, base);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x825786e4
	if (!ctx.cr6.eq) goto loc_825786E4;
	// b 0x8257877c
	goto loc_8257877C;
loc_82578708:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82578724
	if (ctx.cr6.eq) goto loc_82578724;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8263d668
	ctx.lr = 0x8257871C;
	sub_8263D668(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823fd208
	ctx.lr = 0x82578724;
	sub_823FD208(ctx, base);
loc_82578724:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r4,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 5;
	// bl 0x8256c408
	ctx.lr = 0x8257873C;
	sub_8256C408(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82578780
	if (ctx.cr0.eq) goto loc_82578780;
	// lwz r28,4(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8257877c
	if (ctx.cr6.eq) goto loc_8257877C;
	// addi r27,r31,12
	ctx.r27.s64 = ctx.r31.s64 + 12;
loc_8257875C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x828da3e8
	ctx.lr = 0x8257876C;
	sub_828DA3E8(ctx, base);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8257875c
	if (!ctx.cr6.eq) goto loc_8257875C;
loc_8257877C:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_82578780:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82578790"))) PPC_WEAK_FUNC(sub_82578790);
PPC_FUNC_IMPL(__imp__sub_82578790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82578798;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x825788f8
	if (ctx.cr6.eq) goto loc_825788F8;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r11,r3,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r3.u64;
	// srawi. r9,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 5;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825787cc
	if (!ctx.cr0.eq) goto loc_825787CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82577698
	ctx.lr = 0x825787C8;
	sub_82577698(ctx, base);
	// b 0x825788f8
	goto loc_825788F8;
loc_825787CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r10,r11,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r11.u64;
	// srawi r10,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 5;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82578820
	if (ctx.cr6.gt) goto loc_82578820;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x82571320
	ctx.lr = 0x825787F0;
	sub_82571320(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8263d668
	ctx.lr = 0x825787FC;
	sub_8263D668(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x825788f8
	goto loc_825788F8;
loc_82578820:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// srawi r8,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 5;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82578880
	if (ctx.cr6.gt) goto loc_82578880;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// add r30,r10,r3
	ctx.r30.u64 = ctx.r10.u64 + ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82571320
	ctx.lr = 0x82578848;
	sub_82571320(ctx, base);
	// lwz r28,4(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x825788f4
	if (ctx.cr6.eq) goto loc_825788F4;
	// addi r27,r31,12
	ctx.r27.s64 = ctx.r31.s64 + 12;
loc_8257885C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8256fff0
	ctx.lr = 0x8257886C;
	sub_8256FFF0(ctx, base);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8257885c
	if (!ctx.cr6.eq) goto loc_8257885C;
	// b 0x825788f4
	goto loc_825788F4;
loc_82578880:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257889c
	if (ctx.cr6.eq) goto loc_8257889C;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8263d668
	ctx.lr = 0x82578894;
	sub_8263D668(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823fd208
	ctx.lr = 0x8257889C;
	sub_823FD208(ctx, base);
loc_8257889C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r4,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 5;
	// bl 0x8256c408
	ctx.lr = 0x825788B4;
	sub_8256C408(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825788f8
	if (ctx.cr0.eq) goto loc_825788F8;
	// lwz r28,4(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x825788f4
	if (ctx.cr6.eq) goto loc_825788F4;
	// addi r27,r31,12
	ctx.r27.s64 = ctx.r31.s64 + 12;
loc_825788D4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8256fff0
	ctx.lr = 0x825788E4;
	sub_8256FFF0(ctx, base);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x825788d4
	if (!ctx.cr6.eq) goto loc_825788D4;
loc_825788F4:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_825788F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82578908"))) PPC_WEAK_FUNC(sub_82578908);
PPC_FUNC_IMPL(__imp__sub_82578908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82578910;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x825c8260
	ctx.lr = 0x8257892C;
	sub_825C8260(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,13
	ctx.r3.s64 = ctx.r31.s64 + 13;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82575ee8
	ctx.lr = 0x82578940;
	sub_82575EE8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82577748
	ctx.lr = 0x82578954;
	sub_82577748(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82578960"))) PPC_WEAK_FUNC(sub_82578960);
PPC_FUNC_IMPL(__imp__sub_82578960) {
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
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82407b20
	ctx.lr = 0x82578988;
	sub_82407B20(ctx, base);
	// lfs f0,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// lfs f0,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f0,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f0,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// bl 0x82578790
	ctx.lr = 0x825789B4;
	sub_82578790(ctx, base);
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

__attribute__((alias("__imp__sub_825789D0"))) PPC_WEAK_FUNC(sub_825789D0);
PPC_FUNC_IMPL(__imp__sub_825789D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x825789D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,33
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 33, ctx.xer);
	// bgt cr6,0x82578c20
	if (ctx.cr6.gt) goto loc_82578C20;
	// beq cr6,0x82578c04
	if (ctx.cr6.eq) goto loc_82578C04;
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// bgt cr6,0x82578b1c
	if (ctx.cr6.gt) goto loc_82578B1C;
	// beq cr6,0x82578af8
	if (ctx.cr6.eq) goto loc_82578AF8;
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// beq cr6,0x82578a78
	if (ctx.cr6.eq) goto loc_82578A78;
	// cmplwi cr6,r5,9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 9, ctx.xer);
	// beq cr6,0x82578a5c
	if (ctx.cr6.eq) goto loc_82578A5C;
	// cmplwi cr6,r5,10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 10, ctx.xer);
	// beq cr6,0x82578a44
	if (ctx.cr6.eq) goto loc_82578A44;
	// cmplwi cr6,r5,11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 11, ctx.xer);
	// bne cr6,0x82578b94
	if (!ctx.cr6.eq) goto loc_82578B94;
	// cmplwi cr6,r7,84
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 84, ctx.xer);
	// bne cr6,0x82578b94
	if (!ctx.cr6.eq) goto loc_82578B94;
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82578b94
	if (ctx.cr6.eq) goto loc_82578B94;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r3,r11,15108
	ctx.r3.s64 = ctx.r11.s64 + 15108;
	// bl 0x8249f9f0
	ctx.lr = 0x82578A40;
	sub_8249F9F0(ctx, base);
	// b 0x82578b98
	goto loc_82578B98;
loc_82578A44:
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82578b94
	if (ctx.cr6.eq) goto loc_82578B94;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824aaf38
	ctx.lr = 0x82578A58;
	sub_824AAF38(ctx, base);
	// b 0x82578af0
	goto loc_82578AF0;
loc_82578A5C:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// lwz r3,-3624(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3624);
	// bl 0x82635b90
	ctx.lr = 0x82578A74;
	sub_82635B90(ctx, base);
	// b 0x82578af0
	goto loc_82578AF0;
loc_82578A78:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82578A8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82578b94
	if (!ctx.cr6.eq) goto loc_82578B94;
	// bl 0x82cf5418
	ctx.lr = 0x82578A98;
	sub_82CF5418(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82578AA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82578acc
	if (!ctx.cr0.eq) goto loc_82578ACC;
	// bl 0x82cf5418
	ctx.lr = 0x82578AB4;
	sub_82CF5418(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82578AC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82578b94
	if (ctx.cr0.eq) goto loc_82578B94;
loc_82578ACC:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// lhz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82578AE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r30,2
	ctx.r4.s64 = ctx.r30.s64 + 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82882a08
	ctx.lr = 0x82578AF0;
	sub_82882A08(ctx, base);
loc_82578AF0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82578b98
	goto loc_82578B98;
loc_82578AF8:
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// bne cr6,0x82578b94
	if (!ctx.cr6.eq) goto loc_82578B94;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
loc_82578B10:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82578B18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82578af0
	goto loc_82578AF0;
loc_82578B1C:
	// cmplwi cr6,r5,17
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 17, ctx.xer);
	// beq cr6,0x82578bdc
	if (ctx.cr6.eq) goto loc_82578BDC;
	// cmplwi cr6,r5,18
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 18, ctx.xer);
	// beq cr6,0x82578bb8
	if (ctx.cr6.eq) goto loc_82578BB8;
	// cmplwi cr6,r5,19
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 19, ctx.xer);
	// beq cr6,0x82578ba0
	if (ctx.cr6.eq) goto loc_82578BA0;
	// cmplwi cr6,r5,32
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 32, ctx.xer);
	// bne cr6,0x82578b94
	if (!ctx.cr6.eq) goto loc_82578B94;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82578b94
	if (ctx.cr6.eq) goto loc_82578B94;
	// cmplwi cr6,r7,8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 8, ctx.xer);
	// blt cr6,0x82578b94
	if (ctx.cr6.lt) goto loc_82578B94;
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82578b94
	if (!ctx.cr6.eq) goto loc_82578B94;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r6,r30,8
	ctx.r6.s64 = ctx.r30.s64 + 8;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lfs f1,3648(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 3648);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82578B94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82578B94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82578B98:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
loc_82578BA0:
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82578b94
	if (ctx.cr6.eq) goto loc_82578B94;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824bad48
	ctx.lr = 0x82578BB4;
	sub_824BAD48(ctx, base);
	// b 0x82578af0
	goto loc_82578AF0;
loc_82578BB8:
	// cmplwi cr6,r7,8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 8, ctx.xer);
	// bne cr6,0x82578b94
	if (!ctx.cr6.eq) goto loc_82578B94;
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82578b94
	if (ctx.cr6.eq) goto loc_82578B94;
	// bl 0x824a3b78
	ctx.lr = 0x82578BD0;
	sub_824A3B78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e56438
	ctx.lr = 0x82578BD8;
	sub_82E56438(ctx, base);
	// b 0x82578af0
	goto loc_82578AF0;
loc_82578BDC:
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82578b94
	if (ctx.cr6.eq) goto loc_82578B94;
	// bl 0x8249ea00
	ctx.lr = 0x82578BEC;
	sub_8249EA00(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82578b94
	if (!ctx.cr0.eq) goto loc_82578B94;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x824ab018
	ctx.lr = 0x82578C00;
	sub_824AB018(ctx, base);
	// b 0x82578af0
	goto loc_82578AF0;
loc_82578C04:
	// cmplwi cr6,r7,504
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 504, ctx.xer);
	// bne cr6,0x82578b94
	if (!ctx.cr6.eq) goto loc_82578B94;
	// bl 0x8255e530
	ctx.lr = 0x82578C10;
	sub_8255E530(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82559a10
	ctx.lr = 0x82578C1C;
	sub_82559A10(ctx, base);
	// b 0x82578af0
	goto loc_82578AF0;
loc_82578C20:
	// cmplwi cr6,r5,39
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 39, ctx.xer);
	// bgt cr6,0x82578d24
	if (ctx.cr6.gt) goto loc_82578D24;
	// beq cr6,0x82578d08
	if (ctx.cr6.eq) goto loc_82578D08;
	// cmplwi cr6,r5,34
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 34, ctx.xer);
	// beq cr6,0x82578cec
	if (ctx.cr6.eq) goto loc_82578CEC;
	// cmplwi cr6,r5,36
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 36, ctx.xer);
	// beq cr6,0x82578cbc
	if (ctx.cr6.eq) goto loc_82578CBC;
	// cmplwi cr6,r5,37
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 37, ctx.xer);
	// beq cr6,0x82578c68
	if (ctx.cr6.eq) goto loc_82578C68;
	// cmplwi cr6,r5,38
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 38, ctx.xer);
	// bne cr6,0x82578b94
	if (!ctx.cr6.eq) goto loc_82578B94;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x82578b94
	if (!ctx.cr6.eq) goto loc_82578B94;
	// bl 0x82577ad8
	ctx.lr = 0x82578C58;
	sub_82577AD8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// b 0x82578b10
	goto loc_82578B10;
loc_82578C68:
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x82578b94
	if (!ctx.cr6.eq) goto loc_82578B94;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82578C8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82578CA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82880a88
	ctx.lr = 0x82578CA4;
	sub_82880A88(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x8286e2d0
	ctx.lr = 0x82578CB8;
	sub_8286E2D0(ctx, base);
	// b 0x82578b94
	goto loc_82578B94;
loc_82578CBC:
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x82578b94
	if (!ctx.cr6.eq) goto loc_82578B94;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82578b94
	if (ctx.cr6.eq) goto loc_82578B94;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x824aca68
	ctx.lr = 0x82578CE8;
	sub_824ACA68(ctx, base);
	// b 0x82578b94
	goto loc_82578B94;
loc_82578CEC:
	// cmplwi cr6,r7,6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 6, ctx.xer);
	// bne cr6,0x82578b94
	if (!ctx.cr6.eq) goto loc_82578B94;
	// bl 0x8255e530
	ctx.lr = 0x82578CF8;
	sub_8255E530(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82559958
	ctx.lr = 0x82578D04;
	sub_82559958(ctx, base);
	// b 0x82578af0
	goto loc_82578AF0;
loc_82578D08:
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x82578b94
	if (!ctx.cr6.eq) goto loc_82578B94;
	// bl 0x82577ad8
	ctx.lr = 0x82578D14;
	sub_82577AD8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// b 0x82578b10
	goto loc_82578B10;
loc_82578D24:
	// cmplwi cr6,r5,134
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 134, ctx.xer);
	// beq cr6,0x82578d8c
	if (ctx.cr6.eq) goto loc_82578D8C;
	// cmplwi cr6,r5,135
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 135, ctx.xer);
	// beq cr6,0x82578d64
	if (ctx.cr6.eq) goto loc_82578D64;
	// cmplwi cr6,r5,136
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 136, ctx.xer);
	// bne cr6,0x82578b94
	if (!ctx.cr6.eq) goto loc_82578B94;
	// cmplwi cr6,r7,18
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 18, ctx.xer);
	// bne cr6,0x82578b94
	if (!ctx.cr6.eq) goto loc_82578B94;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82578b94
	if (ctx.cr6.eq) goto loc_82578B94;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,15108
	ctx.r3.s64 = ctx.r11.s64 + 15108;
	// bl 0x824b5af8
	ctx.lr = 0x82578D60;
	sub_824B5AF8(ctx, base);
	// b 0x82578b98
	goto loc_82578B98;
loc_82578D64:
	// cmplwi cr6,r7,84
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 84, ctx.xer);
	// bne cr6,0x82578b94
	if (!ctx.cr6.eq) goto loc_82578B94;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82578b94
	if (ctx.cr6.eq) goto loc_82578B94;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,15108
	ctx.r3.s64 = ctx.r11.s64 + 15108;
	// bl 0x824b5ad8
	ctx.lr = 0x82578D88;
	sub_824B5AD8(ctx, base);
	// b 0x82578b98
	goto loc_82578B98;
loc_82578D8C:
	// cmplwi cr6,r7,304
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 304, ctx.xer);
	// bne cr6,0x82578b94
	if (!ctx.cr6.eq) goto loc_82578B94;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82578b94
	if (ctx.cr6.eq) goto loc_82578B94;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,15108
	ctx.r3.s64 = ctx.r11.s64 + 15108;
	// bl 0x824b5ab8
	ctx.lr = 0x82578DB0;
	sub_824B5AB8(ctx, base);
	// b 0x82578b98
	goto loc_82578B98;
}

__attribute__((alias("__imp__sub_82578DB8"))) PPC_WEAK_FUNC(sub_82578DB8);
PPC_FUNC_IMPL(__imp__sub_82578DB8) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82411478
	ctx.lr = 0x82578DD8;
	sub_82411478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3648(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3392(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3392);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3368(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3368);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f12,40(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82578E28"))) PPC_WEAK_FUNC(sub_82578E28);
PPC_FUNC_IMPL(__imp__sub_82578E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82411478
	ctx.lr = 0x82578E48;
	sub_82411478(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82578E80"))) PPC_WEAK_FUNC(sub_82578E80);
PPC_FUNC_IMPL(__imp__sub_82578E80) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82577ec0
	ctx.lr = 0x82578EA0;
	sub_82577EC0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82578eb0
	if (ctx.cr0.eq) goto loc_82578EB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82578EB0;
	sub_823FD208(ctx, base);
loc_82578EB0:
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

__attribute__((alias("__imp__sub_82578ED0"))) PPC_WEAK_FUNC(sub_82578ED0);
PPC_FUNC_IMPL(__imp__sub_82578ED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de00
	ctx.lr = 0x82578ED8;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x825a4130
	ctx.lr = 0x82578EE8;
	sub_825A4130(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-2980
	ctx.r11.s64 = ctx.r11.s64 + -2980;
	// stw r30,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r30.u32);
	// addi r31,r28,40
	ctx.r31.s64 = ctx.r28.s64 + 40;
	// stw r30,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r30.u32);
	// li r4,41
	ctx.r4.s64 = 41;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r30.u32);
	// stw r30,44(r28)
	PPC_STORE_U32(ctx.r28.u32 + 44, ctx.r30.u32);
	// stw r30,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r30.u32);
	// bl 0x82576ce8
	ctx.lr = 0x82578F1C;
	sub_82576CE8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r27,r11,-2924
	ctx.r27.s64 = ctx.r11.s64 + -2924;
	// lfs f31,3648(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3648);
	ctx.f31.f64 = double(temp.f32);
	// addi r26,r10,-13984
	ctx.r26.s64 = ctx.r10.s64 + -13984;
loc_82578F38:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82411478
	ctx.lr = 0x82578F48;
	sub_82411478(ctx, base);
	// addi r11,r29,10
	ctx.r11.s64 = ctx.r29.s64 + 10;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r5,0
	ctx.r5.s64 = 0;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8240d528
	ctx.lr = 0x82578F7C;
	sub_8240D528(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824984c8
	ctx.lr = 0x82578F8C;
	sub_824984C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x826e1b10
	ctx.lr = 0x82578F98;
	sub_826E1B10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x82578FA0;
	sub_82DE7330(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825782a0
	ctx.lr = 0x82578FAC;
	sub_825782A0(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82de7330
	ctx.lr = 0x82578FB4;
	sub_82DE7330(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82411478
	ctx.lr = 0x82578FC4;
	sub_82411478(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,41
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 41, ctx.xer);
	// blt cr6,0x82578f38
	if (ctx.cr6.lt) goto loc_82578F38;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a7de50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82578FE0"))) PPC_WEAK_FUNC(sub_82578FE0);
PPC_FUNC_IMPL(__imp__sub_82578FE0) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82578218
	ctx.lr = 0x82579000;
	sub_82578218(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82579010
	if (ctx.cr0.eq) goto loc_82579010;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82579010;
	sub_823FD208(ctx, base);
loc_82579010:
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

__attribute__((alias("__imp__sub_82579030"))) PPC_WEAK_FUNC(sub_82579030);
PPC_FUNC_IMPL(__imp__sub_82579030) {
	PPC_FUNC_PROLOGUE();
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
	// bge cr6,0x82579068
	if (!ctx.cr6.lt) goto loc_82579068;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x8257906c
	if (!ctx.cr6.gt) goto loc_8257906C;
loc_82579068:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8257906C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825790b8
	if (ctx.cr0.eq) goto loc_825790B8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,28
	ctx.r9.s64 = 28;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r10,r30
	ctx.r10.u64 = ctx.r30.u64 - ctx.r10.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// divw r30,r10,r9
	ctx.r30.s32 = (ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0;
	// bne cr6,0x8257909c
	if (!ctx.cr6.eq) goto loc_8257909C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82578378
	ctx.lr = 0x8257909C;
	sub_82578378(ctx, base);
loc_8257909C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825790e4
	if (ctx.cr6.eq) goto loc_825790E4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(28));
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x825790e0
	goto loc_825790E0;
loc_825790B8:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825790d0
	if (!ctx.cr6.eq) goto loc_825790D0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82578378
	ctx.lr = 0x825790D0;
	sub_82578378(ctx, base);
loc_825790D0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825790e4
	if (ctx.cr6.eq) goto loc_825790E4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_825790E0:
	// bl 0x82407ac8
	ctx.lr = 0x825790E4;
	sub_82407AC8(ctx, base);
loc_825790E4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
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

__attribute__((alias("__imp__sub_82579108"))) PPC_WEAK_FUNC(sub_82579108);
PPC_FUNC_IMPL(__imp__sub_82579108) {
	PPC_FUNC_PROLOGUE();
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
	// bge cr6,0x82579140
	if (!ctx.cr6.lt) goto loc_82579140;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82579144
	if (!ctx.cr6.gt) goto loc_82579144;
loc_82579140:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82579144:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8257918c
	if (ctx.cr0.eq) goto loc_8257918C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r10,r30
	ctx.r10.u64 = ctx.r30.u64 - ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// srawi r30,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r30.s64 = ctx.r10.s32 >> 5;
	// bne cr6,0x82579170
	if (!ctx.cr6.eq) goto loc_82579170;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825783f0
	ctx.lr = 0x82579170;
	sub_825783F0(ctx, base);
loc_82579170:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x828da3e8
	ctx.lr = 0x82579188;
	sub_828DA3E8(ctx, base);
	// b 0x825791b4
	goto loc_825791B4;
loc_8257918C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825791a4
	if (!ctx.cr6.eq) goto loc_825791A4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825783f0
	ctx.lr = 0x825791A4;
	sub_825783F0(ctx, base);
loc_825791A4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x828da3e8
	ctx.lr = 0x825791B4;
	sub_828DA3E8(ctx, base);
loc_825791B4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
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

__attribute__((alias("__imp__sub_825791D8"))) PPC_WEAK_FUNC(sub_825791D8);
PPC_FUNC_IMPL(__imp__sub_825791D8) {
	PPC_FUNC_PROLOGUE();
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
	// bge cr6,0x82579210
	if (!ctx.cr6.lt) goto loc_82579210;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82579214
	if (!ctx.cr6.gt) goto loc_82579214;
loc_82579210:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82579214:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8257925c
	if (ctx.cr0.eq) goto loc_8257925C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r10,r30
	ctx.r10.u64 = ctx.r30.u64 - ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// srawi r30,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r30.s64 = ctx.r10.s32 >> 5;
	// bne cr6,0x82579240
	if (!ctx.cr6.eq) goto loc_82579240;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82578468
	ctx.lr = 0x82579240;
	sub_82578468(ctx, base);
loc_82579240:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8256fff0
	ctx.lr = 0x82579258;
	sub_8256FFF0(ctx, base);
	// b 0x82579284
	goto loc_82579284;
loc_8257925C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82579274
	if (!ctx.cr6.eq) goto loc_82579274;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82578468
	ctx.lr = 0x82579274;
	sub_82578468(ctx, base);
loc_82579274:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8256fff0
	ctx.lr = 0x82579284;
	sub_8256FFF0(ctx, base);
loc_82579284:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
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

__attribute__((alias("__imp__sub_825792A8"))) PPC_WEAK_FUNC(sub_825792A8);
PPC_FUNC_IMPL(__imp__sub_825792A8) {
	PPC_FUNC_PROLOGUE();
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
	// bge cr6,0x825792e0
	if (!ctx.cr6.lt) goto loc_825792E0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x825792e4
	if (!ctx.cr6.gt) goto loc_825792E4;
loc_825792E0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_825792E4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82579330
	if (ctx.cr0.eq) goto loc_82579330;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,28
	ctx.r9.s64 = 28;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r10,r30
	ctx.r10.u64 = ctx.r30.u64 - ctx.r10.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// divw r30,r10,r9
	ctx.r30.s32 = (ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0;
	// bne cr6,0x82579314
	if (!ctx.cr6.eq) goto loc_82579314;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825784e0
	ctx.lr = 0x82579314;
	sub_825784E0(ctx, base);
loc_82579314:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257935c
	if (ctx.cr6.eq) goto loc_8257935C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(28));
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82579358
	goto loc_82579358;
loc_82579330:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82579348
	if (!ctx.cr6.eq) goto loc_82579348;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825784e0
	ctx.lr = 0x82579348;
	sub_825784E0(ctx, base);
loc_82579348:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257935c
	if (ctx.cr6.eq) goto loc_8257935C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82579358:
	// bl 0x82407ac8
	ctx.lr = 0x8257935C;
	sub_82407AC8(ctx, base);
loc_8257935C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
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

__attribute__((alias("__imp__sub_82579380"))) PPC_WEAK_FUNC(sub_82579380);
PPC_FUNC_IMPL(__imp__sub_82579380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82579388;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x827273b8
	ctx.lr = 0x82579398;
	sub_827273B8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825793dc
	if (ctx.cr6.eq) goto loc_825793DC;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lwz r7,28(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x825793c0
	if (ctx.cr6.lt) goto loc_825793C0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825793C0:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823efa18
	ctx.lr = 0x825793D4;
	sub_823EFA18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82579468
	if (!ctx.cr0.lt) goto loc_82579468;
loc_825793DC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82411478
	ctx.lr = 0x825793EC;
	sub_82411478(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r11,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r11.u8);
	// bl 0x82482878
	ctx.lr = 0x82579400;
	sub_82482878(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82407ac8
	ctx.lr = 0x8257940C;
	sub_82407AC8(ctx, base);
	// lbz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 124);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r11,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r11.u8);
	// bl 0x825776f8
	ctx.lr = 0x82579420;
	sub_825776F8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825773c8
	ctx.lr = 0x82579434;
	sub_825773C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82411478
	ctx.lr = 0x82579448;
	sub_82411478(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82411478
	ctx.lr = 0x82579458;
	sub_82411478(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82411478
	ctx.lr = 0x82579468;
	sub_82411478(ctx, base);
loc_82579468:
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82579478"))) PPC_WEAK_FUNC(sub_82579478);
PPC_FUNC_IMPL(__imp__sub_82579478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82579480;
	__savegprlr_28(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825c9a28
	ctx.lr = 0x82579490;
	sub_825C9A28(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825794d4
	if (ctx.cr6.eq) goto loc_825794D4;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x825794b8
	if (ctx.cr6.lt) goto loc_825794B8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825794B8:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823efa18
	ctx.lr = 0x825794CC;
	sub_823EFA18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82579544
	if (!ctx.cr0.lt) goto loc_82579544;
loc_825794D4:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8256e538
	ctx.lr = 0x825794DC;
	sub_8256E538(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82482878
	ctx.lr = 0x825794EC;
	sub_82482878(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8256fa10
	ctx.lr = 0x825794F8;
	sub_8256FA10(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82578908
	ctx.lr = 0x8257950C;
	sub_82578908(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82411478
	ctx.lr = 0x82579524;
	sub_82411478(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82411478
	ctx.lr = 0x82579534;
	sub_82411478(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82411478
	ctx.lr = 0x82579544;
	sub_82411478(ctx, base);
loc_82579544:
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82579550"))) PPC_WEAK_FUNC(sub_82579550);
PPC_FUNC_IMPL(__imp__sub_82579550) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8263e520
	ctx.lr = 0x82579574;
	sub_8263E520(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82411478
	ctx.lr = 0x82579584;
	sub_82411478(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82579594
	if (ctx.cr0.eq) goto loc_82579594;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82579594;
	sub_823FD208(ctx, base);
loc_82579594:
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

__attribute__((alias("__imp__sub_825795B0"))) PPC_WEAK_FUNC(sub_825795B0);
PPC_FUNC_IMPL(__imp__sub_825795B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x825795B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825795D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82579660
	if (ctx.cr0.eq) goto loc_82579660;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x825795f4
	goto loc_825795F4;
loc_825795E4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82569038
	ctx.lr = 0x825795F0;
	sub_82569038(ctx, base);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
loc_825795F4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825795e4
	if (!ctx.cr6.eq) goto loc_825795E4;
	// b 0x82579680
	goto loc_82579680;
loc_82579604:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82568fa8
	ctx.lr = 0x8257960C;
	sub_82568FA8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82579660
	if (ctx.cr0.eq) goto loc_82579660;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82411478
	ctx.lr = 0x82579624;
	sub_82411478(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r11,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r11.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82569038
	ctx.lr = 0x82579638;
	sub_82569038(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82579650
	if (ctx.cr6.eq) goto loc_82579650;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825791d8
	ctx.lr = 0x82579650;
	sub_825791D8(ctx, base);
loc_82579650:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82411478
	ctx.lr = 0x82579660;
	sub_82411478(ctx, base);
loc_82579660:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82579678;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82579604
	if (!ctx.cr0.eq) goto loc_82579604;
loc_82579680:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82579688"))) PPC_WEAK_FUNC(sub_82579688);
PPC_FUNC_IMPL(__imp__sub_82579688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82579690;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r10,-2912
	ctx.r4.s64 = ctx.r10.s64 + -2912;
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825796C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r5,r11,-15968
	ctx.r5.s64 = ctx.r11.s64 + -15968;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825796E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825796FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82579778
	if (ctx.cr0.eq) goto loc_82579778;
	// lwz r31,28(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// b 0x8257971c
	goto loc_8257971C;
loc_8257970C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82569b38
	ctx.lr = 0x82579718;
	sub_82569B38(ctx, base);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
loc_8257971C:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8257970c
	if (!ctx.cr6.eq) goto loc_8257970C;
	// addi r31,r30,44
	ctx.r31.s64 = ctx.r30.s64 + 44;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi. r10,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 5;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82579870
	if (ctx.cr0.eq) goto loc_82579870;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82579748:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82569ca8
	ctx.lr = 0x82579754;
	sub_82569CA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r10,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 5;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82579748
	if (ctx.cr6.lt) goto loc_82579748;
	// b 0x82579870
	goto loc_82579870;
loc_82579778:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82579790;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82579870
	if (ctx.cr0.eq) goto loc_82579870;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f30,3368(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3368);
	ctx.f30.f64 = double(temp.f32);
	// addi r31,r11,4944
	ctx.r31.s64 = ctx.r11.s64 + 4944;
	// lfs f31,3648(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3648);
	ctx.f31.f64 = double(temp.f32);
	// addi r29,r10,-7024
	ctx.r29.s64 = ctx.r10.s64 + -7024;
	// addi r27,r9,-7040
	ctx.r27.s64 = ctx.r9.s64 + -7040;
loc_825797C0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a7f710
	ctx.lr = 0x825797CC;
	sub_82A7F710(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8257980c
	if (!ctx.cr0.eq) goto loc_8257980C;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f30,124(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82569b38
	ctx.lr = 0x825797FC;
	sub_82569B38(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x82dce488
	ctx.lr = 0x82579808;
	sub_82DCE488(ctx, base);
	// b 0x82579850
	goto loc_82579850;
loc_8257980C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a7f710
	ctx.lr = 0x82579818;
	sub_82A7F710(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82579850
	if (!ctx.cr0.eq) goto loc_82579850;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8256e4a0
	ctx.lr = 0x82579828;
	sub_8256E4A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82569ca8
	ctx.lr = 0x82579834;
	sub_82569CA8(ctx, base);
	// addi r3,r30,44
	ctx.r3.s64 = ctx.r30.s64 + 44;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82579108
	ctx.lr = 0x82579840;
	sub_82579108(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82411478
	ctx.lr = 0x82579850;
	sub_82411478(ctx, base);
loc_82579850:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82579868;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825797c0
	if (!ctx.cr0.eq) goto loc_825797C0;
loc_82579870:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82579884;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82579898"))) PPC_WEAK_FUNC(sub_82579898);
PPC_FUNC_IMPL(__imp__sub_82579898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x825798A0;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r10,-4356
	ctx.r4.s64 = ctx.r10.s64 + -4356;
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825798DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-15968
	ctx.r5.s64 = ctx.r11.s64 + -15968;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825798FC;
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
	ctx.lr = 0x82579910;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f30,3648(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3648);
	ctx.f30.f64 = double(temp.f32);
	// bne 0x8257992c
	if (!ctx.cr0.eq) goto loc_8257992C;
	// lfs f0,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x8257994c
	if (ctx.cr6.eq) goto loc_8257994C;
loc_8257992C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r29,28
	ctx.r4.s64 = ctx.r29.s64 + 28;
	// addi r5,r10,-7032
	ctx.r5.s64 = ctx.r10.s64 + -7032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257994C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257994C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82579960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f31,3392(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3392);
	ctx.f31.f64 = double(temp.f32);
	// bne 0x82579980
	if (!ctx.cr0.eq) goto loc_82579980;
	// lfs f0,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// addi r27,r29,32
	ctx.r27.s64 = ctx.r29.s64 + 32;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x825799a4
	if (ctx.cr6.eq) goto loc_825799A4;
loc_82579980:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r27,r29,32
	ctx.r27.s64 = ctx.r29.s64 + 32;
	// addi r5,r10,-18408
	ctx.r5.s64 = ctx.r10.s64 + -18408;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825799A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825799A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825799B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825799d0
	if (!ctx.cr0.eq) goto loc_825799D0;
	// lfs f0,36(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// addi r28,r29,36
	ctx.r28.s64 = ctx.r29.s64 + 36;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x825799f4
	if (ctx.cr6.eq) goto loc_825799F4;
loc_825799D0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r28,r29,36
	ctx.r28.s64 = ctx.r29.s64 + 36;
	// addi r5,r10,-2868
	ctx.r5.s64 = ctx.r10.s64 + -2868;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825799F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825799F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82579A08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f29,3368(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3368);
	ctx.f29.f64 = double(temp.f32);
	// bne 0x82579a28
	if (!ctx.cr0.eq) goto loc_82579A28;
	// lfs f0,40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r29,40
	ctx.r30.s64 = ctx.r29.s64 + 40;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// beq cr6,0x82579a4c
	if (ctx.cr6.eq) goto loc_82579A4C;
loc_82579A28:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r30,r29,40
	ctx.r30.s64 = ctx.r29.s64 + 40;
	// addi r5,r10,-2880
	ctx.r5.s64 = ctx.r10.s64 + -2880;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82579A4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82579A4C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82579A60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82579ac4
	if (ctx.cr0.eq) goto loc_82579AC4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r9,-2888
	ctx.r5.s64 = ctx.r9.s64 + -2888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3468);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,180(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82579A94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82579ab0
	if (!ctx.cr6.eq) goto loc_82579AB0;
	// stfs f31,0(r27)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f30,0(r28)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// stfs f29,0(r30)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// b 0x82579ac4
	goto loc_82579AC4;
loc_82579AB0:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x82579ac4
	if (ctx.cr6.lt) goto loc_82579AC4;
	// stfs f30,0(r27)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_82579AC4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82579AD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r30,r11,-2904
	ctx.r30.s64 = ctx.r11.s64 + -2904;
	// beq 0x82579b1c
	if (ctx.cr0.eq) goto loc_82579B1C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82579B00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82579b1c
	if (ctx.cr0.eq) goto loc_82579B1C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82a7f710
	ctx.lr = 0x82579B14;
	sub_82A7F710(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82579b48
	if (ctx.cr0.eq) goto loc_82579B48;
loc_82579B1C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82579B30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82579b88
	if (ctx.cr0.eq) goto loc_82579B88;
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82579b88
	if (ctx.cr6.eq) goto loc_82579B88;
loc_82579B48:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82579B68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r29,44
	ctx.r4.s64 = ctx.r29.s64 + 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825795b0
	ctx.lr = 0x82579B74;
	sub_825795B0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82579B88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82579B88:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82579B9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82579BB0"))) PPC_WEAK_FUNC(sub_82579BB0);
PPC_FUNC_IMPL(__imp__sub_82579BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82579BB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82579BDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82579cb8
	if (ctx.cr0.eq) goto loc_82579CB8;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82579c10
	goto loc_82579C10;
loc_82579BF4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// bl 0x82569038
	ctx.lr = 0x82579C00;
	sub_82569038(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8256ba90
	ctx.lr = 0x82579C08;
	sub_8256BA90(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82579C10:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82579bf4
	if (!ctx.cr6.eq) goto loc_82579BF4;
	// b 0x82579cd8
	goto loc_82579CD8;
loc_82579C1C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82579C28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82579cb8
	if (ctx.cr0.eq) goto loc_82579CB8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82411478
	ctx.lr = 0x82579C40;
	sub_82411478(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r11,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r11.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82569038
	ctx.lr = 0x82579C54;
	sub_82569038(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82579ca8
	if (ctx.cr6.eq) goto loc_82579CA8;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bctrl 
	ctx.lr = 0x82579C70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82579380
	ctx.lr = 0x82579C7C;
	sub_82579380(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82407b20
	ctx.lr = 0x82579C90;
	sub_82407B20(ctx, base);
	// lbz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 156);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,28(r27)
	PPC_STORE_U8(ctx.r27.u32 + 28, ctx.r11.u8);
	// bl 0x82411478
	ctx.lr = 0x82579CA8;
	sub_82411478(ctx, base);
loc_82579CA8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82411478
	ctx.lr = 0x82579CB8;
	sub_82411478(ctx, base);
loc_82579CB8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82579CD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82579c1c
	if (!ctx.cr0.eq) goto loc_82579C1C;
loc_82579CD8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82579CE0"))) PPC_WEAK_FUNC(sub_82579CE0);
PPC_FUNC_IMPL(__imp__sub_82579CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82579CE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82579D0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82579d4c
	if (ctx.cr0.eq) goto loc_82579D4C;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82579d40
	goto loc_82579D40;
loc_82579D24:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82569d58
	ctx.lr = 0x82579D30;
	sub_82569D58(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825c7968
	ctx.lr = 0x82579D38;
	sub_825C7968(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82579D40:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82579d24
	if (!ctx.cr6.eq) goto loc_82579D24;
	// b 0x82579e1c
	goto loc_82579E1C;
loc_82579D4C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82579D64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82579e1c
	if (ctx.cr0.eq) goto loc_82579E1C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r11,-13984
	ctx.r29.s64 = ctx.r11.s64 + -13984;
loc_82579D74:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82579D88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82579dfc
	if (ctx.cr0.eq) goto loc_82579DFC;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8256e538
	ctx.lr = 0x82579D98;
	sub_8256E538(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82569d58
	ctx.lr = 0x82579DA4;
	sub_82569D58(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x824afd28
	ctx.lr = 0x82579DB0;
	sub_824AFD28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82579dec
	if (!ctx.cr0.eq) goto loc_82579DEC;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bctrl 
	ctx.lr = 0x82579DC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82579478
	ctx.lr = 0x82579DD4;
	sub_82579478(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x8256fe68
	ctx.lr = 0x82579DDC;
	sub_8256FE68(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82411478
	ctx.lr = 0x82579DEC;
	sub_82411478(ctx, base);
loc_82579DEC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82411478
	ctx.lr = 0x82579DFC;
	sub_82411478(ctx, base);
loc_82579DFC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82579E14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82579d74
	if (!ctx.cr0.eq) goto loc_82579D74;
loc_82579E1C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82579E28"))) PPC_WEAK_FUNC(sub_82579E28);
PPC_FUNC_IMPL(__imp__sub_82579E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddf4
	ctx.lr = 0x82579E30;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// bl 0x824afb20
	ctx.lr = 0x82579E60;
	sub_824AFB20(ctx, base);
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// ld r9,304(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 304);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// lbz r10,319(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 319);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c6bf10
	ctx.lr = 0x82579E94;
	sub_82C6BF10(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r29,200
	ctx.r30.s64 = ctx.r29.s64 + 200;
	// addi r11,r11,-2844
	ctx.r11.s64 = ctx.r11.s64 + -2844;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r31,200(r29)
	PPC_STORE_U32(ctx.r29.u32 + 200, ctx.r31.u32);
	// stw r31,204(r29)
	PPC_STORE_U32(ctx.r29.u32 + 204, ctx.r31.u32);
	// stw r31,208(r29)
	PPC_STORE_U32(ctx.r29.u32 + 208, ctx.r31.u32);
	// beq cr6,0x82579eec
	if (ctx.cr6.eq) goto loc_82579EEC;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82579EBC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r27,r31,4
	ctx.r27.s64 = ctx.r31.s64 + 4;
	// bl 0x82450f48
	ctx.lr = 0x82579ECC;
	sub_82450F48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82823558
	ctx.lr = 0x82579EE0;
	sub_82823558(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82579ebc
	if (!ctx.cr0.eq) goto loc_82579EBC;
loc_82579EEC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82de7330
	ctx.lr = 0x82579EF4;
	sub_82DE7330(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a7de44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82579F00"))) PPC_WEAK_FUNC(sub_82579F00);
PPC_FUNC_IMPL(__imp__sub_82579F00) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82407b20
	sub_82407B20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82579F10"))) PPC_WEAK_FUNC(sub_82579F10);
PPC_FUNC_IMPL(__imp__sub_82579F10) {
	PPC_FUNC_PROLOGUE();
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
	// addi r31,r3,200
	ctx.r31.s64 = ctx.r3.s64 + 200;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e6eb48
	ctx.lr = 0x82579F34;
	sub_82E6EB48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8263e520
	ctx.lr = 0x82579F3C;
	sub_8263E520(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c69608
	ctx.lr = 0x82579F44;
	sub_82C69608(ctx, base);
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

__attribute__((alias("__imp__sub_82579F60"))) PPC_WEAK_FUNC(sub_82579F60);
PPC_FUNC_IMPL(__imp__sub_82579F60) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82579f10
	ctx.lr = 0x82579F80;
	sub_82579F10(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82579f90
	if (ctx.cr0.eq) goto loc_82579F90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82579F90;
	sub_823FD208(ctx, base);
loc_82579F90:
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

__attribute__((alias("__imp__sub_82579FB0"))) PPC_WEAK_FUNC(sub_82579FB0);
PPC_FUNC_IMPL(__imp__sub_82579FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82579FB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// bl 0x82c6c038
	ctx.lr = 0x82579FCC;
	sub_82C6C038(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-2844
	ctx.r10.s64 = ctx.r10.s64 + -2844;
	// addi r31,r29,200
	ctx.r31.s64 = ctx.r29.s64 + 200;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r11,200(r29)
	PPC_STORE_U32(ctx.r29.u32 + 200, ctx.r11.u32);
	// stw r11,204(r29)
	PPC_STORE_U32(ctx.r29.u32 + 204, ctx.r11.u32);
	// stw r11,208(r29)
	PPC_STORE_U32(ctx.r29.u32 + 208, ctx.r11.u32);
	// beq cr6,0x8257a024
	if (ctx.cr6.eq) goto loc_8257A024;
loc_82579FF4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r27,r30,4
	ctx.r27.s64 = ctx.r30.s64 + 4;
	// bl 0x82450f48
	ctx.lr = 0x8257A004;
	sub_82450F48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82823558
	ctx.lr = 0x8257A018;
	sub_82823558(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x82579ff4
	if (!ctx.cr0.eq) goto loc_82579FF4;
loc_8257A024:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257A030"))) PPC_WEAK_FUNC(sub_8257A030);
PPC_FUNC_IMPL(__imp__sub_8257A030) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8257a06c
	if (ctx.cr6.eq) goto loc_8257A06C;
loc_8257A054:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82579550
	ctx.lr = 0x8257A060;
	sub_82579550(ctx, base);
	// addi r31,r31,60
	ctx.r31.s64 = ctx.r31.s64 + 60;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8257a054
	if (!ctx.cr6.eq) goto loc_8257A054;
loc_8257A06C:
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

__attribute__((alias("__imp__sub_8257A088"))) PPC_WEAK_FUNC(sub_8257A088);
PPC_FUNC_IMPL(__imp__sub_8257A088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x8257A090;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8257a0ec
	if (ctx.cr6.eq) goto loc_8257A0EC;
	// lwz r29,4(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8257a0d8
	if (ctx.cr6.eq) goto loc_8257A0D8;
loc_8257A0BC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82578960
	ctx.lr = 0x8257A0C8;
	sub_82578960(ctx, base);
	// addi r30,r30,60
	ctx.r30.s64 = ctx.r30.s64 + 60;
	// addi r31,r31,60
	ctx.r31.s64 = ctx.r31.s64 + 60;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8257a0bc
	if (!ctx.cr6.eq) goto loc_8257A0BC;
loc_8257A0D8:
	// addi r5,r28,12
	ctx.r5.s64 = ctx.r28.s64 + 12;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257a030
	ctx.lr = 0x8257A0E8;
	sub_8257A030(ctx, base);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_8257A0EC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257A0F8"))) PPC_WEAK_FUNC(sub_8257A0F8);
PPC_FUNC_IMPL(__imp__sub_8257A0F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x8257a12c
	if (ctx.cr6.eq) goto loc_8257A12C;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8257a030
	ctx.lr = 0x8257A124;
	sub_8257A030(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823fd208
	ctx.lr = 0x8257A12C;
	sub_823FD208(ctx, base);
loc_8257A12C:
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

__attribute__((alias("__imp__sub_8257A150"))) PPC_WEAK_FUNC(sub_8257A150);
PPC_FUNC_IMPL(__imp__sub_8257A150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddfc
	ctx.lr = 0x8257A158;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1092
	ctx.r11.s64 = 71565312;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,17476
	ctx.r11.u64 = ctx.r11.u64 | 17476;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8257a180
	if (!ctx.cr6.gt) goto loc_8257A180;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,18928
	ctx.r3.s64 = ctx.r11.s64 + 18928;
	// bl 0x82a90538
	ctx.lr = 0x8257A180;
	sub_82A90538(ctx, base);
loc_8257A180:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r25,60
	ctx.r25.s64 = 60;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// divw r11,r11,r25
	ctx.r11.s32 = (ctx.r25.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r25.s32 == -1)) ? ctx.r11.s32 / ctx.r25.s32 : 0;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x8257a224
	if (!ctx.cr6.lt) goto loc_8257A224;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8256bb88
	ctx.lr = 0x8257A1A8;
	sub_8256BB88(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x8257a1d8
	goto loc_8257A1D8;
loc_8257A1BC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8257a1d0
	if (ctx.cr6.eq) goto loc_8257A1D0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82578558
	ctx.lr = 0x8257A1D0;
	sub_82578558(ctx, base);
loc_8257A1D0:
	// addi r30,r30,60
	ctx.r30.s64 = ctx.r30.s64 + 60;
	// addi r28,r28,60
	ctx.r28.s64 = ctx.r28.s64 + 60;
loc_8257A1D8:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8257a1bc
	if (!ctx.cr6.eq) goto loc_8257A1BC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// subf r11,r3,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r3.u64;
	// divw r30,r11,r25
	ctx.r30.s32 = (ctx.r25.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r25.s32 == -1)) ? ctx.r11.s32 / ctx.r25.s32 : 0;
	// beq cr6,0x8257a208
	if (ctx.cr6.eq) goto loc_8257A208;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// bl 0x8257a030
	ctx.lr = 0x8257A200;
	sub_8257A030(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823fd208
	ctx.lr = 0x8257A208;
	sub_823FD208(ctx, base);
loc_8257A208:
	// mulli r10,r26,60
	ctx.r10.s64 = static_cast<int64_t>(ctx.r26.u64 * static_cast<uint64_t>(60));
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mulli r11,r30,60
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(60));
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8257A224:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257A230"))) PPC_WEAK_FUNC(sub_8257A230);
PPC_FUNC_IMPL(__imp__sub_8257A230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8257A238;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,60
	ctx.r10.s64 = 60;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// divw r4,r11,r10
	ctx.r4.s32 = (ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0;
	// bl 0x82533578
	ctx.lr = 0x8257A26C;
	sub_82533578(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257a2b4
	if (ctx.cr0.eq) goto loc_8257A2B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8257a2b0
	if (ctx.cr6.eq) goto loc_8257A2B0;
loc_8257A28C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8257a2a0
	if (ctx.cr6.eq) goto loc_8257A2A0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82578558
	ctx.lr = 0x8257A2A0;
	sub_82578558(ctx, base);
loc_8257A2A0:
	// addi r29,r29,60
	ctx.r29.s64 = ctx.r29.s64 + 60;
	// addi r31,r31,60
	ctx.r31.s64 = ctx.r31.s64 + 60;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8257a28c
	if (!ctx.cr6.eq) goto loc_8257A28C;
loc_8257A2B0:
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
loc_8257A2B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257A2C0"))) PPC_WEAK_FUNC(sub_8257A2C0);
PPC_FUNC_IMPL(__imp__sub_8257A2C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,1092
	ctx.r10.s64 = 71565312;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,60
	ctx.r9.s64 = 60;
	// ori r8,r10,17476
	ctx.r8.u64 = ctx.r10.u64 | 17476;
	// subf r10,r11,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subf r7,r4,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r4.u64;
	// divw r10,r10,r9
	ctx.r10.s32 = (ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8257a2f4
	if (!ctx.cr6.lt) goto loc_8257A2F4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,18928
	ctx.r3.s64 = ctx.r11.s64 + 18928;
	// b 0x82a90538
	sub_82A90538(ctx, base);
	return;
loc_8257A2F4:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// divw r11,r11,r9
	ctx.r11.s32 = (ctx.r9.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r11.s32 / ctx.r9.s32 : 0;
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
	// blt cr6,0x8257a324
	if (ctx.cr6.lt) goto loc_8257A324;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8257A324:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8257a330
	if (!ctx.cr6.lt) goto loc_8257A330;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_8257A330:
	// b 0x8257a150
	sub_8257A150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257A334"))) PPC_WEAK_FUNC(sub_8257A334);
PPC_FUNC_IMPL(__imp__sub_8257A334) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257A338"))) PPC_WEAK_FUNC(sub_8257A338);
PPC_FUNC_IMPL(__imp__sub_8257A338) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x8256f9b0
	ctx.lr = 0x8257A358;
	sub_8256F9B0(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// bl 0x825785c0
	ctx.lr = 0x8257A364;
	sub_825785C0(ctx, base);
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// addi r4,r30,124
	ctx.r4.s64 = ctx.r30.s64 + 124;
	// bl 0x8257a230
	ctx.lr = 0x8257A370;
	sub_8257A230(ctx, base);
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// addi r4,r30,140
	ctx.r4.s64 = ctx.r30.s64 + 140;
	// bl 0x82577338
	ctx.lr = 0x8257A37C;
	sub_82577338(ctx, base);
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// addi r4,r30,156
	ctx.r4.s64 = ctx.r30.s64 + 156;
	// bl 0x82407ac8
	ctx.lr = 0x8257A388;
	sub_82407AC8(ctx, base);
	// lbz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 184);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8257A3B0"))) PPC_WEAK_FUNC(sub_8257A3B0);
PPC_FUNC_IMPL(__imp__sub_8257A3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de00
	ctx.lr = 0x8257A3B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8257a560
	if (ctx.cr6.eq) goto loc_8257A560;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r26,60
	ctx.r26.s64 = 60;
	// lwz r28,4(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r10,r11,r28
	ctx.r10.u64 = ctx.r28.u64 - ctx.r11.u64;
	// divw. r10,r10,r26
	ctx.r10.s32 = (ctx.r26.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r26.s32 == -1)) ? ctx.r10.s32 / ctx.r26.s32 : 0;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8257a3fc
	if (!ctx.cr0.eq) goto loc_8257A3FC;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8257a088
	ctx.lr = 0x8257A3F8;
	sub_8257A088(ctx, base);
	// b 0x8257a560
	goto loc_8257A560;
loc_8257A3FC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r3,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r3.u64;
	// divw r9,r9,r26
	ctx.r9.s32 = (ctx.r26.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r26.s32 == -1)) ? ctx.r9.s32 / ctx.r26.s32 : 0;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8257a474
	if (ctx.cr6.gt) goto loc_8257A474;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8257a440
	if (ctx.cr6.eq) goto loc_8257A440;
loc_8257A424:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82578960
	ctx.lr = 0x8257A430;
	sub_82578960(ctx, base);
	// addi r29,r29,60
	ctx.r29.s64 = ctx.r29.s64 + 60;
	// addi r30,r30,60
	ctx.r30.s64 = ctx.r30.s64 + 60;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8257a424
	if (!ctx.cr6.eq) goto loc_8257A424;
loc_8257A440:
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257a030
	ctx.lr = 0x8257A450;
	sub_8257A030(ctx, base);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// divw r10,r10,r26
	ctx.r10.s32 = (ctx.r26.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r26.s32 == -1)) ? ctx.r10.s32 / ctx.r26.s32 : 0;
	// mulli r10,r10,60
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(60));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x8257a560
	goto loc_8257A560;
loc_8257A474:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r3,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r3.u64;
	// divw r8,r8,r26
	ctx.r8.s32 = (ctx.r26.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r26.s32 == -1)) ? ctx.r8.s32 / ctx.r26.s32 : 0;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x8257a4f0
	if (ctx.cr6.gt) goto loc_8257A4F0;
	// mulli r10,r9,60
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(60));
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8257a4bc
	if (ctx.cr6.eq) goto loc_8257A4BC;
loc_8257A4A0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82578960
	ctx.lr = 0x8257A4AC;
	sub_82578960(ctx, base);
	// addi r29,r29,60
	ctx.r29.s64 = ctx.r29.s64 + 60;
	// addi r28,r28,60
	ctx.r28.s64 = ctx.r28.s64 + 60;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8257a4a0
	if (!ctx.cr6.eq) goto loc_8257A4A0;
loc_8257A4BC:
	// lwz r28,4(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x8257a4e4
	goto loc_8257A4E4;
loc_8257A4C8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8257a4dc
	if (ctx.cr6.eq) goto loc_8257A4DC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82578558
	ctx.lr = 0x8257A4DC;
	sub_82578558(ctx, base);
loc_8257A4DC:
	// addi r30,r30,60
	ctx.r30.s64 = ctx.r30.s64 + 60;
	// addi r29,r29,60
	ctx.r29.s64 = ctx.r29.s64 + 60;
loc_8257A4E4:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8257a4c8
	if (!ctx.cr6.eq) goto loc_8257A4C8;
	// b 0x8257a55c
	goto loc_8257A55C;
loc_8257A4F0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257a508
	if (ctx.cr6.eq) goto loc_8257A508;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// bl 0x8257a030
	ctx.lr = 0x8257A500;
	sub_8257A030(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823fd208
	ctx.lr = 0x8257A508;
	sub_823FD208(ctx, base);
loc_8257A508:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// divw r4,r11,r26
	ctx.r4.s32 = (ctx.r26.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r26.s32 == -1)) ? ctx.r11.s32 / ctx.r26.s32 : 0;
	// bl 0x82533578
	ctx.lr = 0x8257A520;
	sub_82533578(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257a560
	if (ctx.cr0.eq) goto loc_8257A560;
	// lwz r28,4(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8257a554
	goto loc_8257A554;
loc_8257A538:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8257a54c
	if (ctx.cr6.eq) goto loc_8257A54C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82578558
	ctx.lr = 0x8257A54C;
	sub_82578558(ctx, base);
loc_8257A54C:
	// addi r30,r30,60
	ctx.r30.s64 = ctx.r30.s64 + 60;
	// addi r29,r29,60
	ctx.r29.s64 = ctx.r29.s64 + 60;
loc_8257A554:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8257a538
	if (!ctx.cr6.eq) goto loc_8257A538;
loc_8257A55C:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_8257A560:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257A570"))) PPC_WEAK_FUNC(sub_8257A570);
PPC_FUNC_IMPL(__imp__sub_8257A570) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x8256e450
	ctx.lr = 0x8257A58C;
	sub_8256E450(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82578e28
	ctx.lr = 0x8257A594;
	sub_82578E28(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// bl 0x82411478
	ctx.lr = 0x8257A5C0;
	sub_82411478(ctx, base);
	// stb r30,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_8257A5E0"))) PPC_WEAK_FUNC(sub_8257A5E0);
PPC_FUNC_IMPL(__imp__sub_8257A5E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82411478
	ctx.lr = 0x8257A608;
	sub_82411478(ctx, base);
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x82d186d8
	ctx.lr = 0x8257A610;
	sub_82D186D8(ctx, base);
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// bl 0x8257a0f8
	ctx.lr = 0x8257A618;
	sub_8257A0F8(ctx, base);
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// addi r3,r30,44
	ctx.r3.s64 = ctx.r30.s64 + 44;
	// bl 0x8263e520
	ctx.lr = 0x8257A624;
	sub_8263E520(ctx, base);
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x82de2630
	ctx.lr = 0x8257A62C;
	sub_82DE2630(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82411478
	ctx.lr = 0x8257A63C;
	sub_82411478(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82411478
	ctx.lr = 0x8257A64C;
	sub_82411478(ctx, base);
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

__attribute__((alias("__imp__sub_8257A668"))) PPC_WEAK_FUNC(sub_8257A668);
PPC_FUNC_IMPL(__imp__sub_8257A668) {
	PPC_FUNC_PROLOGUE();
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
	// bge cr6,0x8257a6a0
	if (!ctx.cr6.lt) goto loc_8257A6A0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x8257a6a4
	if (!ctx.cr6.gt) goto loc_8257A6A4;
loc_8257A6A0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8257A6A4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8257a6f0
	if (ctx.cr0.eq) goto loc_8257A6F0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,60
	ctx.r9.s64 = 60;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r10,r30
	ctx.r10.u64 = ctx.r30.u64 - ctx.r10.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// divw r30,r10,r9
	ctx.r30.s32 = (ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0;
	// bne cr6,0x8257a6d4
	if (!ctx.cr6.eq) goto loc_8257A6D4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257a2c0
	ctx.lr = 0x8257A6D4;
	sub_8257A2C0(ctx, base);
loc_8257A6D4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257a71c
	if (ctx.cr6.eq) goto loc_8257A71C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,60
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(60));
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8257a718
	goto loc_8257A718;
loc_8257A6F0:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8257a708
	if (!ctx.cr6.eq) goto loc_8257A708;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257a2c0
	ctx.lr = 0x8257A708;
	sub_8257A2C0(ctx, base);
loc_8257A708:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257a71c
	if (ctx.cr6.eq) goto loc_8257A71C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8257A718:
	// bl 0x82578558
	ctx.lr = 0x8257A71C;
	sub_82578558(ctx, base);
loc_8257A71C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
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

__attribute__((alias("__imp__sub_8257A740"))) PPC_WEAK_FUNC(sub_8257A740);
PPC_FUNC_IMPL(__imp__sub_8257A740) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82577338
	ctx.lr = 0x8257A760;
	sub_82577338(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// bl 0x8256ff58
	ctx.lr = 0x8257A76C;
	sub_8256FF58(ctx, base);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// addi r4,r30,176
	ctx.r4.s64 = ctx.r30.s64 + 176;
	// bl 0x8257a338
	ctx.lr = 0x8257A778;
	sub_8257A338(ctx, base);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// addi r4,r30,368
	ctx.r4.s64 = ctx.r30.s64 + 368;
	// bl 0x82407ac8
	ctx.lr = 0x8257A784;
	sub_82407AC8(ctx, base);
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

__attribute__((alias("__imp__sub_8257A7A0"))) PPC_WEAK_FUNC(sub_8257A7A0);
PPC_FUNC_IMPL(__imp__sub_8257A7A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddf8
	ctx.lr = 0x8257A7A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r10,-2588
	ctx.r4.s64 = ctx.r10.s64 + -2588;
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257A7D8;
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
	ctx.lr = 0x8257A7EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8257a800
	if (!ctx.cr0.eq) goto loc_8257A800;
	// lbz r11,184(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 184);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8257a820
	if (ctx.cr0.eq) goto loc_8257A820;
loc_8257A800:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r27,184
	ctx.r4.s64 = ctx.r27.s64 + 184;
	// addi r5,r10,-2608
	ctx.r5.s64 = ctx.r10.s64 + -2608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257A820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257A820:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257A834;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257a968
	if (ctx.cr0.eq) goto loc_8257A968;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8257a854
	if (!ctx.cr6.gt) goto loc_8257A854;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825699b8
	ctx.lr = 0x8257A854;
	sub_825699B8(ctx, base);
loc_8257A854:
	// lwz r11,80(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8257a86c
	if (!ctx.cr6.gt) goto loc_8257A86C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r27,64
	ctx.r3.s64 = ctx.r27.s64 + 64;
	// bl 0x82579688
	ctx.lr = 0x8257A86C;
	sub_82579688(ctx, base);
loc_8257A86C:
	// lwz r11,124(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 124);
	// li r26,60
	ctx.r26.s64 = 60;
	// lwz r10,128(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 128);
	// addi r30,r27,124
	ctx.r30.s64 = ctx.r27.s64 + 124;
	// li r29,0
	ctx.r29.s64 = 0;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// divw. r10,r10,r26
	ctx.r10.s32 = (ctx.r26.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r26.s32 == -1)) ? ctx.r10.s32 / ctx.r26.s32 : 0;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8257a8bc
	if (ctx.cr0.eq) goto loc_8257A8BC;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8257A890:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x82579898
	ctx.lr = 0x8257A89C;
	sub_82579898(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,60
	ctx.r28.s64 = ctx.r28.s64 + 60;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// divw r10,r10,r26
	ctx.r10.s32 = (ctx.r26.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r26.s32 == -1)) ? ctx.r10.s32 / ctx.r26.s32 : 0;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8257a890
	if (ctx.cr6.lt) goto loc_8257A890;
loc_8257A8BC:
	// lwz r11,172(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8257a8dc
	if (!ctx.cr6.gt) goto loc_8257A8DC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r27,156
	ctx.r5.s64 = ctx.r27.s64 + 156;
	// addi r4,r11,-4372
	ctx.r4.s64 = ctx.r11.s64 + -4372;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256bb08
	ctx.lr = 0x8257A8DC;
	sub_8256BB08(ctx, base);
loc_8257A8DC:
	// lwz r11,144(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 144);
	// li r10,28
	ctx.r10.s64 = 28;
	// lwz r9,140(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 140);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// divw. r11,r11,r10
	ctx.r11.s32 = (ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257ab54
	if (ctx.cr0.eq) goto loc_8257AB54;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,-2620
	ctx.r4.s64 = ctx.r10.s64 + -2620;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257A918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,144(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 144);
	// lwz r30,140(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 140);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8257a950
	if (ctx.cr6.eq) goto loc_8257A950;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r11,-2632
	ctx.r29.s64 = ctx.r11.s64 + -2632;
loc_8257A930:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256bb08
	ctx.lr = 0x8257A940;
	sub_8256BB08(ctx, base);
	// lwz r11,144(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 144);
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8257a930
	if (!ctx.cr6.eq) goto loc_8257A930;
loc_8257A950:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257A964;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8257ab54
	goto loc_8257AB54;
loc_8257A968:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257A980;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257ab54
	if (ctx.cr0.eq) goto loc_8257AB54;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r26,r8,-4356
	ctx.r26.s64 = ctx.r8.s64 + -4356;
	// addi r25,r7,-2912
	ctx.r25.s64 = ctx.r7.s64 + -2912;
	// addi r24,r6,18080
	ctx.r24.s64 = ctx.r6.s64 + 18080;
	// addi r30,r9,-2632
	ctx.r30.s64 = ctx.r9.s64 + -2632;
	// addi r28,r10,-2620
	ctx.r28.s64 = ctx.r10.s64 + -2620;
	// addi r29,r11,-4372
	ctx.r29.s64 = ctx.r11.s64 + -4372;
loc_8257A9B8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a7f710
	ctx.lr = 0x8257A9C4;
	sub_82A7F710(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8257a9dc
	if (!ctx.cr0.eq) goto loc_8257A9DC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825699b8
	ctx.lr = 0x8257A9D8;
	sub_825699B8(ctx, base);
	// b 0x8257ab34
	goto loc_8257AB34;
loc_8257A9DC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a7f710
	ctx.lr = 0x8257A9E8;
	sub_82A7F710(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8257aa00
	if (!ctx.cr0.eq) goto loc_8257AA00;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r27,64
	ctx.r3.s64 = ctx.r27.s64 + 64;
	// bl 0x82579688
	ctx.lr = 0x8257A9FC;
	sub_82579688(ctx, base);
	// b 0x8257ab34
	goto loc_8257AB34;
loc_8257AA00:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a7f710
	ctx.lr = 0x8257AA0C;
	sub_82A7F710(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8257aa50
	if (!ctx.cr0.eq) goto loc_8257AA50;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82578db8
	ctx.lr = 0x8257AA1C;
	sub_82578DB8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82579898
	ctx.lr = 0x8257AA28;
	sub_82579898(ctx, base);
	// addi r3,r27,124
	ctx.r3.s64 = ctx.r27.s64 + 124;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x8257a668
	ctx.lr = 0x8257AA34;
	sub_8257A668(ctx, base);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x8263e520
	ctx.lr = 0x8257AA3C;
	sub_8263E520(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82411478
	ctx.lr = 0x8257AA4C;
	sub_82411478(ctx, base);
	// b 0x8257ab34
	goto loc_8257AB34;
loc_8257AA50:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a7f710
	ctx.lr = 0x8257AA5C;
	sub_82A7F710(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8257aa78
	if (!ctx.cr0.eq) goto loc_8257AA78;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r27,156
	ctx.r5.s64 = ctx.r27.s64 + 156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256bb08
	ctx.lr = 0x8257AA74;
	sub_8256BB08(ctx, base);
	// b 0x8257ab34
	goto loc_8257AB34;
loc_8257AA78:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a7f710
	ctx.lr = 0x8257AA84;
	sub_82A7F710(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8257ab34
	if (!ctx.cr0.eq) goto loc_8257AB34;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257AAAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8257ab00
	goto loc_8257AB00;
loc_8257AAB0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a7f710
	ctx.lr = 0x8257AABC;
	sub_82A7F710(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8257ab00
	if (!ctx.cr0.eq) goto loc_8257AB00;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82411478
	ctx.lr = 0x8257AAD4;
	sub_82411478(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256bb08
	ctx.lr = 0x8257AAE4;
	sub_8256BB08(ctx, base);
	// addi r3,r27,140
	ctx.r3.s64 = ctx.r27.s64 + 140;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825792a8
	ctx.lr = 0x8257AAF0;
	sub_825792A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82411478
	ctx.lr = 0x8257AB00;
	sub_82411478(ctx, base);
loc_8257AB00:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257AB18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8257aab0
	if (!ctx.cr0.eq) goto loc_8257AAB0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257AB34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257AB34:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257AB4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8257a9b8
	if (!ctx.cr0.eq) goto loc_8257A9B8;
loc_8257AB54:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257AB68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82a7de48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257AB70"))) PPC_WEAK_FUNC(sub_8257AB70);
PPC_FUNC_IMPL(__imp__sub_8257AB70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddf8
	ctx.lr = 0x8257AB78;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r10,16076
	ctx.r4.s64 = ctx.r10.s64 + 16076;
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257ABA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257ABBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257ad50
	if (ctx.cr0.eq) goto loc_8257AD50;
	// lwz r11,60(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 60);
	// addi r3,r24,16
	ctx.r3.s64 = ctx.r24.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257abfc
	if (ctx.cr6.eq) goto loc_8257ABFC;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257abfc
	if (ctx.cr6.eq) goto loc_8257ABFC;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257abfc
	if (ctx.cr6.eq) goto loc_8257ABFC;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8257ac00
	if (!ctx.cr6.eq) goto loc_8257AC00;
loc_8257ABFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257AC00:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257ac10
	if (ctx.cr0.eq) goto loc_8257AC10;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82572620
	ctx.lr = 0x8257AC10;
	sub_82572620(ctx, base);
loc_8257AC10:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r10,28
	ctx.r10.s64 = 28;
	// lwz r9,4(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// divw. r11,r11,r10
	ctx.r11.s32 = (ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257ac98
	if (ctx.cr0.eq) goto loc_8257AC98;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,-2568
	ctx.r4.s64 = ctx.r10.s64 + -2568;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257AC4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r30,0(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8257ac84
	if (ctx.cr6.eq) goto loc_8257AC84;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r11,-2572
	ctx.r29.s64 = ctx.r11.s64 + -2572;
loc_8257AC64:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256bb08
	ctx.lr = 0x8257AC74;
	sub_8256BB08(ctx, base);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8257ac64
	if (!ctx.cr6.eq) goto loc_8257AC64;
loc_8257AC84:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257AC98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257AC98:
	// lwz r11,192(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 192);
	// addi r3,r24,176
	ctx.r3.s64 = ctx.r24.s64 + 176;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8257acd4
	if (!ctx.cr6.eq) goto loc_8257ACD4;
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8257acd4
	if (!ctx.cr6.eq) goto loc_8257ACD4;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8257acd4
	if (!ctx.cr6.eq) goto loc_8257ACD4;
	// lwz r11,172(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8257acd8
	if (ctx.cr6.eq) goto loc_8257ACD8;
loc_8257ACD4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8257ACD8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257ace8
	if (ctx.cr0.eq) goto loc_8257ACE8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8257a7a0
	ctx.lr = 0x8257ACE8;
	sub_8257A7A0(ctx, base);
loc_8257ACE8:
	// lwz r11,384(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257af18
	if (ctx.cr6.eq) goto loc_8257AF18;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,-2580
	ctx.r4.s64 = ctx.r10.s64 + -2580;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257AD18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r24,368
	ctx.r4.s64 = ctx.r24.s64 + 368;
	// addi r5,r11,-15968
	ctx.r5.s64 = ctx.r11.s64 + -15968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257AD38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257AD4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8257af18
	goto loc_8257AF18;
loc_8257AD50:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257AD68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257af18
	if (ctx.cr0.eq) goto loc_8257AF18;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r26,r8,-2588
	ctx.r26.s64 = ctx.r8.s64 + -2588;
	// addi r25,r7,-4312
	ctx.r25.s64 = ctx.r7.s64 + -4312;
	// addi r29,r6,-15968
	ctx.r29.s64 = ctx.r6.s64 + -15968;
	// addi r30,r9,-2580
	ctx.r30.s64 = ctx.r9.s64 + -2580;
	// addi r28,r10,-2572
	ctx.r28.s64 = ctx.r10.s64 + -2572;
	// addi r27,r11,-2568
	ctx.r27.s64 = ctx.r11.s64 + -2568;
loc_8257ADA0:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a7f710
	ctx.lr = 0x8257ADAC;
	sub_82A7F710(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8257adc4
	if (!ctx.cr0.eq) goto loc_8257ADC4;
	// addi r3,r24,16
	ctx.r3.s64 = ctx.r24.s64 + 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82572620
	ctx.lr = 0x8257ADC0;
	sub_82572620(ctx, base);
	// b 0x8257aef8
	goto loc_8257AEF8;
loc_8257ADC4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a7f710
	ctx.lr = 0x8257ADD0;
	sub_82A7F710(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8257ade8
	if (!ctx.cr0.eq) goto loc_8257ADE8;
	// addi r3,r24,176
	ctx.r3.s64 = ctx.r24.s64 + 176;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8257a7a0
	ctx.lr = 0x8257ADE4;
	sub_8257A7A0(ctx, base);
	// b 0x8257aef8
	goto loc_8257AEF8;
loc_8257ADE8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a7f710
	ctx.lr = 0x8257ADF4;
	sub_82A7F710(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8257ae94
	if (!ctx.cr0.eq) goto loc_8257AE94;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257AE1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8257ae70
	goto loc_8257AE70;
loc_8257AE20:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a7f710
	ctx.lr = 0x8257AE2C;
	sub_82A7F710(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8257ae70
	if (!ctx.cr0.eq) goto loc_8257AE70;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82411478
	ctx.lr = 0x8257AE44;
	sub_82411478(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256bb08
	ctx.lr = 0x8257AE54;
	sub_8256BB08(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82579030
	ctx.lr = 0x8257AE60;
	sub_82579030(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82411478
	ctx.lr = 0x8257AE70;
	sub_82411478(ctx, base);
loc_8257AE70:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257AE88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8257ae20
	if (!ctx.cr0.eq) goto loc_8257AE20;
	// b 0x8257aee4
	goto loc_8257AEE4;
loc_8257AE94:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a7f710
	ctx.lr = 0x8257AEA0;
	sub_82A7F710(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8257aef8
	if (!ctx.cr0.eq) goto loc_8257AEF8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257AEC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r24,368
	ctx.r4.s64 = ctx.r24.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257AEE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257AEE4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257AEF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257AEF8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257AF10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8257ada0
	if (!ctx.cr0.eq) goto loc_8257ADA0;
loc_8257AF18:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257AF2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a7de48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257AF38"))) PPC_WEAK_FUNC(sub_8257AF38);
PPC_FUNC_IMPL(__imp__sub_8257AF38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x8256f4b8
	ctx.lr = 0x8257AF64;
	sub_8256F4B8(ctx, base);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x8257a570
	ctx.lr = 0x8257AF6C;
	sub_8257A570(ctx, base);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82411478
	ctx.lr = 0x8257AF7C;
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

__attribute__((alias("__imp__sub_8257AF98"))) PPC_WEAK_FUNC(sub_8257AF98);
PPC_FUNC_IMPL(__imp__sub_8257AF98) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r3,368
	ctx.r3.s64 = ctx.r3.s64 + 368;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82411478
	ctx.lr = 0x8257AFC0;
	sub_82411478(ctx, base);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x8257a5e0
	ctx.lr = 0x8257AFC8;
	sub_8257A5E0(ctx, base);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x82677678
	ctx.lr = 0x8257AFD4;
	sub_82677678(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x82411478
	ctx.lr = 0x8257AFE4;
	sub_82411478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d186d8
	ctx.lr = 0x8257AFEC;
	sub_82D186D8(ctx, base);
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

__attribute__((alias("__imp__sub_8257B008"))) PPC_WEAK_FUNC(sub_8257B008);
PPC_FUNC_IMPL(__imp__sub_8257B008) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r10,-8012
	ctx.r4.s64 = ctx.r10.s64 + -8012;
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B048;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-15968
	ctx.r5.s64 = ctx.r11.s64 + -15968;
	// addi r4,r30,576
	ctx.r4.s64 = ctx.r30.s64 + 576;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B068;
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
	ctx.lr = 0x8257B07C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8257b090
	if (!ctx.cr0.eq) goto loc_8257B090;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8257b0b0
	if (ctx.cr6.eq) goto loc_8257B0B0;
loc_8257B090:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,-2428
	ctx.r7.s64 = ctx.r11.s64 + -2428;
	// addi r5,r10,-7912
	ctx.r5.s64 = ctx.r10.s64 + -7912;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826f4d80
	ctx.lr = 0x8257B0B0;
	sub_826F4D80(ctx, base);
loc_8257B0B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r30,604
	ctx.r4.s64 = ctx.r30.s64 + 604;
	// addi r5,r10,-25940
	ctx.r5.s64 = ctx.r10.s64 + -25940;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B0D0;
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
	ctx.lr = 0x8257B0E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8257b0f8
	if (!ctx.cr0.eq) goto loc_8257B0F8;
	// lbz r11,633(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 633);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8257b118
	if (ctx.cr0.eq) goto loc_8257B118;
loc_8257B0F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r30,633
	ctx.r4.s64 = ctx.r30.s64 + 633;
	// addi r5,r10,-2444
	ctx.r5.s64 = ctx.r10.s64 + -2444;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B118;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257B118:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B12C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8257b140
	if (!ctx.cr0.eq) goto loc_8257B140;
	// lbz r11,634(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 634);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8257b160
	if (ctx.cr0.eq) goto loc_8257B160;
loc_8257B140:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r30,634
	ctx.r4.s64 = ctx.r30.s64 + 634;
	// addi r5,r10,-2456
	ctx.r5.s64 = ctx.r10.s64 + -2456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257B160:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8257b188
	if (!ctx.cr0.eq) goto loc_8257B188;
	// lbz r11,635(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 635);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8257b1a8
	if (ctx.cr0.eq) goto loc_8257B1A8;
loc_8257B188:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r30,635
	ctx.r4.s64 = ctx.r30.s64 + 635;
	// addi r5,r10,-2472
	ctx.r5.s64 = ctx.r10.s64 + -2472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B1A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257B1A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B1BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8257b1d0
	if (!ctx.cr0.eq) goto loc_8257B1D0;
	// lbz r11,636(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 636);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8257b1f0
	if (ctx.cr0.eq) goto loc_8257B1F0;
loc_8257B1D0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r30,636
	ctx.r4.s64 = ctx.r30.s64 + 636;
	// addi r5,r10,-2488
	ctx.r5.s64 = ctx.r10.s64 + -2488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B1F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257B1F0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8257b23c
	if (!ctx.cr6.eq) goto loc_8257B23C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r30,640
	ctx.r4.s64 = ctx.r30.s64 + 640;
	// addi r5,r10,-2512
	ctx.r5.s64 = ctx.r10.s64 + -2512;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B21C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r30,644
	ctx.r4.s64 = ctx.r30.s64 + 644;
	// addi r5,r11,-2540
	ctx.r5.s64 = ctx.r11.s64 + -2540;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B23C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257B23C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,-2904
	ctx.r4.s64 = ctx.r10.s64 + -2904;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B260;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r30,544
	ctx.r4.s64 = ctx.r30.s64 + 544;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825795b0
	ctx.lr = 0x8257B26C;
	sub_825795B0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x82569248
	ctx.lr = 0x8257B28C;
	sub_82569248(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,144
	ctx.r3.s64 = ctx.r30.s64 + 144;
	// bl 0x8257ab70
	ctx.lr = 0x8257B298;
	sub_8257AB70(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-2556
	ctx.r4.s64 = ctx.r11.s64 + -2556;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B2BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r30,560
	ctx.r4.s64 = ctx.r30.s64 + 560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825795b0
	ctx.lr = 0x8257B2C8;
	sub_825795B0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B2DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B2F0;
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

__attribute__((alias("__imp__sub_8257B308"))) PPC_WEAK_FUNC(sub_8257B308);
PPC_FUNC_IMPL(__imp__sub_8257B308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,604
	ctx.r3.s64 = ctx.r3.s64 + 604;
	// bl 0x82411478
	ctx.lr = 0x8257B32C;
	sub_82411478(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,576
	ctx.r3.s64 = ctx.r31.s64 + 576;
	// bl 0x82411478
	ctx.lr = 0x8257B33C;
	sub_82411478(ctx, base);
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// bl 0x8263e520
	ctx.lr = 0x8257B344;
	sub_8263E520(ctx, base);
	// addi r3,r31,544
	ctx.r3.s64 = ctx.r31.s64 + 544;
	// bl 0x8263e520
	ctx.lr = 0x8257B34C;
	sub_8263E520(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x8257af98
	ctx.lr = 0x8257B354;
	sub_8257AF98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257B368"))) PPC_WEAK_FUNC(sub_8257B368);
PPC_FUNC_IMPL(__imp__sub_8257B368) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// li r5,128
	ctx.r5.s64 = 128;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a7d730
	ctx.lr = 0x8257B39C;
	sub_82A7D730(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// addi r4,r30,144
	ctx.r4.s64 = ctx.r30.s64 + 144;
	// bl 0x8257a740
	ctx.lr = 0x8257B3A8;
	sub_8257A740(ctx, base);
	// addi r3,r31,544
	ctx.r3.s64 = ctx.r31.s64 + 544;
	// addi r4,r30,544
	ctx.r4.s64 = ctx.r30.s64 + 544;
	// bl 0x825772a8
	ctx.lr = 0x8257B3B4;
	sub_825772A8(ctx, base);
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// addi r4,r30,560
	ctx.r4.s64 = ctx.r30.s64 + 560;
	// bl 0x825772a8
	ctx.lr = 0x8257B3C0;
	sub_825772A8(ctx, base);
	// addi r3,r31,576
	ctx.r3.s64 = ctx.r31.s64 + 576;
	// addi r4,r30,576
	ctx.r4.s64 = ctx.r30.s64 + 576;
	// bl 0x82407ac8
	ctx.lr = 0x8257B3CC;
	sub_82407AC8(ctx, base);
	// addi r3,r31,604
	ctx.r3.s64 = ctx.r31.s64 + 604;
	// addi r4,r30,604
	ctx.r4.s64 = ctx.r30.s64 + 604;
	// bl 0x82407ac8
	ctx.lr = 0x8257B3D8;
	sub_82407AC8(ctx, base);
	// lbz r11,632(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 632);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,632(r31)
	PPC_STORE_U8(ctx.r31.u32 + 632, ctx.r11.u8);
	// lbz r11,633(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 633);
	// stb r11,633(r31)
	PPC_STORE_U8(ctx.r31.u32 + 633, ctx.r11.u8);
	// lbz r11,634(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 634);
	// stb r11,634(r31)
	PPC_STORE_U8(ctx.r31.u32 + 634, ctx.r11.u8);
	// lbz r11,635(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 635);
	// stb r11,635(r31)
	PPC_STORE_U8(ctx.r31.u32 + 635, ctx.r11.u8);
	// lbz r11,636(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 636);
	// stb r11,636(r31)
	PPC_STORE_U8(ctx.r31.u32 + 636, ctx.r11.u8);
	// lfs f0,640(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 640);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,640(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 640, temp.u32);
	// lfs f0,644(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 644);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,644(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 644, temp.u32);
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

__attribute__((alias("__imp__sub_8257B430"))) PPC_WEAK_FUNC(sub_8257B430);
PPC_FUNC_IMPL(__imp__sub_8257B430) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// bl 0x825691a0
	ctx.lr = 0x8257B458;
	sub_825691A0(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x8257af38
	ctx.lr = 0x8257B460;
	sub_8257AF38(ctx, base);
	// stw r30,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r30.u32);
	// stw r30,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r30.u32);
	// addi r3,r31,576
	ctx.r3.s64 = ctx.r31.s64 + 576;
	// stw r30,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// stw r30,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r30.u32);
	// bl 0x82411478
	ctx.lr = 0x8257B488;
	sub_82411478(ctx, base);
	// addi r3,r31,604
	ctx.r3.s64 = ctx.r31.s64 + 604;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82411478
	ctx.lr = 0x8257B498;
	sub_82411478(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r30,633(r31)
	PPC_STORE_U8(ctx.r31.u32 + 633, ctx.r30.u8);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stb r30,634(r31)
	PPC_STORE_U8(ctx.r31.u32 + 634, ctx.r30.u8);
	// stb r30,635(r31)
	PPC_STORE_U8(ctx.r31.u32 + 635, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,632(r31)
	PPC_STORE_U8(ctx.r31.u32 + 632, ctx.r9.u8);
	// lfs f0,3648(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// stb r30,636(r31)
	PPC_STORE_U8(ctx.r31.u32 + 636, ctx.r30.u8);
	// lfs f13,3264(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3264);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,640(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 640, temp.u32);
	// stfs f13,644(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 644, temp.u32);
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

__attribute__((alias("__imp__sub_8257B4E8"))) PPC_WEAK_FUNC(sub_8257B4E8);
PPC_FUNC_IMPL(__imp__sub_8257B4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8257B4F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82411478
	ctx.lr = 0x8257B50C;
	sub_82411478(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,23344
	ctx.r4.s64 = ctx.r11.s64 + 23344;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-2412
	ctx.r4.s64 = ctx.r11.s64 + -2412;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B554;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r11,-28760
	ctx.r6.s64 = ctx.r11.s64 + -28760;
	// addi r5,r10,-1288
	ctx.r5.s64 = ctx.r10.s64 + -1288;
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// bl 0x82579bb0
	ctx.lr = 0x8257B570;
	sub_82579BB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B584;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B598;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r29,r11,-2420
	ctx.r29.s64 = ctx.r11.s64 + -2420;
	// bne 0x8257b5dc
	if (!ctx.cr0.eq) goto loc_8257B5DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B5C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257b640
	if (ctx.cr0.eq) goto loc_8257B640;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a7f710
	ctx.lr = 0x8257B5D4;
	sub_82A7F710(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8257b640
	if (!ctx.cr0.eq) goto loc_8257B640;
loc_8257B5DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B5FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-28656
	ctx.r11.s64 = ctx.r11.s64 + -28656;
	// addi r10,r10,-6932
	ctx.r10.s64 = ctx.r10.s64 + -6932;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r11,-1288
	ctx.r5.s64 = ctx.r11.s64 + -1288;
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82579ce0
	ctx.lr = 0x8257B62C;
	sub_82579CE0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B640;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257B640:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257b684
	if (ctx.cr0.eq) goto loc_8257B684;
	// lwz r29,60(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// b 0x8257b674
	goto loc_8257B674;
loc_8257B664:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8257b008
	ctx.lr = 0x8257B670;
	sub_8257B008(ctx, base);
	// addi r29,r29,656
	ctx.r29.s64 = ctx.r29.s64 + 656;
loc_8257B674:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8257b664
	if (!ctx.cr6.eq) goto loc_8257B664;
	// b 0x8257b730
	goto loc_8257B730;
loc_8257B684:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,76(r30)
	PPC_STORE_U8(ctx.r30.u32 + 76, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B6A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257b730
	if (ctx.cr0.eq) goto loc_8257B730;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r11,-8012
	ctx.r29.s64 = ctx.r11.s64 + -8012;
loc_8257B6B4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a7f710
	ctx.lr = 0x8257B6C0;
	sub_82A7F710(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8257b710
	if (!ctx.cr0.eq) goto loc_8257B710;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8257b430
	ctx.lr = 0x8257B6D0;
	sub_8257B430(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8257b008
	ctx.lr = 0x8257B6DC;
	sub_8257B008(ctx, base);
	// lbz r11,761(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 761);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8257b6fc
	if (ctx.cr0.eq) goto loc_8257B6FC;
	// lbz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 76);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r10,760(r1)
	PPC_STORE_U8(ctx.r1.u32 + 760, ctx.r10.u8);
	// stb r11,76(r30)
	PPC_STORE_U8(ctx.r30.u32 + 76, ctx.r11.u8);
loc_8257B6FC:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// bl 0x8273dd88
	ctx.lr = 0x8257B708;
	sub_8273DD88(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8257b308
	ctx.lr = 0x8257B710;
	sub_8257B308(ctx, base);
loc_8257B710:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8257b6b4
	if (!ctx.cr0.eq) goto loc_8257B6B4;
loc_8257B730:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B744;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82411478
	ctx.lr = 0x8257B754;
	sub_82411478(ctx, base);
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257B760"))) PPC_WEAK_FUNC(sub_8257B760);
PPC_FUNC_IMPL(__imp__sub_8257B760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r11,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82407b20
	ctx.lr = 0x8257B788;
	sub_82407B20(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,-2396
	ctx.r5.s64 = ctx.r11.s64 + -2396;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8248f778
	ctx.lr = 0x8257B79C;
	sub_8248F778(ctx, base);
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// li r7,1
	ctx.r7.s64 = 1;
	// ori r6,r6,27
	ctx.r6.u64 = ctx.r6.u64 | 27;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,24872(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24872);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B7C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257b818
	if (ctx.cr6.eq) goto loc_8257B818;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x824afb20
	ctx.lr = 0x8257B7E0;
	sub_824AFB20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82c6fe88
	ctx.lr = 0x8257B7EC;
	sub_82C6FE88(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257b4e8
	ctx.lr = 0x8257B7F8;
	sub_8257B4E8(ctx, base);
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// bl 0x828ddb90
	ctx.lr = 0x8257B800;
	sub_828DDB90(ctx, base);
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// bl 0x82d6e950
	ctx.lr = 0x8257B808;
	sub_82D6E950(ctx, base);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82c7abe8
	ctx.lr = 0x8257B810;
	sub_82C7ABE8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82c61dc0
	ctx.lr = 0x8257B818;
	sub_82C61DC0(ctx, base);
loc_8257B818:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x8257B820;
	sub_82DE7330(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82411478
	ctx.lr = 0x8257B830;
	sub_82411478(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257B848"))) PPC_WEAK_FUNC(sub_8257B848);
PPC_FUNC_IMPL(__imp__sub_8257B848) {
	PPC_FUNC_PROLOGUE();
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// clrlwi r10,r3,29
	ctx.r10.u64 = ctx.r3.u32 & 0x7;
	// rlwinm r9,r4,2,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x18;
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r5,31
	ctx.r9.s64 = ctx.r5.s64 + 31;
	// slw r6,r10,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r9,r4,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r8,r3,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// mullw r7,r10,r9
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// rlwinm r9,r6,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r10,r4,3,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x8;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r7,r11,7
	ctx.r7.s64 = ctx.r11.s64 + 7;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// rlwinm r7,r4,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// slw r9,r7,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r9,r6,28
	ctx.r9.u64 = ctx.r6.u32 & 0xF;
	// rlwinm r8,r4,4,23,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0x100;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r4,1,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFF0;
	// rlwinm r6,r10,0,0,22
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFE00;
	// add r5,r9,r3
	ctx.r5.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r9,r8,r6
	ctx.r9.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r7,r10,0,23,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1C0;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r5,3,24,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xC0;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// clrlwi r9,r10,26
	ctx.r9.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srw r3,r10,r11
	ctx.r3.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257B8E8"))) PPC_WEAK_FUNC(sub_8257B8E8);
PPC_FUNC_IMPL(__imp__sub_8257B8E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-708
	ctx.r11.s64 = ctx.r11.s64 + -708;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8257b914
	if (ctx.cr0.eq) goto loc_8257B914;
	// bl 0x823fd208
	ctx.lr = 0x8257B914;
	sub_823FD208(ctx, base);
loc_8257B914:
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

__attribute__((alias("__imp__sub_8257B930"))) PPC_WEAK_FUNC(sub_8257B930);
PPC_FUNC_IMPL(__imp__sub_8257B930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-632
	ctx.r11.s64 = ctx.r11.s64 + -632;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8257b95c
	if (ctx.cr0.eq) goto loc_8257B95C;
	// bl 0x823fd208
	ctx.lr = 0x8257B95C;
	sub_823FD208(ctx, base);
loc_8257B95C:
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

__attribute__((alias("__imp__sub_8257B978"))) PPC_WEAK_FUNC(sub_8257B978);
PPC_FUNC_IMPL(__imp__sub_8257B978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8257B990;
	sub_825E4B78(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-588
	ctx.r10.s64 = ctx.r10.s64 + -588;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stb r11,304(r31)
	PPC_STORE_U8(ctx.r31.u32 + 304, ctx.r11.u8);
	// stb r11,305(r31)
	PPC_STORE_U8(ctx.r31.u32 + 305, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8257B9C8"))) PPC_WEAK_FUNC(sub_8257B9C8);
PPC_FUNC_IMPL(__imp__sub_8257B9C8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257B9D8"))) PPC_WEAK_FUNC(sub_8257B9D8);
PPC_FUNC_IMPL(__imp__sub_8257B9D8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257B9E8"))) PPC_WEAK_FUNC(sub_8257B9E8);
PPC_FUNC_IMPL(__imp__sub_8257B9E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257B9F0"))) PPC_WEAK_FUNC(sub_8257B9F0);
PPC_FUNC_IMPL(__imp__sub_8257B9F0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8257bbf4
	if (!ctx.cr6.eq) goto loc_8257BBF4;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r10,68(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8257bbf4
	if (!ctx.cr6.eq) goto loc_8257BBF4;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8257bbf4
	if (!ctx.cr6.eq) goto loc_8257BBF4;
	// lfs f0,100(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8257bbf4
	if (!ctx.cr6.eq) goto loc_8257BBF4;
	// lfs f0,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8257bbf4
	if (!ctx.cr6.eq) goto loc_8257BBF4;
	// lfs f0,108(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,108(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8257bbf4
	if (!ctx.cr6.eq) goto loc_8257BBF4;
	// lfs f0,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8257bbf4
	if (!ctx.cr6.eq) goto loc_8257BBF4;
	// lfs f0,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8257bbf4
	if (!ctx.cr6.eq) goto loc_8257BBF4;
	// lfs f0,120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,120(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8257bbf4
	if (!ctx.cr6.eq) goto loc_8257BBF4;
	// addi r11,r3,124
	ctx.r11.s64 = ctx.r3.s64 + 124;
	// addi r10,r4,124
	ctx.r10.s64 = ctx.r4.s64 + 124;
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
loc_8257BAA8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8257bac8
	if (!ctx.cr0.eq) goto loc_8257BAC8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8257baa8
	if (!ctx.cr6.eq) goto loc_8257BAA8;
loc_8257BAC8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8257bbf4
	if (!ctx.cr0.eq) goto loc_8257BBF4;
	// li r11,144
	ctx.r11.s64 = 144;
	// lvx128 v2,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v1,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8247b280
	ctx.lr = 0x8257BAE0;
	sub_8247B280(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257bbf4
	if (ctx.cr0.eq) goto loc_8257BBF4;
	// li r11,160
	ctx.r11.s64 = 160;
	// lvx128 v2,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v1,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8247b280
	ctx.lr = 0x8257BAF8;
	sub_8247B280(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257bbf4
	if (ctx.cr0.eq) goto loc_8257BBF4;
	// li r11,176
	ctx.r11.s64 = 176;
	// lvx128 v2,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v1,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8247b280
	ctx.lr = 0x8257BB10;
	sub_8247B280(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257bbf4
	if (ctx.cr0.eq) goto loc_8257BBF4;
	// li r11,192
	ctx.r11.s64 = 192;
	// lvx128 v2,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v1,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8247b280
	ctx.lr = 0x8257BB28;
	sub_8247B280(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257bbf4
	if (ctx.cr0.eq) goto loc_8257BBF4;
	// li r11,208
	ctx.r11.s64 = 208;
	// lvx128 v2,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v1,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8247b280
	ctx.lr = 0x8257BB40;
	sub_8247B280(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257bbf4
	if (ctx.cr0.eq) goto loc_8257BBF4;
	// li r11,224
	ctx.r11.s64 = 224;
	// lvx128 v2,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v1,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8247b280
	ctx.lr = 0x8257BB58;
	sub_8247B280(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257bbf4
	if (ctx.cr0.eq) goto loc_8257BBF4;
	// li r11,240
	ctx.r11.s64 = 240;
	// lvx128 v2,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v1,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8247b280
	ctx.lr = 0x8257BB70;
	sub_8247B280(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257bbf4
	if (ctx.cr0.eq) goto loc_8257BBF4;
	// lfs f0,256(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,256(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8257bbf4
	if (!ctx.cr6.eq) goto loc_8257BBF4;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// addi r8,r11,64
	ctx.r8.s64 = ctx.r11.s64 + 64;
loc_8257BB94:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8257bbb4
	if (!ctx.cr0.eq) goto loc_8257BBB4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8257bb94
	if (!ctx.cr6.eq) goto loc_8257BB94;
loc_8257BBB4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8257bbf4
	if (!ctx.cr0.eq) goto loc_8257BBF4;
	// addi r11,r31,76
	ctx.r11.s64 = ctx.r31.s64 + 76;
	// addi r10,r30,76
	ctx.r10.s64 = ctx.r30.s64 + 76;
	// addi r8,r11,24
	ctx.r8.s64 = ctx.r11.s64 + 24;
loc_8257BBC8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8257bbe8
	if (!ctx.cr0.eq) goto loc_8257BBE8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8257bbc8
	if (!ctx.cr6.eq) goto loc_8257BBC8;
loc_8257BBE8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x8257bbf8
	if (ctx.cr0.eq) goto loc_8257BBF8;
loc_8257BBF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257BBF8:
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

__attribute__((alias("__imp__sub_8257BC18"))) PPC_WEAK_FUNC(sub_8257BC18);
PPC_FUNC_IMPL(__imp__sub_8257BC18) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-436
	ctx.r11.s64 = ctx.r11.s64 + -436;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8247a9a8
	ctx.lr = 0x8257BC44;
	sub_8247A9A8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257bc54
	if (ctx.cr0.eq) goto loc_8257BC54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8257BC54;
	sub_823FD208(ctx, base);
loc_8257BC54:
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

__attribute__((alias("__imp__sub_8257BC70"))) PPC_WEAK_FUNC(sub_8257BC70);
PPC_FUNC_IMPL(__imp__sub_8257BC70) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r5,r10,-320
	ctx.r5.s64 = ctx.r10.s64 + -320;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// addi r4,r31,72
	ctx.r4.s64 = ctx.r31.s64 + 72;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257BCAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,-336
	ctx.r5.s64 = ctx.r11.s64 + -336;
	// addi r4,r31,76
	ctx.r4.s64 = ctx.r31.s64 + 76;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257BCCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r5,r11,-356
	ctx.r5.s64 = ctx.r11.s64 + -356;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257BCEC;
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

__attribute__((alias("__imp__sub_8257BD08"))) PPC_WEAK_FUNC(sub_8257BD08);
PPC_FUNC_IMPL(__imp__sub_8257BD08) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r5,r10,-292
	ctx.r5.s64 = ctx.r10.s64 + -292;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257BD44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// addi r5,r11,-308
	ctx.r5.s64 = ctx.r11.s64 + -308;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257BD64;
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

__attribute__((alias("__imp__sub_8257BD80"))) PPC_WEAK_FUNC(sub_8257BD80);
PPC_FUNC_IMPL(__imp__sub_8257BD80) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// stb r5,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r5.u8);
	// stb r6,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r6.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257BD98"))) PPC_WEAK_FUNC(sub_8257BD98);
PPC_FUNC_IMPL(__imp__sub_8257BD98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257BDB8"))) PPC_WEAK_FUNC(sub_8257BDB8);
PPC_FUNC_IMPL(__imp__sub_8257BDB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,3648(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257BDD8"))) PPC_WEAK_FUNC(sub_8257BDD8);
PPC_FUNC_IMPL(__imp__sub_8257BDD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-268
	ctx.r11.s64 = ctx.r11.s64 + -268;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8257be04
	if (ctx.cr0.eq) goto loc_8257BE04;
	// bl 0x823fd208
	ctx.lr = 0x8257BE04;
	sub_823FD208(ctx, base);
loc_8257BE04:
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

__attribute__((alias("__imp__sub_8257BE20"))) PPC_WEAK_FUNC(sub_8257BE20);
PPC_FUNC_IMPL(__imp__sub_8257BE20) {
	PPC_FUNC_PROLOGUE();
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257BE38"))) PPC_WEAK_FUNC(sub_8257BE38);
PPC_FUNC_IMPL(__imp__sub_8257BE38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3648(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lfs f0,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257BE60"))) PPC_WEAK_FUNC(sub_8257BE60);
PPC_FUNC_IMPL(__imp__sub_8257BE60) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r4,r3,36
	ctx.r4.s64 = ctx.r3.s64 + 36;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lwz r11,168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 168);
	// addi r5,r9,-196
	ctx.r5.s64 = ctx.r9.s64 + -196;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257BE88"))) PPC_WEAK_FUNC(sub_8257BE88);
PPC_FUNC_IMPL(__imp__sub_8257BE88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3648(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257BE98"))) PPC_WEAK_FUNC(sub_8257BE98);
PPC_FUNC_IMPL(__imp__sub_8257BE98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3648(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257BEB0"))) PPC_WEAK_FUNC(sub_8257BEB0);
PPC_FUNC_IMPL(__imp__sub_8257BEB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r4,r3,44
	ctx.r4.s64 = ctx.r3.s64 + 44;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lwz r11,180(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// addi r5,r9,-3904
	ctx.r5.s64 = ctx.r9.s64 + -3904;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257BED8"))) PPC_WEAK_FUNC(sub_8257BED8);
PPC_FUNC_IMPL(__imp__sub_8257BED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8257BEE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r10,-13984
	ctx.r29.s64 = ctx.r10.s64 + -13984;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257BF10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257BF2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257BF48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257BF50"))) PPC_WEAK_FUNC(sub_8257BF50);
PPC_FUNC_IMPL(__imp__sub_8257BF50) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r4,r3,40
	ctx.r4.s64 = ctx.r3.s64 + 40;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lwz r11,180(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// addi r5,r9,-5760
	ctx.r5.s64 = ctx.r9.s64 + -5760;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257BF78"))) PPC_WEAK_FUNC(sub_8257BF78);
PPC_FUNC_IMPL(__imp__sub_8257BF78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r11,27160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27160);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257BF98"))) PPC_WEAK_FUNC(sub_8257BF98);
PPC_FUNC_IMPL(__imp__sub_8257BF98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r3,27160(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27160);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257BFA8"))) PPC_WEAK_FUNC(sub_8257BFA8);
PPC_FUNC_IMPL(__imp__sub_8257BFA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r11,27160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27160);
	// stw r3,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257BFB8"))) PPC_WEAK_FUNC(sub_8257BFB8);
PPC_FUNC_IMPL(__imp__sub_8257BFB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82c09c40
	ctx.lr = 0x8257BFD0;
	sub_82C09C40(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r11,r11,-184
	ctx.r11.s64 = ctx.r11.s64 + -184;
	// addi r10,r10,-160
	ctx.r10.s64 = ctx.r10.s64 + -160;
	// addi r9,r9,-172
	ctx.r9.s64 = ctx.r9.s64 + -172;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257C010"))) PPC_WEAK_FUNC(sub_8257C010);
PPC_FUNC_IMPL(__imp__sub_8257C010) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82c09c68
	ctx.lr = 0x8257C030;
	sub_82C09C68(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257c040
	if (ctx.cr0.eq) goto loc_8257C040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8257C040;
	sub_823FD208(ctx, base);
loc_8257C040:
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

__attribute__((alias("__imp__sub_8257C060"))) PPC_WEAK_FUNC(sub_8257C060);
PPC_FUNC_IMPL(__imp__sub_8257C060) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r10,-144
	ctx.r10.s64 = ctx.r10.s64 + -144;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,27164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27164);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8257c084
	if (!ctx.cr6.eq) goto loc_8257C084;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,27164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 27164, ctx.r10.u32);
loc_8257C084:
	// b 0x8247a9a8
	sub_8247A9A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257C088"))) PPC_WEAK_FUNC(sub_8257C088);
PPC_FUNC_IMPL(__imp__sub_8257C088) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8257c0bc
	if (ctx.cr6.eq) goto loc_8257C0BC;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8257c0bc
	if (ctx.cr6.eq) goto loc_8257C0BC;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x8257c0bc
	if (ctx.cr6.eq) goto loc_8257C0BC;
	// lbz r11,172(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 172);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8257c0bc
	if (!ctx.cr0.eq) goto loc_8257C0BC;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8257C0BC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,172(r10)
	PPC_STORE_U8(ctx.r10.u32 + 172, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257C0C8"))) PPC_WEAK_FUNC(sub_8257C0C8);
PPC_FUNC_IMPL(__imp__sub_8257C0C8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8247a9a8
	ctx.lr = 0x8257C0F4;
	sub_8247A9A8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257c104
	if (ctx.cr0.eq) goto loc_8257C104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8257C104;
	sub_823FD208(ctx, base);
loc_8257C104:
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

__attribute__((alias("__imp__sub_8257C120"))) PPC_WEAK_FUNC(sub_8257C120);
PPC_FUNC_IMPL(__imp__sub_8257C120) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8247a9a8
	ctx.lr = 0x8257C14C;
	sub_8247A9A8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257c15c
	if (ctx.cr0.eq) goto loc_8257C15C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8257C15C;
	sub_823FD208(ctx, base);
loc_8257C15C:
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

__attribute__((alias("__imp__sub_8257C178"))) PPC_WEAK_FUNC(sub_8257C178);
PPC_FUNC_IMPL(__imp__sub_8257C178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,7
	ctx.r9.s64 = 7;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8257C194:
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stwu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8257c194
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8257C194;
	// li r9,28
	ctx.r9.s64 = 28;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r10,r3,68
	ctx.r10.s64 = ctx.r3.s64 + 68;
	// stw r8,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8257C1B4:
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stwu r8,12(r10)
	ea = 12 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8257c1b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8257C1B4;
	// stw r11,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, ctx.r11.u32);
	// stw r11,412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 412, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257C1D0"))) PPC_WEAK_FUNC(sub_8257C1D0);
PPC_FUNC_IMPL(__imp__sub_8257C1D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,140
	ctx.r11.s64 = ctx.r11.s64 + 140;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8247af78
	ctx.lr = 0x8257C1F8;
	sub_8247AF78(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,22024
	ctx.r11.s64 = ctx.r11.s64 + 22024;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8247a9a8
	ctx.lr = 0x8257C20C;
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

__attribute__((alias("__imp__sub_8257C220"))) PPC_WEAK_FUNC(sub_8257C220);
PPC_FUNC_IMPL(__imp__sub_8257C220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddf0
	ctx.lr = 0x8257C228;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// bl 0x82479e88
	ctx.lr = 0x8257C238;
	sub_82479E88(ctx, base);
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r29,r11,-27216
	ctx.r29.s64 = ctx.r11.s64 + -27216;
	// lbz r11,3549(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3549);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8257c264
	if (ctx.cr0.eq) goto loc_8257C264;
	// lis r11,6690
	ctx.r11.s64 = 438435840;
	// stw r24,156(r29)
	PPC_STORE_U32(ctx.r29.u32 + 156, ctx.r24.u32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// ori r11,r11,43869
	ctx.r11.u64 = ctx.r11.u64 | 43869;
	// stw r11,152(r29)
	PPC_STORE_U32(ctx.r29.u32 + 152, ctx.r11.u32);
loc_8257C264:
	// lbz r11,3550(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3550);
	// lis r8,-31965
	ctx.r8.s64 = -2094858240;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,10280
	ctx.r11.s64 = 673710080;
	// beq 0x8257c284
	if (ctx.cr0.eq) goto loc_8257C284;
	// ori r9,r11,310
	ctx.r9.u64 = ctx.r11.u64 | 310;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x8257c28c
	goto loc_8257C28C;
loc_8257C284:
	// ori r9,r11,262
	ctx.r9.u64 = ctx.r11.u64 | 262;
	// li r11,2
	ctx.r11.s64 = 2;
loc_8257C28C:
	// stw r11,-27412(r8)
	PPC_STORE_U32(ctx.r8.u32 + -27412, ctx.r11.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r11,1280
	ctx.r11.s64 = 1280;
	// stw r9,108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 108, ctx.r9.u32);
	// li r10,720
	ctx.r10.s64 = 720;
	// stw r9,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r9.u32);
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// stw r11,408(r28)
	PPC_STORE_U32(ctx.r28.u32 + 408, ctx.r11.u32);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// stw r10,412(r28)
	PPC_STORE_U32(ctx.r28.u32 + 412, ctx.r10.u32);
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// addi r31,r28,440
	ctx.r31.s64 = ctx.r28.s64 + 440;
loc_8257C2BC:
	// addi r3,r31,-24
	ctx.r3.s64 = ctx.r31.s64 + -24;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82a7d730
	ctx.lr = 0x8257C2CC;
	sub_82A7D730(ctx, base);
	// lbz r11,-24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8257c328
	if (ctx.cr0.eq) goto loc_8257C328;
	// lwz r11,-20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8257c2ec
	if (!ctx.cr6.eq) goto loc_8257C2EC;
	// lwz r11,408(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 408);
	// b 0x8257c2fc
	goto loc_8257C2FC;
loc_8257C2EC:
	// lwz r10,408(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 408);
	// divwu r11,r10,r11
	ctx.r11.u32 = ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
loc_8257C2FC:
	// stw r11,-20(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20, ctx.r11.u32);
	// lwz r11,-16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8257c314
	if (!ctx.cr6.eq) goto loc_8257C314;
	// lwz r11,412(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 412);
	// b 0x8257c324
	goto loc_8257C324;
loc_8257C314:
	// lwz r10,412(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 412);
	// divwu r11,r10,r11
	ctx.r11.u32 = ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
loc_8257C324:
	// stw r11,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r11.u32);
loc_8257C328:
	// lbz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -12);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,-20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r31,2108
	ctx.r11.s64 = ctx.r31.s64 + 2108;
	// beq 0x8257c36c
	if (ctx.cr0.eq) goto loc_8257C36C;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r6,-4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,-8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82a410e8
	ctx.lr = 0x8257C368;
	sub_82A410E8(ctx, base);
	// b 0x8257c39c
	goto loc_8257C39C;
loc_8257C36C:
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,-4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r5,-8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r4,-16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// bl 0x82a40f28
	ctx.lr = 0x8257C39C;
	sub_82A40F28(ctx, base);
loc_8257C39C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmpwi cr6,r11,41
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 41, ctx.xer);
	// bne cr6,0x8257c3d8
	if (!ctx.cr6.eq) goto loc_8257C3D8;
	// rotlwi r30,r3,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r22,16(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r30,4095
	ctx.r11.s64 = ctx.r30.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x82479e28
	ctx.lr = 0x8257C3C4;
	sub_82479E28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// bl 0x82cbb690
	ctx.lr = 0x8257C3D0;
	sub_82CBB690(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
loc_8257C3D8:
	// addi r25,r25,44
	ctx.r25.s64 = ctx.r25.s64 + 44;
	// addi r11,r29,1804
	ctx.r11.s64 = ctx.r29.s64 + 1804;
	// addi r31,r31,52
	ctx.r31.s64 = ctx.r31.s64 + 52;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8257c2bc
	if (ctx.cr6.lt) goto loc_8257C2BC;
	// add r11,r27,r23
	ctx.r11.u64 = ctx.r27.u64 + ctx.r23.u64;
	// addi r10,r23,-1
	ctx.r10.s64 = ctx.r23.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// andc r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// subf r11,r27,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r27.u64;
	// stw r11,4732(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4732, ctx.r11.u32);
	// bl 0x82479e28
	ctx.lr = 0x8257C408;
	sub_82479E28(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// subf r4,r26,r31
	ctx.r4.u64 = ctx.r31.u64 - ctx.r26.u64;
	// addi r5,r11,432
	ctx.r5.s64 = ctx.r11.s64 + 432;
	// bl 0x82cbb690
	ctx.lr = 0x8257C418;
	sub_82CBB690(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a7de40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257C428"))) PPC_WEAK_FUNC(sub_8257C428);
PPC_FUNC_IMPL(__imp__sub_8257C428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddf4
	ctx.lr = 0x8257C430;
	__savegprlr_23(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,516
	ctx.r5.s64 = 516;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82cbb358
	ctx.lr = 0x8257C458;
	sub_82CBB358(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,4680
	ctx.r30.s64 = ctx.r31.s64 + 4680;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lis r5,11682
	ctx.r5.s64 = 765591552;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// std r29,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r29.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// std r29,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r29.u64);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,43940
	ctx.r5.u64 = ctx.r5.u64 | 43940;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82a40c28
	ctx.lr = 0x8257C494;
	sub_82A40C28(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a41288
	ctx.lr = 0x8257C4A4;
	sub_82A41288(ctx, base);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// li r25,-1
	ctx.r25.s64 = -1;
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_8257C4B0:
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// addi r10,r28,49
	ctx.r10.s64 = ctx.r28.s64 + 49;
	// mulli r11,r11,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mulli r10,r10,52
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(52));
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// add r26,r10,r31
	ctx.r26.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmpwi cr6,r11,41
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 41, ctx.xer);
	// beq cr6,0x8257c50c
	if (ctx.cr6.eq) goto loc_8257C50C;
	// lbz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// mulli r11,r11,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq 0x8257c4f0
	if (ctx.cr0.eq) goto loc_8257C4F0;
	// lwz r11,464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// b 0x8257c504
	goto loc_8257C504;
loc_8257C4F0:
	// lwz r10,464(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
loc_8257C504:
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// b 0x8257c534
	goto loc_8257C534;
loc_8257C50C:
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmpwi cr6,r28,10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 10, ctx.xer);
	// stw r27,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r27.u32);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bne cr6,0x8257c534
	if (!ctx.cr6.eq) goto loc_8257C534;
	// lwz r11,4732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4732);
	// stw r27,4728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4728, ctx.r27.u32);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_8257C534:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8257c578
	if (!ctx.cr6.eq) goto loc_8257C578;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// li r6,516
	ctx.r6.s64 = 516;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82cc5de8
	ctx.lr = 0x8257C554;
	sub_82CC5DE8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,44(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x82a7f140
	ctx.lr = 0x8257C564;
	sub_82A7F140(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a41350
	ctx.lr = 0x8257C570;
	sub_82A41350(ctx, base);
	// stw r24,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r24.u32);
	// b 0x8257c5b4
	goto loc_8257C5B4;
loc_8257C578:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x82a41350
	ctx.lr = 0x8257C584;
	sub_82A41350(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8257c5b4
	if (ctx.cr6.eq) goto loc_8257C5B4;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_8257C5B4:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,41
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 41, ctx.xer);
	// blt cr6,0x8257c4b0
	if (ctx.cr6.lt) goto loc_8257C4B0;
	// lis r7,6184
	ctx.r7.s64 = 405274624;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// ori r7,r7,390
	ctx.r7.u64 = ctx.r7.u64 | 390;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,512
	ctx.r4.s64 = 512;
	// li r3,512
	ctx.r3.s64 = 512;
	// bl 0x82a40f28
	ctx.lr = 0x8257C600;
	sub_82A40F28(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// addi r11,r3,4095
	ctx.r11.s64 = ctx.r3.s64 + 4095;
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// rlwinm r7,r11,0,0,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r10,33
	ctx.r10.s64 = 2162688;
	// lis r6,32
	ctx.r6.s64 = 2097152;
	// add r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lis r5,56
	ctx.r5.s64 = 3670016;
	// stw r6,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r6.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// ori r9,r10,49152
	ctx.r9.u64 = ctx.r10.u64 | 49152;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// ori r10,r5,16384
	ctx.r10.u64 = ctx.r5.u64 | 16384;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r4,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r4.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r6,60(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// stw r6,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r6.u32);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// lwz r6,60(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// stw r6,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r6.u32);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// lis r26,20
	ctx.r26.s64 = 1310720;
	// lwz r6,64(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lis r23,4
	ctx.r23.s64 = 262144;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r6,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r6.u32);
	// stw r3,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r3.u32);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r6,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r6.u32);
	// stw r8,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r8.u32);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r6,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r6.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r6,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r6.u32);
	// stw r9,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r9.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r6,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r6.u32);
	// stw r10,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r10.u32);
	// lwz r6,60(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r6,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r6.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// lwz r6,60(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// stw r6,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r6.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r6,64(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// stw r6,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r6.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// stw r8,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r8.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// stw r30,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// stw r9,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// stw r10,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r10.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// stw r24,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r24.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// stw r24,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r24.u32);
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// stw r8,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r8.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// stw r29,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r29.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// stw r26,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r26.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// stw r9,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r9.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// stw r10,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r10.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// stw r24,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r24.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// stw r23,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r23.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r10,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r10.u32);
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// bl 0x82d78758
	ctx.lr = 0x8257C7CC;
	sub_82D78758(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82a7de44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257C7D8"))) PPC_WEAK_FUNC(sub_8257C7D8);
PPC_FUNC_IMPL(__imp__sub_8257C7D8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r3,27176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 27176, ctx.r3.u32);
	// stw r4,27172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27172, ctx.r4.u32);
	// stw r5,27168(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27168, ctx.r5.u32);
	// bl 0x82d68710
	ctx.lr = 0x8257C810;
	sub_82D68710(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257c828
	if (ctx.cr0.eq) goto loc_8257C828;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830b2320
	ctx.lr = 0x8257C828;
	sub_830B2320(ctx, base);
loc_8257C828:
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

__attribute__((alias("__imp__sub_8257C840"))) PPC_WEAK_FUNC(sub_8257C840);
PPC_FUNC_IMPL(__imp__sub_8257C840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82c09c40
	ctx.lr = 0x8257C858;
	sub_82C09C40(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,172
	ctx.r11.s64 = ctx.r11.s64 + 172;
	// addi r10,r10,448
	ctx.r10.s64 = ctx.r10.s64 + 448;
	// addi r9,r9,12668
	ctx.r9.s64 = ctx.r9.s64 + 12668;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257C898"))) PPC_WEAK_FUNC(sub_8257C898);
PPC_FUNC_IMPL(__imp__sub_8257C898) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfd f1,8(r4)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257C8B0"))) PPC_WEAK_FUNC(sub_8257C8B0);
PPC_FUNC_IMPL(__imp__sub_8257C8B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r3,-8
	ctx.r30.s64 = ctx.r3.s64 + -8;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8257C8DC;
	sub_823F51A8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x823f5040
	ctx.lr = 0x8257C8E4;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257c904
	if (ctx.cr0.eq) goto loc_8257C904;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfd f31,8(r3)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.f31.u64);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,456
	ctx.r11.s64 = ctx.r11.s64 + 456;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8257c908
	goto loc_8257C908;
loc_8257C904:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257C908:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r11,-14184
	ctx.r4.s64 = ctx.r11.s64 + -14184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257C924;
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

__attribute__((alias("__imp__sub_8257C940"))) PPC_WEAK_FUNC(sub_8257C940);
PPC_FUNC_IMPL(__imp__sub_8257C940) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfd f1,8(r4)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257C958"))) PPC_WEAK_FUNC(sub_8257C958);
PPC_FUNC_IMPL(__imp__sub_8257C958) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257C998"))) PPC_WEAK_FUNC(sub_8257C998);
PPC_FUNC_IMPL(__imp__sub_8257C998) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r3,-8
	ctx.r30.s64 = ctx.r3.s64 + -8;
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
	ctx.lr = 0x8257C9C8;
	sub_823F51A8(ctx, base);
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x823f5040
	ctx.lr = 0x8257C9D0;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257ca08
	if (ctx.cr0.eq) goto loc_8257CA08;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r9,r10,488
	ctx.r9.s64 = ctx.r10.s64 + 488;
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8257C9F4:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8257c9f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8257C9F4;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x8257ca0c
	goto loc_8257CA0C;
loc_8257CA08:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257CA0C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r4,r11,-13968
	ctx.r4.s64 = ctx.r11.s64 + -13968;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257CA28;
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

__attribute__((alias("__imp__sub_8257CA40"))) PPC_WEAK_FUNC(sub_8257CA40);
PPC_FUNC_IMPL(__imp__sub_8257CA40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257CA58"))) PPC_WEAK_FUNC(sub_8257CA58);
PPC_FUNC_IMPL(__imp__sub_8257CA58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8257CA60;
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8257CA7C;
	sub_823F51A8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823f5040
	ctx.lr = 0x8257CA84;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257caa8
	if (ctx.cr0.eq) goto loc_8257CAA8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,496
	ctx.r11.s64 = ctx.r11.s64 + 496;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8257caac
	goto loc_8257CAAC;
loc_8257CAA8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257CAAC:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r11,-13760
	ctx.r4.s64 = ctx.r11.s64 + -13760;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257CAC8;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257CAD0"))) PPC_WEAK_FUNC(sub_8257CAD0);
PPC_FUNC_IMPL(__imp__sub_8257CAD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8257CAD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,-8
	ctx.r29.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8257CAF0;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8257CAF8;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257cb18
	if (ctx.cr0.eq) goto loc_8257CB18;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,504
	ctx.r11.s64 = ctx.r11.s64 + 504;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8257cb1c
	goto loc_8257CB1C;
loc_8257CB18:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257CB1C:
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-25656
	ctx.r4.s64 = ctx.r11.s64 + -25656;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257CB38;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257CB40"))) PPC_WEAK_FUNC(sub_8257CB40);
PPC_FUNC_IMPL(__imp__sub_8257CB40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8257CB48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,-8
	ctx.r29.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8257CB60;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8257CB68;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257cb88
	if (ctx.cr0.eq) goto loc_8257CB88;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8257cb8c
	goto loc_8257CB8C;
loc_8257CB88:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257CB8C:
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-25520
	ctx.r4.s64 = ctx.r11.s64 + -25520;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257CBA8;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257CBB0"))) PPC_WEAK_FUNC(sub_8257CBB0);
PPC_FUNC_IMPL(__imp__sub_8257CBB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257CBC8"))) PPC_WEAK_FUNC(sub_8257CBC8);
PPC_FUNC_IMPL(__imp__sub_8257CBC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8257CBD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,-8
	ctx.r29.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8257CBE8;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8257CBF0;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257cc10
	if (ctx.cr0.eq) goto loc_8257CC10;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,520
	ctx.r11.s64 = ctx.r11.s64 + 520;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8257cc14
	goto loc_8257CC14;
loc_8257CC10:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257CC14:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-13392
	ctx.r4.s64 = ctx.r11.s64 + -13392;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257CC30;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257CC38"))) PPC_WEAK_FUNC(sub_8257CC38);
PPC_FUNC_IMPL(__imp__sub_8257CC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8257CC40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,-8
	ctx.r29.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8257CC58;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8257CC60;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257cc80
	if (ctx.cr0.eq) goto loc_8257CC80;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,528
	ctx.r11.s64 = ctx.r11.s64 + 528;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8257cc84
	goto loc_8257CC84;
loc_8257CC80:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257CC84:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-15264
	ctx.r4.s64 = ctx.r11.s64 + -15264;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257CCA0;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257CCA8"))) PPC_WEAK_FUNC(sub_8257CCA8);
PPC_FUNC_IMPL(__imp__sub_8257CCA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257CCC0"))) PPC_WEAK_FUNC(sub_8257CCC0);
PPC_FUNC_IMPL(__imp__sub_8257CCC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8257CCC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,-8
	ctx.r29.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8257CCE0;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8257CCE8;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257cd08
	if (ctx.cr0.eq) goto loc_8257CD08;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,536
	ctx.r11.s64 = ctx.r11.s64 + 536;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8257cd0c
	goto loc_8257CD0C;
loc_8257CD08:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257CD0C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-13144
	ctx.r4.s64 = ctx.r11.s64 + -13144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257CD28;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257CD30"))) PPC_WEAK_FUNC(sub_8257CD30);
PPC_FUNC_IMPL(__imp__sub_8257CD30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8257CD38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,-8
	ctx.r29.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8257CD50;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8257CD58;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257cd78
	if (ctx.cr0.eq) goto loc_8257CD78;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,544
	ctx.r11.s64 = ctx.r11.s64 + 544;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8257cd7c
	goto loc_8257CD7C;
loc_8257CD78:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257CD7C:
	// lis r11,-32036
	ctx.r11.s64 = -2099511296;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-26120
	ctx.r4.s64 = ctx.r11.s64 + -26120;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257CD98;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257CDA0"))) PPC_WEAK_FUNC(sub_8257CDA0);
PPC_FUNC_IMPL(__imp__sub_8257CDA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257CDB8"))) PPC_WEAK_FUNC(sub_8257CDB8);
PPC_FUNC_IMPL(__imp__sub_8257CDB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8257CDC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,-8
	ctx.r29.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8257CDD8;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8257CDE0;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257ce00
	if (ctx.cr0.eq) goto loc_8257CE00;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,552
	ctx.r11.s64 = ctx.r11.s64 + 552;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8257ce04
	goto loc_8257CE04;
loc_8257CE00:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257CE04:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-12896
	ctx.r4.s64 = ctx.r11.s64 + -12896;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257CE20;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257CE28"))) PPC_WEAK_FUNC(sub_8257CE28);
PPC_FUNC_IMPL(__imp__sub_8257CE28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8257CE30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,-8
	ctx.r29.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8257CE48;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8257CE50;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257ce70
	if (ctx.cr0.eq) goto loc_8257CE70;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,560
	ctx.r11.s64 = ctx.r11.s64 + 560;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8257ce74
	goto loc_8257CE74;
loc_8257CE70:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257CE74:
	// lis r11,-32036
	ctx.r11.s64 = -2099511296;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-24688
	ctx.r4.s64 = ctx.r11.s64 + -24688;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257CE90;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257CE98"))) PPC_WEAK_FUNC(sub_8257CE98);
PPC_FUNC_IMPL(__imp__sub_8257CE98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8257CEA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,-8
	ctx.r29.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8257CEB8;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8257CEC0;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257cee0
	if (ctx.cr0.eq) goto loc_8257CEE0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,568
	ctx.r11.s64 = ctx.r11.s64 + 568;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8257cee4
	goto loc_8257CEE4;
loc_8257CEE0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257CEE4:
	// lis r11,-32036
	ctx.r11.s64 = -2099511296;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-24552
	ctx.r4.s64 = ctx.r11.s64 + -24552;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257CF00;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257CF08"))) PPC_WEAK_FUNC(sub_8257CF08);
PPC_FUNC_IMPL(__imp__sub_8257CF08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257CF20"))) PPC_WEAK_FUNC(sub_8257CF20);
PPC_FUNC_IMPL(__imp__sub_8257CF20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8257CF28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,-8
	ctx.r29.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8257CF40;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8257CF48;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257cf68
	if (ctx.cr0.eq) goto loc_8257CF68;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,576
	ctx.r11.s64 = ctx.r11.s64 + 576;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8257cf6c
	goto loc_8257CF6C;
loc_8257CF68:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257CF6C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-12536
	ctx.r4.s64 = ctx.r11.s64 + -12536;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257CF88;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257CF90"))) PPC_WEAK_FUNC(sub_8257CF90);
PPC_FUNC_IMPL(__imp__sub_8257CF90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257CFA8"))) PPC_WEAK_FUNC(sub_8257CFA8);
PPC_FUNC_IMPL(__imp__sub_8257CFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8257CFB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,-8
	ctx.r29.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8257CFC8;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8257CFD0;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257cff0
	if (ctx.cr0.eq) goto loc_8257CFF0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,584
	ctx.r11.s64 = ctx.r11.s64 + 584;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8257cff4
	goto loc_8257CFF4;
loc_8257CFF0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257CFF4:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-12400
	ctx.r4.s64 = ctx.r11.s64 + -12400;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257D010;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257D018"))) PPC_WEAK_FUNC(sub_8257D018);
PPC_FUNC_IMPL(__imp__sub_8257D018) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lwz r11,216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257D030"))) PPC_WEAK_FUNC(sub_8257D030);
PPC_FUNC_IMPL(__imp__sub_8257D030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8257D038;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,-8
	ctx.r29.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8257D050;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8257D058;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257d078
	if (ctx.cr0.eq) goto loc_8257D078;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,592
	ctx.r11.s64 = ctx.r11.s64 + 592;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8257d07c
	goto loc_8257D07C;
loc_8257D078:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257D07C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-12264
	ctx.r4.s64 = ctx.r11.s64 + -12264;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257D098;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257D0A0"))) PPC_WEAK_FUNC(sub_8257D0A0);
PPC_FUNC_IMPL(__imp__sub_8257D0A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257D0B8"))) PPC_WEAK_FUNC(sub_8257D0B8);
PPC_FUNC_IMPL(__imp__sub_8257D0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8257D0C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,-8
	ctx.r29.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8257D0D8;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8257D0E0;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257d100
	if (ctx.cr0.eq) goto loc_8257D100;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,600
	ctx.r11.s64 = ctx.r11.s64 + 600;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8257d104
	goto loc_8257D104;
loc_8257D100:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257D104:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-12128
	ctx.r4.s64 = ctx.r11.s64 + -12128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257D120;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257D128"))) PPC_WEAK_FUNC(sub_8257D128);
PPC_FUNC_IMPL(__imp__sub_8257D128) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lwz r11,224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257D140"))) PPC_WEAK_FUNC(sub_8257D140);
PPC_FUNC_IMPL(__imp__sub_8257D140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8257D148;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,-8
	ctx.r29.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8257D160;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8257D168;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257d188
	if (ctx.cr0.eq) goto loc_8257D188;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,608
	ctx.r11.s64 = ctx.r11.s64 + 608;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8257d18c
	goto loc_8257D18C;
loc_8257D188:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257D18C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-11992
	ctx.r4.s64 = ctx.r11.s64 + -11992;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257D1A8;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257D1B0"))) PPC_WEAK_FUNC(sub_8257D1B0);
PPC_FUNC_IMPL(__imp__sub_8257D1B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257D1D0"))) PPC_WEAK_FUNC(sub_8257D1D0);
PPC_FUNC_IMPL(__imp__sub_8257D1D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x8257D1D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,-8
	ctx.r27.s64 = ctx.r3.s64 + -8;
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
	ctx.lr = 0x8257D1F8;
	sub_823F51A8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x823f5040
	ctx.lr = 0x8257D200;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257d228
	if (ctx.cr0.eq) goto loc_8257D228;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,616
	ctx.r11.s64 = ctx.r11.s64 + 616;
	// stb r29,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r29.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8257d22c
	goto loc_8257D22C;
loc_8257D228:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257D22C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r11,-11856
	ctx.r4.s64 = ctx.r11.s64 + -11856;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257D248;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257D250"))) PPC_WEAK_FUNC(sub_8257D250);
PPC_FUNC_IMPL(__imp__sub_8257D250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8257D258;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,-8
	ctx.r29.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8257D270;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8257D278;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257d298
	if (ctx.cr0.eq) goto loc_8257D298;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 + 624;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8257d29c
	goto loc_8257D29C;
loc_8257D298:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257D29C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,15608
	ctx.r4.s64 = ctx.r11.s64 + 15608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257D2B8;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257D2C0"))) PPC_WEAK_FUNC(sub_8257D2C0);
PPC_FUNC_IMPL(__imp__sub_8257D2C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8257D2C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,-8
	ctx.r29.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8257D2E0;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8257D2E8;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257d308
	if (ctx.cr0.eq) goto loc_8257D308;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,632
	ctx.r11.s64 = ctx.r11.s64 + 632;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8257d30c
	goto loc_8257D30C;
loc_8257D308:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257D30C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-12960
	ctx.r4.s64 = ctx.r11.s64 + -12960;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257D328;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257D330"))) PPC_WEAK_FUNC(sub_8257D330);
PPC_FUNC_IMPL(__imp__sub_8257D330) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257D358"))) PPC_WEAK_FUNC(sub_8257D358);
PPC_FUNC_IMPL(__imp__sub_8257D358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,-8
	ctx.r30.s64 = ctx.r3.s64 + -8;
	// vor128 v127,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8257D388;
	sub_823F51A8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x823f5040
	ctx.lr = 0x8257D390;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257d3b4
	if (ctx.cr0.eq) goto loc_8257D3B4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,640
	ctx.r11.s64 = ctx.r11.s64 + 640;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stvx128 v127,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x8257d3b8
	goto loc_8257D3B8;
loc_8257D3B4:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257D3B8:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r4,r11,-11456
	ctx.r4.s64 = ctx.r11.s64 + -11456;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257D3D4;
	sub_823F4FE8(ctx, base);
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
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257D3F8"))) PPC_WEAK_FUNC(sub_8257D3F8);
PPC_FUNC_IMPL(__imp__sub_8257D3F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lbz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257D418"))) PPC_WEAK_FUNC(sub_8257D418);
PPC_FUNC_IMPL(__imp__sub_8257D418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8257D420;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,-8
	ctx.r28.s64 = ctx.r3.s64 + -8;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8257D444;
	sub_823F51A8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x823f5040
	ctx.lr = 0x8257D44C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257d474
	if (ctx.cr0.eq) goto loc_8257D474;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f31,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,648
	ctx.r11.s64 = ctx.r11.s64 + 648;
	// stb r30,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r30.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8257d478
	goto loc_8257D478;
loc_8257D474:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257D478:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r11,-11272
	ctx.r4.s64 = ctx.r11.s64 + -11272;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257D494;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257D4A0"))) PPC_WEAK_FUNC(sub_8257D4A0);
PPC_FUNC_IMPL(__imp__sub_8257D4A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257D4C0"))) PPC_WEAK_FUNC(sub_8257D4C0);
PPC_FUNC_IMPL(__imp__sub_8257D4C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r11,r11,656
	ctx.r11.s64 = ctx.r11.s64 + 656;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82c00ec8
	ctx.lr = 0x8257D4F0;
	sub_82C00EC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c00e48
	ctx.lr = 0x8257D4F8;
	sub_82C00E48(ctx, base);
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

__attribute__((alias("__imp__sub_8257D518"))) PPC_WEAK_FUNC(sub_8257D518);
PPC_FUNC_IMPL(__imp__sub_8257D518) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82c00ec8
	ctx.lr = 0x8257D540;
	sub_82C00EC8(ctx, base);
	// lwz r11,252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257D554;
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

__attribute__((alias("__imp__sub_8257D570"))) PPC_WEAK_FUNC(sub_8257D570);
PPC_FUNC_IMPL(__imp__sub_8257D570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8257D578;
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
	ctx.lr = 0x8257D590;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8257D598;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8257d5c0
	if (ctx.cr0.eq) goto loc_8257D5C0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c00ec8
	ctx.lr = 0x8257D5AC;
	sub_82C00EC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257d4c0
	ctx.lr = 0x8257D5B8;
	sub_8257D4C0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x8257d5c4
	goto loc_8257D5C4;
loc_8257D5C0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257D5C4:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-10984
	ctx.r4.s64 = ctx.r11.s64 + -10984;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257D5E0;
	sub_823F4FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c00e48
	ctx.lr = 0x8257D5E8;
	sub_82C00E48(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257D5F0"))) PPC_WEAK_FUNC(sub_8257D5F0);
PPC_FUNC_IMPL(__imp__sub_8257D5F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r11,r11,656
	ctx.r11.s64 = ctx.r11.s64 + 656;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82c00e48
	ctx.lr = 0x8257D618;
	sub_82C00E48(ctx, base);
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

__attribute__((alias("__imp__sub_8257D640"))) PPC_WEAK_FUNC(sub_8257D640);
PPC_FUNC_IMPL(__imp__sub_8257D640) {
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
	// bl 0x82460500
	ctx.lr = 0x8257D650;
	sub_82460500(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257D660;
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

__attribute__((alias("__imp__sub_8257D670"))) PPC_WEAK_FUNC(sub_8257D670);
PPC_FUNC_IMPL(__imp__sub_8257D670) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r3,2280
	ctx.r3.s64 = ctx.r3.s64 + 2280;
	// bl 0x823e6738
	ctx.lr = 0x8257D694;
	sub_823E6738(ctx, base);
	// fsub f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 - ctx.f31.f64;
	// stfd f1,3136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3136, ctx.f1.u64);
	// stfd f0,3144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3144, ctx.f0.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257D6B8"))) PPC_WEAK_FUNC(sub_8257D6B8);
PPC_FUNC_IMPL(__imp__sub_8257D6B8) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,3168(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3168, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257D6C8"))) PPC_WEAK_FUNC(sub_8257D6C8);
PPC_FUNC_IMPL(__imp__sub_8257D6C8) {
	PPC_FUNC_PROLOGUE();
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
	// lbz r11,3216(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3216);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8257d700
	if (!ctx.cr0.eq) goto loc_8257D700;
	// lbz r11,6355(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6355);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8257d71c
	if (ctx.cr0.eq) goto loc_8257D71C;
loc_8257D700:
	// addi r30,r31,2520
	ctx.r30.s64 = ctx.r31.s64 + 2520;
	// b 0x8257d70c
	goto loc_8257D70C;
loc_8257D708:
	// bl 0x82a6d640
	ctx.lr = 0x8257D70C;
	sub_82A6D640(ctx, base);
loc_8257D70C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4ae8
	ctx.lr = 0x8257D714;
	sub_823F4AE8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bgt cr6,0x8257d708
	if (ctx.cr6.gt) goto loc_8257D708;
loc_8257D71C:
	// lwz r11,3112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3112);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257D738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8257D758"))) PPC_WEAK_FUNC(sub_8257D758);
PPC_FUNC_IMPL(__imp__sub_8257D758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,3280(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3280);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257d7a4
	if (ctx.cr6.eq) goto loc_8257D7A4;
	// bl 0x825e7fc8
	ctx.lr = 0x8257D77C;
	sub_825E7FC8(ctx, base);
	// lwz r11,3280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// lbz r11,37(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 37);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8257d7a4
	if (ctx.cr0.eq) goto loc_8257D7A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257D7A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257D7A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257D7B8"))) PPC_WEAK_FUNC(sub_8257D7B8);
PPC_FUNC_IMPL(__imp__sub_8257D7B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,3112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3112);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257D7C0"))) PPC_WEAK_FUNC(sub_8257D7C0);
PPC_FUNC_IMPL(__imp__sub_8257D7C0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,3276(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3276, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257D7C8"))) PPC_WEAK_FUNC(sub_8257D7C8);
PPC_FUNC_IMPL(__imp__sub_8257D7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,3280(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3280);
	// bl 0x825e99e0
	ctx.lr = 0x8257D7E4;
	sub_825E99E0(ctx, base);
	// lwz r3,3284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257D7FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257D810"))) PPC_WEAK_FUNC(sub_8257D810);
PPC_FUNC_IMPL(__imp__sub_8257D810) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3112);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257D828"))) PPC_WEAK_FUNC(sub_8257D828);
PPC_FUNC_IMPL(__imp__sub_8257D828) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,3296
	ctx.r3.s64 = ctx.r3.s64 + 3296;
	// b 0x82c39e90
	sub_82C39E90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257D838"))) PPC_WEAK_FUNC(sub_8257D838);
PPC_FUNC_IMPL(__imp__sub_8257D838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,27064
	ctx.r11.s64 = ctx.r11.s64 + 27064;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mftb r10
	ctx.r10.u64 = PPC_QUERY_TIMEBASE();
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r8,50
	ctx.r8.s64 = 50;
	// divwu r10,r10,r8
	ctx.r10.u32 = ctx.r8.u32 ? ctx.r10.u32 / ctx.r8.u32 : 0;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257D878"))) PPC_WEAK_FUNC(sub_8257D878);
PPC_FUNC_IMPL(__imp__sub_8257D878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8257D880;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8245bb90
	ctx.lr = 0x8257D894;
	sub_8245BB90(ctx, base);
	// addi r11,r3,148
	ctx.r11.s64 = ctx.r3.s64 + 148;
	// lbz r10,356(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 356);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8257d8b8
	if (ctx.cr0.eq) goto loc_8257D8B8;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r31,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r31.u32);
	// stw r30,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r30.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stb r29,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r29.u8);
loc_8257D8B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257D8C0"))) PPC_WEAK_FUNC(sub_8257D8C0);
PPC_FUNC_IMPL(__imp__sub_8257D8C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82406e50
	ctx.lr = 0x8257D8D8;
	sub_82406E50(ctx, base);
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// addi r5,r11,-17632
	ctx.r5.s64 = ctx.r11.s64 + -17632;
	// addi r6,r10,-17696
	ctx.r6.s64 = ctx.r10.s64 + -17696;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x823e4818
	ctx.lr = 0x8257D8F4;
	sub_823E4818(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257d910
	if (ctx.cr0.eq) goto loc_8257D910;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257D90C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r31,4001(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4001, ctx.r31.u8);
loc_8257D910:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257D928"))) PPC_WEAK_FUNC(sub_8257D928);
PPC_FUNC_IMPL(__imp__sub_8257D928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82406e50
	ctx.lr = 0x8257D940;
	sub_82406E50(ctx, base);
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// addi r5,r11,-17632
	ctx.r5.s64 = ctx.r11.s64 + -17632;
	// addi r6,r10,-17696
	ctx.r6.s64 = ctx.r10.s64 + -17696;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x823e4818
	ctx.lr = 0x8257D95C;
	sub_823E4818(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257d980
	if (ctx.cr0.eq) goto loc_8257D980;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257D974;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,4002(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4002);
	// stb r31,4002(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4002, ctx.r31.u8);
	// stb r11,4003(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4003, ctx.r11.u8);
loc_8257D980:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257D998"))) PPC_WEAK_FUNC(sub_8257D998);
PPC_FUNC_IMPL(__imp__sub_8257D998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82406e50
	ctx.lr = 0x8257D9B0;
	sub_82406E50(ctx, base);
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// addi r5,r11,-17632
	ctx.r5.s64 = ctx.r11.s64 + -17632;
	// addi r6,r10,-17696
	ctx.r6.s64 = ctx.r10.s64 + -17696;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x823e4818
	ctx.lr = 0x8257D9CC;
	sub_823E4818(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257d9e8
	if (ctx.cr0.eq) goto loc_8257D9E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257D9E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r31,4000(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4000, ctx.r31.u8);
loc_8257D9E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257DA00"))) PPC_WEAK_FUNC(sub_8257DA00);
PPC_FUNC_IMPL(__imp__sub_8257DA00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x8257DA08;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a7e324
	ctx.lr = 0x8257DA10;
	__savefpr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8245bb90
	ctx.lr = 0x8257DA20;
	sub_8245BB90(ctx, base);
	// lbz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 112);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8257da3c
	if (!ctx.cr0.eq) goto loc_8257DA3C;
	// bl 0x8245bb90
	ctx.lr = 0x8257DA30;
	sub_8245BB90(ctx, base);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8257dde0
	if (ctx.cr6.eq) goto loc_8257DDE0;
loc_8257DA3C:
	// bl 0x8245bb90
	ctx.lr = 0x8257DA40;
	sub_8245BB90(ctx, base);
	// addi r31,r3,148
	ctx.r31.s64 = ctx.r3.s64 + 148;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8257da78
	if (ctx.cr6.eq) goto loc_8257DA78;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// stb r8,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r8.u8);
	// ble cr6,0x8257da74
	if (!ctx.cr6.gt) goto loc_8257DA74;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_8257DA74:
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
loc_8257DA78:
	// lwz r28,24(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8245bb90
	ctx.lr = 0x8257DA80;
	sub_8245BB90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82c33ba8
	ctx.lr = 0x8257DA90;
	sub_82C33BA8(ctx, base);
	// lwz r28,24(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8245bb90
	ctx.lr = 0x8257DA98;
	sub_8245BB90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82c33c00
	ctx.lr = 0x8257DAA8;
	sub_82C33C00(ctx, base);
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r10,1
	ctx.r10.s64 = 1;
	// extsw r9,r8
	ctx.r9.s64 = ctx.r8.s32;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lfs f13,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// stb r10,392(r31)
	PPC_STORE_U8(ctx.r31.u32 + 392, ctx.r10.u8);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// divw r6,r7,r11
	ctx.r6.s32 = (ctx.r11.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r7.s32 / ctx.r11.s32 : 0;
	// stb r10,358(r31)
	PPC_STORE_U8(ctx.r31.u32 + 358, ctx.r10.u8);
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// mullw r10,r6,r11
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// clrlwi. r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// divw r9,r7,r11
	ctx.r9.s32 = (ctx.r11.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r7.s32 / ctx.r11.s32 : 0;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// subf r10,r10,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r10.u64;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// stfs f12,360(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 360, temp.u32);
	// beq 0x8257db04
	if (ctx.cr0.eq) goto loc_8257DB04;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// b 0x8257db08
	goto loc_8257DB08;
loc_8257DB04:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_8257DB08:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8257db20
	if (ctx.cr6.eq) goto loc_8257DB20;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8257db24
	goto loc_8257DB24;
loc_8257DB20:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8257DB24:
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// lwa r6,76(r31)
	ctx.r6.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 76));
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// subfic r8,r8,1
	ctx.xer.ca = ctx.r8.u32 <= 1;
	ctx.r8.u64 = static_cast<uint64_t>(1) - ctx.r8.u64;
	// lwa r4,80(r31)
	ctx.r4.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 80));
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// lwa r5,84(r31)
	ctx.r5.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 84));
	// lfd f10,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f9,112(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f7,112(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// std r4,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r4.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f6,112(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f8,96(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f0
	ctx.f5.f64 = double(ctx.f0.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fcfid f4,f13
	ctx.f4.f64 = double(ctx.f13.s64);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// lfs f30,3368(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3368);
	ctx.f30.f64 = double(temp.f32);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// lfs f0,1388(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1388);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// lfs f13,1384(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1384);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f30,f12
	ctx.f12.f64 = double(float(ctx.f30.f64 / ctx.f12.f64));
	// stfs f12,364(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 364, temp.u32);
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// frsp f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64));
	// fnmsubs f3,f11,f0,f5
	ctx.f3.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f5.f64)));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// fmuls f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fnmsubs f13,f11,f13,f5
	ctx.f13.f64 = double(float(-(ctx.f11.f64 * ctx.f13.f64 - ctx.f5.f64)));
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f11,f10,f12
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f11,368(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 368, temp.u32);
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f12,372(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
	// fmadds f13,f6,f7,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 + ctx.f13.f64));
	// stfs f13,380(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 380, temp.u32);
	// fnmadds f0,f0,f8,f3
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f8.f64 + ctx.f3.f64)));
	// stfs f0,376(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
	// beq cr6,0x8257dc38
	if (ctx.cr6.eq) goto loc_8257DC38;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,376(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
	// fneg f0,f13
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,380(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 380, temp.u32);
loc_8257DC38:
	// lis r28,-31958
	ctx.r28.s64 = -2094399488;
	// lfs f12,5456(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5456);
	ctx.f12.f64 = double(temp.f32);
	// lis r27,-31958
	ctx.r27.s64 = -2094399488;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f0,13960(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 13960);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lfs f13,13956(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 13956);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,3832(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3832);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v62,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f31,3384(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3384);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stvx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// vmulfp128 v63,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x823f2ad8
	ctx.lr = 0x8257DCA0;
	sub_823F2AD8(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lfs f0,13960(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 13960);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,13956(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 13956);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lfs f10,5392(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5392);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f8,360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// fdivs f7,f30,f8
	ctx.f7.f64 = double(float(ctx.f30.f64 / ctx.f8.f64));
	// lfs f5,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f13,13952(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13952);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// fdivs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// lfs f3,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,1380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1380);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lfs f2,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f2.f64 = double(temp.f32);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// fmuls f4,f10,f11
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f12,1376(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1376);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1372(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 1372);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// fmuls f1,f9,f31
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// lfs f31,376(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	ctx.f31.f64 = double(temp.f32);
	// lfs f10,13968(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13968);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,13964(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13964);
	ctx.f9.f64 = double(temp.f32);
	// lfs f30,380(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f29,f8,f13
	ctx.f29.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fneg f28,f4
	ctx.f28.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// fmuls f27,f4,f0
	ctx.f27.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f13,f1,f6
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// fmuls f8,f1,f5
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f5.f64));
	// fmuls f0,f28,f0
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// fsubs f6,f4,f28
	ctx.f6.f64 = double(float(ctx.f4.f64 - ctx.f28.f64));
	// fmuls f5,f29,f13
	ctx.f5.f64 = double(float(ctx.f29.f64 * ctx.f13.f64));
	// fmuls f1,f29,f8
	ctx.f1.f64 = double(float(ctx.f29.f64 * ctx.f8.f64));
	// fsubs f29,f27,f0
	ctx.f29.f64 = double(float(ctx.f27.f64 - ctx.f0.f64));
	// fmuls f6,f6,f7
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f7,f29,f7
	ctx.f7.f64 = double(float(ctx.f29.f64 * ctx.f7.f64));
	// fmuls f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f12,f3,f12
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmuls f11,f2,f11
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fadds f10,f12,f1
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// fadds f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// fadds f9,f11,f5
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// fadds f11,f11,f5
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// fsubs f10,f4,f10
	ctx.f10.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// fsubs f12,f28,f12
	ctx.f12.f64 = double(float(ctx.f28.f64 - ctx.f12.f64));
	// fsubs f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fsubs f11,f27,f11
	ctx.f11.f64 = double(float(ctx.f27.f64 - ctx.f11.f64));
	// fadds f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fdivs f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 / ctx.f12.f64));
	// fdivs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// fadds f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f30.f64));
	// stfs f12,380(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 380, temp.u32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,376(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
	// bne cr6,0x8257ddac
	if (!ctx.cr6.eq) goto loc_8257DDAC;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
loc_8257DDAC:
	// stfs f13,384(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8257ddbc
	if (!ctx.cr6.eq) goto loc_8257DDBC;
	// fneg f8,f8
	ctx.f8.u64 = ctx.f8.u64 ^ 0x8000000000000000;
loc_8257DDBC:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lfs f13,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// stfs f8,388(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lfs f0,13980(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13980);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,18532(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18532);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,396(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 396, temp.u32);
loc_8257DDE0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a7e370
	ctx.lr = 0x8257DDEC;
	__restfpr_27(ctx, base);
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257DDF0"))) PPC_WEAK_FUNC(sub_8257DDF0);
PPC_FUNC_IMPL(__imp__sub_8257DDF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8257DDF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x8245bb90
	ctx.lr = 0x8257DE08;
	sub_8245BB90(ctx, base);
	// addi r31,r3,148
	ctx.r31.s64 = ctx.r3.s64 + 148;
	// lbz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 88);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8257df1c
	if (ctx.cr0.eq) goto loc_8257DF1C;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c32d88
	ctx.lr = 0x8257DE30;
	sub_82C32D88(ctx, base);
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// lbz r11,-17599(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -17599);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8257df1c
	if (ctx.cr0.eq) goto loc_8257DF1C;
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257df1c
	if (ctx.cr6.eq) goto loc_8257DF1C;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ec7d0
	ctx.lr = 0x8257DE5C;
	sub_823EC7D0(ctx, base);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e7978
	ctx.lr = 0x8257DE74;
	sub_829E7978(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,352(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// add r29,r11,r6
	ctx.r29.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r28,116(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r29,100(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// clrlwi r6,r6,26
	ctx.r6.u64 = ctx.r6.u32 & 0x3F;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// bl 0x82a43990
	ctx.lr = 0x8257DED0;
	sub_82A43990(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6dd8
	ctx.lr = 0x8257DEDC;
	sub_829E6DD8(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r11,32280
	ctx.r3.s64 = ctx.r11.s64 + 32280;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,352(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// rlwinm r4,r4,0,24,22
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82c3f8f8
	ctx.lr = 0x8257DF18;
	sub_82C3F8F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8257DF1C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257DF28"))) PPC_WEAK_FUNC(sub_8257DF28);
PPC_FUNC_IMPL(__imp__sub_8257DF28) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,2520
	ctx.r3.s64 = ctx.r3.s64 + 2520;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257DF30"))) PPC_WEAK_FUNC(sub_8257DF30);
PPC_FUNC_IMPL(__imp__sub_8257DF30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2432);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257DF40"))) PPC_WEAK_FUNC(sub_8257DF40);
PPC_FUNC_IMPL(__imp__sub_8257DF40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2436(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2436);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257DF50"))) PPC_WEAK_FUNC(sub_8257DF50);
PPC_FUNC_IMPL(__imp__sub_8257DF50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2440(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2440);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257DF60"))) PPC_WEAK_FUNC(sub_8257DF60);
PPC_FUNC_IMPL(__imp__sub_8257DF60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2448(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2448);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257DF70"))) PPC_WEAK_FUNC(sub_8257DF70);
PPC_FUNC_IMPL(__imp__sub_8257DF70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2456(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2456);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257DF80"))) PPC_WEAK_FUNC(sub_8257DF80);
PPC_FUNC_IMPL(__imp__sub_8257DF80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2464);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257DF90"))) PPC_WEAK_FUNC(sub_8257DF90);
PPC_FUNC_IMPL(__imp__sub_8257DF90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2476(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2476);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257DFA0"))) PPC_WEAK_FUNC(sub_8257DFA0);
PPC_FUNC_IMPL(__imp__sub_8257DFA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2484(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2484);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257DFB0"))) PPC_WEAK_FUNC(sub_8257DFB0);
PPC_FUNC_IMPL(__imp__sub_8257DFB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r3,r3,2520
	ctx.r3.s64 = ctx.r3.s64 + 2520;
	// bl 0x82c0a7c8
	ctx.lr = 0x8257DFCC;
	sub_82C0A7C8(ctx, base);
	// addi r3,r31,2816
	ctx.r3.s64 = ctx.r31.s64 + 2816;
	// bl 0x82c0a7c8
	ctx.lr = 0x8257DFD4;
	sub_82C0A7C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257DFE8"))) PPC_WEAK_FUNC(sub_8257DFE8);
PPC_FUNC_IMPL(__imp__sub_8257DFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r3,r3,2816
	ctx.r3.s64 = ctx.r3.s64 + 2816;
	// bl 0x82c0d070
	ctx.lr = 0x8257E004;
	sub_82C0D070(ctx, base);
	// addi r3,r31,2520
	ctx.r3.s64 = ctx.r31.s64 + 2520;
	// bl 0x82c0d070
	ctx.lr = 0x8257E00C;
	sub_82C0D070(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257E020"))) PPC_WEAK_FUNC(sub_8257E020);
PPC_FUNC_IMPL(__imp__sub_8257E020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r3,r3,2520
	ctx.r3.s64 = ctx.r3.s64 + 2520;
	// bl 0x82c0ac60
	ctx.lr = 0x8257E03C;
	sub_82C0AC60(ctx, base);
	// addi r3,r31,2816
	ctx.r3.s64 = ctx.r31.s64 + 2816;
	// bl 0x82c0ac60
	ctx.lr = 0x8257E044;
	sub_82C0AC60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257E058"))) PPC_WEAK_FUNC(sub_8257E058);
PPC_FUNC_IMPL(__imp__sub_8257E058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r3,r3,2816
	ctx.r3.s64 = ctx.r3.s64 + 2816;
	// bl 0x82c0acb8
	ctx.lr = 0x8257E074;
	sub_82C0ACB8(ctx, base);
	// addi r3,r31,2520
	ctx.r3.s64 = ctx.r31.s64 + 2520;
	// bl 0x82c0acb8
	ctx.lr = 0x8257E07C;
	sub_82C0ACB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257E090"))) PPC_WEAK_FUNC(sub_8257E090);
PPC_FUNC_IMPL(__imp__sub_8257E090) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3112);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257E0A8"))) PPC_WEAK_FUNC(sub_8257E0A8);
PPC_FUNC_IMPL(__imp__sub_8257E0A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3112);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257E0C0"))) PPC_WEAK_FUNC(sub_8257E0C0);
PPC_FUNC_IMPL(__imp__sub_8257E0C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3112);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257E0D8"))) PPC_WEAK_FUNC(sub_8257E0D8);
PPC_FUNC_IMPL(__imp__sub_8257E0D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3112);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257E0F0"))) PPC_WEAK_FUNC(sub_8257E0F0);
PPC_FUNC_IMPL(__imp__sub_8257E0F0) {
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
	// bl 0x82406e50
	ctx.lr = 0x8257E100;
	sub_82406E50(ctx, base);
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// addi r5,r11,-17632
	ctx.r5.s64 = ctx.r11.s64 + -17632;
	// addi r6,r10,-17696
	ctx.r6.s64 = ctx.r10.s64 + -17696;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x823e4818
	ctx.lr = 0x8257E11C;
	sub_823E4818(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257e144
	if (ctx.cr0.eq) goto loc_8257E144;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257E134;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,4002(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4002);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8257e148
	goto loc_8257E148;
loc_8257E144:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8257E148:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257E158"))) PPC_WEAK_FUNC(sub_8257E158);
PPC_FUNC_IMPL(__imp__sub_8257E158) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3112);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257E170"))) PPC_WEAK_FUNC(sub_8257E170);
PPC_FUNC_IMPL(__imp__sub_8257E170) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3112);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257E188"))) PPC_WEAK_FUNC(sub_8257E188);
PPC_FUNC_IMPL(__imp__sub_8257E188) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3112);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257E1A0"))) PPC_WEAK_FUNC(sub_8257E1A0);
PPC_FUNC_IMPL(__imp__sub_8257E1A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3112);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257E1B8"))) PPC_WEAK_FUNC(sub_8257E1B8);
PPC_FUNC_IMPL(__imp__sub_8257E1B8) {
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
	// bl 0x8245bb90
	ctx.lr = 0x8257E1C8;
	sub_8245BB90(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,504(r3)
	PPC_STORE_U8(ctx.r3.u32 + 504, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257E1E0"))) PPC_WEAK_FUNC(sub_8257E1E0);
PPC_FUNC_IMPL(__imp__sub_8257E1E0) {
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
	// bl 0x8245bb90
	ctx.lr = 0x8257E1F0;
	sub_8245BB90(ctx, base);
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,356(r3)
	PPC_STORE_U8(ctx.r3.u32 + 356, ctx.r11.u8);
	// bl 0x82c32ca8
	ctx.lr = 0x8257E200;
	sub_82C32CA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257E210"))) PPC_WEAK_FUNC(sub_8257E210);
PPC_FUNC_IMPL(__imp__sub_8257E210) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3112);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257E228"))) PPC_WEAK_FUNC(sub_8257E228);
PPC_FUNC_IMPL(__imp__sub_8257E228) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3112);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257E240"))) PPC_WEAK_FUNC(sub_8257E240);
PPC_FUNC_IMPL(__imp__sub_8257E240) {
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
	// lwz r11,3112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3112);
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257E270;
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

__attribute__((alias("__imp__sub_8257E280"))) PPC_WEAK_FUNC(sub_8257E280);
PPC_FUNC_IMPL(__imp__sub_8257E280) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3112);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257E298"))) PPC_WEAK_FUNC(sub_8257E298);
PPC_FUNC_IMPL(__imp__sub_8257E298) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,6508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6508, ctx.r4.u32);
	// stw r5,6512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6512, ctx.r5.u32);
	// stb r11,6504(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6504, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257E2B0"))) PPC_WEAK_FUNC(sub_8257E2B0);
PPC_FUNC_IMPL(__imp__sub_8257E2B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3112);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257E2C8"))) PPC_WEAK_FUNC(sub_8257E2C8);
PPC_FUNC_IMPL(__imp__sub_8257E2C8) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,3187(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3187, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257E2D8"))) PPC_WEAK_FUNC(sub_8257E2D8);
PPC_FUNC_IMPL(__imp__sub_8257E2D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257E304;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,3216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3216, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257E320"))) PPC_WEAK_FUNC(sub_8257E320);
PPC_FUNC_IMPL(__imp__sub_8257E320) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3112);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257E338"))) PPC_WEAK_FUNC(sub_8257E338);
PPC_FUNC_IMPL(__imp__sub_8257E338) {
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
	// bl 0x8245bb90
	ctx.lr = 0x8257E348;
	sub_8245BB90(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,189(r3)
	PPC_STORE_U8(ctx.r3.u32 + 189, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257E360"))) PPC_WEAK_FUNC(sub_8257E360);
PPC_FUNC_IMPL(__imp__sub_8257E360) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3112);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257E378"))) PPC_WEAK_FUNC(sub_8257E378);
PPC_FUNC_IMPL(__imp__sub_8257E378) {
	PPC_FUNC_PROLOGUE();
	// stw r4,3248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3248, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257E380"))) PPC_WEAK_FUNC(sub_8257E380);
PPC_FUNC_IMPL(__imp__sub_8257E380) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3112);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257E398"))) PPC_WEAK_FUNC(sub_8257E398);
PPC_FUNC_IMPL(__imp__sub_8257E398) {
	PPC_FUNC_PROLOGUE();
	// stb r4,4886(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4886, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257E3A0"))) PPC_WEAK_FUNC(sub_8257E3A0);
PPC_FUNC_IMPL(__imp__sub_8257E3A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3112);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257E3B8"))) PPC_WEAK_FUNC(sub_8257E3B8);
PPC_FUNC_IMPL(__imp__sub_8257E3B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3112);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257E3D0"))) PPC_WEAK_FUNC(sub_8257E3D0);
PPC_FUNC_IMPL(__imp__sub_8257E3D0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,4867(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4867, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257E3D8"))) PPC_WEAK_FUNC(sub_8257E3D8);
PPC_FUNC_IMPL(__imp__sub_8257E3D8) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,3112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257E40C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r30,7012(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7012, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_8257E428"))) PPC_WEAK_FUNC(sub_8257E428);
PPC_FUNC_IMPL(__imp__sub_8257E428) {
	PPC_FUNC_PROLOGUE();
	// stb r4,4871(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4871, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257E430"))) PPC_WEAK_FUNC(sub_8257E430);
PPC_FUNC_IMPL(__imp__sub_8257E430) {
	PPC_FUNC_PROLOGUE();
	// stb r4,4869(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4869, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257E438"))) PPC_WEAK_FUNC(sub_8257E438);
PPC_FUNC_IMPL(__imp__sub_8257E438) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8257e468
	if (!ctx.cr0.eq) goto loc_8257E468;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3648(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4940(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4940, temp.u32);
loc_8257E468:
	// lwz r11,3112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3112);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257E484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r30,7013(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7013, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_8257E4A0"))) PPC_WEAK_FUNC(sub_8257E4A0);
PPC_FUNC_IMPL(__imp__sub_8257E4A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3112);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257E4B8"))) PPC_WEAK_FUNC(sub_8257E4B8);
PPC_FUNC_IMPL(__imp__sub_8257E4B8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,4872(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4872, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257E4C0"))) PPC_WEAK_FUNC(sub_8257E4C0);
PPC_FUNC_IMPL(__imp__sub_8257E4C0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,4881(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4881, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257E4C8"))) PPC_WEAK_FUNC(sub_8257E4C8);
PPC_FUNC_IMPL(__imp__sub_8257E4C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3112);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257E4E0"))) PPC_WEAK_FUNC(sub_8257E4E0);
PPC_FUNC_IMPL(__imp__sub_8257E4E0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,4883(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4883, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257E4E8"))) PPC_WEAK_FUNC(sub_8257E4E8);
PPC_FUNC_IMPL(__imp__sub_8257E4E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3112);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257E500"))) PPC_WEAK_FUNC(sub_8257E500);
PPC_FUNC_IMPL(__imp__sub_8257E500) {
	PPC_FUNC_PROLOGUE();
	// stb r4,4884(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4884, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257E508"))) PPC_WEAK_FUNC(sub_8257E508);
PPC_FUNC_IMPL(__imp__sub_8257E508) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3112);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257E520"))) PPC_WEAK_FUNC(sub_8257E520);
PPC_FUNC_IMPL(__imp__sub_8257E520) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x8245bb90
	ctx.lr = 0x8257E53C;
	sub_8245BB90(ctx, base);
	// addi r31,r3,148
	ctx.r31.s64 = ctx.r3.s64 + 148;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8257e59c
	if (!ctx.cr6.eq) goto loc_8257E59C;
	// lbz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 88);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8257e57c
	if (ctx.cr0.eq) goto loc_8257E57C;
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// addi r11,r9,27416
	ctx.r11.s64 = ctx.r9.s64 + 27416;
	// addi r10,r11,2600
	ctx.r10.s64 = ctx.r11.s64 + 2600;
	// lwz r11,27416(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27416);
	// mulli r11,r11,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8257ddf0
	ctx.lr = 0x8257E57C;
	sub_8257DDF0(ctx, base);
loc_8257E57C:
	// lbz r11,41(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 41);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8257e59c
	if (ctx.cr0.eq) goto loc_8257E59C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257E59C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257E59C:
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

__attribute__((alias("__imp__sub_8257E5B8"))) PPC_WEAK_FUNC(sub_8257E5B8);
PPC_FUNC_IMPL(__imp__sub_8257E5B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// addi r10,r10,27064
	ctx.r10.s64 = ctx.r10.s64 + 27064;
	// lwz r11,27208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27208);
loc_8257E5D0:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r6,r10,20
	ctx.r6.s64 = ctx.r10.s64 + 20;
	// lwzx r7,r7,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8257e604
	if (!ctx.cr6.eq) goto loc_8257E604;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// divwu r7,r11,r7
	ctx.r7.u32 = ctx.r7.u32 ? ctx.r11.u32 / ctx.r7.u32 : 0;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// mulli r7,r7,3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(3));
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// blt cr6,0x8257e5d0
	if (ctx.cr6.lt) goto loc_8257E5D0;
loc_8257E604:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f11,1392(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1392);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257e640
	if (ctx.cr6.eq) goto loc_8257E640;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,3152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3152);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_8257E640:
	// lbz r11,6448(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6448);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8257e758
	if (ctx.cr0.eq) goto loc_8257E758;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,6496(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6496);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lfs f12,3648(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// blt cr6,0x8257e6b4
	if (ctx.cr6.lt) goto loc_8257E6B4;
	// beq cr6,0x8257e684
	if (ctx.cr6.eq) goto loc_8257E684;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8257e6f0
	if (!ctx.cr6.lt) goto loc_8257E6F0;
loc_8257E66C:
	// lfs f0,6456(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6456);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x8257e6f0
	if (!ctx.cr6.gt) goto loc_8257E6F0;
	// lfs f0,6460(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6460);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,6496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6496, ctx.r8.u32);
	// b 0x8257e6ec
	goto loc_8257E6EC;
loc_8257E684:
	// lfs f0,6500(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6500);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8257e6a4
	if (!ctx.cr6.gt) goto loc_8257E6A4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,22244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22244);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,6500(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 6500, temp.u32);
	// b 0x8257e66c
	goto loc_8257E66C;
loc_8257E6A4:
	// li r11,2
	ctx.r11.s64 = 2;
	// stfs f12,6500(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 6500, temp.u32);
	// stw r11,6496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6496, ctx.r11.u32);
	// b 0x8257e66c
	goto loc_8257E66C;
loc_8257E6B4:
	// lfs f0,6500(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6500);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8257e6d0
	if (!ctx.cr6.gt) goto loc_8257E6D0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,22244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22244);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x8257e6ec
	goto loc_8257E6EC;
loc_8257E6D0:
	// lfs f0,6452(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6452);
	ctx.f0.f64 = double(temp.f32);
	// stfs f12,6500(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 6500, temp.u32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x8257e6f0
	if (!ctx.cr6.lt) goto loc_8257E6F0;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,6464(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6464);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,6496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6496, ctx.r11.u32);
loc_8257E6EC:
	// stfs f0,6500(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 6500, temp.u32);
loc_8257E6F0:
	// lwz r10,6496(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6496);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x8257e708
	if (ctx.cr6.eq) goto loc_8257E708;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// bne cr6,0x8257e70c
	if (!ctx.cr6.eq) goto loc_8257E70C;
loc_8257E708:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8257E70C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// stb r11,6470(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6470, ctx.r11.u8);
	// stb r11,6469(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6469, ctx.r11.u8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// bne cr6,0x8257e748
	if (!ctx.cr6.eq) goto loc_8257E748;
	// lfs f13,6464(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6464);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6500(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6500);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,3368(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f0,f11,f0,f13
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fsel f0,f0,f0,f12
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// b 0x8257e74c
	goto loc_8257E74C;
loc_8257E748:
	// lfs f0,3368(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
loc_8257E74C:
	// stfs f0,6476(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 6476, temp.u32);
	// stfs f0,6472(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 6472, temp.u32);
	// b 0x8257e764
	goto loc_8257E764;
loc_8257E758:
	// lfs f0,6460(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6460);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,6496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6496, ctx.r8.u32);
	// stfs f0,6500(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 6500, temp.u32);
loc_8257E764:
	// lbz r11,6469(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6469);
	// lfs f0,6472(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6472);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4856(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4856, temp.u32);
	// stb r11,4852(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4852, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257E778"))) PPC_WEAK_FUNC(sub_8257E778);
PPC_FUNC_IMPL(__imp__sub_8257E778) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,3440
	ctx.r3.s64 = ctx.r3.s64 + 3440;
	// b 0x82de0360
	sub_82DE0360(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257E780"))) PPC_WEAK_FUNC(sub_8257E780);
PPC_FUNC_IMPL(__imp__sub_8257E780) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3112);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257E798"))) PPC_WEAK_FUNC(sub_8257E798);
PPC_FUNC_IMPL(__imp__sub_8257E798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,5840
	ctx.r11.s64 = 5840;
	// stvx128 v1,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257E7A8"))) PPC_WEAK_FUNC(sub_8257E7A8);
PPC_FUNC_IMPL(__imp__sub_8257E7A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3112);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257E7C0"))) PPC_WEAK_FUNC(sub_8257E7C0);
PPC_FUNC_IMPL(__imp__sub_8257E7C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8257E7C8;
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
	// bl 0x82c00ec8
	ctx.lr = 0x8257E7E4;
	sub_82C00EC8(ctx, base);
	// lwz r11,252(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 252);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257E7F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c00e48
	ctx.lr = 0x8257E800;
	sub_82C00E48(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257E808"))) PPC_WEAK_FUNC(sub_8257E808);
PPC_FUNC_IMPL(__imp__sub_8257E808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8257E810;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,3196
	ctx.r31.s64 = ctx.r3.s64 + 3196;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82c00ec8
	ctx.lr = 0x8257E828;
	sub_82C00EC8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r10,r30,3200
	ctx.r10.s64 = ctx.r30.s64 + 3200;
	// addi r11,r11,-56
	ctx.r11.s64 = ctx.r11.s64 + -56;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,56
	ctx.r3.s64 = ctx.r11.s64 + 56;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// bl 0x82c00ec8
	ctx.lr = 0x8257E844;
	sub_82C00EC8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c00e48
	ctx.lr = 0x8257E84C;
	sub_82C00E48(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257E858"))) PPC_WEAK_FUNC(sub_8257E858);
PPC_FUNC_IMPL(__imp__sub_8257E858) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3112);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257E870"))) PPC_WEAK_FUNC(sub_8257E870);
PPC_FUNC_IMPL(__imp__sub_8257E870) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2424(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2424);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257E888"))) PPC_WEAK_FUNC(sub_8257E888);
PPC_FUNC_IMPL(__imp__sub_8257E888) {
	PPC_FUNC_PROLOGUE();
	// mftb r11
	ctx.r11.u64 = PPC_QUERY_TIMEBASE();
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r10,50
	ctx.r10.s64 = 50;
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// lis r8,-31954
	ctx.r8.s64 = -2094137344;
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0;
	// addi r10,r8,27052
	ctx.r10.s64 = ctx.r8.s64 + 27052;
	// stw r11,27180(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27180, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,27052(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27052, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x8247c678
	sub_8247C678(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257E8C8"))) PPC_WEAK_FUNC(sub_8257E8C8);
PPC_FUNC_IMPL(__imp__sub_8257E8C8) {
	PPC_FUNC_PROLOGUE();
	// mftb r11
	ctx.r11.u64 = PPC_QUERY_TIMEBASE();
	// li r10,50
	ctx.r10.s64 = 50;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r10,27024
	ctx.r3.s64 = ctx.r10.s64 + 27024;
	// stw r11,27184(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27184, ctx.r11.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// b 0x82a7d730
	sub_82A7D730(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257E8F8"))) PPC_WEAK_FUNC(sub_8257E8F8);
PPC_FUNC_IMPL(__imp__sub_8257E8F8) {
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
	// lwz r11,3284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257e930
	if (ctx.cr6.eq) goto loc_8257E930;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257E924;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x8257e934
	if (!ctx.cr0.eq) goto loc_8257E934;
loc_8257E930:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257E934:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257E948"))) PPC_WEAK_FUNC(sub_8257E948);
PPC_FUNC_IMPL(__imp__sub_8257E948) {
	PPC_FUNC_PROLOGUE();
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x8257e970
	if (!ctx.cr6.eq) goto loc_8257E970;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8257E970:
	// bl 0x82c07930
	ctx.lr = 0x8257E974;
	sub_82C07930(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1001
	ctx.r5.s64 = 1001;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257E990;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// bne cr6,0x8257e9a0
	if (!ctx.cr6.eq) goto loc_8257E9A0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8257E9A0:
	// bl 0x82c07930
	ctx.lr = 0x8257E9A4;
	sub_82C07930(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1002
	ctx.r5.s64 = 1002;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257E9C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// bne cr6,0x8257e9d0
	if (!ctx.cr6.eq) goto loc_8257E9D0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8257E9D0:
	// bl 0x82c07930
	ctx.lr = 0x8257E9D4;
	sub_82C07930(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1003
	ctx.r5.s64 = 1003;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257E9F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne cr6,0x8257ea00
	if (!ctx.cr6.eq) goto loc_8257EA00;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8257EA00:
	// bl 0x82c07930
	ctx.lr = 0x8257EA04;
	sub_82C07930(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1004
	ctx.r5.s64 = 1004;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257EA20;
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

__attribute__((alias("__imp__sub_8257EA38"))) PPC_WEAK_FUNC(sub_8257EA38);
PPC_FUNC_IMPL(__imp__sub_8257EA38) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,220
	ctx.r3.s64 = ctx.r3.s64 + 220;
	// li r5,32
	ctx.r5.s64 = 32;
	// b 0x82a7d730
	sub_82A7D730(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EA48"))) PPC_WEAK_FUNC(sub_8257EA48);
PPC_FUNC_IMPL(__imp__sub_8257EA48) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,220
	ctx.r4.s64 = ctx.r11.s64 + 220;
	// li r5,32
	ctx.r5.s64 = 32;
	// b 0x82a7d730
	sub_82A7D730(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EA60"))) PPC_WEAK_FUNC(sub_8257EA60);
PPC_FUNC_IMPL(__imp__sub_8257EA60) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,252
	ctx.r4.s64 = ctx.r11.s64 + 252;
	// li r5,32
	ctx.r5.s64 = 32;
	// b 0x82a7d730
	sub_82A7D730(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EA78"))) PPC_WEAK_FUNC(sub_8257EA78);
PPC_FUNC_IMPL(__imp__sub_8257EA78) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,284(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257EA80"))) PPC_WEAK_FUNC(sub_8257EA80);
PPC_FUNC_IMPL(__imp__sub_8257EA80) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,304(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 304);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257EA88"))) PPC_WEAK_FUNC(sub_8257EA88);
PPC_FUNC_IMPL(__imp__sub_8257EA88) {
	PPC_FUNC_PROLOGUE();
	// stw r4,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r4.u32);
	// stw r5,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257EA98"))) PPC_WEAK_FUNC(sub_8257EA98);
PPC_FUNC_IMPL(__imp__sub_8257EA98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,19796
	ctx.r3.s64 = ctx.r11.s64 + 19796;
	// b 0x831ece7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EAA8"))) PPC_WEAK_FUNC(sub_8257EAA8);
PPC_FUNC_IMPL(__imp__sub_8257EAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,20052
	ctx.r3.s64 = ctx.r11.s64 + 20052;
	// b 0x831ece7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EAB8"))) PPC_WEAK_FUNC(sub_8257EAB8);
PPC_FUNC_IMPL(__imp__sub_8257EAB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,19580
	ctx.r3.s64 = ctx.r11.s64 + 19580;
	// b 0x831ece7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EAC8"))) PPC_WEAK_FUNC(sub_8257EAC8);
PPC_FUNC_IMPL(__imp__sub_8257EAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,19472
	ctx.r3.s64 = ctx.r11.s64 + 19472;
	// b 0x831ece7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EAD8"))) PPC_WEAK_FUNC(sub_8257EAD8);
PPC_FUNC_IMPL(__imp__sub_8257EAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,19952
	ctx.r3.s64 = ctx.r11.s64 + 19952;
	// b 0x831ece7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EAE8"))) PPC_WEAK_FUNC(sub_8257EAE8);
PPC_FUNC_IMPL(__imp__sub_8257EAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,20000
	ctx.r3.s64 = ctx.r11.s64 + 20000;
	// b 0x831ece7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EAF8"))) PPC_WEAK_FUNC(sub_8257EAF8);
PPC_FUNC_IMPL(__imp__sub_8257EAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,19628
	ctx.r3.s64 = ctx.r11.s64 + 19628;
	// b 0x831ece7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EB08"))) PPC_WEAK_FUNC(sub_8257EB08);
PPC_FUNC_IMPL(__imp__sub_8257EB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,19520
	ctx.r3.s64 = ctx.r11.s64 + 19520;
	// b 0x831ece7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EB18"))) PPC_WEAK_FUNC(sub_8257EB18);
PPC_FUNC_IMPL(__imp__sub_8257EB18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,19844
	ctx.r3.s64 = ctx.r11.s64 + 19844;
	// b 0x831ece7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EB28"))) PPC_WEAK_FUNC(sub_8257EB28);
PPC_FUNC_IMPL(__imp__sub_8257EB28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,13316
	ctx.r3.s64 = ctx.r11.s64 + 13316;
	// b 0x831ece7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EB38"))) PPC_WEAK_FUNC(sub_8257EB38);
PPC_FUNC_IMPL(__imp__sub_8257EB38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,18988
	ctx.r3.s64 = ctx.r11.s64 + 18988;
	// b 0x831ece7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EB48"))) PPC_WEAK_FUNC(sub_8257EB48);
PPC_FUNC_IMPL(__imp__sub_8257EB48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-18048
	ctx.r3.s64 = ctx.r11.s64 + -18048;
	// b 0x831ece7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EB58"))) PPC_WEAK_FUNC(sub_8257EB58);
PPC_FUNC_IMPL(__imp__sub_8257EB58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,22116
	ctx.r3.s64 = ctx.r11.s64 + 22116;
	// b 0x831ece7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EB68"))) PPC_WEAK_FUNC(sub_8257EB68);
PPC_FUNC_IMPL(__imp__sub_8257EB68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,22372
	ctx.r3.s64 = ctx.r11.s64 + 22372;
	// b 0x831ece7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EB78"))) PPC_WEAK_FUNC(sub_8257EB78);
PPC_FUNC_IMPL(__imp__sub_8257EB78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,5180
	ctx.r3.s64 = ctx.r11.s64 + 5180;
	// b 0x831ece7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EB88"))) PPC_WEAK_FUNC(sub_8257EB88);
PPC_FUNC_IMPL(__imp__sub_8257EB88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,5092
	ctx.r3.s64 = ctx.r11.s64 + 5092;
	// b 0x831ece7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EB98"))) PPC_WEAK_FUNC(sub_8257EB98);
PPC_FUNC_IMPL(__imp__sub_8257EB98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-18100
	ctx.r3.s64 = ctx.r11.s64 + -18100;
	// b 0x831ece7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EBA8"))) PPC_WEAK_FUNC(sub_8257EBA8);
PPC_FUNC_IMPL(__imp__sub_8257EBA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-19524
	ctx.r3.s64 = ctx.r11.s64 + -19524;
	// b 0x831ece7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EBB8"))) PPC_WEAK_FUNC(sub_8257EBB8);
PPC_FUNC_IMPL(__imp__sub_8257EBB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-19980
	ctx.r3.s64 = ctx.r11.s64 + -19980;
	// b 0x831ece7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EBC8"))) PPC_WEAK_FUNC(sub_8257EBC8);
PPC_FUNC_IMPL(__imp__sub_8257EBC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,17940
	ctx.r3.s64 = ctx.r11.s64 + 17940;
	// b 0x831ece7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EBD8"))) PPC_WEAK_FUNC(sub_8257EBD8);
PPC_FUNC_IMPL(__imp__sub_8257EBD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,13540
	ctx.r3.s64 = ctx.r11.s64 + 13540;
	// b 0x831ece7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EBE8"))) PPC_WEAK_FUNC(sub_8257EBE8);
PPC_FUNC_IMPL(__imp__sub_8257EBE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-20372
	ctx.r3.s64 = ctx.r11.s64 + -20372;
	// b 0x831ece7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EBF8"))) PPC_WEAK_FUNC(sub_8257EBF8);
PPC_FUNC_IMPL(__imp__sub_8257EBF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-21328
	ctx.r3.s64 = ctx.r11.s64 + -21328;
	// b 0x831ece7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EC08"))) PPC_WEAK_FUNC(sub_8257EC08);
PPC_FUNC_IMPL(__imp__sub_8257EC08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-21272
	ctx.r3.s64 = ctx.r11.s64 + -21272;
	// b 0x831ece7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EC18"))) PPC_WEAK_FUNC(sub_8257EC18);
PPC_FUNC_IMPL(__imp__sub_8257EC18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,12980
	ctx.r3.s64 = ctx.r11.s64 + 12980;
	// b 0x831ece7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EC28"))) PPC_WEAK_FUNC(sub_8257EC28);
PPC_FUNC_IMPL(__imp__sub_8257EC28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,40
	ctx.r11.s64 = ctx.r3.s64 + 40;
loc_8257EC3C:
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
	// bne 0x8257ec3c
	if (!ctx.cr0.eq) goto loc_8257EC3C;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8257ec80
	if (!ctx.cr6.eq) goto loc_8257EC80;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257ec80
	if (ctx.cr6.eq) goto loc_8257EC80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257EC80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257EC80:
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

__attribute__((alias("__imp__sub_8257EC98"))) PPC_WEAK_FUNC(sub_8257EC98);
PPC_FUNC_IMPL(__imp__sub_8257EC98) {
	PPC_FUNC_PROLOGUE();
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
	// addi r11,r11,7460
	ctx.r11.s64 = ctx.r11.s64 + 7460;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82c27058
	ctx.lr = 0x8257ECC4;
	sub_82C27058(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257ecd4
	if (ctx.cr0.eq) goto loc_8257ECD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8257ECD4;
	sub_823FD208(ctx, base);
loc_8257ECD4:
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

__attribute__((alias("__imp__sub_8257ECF0"))) PPC_WEAK_FUNC(sub_8257ECF0);
PPC_FUNC_IMPL(__imp__sub_8257ECF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// bge cr6,0x8257ed00
	if (!ctx.cr6.lt) goto loc_8257ED00;
	// neg r11,r4
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r4.u64);
loc_8257ED00:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,3368(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8257ED0C:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8257ed18
	if (ctx.cr0.eq) goto loc_8257ED18;
	// fmuls f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
loc_8257ED18:
	// rlwinm. r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257ed28
	if (ctx.cr0.eq) goto loc_8257ED28;
	// fmuls f1,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// b 0x8257ed0c
	goto loc_8257ED0C;
loc_8257ED28:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x8257ed34
	if (!ctx.cr6.lt) goto loc_8257ED34;
	// fdivs f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_8257ED34:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257ED40"))) PPC_WEAK_FUNC(sub_8257ED40);
PPC_FUNC_IMPL(__imp__sub_8257ED40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
loc_8257ED54:
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
	// bne 0x8257ed54
	if (!ctx.cr0.eq) goto loc_8257ED54;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8257ed98
	if (!ctx.cr6.eq) goto loc_8257ED98;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257ed98
	if (ctx.cr6.eq) goto loc_8257ED98;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257ED98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257ED98:
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

__attribute__((alias("__imp__sub_8257EDB0"))) PPC_WEAK_FUNC(sub_8257EDB0);
PPC_FUNC_IMPL(__imp__sub_8257EDB0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r11,r11,6668
	ctx.r11.s64 = ctx.r11.s64 + 6668;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x826782b0
	ctx.lr = 0x8257EDDC;
	sub_826782B0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257edec
	if (ctx.cr0.eq) goto loc_8257EDEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8257EDEC;
	sub_823FD208(ctx, base);
loc_8257EDEC:
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

__attribute__((alias("__imp__sub_8257EE08"))) PPC_WEAK_FUNC(sub_8257EE08);
PPC_FUNC_IMPL(__imp__sub_8257EE08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82dd0db0
	ctx.lr = 0x8257EE20;
	sub_82DD0DB0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,2176
	ctx.r11.s64 = ctx.r11.s64 + 2176;
	// addi r10,r10,1764
	ctx.r10.s64 = ctx.r10.s64 + 1764;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257EE58"))) PPC_WEAK_FUNC(sub_8257EE58);
PPC_FUNC_IMPL(__imp__sub_8257EE58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257EE78"))) PPC_WEAK_FUNC(sub_8257EE78);
PPC_FUNC_IMPL(__imp__sub_8257EE78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257EEA0"))) PPC_WEAK_FUNC(sub_8257EEA0);
PPC_FUNC_IMPL(__imp__sub_8257EEA0) {
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
	// addi r30,r3,-8
	ctx.r30.s64 = ctx.r3.s64 + -8;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8257EECC;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8257EED4;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257eef4
	if (ctx.cr0.eq) goto loc_8257EEF4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f31,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,2188
	ctx.r11.s64 = ctx.r11.s64 + 2188;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8257eef8
	goto loc_8257EEF8;
loc_8257EEF4:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257EEF8:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-4472
	ctx.r4.s64 = ctx.r11.s64 + -4472;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257EF14;
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

__attribute__((alias("__imp__sub_8257EF30"))) PPC_WEAK_FUNC(sub_8257EF30);
PPC_FUNC_IMPL(__imp__sub_8257EF30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
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

__attribute__((alias("__imp__sub_8257EF48"))) PPC_WEAK_FUNC(sub_8257EF48);
PPC_FUNC_IMPL(__imp__sub_8257EF48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8257EF50;
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8257EF6C;
	sub_823F51A8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823f5040
	ctx.lr = 0x8257EF74;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257ef98
	if (ctx.cr0.eq) goto loc_8257EF98;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,2196
	ctx.r11.s64 = ctx.r11.s64 + 2196;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8257ef9c
	goto loc_8257EF9C;
loc_8257EF98:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257EF9C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,20(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r11,-4304
	ctx.r4.s64 = ctx.r11.s64 + -4304;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257EFB8;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EFC0"))) PPC_WEAK_FUNC(sub_8257EFC0);
PPC_FUNC_IMPL(__imp__sub_8257EFC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lbz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257EFE0"))) PPC_WEAK_FUNC(sub_8257EFE0);
PPC_FUNC_IMPL(__imp__sub_8257EFE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x8257EFE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,-8
	ctx.r27.s64 = ctx.r3.s64 + -8;
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
	ctx.lr = 0x8257F008;
	sub_823F51A8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x823f5040
	ctx.lr = 0x8257F010;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257f038
	if (ctx.cr0.eq) goto loc_8257F038;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stb r30,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r30.u8);
	// addi r11,r11,2204
	ctx.r11.s64 = ctx.r11.s64 + 2204;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8257f03c
	goto loc_8257F03C;
loc_8257F038:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257F03C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,20(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r11,-4160
	ctx.r4.s64 = ctx.r11.s64 + -4160;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257F058;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257F060"))) PPC_WEAK_FUNC(sub_8257F060);
PPC_FUNC_IMPL(__imp__sub_8257F060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8257F068;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,-8
	ctx.r29.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8257F080;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8257F088;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257f0a8
	if (ctx.cr0.eq) goto loc_8257F0A8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,2212
	ctx.r11.s64 = ctx.r11.s64 + 2212;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8257f0ac
	goto loc_8257F0AC;
loc_8257F0A8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257F0AC:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-11400
	ctx.r4.s64 = ctx.r11.s64 + -11400;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257F0C8;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257F0D0"))) PPC_WEAK_FUNC(sub_8257F0D0);
PPC_FUNC_IMPL(__imp__sub_8257F0D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257F0E8"))) PPC_WEAK_FUNC(sub_8257F0E8);
PPC_FUNC_IMPL(__imp__sub_8257F0E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8257F0F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,-8
	ctx.r29.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8257F108;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8257F110;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257f130
	if (ctx.cr0.eq) goto loc_8257F130;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,2220
	ctx.r11.s64 = ctx.r11.s64 + 2220;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8257f134
	goto loc_8257F134;
loc_8257F130:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257F134:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-3888
	ctx.r4.s64 = ctx.r11.s64 + -3888;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257F150;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257F158"))) PPC_WEAK_FUNC(sub_8257F158);
PPC_FUNC_IMPL(__imp__sub_8257F158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,16
	ctx.r10.s64 = 16;
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// lvx128 v1,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257F170"))) PPC_WEAK_FUNC(sub_8257F170);
PPC_FUNC_IMPL(__imp__sub_8257F170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,-8
	ctx.r30.s64 = ctx.r3.s64 + -8;
	// vor128 v127,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8257F1A0;
	sub_823F51A8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x823f5040
	ctx.lr = 0x8257F1A8;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257f1cc
	if (ctx.cr0.eq) goto loc_8257F1CC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,2228
	ctx.r11.s64 = ctx.r11.s64 + 2228;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stvx128 v127,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x8257f1d0
	goto loc_8257F1D0;
loc_8257F1CC:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257F1D0:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r4,r11,-3752
	ctx.r4.s64 = ctx.r11.s64 + -3752;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257F1EC;
	sub_823F4FE8(ctx, base);
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
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257F210"))) PPC_WEAK_FUNC(sub_8257F210);
PPC_FUNC_IMPL(__imp__sub_8257F210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8257F218;
	__savegprlr_29(ctx, base);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
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
	// li r5,504
	ctx.r5.s64 = 504;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82a7d730
	ctx.lr = 0x8257F23C;
	sub_82A7D730(ctx, base);
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
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
	ctx.lr = 0x8257F268;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257F270"))) PPC_WEAK_FUNC(sub_8257F270);
PPC_FUNC_IMPL(__imp__sub_8257F270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8257F278;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,-8
	ctx.r29.s64 = ctx.r3.s64 + -8;
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
	ctx.lr = 0x8257F2A8;
	sub_823F51A8(ctx, base);
	// li r4,576
	ctx.r4.s64 = 576;
	// bl 0x823f5040
	ctx.lr = 0x8257F2B0;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8257f2dc
	if (ctx.cr0.eq) goto loc_8257F2DC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,2236
	ctx.r11.s64 = ctx.r11.s64 + 2236;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,560
	ctx.r5.s64 = 560;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a7d730
	ctx.lr = 0x8257F2D4;
	sub_82A7D730(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// b 0x8257f2e0
	goto loc_8257F2E0;
loc_8257F2DC:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257F2E0:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,576
	ctx.r6.s64 = 576;
	// addi r4,r11,-3568
	ctx.r4.s64 = ctx.r11.s64 + -3568;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257F2FC;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257F308"))) PPC_WEAK_FUNC(sub_8257F308);
PPC_FUNC_IMPL(__imp__sub_8257F308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8257F310;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82a7d730
	ctx.lr = 0x8257F334;
	sub_82A7D730(ctx, base);
	// lwz r11,148(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ld r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// ld r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// ld r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// ld r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bctrl 
	ctx.lr = 0x8257F360;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257F368"))) PPC_WEAK_FUNC(sub_8257F368);
PPC_FUNC_IMPL(__imp__sub_8257F368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x8257F370;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,-8
	ctx.r27.s64 = ctx.r3.s64 + -8;
	// std r6,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r6.u64);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// std r8,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r8.u64);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r9,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r9.u64);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// std r10,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r10.u64);
	// bl 0x823f51a8
	ctx.lr = 0x8257F3A0;
	sub_823F51A8(ctx, base);
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x823f5040
	ctx.lr = 0x8257F3A8;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8257f3dc
	if (ctx.cr0.eq) goto loc_8257F3DC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// addi r11,r11,2244
	ctx.r11.s64 = ctx.r11.s64 + 2244;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a7d730
	ctx.lr = 0x8257F3D4;
	sub_82A7D730(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// b 0x8257f3e0
	goto loc_8257F3E0;
loc_8257F3DC:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257F3E0:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,20(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,80
	ctx.r6.s64 = 80;
	// addi r4,r11,-3320
	ctx.r4.s64 = ctx.r11.s64 + -3320;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257F3FC;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257F408"))) PPC_WEAK_FUNC(sub_8257F408);
PPC_FUNC_IMPL(__imp__sub_8257F408) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
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

__attribute__((alias("__imp__sub_8257F420"))) PPC_WEAK_FUNC(sub_8257F420);
PPC_FUNC_IMPL(__imp__sub_8257F420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8257F428;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,-8
	ctx.r29.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8257F440;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8257F448;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257f468
	if (ctx.cr0.eq) goto loc_8257F468;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,2252
	ctx.r11.s64 = ctx.r11.s64 + 2252;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8257f46c
	goto loc_8257F46C;
loc_8257F468:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257F46C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-3064
	ctx.r4.s64 = ctx.r11.s64 + -3064;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257F488;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257F490"))) PPC_WEAK_FUNC(sub_8257F490);
PPC_FUNC_IMPL(__imp__sub_8257F490) {
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
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257F4A8"))) PPC_WEAK_FUNC(sub_8257F4A8);
PPC_FUNC_IMPL(__imp__sub_8257F4A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8257F4B0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,-8
	ctx.r29.s64 = ctx.r3.s64 + -8;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8257F4D0;
	sub_823F51A8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823f5040
	ctx.lr = 0x8257F4D8;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257f4fc
	if (ctx.cr0.eq) goto loc_8257F4FC;
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
	// addi r11,r11,2260
	ctx.r11.s64 = ctx.r11.s64 + 2260;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8257f500
	goto loc_8257F500;
loc_8257F4FC:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257F500:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r11,-2928
	ctx.r4.s64 = ctx.r11.s64 + -2928;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257F51C;
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

__attribute__((alias("__imp__sub_8257F528"))) PPC_WEAK_FUNC(sub_8257F528);
PPC_FUNC_IMPL(__imp__sub_8257F528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r9,64
	ctx.r9.s64 = 64;
	// lfs f1,80(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// li r8,48
	ctx.r8.s64 = 48;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r10,164(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 164);
	// lvx128 v4,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v1,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257F570;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257F580"))) PPC_WEAK_FUNC(sub_8257F580);
PPC_FUNC_IMPL(__imp__sub_8257F580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8257F588;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a7f454
	ctx.lr = 0x8257F594;
	__savevmx_124(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,-8
	ctx.r29.s64 = ctx.r3.s64 + -8;
	// vor128 v127,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// vor128 v126,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// vor128 v125,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v125.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// vor128 v124,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v124.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x823f51a8
	ctx.lr = 0x8257F5C0;
	sub_823F51A8(ctx, base);
	// li r4,96
	ctx.r4.s64 = 96;
	// bl 0x823f5040
	ctx.lr = 0x8257F5C8;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257f60c
	if (ctx.cr0.eq) goto loc_8257F60C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f31,80(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r11,r11,2268
	ctx.r11.s64 = ctx.r11.s64 + 2268;
	// stvx128 v127,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stvx128 v126,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v125,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v125.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v124,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v124.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x8257f610
	goto loc_8257F610;
loc_8257F60C:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257F610:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// addi r4,r11,-2776
	ctx.r4.s64 = ctx.r11.s64 + -2776;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257F62C;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a7f6ec
	ctx.lr = 0x8257F638;
	__restvmx_124(ctx, base);
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257F640"))) PPC_WEAK_FUNC(sub_8257F640);
PPC_FUNC_IMPL(__imp__sub_8257F640) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lwz r11,352(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257F658"))) PPC_WEAK_FUNC(sub_8257F658);
PPC_FUNC_IMPL(__imp__sub_8257F658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8257F660;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,-8
	ctx.r29.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8257F678;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8257F680;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257f6a0
	if (ctx.cr0.eq) goto loc_8257F6A0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,2276
	ctx.r11.s64 = ctx.r11.s64 + 2276;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8257f6a4
	goto loc_8257F6A4;
loc_8257F6A0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257F6A4:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-2496
	ctx.r4.s64 = ctx.r11.s64 + -2496;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257F6C0;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257F6C8"))) PPC_WEAK_FUNC(sub_8257F6C8);
PPC_FUNC_IMPL(__imp__sub_8257F6C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lwz r11,356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257F6E0"))) PPC_WEAK_FUNC(sub_8257F6E0);
PPC_FUNC_IMPL(__imp__sub_8257F6E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8257F6E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,-8
	ctx.r29.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8257F700;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8257F708;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257f728
	if (ctx.cr0.eq) goto loc_8257F728;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,2284
	ctx.r11.s64 = ctx.r11.s64 + 2284;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8257f72c
	goto loc_8257F72C;
loc_8257F728:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257F72C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-2360
	ctx.r4.s64 = ctx.r11.s64 + -2360;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257F748;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257F750"))) PPC_WEAK_FUNC(sub_8257F750);
PPC_FUNC_IMPL(__imp__sub_8257F750) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lwz r11,360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257F768"))) PPC_WEAK_FUNC(sub_8257F768);
PPC_FUNC_IMPL(__imp__sub_8257F768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8257F770;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,-8
	ctx.r29.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8257F788;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8257F790;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257f7b0
	if (ctx.cr0.eq) goto loc_8257F7B0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,2292
	ctx.r11.s64 = ctx.r11.s64 + 2292;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8257f7b4
	goto loc_8257F7B4;
loc_8257F7B0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257F7B4:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-2224
	ctx.r4.s64 = ctx.r11.s64 + -2224;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257F7D0;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257F7D8"))) PPC_WEAK_FUNC(sub_8257F7D8);
PPC_FUNC_IMPL(__imp__sub_8257F7D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lwz r11,368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257F7F0"))) PPC_WEAK_FUNC(sub_8257F7F0);
PPC_FUNC_IMPL(__imp__sub_8257F7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8257F7F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,-8
	ctx.r29.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8257F810;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8257F818;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257f838
	if (ctx.cr0.eq) goto loc_8257F838;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,2300
	ctx.r11.s64 = ctx.r11.s64 + 2300;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8257f83c
	goto loc_8257F83C;
loc_8257F838:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257F83C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-2088
	ctx.r4.s64 = ctx.r11.s64 + -2088;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257F858;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257F860"))) PPC_WEAK_FUNC(sub_8257F860);
PPC_FUNC_IMPL(__imp__sub_8257F860) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257F888"))) PPC_WEAK_FUNC(sub_8257F888);
PPC_FUNC_IMPL(__imp__sub_8257F888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8257F890;
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8257F8AC;
	sub_823F51A8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823f5040
	ctx.lr = 0x8257F8B4;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257f8d8
	if (ctx.cr0.eq) goto loc_8257F8D8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,2308
	ctx.r11.s64 = ctx.r11.s64 + 2308;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8257f8dc
	goto loc_8257F8DC;
loc_8257F8D8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257F8DC:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,20(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r11,-1936
	ctx.r4.s64 = ctx.r11.s64 + -1936;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257F8F8;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257F900"))) PPC_WEAK_FUNC(sub_8257F900);
PPC_FUNC_IMPL(__imp__sub_8257F900) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257F928"))) PPC_WEAK_FUNC(sub_8257F928);
PPC_FUNC_IMPL(__imp__sub_8257F928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8257F930;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,-8
	ctx.r29.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8257F948;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8257F950;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257f970
	if (ctx.cr0.eq) goto loc_8257F970;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,2316
	ctx.r11.s64 = ctx.r11.s64 + 2316;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8257f974
	goto loc_8257F974;
loc_8257F970:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257F974:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-1776
	ctx.r4.s64 = ctx.r11.s64 + -1776;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257F990;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257F998"))) PPC_WEAK_FUNC(sub_8257F998);
PPC_FUNC_IMPL(__imp__sub_8257F998) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 392);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257F9D0"))) PPC_WEAK_FUNC(sub_8257F9D0);
PPC_FUNC_IMPL(__imp__sub_8257F9D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8257F9D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,-8
	ctx.r29.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8257F9F0;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8257F9F8;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257fa18
	if (ctx.cr0.eq) goto loc_8257FA18;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,2324
	ctx.r11.s64 = ctx.r11.s64 + 2324;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8257fa1c
	goto loc_8257FA1C;
loc_8257FA18:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8257FA1C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-1608
	ctx.r4.s64 = ctx.r11.s64 + -1608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8257FA38;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257FA40"))) PPC_WEAK_FUNC(sub_8257FA40);
PPC_FUNC_IMPL(__imp__sub_8257FA40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
loc_8257FA54:
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
	// bne 0x8257fa54
	if (!ctx.cr0.eq) goto loc_8257FA54;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8257fa98
	if (!ctx.cr6.eq) goto loc_8257FA98;
	// addic. r3,r3,-8
	ctx.xer.ca = ctx.r3.u32 > 7;
	ctx.r3.s64 = ctx.r3.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8257fa98
	if (ctx.cr0.eq) goto loc_8257FA98;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257FA98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257FA98:
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

__attribute__((alias("__imp__sub_8257FAB0"))) PPC_WEAK_FUNC(sub_8257FAB0);
PPC_FUNC_IMPL(__imp__sub_8257FAB0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,2176
	ctx.r11.s64 = ctx.r11.s64 + 2176;
	// addi r10,r10,1764
	ctx.r10.s64 = ctx.r10.s64 + 1764;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82dd0e30
	ctx.lr = 0x8257FAE8;
	sub_82DD0E30(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257faf8
	if (ctx.cr0.eq) goto loc_8257FAF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8257FAF8;
	sub_823FD208(ctx, base);
loc_8257FAF8:
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

__attribute__((alias("__imp__sub_8257FB18"))) PPC_WEAK_FUNC(sub_8257FB18);
PPC_FUNC_IMPL(__imp__sub_8257FB18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,384
	ctx.r4.s64 = 384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8246f258
	ctx.lr = 0x8257FB64;
	sub_8246F258(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,383(r31)
	PPC_STORE_U8(ctx.r31.u32 + 383, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8257FB80"))) PPC_WEAK_FUNC(sub_8257FB80);
PPC_FUNC_IMPL(__imp__sub_8257FB80) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257fbd8
	if (ctx.cr6.eq) goto loc_8257FBD8;
	// lis r10,43
	ctx.r10.s64 = 2818048;
	// ori r10,r10,37648
	ctx.r10.u64 = ctx.r10.u64 | 37648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8257fbbc
	if (ctx.cr6.gt) goto loc_8257FBBC;
	// mulli r3,r11,1504
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1504));
	// bl 0x82c0f6c0
	ctx.lr = 0x8257FBB4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8257fbd8
	if (!ctx.cr0.eq) goto loc_8257FBD8;
loc_8257FBBC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,18540
	ctx.r11.s64 = ctx.r11.s64 + 18540;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8247bdc8
	ctx.lr = 0x8257FBD8;
	sub_8247BDC8(ctx, base);
loc_8257FBD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257FBE8"))) PPC_WEAK_FUNC(sub_8257FBE8);
PPC_FUNC_IMPL(__imp__sub_8257FBE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,1752
	ctx.r11.s64 = ctx.r11.s64 + 1752;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8257fc14
	if (ctx.cr0.eq) goto loc_8257FC14;
	// bl 0x823fd208
	ctx.lr = 0x8257FC14;
	sub_823FD208(ctx, base);
loc_8257FC14:
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

__attribute__((alias("__imp__sub_8257FC30"))) PPC_WEAK_FUNC(sub_8257FC30);
PPC_FUNC_IMPL(__imp__sub_8257FC30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r31,r11,32420
	ctx.r31.s64 = ctx.r11.s64 + 32420;
	// lwz r11,32432(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32432);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8257fc68
	if (!ctx.cr0.eq) goto loc_8257FC68;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32432(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32432, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x8257FC68;
	sub_8289D980(ctx, base);
loc_8257FC68:
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

__attribute__((alias("__imp__sub_8257FC80"))) PPC_WEAK_FUNC(sub_8257FC80);
PPC_FUNC_IMPL(__imp__sub_8257FC80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r31,r11,32436
	ctx.r31.s64 = ctx.r11.s64 + 32436;
	// lwz r11,32448(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32448);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8257fcb8
	if (!ctx.cr0.eq) goto loc_8257FCB8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32448(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32448, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x8257FCB8;
	sub_8289D980(ctx, base);
loc_8257FCB8:
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

__attribute__((alias("__imp__sub_8257FCD0"))) PPC_WEAK_FUNC(sub_8257FCD0);
PPC_FUNC_IMPL(__imp__sub_8257FCD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r31,r11,32452
	ctx.r31.s64 = ctx.r11.s64 + 32452;
	// lwz r11,32464(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32464);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8257fd08
	if (!ctx.cr0.eq) goto loc_8257FD08;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32464(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32464, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x8257FD08;
	sub_8289D980(ctx, base);
loc_8257FD08:
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

__attribute__((alias("__imp__sub_8257FD20"))) PPC_WEAK_FUNC(sub_8257FD20);
PPC_FUNC_IMPL(__imp__sub_8257FD20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r31,r11,32468
	ctx.r31.s64 = ctx.r11.s64 + 32468;
	// lwz r11,32480(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32480);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8257fd58
	if (!ctx.cr0.eq) goto loc_8257FD58;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32480(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32480, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x8257FD58;
	sub_8289D980(ctx, base);
loc_8257FD58:
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

__attribute__((alias("__imp__sub_8257FD70"))) PPC_WEAK_FUNC(sub_8257FD70);
PPC_FUNC_IMPL(__imp__sub_8257FD70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r31,r11,32484
	ctx.r31.s64 = ctx.r11.s64 + 32484;
	// lwz r11,32496(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32496);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8257fda8
	if (!ctx.cr0.eq) goto loc_8257FDA8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32496(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32496, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x8257FDA8;
	sub_8289D980(ctx, base);
loc_8257FDA8:
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

__attribute__((alias("__imp__sub_8257FDC0"))) PPC_WEAK_FUNC(sub_8257FDC0);
PPC_FUNC_IMPL(__imp__sub_8257FDC0) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8257FDE0;
	sub_82E4DE08(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2412
	ctx.r11.s64 = ctx.r11.s64 + 2412;
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

__attribute__((alias("__imp__sub_8257FE10"))) PPC_WEAK_FUNC(sub_8257FE10);
PPC_FUNC_IMPL(__imp__sub_8257FE10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,2412
	ctx.r11.s64 = ctx.r11.s64 + 2412;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8257FE34;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257fe44
	if (ctx.cr0.eq) goto loc_8257FE44;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x823fd208
	ctx.lr = 0x8257FE44;
	sub_823FD208(ctx, base);
loc_8257FE44:
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

__attribute__((alias("__imp__sub_8257FE68"))) PPC_WEAK_FUNC(sub_8257FE68);
PPC_FUNC_IMPL(__imp__sub_8257FE68) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8257FE88;
	sub_82E4DE08(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2432
	ctx.r11.s64 = ctx.r11.s64 + 2432;
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

__attribute__((alias("__imp__sub_8257FEB8"))) PPC_WEAK_FUNC(sub_8257FEB8);
PPC_FUNC_IMPL(__imp__sub_8257FEB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,2432
	ctx.r11.s64 = ctx.r11.s64 + 2432;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8257FEDC;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257ff04
	if (ctx.cr0.eq) goto loc_8257FF04;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257ff04
	if (ctx.cr6.eq) goto loc_8257FF04;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257FF04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257FF04:
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

__attribute__((alias("__imp__sub_8257FF28"))) PPC_WEAK_FUNC(sub_8257FF28);
PPC_FUNC_IMPL(__imp__sub_8257FF28) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x8257fe10
	ctx.lr = 0x8257FF48;
	sub_8257FE10(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257ff58
	if (ctx.cr0.eq) goto loc_8257FF58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8257FF58;
	sub_823FD208(ctx, base);
loc_8257FF58:
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

__attribute__((alias("__imp__sub_8257FF78"))) PPC_WEAK_FUNC(sub_8257FF78);
PPC_FUNC_IMPL(__imp__sub_8257FF78) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x8257feb8
	ctx.lr = 0x8257FF98;
	sub_8257FEB8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257ffa8
	if (ctx.cr0.eq) goto loc_8257FFA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8257FFA8;
	sub_823FD208(ctx, base);
loc_8257FFA8:
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

__attribute__((alias("__imp__sub_8257FFC8"))) PPC_WEAK_FUNC(sub_8257FFC8);
PPC_FUNC_IMPL(__imp__sub_8257FFC8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8257fab0
	sub_8257FAB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257FFD0"))) PPC_WEAK_FUNC(sub_8257FFD0);
PPC_FUNC_IMPL(__imp__sub_8257FFD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// bge cr6,0x8257ffe4
	if (!ctx.cr6.lt) goto loc_8257FFE4;
	// neg r11,r4
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r4.u64);
loc_8257FFE4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,3368(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3368);
	ctx.f12.f64 = double(temp.f32);
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_8257FFF0:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8257fffc
	if (ctx.cr0.eq) goto loc_8257FFFC;
	// fmuls f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_8257FFFC:
	// rlwinm. r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258000c
	if (ctx.cr0.eq) goto loc_8258000C;
	// fmuls f13,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// b 0x8257fff0
	goto loc_8257FFF0;
loc_8258000C:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x82580018
	if (!ctx.cr6.lt) goto loc_82580018;
	// fdivs f0,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
loc_82580018:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82580020"))) PPC_WEAK_FUNC(sub_82580020);
PPC_FUNC_IMPL(__imp__sub_82580020) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r3,-8
	ctx.r30.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82580044;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x8258004C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82580068
	if (ctx.cr0.eq) goto loc_82580068;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,-152
	ctx.r11.s64 = ctx.r11.s64 + -152;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8258006c
	goto loc_8258006C;
loc_82580068:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258006C:
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,28200
	ctx.r4.s64 = ctx.r11.s64 + 28200;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82580088;
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

__attribute__((alias("__imp__sub_825800A0"))) PPC_WEAK_FUNC(sub_825800A0);
PPC_FUNC_IMPL(__imp__sub_825800A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r3,-8
	ctx.r30.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x825800C4;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x825800CC;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825800e8
	if (ctx.cr0.eq) goto loc_825800E8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,664
	ctx.r11.s64 = ctx.r11.s64 + 664;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825800ec
	goto loc_825800EC;
loc_825800E8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825800EC:
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,28200
	ctx.r4.s64 = ctx.r11.s64 + 28200;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82580108;
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

__attribute__((alias("__imp__sub_82580120"))) PPC_WEAK_FUNC(sub_82580120);
PPC_FUNC_IMPL(__imp__sub_82580120) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r3,-8
	ctx.r30.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82580144;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x8258014C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82580168
	if (ctx.cr0.eq) goto loc_82580168;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,672
	ctx.r11.s64 = ctx.r11.s64 + 672;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8258016c
	goto loc_8258016C;
loc_82580168:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258016C:
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,21376
	ctx.r4.s64 = ctx.r11.s64 + 21376;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82580188;
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

__attribute__((alias("__imp__sub_825801A0"))) PPC_WEAK_FUNC(sub_825801A0);
PPC_FUNC_IMPL(__imp__sub_825801A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r3,-8
	ctx.r30.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x825801C4;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x825801CC;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825801e8
	if (ctx.cr0.eq) goto loc_825801E8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,680
	ctx.r11.s64 = ctx.r11.s64 + 680;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825801ec
	goto loc_825801EC;
loc_825801E8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825801EC:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-16792
	ctx.r4.s64 = ctx.r11.s64 + -16792;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82580208;
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

__attribute__((alias("__imp__sub_82580220"))) PPC_WEAK_FUNC(sub_82580220);
PPC_FUNC_IMPL(__imp__sub_82580220) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r3,-8
	ctx.r30.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82580244;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x8258024C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82580268
	if (ctx.cr0.eq) goto loc_82580268;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,688
	ctx.r11.s64 = ctx.r11.s64 + 688;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8258026c
	goto loc_8258026C;
loc_82580268:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258026C:
	// lis r11,-31987
	ctx.r11.s64 = -2096300032;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-25056
	ctx.r4.s64 = ctx.r11.s64 + -25056;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82580288;
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

__attribute__((alias("__imp__sub_825802A0"))) PPC_WEAK_FUNC(sub_825802A0);
PPC_FUNC_IMPL(__imp__sub_825802A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r3,-8
	ctx.r30.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x825802C4;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x825802CC;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825802e8
	if (ctx.cr0.eq) goto loc_825802E8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,696
	ctx.r11.s64 = ctx.r11.s64 + 696;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825802ec
	goto loc_825802EC;
loc_825802E8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825802EC:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-16760
	ctx.r4.s64 = ctx.r11.s64 + -16760;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82580308;
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

__attribute__((alias("__imp__sub_82580320"))) PPC_WEAK_FUNC(sub_82580320);
PPC_FUNC_IMPL(__imp__sub_82580320) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r3,-8
	ctx.r30.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82580344;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x8258034C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82580368
	if (ctx.cr0.eq) goto loc_82580368;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,712
	ctx.r11.s64 = ctx.r11.s64 + 712;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8258036c
	goto loc_8258036C;
loc_82580368:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258036C:
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,15008
	ctx.r4.s64 = ctx.r11.s64 + 15008;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82580388;
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

__attribute__((alias("__imp__sub_825803A0"))) PPC_WEAK_FUNC(sub_825803A0);
PPC_FUNC_IMPL(__imp__sub_825803A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r3,-8
	ctx.r30.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x825803C4;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x825803CC;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825803e8
	if (ctx.cr0.eq) goto loc_825803E8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,720
	ctx.r11.s64 = ctx.r11.s64 + 720;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825803ec
	goto loc_825803EC;
loc_825803E8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825803EC:
	// lis r11,-32036
	ctx.r11.s64 = -2099511296;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-29960
	ctx.r4.s64 = ctx.r11.s64 + -29960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82580408;
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

__attribute__((alias("__imp__sub_82580420"))) PPC_WEAK_FUNC(sub_82580420);
PPC_FUNC_IMPL(__imp__sub_82580420) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r3,-8
	ctx.r30.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82580444;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x8258044C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82580468
	if (ctx.cr0.eq) goto loc_82580468;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,728
	ctx.r11.s64 = ctx.r11.s64 + 728;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8258046c
	goto loc_8258046C;
loc_82580468:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258046C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,11248
	ctx.r4.s64 = ctx.r11.s64 + 11248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82580488;
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

__attribute__((alias("__imp__sub_825804A0"))) PPC_WEAK_FUNC(sub_825804A0);
PPC_FUNC_IMPL(__imp__sub_825804A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r3,-8
	ctx.r30.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x825804C4;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x825804CC;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825804e8
	if (ctx.cr0.eq) goto loc_825804E8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,736
	ctx.r11.s64 = ctx.r11.s64 + 736;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825804ec
	goto loc_825804EC;
loc_825804E8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825804EC:
	// lis r11,-32036
	ctx.r11.s64 = -2099511296;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-16176
	ctx.r4.s64 = ctx.r11.s64 + -16176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82580508;
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

__attribute__((alias("__imp__sub_82580520"))) PPC_WEAK_FUNC(sub_82580520);
PPC_FUNC_IMPL(__imp__sub_82580520) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r3,-8
	ctx.r30.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82580544;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x8258054C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82580568
	if (ctx.cr0.eq) goto loc_82580568;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,744
	ctx.r11.s64 = ctx.r11.s64 + 744;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8258056c
	goto loc_8258056C;
loc_82580568:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258056C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-15328
	ctx.r4.s64 = ctx.r11.s64 + -15328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82580588;
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

__attribute__((alias("__imp__sub_825805A0"))) PPC_WEAK_FUNC(sub_825805A0);
PPC_FUNC_IMPL(__imp__sub_825805A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r3,-8
	ctx.r30.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x825805C4;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x825805CC;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825805e8
	if (ctx.cr0.eq) goto loc_825805E8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,752
	ctx.r11.s64 = ctx.r11.s64 + 752;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825805ec
	goto loc_825805EC;
loc_825805E8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825805EC:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-14160
	ctx.r4.s64 = ctx.r11.s64 + -14160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82580608;
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

__attribute__((alias("__imp__sub_82580620"))) PPC_WEAK_FUNC(sub_82580620);
PPC_FUNC_IMPL(__imp__sub_82580620) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r3,-8
	ctx.r30.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82580644;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x8258064C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82580668
	if (ctx.cr0.eq) goto loc_82580668;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,760
	ctx.r11.s64 = ctx.r11.s64 + 760;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8258066c
	goto loc_8258066C;
loc_82580668:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258066C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-11472
	ctx.r4.s64 = ctx.r11.s64 + -11472;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82580688;
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

__attribute__((alias("__imp__sub_825806A0"))) PPC_WEAK_FUNC(sub_825806A0);
PPC_FUNC_IMPL(__imp__sub_825806A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r3,-8
	ctx.r30.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x825806C4;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x825806CC;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825806e8
	if (ctx.cr0.eq) goto loc_825806E8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,768
	ctx.r11.s64 = ctx.r11.s64 + 768;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825806ec
	goto loc_825806EC;
loc_825806E8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825806EC:
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,5920
	ctx.r4.s64 = ctx.r11.s64 + 5920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82580708;
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

__attribute__((alias("__imp__sub_82580720"))) PPC_WEAK_FUNC(sub_82580720);
PPC_FUNC_IMPL(__imp__sub_82580720) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r3,-8
	ctx.r30.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82580744;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x8258074C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82580768
	if (ctx.cr0.eq) goto loc_82580768;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,776
	ctx.r11.s64 = ctx.r11.s64 + 776;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8258076c
	goto loc_8258076C;
loc_82580768:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258076C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-13712
	ctx.r4.s64 = ctx.r11.s64 + -13712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82580788;
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

__attribute__((alias("__imp__sub_825807A0"))) PPC_WEAK_FUNC(sub_825807A0);
PPC_FUNC_IMPL(__imp__sub_825807A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r3,-8
	ctx.r30.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x825807C4;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x825807CC;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825807e8
	if (ctx.cr0.eq) goto loc_825807E8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,784
	ctx.r11.s64 = ctx.r11.s64 + 784;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825807ec
	goto loc_825807EC;
loc_825807E8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825807EC:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-11104
	ctx.r4.s64 = ctx.r11.s64 + -11104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82580808;
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

__attribute__((alias("__imp__sub_82580820"))) PPC_WEAK_FUNC(sub_82580820);
PPC_FUNC_IMPL(__imp__sub_82580820) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r3,-8
	ctx.r30.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82580844;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x8258084C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82580868
	if (ctx.cr0.eq) goto loc_82580868;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,792
	ctx.r11.s64 = ctx.r11.s64 + 792;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8258086c
	goto loc_8258086C;
loc_82580868:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258086C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-11088
	ctx.r4.s64 = ctx.r11.s64 + -11088;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82580888;
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

__attribute__((alias("__imp__sub_825808A0"))) PPC_WEAK_FUNC(sub_825808A0);
PPC_FUNC_IMPL(__imp__sub_825808A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r3,-8
	ctx.r30.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x825808C4;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x825808CC;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825808e8
	if (ctx.cr0.eq) goto loc_825808E8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,800
	ctx.r11.s64 = ctx.r11.s64 + 800;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825808ec
	goto loc_825808EC;
loc_825808E8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825808EC:
	// lis r11,-32057
	ctx.r11.s64 = -2100887552;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,19696
	ctx.r4.s64 = ctx.r11.s64 + 19696;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82580908;
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

__attribute__((alias("__imp__sub_82580920"))) PPC_WEAK_FUNC(sub_82580920);
PPC_FUNC_IMPL(__imp__sub_82580920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r11,r11,-436
	ctx.r11.s64 = ctx.r11.s64 + -436;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82c09c40
	ctx.lr = 0x82580948;
	sub_82C09C40(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,3020
	ctx.r11.s64 = ctx.r11.s64 + 3020;
	// addi r10,r10,3012
	ctx.r10.s64 = ctx.r10.s64 + 3012;
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

__attribute__((alias("__imp__sub_82580980"))) PPC_WEAK_FUNC(sub_82580980);
PPC_FUNC_IMPL(__imp__sub_82580980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82580988;
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
	ctx.lr = 0x825809B8;
	sub_823F51A8(ctx, base);
	// li r4,240
	ctx.r4.s64 = 240;
	// bl 0x823f5040
	ctx.lr = 0x825809C0;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825809ec
	if (ctx.cr0.eq) goto loc_825809EC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,3104
	ctx.r11.s64 = ctx.r11.s64 + 3104;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,224
	ctx.r5.s64 = 224;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a7d730
	ctx.lr = 0x825809E4;
	sub_82A7D730(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// b 0x825809f0
	goto loc_825809F0;
loc_825809EC:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825809F0:
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,240
	ctx.r6.s64 = 240;
	// addi r4,r11,19240
	ctx.r4.s64 = ctx.r11.s64 + 19240;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82580A0C;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82580A18"))) PPC_WEAK_FUNC(sub_82580A18);
PPC_FUNC_IMPL(__imp__sub_82580A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,3112
	ctx.r11.s64 = ctx.r11.s64 + 3112;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// ble cr6,0x82580a84
	if (!ctx.cr6.gt) goto loc_82580A84;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82580A4C:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
loc_82580A54:
	// mfmsr r7
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r7.u64 = PPC_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	PPC_ENTER_GLOBAL_LOCK();
	// lwarx r8,0,r9
	ea = ctx.r9.u32;
	ctx.reserved.u32 = *(uint32_t*)PPC_RAW_ADDR(ea);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r9
	ea = ctx.r9.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(PPC_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	PPC_LEAVE_GLOBAL_LOCK();
	// bne 0x82580a54
	if (!ctx.cr0.eq) goto loc_82580A54;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82580a4c
	if (ctx.cr6.lt) goto loc_82580A4C;
loc_82580A84:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823fd208
	ctx.lr = 0x82580A8C;
	sub_823FD208(ctx, base);
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

__attribute__((alias("__imp__sub_82580AB0"))) PPC_WEAK_FUNC(sub_82580AB0);
PPC_FUNC_IMPL(__imp__sub_82580AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82580AB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r28,152(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82580b84
	if (ctx.cr6.eq) goto loc_82580B84;
	// lwz r29,156(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82580b84
	if (ctx.cr6.eq) goto loc_82580B84;
	// lis r11,2340
	ctx.r11.s64 = 153354240;
	// mulli r3,r29,28
	ctx.r3.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(28));
	// ori r11,r11,37449
	ctx.r11.u64 = ctx.r11.u64 | 37449;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82580af4
	if (!ctx.cr6.gt) goto loc_82580AF4;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82580AF4:
	// bl 0x82c0f6c0
	ctx.lr = 0x82580AF8;
	sub_82C0F6C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82580b28
	if (!ctx.cr6.gt) goto loc_82580B28;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r28,r3,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r3.u64;
loc_82580B0C:
	// add r4,r28,r31
	ctx.r4.u64 = ctx.r28.u64 + ctx.r31.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a7d730
	ctx.lr = 0x82580B1C;
	sub_82A7D730(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// bne 0x82580b0c
	if (!ctx.cr0.eq) goto loc_82580B0C;
loc_82580B28:
	// addi r31,r27,4
	ctx.r31.s64 = ctx.r27.s64 + 4;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82580B38;
	sub_823F51A8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823f5040
	ctx.lr = 0x82580B40;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82580b64
	if (ctx.cr0.eq) goto loc_82580B64;
	// ld r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r10,r10,3112
	ctx.r10.s64 = ctx.r10.s64 + 3112;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// std r11,4(r3)
	PPC_STORE_U64(ctx.r3.u32 + 4, ctx.r11.u64);
	// b 0x82580b68
	goto loc_82580B68;
loc_82580B64:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82580B68:
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// lwz r5,12(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r11,12576
	ctx.r4.s64 = ctx.r11.s64 + 12576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82580B84;
	sub_823F4FE8(ctx, base);
loc_82580B84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82580B90"))) PPC_WEAK_FUNC(sub_82580B90);
PPC_FUNC_IMPL(__imp__sub_82580B90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82580BA0"))) PPC_WEAK_FUNC(sub_82580BA0);
PPC_FUNC_IMPL(__imp__sub_82580BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82580a18
	ctx.lr = 0x82580BB8;
	sub_82580A18(ctx, base);
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

__attribute__((alias("__imp__sub_82580BD0"))) PPC_WEAK_FUNC(sub_82580BD0);
PPC_FUNC_IMPL(__imp__sub_82580BD0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82580f58
	sub_82580F58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82580BD8"))) PPC_WEAK_FUNC(sub_82580BD8);
PPC_FUNC_IMPL(__imp__sub_82580BD8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82580BFC;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x82580C04;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82580c20
	if (ctx.cr0.eq) goto loc_82580C20;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,3120
	ctx.r11.s64 = ctx.r11.s64 + 3120;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82580c24
	goto loc_82580C24;
loc_82580C20:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82580C24:
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,15008
	ctx.r4.s64 = ctx.r11.s64 + 15008;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82580C40;
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

__attribute__((alias("__imp__sub_82580C58"))) PPC_WEAK_FUNC(sub_82580C58);
PPC_FUNC_IMPL(__imp__sub_82580C58) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82580C7C;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x82580C84;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82580ca0
	if (ctx.cr0.eq) goto loc_82580CA0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,3128
	ctx.r11.s64 = ctx.r11.s64 + 3128;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82580ca4
	goto loc_82580CA4;
loc_82580CA0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82580CA4:
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-26552
	ctx.r4.s64 = ctx.r11.s64 + -26552;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82580CC0;
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

__attribute__((alias("__imp__sub_82580CD8"))) PPC_WEAK_FUNC(sub_82580CD8);
PPC_FUNC_IMPL(__imp__sub_82580CD8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82580CFC;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x82580D04;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82580d20
	if (ctx.cr0.eq) goto loc_82580D20;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,3136
	ctx.r11.s64 = ctx.r11.s64 + 3136;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82580d24
	goto loc_82580D24;
loc_82580D20:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82580D24:
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,15184
	ctx.r4.s64 = ctx.r11.s64 + 15184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82580D40;
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

__attribute__((alias("__imp__sub_82580D58"))) PPC_WEAK_FUNC(sub_82580D58);
PPC_FUNC_IMPL(__imp__sub_82580D58) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82580D7C;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x82580D84;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82580da0
	if (ctx.cr0.eq) goto loc_82580DA0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,3144
	ctx.r11.s64 = ctx.r11.s64 + 3144;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82580da4
	goto loc_82580DA4;
loc_82580DA0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82580DA4:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,2960
	ctx.r4.s64 = ctx.r11.s64 + 2960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82580DC0;
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

__attribute__((alias("__imp__sub_82580DD8"))) PPC_WEAK_FUNC(sub_82580DD8);
PPC_FUNC_IMPL(__imp__sub_82580DD8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82580DFC;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x82580E04;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82580e20
	if (ctx.cr0.eq) goto loc_82580E20;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,3152
	ctx.r11.s64 = ctx.r11.s64 + 3152;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82580e24
	goto loc_82580E24;
loc_82580E20:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82580E24:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,11248
	ctx.r4.s64 = ctx.r11.s64 + 11248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82580E40;
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

__attribute__((alias("__imp__sub_82580E58"))) PPC_WEAK_FUNC(sub_82580E58);
PPC_FUNC_IMPL(__imp__sub_82580E58) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82580E7C;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x82580E84;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82580ea0
	if (ctx.cr0.eq) goto loc_82580EA0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82580ea4
	goto loc_82580EA4;
loc_82580EA0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82580EA4:
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
	ctx.lr = 0x82580EC0;
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

__attribute__((alias("__imp__sub_82580ED8"))) PPC_WEAK_FUNC(sub_82580ED8);
PPC_FUNC_IMPL(__imp__sub_82580ED8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82580EFC;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x82580F04;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82580f20
	if (ctx.cr0.eq) goto loc_82580F20;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,3168
	ctx.r11.s64 = ctx.r11.s64 + 3168;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82580f24
	goto loc_82580F24;
loc_82580F20:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82580F24:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-15328
	ctx.r4.s64 = ctx.r11.s64 + -15328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82580F40;
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

__attribute__((alias("__imp__sub_82580F58"))) PPC_WEAK_FUNC(sub_82580F58);
PPC_FUNC_IMPL(__imp__sub_82580F58) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82580F7C;
	sub_82C09C68(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-436
	ctx.r11.s64 = ctx.r11.s64 + -436;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8247a9a8
	ctx.lr = 0x82580F90;
	sub_8247A9A8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82580fa0
	if (ctx.cr0.eq) goto loc_82580FA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82580FA0;
	sub_823FD208(ctx, base);
loc_82580FA0:
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

__attribute__((alias("__imp__sub_82580FC0"))) PPC_WEAK_FUNC(sub_82580FC0);
PPC_FUNC_IMPL(__imp__sub_82580FC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82580fe4
	if (!ctx.cr6.gt) goto loc_82580FE4;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_82580FD8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82580fd8
	if (ctx.cr6.lt) goto loc_82580FD8;
loc_82580FE4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82580FF0"))) PPC_WEAK_FUNC(sub_82580FF0);
PPC_FUNC_IMPL(__imp__sub_82580FF0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r10,r10,40
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(40));
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581008"))) PPC_WEAK_FUNC(sub_82581008);
PPC_FUNC_IMPL(__imp__sub_82581008) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r8,92(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r9,12
	ctx.r9.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// divw r9,r8,r9
	ctx.r9.s32 = (ctx.r9.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r8.s32 / ctx.r9.s32 : 0;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581040"))) PPC_WEAK_FUNC(sub_82581040);
PPC_FUNC_IMPL(__imp__sub_82581040) {
	PPC_FUNC_PROLOGUE();
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581060"))) PPC_WEAK_FUNC(sub_82581060);
PPC_FUNC_IMPL(__imp__sub_82581060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,92(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r7,12
	ctx.r7.s64 = 12;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// divw r8,r8,r7
	ctx.r8.s32 = (ctx.r7.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r8.s32 / ctx.r7.s32 : 0;
	// lfs f1,3368(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f1.f64 = double(temp.f32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwa r9,104(r3)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 104));
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwa r11,8(r11)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 8));
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825810C8"))) PPC_WEAK_FUNC(sub_825810C8);
PPC_FUNC_IMPL(__imp__sub_825810C8) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825810F8"))) PPC_WEAK_FUNC(sub_825810F8);
PPC_FUNC_IMPL(__imp__sub_825810F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r8,92(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r3,0
	ctx.r3.s64 = 0;
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// divw r9,r8,r9
	ctx.r9.s32 = (ctx.r9.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r8.s32 / ctx.r9.s32 : 0;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// mulli r10,r10,20
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(20));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581130"))) PPC_WEAK_FUNC(sub_82581130);
PPC_FUNC_IMPL(__imp__sub_82581130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// lwz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,44(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// mulli r11,r11,20
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(20));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfd f0,3296(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 3296);
	// ble cr6,0x82581200
	if (!ctx.cr6.gt) goto loc_82581200;
	// lwz r6,-4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subf r10,r6,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r6.u64;
	// subf r9,r6,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r6.u64;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// lfd f13,3712(r7)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r7.u32 + 3712);
	// srawi r7,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 31;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fmul f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// subfc r10,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// adde r10,r6,r7
	temp.u8 = (ctx.r6.u32 + ctx.r7.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r6.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r10,109(r3)
	PPC_STORE_U8(ctx.r3.u32 + 109, ctx.r10.u8);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// subf r9,r11,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r10,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 31;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r11,r11,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r11.u32;
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// adde r11,r8,r10
	temp.u8 = (ctx.r8.u32 + ctx.r10.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82581270
	goto loc_82581270;
loc_82581200:
	// lwa r5,16(r11)
	ctx.r5.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 16));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// fmul f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 * ctx.f0.f64;
	// lfd f13,3712(r6)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r6.u32 + 3712);
	// srawi r7,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 31;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// subfc r10,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// adde r10,r6,r7
	temp.u8 = (ctx.r6.u32 + ctx.r7.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r6.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r9,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 31;
	// stb r10,109(r3)
	PPC_STORE_U8(ctx.r3.u32 + 109, ctx.r10.u8);
	// lwa r11,16(r11)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 16));
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r11,r11,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r11.u32;
	ctx.r11.u64 = ctx.r8.u64 - ctx.r11.u64;
	// adde r11,r10,r9
	temp.u8 = (ctx.r10.u32 + ctx.r9.u32 < ctx.r10.u32) | (ctx.r10.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82581270:
	// stb r11,108(r3)
	PPC_STORE_U8(ctx.r3.u32 + 108, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581278"))) PPC_WEAK_FUNC(sub_82581278);
PPC_FUNC_IMPL(__imp__sub_82581278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,92(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r7,20
	ctx.r7.s64 = 20;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// divw r8,r8,r7
	ctx.r8.s32 = (ctx.r7.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r8.s32 / ctx.r7.s32 : 0;
	// lfs f1,3368(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f1.f64 = double(temp.f32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwa r9,104(r3)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 104));
	// mulli r10,r10,20
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(20));
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwa r11,16(r11)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 16));
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825812E0"))) PPC_WEAK_FUNC(sub_825812E0);
PPC_FUNC_IMPL(__imp__sub_825812E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,40
	ctx.r9.s64 = 40;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// lfs f0,3648(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// divw r11,r11,r9
	ctx.r11.s32 = (ctx.r9.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r11.s32 / ctx.r9.s32 : 0;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581310"))) PPC_WEAK_FUNC(sub_82581310);
PPC_FUNC_IMPL(__imp__sub_82581310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581320"))) PPC_WEAK_FUNC(sub_82581320);
PPC_FUNC_IMPL(__imp__sub_82581320) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r10,-144
	ctx.r10.s64 = ctx.r10.s64 + -144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,27164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27164);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82581360
	if (!ctx.cr6.eq) goto loc_82581360;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,27164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 27164, ctx.r10.u32);
loc_82581360:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8247a9a8
	ctx.lr = 0x82581368;
	sub_8247A9A8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82581378
	if (ctx.cr0.eq) goto loc_82581378;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82581378;
	sub_823FD208(ctx, base);
loc_82581378:
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

__attribute__((alias("__imp__sub_82581398"))) PPC_WEAK_FUNC(sub_82581398);
PPC_FUNC_IMPL(__imp__sub_82581398) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r10,40
	ctx.r10.s64 = 40;
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// divw r3,r11,r10
	ctx.r3.s32 = (ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825813B0"))) PPC_WEAK_FUNC(sub_825813B0);
PPC_FUNC_IMPL(__imp__sub_825813B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r3,-8
	ctx.r30.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x825813D4;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x825813DC;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825813f8
	if (ctx.cr0.eq) goto loc_825813F8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,2332
	ctx.r11.s64 = ctx.r11.s64 + 2332;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825813fc
	goto loc_825813FC;
loc_825813F8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825813FC:
	// lis r11,-32036
	ctx.r11.s64 = -2099511296;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-28768
	ctx.r4.s64 = ctx.r11.s64 + -28768;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82581418;
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

__attribute__((alias("__imp__sub_82581430"))) PPC_WEAK_FUNC(sub_82581430);
PPC_FUNC_IMPL(__imp__sub_82581430) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r3,-8
	ctx.r30.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82581454;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x8258145C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82581478
	if (ctx.cr0.eq) goto loc_82581478;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,2340
	ctx.r11.s64 = ctx.r11.s64 + 2340;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8258147c
	goto loc_8258147C;
loc_82581478:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258147C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-4488
	ctx.r4.s64 = ctx.r11.s64 + -4488;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82581498;
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

__attribute__((alias("__imp__sub_825814B0"))) PPC_WEAK_FUNC(sub_825814B0);
PPC_FUNC_IMPL(__imp__sub_825814B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r3,-8
	ctx.r30.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x825814D4;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x825814DC;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825814f8
	if (ctx.cr0.eq) goto loc_825814F8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,2348
	ctx.r11.s64 = ctx.r11.s64 + 2348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825814fc
	goto loc_825814FC;
loc_825814F8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825814FC:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-14160
	ctx.r4.s64 = ctx.r11.s64 + -14160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82581518;
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

__attribute__((alias("__imp__sub_82581530"))) PPC_WEAK_FUNC(sub_82581530);
PPC_FUNC_IMPL(__imp__sub_82581530) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r3,-8
	ctx.r30.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82581554;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x8258155C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82581578
	if (ctx.cr0.eq) goto loc_82581578;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,2356
	ctx.r11.s64 = ctx.r11.s64 + 2356;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8258157c
	goto loc_8258157C;
loc_82581578:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258157C:
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-26552
	ctx.r4.s64 = ctx.r11.s64 + -26552;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82581598;
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

__attribute__((alias("__imp__sub_825815B0"))) PPC_WEAK_FUNC(sub_825815B0);
PPC_FUNC_IMPL(__imp__sub_825815B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r3,-8
	ctx.r30.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x825815D4;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x825815DC;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825815f8
	if (ctx.cr0.eq) goto loc_825815F8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,2364
	ctx.r11.s64 = ctx.r11.s64 + 2364;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825815fc
	goto loc_825815FC;
loc_825815F8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825815FC:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-16760
	ctx.r4.s64 = ctx.r11.s64 + -16760;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82581618;
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

__attribute__((alias("__imp__sub_82581630"))) PPC_WEAK_FUNC(sub_82581630);
PPC_FUNC_IMPL(__imp__sub_82581630) {
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
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lbz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lwz r11,160(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82581660;
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

__attribute__((alias("__imp__sub_82581670"))) PPC_WEAK_FUNC(sub_82581670);
PPC_FUNC_IMPL(__imp__sub_82581670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82581678;
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82581694;
	sub_823F51A8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823f5040
	ctx.lr = 0x8258169C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825816c4
	if (ctx.cr0.eq) goto loc_825816C4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,3308
	ctx.r11.s64 = ctx.r11.s64 + 3308;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stb r30,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r30.u8);
	// b 0x825816c8
	goto loc_825816C8;
loc_825816C4:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825816C8:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,20(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r11,5680
	ctx.r4.s64 = ctx.r11.s64 + 5680;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x825816E4;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825816F0"))) PPC_WEAK_FUNC(sub_825816F0);
PPC_FUNC_IMPL(__imp__sub_825816F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r3,-8
	ctx.r30.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82581714;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x8258171C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82581738
	if (ctx.cr0.eq) goto loc_82581738;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,2372
	ctx.r11.s64 = ctx.r11.s64 + 2372;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8258173c
	goto loc_8258173C;
loc_82581738:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258173C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-1952
	ctx.r4.s64 = ctx.r11.s64 + -1952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82581758;
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

__attribute__((alias("__imp__sub_82581770"))) PPC_WEAK_FUNC(sub_82581770);
PPC_FUNC_IMPL(__imp__sub_82581770) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r3,-8
	ctx.r30.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82581794;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x8258179C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825817b8
	if (ctx.cr0.eq) goto loc_825817B8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,2380
	ctx.r11.s64 = ctx.r11.s64 + 2380;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825817bc
	goto loc_825817BC;
loc_825817B8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825817BC:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-1792
	ctx.r4.s64 = ctx.r11.s64 + -1792;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x825817D8;
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

__attribute__((alias("__imp__sub_825817F0"))) PPC_WEAK_FUNC(sub_825817F0);
PPC_FUNC_IMPL(__imp__sub_825817F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r3,-8
	ctx.r30.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82581814;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x8258181C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82581838
	if (ctx.cr0.eq) goto loc_82581838;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,2388
	ctx.r11.s64 = ctx.r11.s64 + 2388;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8258183c
	goto loc_8258183C;
loc_82581838:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258183C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-1640
	ctx.r4.s64 = ctx.r11.s64 + -1640;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82581858;
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

__attribute__((alias("__imp__sub_82581870"))) PPC_WEAK_FUNC(sub_82581870);
PPC_FUNC_IMPL(__imp__sub_82581870) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r3,-8
	ctx.r30.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82581894;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x8258189C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825818b8
	if (ctx.cr0.eq) goto loc_825818B8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,2396
	ctx.r11.s64 = ctx.r11.s64 + 2396;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825818bc
	goto loc_825818BC;
loc_825818B8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825818BC:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-1624
	ctx.r4.s64 = ctx.r11.s64 + -1624;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x825818D8;
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

__attribute__((alias("__imp__sub_825818F0"))) PPC_WEAK_FUNC(sub_825818F0);
PPC_FUNC_IMPL(__imp__sub_825818F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r3,-8
	ctx.r30.s64 = ctx.r3.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82581914;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x8258191C;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82581938
	if (ctx.cr0.eq) goto loc_82581938;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,2404
	ctx.r11.s64 = ctx.r11.s64 + 2404;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8258193c
	goto loc_8258193C;
loc_82581938:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8258193C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-13248
	ctx.r4.s64 = ctx.r11.s64 + -13248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82581958;
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

__attribute__((alias("__imp__sub_82581970"))) PPC_WEAK_FUNC(sub_82581970);
PPC_FUNC_IMPL(__imp__sub_82581970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r11,r11,-84
	ctx.r11.s64 = ctx.r11.s64 + -84;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82c09c40
	ctx.lr = 0x82581998;
	sub_82C09C40(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,3324
	ctx.r11.s64 = ctx.r11.s64 + 3324;
	// addi r10,r10,3316
	ctx.r10.s64 = ctx.r10.s64 + 3316;
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

__attribute__((alias("__imp__sub_825819D0"))) PPC_WEAK_FUNC(sub_825819D0);
PPC_FUNC_IMPL(__imp__sub_825819D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
	// ld r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 4);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// ld r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825819F0"))) PPC_WEAK_FUNC(sub_825819F0);
PPC_FUNC_IMPL(__imp__sub_825819F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x825819F8;
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
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r6,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// bl 0x823f51a8
	ctx.lr = 0x82581A18;
	sub_823F51A8(ctx, base);
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x823f5040
	ctx.lr = 0x82581A20;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82581a4c
	if (ctx.cr0.eq) goto loc_82581A4C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,3428
	ctx.r11.s64 = ctx.r11.s64 + 3428;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a7d730
	ctx.lr = 0x82581A44;
	sub_82A7D730(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// b 0x82581a50
	goto loc_82581A50;
loc_82581A4C:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82581A50:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// addi r4,r11,6608
	ctx.r4.s64 = ctx.r11.s64 + 6608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82581A6C;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82581A78"))) PPC_WEAK_FUNC(sub_82581A78);
PPC_FUNC_IMPL(__imp__sub_82581A78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82581A90"))) PPC_WEAK_FUNC(sub_82581A90);
PPC_FUNC_IMPL(__imp__sub_82581A90) {
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
	ctx.lr = 0x82581ABC;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x82581AC4;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82581ae4
	if (ctx.cr0.eq) goto loc_82581AE4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f31,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,3436
	ctx.r11.s64 = ctx.r11.s64 + 3436;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82581ae8
	goto loc_82581AE8;
loc_82581AE4:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82581AE8:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,6776
	ctx.r4.s64 = ctx.r11.s64 + 6776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82581B04;
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

__attribute__((alias("__imp__sub_82581B20"))) PPC_WEAK_FUNC(sub_82581B20);
PPC_FUNC_IMPL(__imp__sub_82581B20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82581B38"))) PPC_WEAK_FUNC(sub_82581B38);
PPC_FUNC_IMPL(__imp__sub_82581B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82581B40;
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
	ctx.lr = 0x82581B58;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x82581B60;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82581b80
	if (ctx.cr0.eq) goto loc_82581B80;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,3444
	ctx.r11.s64 = ctx.r11.s64 + 3444;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82581b84
	goto loc_82581B84;
loc_82581B80:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82581B84:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,6944
	ctx.r4.s64 = ctx.r11.s64 + 6944;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82581BA0;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82581BA8"))) PPC_WEAK_FUNC(sub_82581BA8);
PPC_FUNC_IMPL(__imp__sub_82581BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82581BC0"))) PPC_WEAK_FUNC(sub_82581BC0);
PPC_FUNC_IMPL(__imp__sub_82581BC0) {
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
	ctx.lr = 0x82581BEC;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x82581BF4;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82581c14
	if (ctx.cr0.eq) goto loc_82581C14;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f31,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,3452
	ctx.r11.s64 = ctx.r11.s64 + 3452;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82581c18
	goto loc_82581C18;
loc_82581C14:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82581C18:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,7080
	ctx.r4.s64 = ctx.r11.s64 + 7080;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82581C34;
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

__attribute__((alias("__imp__sub_82581C50"))) PPC_WEAK_FUNC(sub_82581C50);
PPC_FUNC_IMPL(__imp__sub_82581C50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82581C68"))) PPC_WEAK_FUNC(sub_82581C68);
PPC_FUNC_IMPL(__imp__sub_82581C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82581C70;
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
	ctx.lr = 0x82581C88;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x82581C90;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82581cb0
	if (ctx.cr0.eq) goto loc_82581CB0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,3460
	ctx.r11.s64 = ctx.r11.s64 + 3460;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82581cb4
	goto loc_82581CB4;
loc_82581CB0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82581CB4:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,7248
	ctx.r4.s64 = ctx.r11.s64 + 7248;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82581CD0;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82581CD8"))) PPC_WEAK_FUNC(sub_82581CD8);
PPC_FUNC_IMPL(__imp__sub_82581CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82581CE0;
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
	ctx.lr = 0x82581CFC;
	sub_823F51A8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823f5040
	ctx.lr = 0x82581D04;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82581d28
	if (ctx.cr0.eq) goto loc_82581D28;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,3468
	ctx.r11.s64 = ctx.r11.s64 + 3468;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82581d2c
	goto loc_82581D2C;
loc_82581D28:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82581D2C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r11,11552
	ctx.r4.s64 = ctx.r11.s64 + 11552;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82581D48;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82581D50"))) PPC_WEAK_FUNC(sub_82581D50);
PPC_FUNC_IMPL(__imp__sub_82581D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82581D58;
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
	ctx.lr = 0x82581D70;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x82581D78;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82581d98
	if (ctx.cr0.eq) goto loc_82581D98;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,3476
	ctx.r11.s64 = ctx.r11.s64 + 3476;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82581d9c
	goto loc_82581D9C;
loc_82581D98:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82581D9C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,11696
	ctx.r4.s64 = ctx.r11.s64 + 11696;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82581DB8;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82581DC0"))) PPC_WEAK_FUNC(sub_82581DC0);
PPC_FUNC_IMPL(__imp__sub_82581DC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82581DE0"))) PPC_WEAK_FUNC(sub_82581DE0);
PPC_FUNC_IMPL(__imp__sub_82581DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82581DE8;
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
	ctx.lr = 0x82581E08;
	sub_823F51A8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x823f5040
	ctx.lr = 0x82581E10;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82581e38
	if (ctx.cr0.eq) goto loc_82581E38;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,3484
	ctx.r11.s64 = ctx.r11.s64 + 3484;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82581e3c
	goto loc_82581E3C;
loc_82581E38:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82581E3C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,12(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r11,7616
	ctx.r4.s64 = ctx.r11.s64 + 7616;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82581E58;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82581E60"))) PPC_WEAK_FUNC(sub_82581E60);
PPC_FUNC_IMPL(__imp__sub_82581E60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82581E78"))) PPC_WEAK_FUNC(sub_82581E78);
PPC_FUNC_IMPL(__imp__sub_82581E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82581E80;
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
	ctx.lr = 0x82581E98;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x82581EA0;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82581ec0
	if (ctx.cr0.eq) goto loc_82581EC0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,3492
	ctx.r11.s64 = ctx.r11.s64 + 3492;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82581ec4
	goto loc_82581EC4;
loc_82581EC0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82581EC4:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,7776
	ctx.r4.s64 = ctx.r11.s64 + 7776;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82581EE0;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82581EE8"))) PPC_WEAK_FUNC(sub_82581EE8);
PPC_FUNC_IMPL(__imp__sub_82581EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f2,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lfs f1,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,96(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82581F08"))) PPC_WEAK_FUNC(sub_82581F08);
PPC_FUNC_IMPL(__imp__sub_82581F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82581F10;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
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
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x82581F38;
	sub_823F51A8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x823f5040
	ctx.lr = 0x82581F40;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82581f68
	if (ctx.cr0.eq) goto loc_82581F68;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f31,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f30,12(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r11,r11,3500
	ctx.r11.s64 = ctx.r11.s64 + 3500;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82581f6c
	goto loc_82581F6C;
loc_82581F68:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82581F6C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r11,7912
	ctx.r4.s64 = ctx.r11.s64 + 7912;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82581F88;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82581F98"))) PPC_WEAK_FUNC(sub_82581F98);
PPC_FUNC_IMPL(__imp__sub_82581F98) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82581FBC;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x82581FC4;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82581fe0
	if (ctx.cr0.eq) goto loc_82581FE0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,3508
	ctx.r11.s64 = ctx.r11.s64 + 3508;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82581fe4
	goto loc_82581FE4;
loc_82581FE0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82581FE4:
	// lis r11,-32036
	ctx.r11.s64 = -2099511296;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-29960
	ctx.r4.s64 = ctx.r11.s64 + -29960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82582000;
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

__attribute__((alias("__imp__sub_82582018"))) PPC_WEAK_FUNC(sub_82582018);
PPC_FUNC_IMPL(__imp__sub_82582018) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8258203C;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x82582044;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82582060
	if (ctx.cr0.eq) goto loc_82582060;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,3516
	ctx.r11.s64 = ctx.r11.s64 + 3516;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82582064
	goto loc_82582064;
loc_82582060:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82582064:
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,15184
	ctx.r4.s64 = ctx.r11.s64 + 15184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82582080;
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

__attribute__((alias("__imp__sub_82582098"))) PPC_WEAK_FUNC(sub_82582098);
PPC_FUNC_IMPL(__imp__sub_82582098) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x825820BC;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x825820C4;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825820e0
	if (ctx.cr0.eq) goto loc_825820E0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,3524
	ctx.r11.s64 = ctx.r11.s64 + 3524;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825820e4
	goto loc_825820E4;
loc_825820E0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825820E4:
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
	ctx.lr = 0x82582100;
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

__attribute__((alias("__imp__sub_82582118"))) PPC_WEAK_FUNC(sub_82582118);
PPC_FUNC_IMPL(__imp__sub_82582118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// subf r7,r4,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r4.u64;
	// subf r10,r3,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r3.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// addi r11,r8,8
	ctx.r11.s64 = ctx.r8.s64 + 8;
	// addi r9,r9,18884
	ctx.r9.s64 = ctx.r9.s64 + 18884;
loc_82582148:
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,12(r10)
	ea = 12 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r7,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bdnz 0x82582148
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82582148;
	// lwz r10,52(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// addi r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 + 52;
	// addi r11,r4,52
	ctx.r11.s64 = ctx.r4.s64 + 52;
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// lfs f0,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// lwz r11,76(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825821A8"))) PPC_WEAK_FUNC(sub_825821A8);
PPC_FUNC_IMPL(__imp__sub_825821A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82c09c40
	ctx.lr = 0x825821D0;
	sub_82C09C40(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,3540
	ctx.r11.s64 = ctx.r11.s64 + 3540;
	// addi r10,r10,3532
	ctx.r10.s64 = ctx.r10.s64 + 3532;
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

__attribute__((alias("__imp__sub_82582208"))) PPC_WEAK_FUNC(sub_82582208);
PPC_FUNC_IMPL(__imp__sub_82582208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82582210;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
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
	// li r5,120
	ctx.r5.s64 = 120;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82a7d730
	ctx.lr = 0x82582234;
	sub_82A7D730(ctx, base);
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
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
	ctx.lr = 0x82582260;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82582268"))) PPC_WEAK_FUNC(sub_82582268);
PPC_FUNC_IMPL(__imp__sub_82582268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82582270;
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
	ctx.lr = 0x825822A0;
	sub_823F51A8(ctx, base);
	// li r4,192
	ctx.r4.s64 = 192;
	// bl 0x823f5040
	ctx.lr = 0x825822A8;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825822d4
	if (ctx.cr0.eq) goto loc_825822D4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,3604
	ctx.r11.s64 = ctx.r11.s64 + 3604;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,176
	ctx.r5.s64 = 176;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a7d730
	ctx.lr = 0x825822CC;
	sub_82A7D730(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// b 0x825822d8
	goto loc_825822D8;
loc_825822D4:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825822D8:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,192
	ctx.r6.s64 = 192;
	// addi r4,r11,8712
	ctx.r4.s64 = ctx.r11.s64 + 8712;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x825822F4;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82582300"))) PPC_WEAK_FUNC(sub_82582300);
PPC_FUNC_IMPL(__imp__sub_82582300) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82582388
	sub_82582388(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82582308"))) PPC_WEAK_FUNC(sub_82582308);
PPC_FUNC_IMPL(__imp__sub_82582308) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8258232C;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x82582334;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82582350
	if (ctx.cr0.eq) goto loc_82582350;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,3612
	ctx.r11.s64 = ctx.r11.s64 + 3612;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82582354
	goto loc_82582354;
loc_82582350:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82582354:
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,15184
	ctx.r4.s64 = ctx.r11.s64 + 15184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82582370;
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

__attribute__((alias("__imp__sub_82582388"))) PPC_WEAK_FUNC(sub_82582388);
PPC_FUNC_IMPL(__imp__sub_82582388) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x825823AC;
	sub_82C09C68(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8247a9a8
	ctx.lr = 0x825823C0;
	sub_8247A9A8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825823d0
	if (ctx.cr0.eq) goto loc_825823D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x825823D0;
	sub_823FD208(ctx, base);
loc_825823D0:
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

__attribute__((alias("__imp__sub_825823F0"))) PPC_WEAK_FUNC(sub_825823F0);
PPC_FUNC_IMPL(__imp__sub_825823F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82c09c40
	ctx.lr = 0x82582418;
	sub_82C09C40(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,3628
	ctx.r11.s64 = ctx.r11.s64 + 3628;
	// addi r10,r10,3620
	ctx.r10.s64 = ctx.r10.s64 + 3620;
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

__attribute__((alias("__imp__sub_82582450"))) PPC_WEAK_FUNC(sub_82582450);
PPC_FUNC_IMPL(__imp__sub_82582450) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x825826d8
	sub_825826D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82582458"))) PPC_WEAK_FUNC(sub_82582458);
PPC_FUNC_IMPL(__imp__sub_82582458) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8258247C;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x82582484;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825824a0
	if (ctx.cr0.eq) goto loc_825824A0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,3684
	ctx.r11.s64 = ctx.r11.s64 + 3684;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825824a4
	goto loc_825824A4;
loc_825824A0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825824A4:
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,15008
	ctx.r4.s64 = ctx.r11.s64 + 15008;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x825824C0;
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

__attribute__((alias("__imp__sub_825824D8"))) PPC_WEAK_FUNC(sub_825824D8);
PPC_FUNC_IMPL(__imp__sub_825824D8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x825824FC;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x82582504;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82582520
	if (ctx.cr0.eq) goto loc_82582520;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,3692
	ctx.r11.s64 = ctx.r11.s64 + 3692;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82582524
	goto loc_82582524;
loc_82582520:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82582524:
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-26552
	ctx.r4.s64 = ctx.r11.s64 + -26552;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82582540;
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

__attribute__((alias("__imp__sub_82582558"))) PPC_WEAK_FUNC(sub_82582558);
PPC_FUNC_IMPL(__imp__sub_82582558) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8258257C;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x82582584;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825825a0
	if (ctx.cr0.eq) goto loc_825825A0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,3700
	ctx.r11.s64 = ctx.r11.s64 + 3700;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825825a4
	goto loc_825825A4;
loc_825825A0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825825A4:
	// lis r11,-31987
	ctx.r11.s64 = -2096300032;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-25056
	ctx.r4.s64 = ctx.r11.s64 + -25056;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x825825C0;
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

__attribute__((alias("__imp__sub_825825D8"))) PPC_WEAK_FUNC(sub_825825D8);
PPC_FUNC_IMPL(__imp__sub_825825D8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x825825FC;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x82582604;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82582620
	if (ctx.cr0.eq) goto loc_82582620;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,3708
	ctx.r11.s64 = ctx.r11.s64 + 3708;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82582624
	goto loc_82582624;
loc_82582620:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82582624:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-16760
	ctx.r4.s64 = ctx.r11.s64 + -16760;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82582640;
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

__attribute__((alias("__imp__sub_82582658"))) PPC_WEAK_FUNC(sub_82582658);
PPC_FUNC_IMPL(__imp__sub_82582658) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8258267C;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x82582684;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825826a0
	if (ctx.cr0.eq) goto loc_825826A0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,3716
	ctx.r11.s64 = ctx.r11.s64 + 3716;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825826a4
	goto loc_825826A4;
loc_825826A0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825826A4:
	// lis r11,-32036
	ctx.r11.s64 = -2099511296;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-29960
	ctx.r4.s64 = ctx.r11.s64 + -29960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x825826C0;
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

__attribute__((alias("__imp__sub_825826D8"))) PPC_WEAK_FUNC(sub_825826D8);
PPC_FUNC_IMPL(__imp__sub_825826D8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x825826FC;
	sub_82C09C68(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8247a9a8
	ctx.lr = 0x82582710;
	sub_8247A9A8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82582720
	if (ctx.cr0.eq) goto loc_82582720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82582720;
	sub_823FD208(ctx, base);
loc_82582720:
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

__attribute__((alias("__imp__sub_82582740"))) PPC_WEAK_FUNC(sub_82582740);
PPC_FUNC_IMPL(__imp__sub_82582740) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x8257c1d0
	ctx.lr = 0x82582760;
	sub_8257C1D0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82582770
	if (ctx.cr0.eq) goto loc_82582770;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82582770;
	sub_823FD208(ctx, base);
loc_82582770:
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

__attribute__((alias("__imp__sub_82582790"))) PPC_WEAK_FUNC(sub_82582790);
PPC_FUNC_IMPL(__imp__sub_82582790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,812
	ctx.r11.s64 = ctx.r11.s64 + 812;
	// addi r10,r10,-708
	ctx.r10.s64 = ctx.r10.s64 + -708;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82c09c40
	ctx.lr = 0x825827C4;
	sub_82C09C40(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r11,r11,13724
	ctx.r11.s64 = ctx.r11.s64 + 13724;
	// addi r10,r10,4052
	ctx.r10.s64 = ctx.r10.s64 + 4052;
	// addi r9,r9,4044
	ctx.r9.s64 = ctx.r9.s64 + 4044;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82582800"))) PPC_WEAK_FUNC(sub_82582800);
PPC_FUNC_IMPL(__imp__sub_82582800) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82582818"))) PPC_WEAK_FUNC(sub_82582818);
PPC_FUNC_IMPL(__imp__sub_82582818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82582820;
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
	ctx.lr = 0x82582838;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x82582840;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82582860
	if (ctx.cr0.eq) goto loc_82582860;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,4128
	ctx.r11.s64 = ctx.r11.s64 + 4128;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82582864
	goto loc_82582864;
loc_82582860:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82582864:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,10240
	ctx.r4.s64 = ctx.r11.s64 + 10240;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82582880;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82582888"))) PPC_WEAK_FUNC(sub_82582888);
PPC_FUNC_IMPL(__imp__sub_82582888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82582890;
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
	ctx.lr = 0x825828A8;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x825828B0;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825828d0
	if (ctx.cr0.eq) goto loc_825828D0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,4136
	ctx.r11.s64 = ctx.r11.s64 + 4136;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825828d4
	goto loc_825828D4;
loc_825828D0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825828D4:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-14776
	ctx.r4.s64 = ctx.r11.s64 + -14776;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x825828F0;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825828F8"))) PPC_WEAK_FUNC(sub_825828F8);
PPC_FUNC_IMPL(__imp__sub_825828F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82582900;
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
	ctx.lr = 0x82582920;
	sub_823F51A8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823f5040
	ctx.lr = 0x82582928;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258294c
	if (ctx.cr0.eq) goto loc_8258294C;
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
	// addi r11,r11,4144
	ctx.r11.s64 = ctx.r11.s64 + 4144;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82582950
	goto loc_82582950;
loc_8258294C:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82582950:
	// lis r11,-32184
	ctx.r11.s64 = -2109210624;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r11,-23072
	ctx.r4.s64 = ctx.r11.s64 + -23072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8258296C;
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

__attribute__((alias("__imp__sub_82582978"))) PPC_WEAK_FUNC(sub_82582978);
PPC_FUNC_IMPL(__imp__sub_82582978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82582980;
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
	ctx.lr = 0x8258299C;
	sub_823F51A8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823f5040
	ctx.lr = 0x825829A4;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825829c8
	if (ctx.cr0.eq) goto loc_825829C8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,4152
	ctx.r11.s64 = ctx.r11.s64 + 4152;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825829cc
	goto loc_825829CC;
loc_825829C8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_825829CC:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r11,32232
	ctx.r4.s64 = ctx.r11.s64 + 32232;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x825829E8;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825829F0"))) PPC_WEAK_FUNC(sub_825829F0);
PPC_FUNC_IMPL(__imp__sub_825829F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82582A08"))) PPC_WEAK_FUNC(sub_82582A08);
PPC_FUNC_IMPL(__imp__sub_82582A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82582A10;
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
	ctx.lr = 0x82582A2C;
	sub_823F51A8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823f5040
	ctx.lr = 0x82582A34;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82582a58
	if (ctx.cr0.eq) goto loc_82582A58;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,4160
	ctx.r11.s64 = ctx.r11.s64 + 4160;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82582a5c
	goto loc_82582A5C;
loc_82582A58:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82582A5C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r11,10736
	ctx.r4.s64 = ctx.r11.s64 + 10736;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82582A78;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82582A80"))) PPC_WEAK_FUNC(sub_82582A80);
PPC_FUNC_IMPL(__imp__sub_82582A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82582A88;
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
	ctx.lr = 0x82582AA8;
	sub_823F51A8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x823f5040
	ctx.lr = 0x82582AB0;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82582ad8
	if (ctx.cr0.eq) goto loc_82582AD8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,4168
	ctx.r11.s64 = ctx.r11.s64 + 4168;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82582adc
	goto loc_82582ADC;
loc_82582AD8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82582ADC:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r11,32256
	ctx.r4.s64 = ctx.r11.s64 + 32256;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82582AF8;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82582B00"))) PPC_WEAK_FUNC(sub_82582B00);
PPC_FUNC_IMPL(__imp__sub_82582B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82582B08;
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
	ctx.lr = 0x82582B28;
	sub_823F51A8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x823f5040
	ctx.lr = 0x82582B30;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82582b58
	if (ctx.cr0.eq) goto loc_82582B58;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,4176
	ctx.r11.s64 = ctx.r11.s64 + 4176;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82582b5c
	goto loc_82582B5C;
loc_82582B58:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82582B5C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,16(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r11,32416
	ctx.r4.s64 = ctx.r11.s64 + 32416;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82582B78;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82582B80"))) PPC_WEAK_FUNC(sub_82582B80);
PPC_FUNC_IMPL(__imp__sub_82582B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82582B88;
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
	ctx.lr = 0x82582BA0;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x82582BA8;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82582bc8
	if (ctx.cr0.eq) goto loc_82582BC8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,4184
	ctx.r11.s64 = ctx.r11.s64 + 4184;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82582bcc
	goto loc_82582BCC;
loc_82582BC8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82582BCC:
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-26264
	ctx.r4.s64 = ctx.r11.s64 + -26264;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82582BE8;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82582BF0"))) PPC_WEAK_FUNC(sub_82582BF0);
PPC_FUNC_IMPL(__imp__sub_82582BF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

