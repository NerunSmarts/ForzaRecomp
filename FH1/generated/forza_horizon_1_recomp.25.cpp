#include "forza_horizon_1_init.h"

__attribute__((alias("__imp__sub_82669F08"))) PPC_WEAK_FUNC(sub_82669F08);
PPC_FUNC_IMPL(__imp__sub_82669F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82669F10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r10,-28872
	ctx.r4.s64 = ctx.r10.s64 + -28872;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669F34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82c0f6c0
	ctx.lr = 0x82669F40;
	sub_82C0F6C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82669f64
	if (ctx.cr0.eq) goto loc_82669F64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826a82a0
	ctx.lr = 0x82669F50;
	sub_826A82A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8264eea0
	ctx.lr = 0x82669F60;
	sub_8264EEA0(ctx, base);
	// b 0x82669f68
	goto loc_82669F68;
loc_82669F64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82669F68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82669F70"))) PPC_WEAK_FUNC(sub_82669F70);
PPC_FUNC_IMPL(__imp__sub_82669F70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82669F80"))) PPC_WEAK_FUNC(sub_82669F80);
PPC_FUNC_IMPL(__imp__sub_82669F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82669F88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,488(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 488);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266a05c
	if (ctx.cr6.eq) goto loc_8266A05C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669FB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266a03c
	if (ctx.cr0.eq) goto loc_8266A03C;
loc_82669FC0:
	// lwz r3,488(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 488);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669FDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8266a000
	if (ctx.cr6.eq) goto loc_8266A000;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A000;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266A000:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A018;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,488(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 488);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82669fc0
	if (ctx.cr6.lt) goto loc_82669FC0;
loc_8266A03C:
	// lwz r3,488(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 488);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8266a05c
	if (ctx.cr6.eq) goto loc_8266A05C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A05C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266A05C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266A068"))) PPC_WEAK_FUNC(sub_8266A068);
PPC_FUNC_IMPL(__imp__sub_8266A068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// lwz r4,20312(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20312);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A094;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A0B0;
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

__attribute__((alias("__imp__sub_8266A0C8"))) PPC_WEAK_FUNC(sub_8266A0C8);
PPC_FUNC_IMPL(__imp__sub_8266A0C8) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r10,27200
	ctx.r10.s64 = ctx.r10.s64 + 27200;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r9,472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 472, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82e66e98
	ctx.lr = 0x8266A100;
	sub_82E66E98(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266A110"))) PPC_WEAK_FUNC(sub_8266A110);
PPC_FUNC_IMPL(__imp__sub_8266A110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddf4
	ctx.lr = 0x8266A118;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r31,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r3,488(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 488);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq 0x8266a224
	if (ctx.cr0.eq) goto loc_8266A224;
loc_8266A168:
	// lwz r3,488(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 488);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A19C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A1C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A1D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// beq cr6,0x8266a214
	if (ctx.cr6.eq) goto loc_8266A214;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// beq cr6,0x8266a204
	if (ctx.cr6.eq) goto loc_8266A204;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// beq cr6,0x8266a1fc
	if (ctx.cr6.eq) goto loc_8266A1FC;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// bne cr6,0x8266a218
	if (!ctx.cr6.eq) goto loc_8266A218;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// b 0x8266a218
	goto loc_8266A218;
loc_8266A1FC:
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// b 0x8266a218
	goto loc_8266A218;
loc_8266A204:
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r11.u8);
	// b 0x8266a218
	goto loc_8266A218;
loc_8266A214:
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
loc_8266A218:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r24
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x8266a168
	if (ctx.cr6.lt) goto loc_8266A168;
loc_8266A224:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266A230"))) PPC_WEAK_FUNC(sub_8266A230);
PPC_FUNC_IMPL(__imp__sub_8266A230) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8266a248
	if (ctx.cr6.eq) goto loc_8266A248;
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8266a24c
	goto loc_8266A24C;
loc_8266A248:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8266A24C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266a288
	if (ctx.cr0.eq) goto loc_8266A288;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lwz r10,476(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 476);
	// addi r11,r11,-6904
	ctx.r11.s64 = ctx.r11.s64 + -6904;
	// mulli r10,r10,40
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(40));
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8266a288
	if (ctx.cr6.eq) goto loc_8266A288;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8266A288:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 472, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266A298"))) PPC_WEAK_FUNC(sub_8266A298);
PPC_FUNC_IMPL(__imp__sub_8266A298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,484(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 484);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8266a2dc
	if (ctx.cr6.eq) goto loc_8266A2DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// li r4,10004
	ctx.r4.s64 = 10004;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A2D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r11.u32);
loc_8266A2DC:
	// addis r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 262144;
	// addi r30,r30,7868
	ctx.r30.s64 = ctx.r30.s64 + 7868;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8266a30c
	if (ctx.cr6.eq) goto loc_8266A30C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x827d9e40
	ctx.lr = 0x8266A2FC;
	sub_827D9E40(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x827d9e40
	ctx.lr = 0x8266A30C;
	sub_827D9E40(ctx, base);
loc_8266A30C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266A328"))) PPC_WEAK_FUNC(sub_8266A328);
PPC_FUNC_IMPL(__imp__sub_8266A328) {
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
	// bl 0x8266a298
	ctx.lr = 0x8266A340;
	sub_8266A298(ctx, base);
	// lis r11,4
	ctx.r11.s64 = 262144;
	// li r9,6
	ctx.r9.s64 = 6;
	// ori r11,r11,8108
	ctx.r11.u64 = ctx.r11.u64 | 8108;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r9,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r9.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r10,27200
	ctx.r10.s64 = ctx.r10.s64 + 27200;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82e66e98
	ctx.lr = 0x8266A380;
	sub_82E66E98(ctx, base);
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

__attribute__((alias("__imp__sub_8266A398"))) PPC_WEAK_FUNC(sub_8266A398);
PPC_FUNC_IMPL(__imp__sub_8266A398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,4
	ctx.r11.s64 = 262144;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,8109
	ctx.r11.u64 = ctx.r11.u64 | 8109;
	// stbx r10,r3,r11
	PPC_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266A3B0"))) PPC_WEAK_FUNC(sub_8266A3B0);
PPC_FUNC_IMPL(__imp__sub_8266A3B0) {
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
	// lwz r11,472(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8266a3d8
	if (ctx.cr6.eq) goto loc_8266A3D8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8266a3d8
	if (ctx.cr6.eq) goto loc_8266A3D8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8266a40c
	if (!ctx.cr6.eq) goto loc_8266A40C;
loc_8266A3D8:
	// lwz r11,520(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266a40c
	if (ctx.cr6.eq) goto loc_8266A40C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r11,108
	ctx.r3.s64 = ctx.r11.s64 + 108;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A3FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266a40c
	if (ctx.cr0.eq) goto loc_8266A40C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82874b20
	ctx.lr = 0x8266A40C;
	sub_82874B20(ctx, base);
loc_8266A40C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266A420"))) PPC_WEAK_FUNC(sub_8266A420);
PPC_FUNC_IMPL(__imp__sub_8266A420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,472(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8266a48c
	if (!ctx.cr6.eq) goto loc_8266A48C;
	// bl 0x8264d728
	ctx.lr = 0x8266A444;
	sub_8264D728(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8266a478
	if (!ctx.cr0.eq) goto loc_8266A478;
	// bl 0x82473ff8
	ctx.lr = 0x8266A450;
	sub_82473FF8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,268(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,9
	ctx.r5.s64 = 9;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A474;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8266a48c
	goto loc_8266A48C;
loc_8266A478:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r5,7
	ctx.r5.s64 = 7;
	// stw r11,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826a8400
	ctx.lr = 0x8266A48C;
	sub_826A8400(ctx, base);
loc_8266A48C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266A4A0"))) PPC_WEAK_FUNC(sub_8266A4A0);
PPC_FUNC_IMPL(__imp__sub_8266A4A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stb r11,564(r3)
	PPC_STORE_U8(ctx.r3.u32 + 564, ctx.r11.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r10,-29440
	ctx.r3.s64 = ctx.r10.s64 + -29440;
	// bl 0x82e73af8
	ctx.lr = 0x8266A4C8;
	sub_82E73AF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e5cfd8
	ctx.lr = 0x8266A4D4;
	sub_82E5CFD8(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,19276(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19276);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A4F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A50C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,516(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A528;
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

__attribute__((alias("__imp__sub_8266A540"))) PPC_WEAK_FUNC(sub_8266A540);
PPC_FUNC_IMPL(__imp__sub_8266A540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stb r11,564(r3)
	PPC_STORE_U8(ctx.r3.u32 + 564, ctx.r11.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r10,-29416
	ctx.r3.s64 = ctx.r10.s64 + -29416;
	// bl 0x82e73af8
	ctx.lr = 0x8266A568;
	sub_82E73AF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e5cfd8
	ctx.lr = 0x8266A574;
	sub_82E5CFD8(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,19276(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19276);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A590;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A5AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,516(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A5C8;
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

__attribute__((alias("__imp__sub_8266A5E0"))) PPC_WEAK_FUNC(sub_8266A5E0);
PPC_FUNC_IMPL(__imp__sub_8266A5E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,6
	ctx.r11.s64 = 6;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-31925
	ctx.r9.s64 = -2092236800;
	// stw r11,472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 472, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,120(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// lwz r4,20312(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20312);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82473ff8
	ctx.lr = 0x8266A618;
	sub_82473FF8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,268(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A62C;
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

__attribute__((alias("__imp__sub_8266A640"))) PPC_WEAK_FUNC(sub_8266A640);
PPC_FUNC_IMPL(__imp__sub_8266A640) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,572(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8266a658
	if (!ctx.cr6.eq) goto loc_8266A658;
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8266a688
	if (ctx.cr6.eq) goto loc_8266A688;
loc_8266A658:
	// lwz r11,576(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 576);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8266a670
	if (!ctx.cr6.eq) goto loc_8266A670;
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8266a688
	if (ctx.cr6.eq) goto loc_8266A688;
loc_8266A670:
	// lwz r11,580(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 580);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8266a690
	if (!ctx.cr6.eq) goto loc_8266A690;
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8266a690
	if (!ctx.cr6.eq) goto loc_8266A690;
loc_8266A688:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8266a694
	goto loc_8266A694;
loc_8266A690:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8266A694:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266A6A0"))) PPC_WEAK_FUNC(sub_8266A6A0);
PPC_FUNC_IMPL(__imp__sub_8266A6A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,520(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266a704
	if (ctx.cr6.eq) goto loc_8266A704;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r11,108
	ctx.r3.s64 = ctx.r11.s64 + 108;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A6E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8266a704
	if (!ctx.cr6.eq) goto loc_8266A704;
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,108
	ctx.r3.s64 = ctx.r11.s64 + 108;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266A704:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828647c0
	ctx.lr = 0x8266A70C;
	sub_828647C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266A728"))) PPC_WEAK_FUNC(sub_8266A728);
PPC_FUNC_IMPL(__imp__sub_8266A728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,520(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,108
	ctx.r3.s64 = ctx.r11.s64 + 108;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A768;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8266a784
	if (!ctx.cr6.eq) goto loc_8266A784;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8266a784
	if (!ctx.cr6.gt) goto loc_8266A784;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
loc_8266A784:
	// addi r3,r31,488
	ctx.r3.s64 = ctx.r31.s64 + 488;
	// bl 0x82e78bf0
	ctx.lr = 0x8266A78C;
	sub_82E78BF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266A7A0"))) PPC_WEAK_FUNC(sub_8266A7A0);
PPC_FUNC_IMPL(__imp__sub_8266A7A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,468(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,468(r3)
	PPC_STORE_U32(ctx.r3.u32 + 468, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266A7C0"))) PPC_WEAK_FUNC(sub_8266A7C0);
PPC_FUNC_IMPL(__imp__sub_8266A7C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,472(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bne cr6,0x8266a7dc
	if (!ctx.cr6.eq) goto loc_8266A7DC;
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8266A7DC:
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8266A7E8"))) PPC_WEAK_FUNC(sub_8266A7E8);
PPC_FUNC_IMPL(__imp__sub_8266A7E8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// bge cr6,0x8266a82c
	if (!ctx.cr6.lt) goto loc_8266A82C;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-5952
	ctx.r11.s64 = ctx.r11.s64 + -5952;
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8266a82c
	if (ctx.cr0.eq) goto loc_8266A82C;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8266a82c
	if (ctx.cr6.eq) goto loc_8266A82C;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8266A82C:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 472, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266A838"))) PPC_WEAK_FUNC(sub_8266A838);
PPC_FUNC_IMPL(__imp__sub_8266A838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r3,376
	ctx.r5.s64 = ctx.r3.s64 + 376;
	// addi r4,r11,-29376
	ctx.r4.s64 = ctx.r11.s64 + -29376;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e5fc28
	ctx.lr = 0x8266A85C;
	sub_82E5FC28(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r31,388
	ctx.r5.s64 = ctx.r31.s64 + 388;
	// addi r4,r11,-29392
	ctx.r4.s64 = ctx.r11.s64 + -29392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e5fc28
	ctx.lr = 0x8266A870;
	sub_82E5FC28(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266A888"))) PPC_WEAK_FUNC(sub_8266A888);
PPC_FUNC_IMPL(__imp__sub_8266A888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-29344
	ctx.r11.s64 = ctx.r11.s64 + -29344;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266A8A0"))) PPC_WEAK_FUNC(sub_8266A8A0);
PPC_FUNC_IMPL(__imp__sub_8266A8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-29344
	ctx.r11.s64 = ctx.r11.s64 + -29344;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266A8B0"))) PPC_WEAK_FUNC(sub_8266A8B0);
PPC_FUNC_IMPL(__imp__sub_8266A8B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82648b60
	ctx.lr = 0x8266A8C8;
	sub_82648B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266a8d8
	if (ctx.cr0.eq) goto loc_8266A8D8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82649348
	ctx.lr = 0x8266A8D8;
	sub_82649348(ctx, base);
loc_8266A8D8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266A8F8"))) PPC_WEAK_FUNC(sub_8266A8F8);
PPC_FUNC_IMPL(__imp__sub_8266A8F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,3048(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3048);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266A900"))) PPC_WEAK_FUNC(sub_8266A900);
PPC_FUNC_IMPL(__imp__sub_8266A900) {
	PPC_FUNC_PROLOGUE();
	// stw r4,3188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3188, ctx.r4.u32);
	// stb r5,3192(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3192, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266A910"))) PPC_WEAK_FUNC(sub_8266A910);
PPC_FUNC_IMPL(__imp__sub_8266A910) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,3122(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3122);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8266a924
	if (ctx.cr0.eq) goto loc_8266A924;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8266A924:
	// lbz r11,3121(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3121);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266A938"))) PPC_WEAK_FUNC(sub_8266A938);
PPC_FUNC_IMPL(__imp__sub_8266A938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r4,7456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7456);
	// b 0x82e5cfd8
	sub_82E5CFD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266A948"))) PPC_WEAK_FUNC(sub_8266A948);
PPC_FUNC_IMPL(__imp__sub_8266A948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r4,7888(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7888);
	// b 0x82e5cfd8
	sub_82E5CFD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266A958"))) PPC_WEAK_FUNC(sub_8266A958);
PPC_FUNC_IMPL(__imp__sub_8266A958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r4,7708(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7708);
	// b 0x82e5cfd8
	sub_82E5CFD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266A968"))) PPC_WEAK_FUNC(sub_8266A968);
PPC_FUNC_IMPL(__imp__sub_8266A968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266A970;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82e73b88
	ctx.lr = 0x8266A988;
	sub_82E73B88(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,26888
	ctx.r11.s64 = ctx.r11.s64 + 26888;
	// addi r4,r10,-29328
	ctx.r4.s64 = ctx.r10.s64 + -29328;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e5fc28
	ctx.lr = 0x8266A9A8;
	sub_82E5FC28(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e73e90
	ctx.lr = 0x8266A9B8;
	sub_82E73E90(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r30
	PPC_STORE_U32(ctx.r30.u32, ctx.f0.u32);
	// fctidz f0,f13
	ctx.f0.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f0,0,r29
	PPC_STORE_U32(ctx.r29.u32, ctx.f0.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e73ba8
	ctx.lr = 0x8266A9D8;
	sub_82E73BA8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266A9E0"))) PPC_WEAK_FUNC(sub_8266A9E0);
PPC_FUNC_IMPL(__imp__sub_8266A9E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266A9E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826a0ed8
	ctx.lr = 0x8266A9F4;
	sub_826A0ED8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r29,r11,11980
	ctx.r29.s64 = ctx.r11.s64 + 11980;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x824e4bb8
	ctx.lr = 0x8266AA0C;
	sub_824E4BB8(ctx, base);
	// bl 0x82bb0098
	ctx.lr = 0x8266AA10;
	sub_82BB0098(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c07598
	ctx.lr = 0x8266AA1C;
	sub_82C07598(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// beq cr6,0x8266aa64
	if (ctx.cr6.eq) goto loc_8266AA64;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// beq cr6,0x8266aa58
	if (ctx.cr6.eq) goto loc_8266AA58;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8266aa4c
	if (ctx.cr6.eq) goto loc_8266AA4C;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r4,7460(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7460);
	// b 0x8266aa70
	goto loc_8266AA70;
loc_8266AA4C:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r4,7428(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7428);
	// b 0x8266aa70
	goto loc_8266AA70;
loc_8266AA58:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r4,7396(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7396);
	// b 0x8266aa6c
	goto loc_8266AA6C;
loc_8266AA64:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r4,7684(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7684);
loc_8266AA6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8266AA70:
	// bl 0x82e5cfd8
	ctx.lr = 0x8266AA74;
	sub_82E5CFD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c07ac0
	ctx.lr = 0x8266AA80;
	sub_82C07AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826a0ed8
	ctx.lr = 0x8266AA88;
	sub_826A0ED8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x824f2768
	ctx.lr = 0x8266AA94;
	sub_824F2768(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c07598
	ctx.lr = 0x8266AA9C;
	sub_82C07598(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266AAA8"))) PPC_WEAK_FUNC(sub_8266AAA8);
PPC_FUNC_IMPL(__imp__sub_8266AAA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,7764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7764);
	// bl 0x82e5cfd8
	ctx.lr = 0x8266AAC8;
	sub_82E5CFD8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,3077(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3077, ctx.r11.u8);
	// stb r10,3078(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3078, ctx.r10.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266AAF0"))) PPC_WEAK_FUNC(sub_8266AAF0);
PPC_FUNC_IMPL(__imp__sub_8266AAF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,7748(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7748);
	// bl 0x82e5cfd8
	ctx.lr = 0x8266AB10;
	sub_82E5CFD8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,3077(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3077, ctx.r11.u8);
	// stb r10,3078(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3078, ctx.r10.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266AB38"))) PPC_WEAK_FUNC(sub_8266AB38);
PPC_FUNC_IMPL(__imp__sub_8266AB38) {
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
	// bl 0x82648b80
	ctx.lr = 0x8266AB48;
	sub_82648B80(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// blt cr6,0x8266ab5c
	if (ctx.cr6.lt) goto loc_8266AB5C;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// ble cr6,0x8266ab60
	if (!ctx.cr6.gt) goto loc_8266AB60;
loc_8266AB5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266AB60:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266AB70"))) PPC_WEAK_FUNC(sub_8266AB70);
PPC_FUNC_IMPL(__imp__sub_8266AB70) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,3044(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3044);
	// b 0x828224b0
	sub_828224B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266AB78"))) PPC_WEAK_FUNC(sub_8266AB78);
PPC_FUNC_IMPL(__imp__sub_8266AB78) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266ABA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266ABB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// subfc r9,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// eqv r11,r11,r10
	ctx.r11.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266ABF0"))) PPC_WEAK_FUNC(sub_8266ABF0);
PPC_FUNC_IMPL(__imp__sub_8266ABF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266ABF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x826a0ed8
	ctx.lr = 0x8266AC08;
	sub_826A0ED8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x826a0f08
	ctx.lr = 0x8266AC18;
	sub_826A0F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826a82a0
	ctx.lr = 0x8266AC20;
	sub_826A82A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825517d8
	ctx.lr = 0x8266AC28;
	sub_825517D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82518fe0
	ctx.lr = 0x8266AC30;
	sub_82518FE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826a0f18
	ctx.lr = 0x8266AC38;
	sub_826A0F18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266AC40"))) PPC_WEAK_FUNC(sub_8266AC40);
PPC_FUNC_IMPL(__imp__sub_8266AC40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266AC48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826a0ed8
	ctx.lr = 0x8266AC54;
	sub_826A0ED8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8266ac9c
	if (ctx.cr0.eq) goto loc_8266AC9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826a82a0
	ctx.lr = 0x8266AC64;
	sub_826A82A0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8266ac9c
	if (ctx.cr0.eq) goto loc_8266AC9C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826a0f08
	ctx.lr = 0x8266AC78;
	sub_826A0F08(ctx, base);
	// bl 0x82648b50
	ctx.lr = 0x8266AC7C;
	sub_82648B50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,348(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// bl 0x825517d8
	ctx.lr = 0x8266AC8C;
	sub_825517D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82518fe0
	ctx.lr = 0x8266AC94;
	sub_82518FE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826a0f18
	ctx.lr = 0x8266AC9C;
	sub_826A0F18(ctx, base);
loc_8266AC9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266ACA8"))) PPC_WEAK_FUNC(sub_8266ACA8);
PPC_FUNC_IMPL(__imp__sub_8266ACA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,464(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 464);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8266ace4
	if (!ctx.cr0.eq) goto loc_8266ACE4;
	// bl 0x82648b60
	ctx.lr = 0x8266ACCC;
	sub_82648B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266ad08
	if (ctx.cr0.eq) goto loc_8266AD08;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82649408
	ctx.lr = 0x8266ACE0;
	sub_82649408(ctx, base);
	// b 0x8266ad08
	goto loc_8266AD08;
loc_8266ACE4:
	// bl 0x82648b60
	ctx.lr = 0x8266ACE8;
	sub_82648B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266ad08
	if (ctx.cr0.eq) goto loc_8266AD08;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-29300
	ctx.r4.s64 = ctx.r11.s64 + -29300;
	// bl 0x82649410
	ctx.lr = 0x8266AD00;
	sub_82649410(ctx, base);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// bl 0x82c013e0
	ctx.lr = 0x8266AD08;
	sub_82C013E0(ctx, base);
loc_8266AD08:
	// lbz r11,464(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 464);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,464(r31)
	PPC_STORE_U8(ctx.r31.u32 + 464, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266AD30"))) PPC_WEAK_FUNC(sub_8266AD30);
PPC_FUNC_IMPL(__imp__sub_8266AD30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266AD38;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,92
	ctx.r11.s64 = 92;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 168);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266AD68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266adb4
	if (ctx.cr0.eq) goto loc_8266ADB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,92
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 92, ctx.xer);
	// bne cr6,0x8266adb4
	if (!ctx.cr6.eq) goto loc_8266ADB4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// lwz r4,20312(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20312);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266AD98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82473ff8
	ctx.lr = 0x8266AD9C;
	sub_82473FF8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,268(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266ADB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8266adc4
	goto loc_8266ADC4;
loc_8266ADB4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8269d3d0
	ctx.lr = 0x8266ADC4;
	sub_8269D3D0(ctx, base);
loc_8266ADC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266ADD0"))) PPC_WEAK_FUNC(sub_8266ADD0);
PPC_FUNC_IMPL(__imp__sub_8266ADD0) {
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
	// bl 0x82648b60
	ctx.lr = 0x8266ADE0;
	sub_82648B60(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r4,7456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7456);
	// bl 0x82e5cfd8
	ctx.lr = 0x8266ADEC;
	sub_82E5CFD8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266AE00"))) PPC_WEAK_FUNC(sub_8266AE00);
PPC_FUNC_IMPL(__imp__sub_8266AE00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x825ed150
	ctx.lr = 0x8266AE18;
	sub_825ED150(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266AE38"))) PPC_WEAK_FUNC(sub_8266AE38);
PPC_FUNC_IMPL(__imp__sub_8266AE38) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lfs f0,448(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 448);
	ctx.f0.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r4,468(r3)
	PPC_STORE_U32(ctx.r3.u32 + 468, ctx.r4.u32);
	// stfs f0,480(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 480, temp.u32);
	// stw r11,456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 456, ctx.r11.u32);
	// stw r30,464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 464, ctx.r30.u32);
	// addi r4,r3,452
	ctx.r4.s64 = ctx.r3.s64 + 452;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e66e98
	ctx.lr = 0x8266AE74;
	sub_82E66E98(ctx, base);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266AE90"))) PPC_WEAK_FUNC(sub_8266AE90);
PPC_FUNC_IMPL(__imp__sub_8266AE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddfc
	ctx.lr = 0x8266AE98;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,392(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// lis r8,-31925
	ctx.r8.s64 = -2092236800;
	// lis r7,-31925
	ctx.r7.s64 = -2092236800;
	// li r9,10
	ctx.r9.s64 = 10;
	// lis r6,-31925
	ctx.r6.s64 = -2092236800;
	// lwz r30,728(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 728);
	// lis r5,-31925
	ctx.r5.s64 = -2092236800;
	// lwz r11,21284(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21284);
	// lis r4,-31925
	ctx.r4.s64 = -2092236800;
	// lwz r10,21312(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21312);
	// divw r31,r30,r9
	ctx.r31.s32 = (ctx.r9.s32 && !(ctx.r30.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r30.s32 / ctx.r9.s32 : 0;
	// lwz r9,19376(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19376);
	// lis r29,-31925
	ctx.r29.s64 = -2092236800;
	// lis r28,-31925
	ctx.r28.s64 = -2092236800;
	// lwz r8,20512(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20512);
	// lis r27,-31925
	ctx.r27.s64 = -2092236800;
	// lwz r7,21032(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 21032);
	// lis r26,-31925
	ctx.r26.s64 = -2092236800;
	// lwz r6,20376(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20376);
	// mulli r25,r31,10
	ctx.r25.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(10));
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,20800(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20800);
	// lwz r4,19296(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19296);
	// lwz r5,19656(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 19656);
	// lwz r31,20124(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20124);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// subf r10,r25,r30
	ctx.r10.u64 = ctx.r30.u64 - ctx.r25.u64;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x8269d618
	ctx.lr = 0x8266AF3C;
	sub_8269D618(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a7de4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266AF48"))) PPC_WEAK_FUNC(sub_8266AF48);
PPC_FUNC_IMPL(__imp__sub_8266AF48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,32166(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32166);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8266af88
	if (!ctx.cr0.eq) goto loc_8266AF88;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lbz r11,32168(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32168);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8266af88
	if (!ctx.cr0.eq) goto loc_8266AF88;
	// bl 0x8294b978
	ctx.lr = 0x8266AF80;
	sub_8294B978(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266af90
	if (ctx.cr0.eq) goto loc_8266AF90;
loc_8266AF88:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,504(r31)
	PPC_STORE_U8(ctx.r31.u32 + 504, ctx.r11.u8);
loc_8266AF90:
	// lbz r3,504(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 504);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266AFA8"))) PPC_WEAK_FUNC(sub_8266AFA8);
PPC_FUNC_IMPL(__imp__sub_8266AFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,360(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266b004
	if (ctx.cr6.eq) goto loc_8266B004;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266AFE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B004;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266B004:
	// lwz r3,364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8266b024
	if (ctx.cr6.eq) goto loc_8266B024;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B024;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266B024:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266B040"))) PPC_WEAK_FUNC(sub_8266B040);
PPC_FUNC_IMPL(__imp__sub_8266B040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,498(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 498);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8266b0a8
	if (ctx.cr0.eq) goto loc_8266B0A8;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x8266b078
	if (!ctx.cr6.eq) goto loc_8266B078;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r4,7464(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7464);
	// bl 0x82e5cfd8
	ctx.lr = 0x8266B074;
	sub_82E5CFD8(ctx, base);
	// b 0x8266b0a0
	goto loc_8266B0A0;
loc_8266B078:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r4,7796(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7796);
	// bl 0x82e5cfd8
	ctx.lr = 0x8266B084;
	sub_82E5CFD8(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,19980(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19980);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B0A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266B0A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,498(r31)
	PPC_STORE_U8(ctx.r31.u32 + 498, ctx.r11.u8);
loc_8266B0A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266B0C0"))) PPC_WEAK_FUNC(sub_8266B0C0);
PPC_FUNC_IMPL(__imp__sub_8266B0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,336(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 336);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8266b100
	if (ctx.cr6.eq) goto loc_8266B100;
	// bl 0x823f18b8
	ctx.lr = 0x8266B0EC;
	sub_823F18B8(ctx, base);
	// lwz r11,488(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 488);
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// cmplwi cr6,r11,2000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2000, ctx.xer);
	// ble cr6,0x8266b100
	if (!ctx.cr6.gt) goto loc_8266B100;
	// li r31,1
	ctx.r31.s64 = 1;
loc_8266B100:
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

__attribute__((alias("__imp__sub_8266B120"))) PPC_WEAK_FUNC(sub_8266B120);
PPC_FUNC_IMPL(__imp__sub_8266B120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,498(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 498);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8266b178
	if (!ctx.cr0.eq) goto loc_8266B178;
	// lwz r11,360(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// addi r3,r11,108
	ctx.r3.s64 = ctx.r11.s64 + 108;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B158;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,19324(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19324);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8266b184
	goto loc_8266B184;
loc_8266B178:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266b040
	ctx.lr = 0x8266B184;
	sub_8266B040(ctx, base);
loc_8266B184:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266B198"))) PPC_WEAK_FUNC(sub_8266B198);
PPC_FUNC_IMPL(__imp__sub_8266B198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,360(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266b1d4
	if (ctx.cr6.eq) goto loc_8266B1D4;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r11,108
	ctx.r3.s64 = ctx.r11.s64 + 108;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B1CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8266b1d8
	goto loc_8266B1D8;
loc_8266B1D4:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_8266B1D8:
	// bl 0x82648b50
	ctx.lr = 0x8266B1DC;
	sub_82648B50(ctx, base);
	// stw r31,3348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3348, ctx.r31.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266B1F8"))) PPC_WEAK_FUNC(sub_8266B1F8);
PPC_FUNC_IMPL(__imp__sub_8266B1F8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8266b220
	if (ctx.cr6.eq) goto loc_8266B220;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8266B220:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8266B238"))) PPC_WEAK_FUNC(sub_8266B238);
PPC_FUNC_IMPL(__imp__sub_8266B238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// lwz r4,20312(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20312);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B264;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82473ff8
	ctx.lr = 0x8266B268;
	sub_82473FF8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,268(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B27C;
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

__attribute__((alias("__imp__sub_8266B290"))) PPC_WEAK_FUNC(sub_8266B290);
PPC_FUNC_IMPL(__imp__sub_8266B290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82648b50
	ctx.lr = 0x8266B2AC;
	sub_82648B50(ctx, base);
	// lwz r30,852(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 852);
	// bl 0x82648c88
	ctx.lr = 0x8266B2B4;
	sub_82648C88(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8266b2c4
	if (ctx.cr6.eq) goto loc_8266B2C4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,394(r31)
	PPC_STORE_U8(ctx.r31.u32 + 394, ctx.r11.u8);
loc_8266B2C4:
	// lbz r3,394(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 394);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266B2E0"))) PPC_WEAK_FUNC(sub_8266B2E0);
PPC_FUNC_IMPL(__imp__sub_8266B2E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82656970
	sub_82656970(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266B2E8"))) PPC_WEAK_FUNC(sub_8266B2E8);
PPC_FUNC_IMPL(__imp__sub_8266B2E8) {
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
	// bl 0x82648b50
	ctx.lr = 0x8266B2F8;
	sub_82648B50(ctx, base);
	// lwz r3,348(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// bl 0x8265bb10
	ctx.lr = 0x8266B300;
	sub_8265BB10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266B310"))) PPC_WEAK_FUNC(sub_8266B310);
PPC_FUNC_IMPL(__imp__sub_8266B310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266B318;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826a0ed8
	ctx.lr = 0x8266B324;
	sub_826A0ED8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x826a0f08
	ctx.lr = 0x8266B334;
	sub_826A0F08(ctx, base);
	// bl 0x82648b50
	ctx.lr = 0x8266B338;
	sub_82648B50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,348(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// bl 0x826a82a0
	ctx.lr = 0x8266B348;
	sub_826A82A0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x825517d8
	ctx.lr = 0x8266B350;
	sub_825517D8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82518f30
	ctx.lr = 0x8266B360;
	sub_82518F30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826a0f18
	ctx.lr = 0x8266B368;
	sub_826A0F18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266B370"))) PPC_WEAK_FUNC(sub_8266B370);
PPC_FUNC_IMPL(__imp__sub_8266B370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82906a18
	ctx.lr = 0x8266B388;
	sub_82906A18(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B39C;
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

__attribute__((alias("__imp__sub_8266B3B0"))) PPC_WEAK_FUNC(sub_8266B3B0);
PPC_FUNC_IMPL(__imp__sub_8266B3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r4,7896(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7896);
	// b 0x82e5cfd8
	sub_82E5CFD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266B3C0"))) PPC_WEAK_FUNC(sub_8266B3C0);
PPC_FUNC_IMPL(__imp__sub_8266B3C0) {
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
	// bl 0x82648b50
	ctx.lr = 0x8266B3D0;
	sub_82648B50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,980(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 980);
	// bl 0x82655bf8
	ctx.lr = 0x8266B3E0;
	sub_82655BF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266B3F0"))) PPC_WEAK_FUNC(sub_8266B3F0);
PPC_FUNC_IMPL(__imp__sub_8266B3F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,364(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B420;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266b454
	if (ctx.cr0.eq) goto loc_8266B454;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x82648b50
	ctx.lr = 0x8266B430;
	sub_82648B50(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,986(r3)
	PPC_STORE_U8(ctx.r3.u32 + 986, ctx.r11.u8);
	// bl 0x82648b50
	ctx.lr = 0x8266B43C;
	sub_82648B50(ctx, base);
	// stw r30,996(r3)
	PPC_STORE_U32(ctx.r3.u32 + 996, ctx.r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266B454:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266B470"))) PPC_WEAK_FUNC(sub_8266B470);
PPC_FUNC_IMPL(__imp__sub_8266B470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82648b60
	ctx.lr = 0x8266B488;
	sub_82648B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266b498
	if (ctx.cr0.eq) goto loc_8266B498;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82649348
	ctx.lr = 0x8266B498;
	sub_82649348(ctx, base);
loc_8266B498:
	// bl 0x82473ff8
	ctx.lr = 0x8266B49C;
	sub_82473FF8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,268(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,135
	ctx.r5.s64 = 135;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B4BC;
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

__attribute__((alias("__imp__sub_8266B4D0"))) PPC_WEAK_FUNC(sub_8266B4D0);
PPC_FUNC_IMPL(__imp__sub_8266B4D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x8266b530
	if (ctx.cr6.eq) goto loc_8266B530;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x8266b524
	if (ctx.cr6.eq) goto loc_8266B524;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x8266b518
	if (ctx.cr6.eq) goto loc_8266B518;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// beq cr6,0x8266b544
	if (ctx.cr6.eq) goto loc_8266B544;
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// bne cr6,0x8266b544
	if (!ctx.cr6.eq) goto loc_8266B544;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-29164
	ctx.r3.s64 = ctx.r11.s64 + -29164;
	// b 0x8266b54c
	goto loc_8266B54C;
loc_8266B518:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-29180
	ctx.r3.s64 = ctx.r11.s64 + -29180;
	// b 0x8266b54c
	goto loc_8266B54C;
loc_8266B524:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-29196
	ctx.r3.s64 = ctx.r11.s64 + -29196;
	// b 0x8266b54c
	goto loc_8266B54C;
loc_8266B530:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x8266b544
	if (!ctx.cr6.lt) goto loc_8266B544;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-29208
	ctx.r3.s64 = ctx.r11.s64 + -29208;
	// b 0x8266b54c
	goto loc_8266B54C;
loc_8266B544:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-29228
	ctx.r3.s64 = ctx.r11.s64 + -29228;
loc_8266B54C:
	// bl 0x82e73af8
	ctx.lr = 0x8266B550;
	sub_82E73AF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e5cfd8
	ctx.lr = 0x8266B55C;
	sub_82E5CFD8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266B570"))) PPC_WEAK_FUNC(sub_8266B570);
PPC_FUNC_IMPL(__imp__sub_8266B570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,368(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8266b5a8
	if (ctx.cr6.eq) goto loc_8266B5A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B5A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266B5A8:
	// lwz r3,372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8266b5d0
	if (ctx.cr6.eq) goto loc_8266B5D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B5D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266B5D0:
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266B5F0"))) PPC_WEAK_FUNC(sub_8266B5F0);
PPC_FUNC_IMPL(__imp__sub_8266B5F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-30392
	ctx.r30.s64 = ctx.r11.s64 + -30392;
	// addi r3,r3,376
	ctx.r3.s64 = ctx.r3.s64 + 376;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e78980
	ctx.lr = 0x8266B61C;
	sub_82E78980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,388
	ctx.r3.s64 = ctx.r31.s64 + 388;
	// bl 0x82e78980
	ctx.lr = 0x8266B628;
	sub_82E78980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// bl 0x82e78980
	ctx.lr = 0x8266B634;
	sub_82E78980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,412
	ctx.r3.s64 = ctx.r31.s64 + 412;
	// bl 0x82e78980
	ctx.lr = 0x8266B640;
	sub_82E78980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,436
	ctx.r3.s64 = ctx.r31.s64 + 436;
	// bl 0x82e78980
	ctx.lr = 0x8266B64C;
	sub_82E78980(ctx, base);
	// addi r3,r31,460
	ctx.r3.s64 = ctx.r31.s64 + 460;
	// bl 0x82e775c0
	ctx.lr = 0x8266B654;
	sub_82E775C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// bl 0x82e78980
	ctx.lr = 0x8266B660;
	sub_82E78980(ctx, base);
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e78980
	ctx.lr = 0x8266B66C;
	sub_82E78980(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,7440(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7440);
	// bl 0x82e5cfd8
	ctx.lr = 0x8266B67C;
	sub_82E5CFD8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,7452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7452);
	// bl 0x82e5cfd8
	ctx.lr = 0x8266B68C;
	sub_82E5CFD8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266B6A8"))) PPC_WEAK_FUNC(sub_8266B6A8);
PPC_FUNC_IMPL(__imp__sub_8266B6A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82473ff8
	ctx.lr = 0x8266B6C0;
	sub_82473FF8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r4,268(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30
	ctx.r5.s64 = 30;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B6E4;
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

__attribute__((alias("__imp__sub_8266B6F8"))) PPC_WEAK_FUNC(sub_8266B6F8);
PPC_FUNC_IMPL(__imp__sub_8266B6F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8266B700;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stb r29,366(r31)
	PPC_STORE_U8(ctx.r31.u32 + 366, ctx.r29.u8);
	// stw r29,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r29.u32);
	// bl 0x8283ee68
	ctx.lr = 0x8266B724;
	sub_8283EE68(ctx, base);
	// stb r3,371(r31)
	PPC_STORE_U8(ctx.r31.u32 + 371, ctx.r3.u8);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// stb r29,361(r31)
	PPC_STORE_U8(ctx.r31.u32 + 361, ctx.r29.u8);
	// beq cr6,0x8266b7cc
	if (ctx.cr6.eq) goto loc_8266B7CC;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x8266b7b4
	if (ctx.cr6.eq) goto loc_8266B7B4;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x8266b79c
	if (ctx.cr6.eq) goto loc_8266B79C;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// beq cr6,0x8266b784
	if (ctx.cr6.eq) goto loc_8266B784;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// beq cr6,0x8266b774
	if (ctx.cr6.eq) goto loc_8266B774;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// bne cr6,0x8266b7f4
	if (!ctx.cr6.eq) goto loc_8266B7F4;
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r29,363(r31)
	PPC_STORE_U8(ctx.r31.u32 + 363, ctx.r29.u8);
	// stb r30,362(r31)
	PPC_STORE_U8(ctx.r31.u32 + 362, ctx.r30.u8);
loc_8266B768:
	// stb r29,365(r31)
	PPC_STORE_U8(ctx.r31.u32 + 365, ctx.r29.u8);
	// stb r29,364(r31)
	PPC_STORE_U8(ctx.r31.u32 + 364, ctx.r29.u8);
	// b 0x8266b7f0
	goto loc_8266B7F0;
loc_8266B774:
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r29,362(r31)
	PPC_STORE_U8(ctx.r31.u32 + 362, ctx.r29.u8);
	// stb r30,363(r31)
	PPC_STORE_U8(ctx.r31.u32 + 363, ctx.r30.u8);
	// b 0x8266b768
	goto loc_8266B768;
loc_8266B784:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r29,362(r31)
	PPC_STORE_U8(ctx.r31.u32 + 362, ctx.r29.u8);
	// stb r29,363(r31)
	PPC_STORE_U8(ctx.r31.u32 + 363, ctx.r29.u8);
	// stb r29,365(r31)
	PPC_STORE_U8(ctx.r31.u32 + 365, ctx.r29.u8);
	// stb r11,364(r31)
	PPC_STORE_U8(ctx.r31.u32 + 364, ctx.r11.u8);
	// b 0x8266b7f4
	goto loc_8266B7F4;
loc_8266B79C:
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r29,362(r31)
	PPC_STORE_U8(ctx.r31.u32 + 362, ctx.r29.u8);
	// stb r30,363(r31)
	PPC_STORE_U8(ctx.r31.u32 + 363, ctx.r30.u8);
	// stb r30,365(r31)
	PPC_STORE_U8(ctx.r31.u32 + 365, ctx.r30.u8);
	// stb r30,364(r31)
	PPC_STORE_U8(ctx.r31.u32 + 364, ctx.r30.u8);
	// b 0x8266b7f4
	goto loc_8266B7F4;
loc_8266B7B4:
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r29,364(r31)
	PPC_STORE_U8(ctx.r31.u32 + 364, ctx.r29.u8);
	// stb r30,362(r31)
	PPC_STORE_U8(ctx.r31.u32 + 362, ctx.r30.u8);
	// stb r30,363(r31)
	PPC_STORE_U8(ctx.r31.u32 + 363, ctx.r30.u8);
	// stb r30,365(r31)
	PPC_STORE_U8(ctx.r31.u32 + 365, ctx.r30.u8);
	// b 0x8266b7f0
	goto loc_8266B7F0;
loc_8266B7CC:
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r29,364(r31)
	PPC_STORE_U8(ctx.r31.u32 + 364, ctx.r29.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r30,362(r31)
	PPC_STORE_U8(ctx.r31.u32 + 362, ctx.r30.u8);
	// stb r30,363(r31)
	PPC_STORE_U8(ctx.r31.u32 + 363, ctx.r30.u8);
	// stb r30,365(r31)
	PPC_STORE_U8(ctx.r31.u32 + 365, ctx.r30.u8);
	// bl 0x824acdc0
	ctx.lr = 0x8266B7E8;
	sub_824ACDC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8266b7f4
	if (ctx.cr0.lt) goto loc_8266B7F4;
loc_8266B7F0:
	// stw r30,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
loc_8266B7F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266B800"))) PPC_WEAK_FUNC(sub_8266B800);
PPC_FUNC_IMPL(__imp__sub_8266B800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266B808;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,672
	ctx.r3.s64 = 672;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266B820;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266b83c
	if (ctx.cr0.eq) goto loc_8266B83C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826d9e70
	ctx.lr = 0x8266B838;
	sub_826D9E70(ctx, base);
	// b 0x8266b840
	goto loc_8266B840;
loc_8266B83C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266B840:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266B848"))) PPC_WEAK_FUNC(sub_8266B848);
PPC_FUNC_IMPL(__imp__sub_8266B848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266B850;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,680
	ctx.r3.s64 = 680;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266B868;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266b884
	if (ctx.cr0.eq) goto loc_8266B884;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8277b370
	ctx.lr = 0x8266B880;
	sub_8277B370(ctx, base);
	// b 0x8266b888
	goto loc_8266B888;
loc_8266B884:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266B888:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266B890"))) PPC_WEAK_FUNC(sub_8266B890);
PPC_FUNC_IMPL(__imp__sub_8266B890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266B898;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,444
	ctx.r3.s64 = 444;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266B8B0;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266b8cc
	if (ctx.cr0.eq) goto loc_8266B8CC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827694b8
	ctx.lr = 0x8266B8C8;
	sub_827694B8(ctx, base);
	// b 0x8266b8d0
	goto loc_8266B8D0;
loc_8266B8CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266B8D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266B8D8"))) PPC_WEAK_FUNC(sub_8266B8D8);
PPC_FUNC_IMPL(__imp__sub_8266B8D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266B8E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,548
	ctx.r3.s64 = 548;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266B8F8;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266b914
	if (ctx.cr0.eq) goto loc_8266B914;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82790f28
	ctx.lr = 0x8266B910;
	sub_82790F28(ctx, base);
	// b 0x8266b918
	goto loc_8266B918;
loc_8266B914:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266B918:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266B920"))) PPC_WEAK_FUNC(sub_8266B920);
PPC_FUNC_IMPL(__imp__sub_8266B920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266B928;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,364
	ctx.r3.s64 = 364;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266B940;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266b95c
	if (ctx.cr0.eq) goto loc_8266B95C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82669740
	ctx.lr = 0x8266B958;
	sub_82669740(ctx, base);
	// b 0x8266b960
	goto loc_8266B960;
loc_8266B95C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266B960:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266B968"))) PPC_WEAK_FUNC(sub_8266B968);
PPC_FUNC_IMPL(__imp__sub_8266B968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266B970;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,368
	ctx.r3.s64 = 368;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266B988;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266b9a4
	if (ctx.cr0.eq) goto loc_8266B9A4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82668b00
	ctx.lr = 0x8266B9A0;
	sub_82668B00(ctx, base);
	// b 0x8266b9a8
	goto loc_8266B9A8;
loc_8266B9A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266B9A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266B9B0"))) PPC_WEAK_FUNC(sub_8266B9B0);
PPC_FUNC_IMPL(__imp__sub_8266B9B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8266B9B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,420
	ctx.r3.s64 = 420;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266B9D0;
	sub_82C0F6C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8266ba0c
	if (ctx.cr0.eq) goto loc_8266BA0C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82668a18
	ctx.lr = 0x8266B9EC;
	sub_82668A18(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,28796
	ctx.r11.s64 = ctx.r11.s64 + 28796;
	// addi r10,r10,28784
	ctx.r10.s64 = ctx.r10.s64 + 28784;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x8266ba10
	goto loc_8266BA10;
loc_8266BA0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266BA10:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266BA18"))) PPC_WEAK_FUNC(sub_8266BA18);
PPC_FUNC_IMPL(__imp__sub_8266BA18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266BA20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,368
	ctx.r3.s64 = 368;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266BA38;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266ba54
	if (ctx.cr0.eq) goto loc_8266BA54;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825d5fa8
	ctx.lr = 0x8266BA50;
	sub_825D5FA8(ctx, base);
	// b 0x8266ba58
	goto loc_8266BA58;
loc_8266BA54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266BA58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266BA60"))) PPC_WEAK_FUNC(sub_8266BA60);
PPC_FUNC_IMPL(__imp__sub_8266BA60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266BA68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,364
	ctx.r3.s64 = 364;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266BA80;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266ba9c
	if (ctx.cr0.eq) goto loc_8266BA9C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8273f968
	ctx.lr = 0x8266BA98;
	sub_8273F968(ctx, base);
	// b 0x8266baa0
	goto loc_8266BAA0;
loc_8266BA9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266BAA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266BAA8"))) PPC_WEAK_FUNC(sub_8266BAA8);
PPC_FUNC_IMPL(__imp__sub_8266BAA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266BAB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,364
	ctx.r3.s64 = 364;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266BAC8;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266bae4
	if (ctx.cr0.eq) goto loc_8266BAE4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8273fa40
	ctx.lr = 0x8266BAE0;
	sub_8273FA40(ctx, base);
	// b 0x8266bae8
	goto loc_8266BAE8;
loc_8266BAE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266BAE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266BAF0"))) PPC_WEAK_FUNC(sub_8266BAF0);
PPC_FUNC_IMPL(__imp__sub_8266BAF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266BAF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,668
	ctx.r3.s64 = 668;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266BB10;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266bb2c
	if (ctx.cr0.eq) goto loc_8266BB2C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826b88d8
	ctx.lr = 0x8266BB28;
	sub_826B88D8(ctx, base);
	// b 0x8266bb30
	goto loc_8266BB30;
loc_8266BB2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266BB30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266BB38"))) PPC_WEAK_FUNC(sub_8266BB38);
PPC_FUNC_IMPL(__imp__sub_8266BB38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266BB40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,696
	ctx.r3.s64 = 696;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266BB58;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266bb74
	if (ctx.cr0.eq) goto loc_8266BB74;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825e0768
	ctx.lr = 0x8266BB70;
	sub_825E0768(ctx, base);
	// b 0x8266bb78
	goto loc_8266BB78;
loc_8266BB74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266BB78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266BB80"))) PPC_WEAK_FUNC(sub_8266BB80);
PPC_FUNC_IMPL(__imp__sub_8266BB80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266BB88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,472
	ctx.r3.s64 = 472;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266BBA0;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266bbbc
	if (ctx.cr0.eq) goto loc_8266BBBC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82697670
	ctx.lr = 0x8266BBB8;
	sub_82697670(ctx, base);
	// b 0x8266bbc0
	goto loc_8266BBC0;
loc_8266BBBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266BBC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266BBC8"))) PPC_WEAK_FUNC(sub_8266BBC8);
PPC_FUNC_IMPL(__imp__sub_8266BBC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266BBD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,512
	ctx.r3.s64 = 512;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266BBE8;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266bc04
	if (ctx.cr0.eq) goto loc_8266BC04;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8269d9f0
	ctx.lr = 0x8266BC00;
	sub_8269D9F0(ctx, base);
	// b 0x8266bc08
	goto loc_8266BC08;
loc_8266BC04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266BC08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266BC10"))) PPC_WEAK_FUNC(sub_8266BC10);
PPC_FUNC_IMPL(__imp__sub_8266BC10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266BC18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1488
	ctx.r3.s64 = 1488;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266BC30;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266bc4c
	if (ctx.cr0.eq) goto loc_8266BC4C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8273d958
	ctx.lr = 0x8266BC48;
	sub_8273D958(ctx, base);
	// b 0x8266bc50
	goto loc_8266BC50;
loc_8266BC4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266BC50:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266BC58"))) PPC_WEAK_FUNC(sub_8266BC58);
PPC_FUNC_IMPL(__imp__sub_8266BC58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266BC60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,468
	ctx.r3.s64 = 468;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266BC78;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266bc94
	if (ctx.cr0.eq) goto loc_8266BC94;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8269ca48
	ctx.lr = 0x8266BC90;
	sub_8269CA48(ctx, base);
	// b 0x8266bc98
	goto loc_8266BC98;
loc_8266BC94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266BC98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266BCA0"))) PPC_WEAK_FUNC(sub_8266BCA0);
PPC_FUNC_IMPL(__imp__sub_8266BCA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266BCA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,368
	ctx.r3.s64 = 368;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266BCC0;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266bcdc
	if (ctx.cr0.eq) goto loc_8266BCDC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8269a7f0
	ctx.lr = 0x8266BCD8;
	sub_8269A7F0(ctx, base);
	// b 0x8266bce0
	goto loc_8266BCE0;
loc_8266BCDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266BCE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266BCE8"))) PPC_WEAK_FUNC(sub_8266BCE8);
PPC_FUNC_IMPL(__imp__sub_8266BCE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266BCF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,2256
	ctx.r3.s64 = 2256;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266BD08;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266bd24
	if (ctx.cr0.eq) goto loc_8266BD24;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82727278
	ctx.lr = 0x8266BD20;
	sub_82727278(ctx, base);
	// b 0x8266bd28
	goto loc_8266BD28;
loc_8266BD24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266BD28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266BD30"))) PPC_WEAK_FUNC(sub_8266BD30);
PPC_FUNC_IMPL(__imp__sub_8266BD30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266BD38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,456
	ctx.r3.s64 = 456;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266BD50;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266bd6c
	if (ctx.cr0.eq) goto loc_8266BD6C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8269dd40
	ctx.lr = 0x8266BD68;
	sub_8269DD40(ctx, base);
	// b 0x8266bd70
	goto loc_8266BD70;
loc_8266BD6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266BD70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266BD78"))) PPC_WEAK_FUNC(sub_8266BD78);
PPC_FUNC_IMPL(__imp__sub_8266BD78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266BD80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,360
	ctx.r3.s64 = 360;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266BD98;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266bdb8
	if (ctx.cr0.eq) goto loc_8266BDB8;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825d3bd0
	ctx.lr = 0x8266BDB4;
	sub_825D3BD0(ctx, base);
	// b 0x8266bdbc
	goto loc_8266BDBC;
loc_8266BDB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266BDBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266BDC8"))) PPC_WEAK_FUNC(sub_8266BDC8);
PPC_FUNC_IMPL(__imp__sub_8266BDC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266BDD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,412
	ctx.r3.s64 = 412;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266BDE8;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266be04
	if (ctx.cr0.eq) goto loc_8266BE04;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8269aa10
	ctx.lr = 0x8266BE00;
	sub_8269AA10(ctx, base);
	// b 0x8266be08
	goto loc_8266BE08;
loc_8266BE04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266BE08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266BE10"))) PPC_WEAK_FUNC(sub_8266BE10);
PPC_FUNC_IMPL(__imp__sub_8266BE10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266BE18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,376
	ctx.r3.s64 = 376;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266BE30;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266be4c
	if (ctx.cr0.eq) goto loc_8266BE4C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825d6138
	ctx.lr = 0x8266BE48;
	sub_825D6138(ctx, base);
	// b 0x8266be50
	goto loc_8266BE50;
loc_8266BE4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266BE50:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266BE58"))) PPC_WEAK_FUNC(sub_8266BE58);
PPC_FUNC_IMPL(__imp__sub_8266BE58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266BE60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1244
	ctx.r3.s64 = 1244;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266BE78;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266be94
	if (ctx.cr0.eq) goto loc_8266BE94;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826b8a38
	ctx.lr = 0x8266BE90;
	sub_826B8A38(ctx, base);
	// b 0x8266be98
	goto loc_8266BE98;
loc_8266BE94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266BE98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266BEA0"))) PPC_WEAK_FUNC(sub_8266BEA0);
PPC_FUNC_IMPL(__imp__sub_8266BEA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266BEA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,592
	ctx.r3.s64 = 592;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266BEC0;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266bedc
	if (ctx.cr0.eq) goto loc_8266BEDC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8269ea70
	ctx.lr = 0x8266BED8;
	sub_8269EA70(ctx, base);
	// b 0x8266bee0
	goto loc_8266BEE0;
loc_8266BEDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266BEE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266BEE8"))) PPC_WEAK_FUNC(sub_8266BEE8);
PPC_FUNC_IMPL(__imp__sub_8266BEE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266BEF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,608
	ctx.r3.s64 = 608;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266BF08;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266bf24
	if (ctx.cr0.eq) goto loc_8266BF24;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826aba28
	ctx.lr = 0x8266BF20;
	sub_826ABA28(ctx, base);
	// b 0x8266bf28
	goto loc_8266BF28;
loc_8266BF24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266BF28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266BF30"))) PPC_WEAK_FUNC(sub_8266BF30);
PPC_FUNC_IMPL(__imp__sub_8266BF30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266BF38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,372
	ctx.r3.s64 = 372;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266BF50;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266bf6c
	if (ctx.cr0.eq) goto loc_8266BF6C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826c1368
	ctx.lr = 0x8266BF68;
	sub_826C1368(ctx, base);
	// b 0x8266bf70
	goto loc_8266BF70;
loc_8266BF6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266BF70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266BF78"))) PPC_WEAK_FUNC(sub_8266BF78);
PPC_FUNC_IMPL(__imp__sub_8266BF78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266BF80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,388
	ctx.r3.s64 = 388;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266BF98;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266bfb4
	if (ctx.cr0.eq) goto loc_8266BFB4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8269b338
	ctx.lr = 0x8266BFB0;
	sub_8269B338(ctx, base);
	// b 0x8266bfb8
	goto loc_8266BFB8;
loc_8266BFB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266BFB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266BFC0"))) PPC_WEAK_FUNC(sub_8266BFC0);
PPC_FUNC_IMPL(__imp__sub_8266BFC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266BFC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,456
	ctx.r3.s64 = 456;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266BFE0;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266bffc
	if (ctx.cr0.eq) goto loc_8266BFFC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82668bf0
	ctx.lr = 0x8266BFF8;
	sub_82668BF0(ctx, base);
	// b 0x8266c000
	goto loc_8266C000;
loc_8266BFFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266C000:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C008"))) PPC_WEAK_FUNC(sub_8266C008);
PPC_FUNC_IMPL(__imp__sub_8266C008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266C010;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,456
	ctx.r3.s64 = 456;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266C028;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266c044
	if (ctx.cr0.eq) goto loc_8266C044;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82668c48
	ctx.lr = 0x8266C040;
	sub_82668C48(ctx, base);
	// b 0x8266c048
	goto loc_8266C048;
loc_8266C044:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266C048:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C050"))) PPC_WEAK_FUNC(sub_8266C050);
PPC_FUNC_IMPL(__imp__sub_8266C050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266C058;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,928
	ctx.r3.s64 = 928;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266C070;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266c08c
	if (ctx.cr0.eq) goto loc_8266C08C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8269f888
	ctx.lr = 0x8266C088;
	sub_8269F888(ctx, base);
	// b 0x8266c090
	goto loc_8266C090;
loc_8266C08C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266C090:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C098"))) PPC_WEAK_FUNC(sub_8266C098);
PPC_FUNC_IMPL(__imp__sub_8266C098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8266C0A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,364
	ctx.r3.s64 = 364;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266C0B8;
	sub_82C0F6C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8266c0f8
	if (ctx.cr0.eq) goto loc_8266C0F8;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d3bd0
	ctx.lr = 0x8266C0D8;
	sub_825D3BD0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,30764
	ctx.r11.s64 = ctx.r11.s64 + 30764;
	// addi r10,r10,30752
	ctx.r10.s64 = ctx.r10.s64 + 30752;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x8266c0fc
	goto loc_8266C0FC;
loc_8266C0F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266C0FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C108"))) PPC_WEAK_FUNC(sub_8266C108);
PPC_FUNC_IMPL(__imp__sub_8266C108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266C110;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,364
	ctx.r3.s64 = 364;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266C128;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266c144
	if (ctx.cr0.eq) goto loc_8266C144;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8269c3f0
	ctx.lr = 0x8266C140;
	sub_8269C3F0(ctx, base);
	// b 0x8266c148
	goto loc_8266C148;
loc_8266C144:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266C148:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C150"))) PPC_WEAK_FUNC(sub_8266C150);
PPC_FUNC_IMPL(__imp__sub_8266C150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266C158;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,472
	ctx.r3.s64 = 472;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266C170;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266c18c
	if (ctx.cr0.eq) goto loc_8266C18C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82668ca0
	ctx.lr = 0x8266C188;
	sub_82668CA0(ctx, base);
	// b 0x8266c190
	goto loc_8266C190;
loc_8266C18C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266C190:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C198"))) PPC_WEAK_FUNC(sub_8266C198);
PPC_FUNC_IMPL(__imp__sub_8266C198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266C1A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,588
	ctx.r3.s64 = 588;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266C1B8;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266c1d4
	if (ctx.cr0.eq) goto loc_8266C1D4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826a05d0
	ctx.lr = 0x8266C1D0;
	sub_826A05D0(ctx, base);
	// b 0x8266c1d8
	goto loc_8266C1D8;
loc_8266C1D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266C1D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C1E0"))) PPC_WEAK_FUNC(sub_8266C1E0);
PPC_FUNC_IMPL(__imp__sub_8266C1E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266C1E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1356
	ctx.r3.s64 = 1356;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266C200;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266c21c
	if (ctx.cr0.eq) goto loc_8266C21C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826b8e28
	ctx.lr = 0x8266C218;
	sub_826B8E28(ctx, base);
	// b 0x8266c220
	goto loc_8266C220;
loc_8266C21C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266C220:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C228"))) PPC_WEAK_FUNC(sub_8266C228);
PPC_FUNC_IMPL(__imp__sub_8266C228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266C230;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1360
	ctx.r3.s64 = 1360;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266C248;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266c264
	if (ctx.cr0.eq) goto loc_8266C264;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826bbda8
	ctx.lr = 0x8266C260;
	sub_826BBDA8(ctx, base);
	// b 0x8266c268
	goto loc_8266C268;
loc_8266C264:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266C268:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C270"))) PPC_WEAK_FUNC(sub_8266C270);
PPC_FUNC_IMPL(__imp__sub_8266C270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8266C278;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,376
	ctx.r3.s64 = 376;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266C290;
	sub_82C0F6C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8266c2cc
	if (ctx.cr0.eq) goto loc_8266C2CC;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826d9d90
	ctx.lr = 0x8266C2AC;
	sub_826D9D90(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,31260
	ctx.r11.s64 = ctx.r11.s64 + 31260;
	// addi r10,r10,31252
	ctx.r10.s64 = ctx.r10.s64 + 31252;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x8266c2d0
	goto loc_8266C2D0;
loc_8266C2CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266C2D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C2D8"))) PPC_WEAK_FUNC(sub_8266C2D8);
PPC_FUNC_IMPL(__imp__sub_8266C2D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266C2E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,468
	ctx.r3.s64 = 468;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266C2F8;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266c314
	if (ctx.cr0.eq) goto loc_8266C314;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825dced0
	ctx.lr = 0x8266C310;
	sub_825DCED0(ctx, base);
	// b 0x8266c318
	goto loc_8266C318;
loc_8266C314:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266C318:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C320"))) PPC_WEAK_FUNC(sub_8266C320);
PPC_FUNC_IMPL(__imp__sub_8266C320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266C328;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,608
	ctx.r3.s64 = 608;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266C340;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266c35c
	if (ctx.cr0.eq) goto loc_8266C35C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826a9238
	ctx.lr = 0x8266C358;
	sub_826A9238(ctx, base);
	// b 0x8266c360
	goto loc_8266C360;
loc_8266C35C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266C360:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C368"))) PPC_WEAK_FUNC(sub_8266C368);
PPC_FUNC_IMPL(__imp__sub_8266C368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266C370;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,360
	ctx.r3.s64 = 360;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266C388;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266c3a4
	if (ctx.cr0.eq) goto loc_8266C3A4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8269c340
	ctx.lr = 0x8266C3A0;
	sub_8269C340(ctx, base);
	// b 0x8266c3a8
	goto loc_8266C3A8;
loc_8266C3A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266C3A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C3B0"))) PPC_WEAK_FUNC(sub_8266C3B0);
PPC_FUNC_IMPL(__imp__sub_8266C3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266C3B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,392
	ctx.r3.s64 = 392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266C3D0;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266c3ec
	if (ctx.cr0.eq) goto loc_8266C3EC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826a1510
	ctx.lr = 0x8266C3E8;
	sub_826A1510(ctx, base);
	// b 0x8266c3f0
	goto loc_8266C3F0;
loc_8266C3EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266C3F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C3F8"))) PPC_WEAK_FUNC(sub_8266C3F8);
PPC_FUNC_IMPL(__imp__sub_8266C3F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266C400;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,392
	ctx.r3.s64 = 392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266C418;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266c434
	if (ctx.cr0.eq) goto loc_8266C434;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826a16d8
	ctx.lr = 0x8266C430;
	sub_826A16D8(ctx, base);
	// b 0x8266c438
	goto loc_8266C438;
loc_8266C434:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266C438:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C440"))) PPC_WEAK_FUNC(sub_8266C440);
PPC_FUNC_IMPL(__imp__sub_8266C440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266C448;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,380
	ctx.r3.s64 = 380;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266C460;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266c47c
	if (ctx.cr0.eq) goto loc_8266C47C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82782d90
	ctx.lr = 0x8266C478;
	sub_82782D90(ctx, base);
	// b 0x8266c480
	goto loc_8266C480;
loc_8266C47C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266C480:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C488"))) PPC_WEAK_FUNC(sub_8266C488);
PPC_FUNC_IMPL(__imp__sub_8266C488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266C490;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,376
	ctx.r3.s64 = 376;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266C4A8;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266c4c4
	if (ctx.cr0.eq) goto loc_8266C4C4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8269d7c8
	ctx.lr = 0x8266C4C0;
	sub_8269D7C8(ctx, base);
	// b 0x8266c4c8
	goto loc_8266C4C8;
loc_8266C4C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266C4C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C4D0"))) PPC_WEAK_FUNC(sub_8266C4D0);
PPC_FUNC_IMPL(__imp__sub_8266C4D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8266C4D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,360
	ctx.r3.s64 = 360;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266C4F0;
	sub_82C0F6C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8266c530
	if (ctx.cr0.eq) goto loc_8266C530;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d3bd0
	ctx.lr = 0x8266C510;
	sub_825D3BD0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,29796
	ctx.r11.s64 = ctx.r11.s64 + 29796;
	// addi r10,r10,29784
	ctx.r10.s64 = ctx.r10.s64 + 29784;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x8266c534
	goto loc_8266C534;
loc_8266C530:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266C534:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C540"))) PPC_WEAK_FUNC(sub_8266C540);
PPC_FUNC_IMPL(__imp__sub_8266C540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266C548;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,392
	ctx.r3.s64 = 392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266C560;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266c57c
	if (ctx.cr0.eq) goto loc_8266C57C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825d63b0
	ctx.lr = 0x8266C578;
	sub_825D63B0(ctx, base);
	// b 0x8266c580
	goto loc_8266C580;
loc_8266C57C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266C580:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C588"))) PPC_WEAK_FUNC(sub_8266C588);
PPC_FUNC_IMPL(__imp__sub_8266C588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266C590;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,452
	ctx.r3.s64 = 452;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266C5A8;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266c5c4
	if (ctx.cr0.eq) goto loc_8266C5C4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82668db8
	ctx.lr = 0x8266C5C0;
	sub_82668DB8(ctx, base);
	// b 0x8266c5c8
	goto loc_8266C5C8;
loc_8266C5C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266C5C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C5D0"))) PPC_WEAK_FUNC(sub_8266C5D0);
PPC_FUNC_IMPL(__imp__sub_8266C5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8266C5D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,360
	ctx.r3.s64 = 360;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266C5F0;
	sub_82C0F6C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8266c630
	if (ctx.cr0.eq) goto loc_8266C630;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d3bd0
	ctx.lr = 0x8266C610;
	sub_825D3BD0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,30044
	ctx.r11.s64 = ctx.r11.s64 + 30044;
	// addi r10,r10,30032
	ctx.r10.s64 = ctx.r10.s64 + 30032;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x8266c634
	goto loc_8266C634;
loc_8266C630:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266C634:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C640"))) PPC_WEAK_FUNC(sub_8266C640);
PPC_FUNC_IMPL(__imp__sub_8266C640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266C648;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,376
	ctx.r3.s64 = 376;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266C660;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266c67c
	if (ctx.cr0.eq) goto loc_8266C67C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82668f00
	ctx.lr = 0x8266C678;
	sub_82668F00(ctx, base);
	// b 0x8266c680
	goto loc_8266C680;
loc_8266C67C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266C680:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C688"))) PPC_WEAK_FUNC(sub_8266C688);
PPC_FUNC_IMPL(__imp__sub_8266C688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8266C690;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,376
	ctx.r3.s64 = 376;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266C6A8;
	sub_82C0F6C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8266c6e4
	if (ctx.cr0.eq) goto loc_8266C6E4;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826beb58
	ctx.lr = 0x8266C6C4;
	sub_826BEB58(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,30524
	ctx.r11.s64 = ctx.r11.s64 + 30524;
	// addi r10,r10,30512
	ctx.r10.s64 = ctx.r10.s64 + 30512;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x8266c6e8
	goto loc_8266C6E8;
loc_8266C6E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266C6E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C6F0"))) PPC_WEAK_FUNC(sub_8266C6F0);
PPC_FUNC_IMPL(__imp__sub_8266C6F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266C6F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,396
	ctx.r3.s64 = 396;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266C710;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266c72c
	if (ctx.cr0.eq) goto loc_8266C72C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826d5818
	ctx.lr = 0x8266C728;
	sub_826D5818(ctx, base);
	// b 0x8266c730
	goto loc_8266C730;
loc_8266C72C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266C730:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C738"))) PPC_WEAK_FUNC(sub_8266C738);
PPC_FUNC_IMPL(__imp__sub_8266C738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266C740;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,592
	ctx.r3.s64 = 592;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266C758;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266c774
	if (ctx.cr0.eq) goto loc_8266C774;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826bff48
	ctx.lr = 0x8266C770;
	sub_826BFF48(ctx, base);
	// b 0x8266c778
	goto loc_8266C778;
loc_8266C774:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266C778:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C780"))) PPC_WEAK_FUNC(sub_8266C780);
PPC_FUNC_IMPL(__imp__sub_8266C780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266C788;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,552
	ctx.r3.s64 = 552;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266C7A0;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266c7bc
	if (ctx.cr0.eq) goto loc_8266C7BC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826c0138
	ctx.lr = 0x8266C7B8;
	sub_826C0138(ctx, base);
	// b 0x8266c7c0
	goto loc_8266C7C0;
loc_8266C7BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266C7C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C7C8"))) PPC_WEAK_FUNC(sub_8266C7C8);
PPC_FUNC_IMPL(__imp__sub_8266C7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266C7D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,420
	ctx.r3.s64 = 420;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266C7E8;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266c804
	if (ctx.cr0.eq) goto loc_8266C804;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826c1898
	ctx.lr = 0x8266C800;
	sub_826C1898(ctx, base);
	// b 0x8266c808
	goto loc_8266C808;
loc_8266C804:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266C808:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C810"))) PPC_WEAK_FUNC(sub_8266C810);
PPC_FUNC_IMPL(__imp__sub_8266C810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266C818;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,568
	ctx.r3.s64 = 568;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266C830;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266c84c
	if (ctx.cr0.eq) goto loc_8266C84C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826c0278
	ctx.lr = 0x8266C848;
	sub_826C0278(ctx, base);
	// b 0x8266c850
	goto loc_8266C850;
loc_8266C84C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266C850:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C858"))) PPC_WEAK_FUNC(sub_8266C858);
PPC_FUNC_IMPL(__imp__sub_8266C858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266C860;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,404
	ctx.r3.s64 = 404;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266C878;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266c894
	if (ctx.cr0.eq) goto loc_8266C894;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826c2158
	ctx.lr = 0x8266C890;
	sub_826C2158(ctx, base);
	// b 0x8266c898
	goto loc_8266C898;
loc_8266C894:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266C898:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C8A0"))) PPC_WEAK_FUNC(sub_8266C8A0);
PPC_FUNC_IMPL(__imp__sub_8266C8A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266C8A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,420
	ctx.r3.s64 = 420;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266C8C0;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266c8dc
	if (ctx.cr0.eq) goto loc_8266C8DC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826c9450
	ctx.lr = 0x8266C8D8;
	sub_826C9450(ctx, base);
	// b 0x8266c8e0
	goto loc_8266C8E0;
loc_8266C8DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266C8E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C8E8"))) PPC_WEAK_FUNC(sub_8266C8E8);
PPC_FUNC_IMPL(__imp__sub_8266C8E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266C8F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,420
	ctx.r3.s64 = 420;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266C908;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266c924
	if (ctx.cr0.eq) goto loc_8266C924;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826c92f0
	ctx.lr = 0x8266C920;
	sub_826C92F0(ctx, base);
	// b 0x8266c928
	goto loc_8266C928;
loc_8266C924:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266C928:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C930"))) PPC_WEAK_FUNC(sub_8266C930);
PPC_FUNC_IMPL(__imp__sub_8266C930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266C938;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,420
	ctx.r3.s64 = 420;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266C950;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266c96c
	if (ctx.cr0.eq) goto loc_8266C96C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826c95b0
	ctx.lr = 0x8266C968;
	sub_826C95B0(ctx, base);
	// b 0x8266c970
	goto loc_8266C970;
loc_8266C96C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266C970:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C978"))) PPC_WEAK_FUNC(sub_8266C978);
PPC_FUNC_IMPL(__imp__sub_8266C978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266C980;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,420
	ctx.r3.s64 = 420;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266C998;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266c9b4
	if (ctx.cr0.eq) goto loc_8266C9B4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826c9710
	ctx.lr = 0x8266C9B0;
	sub_826C9710(ctx, base);
	// b 0x8266c9b8
	goto loc_8266C9B8;
loc_8266C9B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266C9B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C9C0"))) PPC_WEAK_FUNC(sub_8266C9C0);
PPC_FUNC_IMPL(__imp__sub_8266C9C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266C9C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,420
	ctx.r3.s64 = 420;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266C9E0;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266c9fc
	if (ctx.cr0.eq) goto loc_8266C9FC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826c9870
	ctx.lr = 0x8266C9F8;
	sub_826C9870(ctx, base);
	// b 0x8266ca00
	goto loc_8266CA00;
loc_8266C9FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266CA00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266CA08"))) PPC_WEAK_FUNC(sub_8266CA08);
PPC_FUNC_IMPL(__imp__sub_8266CA08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266CA10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,372
	ctx.r3.s64 = 372;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266CA28;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266ca44
	if (ctx.cr0.eq) goto loc_8266CA44;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826c2288
	ctx.lr = 0x8266CA40;
	sub_826C2288(ctx, base);
	// b 0x8266ca48
	goto loc_8266CA48;
loc_8266CA44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266CA48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266CA50"))) PPC_WEAK_FUNC(sub_8266CA50);
PPC_FUNC_IMPL(__imp__sub_8266CA50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266CA58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,440
	ctx.r3.s64 = 440;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266CA70;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266ca8c
	if (ctx.cr0.eq) goto loc_8266CA8C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8271cb08
	ctx.lr = 0x8266CA88;
	sub_8271CB08(ctx, base);
	// b 0x8266ca90
	goto loc_8266CA90;
loc_8266CA8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266CA90:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266CA98"))) PPC_WEAK_FUNC(sub_8266CA98);
PPC_FUNC_IMPL(__imp__sub_8266CA98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266CAA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,380
	ctx.r3.s64 = 380;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266CAB8;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266cad4
	if (ctx.cr0.eq) goto loc_8266CAD4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82720120
	ctx.lr = 0x8266CAD0;
	sub_82720120(ctx, base);
	// b 0x8266cad8
	goto loc_8266CAD8;
loc_8266CAD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266CAD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266CAE0"))) PPC_WEAK_FUNC(sub_8266CAE0);
PPC_FUNC_IMPL(__imp__sub_8266CAE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266CAE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,836
	ctx.r3.s64 = 836;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266CB00;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266cb1c
	if (ctx.cr0.eq) goto loc_8266CB1C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826f7fe8
	ctx.lr = 0x8266CB18;
	sub_826F7FE8(ctx, base);
	// b 0x8266cb20
	goto loc_8266CB20;
loc_8266CB1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266CB20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266CB28"))) PPC_WEAK_FUNC(sub_8266CB28);
PPC_FUNC_IMPL(__imp__sub_8266CB28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266CB30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,704
	ctx.r3.s64 = 704;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266CB48;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266cb64
	if (ctx.cr0.eq) goto loc_8266CB64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8270e050
	ctx.lr = 0x8266CB60;
	sub_8270E050(ctx, base);
	// b 0x8266cb68
	goto loc_8266CB68;
loc_8266CB64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266CB68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266CB70"))) PPC_WEAK_FUNC(sub_8266CB70);
PPC_FUNC_IMPL(__imp__sub_8266CB70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266CB78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,468
	ctx.r3.s64 = 468;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266CB90;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266cbac
	if (ctx.cr0.eq) goto loc_8266CBAC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826db4b8
	ctx.lr = 0x8266CBA8;
	sub_826DB4B8(ctx, base);
	// b 0x8266cbb0
	goto loc_8266CBB0;
loc_8266CBAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266CBB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266CBB8"))) PPC_WEAK_FUNC(sub_8266CBB8);
PPC_FUNC_IMPL(__imp__sub_8266CBB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266CBC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,764
	ctx.r3.s64 = 764;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266CBD8;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266cbf4
	if (ctx.cr0.eq) goto loc_8266CBF4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82780478
	ctx.lr = 0x8266CBF0;
	sub_82780478(ctx, base);
	// b 0x8266cbf8
	goto loc_8266CBF8;
loc_8266CBF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266CBF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266CC00"))) PPC_WEAK_FUNC(sub_8266CC00);
PPC_FUNC_IMPL(__imp__sub_8266CC00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266CC08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1436
	ctx.r3.s64 = 1436;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266CC20;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266cc3c
	if (ctx.cr0.eq) goto loc_8266CC3C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82710070
	ctx.lr = 0x8266CC38;
	sub_82710070(ctx, base);
	// b 0x8266cc40
	goto loc_8266CC40;
loc_8266CC3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266CC40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266CC48"))) PPC_WEAK_FUNC(sub_8266CC48);
PPC_FUNC_IMPL(__imp__sub_8266CC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266CC50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,372
	ctx.r3.s64 = 372;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266CC68;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266cc84
	if (ctx.cr0.eq) goto loc_8266CC84;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826da408
	ctx.lr = 0x8266CC80;
	sub_826DA408(ctx, base);
	// b 0x8266cc88
	goto loc_8266CC88;
loc_8266CC84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266CC88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266CC90"))) PPC_WEAK_FUNC(sub_8266CC90);
PPC_FUNC_IMPL(__imp__sub_8266CC90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266CC98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,364
	ctx.r3.s64 = 364;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266CCB0;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266cccc
	if (ctx.cr0.eq) goto loc_8266CCCC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826df200
	ctx.lr = 0x8266CCC8;
	sub_826DF200(ctx, base);
	// b 0x8266ccd0
	goto loc_8266CCD0;
loc_8266CCCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266CCD0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266CCD8"))) PPC_WEAK_FUNC(sub_8266CCD8);
PPC_FUNC_IMPL(__imp__sub_8266CCD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266CCE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,516
	ctx.r3.s64 = 516;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266CCF8;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266cd14
	if (ctx.cr0.eq) goto loc_8266CD14;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826dc868
	ctx.lr = 0x8266CD10;
	sub_826DC868(ctx, base);
	// b 0x8266cd18
	goto loc_8266CD18;
loc_8266CD14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266CD18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266CD20"))) PPC_WEAK_FUNC(sub_8266CD20);
PPC_FUNC_IMPL(__imp__sub_8266CD20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266CD28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,480
	ctx.r3.s64 = 480;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266CD40;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266cd5c
	if (ctx.cr0.eq) goto loc_8266CD5C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8270e640
	ctx.lr = 0x8266CD58;
	sub_8270E640(ctx, base);
	// b 0x8266cd60
	goto loc_8266CD60;
loc_8266CD5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266CD60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266CD68"))) PPC_WEAK_FUNC(sub_8266CD68);
PPC_FUNC_IMPL(__imp__sub_8266CD68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266CD70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,488
	ctx.r3.s64 = 488;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266CD88;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266cda4
	if (ctx.cr0.eq) goto loc_8266CDA4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82707948
	ctx.lr = 0x8266CDA0;
	sub_82707948(ctx, base);
	// b 0x8266cda8
	goto loc_8266CDA8;
loc_8266CDA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266CDA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266CDB0"))) PPC_WEAK_FUNC(sub_8266CDB0);
PPC_FUNC_IMPL(__imp__sub_8266CDB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266CDB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,440
	ctx.r3.s64 = 440;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266CDD0;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266cdec
	if (ctx.cr0.eq) goto loc_8266CDEC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826f2920
	ctx.lr = 0x8266CDE8;
	sub_826F2920(ctx, base);
	// b 0x8266cdf0
	goto loc_8266CDF0;
loc_8266CDEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266CDF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266CDF8"))) PPC_WEAK_FUNC(sub_8266CDF8);
PPC_FUNC_IMPL(__imp__sub_8266CDF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266CE00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,2040
	ctx.r3.s64 = 2040;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266CE18;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266ce34
	if (ctx.cr0.eq) goto loc_8266CE34;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8270e710
	ctx.lr = 0x8266CE30;
	sub_8270E710(ctx, base);
	// b 0x8266ce38
	goto loc_8266CE38;
loc_8266CE34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266CE38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266CE40"))) PPC_WEAK_FUNC(sub_8266CE40);
PPC_FUNC_IMPL(__imp__sub_8266CE40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266CE48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,520
	ctx.r3.s64 = 520;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266CE60;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266ce7c
	if (ctx.cr0.eq) goto loc_8266CE7C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826dce30
	ctx.lr = 0x8266CE78;
	sub_826DCE30(ctx, base);
	// b 0x8266ce80
	goto loc_8266CE80;
loc_8266CE7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266CE80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266CE88"))) PPC_WEAK_FUNC(sub_8266CE88);
PPC_FUNC_IMPL(__imp__sub_8266CE88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266CE90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1064
	ctx.r3.s64 = 1064;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266CEA8;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266cec4
	if (ctx.cr0.eq) goto loc_8266CEC4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826e66e0
	ctx.lr = 0x8266CEC0;
	sub_826E66E0(ctx, base);
	// b 0x8266cec8
	goto loc_8266CEC8;
loc_8266CEC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266CEC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266CED0"))) PPC_WEAK_FUNC(sub_8266CED0);
PPC_FUNC_IMPL(__imp__sub_8266CED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266CED8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,360
	ctx.r3.s64 = 360;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266CEF0;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266cf0c
	if (ctx.cr0.eq) goto loc_8266CF0C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826db1f0
	ctx.lr = 0x8266CF08;
	sub_826DB1F0(ctx, base);
	// b 0x8266cf10
	goto loc_8266CF10;
loc_8266CF0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266CF10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266CF18"))) PPC_WEAK_FUNC(sub_8266CF18);
PPC_FUNC_IMPL(__imp__sub_8266CF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266CF20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,8376
	ctx.r3.s64 = 8376;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266CF38;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266cf54
	if (ctx.cr0.eq) goto loc_8266CF54;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82708998
	ctx.lr = 0x8266CF50;
	sub_82708998(ctx, base);
	// b 0x8266cf58
	goto loc_8266CF58;
loc_8266CF54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266CF58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266CF60"))) PPC_WEAK_FUNC(sub_8266CF60);
PPC_FUNC_IMPL(__imp__sub_8266CF60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266CF68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,528
	ctx.r3.s64 = 528;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266CF80;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266cf9c
	if (ctx.cr0.eq) goto loc_8266CF9C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826e0798
	ctx.lr = 0x8266CF98;
	sub_826E0798(ctx, base);
	// b 0x8266cfa0
	goto loc_8266CFA0;
loc_8266CF9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266CFA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266CFA8"))) PPC_WEAK_FUNC(sub_8266CFA8);
PPC_FUNC_IMPL(__imp__sub_8266CFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266CFB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,368
	ctx.r3.s64 = 368;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266CFC8;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266cfe4
	if (ctx.cr0.eq) goto loc_8266CFE4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826dd108
	ctx.lr = 0x8266CFE0;
	sub_826DD108(ctx, base);
	// b 0x8266cfe8
	goto loc_8266CFE8;
loc_8266CFE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266CFE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266CFF0"))) PPC_WEAK_FUNC(sub_8266CFF0);
PPC_FUNC_IMPL(__imp__sub_8266CFF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266CFF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,408
	ctx.r3.s64 = 408;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266D010;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266d02c
	if (ctx.cr0.eq) goto loc_8266D02C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82669130
	ctx.lr = 0x8266D028;
	sub_82669130(ctx, base);
	// b 0x8266d030
	goto loc_8266D030;
loc_8266D02C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266D030:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D038"))) PPC_WEAK_FUNC(sub_8266D038);
PPC_FUNC_IMPL(__imp__sub_8266D038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266D040;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1128
	ctx.r3.s64 = 1128;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266D058;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266d074
	if (ctx.cr0.eq) goto loc_8266D074;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8270eaf0
	ctx.lr = 0x8266D070;
	sub_8270EAF0(ctx, base);
	// b 0x8266d078
	goto loc_8266D078;
loc_8266D074:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266D078:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D080"))) PPC_WEAK_FUNC(sub_8266D080);
PPC_FUNC_IMPL(__imp__sub_8266D080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266D088;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1112
	ctx.r3.s64 = 1112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266D0A0;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266d0bc
	if (ctx.cr0.eq) goto loc_8266D0BC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826f08a0
	ctx.lr = 0x8266D0B8;
	sub_826F08A0(ctx, base);
	// b 0x8266d0c0
	goto loc_8266D0C0;
loc_8266D0BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266D0C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D0C8"))) PPC_WEAK_FUNC(sub_8266D0C8);
PPC_FUNC_IMPL(__imp__sub_8266D0C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266D0D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,916
	ctx.r3.s64 = 916;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266D0E8;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266d104
	if (ctx.cr0.eq) goto loc_8266D104;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82708658
	ctx.lr = 0x8266D100;
	sub_82708658(ctx, base);
	// b 0x8266d108
	goto loc_8266D108;
loc_8266D104:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266D108:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D110"))) PPC_WEAK_FUNC(sub_8266D110);
PPC_FUNC_IMPL(__imp__sub_8266D110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266D118;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,368
	ctx.r3.s64 = 368;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266D130;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266d14c
	if (ctx.cr0.eq) goto loc_8266D14C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826dbd88
	ctx.lr = 0x8266D148;
	sub_826DBD88(ctx, base);
	// b 0x8266d150
	goto loc_8266D150;
loc_8266D14C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266D150:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D158"))) PPC_WEAK_FUNC(sub_8266D158);
PPC_FUNC_IMPL(__imp__sub_8266D158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266D160;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,8888
	ctx.r3.s64 = 8888;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266D178;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266d194
	if (ctx.cr0.eq) goto loc_8266D194;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82732f00
	ctx.lr = 0x8266D190;
	sub_82732F00(ctx, base);
	// b 0x8266d198
	goto loc_8266D198;
loc_8266D194:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266D198:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D1A0"))) PPC_WEAK_FUNC(sub_8266D1A0);
PPC_FUNC_IMPL(__imp__sub_8266D1A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266D1A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,600
	ctx.r3.s64 = 600;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266D1C0;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266d1dc
	if (ctx.cr0.eq) goto loc_8266D1DC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8271d690
	ctx.lr = 0x8266D1D8;
	sub_8271D690(ctx, base);
	// b 0x8266d1e0
	goto loc_8266D1E0;
loc_8266D1DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266D1E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D1E8"))) PPC_WEAK_FUNC(sub_8266D1E8);
PPC_FUNC_IMPL(__imp__sub_8266D1E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266D1F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1184
	ctx.r3.s64 = 1184;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266D208;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266d224
	if (ctx.cr0.eq) goto loc_8266D224;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82719918
	ctx.lr = 0x8266D220;
	sub_82719918(ctx, base);
	// b 0x8266d228
	goto loc_8266D228;
loc_8266D224:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266D228:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D230"))) PPC_WEAK_FUNC(sub_8266D230);
PPC_FUNC_IMPL(__imp__sub_8266D230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266D238;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,396
	ctx.r3.s64 = 396;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266D250;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266d26c
	if (ctx.cr0.eq) goto loc_8266D26C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8271e910
	ctx.lr = 0x8266D268;
	sub_8271E910(ctx, base);
	// b 0x8266d270
	goto loc_8266D270;
loc_8266D26C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266D270:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D278"))) PPC_WEAK_FUNC(sub_8266D278);
PPC_FUNC_IMPL(__imp__sub_8266D278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266D280;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,396
	ctx.r3.s64 = 396;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266D298;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266d2b4
	if (ctx.cr0.eq) goto loc_8266D2B4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82669218
	ctx.lr = 0x8266D2B0;
	sub_82669218(ctx, base);
	// b 0x8266d2b8
	goto loc_8266D2B8;
loc_8266D2B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266D2B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D2C0"))) PPC_WEAK_FUNC(sub_8266D2C0);
PPC_FUNC_IMPL(__imp__sub_8266D2C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8266D2C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,396
	ctx.r3.s64 = 396;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266D2E0;
	sub_82C0F6C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8266d31c
	if (ctx.cr0.eq) goto loc_8266D31C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82669218
	ctx.lr = 0x8266D2FC;
	sub_82669218(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,31980
	ctx.r11.s64 = ctx.r11.s64 + 31980;
	// addi r10,r10,31968
	ctx.r10.s64 = ctx.r10.s64 + 31968;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x8266d320
	goto loc_8266D320;
loc_8266D31C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266D320:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D328"))) PPC_WEAK_FUNC(sub_8266D328);
PPC_FUNC_IMPL(__imp__sub_8266D328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266D330;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,384
	ctx.r3.s64 = 384;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266D348;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266d364
	if (ctx.cr0.eq) goto loc_8266D364;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8272a878
	ctx.lr = 0x8266D360;
	sub_8272A878(ctx, base);
	// b 0x8266d368
	goto loc_8266D368;
loc_8266D364:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266D368:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D370"))) PPC_WEAK_FUNC(sub_8266D370);
PPC_FUNC_IMPL(__imp__sub_8266D370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266D378;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,380
	ctx.r3.s64 = 380;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266D390;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266d3ac
	if (ctx.cr0.eq) goto loc_8266D3AC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8271a6c0
	ctx.lr = 0x8266D3A8;
	sub_8271A6C0(ctx, base);
	// b 0x8266d3b0
	goto loc_8266D3B0;
loc_8266D3AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266D3B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D3B8"))) PPC_WEAK_FUNC(sub_8266D3B8);
PPC_FUNC_IMPL(__imp__sub_8266D3B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266D3C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,368
	ctx.r3.s64 = 368;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266D3D8;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266d3f4
	if (ctx.cr0.eq) goto loc_8266D3F4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8271a928
	ctx.lr = 0x8266D3F0;
	sub_8271A928(ctx, base);
	// b 0x8266d3f8
	goto loc_8266D3F8;
loc_8266D3F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266D3F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D400"))) PPC_WEAK_FUNC(sub_8266D400);
PPC_FUNC_IMPL(__imp__sub_8266D400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266D408;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,384
	ctx.r3.s64 = 384;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266D420;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266d43c
	if (ctx.cr0.eq) goto loc_8266D43C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8279d9b8
	ctx.lr = 0x8266D438;
	sub_8279D9B8(ctx, base);
	// b 0x8266d440
	goto loc_8266D440;
loc_8266D43C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266D440:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D448"))) PPC_WEAK_FUNC(sub_8266D448);
PPC_FUNC_IMPL(__imp__sub_8266D448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266D450;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,368
	ctx.r3.s64 = 368;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266D468;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266d484
	if (ctx.cr0.eq) goto loc_8266D484;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8271fe10
	ctx.lr = 0x8266D480;
	sub_8271FE10(ctx, base);
	// b 0x8266d488
	goto loc_8266D488;
loc_8266D484:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266D488:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D490"))) PPC_WEAK_FUNC(sub_8266D490);
PPC_FUNC_IMPL(__imp__sub_8266D490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266D498;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,568
	ctx.r3.s64 = 568;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266D4B0;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266d4cc
	if (ctx.cr0.eq) goto loc_8266D4CC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8271f900
	ctx.lr = 0x8266D4C8;
	sub_8271F900(ctx, base);
	// b 0x8266d4d0
	goto loc_8266D4D0;
loc_8266D4CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266D4D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D4D8"))) PPC_WEAK_FUNC(sub_8266D4D8);
PPC_FUNC_IMPL(__imp__sub_8266D4D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266D4E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,608
	ctx.r3.s64 = 608;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266D4F8;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266d514
	if (ctx.cr0.eq) goto loc_8266D514;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827282c0
	ctx.lr = 0x8266D510;
	sub_827282C0(ctx, base);
	// b 0x8266d518
	goto loc_8266D518;
loc_8266D514:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266D518:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D520"))) PPC_WEAK_FUNC(sub_8266D520);
PPC_FUNC_IMPL(__imp__sub_8266D520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266D528;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,608
	ctx.r3.s64 = 608;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266D540;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266d55c
	if (ctx.cr0.eq) goto loc_8266D55C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82728358
	ctx.lr = 0x8266D558;
	sub_82728358(ctx, base);
	// b 0x8266d560
	goto loc_8266D560;
loc_8266D55C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266D560:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D568"))) PPC_WEAK_FUNC(sub_8266D568);
PPC_FUNC_IMPL(__imp__sub_8266D568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266D570;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,396
	ctx.r3.s64 = 396;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266D588;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266d5a4
	if (ctx.cr0.eq) goto loc_8266D5A4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8271aab8
	ctx.lr = 0x8266D5A0;
	sub_8271AAB8(ctx, base);
	// b 0x8266d5a8
	goto loc_8266D5A8;
loc_8266D5A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266D5A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D5B0"))) PPC_WEAK_FUNC(sub_8266D5B0);
PPC_FUNC_IMPL(__imp__sub_8266D5B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266D5B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,364
	ctx.r3.s64 = 364;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266D5D0;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266d5ec
	if (ctx.cr0.eq) goto loc_8266D5EC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8271fd10
	ctx.lr = 0x8266D5E8;
	sub_8271FD10(ctx, base);
	// b 0x8266d5f0
	goto loc_8266D5F0;
loc_8266D5EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266D5F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D5F8"))) PPC_WEAK_FUNC(sub_8266D5F8);
PPC_FUNC_IMPL(__imp__sub_8266D5F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266D600;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,488
	ctx.r3.s64 = 488;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266D618;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266d634
	if (ctx.cr0.eq) goto loc_8266D634;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825d4690
	ctx.lr = 0x8266D630;
	sub_825D4690(ctx, base);
	// b 0x8266d638
	goto loc_8266D638;
loc_8266D634:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266D638:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D640"))) PPC_WEAK_FUNC(sub_8266D640);
PPC_FUNC_IMPL(__imp__sub_8266D640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266D648;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,368
	ctx.r3.s64 = 368;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266D660;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266d67c
	if (ctx.cr0.eq) goto loc_8266D67C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8271ac20
	ctx.lr = 0x8266D678;
	sub_8271AC20(ctx, base);
	// b 0x8266d680
	goto loc_8266D680;
loc_8266D67C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266D680:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D688"))) PPC_WEAK_FUNC(sub_8266D688);
PPC_FUNC_IMPL(__imp__sub_8266D688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266D690;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,392
	ctx.r3.s64 = 392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266D6A8;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266d6c4
	if (ctx.cr0.eq) goto loc_8266D6C4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82720570
	ctx.lr = 0x8266D6C0;
	sub_82720570(ctx, base);
	// b 0x8266d6c8
	goto loc_8266D6C8;
loc_8266D6C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266D6C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D6D0"))) PPC_WEAK_FUNC(sub_8266D6D0);
PPC_FUNC_IMPL(__imp__sub_8266D6D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266D6D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ori r3,r3,10648
	ctx.r3.u64 = ctx.r3.u64 | 10648;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266D6F4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266d710
	if (ctx.cr0.eq) goto loc_8266D710;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82732680
	ctx.lr = 0x8266D70C;
	sub_82732680(ctx, base);
	// b 0x8266d714
	goto loc_8266D714;
loc_8266D710:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266D714:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D720"))) PPC_WEAK_FUNC(sub_8266D720);
PPC_FUNC_IMPL(__imp__sub_8266D720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266D728;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,528
	ctx.r3.s64 = 528;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266D740;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266d75c
	if (ctx.cr0.eq) goto loc_8266D75C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82720b10
	ctx.lr = 0x8266D758;
	sub_82720B10(ctx, base);
	// b 0x8266d760
	goto loc_8266D760;
loc_8266D75C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266D760:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D768"))) PPC_WEAK_FUNC(sub_8266D768);
PPC_FUNC_IMPL(__imp__sub_8266D768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266D770;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,388
	ctx.r3.s64 = 388;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266D788;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266d7a4
	if (ctx.cr0.eq) goto loc_8266D7A4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8271b498
	ctx.lr = 0x8266D7A0;
	sub_8271B498(ctx, base);
	// b 0x8266d7a8
	goto loc_8266D7A8;
loc_8266D7A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266D7A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D7B0"))) PPC_WEAK_FUNC(sub_8266D7B0);
PPC_FUNC_IMPL(__imp__sub_8266D7B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266D7B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,2160
	ctx.r3.s64 = 2160;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266D7D0;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266d7ec
	if (ctx.cr0.eq) goto loc_8266D7EC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82729b90
	ctx.lr = 0x8266D7E8;
	sub_82729B90(ctx, base);
	// b 0x8266d7f0
	goto loc_8266D7F0;
loc_8266D7EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266D7F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D7F8"))) PPC_WEAK_FUNC(sub_8266D7F8);
PPC_FUNC_IMPL(__imp__sub_8266D7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266D800;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,2176
	ctx.r3.s64 = 2176;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266D818;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266d834
	if (ctx.cr0.eq) goto loc_8266D834;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82726ea0
	ctx.lr = 0x8266D830;
	sub_82726EA0(ctx, base);
	// b 0x8266d838
	goto loc_8266D838;
loc_8266D834:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266D838:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D840"))) PPC_WEAK_FUNC(sub_8266D840);
PPC_FUNC_IMPL(__imp__sub_8266D840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266D848;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,380
	ctx.r3.s64 = 380;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266D860;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266d87c
	if (ctx.cr0.eq) goto loc_8266D87C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82721970
	ctx.lr = 0x8266D878;
	sub_82721970(ctx, base);
	// b 0x8266d880
	goto loc_8266D880;
loc_8266D87C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266D880:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D888"))) PPC_WEAK_FUNC(sub_8266D888);
PPC_FUNC_IMPL(__imp__sub_8266D888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266D890;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,364
	ctx.r3.s64 = 364;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266D8A8;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266d8c4
	if (ctx.cr0.eq) goto loc_8266D8C4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82741e70
	ctx.lr = 0x8266D8C0;
	sub_82741E70(ctx, base);
	// b 0x8266d8c8
	goto loc_8266D8C8;
loc_8266D8C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266D8C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D8D0"))) PPC_WEAK_FUNC(sub_8266D8D0);
PPC_FUNC_IMPL(__imp__sub_8266D8D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266D8D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,696
	ctx.r3.s64 = 696;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266D8F0;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266d90c
	if (ctx.cr0.eq) goto loc_8266D90C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827420c8
	ctx.lr = 0x8266D908;
	sub_827420C8(ctx, base);
	// b 0x8266d910
	goto loc_8266D910;
loc_8266D90C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266D910:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D918"))) PPC_WEAK_FUNC(sub_8266D918);
PPC_FUNC_IMPL(__imp__sub_8266D918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8266D920;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,364
	ctx.r3.s64 = 364;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266D938;
	sub_82C0F6C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8266d980
	if (ctx.cr0.eq) goto loc_8266D980;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d3bd0
	ctx.lr = 0x8266D958;
	sub_825D3BD0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,32220
	ctx.r11.s64 = ctx.r11.s64 + 32220;
	// addi r10,r10,32208
	ctx.r10.s64 = ctx.r10.s64 + 32208;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r9.u32);
	// b 0x8266d984
	goto loc_8266D984;
loc_8266D980:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266D984:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D990"))) PPC_WEAK_FUNC(sub_8266D990);
PPC_FUNC_IMPL(__imp__sub_8266D990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266D998;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1232
	ctx.r3.s64 = 1232;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266D9B0;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266d9cc
	if (ctx.cr0.eq) goto loc_8266D9CC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8269e7e0
	ctx.lr = 0x8266D9C8;
	sub_8269E7E0(ctx, base);
	// b 0x8266d9d0
	goto loc_8266D9D0;
loc_8266D9CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266D9D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D9D8"))) PPC_WEAK_FUNC(sub_8266D9D8);
PPC_FUNC_IMPL(__imp__sub_8266D9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266D9E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,388
	ctx.r3.s64 = 388;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266D9F8;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266da14
	if (ctx.cr0.eq) goto loc_8266DA14;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82742708
	ctx.lr = 0x8266DA10;
	sub_82742708(ctx, base);
	// b 0x8266da18
	goto loc_8266DA18;
loc_8266DA14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266DA18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266DA20"))) PPC_WEAK_FUNC(sub_8266DA20);
PPC_FUNC_IMPL(__imp__sub_8266DA20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266DA28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,616
	ctx.r3.s64 = 616;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266DA40;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266da5c
	if (ctx.cr0.eq) goto loc_8266DA5C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82747258
	ctx.lr = 0x8266DA58;
	sub_82747258(ctx, base);
	// b 0x8266da60
	goto loc_8266DA60;
loc_8266DA5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266DA60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266DA68"))) PPC_WEAK_FUNC(sub_8266DA68);
PPC_FUNC_IMPL(__imp__sub_8266DA68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266DA70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,712
	ctx.r3.s64 = 712;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266DA88;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266daa4
	if (ctx.cr0.eq) goto loc_8266DAA4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827552d8
	ctx.lr = 0x8266DAA0;
	sub_827552D8(ctx, base);
	// b 0x8266daa8
	goto loc_8266DAA8;
loc_8266DAA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266DAA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266DAB0"))) PPC_WEAK_FUNC(sub_8266DAB0);
PPC_FUNC_IMPL(__imp__sub_8266DAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266DAB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,456
	ctx.r3.s64 = 456;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266DAD0;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266daec
	if (ctx.cr0.eq) goto loc_8266DAEC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8275a3b8
	ctx.lr = 0x8266DAE8;
	sub_8275A3B8(ctx, base);
	// b 0x8266daf0
	goto loc_8266DAF0;
loc_8266DAEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266DAF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266DAF8"))) PPC_WEAK_FUNC(sub_8266DAF8);
PPC_FUNC_IMPL(__imp__sub_8266DAF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266DB00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,420
	ctx.r3.s64 = 420;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266DB18;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266db34
	if (ctx.cr0.eq) goto loc_8266DB34;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82740618
	ctx.lr = 0x8266DB30;
	sub_82740618(ctx, base);
	// b 0x8266db38
	goto loc_8266DB38;
loc_8266DB34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266DB38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266DB40"))) PPC_WEAK_FUNC(sub_8266DB40);
PPC_FUNC_IMPL(__imp__sub_8266DB40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8266DB48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,364
	ctx.r3.s64 = 364;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266DB60;
	sub_82C0F6C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8266dba0
	if (ctx.cr0.eq) goto loc_8266DBA0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d3bd0
	ctx.lr = 0x8266DB80;
	sub_825D3BD0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,28068
	ctx.r11.s64 = ctx.r11.s64 + 28068;
	// addi r10,r10,28056
	ctx.r10.s64 = ctx.r10.s64 + 28056;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x8266dba4
	goto loc_8266DBA4;
loc_8266DBA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266DBA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266DBB0"))) PPC_WEAK_FUNC(sub_8266DBB0);
PPC_FUNC_IMPL(__imp__sub_8266DBB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8266DBB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,880
	ctx.r3.s64 = 880;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266DBD0;
	sub_82C0F6C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8266dc0c
	if (ctx.cr0.eq) goto loc_8266DC0C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8275b4a0
	ctx.lr = 0x8266DBEC;
	sub_8275B4A0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,32708
	ctx.r11.s64 = ctx.r11.s64 + 32708;
	// addi r10,r10,32696
	ctx.r10.s64 = ctx.r10.s64 + 32696;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x8266dc10
	goto loc_8266DC10;
loc_8266DC0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266DC10:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266DC18"))) PPC_WEAK_FUNC(sub_8266DC18);
PPC_FUNC_IMPL(__imp__sub_8266DC18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266DC20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1328
	ctx.r3.s64 = 1328;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266DC38;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266dc54
	if (ctx.cr0.eq) goto loc_8266DC54;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826c0988
	ctx.lr = 0x8266DC50;
	sub_826C0988(ctx, base);
	// b 0x8266dc58
	goto loc_8266DC58;
loc_8266DC54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266DC58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266DC60"))) PPC_WEAK_FUNC(sub_8266DC60);
PPC_FUNC_IMPL(__imp__sub_8266DC60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266DC68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,912
	ctx.r3.s64 = 912;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266DC80;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266dc9c
	if (ctx.cr0.eq) goto loc_8266DC9C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82669408
	ctx.lr = 0x8266DC98;
	sub_82669408(ctx, base);
	// b 0x8266dca0
	goto loc_8266DCA0;
loc_8266DC9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266DCA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266DCA8"))) PPC_WEAK_FUNC(sub_8266DCA8);
PPC_FUNC_IMPL(__imp__sub_8266DCA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266DCB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1448
	ctx.r3.s64 = 1448;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266DCC8;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266dce4
	if (ctx.cr0.eq) goto loc_8266DCE4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827bf8f0
	ctx.lr = 0x8266DCE0;
	sub_827BF8F0(ctx, base);
	// b 0x8266dce8
	goto loc_8266DCE8;
loc_8266DCE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266DCE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266DCF0"))) PPC_WEAK_FUNC(sub_8266DCF0);
PPC_FUNC_IMPL(__imp__sub_8266DCF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266DCF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,388
	ctx.r3.s64 = 388;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266DD10;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266dd2c
	if (ctx.cr0.eq) goto loc_8266DD2C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82669478
	ctx.lr = 0x8266DD28;
	sub_82669478(ctx, base);
	// b 0x8266dd30
	goto loc_8266DD30;
loc_8266DD2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266DD30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266DD38"))) PPC_WEAK_FUNC(sub_8266DD38);
PPC_FUNC_IMPL(__imp__sub_8266DD38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8266DD40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,364
	ctx.r3.s64 = 364;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266DD58;
	sub_82C0F6C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8266dda0
	if (ctx.cr0.eq) goto loc_8266DDA0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d3bd0
	ctx.lr = 0x8266DD78;
	sub_825D3BD0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-31644
	ctx.r11.s64 = ctx.r11.s64 + -31644;
	// addi r10,r10,-31656
	ctx.r10.s64 = ctx.r10.s64 + -31656;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r9.u32);
	// b 0x8266dda4
	goto loc_8266DDA4;
loc_8266DDA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266DDA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266DDB0"))) PPC_WEAK_FUNC(sub_8266DDB0);
PPC_FUNC_IMPL(__imp__sub_8266DDB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266DDB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,428
	ctx.r3.s64 = 428;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266DDD0;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266ddec
	if (ctx.cr0.eq) goto loc_8266DDEC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82780e60
	ctx.lr = 0x8266DDE8;
	sub_82780E60(ctx, base);
	// b 0x8266ddf0
	goto loc_8266DDF0;
loc_8266DDEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266DDF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266DDF8"))) PPC_WEAK_FUNC(sub_8266DDF8);
PPC_FUNC_IMPL(__imp__sub_8266DDF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266DE00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,376
	ctx.r3.s64 = 376;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266DE18;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266de34
	if (ctx.cr0.eq) goto loc_8266DE34;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826694f0
	ctx.lr = 0x8266DE30;
	sub_826694F0(ctx, base);
	// b 0x8266de38
	goto loc_8266DE38;
loc_8266DE34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266DE38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266DE40"))) PPC_WEAK_FUNC(sub_8266DE40);
PPC_FUNC_IMPL(__imp__sub_8266DE40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266DE48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,364
	ctx.r3.s64 = 364;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266DE60;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266de7c
	if (ctx.cr0.eq) goto loc_8266DE7C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825d6718
	ctx.lr = 0x8266DE78;
	sub_825D6718(ctx, base);
	// b 0x8266de80
	goto loc_8266DE80;
loc_8266DE7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266DE80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266DE88"))) PPC_WEAK_FUNC(sub_8266DE88);
PPC_FUNC_IMPL(__imp__sub_8266DE88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266DE90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,512
	ctx.r3.s64 = 512;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266DEA8;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266dec4
	if (ctx.cr0.eq) goto loc_8266DEC4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8277b268
	ctx.lr = 0x8266DEC0;
	sub_8277B268(ctx, base);
	// b 0x8266dec8
	goto loc_8266DEC8;
loc_8266DEC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266DEC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266DED0"))) PPC_WEAK_FUNC(sub_8266DED0);
PPC_FUNC_IMPL(__imp__sub_8266DED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266DED8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,412
	ctx.r3.s64 = 412;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266DEF0;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266df0c
	if (ctx.cr0.eq) goto loc_8266DF0C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82668a18
	ctx.lr = 0x8266DF08;
	sub_82668A18(ctx, base);
	// b 0x8266df10
	goto loc_8266DF10;
loc_8266DF0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266DF10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266DF18"))) PPC_WEAK_FUNC(sub_8266DF18);
PPC_FUNC_IMPL(__imp__sub_8266DF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266DF20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,388
	ctx.r3.s64 = 388;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266DF38;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266df54
	if (ctx.cr0.eq) goto loc_8266DF54;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82669558
	ctx.lr = 0x8266DF50;
	sub_82669558(ctx, base);
	// b 0x8266df58
	goto loc_8266DF58;
loc_8266DF54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266DF58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266DF60"))) PPC_WEAK_FUNC(sub_8266DF60);
PPC_FUNC_IMPL(__imp__sub_8266DF60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266DF68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,800
	ctx.r3.s64 = 800;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266DF80;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266df9c
	if (ctx.cr0.eq) goto loc_8266DF9C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82765310
	ctx.lr = 0x8266DF98;
	sub_82765310(ctx, base);
	// b 0x8266dfa0
	goto loc_8266DFA0;
loc_8266DF9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266DFA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266DFA8"))) PPC_WEAK_FUNC(sub_8266DFA8);
PPC_FUNC_IMPL(__imp__sub_8266DFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266DFB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,396
	ctx.r3.s64 = 396;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266DFC8;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266dfe4
	if (ctx.cr0.eq) goto loc_8266DFE4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825d6888
	ctx.lr = 0x8266DFE0;
	sub_825D6888(ctx, base);
	// b 0x8266dfe8
	goto loc_8266DFE8;
loc_8266DFE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266DFE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266DFF0"))) PPC_WEAK_FUNC(sub_8266DFF0);
PPC_FUNC_IMPL(__imp__sub_8266DFF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266DFF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,8608
	ctx.r3.s64 = 8608;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266E010;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266e02c
	if (ctx.cr0.eq) goto loc_8266E02C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82772d50
	ctx.lr = 0x8266E028;
	sub_82772D50(ctx, base);
	// b 0x8266e030
	goto loc_8266E030;
loc_8266E02C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266E030:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E038"))) PPC_WEAK_FUNC(sub_8266E038);
PPC_FUNC_IMPL(__imp__sub_8266E038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266E040;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,388
	ctx.r3.s64 = 388;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266E058;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266e074
	if (ctx.cr0.eq) goto loc_8266E074;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82669390
	ctx.lr = 0x8266E070;
	sub_82669390(ctx, base);
	// b 0x8266e078
	goto loc_8266E078;
loc_8266E074:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266E078:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E080"))) PPC_WEAK_FUNC(sub_8266E080);
PPC_FUNC_IMPL(__imp__sub_8266E080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266E088;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1384
	ctx.r3.s64 = 1384;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266E0A0;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266e0bc
	if (ctx.cr0.eq) goto loc_8266E0BC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8278c078
	ctx.lr = 0x8266E0B8;
	sub_8278C078(ctx, base);
	// b 0x8266e0c0
	goto loc_8266E0C0;
loc_8266E0BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266E0C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E0C8"))) PPC_WEAK_FUNC(sub_8266E0C8);
PPC_FUNC_IMPL(__imp__sub_8266E0C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266E0D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,376
	ctx.r3.s64 = 376;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266E0E8;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266e104
	if (ctx.cr0.eq) goto loc_8266E104;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826695d8
	ctx.lr = 0x8266E100;
	sub_826695D8(ctx, base);
	// b 0x8266e108
	goto loc_8266E108;
loc_8266E104:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266E108:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E110"))) PPC_WEAK_FUNC(sub_8266E110);
PPC_FUNC_IMPL(__imp__sub_8266E110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266E118;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,408
	ctx.r3.s64 = 408;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266E130;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266e14c
	if (ctx.cr0.eq) goto loc_8266E14C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82766298
	ctx.lr = 0x8266E148;
	sub_82766298(ctx, base);
	// b 0x8266e150
	goto loc_8266E150;
loc_8266E14C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266E150:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E158"))) PPC_WEAK_FUNC(sub_8266E158);
PPC_FUNC_IMPL(__imp__sub_8266E158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266E160;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,408
	ctx.r3.s64 = 408;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266E178;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266e194
	if (ctx.cr0.eq) goto loc_8266E194;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82766190
	ctx.lr = 0x8266E190;
	sub_82766190(ctx, base);
	// b 0x8266e198
	goto loc_8266E198;
loc_8266E194:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266E198:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E1A0"))) PPC_WEAK_FUNC(sub_8266E1A0);
PPC_FUNC_IMPL(__imp__sub_8266E1A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266E1A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,408
	ctx.r3.s64 = 408;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266E1C0;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266e1dc
	if (ctx.cr0.eq) goto loc_8266E1DC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82765fc8
	ctx.lr = 0x8266E1D8;
	sub_82765FC8(ctx, base);
	// b 0x8266e1e0
	goto loc_8266E1E0;
loc_8266E1DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266E1E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E1E8"))) PPC_WEAK_FUNC(sub_8266E1E8);
PPC_FUNC_IMPL(__imp__sub_8266E1E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266E1F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,540
	ctx.r3.s64 = 540;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266E208;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266e224
	if (ctx.cr0.eq) goto loc_8266E224;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82768d18
	ctx.lr = 0x8266E220;
	sub_82768D18(ctx, base);
	// b 0x8266e228
	goto loc_8266E228;
loc_8266E224:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266E228:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E230"))) PPC_WEAK_FUNC(sub_8266E230);
PPC_FUNC_IMPL(__imp__sub_8266E230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266E238;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,640
	ctx.r3.s64 = 640;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266E250;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266e26c
	if (ctx.cr0.eq) goto loc_8266E26C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82766c18
	ctx.lr = 0x8266E268;
	sub_82766C18(ctx, base);
	// b 0x8266e270
	goto loc_8266E270;
loc_8266E26C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266E270:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E278"))) PPC_WEAK_FUNC(sub_8266E278);
PPC_FUNC_IMPL(__imp__sub_8266E278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266E280;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,784
	ctx.r3.s64 = 784;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266E298;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266e2b4
	if (ctx.cr0.eq) goto loc_8266E2B4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82770a88
	ctx.lr = 0x8266E2B0;
	sub_82770A88(ctx, base);
	// b 0x8266e2b8
	goto loc_8266E2B8;
loc_8266E2B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266E2B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E2C0"))) PPC_WEAK_FUNC(sub_8266E2C0);
PPC_FUNC_IMPL(__imp__sub_8266E2C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266E2C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,472
	ctx.r3.s64 = 472;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266E2E0;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266e2fc
	if (ctx.cr0.eq) goto loc_8266E2FC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82768588
	ctx.lr = 0x8266E2F8;
	sub_82768588(ctx, base);
	// b 0x8266e300
	goto loc_8266E300;
loc_8266E2FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266E300:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E308"))) PPC_WEAK_FUNC(sub_8266E308);
PPC_FUNC_IMPL(__imp__sub_8266E308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266E310;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,472
	ctx.r3.s64 = 472;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266E328;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266e344
	if (ctx.cr0.eq) goto loc_8266E344;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8276d438
	ctx.lr = 0x8266E340;
	sub_8276D438(ctx, base);
	// b 0x8266e348
	goto loc_8266E348;
loc_8266E344:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266E348:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E350"))) PPC_WEAK_FUNC(sub_8266E350);
PPC_FUNC_IMPL(__imp__sub_8266E350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266E358;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,464
	ctx.r3.s64 = 464;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266E370;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266e38c
	if (ctx.cr0.eq) goto loc_8266E38C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827677e0
	ctx.lr = 0x8266E388;
	sub_827677E0(ctx, base);
	// b 0x8266e390
	goto loc_8266E390;
loc_8266E38C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266E390:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E398"))) PPC_WEAK_FUNC(sub_8266E398);
PPC_FUNC_IMPL(__imp__sub_8266E398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266E3A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,668
	ctx.r3.s64 = 668;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266E3B8;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266e3d4
	if (ctx.cr0.eq) goto loc_8266E3D4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8277da70
	ctx.lr = 0x8266E3D0;
	sub_8277DA70(ctx, base);
	// b 0x8266e3d8
	goto loc_8266E3D8;
loc_8266E3D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266E3D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E3E0"))) PPC_WEAK_FUNC(sub_8266E3E0);
PPC_FUNC_IMPL(__imp__sub_8266E3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266E3E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,612
	ctx.r3.s64 = 612;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266E400;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266e41c
	if (ctx.cr0.eq) goto loc_8266E41C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82768fe8
	ctx.lr = 0x8266E418;
	sub_82768FE8(ctx, base);
	// b 0x8266e420
	goto loc_8266E420;
loc_8266E41C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266E420:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E428"))) PPC_WEAK_FUNC(sub_8266E428);
PPC_FUNC_IMPL(__imp__sub_8266E428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266E430;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,496
	ctx.r3.s64 = 496;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266E448;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266e464
	if (ctx.cr0.eq) goto loc_8266E464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82769750
	ctx.lr = 0x8266E460;
	sub_82769750(ctx, base);
	// b 0x8266e468
	goto loc_8266E468;
loc_8266E464:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266E468:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E470"))) PPC_WEAK_FUNC(sub_8266E470);
PPC_FUNC_IMPL(__imp__sub_8266E470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266E478;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,380
	ctx.r3.s64 = 380;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266E490;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266e4ac
	if (ctx.cr0.eq) goto loc_8266E4AC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82769cc0
	ctx.lr = 0x8266E4A8;
	sub_82769CC0(ctx, base);
	// b 0x8266e4b0
	goto loc_8266E4B0;
loc_8266E4AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266E4B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E4B8"))) PPC_WEAK_FUNC(sub_8266E4B8);
PPC_FUNC_IMPL(__imp__sub_8266E4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266E4C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,744
	ctx.r3.s64 = 744;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266E4D8;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266e4f4
	if (ctx.cr0.eq) goto loc_8266E4F4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8277fcf8
	ctx.lr = 0x8266E4F0;
	sub_8277FCF8(ctx, base);
	// b 0x8266e4f8
	goto loc_8266E4F8;
loc_8266E4F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266E4F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E500"))) PPC_WEAK_FUNC(sub_8266E500);
PPC_FUNC_IMPL(__imp__sub_8266E500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266E508;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,432
	ctx.r3.s64 = 432;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266E520;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266e53c
	if (ctx.cr0.eq) goto loc_8266E53C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82784990
	ctx.lr = 0x8266E538;
	sub_82784990(ctx, base);
	// b 0x8266e540
	goto loc_8266E540;
loc_8266E53C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266E540:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E548"))) PPC_WEAK_FUNC(sub_8266E548);
PPC_FUNC_IMPL(__imp__sub_8266E548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266E550;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,360
	ctx.r3.s64 = 360;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266E568;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266e584
	if (ctx.cr0.eq) goto loc_8266E584;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825d47c8
	ctx.lr = 0x8266E580;
	sub_825D47C8(ctx, base);
	// b 0x8266e588
	goto loc_8266E588;
loc_8266E584:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266E588:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E590"))) PPC_WEAK_FUNC(sub_8266E590);
PPC_FUNC_IMPL(__imp__sub_8266E590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266E598;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,652
	ctx.r3.s64 = 652;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266E5B0;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266e5cc
	if (ctx.cr0.eq) goto loc_8266E5CC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82787818
	ctx.lr = 0x8266E5C8;
	sub_82787818(ctx, base);
	// b 0x8266e5d0
	goto loc_8266E5D0;
loc_8266E5CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266E5D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E5D8"))) PPC_WEAK_FUNC(sub_8266E5D8);
PPC_FUNC_IMPL(__imp__sub_8266E5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266E5E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,704
	ctx.r3.s64 = 704;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266E5F8;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266e614
	if (ctx.cr0.eq) goto loc_8266E614;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827a5778
	ctx.lr = 0x8266E610;
	sub_827A5778(ctx, base);
	// b 0x8266e618
	goto loc_8266E618;
loc_8266E614:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266E618:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E620"))) PPC_WEAK_FUNC(sub_8266E620);
PPC_FUNC_IMPL(__imp__sub_8266E620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266E628;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,496
	ctx.r3.s64 = 496;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266E640;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266e65c
	if (ctx.cr0.eq) goto loc_8266E65C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82783a50
	ctx.lr = 0x8266E658;
	sub_82783A50(ctx, base);
	// b 0x8266e660
	goto loc_8266E660;
loc_8266E65C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266E660:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E668"))) PPC_WEAK_FUNC(sub_8266E668);
PPC_FUNC_IMPL(__imp__sub_8266E668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8266E670;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,360
	ctx.r3.s64 = 360;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266E688;
	sub_82C0F6C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8266e6c8
	if (ctx.cr0.eq) goto loc_8266E6C8;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d3bd0
	ctx.lr = 0x8266E6A8;
	sub_825D3BD0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-32476
	ctx.r11.s64 = ctx.r11.s64 + -32476;
	// addi r10,r10,-32488
	ctx.r10.s64 = ctx.r10.s64 + -32488;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x8266e6cc
	goto loc_8266E6CC;
loc_8266E6C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266E6CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E6D8"))) PPC_WEAK_FUNC(sub_8266E6D8);
PPC_FUNC_IMPL(__imp__sub_8266E6D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266E6E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,396
	ctx.r3.s64 = 396;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266E6F8;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266e714
	if (ctx.cr0.eq) goto loc_8266E714;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82783b50
	ctx.lr = 0x8266E710;
	sub_82783B50(ctx, base);
	// b 0x8266e718
	goto loc_8266E718;
loc_8266E714:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266E718:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E720"))) PPC_WEAK_FUNC(sub_8266E720);
PPC_FUNC_IMPL(__imp__sub_8266E720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266E728;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,428
	ctx.r3.s64 = 428;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266E740;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266e75c
	if (ctx.cr0.eq) goto loc_8266E75C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82788878
	ctx.lr = 0x8266E758;
	sub_82788878(ctx, base);
	// b 0x8266e760
	goto loc_8266E760;
loc_8266E75C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266E760:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E768"))) PPC_WEAK_FUNC(sub_8266E768);
PPC_FUNC_IMPL(__imp__sub_8266E768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266E770;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,480
	ctx.r3.s64 = 480;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266E788;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266e7a4
	if (ctx.cr0.eq) goto loc_8266E7A4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8293f8b0
	ctx.lr = 0x8266E7A0;
	sub_8293F8B0(ctx, base);
	// b 0x8266e7a8
	goto loc_8266E7A8;
loc_8266E7A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266E7A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E7B0"))) PPC_WEAK_FUNC(sub_8266E7B0);
PPC_FUNC_IMPL(__imp__sub_8266E7B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266E7B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,480
	ctx.r3.s64 = 480;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266E7D0;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266e7ec
	if (ctx.cr0.eq) goto loc_8266E7EC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82785310
	ctx.lr = 0x8266E7E8;
	sub_82785310(ctx, base);
	// b 0x8266e7f0
	goto loc_8266E7F0;
loc_8266E7EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266E7F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E7F8"))) PPC_WEAK_FUNC(sub_8266E7F8);
PPC_FUNC_IMPL(__imp__sub_8266E7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266E800;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,380
	ctx.r3.s64 = 380;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266E818;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266e834
	if (ctx.cr0.eq) goto loc_8266E834;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82669638
	ctx.lr = 0x8266E830;
	sub_82669638(ctx, base);
	// b 0x8266e838
	goto loc_8266E838;
loc_8266E834:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266E838:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E840"))) PPC_WEAK_FUNC(sub_8266E840);
PPC_FUNC_IMPL(__imp__sub_8266E840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266E848;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,364
	ctx.r3.s64 = 364;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266E860;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266e87c
	if (ctx.cr0.eq) goto loc_8266E87C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82785f08
	ctx.lr = 0x8266E878;
	sub_82785F08(ctx, base);
	// b 0x8266e880
	goto loc_8266E880;
loc_8266E87C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266E880:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E888"))) PPC_WEAK_FUNC(sub_8266E888);
PPC_FUNC_IMPL(__imp__sub_8266E888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266E890;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,612
	ctx.r3.s64 = 612;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266E8A8;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266e8c4
	if (ctx.cr0.eq) goto loc_8266E8C4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82786008
	ctx.lr = 0x8266E8C0;
	sub_82786008(ctx, base);
	// b 0x8266e8c8
	goto loc_8266E8C8;
loc_8266E8C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266E8C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E8D0"))) PPC_WEAK_FUNC(sub_8266E8D0);
PPC_FUNC_IMPL(__imp__sub_8266E8D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266E8D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,380
	ctx.r3.s64 = 380;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266E8F0;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266e90c
	if (ctx.cr0.eq) goto loc_8266E90C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827863f8
	ctx.lr = 0x8266E908;
	sub_827863F8(ctx, base);
	// b 0x8266e910
	goto loc_8266E910;
loc_8266E90C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266E910:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E918"))) PPC_WEAK_FUNC(sub_8266E918);
PPC_FUNC_IMPL(__imp__sub_8266E918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8266E920;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,360
	ctx.r3.s64 = 360;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266E938;
	sub_82C0F6C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8266e978
	if (ctx.cr0.eq) goto loc_8266E978;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d3bd0
	ctx.lr = 0x8266E958;
	sub_825D3BD0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-30444
	ctx.r11.s64 = ctx.r11.s64 + -30444;
	// addi r10,r10,-30456
	ctx.r10.s64 = ctx.r10.s64 + -30456;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x8266e97c
	goto loc_8266E97C;
loc_8266E978:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266E97C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E988"))) PPC_WEAK_FUNC(sub_8266E988);
PPC_FUNC_IMPL(__imp__sub_8266E988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266E990;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,504
	ctx.r3.s64 = 504;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266E9A8;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266e9c4
	if (ctx.cr0.eq) goto loc_8266E9C4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82782148
	ctx.lr = 0x8266E9C0;
	sub_82782148(ctx, base);
	// b 0x8266e9c8
	goto loc_8266E9C8;
loc_8266E9C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266E9C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E9D0"))) PPC_WEAK_FUNC(sub_8266E9D0);
PPC_FUNC_IMPL(__imp__sub_8266E9D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266E9D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,672
	ctx.r3.s64 = 672;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266E9F0;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266ea0c
	if (ctx.cr0.eq) goto loc_8266EA0C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8278a688
	ctx.lr = 0x8266EA08;
	sub_8278A688(ctx, base);
	// b 0x8266ea10
	goto loc_8266EA10;
loc_8266EA0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266EA10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266EA18"))) PPC_WEAK_FUNC(sub_8266EA18);
PPC_FUNC_IMPL(__imp__sub_8266EA18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266EA20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,564
	ctx.r3.s64 = 564;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266EA38;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266ea54
	if (ctx.cr0.eq) goto loc_8266EA54;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82786638
	ctx.lr = 0x8266EA50;
	sub_82786638(ctx, base);
	// b 0x8266ea58
	goto loc_8266EA58;
loc_8266EA54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266EA58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266EA60"))) PPC_WEAK_FUNC(sub_8266EA60);
PPC_FUNC_IMPL(__imp__sub_8266EA60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266EA68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,416
	ctx.r3.s64 = 416;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266EA80;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266ea9c
	if (ctx.cr0.eq) goto loc_8266EA9C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827826f8
	ctx.lr = 0x8266EA98;
	sub_827826F8(ctx, base);
	// b 0x8266eaa0
	goto loc_8266EAA0;
loc_8266EA9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266EAA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266EAA8"))) PPC_WEAK_FUNC(sub_8266EAA8);
PPC_FUNC_IMPL(__imp__sub_8266EAA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266EAB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,500
	ctx.r3.s64 = 500;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266EAC8;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266eae4
	if (ctx.cr0.eq) goto loc_8266EAE4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8278f0e0
	ctx.lr = 0x8266EAE0;
	sub_8278F0E0(ctx, base);
	// b 0x8266eae8
	goto loc_8266EAE8;
loc_8266EAE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266EAE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266EAF0"))) PPC_WEAK_FUNC(sub_8266EAF0);
PPC_FUNC_IMPL(__imp__sub_8266EAF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266EAF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,416
	ctx.r3.s64 = 416;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266EB10;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266eb2c
	if (ctx.cr0.eq) goto loc_8266EB2C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8278f208
	ctx.lr = 0x8266EB28;
	sub_8278F208(ctx, base);
	// b 0x8266eb30
	goto loc_8266EB30;
loc_8266EB2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266EB30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266EB38"))) PPC_WEAK_FUNC(sub_8266EB38);
PPC_FUNC_IMPL(__imp__sub_8266EB38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8266EB40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,360
	ctx.r3.s64 = 360;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266EB58;
	sub_82C0F6C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8266eb98
	if (ctx.cr0.eq) goto loc_8266EB98;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d3bd0
	ctx.lr = 0x8266EB78;
	sub_825D3BD0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-30204
	ctx.r11.s64 = ctx.r11.s64 + -30204;
	// addi r10,r10,-30216
	ctx.r10.s64 = ctx.r10.s64 + -30216;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x8266eb9c
	goto loc_8266EB9C;
loc_8266EB98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266EB9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266EBA8"))) PPC_WEAK_FUNC(sub_8266EBA8);
PPC_FUNC_IMPL(__imp__sub_8266EBA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266EBB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,400
	ctx.r3.s64 = 400;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266EBC8;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266ebe4
	if (ctx.cr0.eq) goto loc_8266EBE4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82786fd0
	ctx.lr = 0x8266EBE0;
	sub_82786FD0(ctx, base);
	// b 0x8266ebe8
	goto loc_8266EBE8;
loc_8266EBE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266EBE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266EBF0"))) PPC_WEAK_FUNC(sub_8266EBF0);
PPC_FUNC_IMPL(__imp__sub_8266EBF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266EBF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r3,4
	ctx.r3.s64 = 262144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ori r3,r3,36632
	ctx.r3.u64 = ctx.r3.u64 | 36632;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266EC14;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266ec30
	if (ctx.cr0.eq) goto loc_8266EC30;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827a9ff8
	ctx.lr = 0x8266EC2C;
	sub_827A9FF8(ctx, base);
	// b 0x8266ec34
	goto loc_8266EC34;
loc_8266EC30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266EC34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266EC40"))) PPC_WEAK_FUNC(sub_8266EC40);
PPC_FUNC_IMPL(__imp__sub_8266EC40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266EC48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,672
	ctx.r3.s64 = 672;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266EC60;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266ec7c
	if (ctx.cr0.eq) goto loc_8266EC7C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827d25a8
	ctx.lr = 0x8266EC78;
	sub_827D25A8(ctx, base);
	// b 0x8266ec80
	goto loc_8266EC80;
loc_8266EC7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266EC80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266EC88"))) PPC_WEAK_FUNC(sub_8266EC88);
PPC_FUNC_IMPL(__imp__sub_8266EC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266EC90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,3316
	ctx.r3.s64 = 3316;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266ECA8;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266ecc4
	if (ctx.cr0.eq) goto loc_8266ECC4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827b9c78
	ctx.lr = 0x8266ECC0;
	sub_827B9C78(ctx, base);
	// b 0x8266ecc8
	goto loc_8266ECC8;
loc_8266ECC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266ECC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266ECD0"))) PPC_WEAK_FUNC(sub_8266ECD0);
PPC_FUNC_IMPL(__imp__sub_8266ECD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266ECD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,392
	ctx.r3.s64 = 392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266ECF0;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266ed0c
	if (ctx.cr0.eq) goto loc_8266ED0C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827a8bb8
	ctx.lr = 0x8266ED08;
	sub_827A8BB8(ctx, base);
	// b 0x8266ed10
	goto loc_8266ED10;
loc_8266ED0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266ED10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266ED18"))) PPC_WEAK_FUNC(sub_8266ED18);
PPC_FUNC_IMPL(__imp__sub_8266ED18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266ED20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1096
	ctx.r3.s64 = 1096;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266ED38;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266ed54
	if (ctx.cr0.eq) goto loc_8266ED54;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827b6d18
	ctx.lr = 0x8266ED50;
	sub_827B6D18(ctx, base);
	// b 0x8266ed58
	goto loc_8266ED58;
loc_8266ED54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266ED58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266ED60"))) PPC_WEAK_FUNC(sub_8266ED60);
PPC_FUNC_IMPL(__imp__sub_8266ED60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266ED68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,368
	ctx.r3.s64 = 368;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266ED80;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266ed9c
	if (ctx.cr0.eq) goto loc_8266ED9C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827ab490
	ctx.lr = 0x8266ED98;
	sub_827AB490(ctx, base);
	// b 0x8266eda0
	goto loc_8266EDA0;
loc_8266ED9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266EDA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266EDA8"))) PPC_WEAK_FUNC(sub_8266EDA8);
PPC_FUNC_IMPL(__imp__sub_8266EDA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266EDB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,372
	ctx.r3.s64 = 372;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266EDC8;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266ede4
	if (ctx.cr0.eq) goto loc_8266EDE4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827ab590
	ctx.lr = 0x8266EDE0;
	sub_827AB590(ctx, base);
	// b 0x8266ede8
	goto loc_8266EDE8;
loc_8266EDE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266EDE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266EDF0"))) PPC_WEAK_FUNC(sub_8266EDF0);
PPC_FUNC_IMPL(__imp__sub_8266EDF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266EDF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,540
	ctx.r3.s64 = 540;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266EE10;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266ee2c
	if (ctx.cr0.eq) goto loc_8266EE2C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827a7750
	ctx.lr = 0x8266EE28;
	sub_827A7750(ctx, base);
	// b 0x8266ee30
	goto loc_8266EE30;
loc_8266EE2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266EE30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266EE38"))) PPC_WEAK_FUNC(sub_8266EE38);
PPC_FUNC_IMPL(__imp__sub_8266EE38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266EE40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,380
	ctx.r3.s64 = 380;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266EE58;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266ee74
	if (ctx.cr0.eq) goto loc_8266EE74;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82669840
	ctx.lr = 0x8266EE70;
	sub_82669840(ctx, base);
	// b 0x8266ee78
	goto loc_8266EE78;
loc_8266EE74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266EE78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266EE80"))) PPC_WEAK_FUNC(sub_8266EE80);
PPC_FUNC_IMPL(__imp__sub_8266EE80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266EE88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,796
	ctx.r3.s64 = 796;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266EEA0;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266eebc
	if (ctx.cr0.eq) goto loc_8266EEBC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827b35a0
	ctx.lr = 0x8266EEB8;
	sub_827B35A0(ctx, base);
	// b 0x8266eec0
	goto loc_8266EEC0;
loc_8266EEBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266EEC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266EEC8"))) PPC_WEAK_FUNC(sub_8266EEC8);
PPC_FUNC_IMPL(__imp__sub_8266EEC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266EED0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,364
	ctx.r3.s64 = 364;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266EEE8;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266ef04
	if (ctx.cr0.eq) goto loc_8266EF04;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827ab788
	ctx.lr = 0x8266EF00;
	sub_827AB788(ctx, base);
	// b 0x8266ef08
	goto loc_8266EF08;
loc_8266EF04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266EF08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266EF10"))) PPC_WEAK_FUNC(sub_8266EF10);
PPC_FUNC_IMPL(__imp__sub_8266EF10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266EF18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,832
	ctx.r3.s64 = 832;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266EF30;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266ef4c
	if (ctx.cr0.eq) goto loc_8266EF4C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827d2270
	ctx.lr = 0x8266EF48;
	sub_827D2270(ctx, base);
	// b 0x8266ef50
	goto loc_8266EF50;
loc_8266EF4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266EF50:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266EF58"))) PPC_WEAK_FUNC(sub_8266EF58);
PPC_FUNC_IMPL(__imp__sub_8266EF58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266EF60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,396
	ctx.r3.s64 = 396;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266EF78;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266ef94
	if (ctx.cr0.eq) goto loc_8266EF94;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827d0710
	ctx.lr = 0x8266EF90;
	sub_827D0710(ctx, base);
	// b 0x8266ef98
	goto loc_8266EF98;
loc_8266EF94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266EF98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266EFA0"))) PPC_WEAK_FUNC(sub_8266EFA0);
PPC_FUNC_IMPL(__imp__sub_8266EFA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266EFA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,416
	ctx.r3.s64 = 416;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266EFC0;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266efdc
	if (ctx.cr0.eq) goto loc_8266EFDC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827b8398
	ctx.lr = 0x8266EFD8;
	sub_827B8398(ctx, base);
	// b 0x8266efe0
	goto loc_8266EFE0;
loc_8266EFDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266EFE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266EFE8"))) PPC_WEAK_FUNC(sub_8266EFE8);
PPC_FUNC_IMPL(__imp__sub_8266EFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266EFF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,396
	ctx.r3.s64 = 396;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266F008;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266f024
	if (ctx.cr0.eq) goto loc_8266F024;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827ab900
	ctx.lr = 0x8266F020;
	sub_827AB900(ctx, base);
	// b 0x8266f028
	goto loc_8266F028;
loc_8266F024:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266F028:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266F030"))) PPC_WEAK_FUNC(sub_8266F030);
PPC_FUNC_IMPL(__imp__sub_8266F030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266F038;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,404
	ctx.r3.s64 = 404;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266F050;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266f06c
	if (ctx.cr0.eq) goto loc_8266F06C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827abe10
	ctx.lr = 0x8266F068;
	sub_827ABE10(ctx, base);
	// b 0x8266f070
	goto loc_8266F070;
loc_8266F06C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266F070:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266F078"))) PPC_WEAK_FUNC(sub_8266F078);
PPC_FUNC_IMPL(__imp__sub_8266F078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266F080;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,360
	ctx.r3.s64 = 360;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266F098;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266f0b4
	if (ctx.cr0.eq) goto loc_8266F0B4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8273f2b0
	ctx.lr = 0x8266F0B0;
	sub_8273F2B0(ctx, base);
	// b 0x8266f0b8
	goto loc_8266F0B8;
loc_8266F0B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266F0B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266F0C0"))) PPC_WEAK_FUNC(sub_8266F0C0);
PPC_FUNC_IMPL(__imp__sub_8266F0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266F0C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,416
	ctx.r3.s64 = 416;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266F0E0;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266f0fc
	if (ctx.cr0.eq) goto loc_8266F0FC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825d5ea0
	ctx.lr = 0x8266F0F8;
	sub_825D5EA0(ctx, base);
	// b 0x8266f100
	goto loc_8266F100;
loc_8266F0FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266F100:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266F108"))) PPC_WEAK_FUNC(sub_8266F108);
PPC_FUNC_IMPL(__imp__sub_8266F108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266F110;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,364
	ctx.r3.s64 = 364;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266F128;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266f144
	if (ctx.cr0.eq) goto loc_8266F144;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825d6560
	ctx.lr = 0x8266F140;
	sub_825D6560(ctx, base);
	// b 0x8266f148
	goto loc_8266F148;
loc_8266F144:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266F148:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266F150"))) PPC_WEAK_FUNC(sub_8266F150);
PPC_FUNC_IMPL(__imp__sub_8266F150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266F158;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,768
	ctx.r3.s64 = 768;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x8266F170;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266f18c
	if (ctx.cr0.eq) goto loc_8266F18C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825e06c0
	ctx.lr = 0x8266F188;
	sub_825E06C0(ctx, base);
	// b 0x8266f190
	goto loc_8266F190;
loc_8266F18C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266F190:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266F198"))) PPC_WEAK_FUNC(sub_8266F198);
PPC_FUNC_IMPL(__imp__sub_8266F198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266F1A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e5ccf0
	ctx.lr = 0x8266F1B0;
	sub_82E5CCF0(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r5,r11,-21400
	ctx.r5.s64 = ctx.r11.s64 + -21400;
	// addi r6,r10,-3320
	ctx.r6.s64 = ctx.r10.s64 + -3320;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x823e4818
	ctx.lr = 0x8266F1CC;
	sub_823E4818(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830b2320
	ctx.lr = 0x8266F1E0;
	sub_830B2320(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266F1F0"))) PPC_WEAK_FUNC(sub_8266F1F0);
PPC_FUNC_IMPL(__imp__sub_8266F1F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8266F1F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// bl 0x826a0ed8
	ctx.lr = 0x8266F210;
	sub_826A0ED8(ctx, base);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x8266f224
	if (!ctx.cr6.eq) goto loc_8266F224;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x8266f2ac
	goto loc_8266F2AC;
loc_8266F224:
	// cmpwi cr6,r31,-2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -2, ctx.xer);
	// bne cr6,0x8266f240
	if (!ctx.cr6.eq) goto loc_8266F240;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x824e4f78
	ctx.lr = 0x8266F238;
	sub_824E4F78(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// b 0x8266f2b0
	goto loc_8266F2B0;
loc_8266F240:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x8266f25c
	if (!ctx.cr6.eq) goto loc_8266F25C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8266f2a8
	goto loc_8266F2A8;
loc_8266F25C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8266f290
	if (!ctx.cr6.eq) goto loc_8266F290;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,-1
	ctx.r9.s64 = -1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// b 0x8266f2b0
	goto loc_8266F2B0;
loc_8266F290:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,-4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_8266F2A8:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8266F2AC:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_8266F2B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266F2B8"))) PPC_WEAK_FUNC(sub_8266F2B8);
PPC_FUNC_IMPL(__imp__sub_8266F2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266F2C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e5d1d0
	ctx.lr = 0x8266F2D0;
	sub_82E5D1D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8266f2e0
	if (!ctx.cr0.eq) goto loc_8266F2E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8266f320
	goto loc_8266F320;
loc_8266F2E0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e5ccf0
	ctx.lr = 0x8266F2EC;
	sub_82E5CCF0(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r5,r11,-21400
	ctx.r5.s64 = ctx.r11.s64 + -21400;
	// addi r6,r10,-21372
	ctx.r6.s64 = ctx.r10.s64 + -21372;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x823e4818
	ctx.lr = 0x8266F308;
	sub_823E4818(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830b2320
	ctx.lr = 0x8266F31C;
	sub_830B2320(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8266F320:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266F328"))) PPC_WEAK_FUNC(sub_8266F328);
PPC_FUNC_IMPL(__imp__sub_8266F328) {
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
	// bl 0x82648b60
	ctx.lr = 0x8266F338;
	sub_82648B60(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266F350"))) PPC_WEAK_FUNC(sub_8266F350);
PPC_FUNC_IMPL(__imp__sub_8266F350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,7252
	ctx.r31.s64 = ctx.r11.s64 + 7252;
	// lwz r11,7264(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7264);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8266f388
	if (!ctx.cr0.eq) goto loc_8266F388;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,7264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7264, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x8266F388;
	sub_8289D980(ctx, base);
loc_8266F388:
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

__attribute__((alias("__imp__sub_8266F3A0"))) PPC_WEAK_FUNC(sub_8266F3A0);
PPC_FUNC_IMPL(__imp__sub_8266F3A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266F3A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e5ccf0
	ctx.lr = 0x8266F3B8;
	sub_82E5CCF0(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r5,r11,-21400
	ctx.r5.s64 = ctx.r11.s64 + -21400;
	// addi r6,r10,-3156
	ctx.r6.s64 = ctx.r10.s64 + -3156;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x823e4818
	ctx.lr = 0x8266F3D4;
	sub_823E4818(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830b2320
	ctx.lr = 0x8266F3E8;
	sub_830B2320(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266F3F8"))) PPC_WEAK_FUNC(sub_8266F3F8);
PPC_FUNC_IMPL(__imp__sub_8266F3F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266F400;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e5ccf0
	ctx.lr = 0x8266F410;
	sub_82E5CCF0(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r5,r11,-21400
	ctx.r5.s64 = ctx.r11.s64 + -21400;
	// addi r6,r10,-3116
	ctx.r6.s64 = ctx.r10.s64 + -3116;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x823e4818
	ctx.lr = 0x8266F42C;
	sub_823E4818(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830b2320
	ctx.lr = 0x8266F440;
	sub_830B2320(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266F450"))) PPC_WEAK_FUNC(sub_8266F450);
PPC_FUNC_IMPL(__imp__sub_8266F450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266F458;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e5ccf0
	ctx.lr = 0x8266F468;
	sub_82E5CCF0(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r5,r11,-21400
	ctx.r5.s64 = ctx.r11.s64 + -21400;
	// addi r6,r10,-3072
	ctx.r6.s64 = ctx.r10.s64 + -3072;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x823e4818
	ctx.lr = 0x8266F484;
	sub_823E4818(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830b2320
	ctx.lr = 0x8266F498;
	sub_830B2320(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266F4A8"))) PPC_WEAK_FUNC(sub_8266F4A8);
PPC_FUNC_IMPL(__imp__sub_8266F4A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266F4B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e5ccf0
	ctx.lr = 0x8266F4C0;
	sub_82E5CCF0(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r5,r11,-21400
	ctx.r5.s64 = ctx.r11.s64 + -21400;
	// addi r6,r10,-3020
	ctx.r6.s64 = ctx.r10.s64 + -3020;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x823e4818
	ctx.lr = 0x8266F4DC;
	sub_823E4818(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830b2320
	ctx.lr = 0x8266F4F0;
	sub_830B2320(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266F500"))) PPC_WEAK_FUNC(sub_8266F500);
PPC_FUNC_IMPL(__imp__sub_8266F500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266F508;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e5ccf0
	ctx.lr = 0x8266F518;
	sub_82E5CCF0(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r5,r11,-21400
	ctx.r5.s64 = ctx.r11.s64 + -21400;
	// addi r6,r10,-2984
	ctx.r6.s64 = ctx.r10.s64 + -2984;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x823e4818
	ctx.lr = 0x8266F534;
	sub_823E4818(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830b2320
	ctx.lr = 0x8266F548;
	sub_830B2320(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266F558"))) PPC_WEAK_FUNC(sub_8266F558);
PPC_FUNC_IMPL(__imp__sub_8266F558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266F560;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e5ccf0
	ctx.lr = 0x8266F570;
	sub_82E5CCF0(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r5,r11,-21400
	ctx.r5.s64 = ctx.r11.s64 + -21400;
	// addi r6,r10,-2940
	ctx.r6.s64 = ctx.r10.s64 + -2940;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x823e4818
	ctx.lr = 0x8266F58C;
	sub_823E4818(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830b2320
	ctx.lr = 0x8266F5A0;
	sub_830B2320(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266F5B0"))) PPC_WEAK_FUNC(sub_8266F5B0);
PPC_FUNC_IMPL(__imp__sub_8266F5B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266F5B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e5ccf0
	ctx.lr = 0x8266F5C8;
	sub_82E5CCF0(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r5,r11,-21400
	ctx.r5.s64 = ctx.r11.s64 + -21400;
	// addi r6,r10,-2904
	ctx.r6.s64 = ctx.r10.s64 + -2904;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x823e4818
	ctx.lr = 0x8266F5E4;
	sub_823E4818(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830b2320
	ctx.lr = 0x8266F5F8;
	sub_830B2320(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266F608"))) PPC_WEAK_FUNC(sub_8266F608);
PPC_FUNC_IMPL(__imp__sub_8266F608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266F610;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e5ccf0
	ctx.lr = 0x8266F620;
	sub_82E5CCF0(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r5,r11,-21400
	ctx.r5.s64 = ctx.r11.s64 + -21400;
	// addi r6,r10,-2860
	ctx.r6.s64 = ctx.r10.s64 + -2860;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x823e4818
	ctx.lr = 0x8266F63C;
	sub_823E4818(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830b2320
	ctx.lr = 0x8266F650;
	sub_830B2320(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266F660"))) PPC_WEAK_FUNC(sub_8266F660);
PPC_FUNC_IMPL(__imp__sub_8266F660) {
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
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// li r8,32
	ctx.r8.s64 = 32;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r9,48
	ctx.r9.s64 = 48;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r4,96
	ctx.r4.s64 = ctx.r4.s64 + 96;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,24
	ctx.r5.s64 = 24;
	// lvx128 v63,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f0,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lfs f0,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// bl 0x82a7d730
	ctx.lr = 0x8266F6F8;
	sub_82A7D730(ctx, base);
	// lbz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 120);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r11.u8);
	// lbz r11,121(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 121);
	// stb r11,121(r31)
	PPC_STORE_U8(ctx.r31.u32 + 121, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266F728"))) PPC_WEAK_FUNC(sub_8266F728);
PPC_FUNC_IMPL(__imp__sub_8266F728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82cab8f8
	ctx.lr = 0x8266F748;
	sub_82CAB8F8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266f758
	if (ctx.cr0.eq) goto loc_8266F758;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8266F758;
	sub_823FD208(ctx, base);
loc_8266F758:
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

__attribute__((alias("__imp__sub_8266F778"))) PPC_WEAK_FUNC(sub_8266F778);
PPC_FUNC_IMPL(__imp__sub_8266F778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r3,r3,228
	ctx.r3.s64 = ctx.r3.s64 + 228;
	// bl 0x825f5830
	ctx.lr = 0x8266F794;
	sub_825F5830(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// stw r10,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r10.u32);
	// stw r10,964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 964, ctx.r10.u32);
	// stw r10,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r10.u32);
	// stb r11,968(r31)
	PPC_STORE_U8(ctx.r31.u32 + 968, ctx.r11.u8);
	// stb r11,969(r31)
	PPC_STORE_U8(ctx.r31.u32 + 969, ctx.r11.u8);
	// stw r11,972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 972, ctx.r11.u32);
	// stb r11,976(r31)
	PPC_STORE_U8(ctx.r31.u32 + 976, ctx.r11.u8);
	// stb r11,977(r31)
	PPC_STORE_U8(ctx.r31.u32 + 977, ctx.r11.u8);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stb r11,978(r31)
	PPC_STORE_U8(ctx.r31.u32 + 978, ctx.r11.u8);
	// stb r11,979(r31)
	PPC_STORE_U8(ctx.r31.u32 + 979, ctx.r11.u8);
	// stb r11,980(r31)
	PPC_STORE_U8(ctx.r31.u32 + 980, ctx.r11.u8);
	// stb r11,981(r31)
	PPC_STORE_U8(ctx.r31.u32 + 981, ctx.r11.u8);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// stw r11,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r11.u32);
	// stw r11,952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 952, ctx.r11.u32);
	// stw r11,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r11.u32);
	// stw r11,984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 984, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266F808"))) PPC_WEAK_FUNC(sub_8266F808);
PPC_FUNC_IMPL(__imp__sub_8266F808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,7228
	ctx.r11.s64 = ctx.r11.s64 + 7228;
	// addi r10,r10,-28672
	ctx.r10.s64 = ctx.r10.s64 + -28672;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r10.u32);
	// addi r30,r3,128
	ctx.r30.s64 = ctx.r3.s64 + 128;
	// bl 0x82c07930
	ctx.lr = 0x8266F840;
	sub_82C07930(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266F85C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8266f87c
	if (ctx.cr6.eq) goto loc_8266F87C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266F87C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266F87C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82642880
	ctx.lr = 0x8266F884;
	sub_82642880(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266F8A0"))) PPC_WEAK_FUNC(sub_8266F8A0);
PPC_FUNC_IMPL(__imp__sub_8266F8A0) {
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
	// li r12,-64
	ctx.r12.s64 = -64;
	// stvx128 v126,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,116(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266F8E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// vcsxwfp128 v126,v63,18
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v126.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x36800000)))));
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stvx128 v126,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq cr6,0x8266f918
	if (ctx.cr6.eq) goto loc_8266F918;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266F914;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8266f92c
	goto loc_8266F92C;
loc_8266F918:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,4944
	ctx.r11.s64 = ctx.r11.s64 + 4944;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8266F92C:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v127,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v127,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82479e88
	ctx.lr = 0x8266F93C;
	sub_82479E88(ctx, base);
	// lbz r10,4921(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4921);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r31,r11,-7876
	ctx.r31.s64 = ctx.r11.s64 + -7876;
	// bne 0x8266f97c
	if (!ctx.cr0.eq) goto loc_8266F97C;
	// li r11,144
	ctx.r11.s64 = 144;
	// vor128 v3,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// vor128 v2,v126,v126
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v126.u8));
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,160(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// lvx128 v1,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8264beb8
	ctx.lr = 0x8266F970;
	sub_8264BEB8(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8266F97C:
	// lfs f12,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f0,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,120(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// fsel f10,f12,f0,f13
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fsel f0,f12,f13,f0
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// frsp f13,f10
	ctx.f13.f64 = double(float(ctx.f10.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f12,f11,f13
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fsel f13,f12,f13,f11
	ctx.f13.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f11.f64;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f0,f12,f13,f0
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lvx128 v1,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bctrl 
	ctx.lr = 0x8266F9D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// li r0,-64
	ctx.r0.s64 = -64;
	// lvx128 v126,r1,r0
	ea = (ctx.r1.u32 + ctx.r0.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_8266FA00"))) PPC_WEAK_FUNC(sub_8266FA00);
PPC_FUNC_IMPL(__imp__sub_8266FA00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,27900
	ctx.r11.s64 = ctx.r11.s64 + 27900;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82c09c40
	ctx.lr = 0x8266FA28;
	sub_82C09C40(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-28652
	ctx.r11.s64 = ctx.r11.s64 + -28652;
	// addi r10,r10,-28664
	ctx.r10.s64 = ctx.r10.s64 + -28664;
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

__attribute__((alias("__imp__sub_8266FA60"))) PPC_WEAK_FUNC(sub_8266FA60);
PPC_FUNC_IMPL(__imp__sub_8266FA60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266FA68;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,120(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r4,96
	ctx.r4.s64 = ctx.r4.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// bl 0x82a7d730
	ctx.lr = 0x8266FA90;
	sub_82A7D730(ctx, base);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// li r5,40
	ctx.r5.s64 = 40;
	// bl 0x82a7d730
	ctx.lr = 0x8266FAA4;
	sub_82A7D730(ctx, base);
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// ld r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// lfs f3,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// ld r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// lfs f2,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266FAD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266FAD8"))) PPC_WEAK_FUNC(sub_8266FAD8);
PPC_FUNC_IMPL(__imp__sub_8266FAD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8266FAE0;
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
	// std r8,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r8.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// std r9,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r9.u64);
	// std r10,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r10.u64);
	// bl 0x823f51a8
	ctx.lr = 0x8266FB1C;
	sub_823F51A8(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x823f5040
	ctx.lr = 0x8266FB24;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8266fb78
	if (ctx.cr0.eq) goto loc_8266FB78;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f31,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stfs f30,12(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r11,r11,-28552
	ctx.r11.s64 = ctx.r11.s64 + -28552;
	// stfs f29,16(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a7d730
	ctx.lr = 0x8266FB58;
	sub_82A7D730(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82a7d730
	ctx.lr = 0x8266FB68;
	sub_82A7D730(ctx, base);
	// lwz r11,300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// b 0x8266fb7c
	goto loc_8266FB7C;
loc_8266FB78:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8266FB7C:
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r4,r11,-1440
	ctx.r4.s64 = ctx.r11.s64 + -1440;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8266FB98;
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

__attribute__((alias("__imp__sub_8266FBB0"))) PPC_WEAK_FUNC(sub_8266FBB0);
PPC_FUNC_IMPL(__imp__sub_8266FBB0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ld r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// lwz r11,84(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8266FBD8"))) PPC_WEAK_FUNC(sub_8266FBD8);
PPC_FUNC_IMPL(__imp__sub_8266FBD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8266FBE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// std r7,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r7.u64);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x823f51a8
	ctx.lr = 0x8266FC04;
	sub_823F51A8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x823f5040
	ctx.lr = 0x8266FC0C;
	sub_823F5040(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8266fc3c
	if (ctx.cr0.eq) goto loc_8266FC3C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r11,r11,-28544
	ctx.r11.s64 = ctx.r11.s64 + -28544;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a7d730
	ctx.lr = 0x8266FC34;
	sub_82A7D730(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// b 0x8266fc40
	goto loc_8266FC40;
loc_8266FC3C:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8266FC40:
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r4,r11,-1104
	ctx.r4.s64 = ctx.r11.s64 + -1104;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8266FC5C;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266FC68"))) PPC_WEAK_FUNC(sub_8266FC68);
PPC_FUNC_IMPL(__imp__sub_8266FC68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
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

__attribute__((alias("__imp__sub_8266FC80"))) PPC_WEAK_FUNC(sub_8266FC80);
PPC_FUNC_IMPL(__imp__sub_8266FC80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266FC88;
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
	ctx.lr = 0x8266FCA0;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8266FCA8;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266fcc8
	if (ctx.cr0.eq) goto loc_8266FCC8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,-28536
	ctx.r11.s64 = ctx.r11.s64 + -28536;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8266fccc
	goto loc_8266FCCC;
loc_8266FCC8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8266FCCC:
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-920
	ctx.r4.s64 = ctx.r11.s64 + -920;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8266FCE8;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266FCF0"))) PPC_WEAK_FUNC(sub_8266FCF0);
PPC_FUNC_IMPL(__imp__sub_8266FCF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8266FD08"))) PPC_WEAK_FUNC(sub_8266FD08);
PPC_FUNC_IMPL(__imp__sub_8266FD08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8266FD10;
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
	ctx.lr = 0x8266FD2C;
	sub_823F51A8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823f5040
	ctx.lr = 0x8266FD34;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266fd58
	if (ctx.cr0.eq) goto loc_8266FD58;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stb r30,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r30.u8);
	// addi r11,r11,-28528
	ctx.r11.s64 = ctx.r11.s64 + -28528;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8266fd5c
	goto loc_8266FD5C;
loc_8266FD58:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8266FD5C:
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r11,-784
	ctx.r4.s64 = ctx.r11.s64 + -784;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8266FD78;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266FD80"))) PPC_WEAK_FUNC(sub_8266FD80);
PPC_FUNC_IMPL(__imp__sub_8266FD80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8266FD98"))) PPC_WEAK_FUNC(sub_8266FD98);
PPC_FUNC_IMPL(__imp__sub_8266FD98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266FDA0;
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
	ctx.lr = 0x8266FDB8;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8266FDC0;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266fde0
	if (ctx.cr0.eq) goto loc_8266FDE0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,-28520
	ctx.r11.s64 = ctx.r11.s64 + -28520;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8266fde4
	goto loc_8266FDE4;
loc_8266FDE0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8266FDE4:
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-640
	ctx.r4.s64 = ctx.r11.s64 + -640;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8266FE00;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266FE08"))) PPC_WEAK_FUNC(sub_8266FE08);
PPC_FUNC_IMPL(__imp__sub_8266FE08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8266FE20"))) PPC_WEAK_FUNC(sub_8266FE20);
PPC_FUNC_IMPL(__imp__sub_8266FE20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266FE28;
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
	ctx.lr = 0x8266FE40;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8266FE48;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266fe68
	if (ctx.cr0.eq) goto loc_8266FE68;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,-28512
	ctx.r11.s64 = ctx.r11.s64 + -28512;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8266fe6c
	goto loc_8266FE6C;
loc_8266FE68:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8266FE6C:
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-504
	ctx.r4.s64 = ctx.r11.s64 + -504;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8266FE88;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266FE90"))) PPC_WEAK_FUNC(sub_8266FE90);
PPC_FUNC_IMPL(__imp__sub_8266FE90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8266FEA8"))) PPC_WEAK_FUNC(sub_8266FEA8);
PPC_FUNC_IMPL(__imp__sub_8266FEA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266FEB0;
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
	ctx.lr = 0x8266FEC8;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8266FED0;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266fef0
	if (ctx.cr0.eq) goto loc_8266FEF0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,-28504
	ctx.r11.s64 = ctx.r11.s64 + -28504;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8266fef4
	goto loc_8266FEF4;
loc_8266FEF0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8266FEF4:
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-368
	ctx.r4.s64 = ctx.r11.s64 + -368;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8266FF10;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266FF18"))) PPC_WEAK_FUNC(sub_8266FF18);
PPC_FUNC_IMPL(__imp__sub_8266FF18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8266FF30"))) PPC_WEAK_FUNC(sub_8266FF30);
PPC_FUNC_IMPL(__imp__sub_8266FF30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8266FF38;
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
	ctx.lr = 0x8266FF50;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8266FF58;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266ff78
	if (ctx.cr0.eq) goto loc_8266FF78;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,-28496
	ctx.r11.s64 = ctx.r11.s64 + -28496;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8266ff7c
	goto loc_8266FF7C;
loc_8266FF78:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8266FF7C:
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-232
	ctx.r4.s64 = ctx.r11.s64 + -232;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8266FF98;
	sub_823F4FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266FFA0"))) PPC_WEAK_FUNC(sub_8266FFA0);
PPC_FUNC_IMPL(__imp__sub_8266FFA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8266FFB8"))) PPC_WEAK_FUNC(sub_8266FFB8);
PPC_FUNC_IMPL(__imp__sub_8266FFB8) {
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
	ctx.lr = 0x8266FFE4;
	sub_823F51A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823f5040
	ctx.lr = 0x8266FFEC;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267000c
	if (ctx.cr0.eq) goto loc_8267000C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f31,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,-28488
	ctx.r11.s64 = ctx.r11.s64 + -28488;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82670010
	goto loc_82670010;
loc_8267000C:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82670010:
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-96
	ctx.r4.s64 = ctx.r11.s64 + -96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x8267002C;
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

__attribute__((alias("__imp__sub_82670048"))) PPC_WEAK_FUNC(sub_82670048);
PPC_FUNC_IMPL(__imp__sub_82670048) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82670060"))) PPC_WEAK_FUNC(sub_82670060);
PPC_FUNC_IMPL(__imp__sub_82670060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// bne 0x82670094
	if (!ctx.cr0.eq) goto loc_82670094;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82670094;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82670094:
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

__attribute__((alias("__imp__sub_826700B0"))) PPC_WEAK_FUNC(sub_826700B0);
PPC_FUNC_IMPL(__imp__sub_826700B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82672b10
	sub_82672B10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826700B8"))) PPC_WEAK_FUNC(sub_826700B8);
PPC_FUNC_IMPL(__imp__sub_826700B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x826700DC;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x826700E4;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82670100
	if (ctx.cr0.eq) goto loc_82670100;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,-28480
	ctx.r11.s64 = ctx.r11.s64 + -28480;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82670104
	goto loc_82670104;
loc_82670100:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82670104:
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
	ctx.lr = 0x82670120;
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

__attribute__((alias("__imp__sub_82670138"))) PPC_WEAK_FUNC(sub_82670138);
PPC_FUNC_IMPL(__imp__sub_82670138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8267015C;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x82670164;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82670180
	if (ctx.cr0.eq) goto loc_82670180;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,-28472
	ctx.r11.s64 = ctx.r11.s64 + -28472;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82670184
	goto loc_82670184;
loc_82670180:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82670184:
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
	ctx.lr = 0x826701A0;
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

__attribute__((alias("__imp__sub_826701B8"))) PPC_WEAK_FUNC(sub_826701B8);
PPC_FUNC_IMPL(__imp__sub_826701B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x826701DC;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x826701E4;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82670200
	if (ctx.cr0.eq) goto loc_82670200;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,-28464
	ctx.r11.s64 = ctx.r11.s64 + -28464;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82670204
	goto loc_82670204;
loc_82670200:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82670204:
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
	ctx.lr = 0x82670220;
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

__attribute__((alias("__imp__sub_82670238"))) PPC_WEAK_FUNC(sub_82670238);
PPC_FUNC_IMPL(__imp__sub_82670238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8267025C;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x82670264;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82670280
	if (ctx.cr0.eq) goto loc_82670280;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,-28456
	ctx.r11.s64 = ctx.r11.s64 + -28456;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82670284
	goto loc_82670284;
loc_82670280:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82670284:
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
	ctx.lr = 0x826702A0;
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

__attribute__((alias("__imp__sub_826702B8"))) PPC_WEAK_FUNC(sub_826702B8);
PPC_FUNC_IMPL(__imp__sub_826702B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x826702DC;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x826702E4;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82670300
	if (ctx.cr0.eq) goto loc_82670300;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,-28448
	ctx.r11.s64 = ctx.r11.s64 + -28448;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82670304
	goto loc_82670304;
loc_82670300:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82670304:
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
	ctx.lr = 0x82670320;
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

__attribute__((alias("__imp__sub_82670338"))) PPC_WEAK_FUNC(sub_82670338);
PPC_FUNC_IMPL(__imp__sub_82670338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8267035C;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x82670364;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82670380
	if (ctx.cr0.eq) goto loc_82670380;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,-28440
	ctx.r11.s64 = ctx.r11.s64 + -28440;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82670384
	goto loc_82670384;
loc_82670380:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82670384:
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
	ctx.lr = 0x826703A0;
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

__attribute__((alias("__imp__sub_826703B8"))) PPC_WEAK_FUNC(sub_826703B8);
PPC_FUNC_IMPL(__imp__sub_826703B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x826703DC;
	sub_823F51A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f5040
	ctx.lr = 0x826703E4;
	sub_823F5040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82670400
	if (ctx.cr0.eq) goto loc_82670400;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,28048
	ctx.r11.s64 = ctx.r11.s64 + 28048;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82670404
	goto loc_82670404;
loc_82670400:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82670404:
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-30200
	ctx.r4.s64 = ctx.r11.s64 + -30200;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x82670420;
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

__attribute__((alias("__imp__sub_82670438"))) PPC_WEAK_FUNC(sub_82670438);
PPC_FUNC_IMPL(__imp__sub_82670438) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82670450"))) PPC_WEAK_FUNC(sub_82670450);
PPC_FUNC_IMPL(__imp__sub_82670450) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82670468"))) PPC_WEAK_FUNC(sub_82670468);
PPC_FUNC_IMPL(__imp__sub_82670468) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82670480"))) PPC_WEAK_FUNC(sub_82670480);
PPC_FUNC_IMPL(__imp__sub_82670480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82670488;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,121(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 121);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826706e0
	if (ctx.cr0.eq) goto loc_826706E0;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r28,0(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826704C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826704D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826704F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267050C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r31,96
	ctx.r29.s64 = ctx.r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bb0098
	ctx.lr = 0x82670518;
	sub_82BB0098(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bba010
	ctx.lr = 0x82670524;
	sub_82BBA010(ctx, base);
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82670538
	if (!ctx.cr6.eq) goto loc_82670538;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3368(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3368);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82670574
	goto loc_82670574;
loc_82670538:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bb0098
	ctx.lr = 0x82670540;
	sub_82BB0098(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f31,f0
	ctx.f31.f64 = double(float(ctx.f0.f64));
	// bl 0x82bba010
	ctx.lr = 0x8267055C;
	sub_82BBA010(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
loc_82670574:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 120);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267058C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826705A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826705BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826705D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ld r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// ld r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// ld r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// ld r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// ld r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// ld r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// ld r29,72(r31)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// std r29,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r29.u64);
	// bctrl 
	ctx.lr = 0x8267060C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// ld r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// ld r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// ld r29,168(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// std r29,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r29.u64);
	// bctrl 
	ctx.lr = 0x82670644;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
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
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// ld r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// ld r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// ld r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// ld r29,72(r31)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// std r29,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r29.u64);
	// bctrl 
	ctx.lr = 0x8267067C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// ld r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// ld r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// ld r29,168(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// std r29,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r29.u64);
	// bctrl 
	ctx.lr = 0x826706B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826706CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826706E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826706E0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826706F0"))) PPC_WEAK_FUNC(sub_826706F0);
PPC_FUNC_IMPL(__imp__sub_826706F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82670708"))) PPC_WEAK_FUNC(sub_82670708);
PPC_FUNC_IMPL(__imp__sub_82670708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82668aa8
	ctx.lr = 0x82670728;
	sub_82668AA8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82670738
	if (ctx.cr0.eq) goto loc_82670738;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82670738;
	sub_823FD208(ctx, base);
loc_82670738:
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

__attribute__((alias("__imp__sub_82670758"))) PPC_WEAK_FUNC(sub_82670758);
PPC_FUNC_IMPL(__imp__sub_82670758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82670760;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d3bd0
	ctx.lr = 0x82670770;
	sub_825D3BD0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-28420
	ctx.r11.s64 = ctx.r11.s64 + -28420;
	// addi r10,r10,-28432
	ctx.r10.s64 = ctx.r10.s64 + -28432;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// bl 0x82e73b88
	ctx.lr = 0x82670798;
	sub_82E73B88(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// addi r29,r11,27448
	ctx.r29.s64 = ctx.r11.s64 + 27448;
	// stw r29,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r29.u32);
	// bl 0x82e73b88
	ctx.lr = 0x826707AC;
	sub_82E73B88(ctx, base);
	// stw r29,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r29.u32);
	// addi r3,r31,388
	ctx.r3.s64 = ctx.r31.s64 + 388;
	// bl 0x82e73b88
	ctx.lr = 0x826707B8;
	sub_82E73B88(ctx, base);
	// stw r29,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r29.u32);
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// bl 0x82e73b88
	ctx.lr = 0x826707C4;
	sub_82E73B88(ctx, base);
	// stw r29,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r29.u32);
	// addi r3,r31,412
	ctx.r3.s64 = ctx.r31.s64 + 412;
	// bl 0x82e73b88
	ctx.lr = 0x826707D0;
	sub_82E73B88(ctx, base);
	// stw r29,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r29.u32);
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// bl 0x825d4c60
	ctx.lr = 0x826707DC;
	sub_825D4C60(ctx, base);
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// bl 0x825d4c60
	ctx.lr = 0x826707E4;
	sub_825D4C60(ctx, base);
	// stw r30,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826707F8"))) PPC_WEAK_FUNC(sub_826707F8);
PPC_FUNC_IMPL(__imp__sub_826707F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8269d250
	ctx.lr = 0x82670818;
	sub_8269D250(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82670828
	if (ctx.cr0.eq) goto loc_82670828;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82670828;
	sub_823FD208(ctx, base);
loc_82670828:
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

__attribute__((alias("__imp__sub_82670848"))) PPC_WEAK_FUNC(sub_82670848);
PPC_FUNC_IMPL(__imp__sub_82670848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d3bd0
	ctx.lr = 0x82670868;
	sub_825D3BD0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-28180
	ctx.r11.s64 = ctx.r11.s64 + -28180;
	// addi r10,r10,-28192
	ctx.r10.s64 = ctx.r10.s64 + -28192;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82e73b88
	ctx.lr = 0x82670888;
	sub_82E73B88(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,380
	ctx.r3.s64 = ctx.r31.s64 + 380;
	// addi r30,r11,27448
	ctx.r30.s64 = ctx.r11.s64 + 27448;
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// bl 0x82e73b88
	ctx.lr = 0x8267089C;
	sub_82E73B88(ctx, base);
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// addi r3,r31,392
	ctx.r3.s64 = ctx.r31.s64 + 392;
	// bl 0x82e73b88
	ctx.lr = 0x826708A8;
	sub_82E73B88(ctx, base);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// addi r3,r31,404
	ctx.r3.s64 = ctx.r31.s64 + 404;
	// bl 0x82e73b88
	ctx.lr = 0x826708B4;
	sub_82E73B88(ctx, base);
	// stw r30,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x82e73b88
	ctx.lr = 0x826708C0;
	sub_82E73B88(ctx, base);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// addi r3,r31,428
	ctx.r3.s64 = ctx.r31.s64 + 428;
	// bl 0x825d4c60
	ctx.lr = 0x826708CC;
	sub_825D4C60(ctx, base);
	// addi r3,r31,452
	ctx.r3.s64 = ctx.r31.s64 + 452;
	// bl 0x825d4c60
	ctx.lr = 0x826708D4;
	sub_825D4C60(ctx, base);
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

__attribute__((alias("__imp__sub_826708F0"))) PPC_WEAK_FUNC(sub_826708F0);
PPC_FUNC_IMPL(__imp__sub_826708F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,452
	ctx.r30.s64 = ctx.r3.s64 + 452;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x82e73ba8
	ctx.lr = 0x82670914;
	sub_82E73BA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e73ba8
	ctx.lr = 0x8267091C;
	sub_82E73BA8(ctx, base);
	// addi r30,r31,428
	ctx.r30.s64 = ctx.r31.s64 + 428;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x82e73ba8
	ctx.lr = 0x82670928;
	sub_82E73BA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e73ba8
	ctx.lr = 0x82670930;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x82e73ba8
	ctx.lr = 0x82670938;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,404
	ctx.r3.s64 = ctx.r31.s64 + 404;
	// bl 0x82e73ba8
	ctx.lr = 0x82670940;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,392
	ctx.r3.s64 = ctx.r31.s64 + 392;
	// bl 0x82e73ba8
	ctx.lr = 0x82670948;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,380
	ctx.r3.s64 = ctx.r31.s64 + 380;
	// bl 0x82e73ba8
	ctx.lr = 0x82670950;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// bl 0x82e73ba8
	ctx.lr = 0x82670958;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,332
	ctx.r3.s64 = ctx.r31.s64 + 332;
	// bl 0x830b2320
	ctx.lr = 0x82670960;
	sub_830B2320(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e6bfe0
	ctx.lr = 0x82670968;
	sub_82E6BFE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82670980"))) PPC_WEAK_FUNC(sub_82670980);
PPC_FUNC_IMPL(__imp__sub_82670980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,332
	ctx.r3.s64 = ctx.r3.s64 + 332;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x830b2320
	ctx.lr = 0x826709A4;
	sub_830B2320(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e6bfe0
	ctx.lr = 0x826709AC;
	sub_82E6BFE0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826709bc
	if (ctx.cr0.eq) goto loc_826709BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x826709BC;
	sub_823FD208(ctx, base);
loc_826709BC:
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

__attribute__((alias("__imp__sub_826709D8"))) PPC_WEAK_FUNC(sub_826709D8);
PPC_FUNC_IMPL(__imp__sub_826709D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,376
	ctx.r31.s64 = ctx.r3.s64 + 376;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82e73ba8
	ctx.lr = 0x826709FC;
	sub_82E73BA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e73ba8
	ctx.lr = 0x82670A04;
	sub_82E73BA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826d9df8
	ctx.lr = 0x82670A0C;
	sub_826D9DF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82670A28"))) PPC_WEAK_FUNC(sub_82670A28);
PPC_FUNC_IMPL(__imp__sub_82670A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826691c0
	ctx.lr = 0x82670A48;
	sub_826691C0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82670a58
	if (ctx.cr0.eq) goto loc_82670A58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82670A58;
	sub_823FD208(ctx, base);
loc_82670A58:
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

__attribute__((alias("__imp__sub_82670A78"))) PPC_WEAK_FUNC(sub_82670A78);
PPC_FUNC_IMPL(__imp__sub_82670A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,372
	ctx.r3.s64 = ctx.r3.s64 + 372;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e73ba8
	ctx.lr = 0x82670A9C;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,360
	ctx.r3.s64 = ctx.r31.s64 + 360;
	// bl 0x82e73ba8
	ctx.lr = 0x82670AA4;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,332
	ctx.r3.s64 = ctx.r31.s64 + 332;
	// bl 0x830b2320
	ctx.lr = 0x82670AAC;
	sub_830B2320(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e6bfe0
	ctx.lr = 0x82670AB4;
	sub_82E6BFE0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82670ac4
	if (ctx.cr0.eq) goto loc_82670AC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82670AC4;
	sub_823FD208(ctx, base);
loc_82670AC4:
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

__attribute__((alias("__imp__sub_82670AE0"))) PPC_WEAK_FUNC(sub_82670AE0);
PPC_FUNC_IMPL(__imp__sub_82670AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82762f30
	ctx.lr = 0x82670AF8;
	sub_82762F30(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-27700
	ctx.r11.s64 = ctx.r11.s64 + -27700;
	// addi r10,r10,-27708
	ctx.r10.s64 = ctx.r10.s64 + -27708;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82e73b88
	ctx.lr = 0x82670B18;
	sub_82E73B88(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,27448
	ctx.r11.s64 = ctx.r11.s64 + 27448;
	// stw r11,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82670B40"))) PPC_WEAK_FUNC(sub_82670B40);
PPC_FUNC_IMPL(__imp__sub_82670B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,664
	ctx.r3.s64 = ctx.r3.s64 + 664;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e73ba8
	ctx.lr = 0x82670B64;
	sub_82E73BA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82669290
	ctx.lr = 0x82670B6C;
	sub_82669290(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82670b7c
	if (ctx.cr0.eq) goto loc_82670B7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82670B7C;
	sub_823FD208(ctx, base);
loc_82670B7C:
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

__attribute__((alias("__imp__sub_82670B98"))) PPC_WEAK_FUNC(sub_82670B98);
PPC_FUNC_IMPL(__imp__sub_82670B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,376
	ctx.r3.s64 = ctx.r3.s64 + 376;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e73ba8
	ctx.lr = 0x82670BBC;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// bl 0x82e73ba8
	ctx.lr = 0x82670BC4;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,332
	ctx.r3.s64 = ctx.r31.s64 + 332;
	// bl 0x830b2320
	ctx.lr = 0x82670BCC;
	sub_830B2320(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e6bfe0
	ctx.lr = 0x82670BD4;
	sub_82E6BFE0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82670be4
	if (ctx.cr0.eq) goto loc_82670BE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82670BE4;
	sub_823FD208(ctx, base);
loc_82670BE4:
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

__attribute__((alias("__imp__sub_82670C00"))) PPC_WEAK_FUNC(sub_82670C00);
PPC_FUNC_IMPL(__imp__sub_82670C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8275b628
	ctx.lr = 0x82670C20;
	sub_8275B628(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82670c30
	if (ctx.cr0.eq) goto loc_82670C30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82670C30;
	sub_823FD208(ctx, base);
loc_82670C30:
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

__attribute__((alias("__imp__sub_82670C50"))) PPC_WEAK_FUNC(sub_82670C50);
PPC_FUNC_IMPL(__imp__sub_82670C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,892
	ctx.r3.s64 = ctx.r3.s64 + 892;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e73ba8
	ctx.lr = 0x82670C74;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,880
	ctx.r3.s64 = ctx.r31.s64 + 880;
	// bl 0x82e73ba8
	ctx.lr = 0x82670C7C;
	sub_82E73BA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8275b628
	ctx.lr = 0x82670C84;
	sub_8275B628(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82670c94
	if (ctx.cr0.eq) goto loc_82670C94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82670C94;
	sub_823FD208(ctx, base);
loc_82670C94:
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

__attribute__((alias("__imp__sub_82670CB0"))) PPC_WEAK_FUNC(sub_82670CB0);
PPC_FUNC_IMPL(__imp__sub_82670CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d3bd0
	ctx.lr = 0x82670CD0;
	sub_825D3BD0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-27452
	ctx.r11.s64 = ctx.r11.s64 + -27452;
	// addi r10,r10,-27464
	ctx.r10.s64 = ctx.r10.s64 + -27464;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,360
	ctx.r3.s64 = ctx.r31.s64 + 360;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x825d4c60
	ctx.lr = 0x82670CF0;
	sub_825D4C60(ctx, base);
	// addi r3,r31,384
	ctx.r3.s64 = ctx.r31.s64 + 384;
	// bl 0x82e73b88
	ctx.lr = 0x82670CF8;
	sub_82E73B88(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,396
	ctx.r3.s64 = ctx.r31.s64 + 396;
	// addi r30,r11,27448
	ctx.r30.s64 = ctx.r11.s64 + 27448;
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// bl 0x82e73b88
	ctx.lr = 0x82670D0C;
	sub_82E73B88(ctx, base);
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82670D30"))) PPC_WEAK_FUNC(sub_82670D30);
PPC_FUNC_IMPL(__imp__sub_82670D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,396
	ctx.r3.s64 = ctx.r3.s64 + 396;
	// bl 0x82e73ba8
	ctx.lr = 0x82670D50;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,384
	ctx.r3.s64 = ctx.r31.s64 + 384;
	// bl 0x82e73ba8
	ctx.lr = 0x82670D58;
	sub_82E73BA8(ctx, base);
	// addi r30,r31,360
	ctx.r30.s64 = ctx.r31.s64 + 360;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x82e73ba8
	ctx.lr = 0x82670D64;
	sub_82E73BA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e73ba8
	ctx.lr = 0x82670D6C;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,332
	ctx.r3.s64 = ctx.r31.s64 + 332;
	// bl 0x830b2320
	ctx.lr = 0x82670D74;
	sub_830B2320(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e6bfe0
	ctx.lr = 0x82670D7C;
	sub_82E6BFE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82670D98"))) PPC_WEAK_FUNC(sub_82670D98);
PPC_FUNC_IMPL(__imp__sub_82670D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,364
	ctx.r3.s64 = ctx.r3.s64 + 364;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e73ba8
	ctx.lr = 0x82670DBC;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,332
	ctx.r3.s64 = ctx.r31.s64 + 332;
	// bl 0x830b2320
	ctx.lr = 0x82670DC4;
	sub_830B2320(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e6bfe0
	ctx.lr = 0x82670DCC;
	sub_82E6BFE0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82670ddc
	if (ctx.cr0.eq) goto loc_82670DDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82670DDC;
	sub_823FD208(ctx, base);
loc_82670DDC:
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

__attribute__((alias("__imp__sub_82670DF8"))) PPC_WEAK_FUNC(sub_82670DF8);
PPC_FUNC_IMPL(__imp__sub_82670DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82670E00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d3bd0
	ctx.lr = 0x82670E10;
	sub_825D3BD0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-27212
	ctx.r11.s64 = ctx.r11.s64 + -27212;
	// addi r10,r10,-27224
	ctx.r10.s64 = ctx.r10.s64 + -27224;
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// bl 0x82e73b88
	ctx.lr = 0x82670E3C;
	sub_82E73B88(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,380
	ctx.r3.s64 = ctx.r31.s64 + 380;
	// addi r29,r11,27448
	ctx.r29.s64 = ctx.r11.s64 + 27448;
	// stw r29,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r29.u32);
	// bl 0x82e73b88
	ctx.lr = 0x82670E50;
	sub_82E73B88(ctx, base);
	// stw r29,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r29.u32);
	// addi r3,r31,392
	ctx.r3.s64 = ctx.r31.s64 + 392;
	// bl 0x82e73b88
	ctx.lr = 0x82670E5C;
	sub_82E73B88(ctx, base);
	// stw r29,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r29.u32);
	// addi r3,r31,404
	ctx.r3.s64 = ctx.r31.s64 + 404;
	// bl 0x82e73b88
	ctx.lr = 0x82670E68;
	sub_82E73B88(ctx, base);
	// stw r29,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r29.u32);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x82e73b88
	ctx.lr = 0x82670E74;
	sub_82E73B88(ctx, base);
	// stw r29,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r29.u32);
	// addi r3,r31,428
	ctx.r3.s64 = ctx.r31.s64 + 428;
	// bl 0x82e73b88
	ctx.lr = 0x82670E80;
	sub_82E73B88(ctx, base);
	// stw r29,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r29.u32);
	// addi r3,r31,440
	ctx.r3.s64 = ctx.r31.s64 + 440;
	// bl 0x825d4c60
	ctx.lr = 0x82670E8C;
	sub_825D4C60(ctx, base);
	// addi r3,r31,464
	ctx.r3.s64 = ctx.r31.s64 + 464;
	// bl 0x825d4c60
	ctx.lr = 0x82670E94;
	sub_825D4C60(ctx, base);
	// stw r30,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82670EA8"))) PPC_WEAK_FUNC(sub_82670EA8);
PPC_FUNC_IMPL(__imp__sub_82670EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,464
	ctx.r30.s64 = ctx.r3.s64 + 464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x82e73ba8
	ctx.lr = 0x82670ECC;
	sub_82E73BA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e73ba8
	ctx.lr = 0x82670ED4;
	sub_82E73BA8(ctx, base);
	// addi r30,r31,440
	ctx.r30.s64 = ctx.r31.s64 + 440;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x82e73ba8
	ctx.lr = 0x82670EE0;
	sub_82E73BA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e73ba8
	ctx.lr = 0x82670EE8;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,428
	ctx.r3.s64 = ctx.r31.s64 + 428;
	// bl 0x82e73ba8
	ctx.lr = 0x82670EF0;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x82e73ba8
	ctx.lr = 0x82670EF8;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,404
	ctx.r3.s64 = ctx.r31.s64 + 404;
	// bl 0x82e73ba8
	ctx.lr = 0x82670F00;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,392
	ctx.r3.s64 = ctx.r31.s64 + 392;
	// bl 0x82e73ba8
	ctx.lr = 0x82670F08;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,380
	ctx.r3.s64 = ctx.r31.s64 + 380;
	// bl 0x82e73ba8
	ctx.lr = 0x82670F10;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// bl 0x82e73ba8
	ctx.lr = 0x82670F18;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,332
	ctx.r3.s64 = ctx.r31.s64 + 332;
	// bl 0x830b2320
	ctx.lr = 0x82670F20;
	sub_830B2320(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e6bfe0
	ctx.lr = 0x82670F28;
	sub_82E6BFE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82670F40"))) PPC_WEAK_FUNC(sub_82670F40);
PPC_FUNC_IMPL(__imp__sub_82670F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e73ba8
	ctx.lr = 0x82670F64;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,332
	ctx.r3.s64 = ctx.r31.s64 + 332;
	// bl 0x830b2320
	ctx.lr = 0x82670F6C;
	sub_830B2320(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e6bfe0
	ctx.lr = 0x82670F74;
	sub_82E6BFE0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82670f84
	if (ctx.cr0.eq) goto loc_82670F84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82670F84;
	sub_823FD208(ctx, base);
loc_82670F84:
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

__attribute__((alias("__imp__sub_82670FA0"))) PPC_WEAK_FUNC(sub_82670FA0);
PPC_FUNC_IMPL(__imp__sub_82670FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82670FA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,350
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 350, ctx.xer);
	// bge cr6,0x8267103c
	if (!ctx.cr6.lt) goto loc_8267103C;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r9,-31964
	ctx.r9.s64 = -2094792704;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-7804(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + -7804);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824a0e78
	ctx.lr = 0x82670FEC;
	sub_824A0E78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82671000;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// sth r30,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r30.u16);
	// addi r11,r11,8472
	ctx.r11.s64 = ctx.r11.s64 + 8472;
loc_8267100C:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// beq 0x82671030
	if (ctx.cr0.eq) goto loc_82671030;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8267100c
	if (ctx.cr6.eq) goto loc_8267100C;
loc_82671030:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,290(r3)
	PPC_STORE_U8(ctx.r3.u32 + 290, ctx.r11.u8);
loc_8267103C:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82671048"))) PPC_WEAK_FUNC(sub_82671048);
PPC_FUNC_IMPL(__imp__sub_82671048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82671050;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82671074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82671088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82853dd0
	ctx.lr = 0x826710A0;
	sub_82853DD0(ctx, base);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f0,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f0,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f0,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lfs f0,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826710D8"))) PPC_WEAK_FUNC(sub_826710D8);
PPC_FUNC_IMPL(__imp__sub_826710D8) {
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
	// lwz r4,48(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82671104;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// vcsxwfp128 v63,v63,18
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x36800000)))));
	// stvx128 v63,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_82671128"))) PPC_WEAK_FUNC(sub_82671128);
PPC_FUNC_IMPL(__imp__sub_82671128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82671150;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82671164;
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

__attribute__((alias("__imp__sub_82671178"))) PPC_WEAK_FUNC(sub_82671178);
PPC_FUNC_IMPL(__imp__sub_82671178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,1
	ctx.r31.s64 = 1;
	// stb r31,370(r3)
	PPC_STORE_U8(ctx.r3.u32 + 370, ctx.r31.u8);
	// stb r31,371(r3)
	PPC_STORE_U8(ctx.r3.u32 + 371, ctx.r31.u8);
	// bl 0x8269ad90
	ctx.lr = 0x82671198;
	sub_8269AD90(ctx, base);
	// bl 0x82648b50
	ctx.lr = 0x8267119C;
	sub_82648B50(ctx, base);
	// stb r31,952(r3)
	PPC_STORE_U8(ctx.r3.u32 + 952, ctx.r31.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826711B8"))) PPC_WEAK_FUNC(sub_826711B8);
PPC_FUNC_IMPL(__imp__sub_826711B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,536(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// li r11,6
	ctx.r11.s64 = 6;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r11.u32);
	// beq cr6,0x82671204
	if (ctx.cr6.eq) goto loc_82671204;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826711F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82671204
	if (ctx.cr0.lt) goto loc_82671204;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266a0c8
	ctx.lr = 0x82671200;
	sub_8266A0C8(ctx, base);
	// b 0x82671218
	goto loc_82671218;
loc_82671204:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82671218;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82671218:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82671230"))) PPC_WEAK_FUNC(sub_82671230);
PPC_FUNC_IMPL(__imp__sub_82671230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,536(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82671280
	if (!ctx.cr6.eq) goto loc_82671280;
	// lis r4,-32688
	ctx.r4.s64 = -2142240768;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
loc_82671258:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
loc_82671260:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267126C;
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
loc_82671280:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82671290;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt 0x82671258
	if (ctx.cr0.lt) goto loc_82671258;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// b 0x82671260
	goto loc_82671260;
}

__attribute__((alias("__imp__sub_826712A8"))) PPC_WEAK_FUNC(sub_826712A8);
PPC_FUNC_IMPL(__imp__sub_826712A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,472(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82671334
	if (!ctx.cr6.eq) goto loc_82671334;
	// li r11,95
	ctx.r11.s64 = 95;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 168);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826712F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82671310
	if (ctx.cr0.eq) goto loc_82671310;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// bne cr6,0x82671334
	if (!ctx.cr6.eq) goto loc_82671334;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266a068
	ctx.lr = 0x8267130C;
	sub_8266A068(ctx, base);
	// b 0x82671334
	goto loc_82671334;
loc_82671310:
	// lwz r11,492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82671334
	if (ctx.cr6.eq) goto loc_82671334;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82671334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82671334:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82671350"))) PPC_WEAK_FUNC(sub_82671350);
PPC_FUNC_IMPL(__imp__sub_82671350) {
	PPC_FUNC_PROLOGUE();
	// b 0x8266a328
	sub_8266A328(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82671358"))) PPC_WEAK_FUNC(sub_82671358);
PPC_FUNC_IMPL(__imp__sub_82671358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r11,r11,-6904
	ctx.r11.s64 = ctx.r11.s64 + -6904;
	// lbz r11,202(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 202);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82671370
	if (ctx.cr0.eq) goto loc_82671370;
	// b 0x8266a328
	sub_8266A328(ctx, base);
	return;
loc_82671370:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 472, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82671380"))) PPC_WEAK_FUNC(sub_82671380);
PPC_FUNC_IMPL(__imp__sub_82671380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// lwz r4,20312(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20312);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826713AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266a328
	ctx.lr = 0x826713B4;
	sub_8266A328(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826713C8"))) PPC_WEAK_FUNC(sub_826713C8);
PPC_FUNC_IMPL(__imp__sub_826713C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 262144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,8108
	ctx.r11.s64 = ctx.r11.s64 + 8108;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ori r10,r10,36
	ctx.r10.u64 = ctx.r10.u64 | 36;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82648b50
	ctx.lr = 0x826713F4;
	sub_82648B50(ctx, base);
	// ld r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 520);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,944(r10)
	PPC_STORE_U64(ctx.r10.u32 + 944, ctx.r11.u64);
	// bl 0x82671380
	ctx.lr = 0x82671408;
	sub_82671380(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82671420"))) PPC_WEAK_FUNC(sub_82671420);
PPC_FUNC_IMPL(__imp__sub_82671420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// addi r10,r11,-7160
	ctx.r10.s64 = ctx.r11.s64 + -7160;
	// ori r9,r9,8113
	ctx.r9.u64 = ctx.r9.u64 | 8113;
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stbx r8,r3,r9
	PPC_STORE_U8(ctx.r3.u32 + ctx.r9.u32, ctx.r8.u8);
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82671464
	if (!ctx.cr0.eq) goto loc_82671464;
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// bge cr6,0x82671488
	if (!ctx.cr6.lt) goto loc_82671488;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r10,r10,-5952
	ctx.r10.s64 = ctx.r10.s64 + -5952;
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82671488
	if (ctx.cr0.eq) goto loc_82671488;
loc_82671464:
	// addi r9,r10,24
	ctx.r9.s64 = ctx.r10.s64 + 24;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82671488
	if (ctx.cr6.eq) goto loc_82671488;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82671488:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 472, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82671498"))) PPC_WEAK_FUNC(sub_82671498);
PPC_FUNC_IMPL(__imp__sub_82671498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,572(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8266a6a0
	ctx.lr = 0x826714B4;
	sub_8266A6A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,580(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// bl 0x8266a6a0
	ctx.lr = 0x826714C0;
	sub_8266A6A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,576(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// bl 0x8266a6a0
	ctx.lr = 0x826714CC;
	sub_8266A6A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r11.u32);
	// stw r11,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r11.u32);
	// stw r11,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826714F0"))) PPC_WEAK_FUNC(sub_826714F0);
PPC_FUNC_IMPL(__imp__sub_826714F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r10,r10,-6208
	ctx.r10.s64 = ctx.r10.s64 + -6208;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82671540
	if (!ctx.cr0.eq) goto loc_82671540;
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// bge cr6,0x8267156c
	if (!ctx.cr6.lt) goto loc_8267156C;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r10,r10,-5952
	ctx.r10.s64 = ctx.r10.s64 + -5952;
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8267156c
	if (ctx.cr0.eq) goto loc_8267156C;
loc_82671540:
	// addi r9,r10,24
	ctx.r9.s64 = ctx.r10.s64 + 24;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8267156c
	if (ctx.cr6.eq) goto loc_8267156C;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82671568;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82671574
	goto loc_82671574;
loc_8267156C:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r11.u32);
loc_82671574:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82671590
	if (ctx.cr0.eq) goto loc_82671590;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e5d210
	ctx.lr = 0x82671590;
	sub_82E5D210(ctx, base);
loc_82671590:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826715A8"))) PPC_WEAK_FUNC(sub_826715A8);
PPC_FUNC_IMPL(__imp__sub_826715A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddfc
	ctx.lr = 0x826715B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x826a0ed8
	ctx.lr = 0x826715C8;
	sub_826A0ED8(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82671748
	if (ctx.cr0.eq) goto loc_82671748;
	// lwz r10,576(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r11,12296
	ctx.r29.s64 = ctx.r11.s64 + 12296;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82671628
	if (!ctx.cr6.eq) goto loc_82671628;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r28,r10,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x824e4bb8
	ctx.lr = 0x826715FC;
	sub_824E4BB8(ctx, base);
	// bl 0x82bb0098
	ctx.lr = 0x82671600;
	sub_82BB0098(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267161C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r25,r3
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r3.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8267162c
	if (!ctx.cr6.eq) goto loc_8267162C;
loc_82671628:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267162C:
	// clrlwi. r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x82671644
	if (ctx.cr0.eq) goto loc_82671644;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r30,r30,0,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82c07598
	ctx.lr = 0x82671644;
	sub_82C07598(ctx, base);
loc_82671644:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82671678
	if (ctx.cr0.eq) goto loc_82671678;
	// lwz r3,576(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82671664;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c07ac0
	ctx.lr = 0x82671670;
	sub_82C07AC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82671724
	goto loc_82671724;
loc_82671678:
	// lwz r10,580(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r11,12320
	ctx.r29.s64 = ctx.r11.s64 + 12320;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826716d4
	if (!ctx.cr6.eq) goto loc_826716D4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r28,r10,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// ori r30,r30,2
	ctx.r30.u64 = ctx.r30.u64 | 2;
	// bl 0x824e4bb8
	ctx.lr = 0x826716A4;
	sub_824E4BB8(ctx, base);
	// bl 0x82bb0098
	ctx.lr = 0x826716A8;
	sub_82BB0098(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826716C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x826716d8
	if (!ctx.cr6.eq) goto loc_826716D8;
loc_826716D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826716D8:
	// rlwinm. r10,r30,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x826716ec
	if (ctx.cr0.eq) goto loc_826716EC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c07598
	ctx.lr = 0x826716EC;
	sub_82C07598(ctx, base);
loc_826716EC:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82671748
	if (ctx.cr0.eq) goto loc_82671748;
	// lwz r3,580(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267170C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82671718
	if (ctx.cr0.eq) goto loc_82671718;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
loc_82671718:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c07ac0
	ctx.lr = 0x82671720;
	sub_82C07AC0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_82671724:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824f2768
	ctx.lr = 0x82671730;
	sub_824F2768(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c07598
	ctx.lr = 0x82671738;
	sub_82C07598(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82518f30
	ctx.lr = 0x82671748;
	sub_82518F30(ctx, base);
loc_82671748:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266a640
	ctx.lr = 0x82671754;
	sub_8266A640(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826717c8
	if (ctx.cr0.eq) goto loc_826717C8;
	// lwz r11,472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x826717c8
	if (!ctx.cr6.eq) goto loc_826717C8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-26964
	ctx.r3.s64 = ctx.r11.s64 + -26964;
	// bl 0x82e73af8
	ctx.lr = 0x82671774;
	sub_82E73AF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e5cfd8
	ctx.lr = 0x82671780;
	sub_82E5CFD8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-26988
	ctx.r3.s64 = ctx.r11.s64 + -26988;
	// bl 0x82e73af8
	ctx.lr = 0x8267178C;
	sub_82E73AF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e5cfd8
	ctx.lr = 0x82671798;
	sub_82E5CFD8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826717B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826717c8
	if (ctx.cr0.eq) goto loc_826717C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266a540
	ctx.lr = 0x826717C8;
	sub_8266A540(ctx, base);
loc_826717C8:
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// addi r3,r11,108
	ctx.r3.s64 = ctx.r11.s64 + 108;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826717E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266a728
	ctx.lr = 0x826717E8;
	sub_8266A728(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a7de4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826717F0"))) PPC_WEAK_FUNC(sub_826717F0);
PPC_FUNC_IMPL(__imp__sub_826717F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-360
	ctx.r3.s64 = ctx.r3.s64 + -360;
	// lwz r11,468(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,468(r3)
	PPC_STORE_U32(ctx.r3.u32 + 468, ctx.r10.u32);
	// lwz r11,248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82671820"))) PPC_WEAK_FUNC(sub_82671820);
PPC_FUNC_IMPL(__imp__sub_82671820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-29344
	ctx.r11.s64 = ctx.r11.s64 + -29344;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8267184c
	if (ctx.cr0.eq) goto loc_8267184C;
	// bl 0x823fd208
	ctx.lr = 0x8267184C;
	sub_823FD208(ctx, base);
loc_8267184C:
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

__attribute__((alias("__imp__sub_82671868"))) PPC_WEAK_FUNC(sub_82671868);
PPC_FUNC_IMPL(__imp__sub_82671868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82671870;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,672(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 672);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826718bc
	if (ctx.cr6.eq) goto loc_826718BC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826718bc
	if (ctx.cr6.eq) goto loc_826718BC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,95
	ctx.r5.s64 = 95;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bfcbc8
	ctx.lr = 0x826718A8;
	sub_82BFCBC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826718bc
	if (ctx.cr0.eq) goto loc_826718BC;
	// lwz r3,672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// bl 0x82487ca0
	ctx.lr = 0x826718B8;
	sub_82487CA0(ctx, base);
	// b 0x826718cc
	goto loc_826718CC;
loc_826718BC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826aaa68
	ctx.lr = 0x826718CC;
	sub_826AAA68(ctx, base);
loc_826718CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826718D8"))) PPC_WEAK_FUNC(sub_826718D8);
PPC_FUNC_IMPL(__imp__sub_826718D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x826718E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82671950
	if (!ctx.cr6.eq) goto loc_82671950;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82671930
	if (ctx.cr6.eq) goto loc_82671930;
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82671930
	if (!ctx.cr6.eq) goto loc_82671930;
	// bl 0x8266ac40
	ctx.lr = 0x8267191C;
	sub_8266AC40(ctx, base);
	// lwz r3,360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267194c
	if (ctx.cr6.eq) goto loc_8267194C;
	// bl 0x82487ca0
	ctx.lr = 0x8267192C;
	sub_82487CA0(ctx, base);
	// b 0x8267194c
	goto loc_8267194C;
loc_82671930:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// lwz r4,20312(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20312);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267194C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8267194C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82671950:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82671970
	if (!ctx.cr0.eq) goto loc_82671970;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b3cf8
	ctx.lr = 0x82671970;
	sub_826B3CF8(ctx, base);
loc_82671970:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82671978"))) PPC_WEAK_FUNC(sub_82671978);
PPC_FUNC_IMPL(__imp__sub_82671978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82648b60
	ctx.lr = 0x82671998;
	sub_82648B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826719f4
	if (ctx.cr0.eq) goto loc_826719F4;
	// lwz r11,3044(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3044);
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// lis r9,-31965
	ctx.r9.s64 = -2094858240;
	// addi r6,r10,-10880
	ctx.r6.s64 = ctx.r10.s64 + -10880;
	// addi r5,r9,12348
	ctx.r5.s64 = ctx.r9.s64 + 12348;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// bl 0x823e4818
	ctx.lr = 0x826719C4;
	sub_823E4818(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826719f4
	if (ctx.cr0.eq) goto loc_826719F4;
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x826719f4
	if (ctx.cr6.eq) goto loc_826719F4;
	// addi r3,r30,368
	ctx.r3.s64 = ctx.r30.s64 + 368;
	// bl 0x8246ebb8
	ctx.lr = 0x826719E0;
	sub_8246EBB8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,3504(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3504);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x826719f4
	if (!ctx.cr6.gt) goto loc_826719F4;
	// li r31,1
	ctx.r31.s64 = 1;
loc_826719F4:
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

__attribute__((alias("__imp__sub_82671A10"))) PPC_WEAK_FUNC(sub_82671A10);
PPC_FUNC_IMPL(__imp__sub_82671A10) {
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
	// bl 0x82648b60
	ctx.lr = 0x82671A20;
	sub_82648B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82671a58
	if (ctx.cr0.eq) goto loc_82671A58;
	// lwz r11,3044(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3044);
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// lis r9,-31965
	ctx.r9.s64 = -2094858240;
	// addi r6,r10,-10880
	ctx.r6.s64 = ctx.r10.s64 + -10880;
	// addi r5,r9,12348
	ctx.r5.s64 = ctx.r9.s64 + 12348;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// bl 0x823e4818
	ctx.lr = 0x82671A4C;
	sub_823E4818(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82671a58
	if (ctx.cr0.eq) goto loc_82671A58;
	// bl 0x82641e30
	ctx.lr = 0x82671A58;
	sub_82641E30(ctx, base);
loc_82671A58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82671A68"))) PPC_WEAK_FUNC(sub_82671A68);
PPC_FUNC_IMPL(__imp__sub_82671A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r5,r3,400
	ctx.r5.s64 = ctx.r3.s64 + 400;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,7328(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7328);
	// bl 0x82e5fbd0
	ctx.lr = 0x82671A8C;
	sub_82E5FBD0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r5,r31,412
	ctx.r5.s64 = ctx.r31.s64 + 412;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,7756(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7756);
	// bl 0x82e5fbd0
	ctx.lr = 0x82671AA0;
	sub_82E5FBD0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r5,r31,424
	ctx.r5.s64 = ctx.r31.s64 + 424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,7560(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7560);
	// bl 0x82e5fbd0
	ctx.lr = 0x82671AB4;
	sub_82E5FBD0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r5,r31,436
	ctx.r5.s64 = ctx.r31.s64 + 436;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,7364(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7364);
	// bl 0x82e5fbd0
	ctx.lr = 0x82671AC8;
	sub_82E5FBD0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r5,r31,448
	ctx.r5.s64 = ctx.r31.s64 + 448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,7352(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7352);
	// bl 0x82e5fbd0
	ctx.lr = 0x82671ADC;
	sub_82E5FBD0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r5,r31,460
	ctx.r5.s64 = ctx.r31.s64 + 460;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,7740(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7740);
	// bl 0x82e5fbd0
	ctx.lr = 0x82671AF0;
	sub_82E5FBD0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r5,r31,472
	ctx.r5.s64 = ctx.r31.s64 + 472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,7892(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7892);
	// bl 0x82e5fbd0
	ctx.lr = 0x82671B04;
	sub_82E5FBD0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,7760(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7760);
	// bl 0x8266f2b8
	ctx.lr = 0x82671B14;
	sub_8266F2B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82671B38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82671B58;
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

__attribute__((alias("__imp__sub_82671B70"))) PPC_WEAK_FUNC(sub_82671B70);
PPC_FUNC_IMPL(__imp__sub_82671B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,498(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 498);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82671c0c
	if (!ctx.cr0.eq) goto loc_82671C0C;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82671ba8
	if (!ctx.cr6.eq) goto loc_82671BA8;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r4,7368(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7368);
	// bl 0x82e5cfd8
	ctx.lr = 0x82671BA4;
	sub_82E5CFD8(ctx, base);
	// b 0x82671bd0
	goto loc_82671BD0;
loc_82671BA8:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r4,7432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7432);
	// bl 0x82e5cfd8
	ctx.lr = 0x82671BB4;
	sub_82E5CFD8(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20824(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20824);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82671BD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82671BD0:
	// bl 0x82648b60
	ctx.lr = 0x82671BD4;
	sub_82648B60(ctx, base);
	// lwz r11,3044(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3044);
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// lis r9,-31965
	ctx.r9.s64 = -2094858240;
	// addi r6,r10,-10880
	ctx.r6.s64 = ctx.r10.s64 + -10880;
	// addi r5,r9,12348
	ctx.r5.s64 = ctx.r9.s64 + 12348;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823e4818
	ctx.lr = 0x82671BF8;
	sub_823E4818(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82671c04
	if (ctx.cr0.eq) goto loc_82671C04;
	// bl 0x82641e30
	ctx.lr = 0x82671C04;
	sub_82641E30(ctx, base);
loc_82671C04:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,498(r31)
	PPC_STORE_U8(ctx.r31.u32 + 498, ctx.r11.u8);
loc_82671C0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82671C20"))) PPC_WEAK_FUNC(sub_82671C20);
PPC_FUNC_IMPL(__imp__sub_82671C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,494(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 494);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82671c90
	if (!ctx.cr0.eq) goto loc_82671C90;
	// bl 0x82648b60
	ctx.lr = 0x82671C48;
	sub_82648B60(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82671c74
	if (ctx.cr0.eq) goto loc_82671C74;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826492b0
	ctx.lr = 0x82671C58;
	sub_826492B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq 0x82671c70
	if (ctx.cr0.eq) goto loc_82671C70;
	// bl 0x82649348
	ctx.lr = 0x82671C6C;
	sub_82649348(ctx, base);
	// b 0x82671c74
	goto loc_82671C74;
loc_82671C70:
	// bl 0x82649348
	ctx.lr = 0x82671C74;
	sub_82649348(ctx, base);
loc_82671C74:
	// lbz r11,498(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 498);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82671cfc
	if (ctx.cr0.eq) goto loc_82671CFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266b040
	ctx.lr = 0x82671C8C;
	sub_8266B040(ctx, base);
	// b 0x82671cfc
	goto loc_82671CFC;
loc_82671C90:
	// bl 0x823f18b8
	ctx.lr = 0x82671C94;
	sub_823F18B8(ctx, base);
	// stw r3,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r3.u32);
	// bl 0x82648b60
	ctx.lr = 0x82671C9C;
	sub_82648B60(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82671cc8
	if (ctx.cr0.eq) goto loc_82671CC8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826492b0
	ctx.lr = 0x82671CAC;
	sub_826492B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq 0x82671cc4
	if (ctx.cr0.eq) goto loc_82671CC4;
	// bl 0x826492a0
	ctx.lr = 0x82671CC0;
	sub_826492A0(ctx, base);
	// b 0x82671cc8
	goto loc_82671CC8;
loc_82671CC4:
	// bl 0x826492a0
	ctx.lr = 0x82671CC8;
	sub_826492A0(ctx, base);
loc_82671CC8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82671CDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82671cfc
	if (ctx.cr0.eq) goto loc_82671CFC;
	// lbz r11,498(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 498);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82671cfc
	if (!ctx.cr0.eq) goto loc_82671CFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82671b70
	ctx.lr = 0x82671CFC;
	sub_82671B70(ctx, base);
loc_82671CFC:
	// lbz r11,494(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 494);
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,494(r31)
	PPC_STORE_U8(ctx.r31.u32 + 494, ctx.r11.u8);
	// lwz r11,120(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	// lwz r4,19352(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19352);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82671D28;
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

__attribute__((alias("__imp__sub_82671D40"))) PPC_WEAK_FUNC(sub_82671D40);
PPC_FUNC_IMPL(__imp__sub_82671D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,498(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 498);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82671dc8
	if (!ctx.cr0.eq) goto loc_82671DC8;
	// bl 0x82648b60
	ctx.lr = 0x82671D64;
	sub_82648B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82671da8
	if (ctx.cr0.eq) goto loc_82671DA8;
	// lwz r11,3044(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3044);
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// lis r9,-31965
	ctx.r9.s64 = -2094858240;
	// addi r6,r10,-10880
	ctx.r6.s64 = ctx.r10.s64 + -10880;
	// addi r5,r9,12348
	ctx.r5.s64 = ctx.r9.s64 + 12348;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// bl 0x823e4818
	ctx.lr = 0x82671D90;
	sub_823E4818(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82671da8
	if (ctx.cr0.eq) goto loc_82671DA8;
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82671da8
	if (ctx.cr6.eq) goto loc_82671DA8;
	// bl 0x82641e30
	ctx.lr = 0x82671DA8;
	sub_82641E30(ctx, base);
loc_82671DA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266b198
	ctx.lr = 0x82671DB0;
	sub_8266B198(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82671DC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82671dd4
	goto loc_82671DD4;
loc_82671DC8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266b040
	ctx.lr = 0x82671DD4;
	sub_8266B040(ctx, base);
loc_82671DD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82671DE8"))) PPC_WEAK_FUNC(sub_82671DE8);
PPC_FUNC_IMPL(__imp__sub_82671DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,364(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82671E10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82671e5c
	if (ctx.cr0.eq) goto loc_82671E5C;
	// bl 0x82648b60
	ctx.lr = 0x82671E1C;
	sub_82648B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82671e54
	if (ctx.cr0.eq) goto loc_82671E54;
	// lwz r11,3044(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3044);
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// lis r9,-31965
	ctx.r9.s64 = -2094858240;
	// addi r6,r10,-10880
	ctx.r6.s64 = ctx.r10.s64 + -10880;
	// addi r5,r9,12348
	ctx.r5.s64 = ctx.r9.s64 + 12348;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// bl 0x823e4818
	ctx.lr = 0x82671E48;
	sub_823E4818(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82671e54
	if (ctx.cr0.eq) goto loc_82671E54;
	// bl 0x82641e48
	ctx.lr = 0x82671E54;
	sub_82641E48(ctx, base);
loc_82671E54:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82655d18
	ctx.lr = 0x82671E5C;
	sub_82655D18(ctx, base);
loc_82671E5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82671E70"))) PPC_WEAK_FUNC(sub_82671E70);
PPC_FUNC_IMPL(__imp__sub_82671E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,508(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82671ecc
	if (ctx.cr6.eq) goto loc_82671ECC;
	// bl 0x82648b60
	ctx.lr = 0x82671E94;
	sub_82648B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82671ea4
	if (ctx.cr0.eq) goto loc_82671EA4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82649348
	ctx.lr = 0x82671EA4;
	sub_82649348(ctx, base);
loc_82671EA4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// lwz r4,20312(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20312);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82671EC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// bl 0x82487ca0
	ctx.lr = 0x82671EC8;
	sub_82487CA0(ctx, base);
	// b 0x82671ed4
	goto loc_82671ED4;
loc_82671ECC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266b238
	ctx.lr = 0x82671ED4;
	sub_8266B238(ctx, base);
loc_82671ED4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82671EE8"))) PPC_WEAK_FUNC(sub_82671EE8);
PPC_FUNC_IMPL(__imp__sub_82671EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82906a18
	ctx.lr = 0x82671F00;
	sub_82906A18(ctx, base);
	// bl 0x82651b90
	ctx.lr = 0x82671F04;
	sub_82651B90(ctx, base);
	// lwz r3,512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82671f18
	if (ctx.cr6.eq) goto loc_82671F18;
	// bl 0x82487ca0
	ctx.lr = 0x82671F14;
	sub_82487CA0(ctx, base);
	// b 0x82671f2c
	goto loc_82671F2C;
loc_82671F18:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82671F2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82671F2C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82671F40"))) PPC_WEAK_FUNC(sub_82671F40);
PPC_FUNC_IMPL(__imp__sub_82671F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// beq cr6,0x82671fac
	if (ctx.cr6.eq) goto loc_82671FAC;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bne cr6,0x82671fc8
	if (!ctx.cr6.eq) goto loc_82671FC8;
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82671f80
	if (ctx.cr6.eq) goto loc_82671F80;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82671fc8
	if (!ctx.cr6.eq) goto loc_82671FC8;
	// bl 0x8266b6a8
	ctx.lr = 0x82671F7C;
	sub_8266B6A8(ctx, base);
	// b 0x82671fc8
	goto loc_82671FC8;
loc_82671F80:
	// bl 0x82473ff8
	ctx.lr = 0x82671F84;
	sub_82473FF8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,268(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,285
	ctx.r5.s64 = 285;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82671FA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82671fc8
	goto loc_82671FC8;
loc_82671FAC:
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82671fc8
	if (ctx.cr6.eq) goto loc_82671FC8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,484
	ctx.r3.s64 = ctx.r31.s64 + 484;
	// stb r11,488(r31)
	PPC_STORE_U8(ctx.r31.u32 + 488, ctx.r11.u8);
	// bl 0x824db880
	ctx.lr = 0x82671FC8;
	sub_824DB880(ctx, base);
loc_82671FC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82671FE0"))) PPC_WEAK_FUNC(sub_82671FE0);
PPC_FUNC_IMPL(__imp__sub_82671FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,380(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82672008
	if (ctx.cr6.eq) goto loc_82672008;
	// bl 0x82487ca0
	ctx.lr = 0x82672004;
	sub_82487CA0(ctx, base);
	// b 0x82672038
	goto loc_82672038;
loc_82672008:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267201C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82672038
	if (ctx.cr0.eq) goto loc_82672038;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82672038;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82672038:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82672050"))) PPC_WEAK_FUNC(sub_82672050);
PPC_FUNC_IMPL(__imp__sub_82672050) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,372(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 372);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82487ca0
	sub_82487CA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82672060"))) PPC_WEAK_FUNC(sub_82672060);
PPC_FUNC_IMPL(__imp__sub_82672060) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82672068"))) PPC_WEAK_FUNC(sub_82672068);
PPC_FUNC_IMPL(__imp__sub_82672068) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,376(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 376);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82487ca0
	sub_82487CA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82672078"))) PPC_WEAK_FUNC(sub_82672078);
PPC_FUNC_IMPL(__imp__sub_82672078) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82672080"))) PPC_WEAK_FUNC(sub_82672080);
PPC_FUNC_IMPL(__imp__sub_82672080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82672088;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,360
	ctx.r3.s64 = 360;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x826720A0;
	sub_82C0F6C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826720e0
	if (ctx.cr0.eq) goto loc_826720E0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d3bd0
	ctx.lr = 0x826720C0;
	sub_825D3BD0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-29140
	ctx.r11.s64 = ctx.r11.s64 + -29140;
	// addi r10,r10,-29148
	ctx.r10.s64 = ctx.r10.s64 + -29148;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x826720e4
	goto loc_826720E4;
loc_826720E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826720E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826720F0"))) PPC_WEAK_FUNC(sub_826720F0);
PPC_FUNC_IMPL(__imp__sub_826720F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x826720F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,360
	ctx.r3.s64 = 360;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x82672110;
	sub_82C0F6C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82672150
	if (ctx.cr0.eq) goto loc_82672150;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d3bd0
	ctx.lr = 0x82672130;
	sub_825D3BD0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-28900
	ctx.r11.s64 = ctx.r11.s64 + -28900;
	// addi r10,r10,-28912
	ctx.r10.s64 = ctx.r10.s64 + -28912;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x82672154
	goto loc_82672154;
loc_82672150:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82672154:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82672160"))) PPC_WEAK_FUNC(sub_82672160);
PPC_FUNC_IMPL(__imp__sub_82672160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82672168;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,400
	ctx.r3.s64 = 400;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x82672180;
	sub_82C0F6C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826721c4
	if (ctx.cr0.eq) goto loc_826721C4;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826d9d90
	ctx.lr = 0x8267219C;
	sub_826D9D90(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-27940
	ctx.r11.s64 = ctx.r11.s64 + -27940;
	// addi r10,r10,-27952
	ctx.r10.s64 = ctx.r10.s64 + -27952;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x825d4c60
	ctx.lr = 0x826721BC;
	sub_825D4C60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x826721c8
	goto loc_826721C8;
loc_826721C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826721C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826721D0"))) PPC_WEAK_FUNC(sub_826721D0);
PPC_FUNC_IMPL(__imp__sub_826721D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x826721D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,476
	ctx.r3.s64 = 476;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x826721F0;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267220c
	if (ctx.cr0.eq) goto loc_8267220C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82670758
	ctx.lr = 0x82672208;
	sub_82670758(ctx, base);
	// b 0x82672210
	goto loc_82672210;
loc_8267220C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82672210:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82672218"))) PPC_WEAK_FUNC(sub_82672218);
PPC_FUNC_IMPL(__imp__sub_82672218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82672220;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,480
	ctx.r3.s64 = 480;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x82672238;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82672254
	if (ctx.cr0.eq) goto loc_82672254;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82670848
	ctx.lr = 0x82672250;
	sub_82670848(ctx, base);
	// b 0x82672258
	goto loc_82672258;
loc_82672254:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82672258:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82672260"))) PPC_WEAK_FUNC(sub_82672260);
PPC_FUNC_IMPL(__imp__sub_82672260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82672268;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,680
	ctx.r3.s64 = 680;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x82672280;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267229c
	if (ctx.cr0.eq) goto loc_8267229C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82670ae0
	ctx.lr = 0x82672298;
	sub_82670AE0(ctx, base);
	// b 0x826722a0
	goto loc_826722A0;
loc_8267229C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826722A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826722A8"))) PPC_WEAK_FUNC(sub_826722A8);
PPC_FUNC_IMPL(__imp__sub_826722A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x826722B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,408
	ctx.r3.s64 = 408;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x826722C8;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826722e4
	if (ctx.cr0.eq) goto loc_826722E4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82670cb0
	ctx.lr = 0x826722E0;
	sub_82670CB0(ctx, base);
	// b 0x826722e8
	goto loc_826722E8;
loc_826722E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826722E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826722F0"))) PPC_WEAK_FUNC(sub_826722F0);
PPC_FUNC_IMPL(__imp__sub_826722F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x826722F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,492
	ctx.r3.s64 = 492;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x82672310;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267232c
	if (ctx.cr0.eq) goto loc_8267232C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82670df8
	ctx.lr = 0x82672328;
	sub_82670DF8(ctx, base);
	// b 0x82672330
	goto loc_82672330;
loc_8267232C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82672330:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82672338"))) PPC_WEAK_FUNC(sub_82672338);
PPC_FUNC_IMPL(__imp__sub_82672338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82672340;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// bl 0x826a0ed8
	ctx.lr = 0x82672358;
	sub_826A0ED8(ctx, base);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x8267236c
	if (!ctx.cr6.eq) goto loc_8267236C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// b 0x826723f4
	goto loc_826723F4;
loc_8267236C:
	// cmpwi cr6,r31,-2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -2, ctx.xer);
	// bne cr6,0x82672388
	if (!ctx.cr6.eq) goto loc_82672388;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// bl 0x824e4f78
	ctx.lr = 0x82672380;
	sub_824E4F78(ctx, base);
	// sth r3,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r3.u16);
	// b 0x826723f8
	goto loc_826723F8;
loc_82672388:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x826723a4
	if (!ctx.cr6.eq) goto loc_826723A4;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// b 0x826723f0
	goto loc_826723F0;
loc_826723A4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x826723d8
	if (!ctx.cr6.eq) goto loc_826723D8;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,-1
	ctx.r9.s64 = -1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r11,-2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// sth r9,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r9.u16);
	// b 0x826723f8
	goto loc_826723F8;
loc_826723D8:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,-2(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + -2);
	// sth r10,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r10.u16);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
loc_826723F0:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_826723F4:
	// sth r11,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r11.u16);
loc_826723F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82672400"))) PPC_WEAK_FUNC(sub_82672400);
PPC_FUNC_IMPL(__imp__sub_82672400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-4084(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4084);
	// bl 0x82642620
	ctx.lr = 0x82672420;
	sub_82642620(ctx, base);
	// bl 0x82473ff8
	ctx.lr = 0x82672424;
	sub_82473FF8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,268(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82672448;
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

__attribute__((alias("__imp__sub_82672460"))) PPC_WEAK_FUNC(sub_82672460);
PPC_FUNC_IMPL(__imp__sub_82672460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-4084(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4084);
	// bl 0x82642620
	ctx.lr = 0x82672480;
	sub_82642620(ctx, base);
	// bl 0x82473ff8
	ctx.lr = 0x82672484;
	sub_82473FF8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,268(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,36
	ctx.r5.s64 = 36;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826724A8;
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

__attribute__((alias("__imp__sub_826724C0"))) PPC_WEAK_FUNC(sub_826724C0);
PPC_FUNC_IMPL(__imp__sub_826724C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x8266ae38
	sub_8266AE38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826724D0"))) PPC_WEAK_FUNC(sub_826724D0);
PPC_FUNC_IMPL(__imp__sub_826724D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddfc
	ctx.lr = 0x826724D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x82672540
	goto loc_82672540;
loc_82672500:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bctrl 
	ctx.lr = 0x82672518;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82672524
	if (ctx.cr0.eq) goto loc_82672524;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_82672524:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// rlwinm r31,r9,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stwx r11,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r11.u32);
loc_82672540:
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82672500
	if (ctx.cr6.lt) goto loc_82672500;
	// bne cr6,0x82672564
	if (!ctx.cr6.eq) goto loc_82672564;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r30,r28,-1
	ctx.r30.s64 = ctx.r28.s64 + -1;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stwx r11,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r11.u32);
loc_82672564:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b75128
	ctx.lr = 0x8267257C;
	sub_82B75128(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82672588"))) PPC_WEAK_FUNC(sub_82672588);
PPC_FUNC_IMPL(__imp__sub_82672588) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// rlwinm r31,r4,0,14,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x3FFFE;
	// ori r6,r11,65530
	ctx.r6.u64 = ctx.r11.u64 | 65530;
	// cmplw cr6,r31,r6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x826725b4
	if (!ctx.cr6.eq) goto loc_826725B4;
	// lwz r11,608(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 608);
	// rlwinm r10,r4,17,15,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 17) & 0x1FFF8;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x826725e8
	goto loc_826725E8;
loc_826725B4:
	// lwz r9,268(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// lwz r8,264(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// rlwinm r7,r4,17,15,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 17) & 0x1FFF8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 & ctx.r11.u64;
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// and r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 & ctx.r11.u64;
	// andc r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 & ~ctx.r11.u64;
	// andc r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 & ~ctx.r11.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_826725E8:
	// rlwinm r9,r4,31,15,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x1FFFF;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82672644
	if (ctx.cr6.eq) goto loc_82672644;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_826725FC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82672614
	if (!ctx.cr0.eq) goto loc_82672614;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x8267263c
	goto loc_8267263C;
loc_82672614:
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8267263c
	if (ctx.cr0.eq) goto loc_8267263C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82672624:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82672634
	if (!ctx.cr0.eq) goto loc_82672634;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82672634:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82672624
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82672624;
loc_8267263C:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x826725fc
	if (!ctx.cr0.eq) goto loc_826725FC;
loc_82672644:
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// cmplw cr6,r31,r6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r6.u32, ctx.xer);
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// bne cr6,0x82672660
	if (!ctx.cr6.eq) goto loc_82672660;
	// rlwinm r11,r11,18,0,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xFFFC0000;
	// or r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 | ctx.r6.u64;
	// b 0x8267266c
	goto loc_8267266C;
loc_82672660:
	// rlwinm r11,r11,17,0,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwimi r4,r11,1,0,30
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0xFFFFFFFE) | (ctx.r4.u64 & 0xFFFFFFFF00000001);
loc_8267266C:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82672678"))) PPC_WEAK_FUNC(sub_82672678);
PPC_FUNC_IMPL(__imp__sub_82672678) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82672680;
	__savegprlr_28(ctx, base);
	// lwz r8,668(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 668);
	// clrlwi r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
	// lwz r6,268(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r7,664(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 664);
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// rlwinm r30,r4,16,16,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFC;
	// lwz r4,264(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// and r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 & ctx.r11.u64;
	// lwz r29,0(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// and r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 & ctx.r11.u64;
	// lwz r28,0(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r10,r31,17,15,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 17) & 0x1FFF8;
	// andc r6,r29,r11
	ctx.r6.u64 = ctx.r29.u64 & ~ctx.r11.u64;
	// andc r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 & ~ctx.r11.u64;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r31,r31,14,18,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 14) & 0x3FFF;
	// lwzx r10,r7,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// stw r10,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r10.u32);
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// stw r10,36(r5)
	PPC_STORE_U32(ctx.r5.u32 + 36, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r8,r10,30
	ctx.r8.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82672758
	if (!ctx.cr0.eq) goto loc_82672758;
	// rlwinm r10,r10,30,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3;
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r8,30,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r8,28,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x7;
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r10,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,25,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x3;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,23,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x3;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r4,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r4.u32);
	// stw r10,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r10.u32);
	// b 0x82672780
	goto loc_82672780;
loc_82672758:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,5
	ctx.r8.s64 = 5;
	// li r7,9
	ctx.r7.s64 = 9;
	// stw r10,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r10.u32);
	// stw r10,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r10.u32);
	// stw r8,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r8.u32);
	// stw r7,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r7.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,30,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFF;
	// stw r10,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r10.u32);
loc_82672780:
	// lwz r10,612(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 612);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x826727b4
	if (!ctx.cr6.gt) goto loc_826727B4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826727a4
	if (ctx.cr6.eq) goto loc_826727A4;
	// lwz r11,644(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 644);
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// b 0x826727ac
	goto loc_826727AC;
loc_826727A4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,11,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x7FF;
loc_826727AC:
	// stw r11,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r11.u32);
	// b 0x826727b8
	goto loc_826727B8;
loc_826727B4:
	// stw r4,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r4.u32);
loc_826727B8:
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826727C0"))) PPC_WEAK_FUNC(sub_826727C0);
PPC_FUNC_IMPL(__imp__sub_826727C0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826727D0"))) PPC_WEAK_FUNC(sub_826727D0);
PPC_FUNC_IMPL(__imp__sub_826727D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_826727E8"))) PPC_WEAK_FUNC(sub_826727E8);
PPC_FUNC_IMPL(__imp__sub_826727E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82672800"))) PPC_WEAK_FUNC(sub_82672800);
PPC_FUNC_IMPL(__imp__sub_82672800) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82672828;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
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

__attribute__((alias("__imp__sub_82672850"))) PPC_WEAK_FUNC(sub_82672850);
PPC_FUNC_IMPL(__imp__sub_82672850) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82672878;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
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

__attribute__((alias("__imp__sub_826728A0"))) PPC_WEAK_FUNC(sub_826728A0);
PPC_FUNC_IMPL(__imp__sub_826728A0) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826728C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
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

__attribute__((alias("__imp__sub_826728F0"))) PPC_WEAK_FUNC(sub_826728F0);
PPC_FUNC_IMPL(__imp__sub_826728F0) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82672918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
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

__attribute__((alias("__imp__sub_82672940"))) PPC_WEAK_FUNC(sub_82672940);
PPC_FUNC_IMPL(__imp__sub_82672940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r11,r11,-26812
	ctx.r11.s64 = ctx.r11.s64 + -26812;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82de7330
	ctx.lr = 0x82672968;
	sub_82DE7330(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82de7330
	ctx.lr = 0x82672970;
	sub_82DE7330(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,27156
	ctx.r11.s64 = ctx.r11.s64 + 27156;
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

__attribute__((alias("__imp__sub_82672990"))) PPC_WEAK_FUNC(sub_82672990);
PPC_FUNC_IMPL(__imp__sub_82672990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82672940
	ctx.lr = 0x826729B0;
	sub_82672940(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826729c0
	if (ctx.cr0.eq) goto loc_826729C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x826729C0;
	sub_823FD208(ctx, base);
loc_826729C0:
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

__attribute__((alias("__imp__sub_826729E0"))) PPC_WEAK_FUNC(sub_826729E0);
PPC_FUNC_IMPL(__imp__sub_826729E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8266f808
	ctx.lr = 0x82672A00;
	sub_8266F808(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82672a10
	if (ctx.cr0.eq) goto loc_82672A10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82672A10;
	sub_823FD208(ctx, base);
loc_82672A10:
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

__attribute__((alias("__imp__sub_82672A30"))) PPC_WEAK_FUNC(sub_82672A30);
PPC_FUNC_IMPL(__imp__sub_82672A30) {
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
	// lwz r4,116(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82672A5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,144
	ctx.r10.s64 = 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v63,v63,18
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x36800000)))));
	// stvx128 v63,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82642918
	ctx.lr = 0x82672A78;
	sub_82642918(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266f8a0
	ctx.lr = 0x82672A80;
	sub_8266F8A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82668868
	ctx.lr = 0x82672A88;
	sub_82668868(ctx, base);
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

__attribute__((alias("__imp__sub_82672AA0"))) PPC_WEAK_FUNC(sub_82672AA0);
PPC_FUNC_IMPL(__imp__sub_82672AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-28652
	ctx.r11.s64 = ctx.r11.s64 + -28652;
	// addi r10,r10,-28664
	ctx.r10.s64 = ctx.r10.s64 + -28664;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// bl 0x826703b8
	ctx.lr = 0x82672AD8;
	sub_826703B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c09c68
	ctx.lr = 0x82672AE0;
	sub_82C09C68(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,27900
	ctx.r11.s64 = ctx.r11.s64 + 27900;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8247a9a8
	ctx.lr = 0x82672AF4;
	sub_8247A9A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82672B10"))) PPC_WEAK_FUNC(sub_82672B10);
PPC_FUNC_IMPL(__imp__sub_82672B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82672aa0
	ctx.lr = 0x82672B30;
	sub_82672AA0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82672b40
	if (ctx.cr0.eq) goto loc_82672B40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82672B40;
	sub_823FD208(ctx, base);
loc_82672B40:
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

__attribute__((alias("__imp__sub_82672B60"))) PPC_WEAK_FUNC(sub_82672B60);
PPC_FUNC_IMPL(__imp__sub_82672B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82672B68;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,121(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 121);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82672db8
	if (ctx.cr0.eq) goto loc_82672DB8;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82672B98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82672c94
	if (!ctx.cr0.eq) goto loc_82672C94;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82672BC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82672c94
	if (ctx.cr0.eq) goto loc_82672C94;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82672BDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82672BEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82672c94
	if (ctx.cr0.eq) goto loc_82672C94;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82672C08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82672C18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,752(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 752);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82672c94
	if (ctx.cr0.eq) goto loc_82672C94;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,3648(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 168);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82672C5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82672C6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r10,736
	ctx.r10.s64 = 736;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lvx128 v62,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// vaddfp128 v1,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32)));
	// lwz r11,316(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 316);
	// b 0x82672d68
	goto loc_82672D68;
loc_82672C94:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82672CA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82672d50
	if (ctx.cr0.eq) goto loc_82672D50;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82672CC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82672CD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82672d50
	if (ctx.cr0.eq) goto loc_82672D50;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82672CF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82672D00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 176);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82672d50
	if (ctx.cr0.eq) goto loc_82672D50;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82672D20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r28,8(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82672D38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,208
	ctx.r11.s64 = 208;
	// lwz r10,316(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// lvx128 v1,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x82672d6c
	goto loc_82672D6C;
loc_82672D50:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-26736
	ctx.r11.s64 = ctx.r11.s64 + -26736;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lvx128 v1,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,316(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 316);
loc_82672D68:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82672D6C:
	// bctrl 
	ctx.lr = 0x82672D70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r4,96(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 96);
	// ld r5,104(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 104);
	// ld r6,112(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 112);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82672D90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82672DA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82672DB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82672DB8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82672DC0"))) PPC_WEAK_FUNC(sub_82672DC0);
PPC_FUNC_IMPL(__imp__sub_82672DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d3bd0
	ctx.lr = 0x82672DE0;
	sub_825D3BD0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-26708
	ctx.r11.s64 = ctx.r11.s64 + -26708;
	// addi r10,r10,-26716
	ctx.r10.s64 = ctx.r10.s64 + -26716;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,360
	ctx.r3.s64 = ctx.r31.s64 + 360;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82e73b88
	ctx.lr = 0x82672E00;
	sub_82E73B88(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// addi r30,r11,27448
	ctx.r30.s64 = ctx.r11.s64 + 27448;
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// bl 0x82e73b88
	ctx.lr = 0x82672E14;
	sub_82E73B88(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// addi r3,r31,384
	ctx.r3.s64 = ctx.r31.s64 + 384;
	// bl 0x82e73b88
	ctx.lr = 0x82672E20;
	sub_82E73B88(ctx, base);
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// addi r3,r31,396
	ctx.r3.s64 = ctx.r31.s64 + 396;
	// bl 0x82e73b88
	ctx.lr = 0x82672E2C;
	sub_82E73B88(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r31,408
	ctx.r10.s64 = ctx.r31.s64 + 408;
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82672E40:
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stwu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82672e40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82672E40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82672E70"))) PPC_WEAK_FUNC(sub_82672E70);
PPC_FUNC_IMPL(__imp__sub_82672E70) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e5cf30
	sub_82E5CF30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82672E78"))) PPC_WEAK_FUNC(sub_82672E78);
PPC_FUNC_IMPL(__imp__sub_82672E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x8249bdc0
	ctx.lr = 0x82672EA8;
	sub_8249BDC0(ctx, base);
	// addi r3,r31,380
	ctx.r3.s64 = ctx.r31.s64 + 380;
	// bl 0x82bdf380
	ctx.lr = 0x82672EB0;
	sub_82BDF380(ctx, base);
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// bl 0x8249bdc0
	ctx.lr = 0x82672EB8;
	sub_8249BDC0(ctx, base);
	// addi r3,r31,928
	ctx.r3.s64 = ctx.r31.s64 + 928;
	// bl 0x82bdf380
	ctx.lr = 0x82672EC0;
	sub_82BDF380(ctx, base);
	// stw r30,1132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1132, ctx.r30.u32);
	// stw r30,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r30.u32);
	// addi r3,r31,1140
	ctx.r3.s64 = ctx.r31.s64 + 1140;
	// bl 0x82668b60
	ctx.lr = 0x82672ED0;
	sub_82668B60(ctx, base);
	// addi r3,r31,1544
	ctx.r3.s64 = ctx.r31.s64 + 1544;
	// bl 0x82668b60
	ctx.lr = 0x82672ED8;
	sub_82668B60(ctx, base);
	// addi r3,r31,1948
	ctx.r3.s64 = ctx.r31.s64 + 1948;
	// bl 0x82668b60
	ctx.lr = 0x82672EE0;
	sub_82668B60(ctx, base);
	// stw r30,2352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2352, ctx.r30.u32);
	// stw r30,2356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2356, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,2360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2360, ctx.r30.u32);
	// stw r30,2364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2364, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82672F10"))) PPC_WEAK_FUNC(sub_82672F10);
PPC_FUNC_IMPL(__imp__sub_82672F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82672F18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d3bd0
	ctx.lr = 0x82672F28;
	sub_825D3BD0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r9,r11,-26460
	ctx.r9.s64 = ctx.r11.s64 + -26460;
	// addi r10,r10,-26472
	ctx.r10.s64 = ctx.r10.s64 + -26472;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
	// bl 0x82e73b88
	ctx.lr = 0x82672F54;
	sub_82E73B88(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,380
	ctx.r3.s64 = ctx.r31.s64 + 380;
	// addi r30,r11,27448
	ctx.r30.s64 = ctx.r11.s64 + 27448;
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// bl 0x82e73b88
	ctx.lr = 0x82672F68;
	sub_82E73B88(ctx, base);
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// addi r3,r31,392
	ctx.r3.s64 = ctx.r31.s64 + 392;
	// bl 0x82e73b88
	ctx.lr = 0x82672F74;
	sub_82E73B88(ctx, base);
	// addi r29,r31,404
	ctx.r29.s64 = ctx.r31.s64 + 404;
	// li r28,6
	ctx.r28.s64 = 6;
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
loc_82672F80:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e73b88
	ctx.lr = 0x82672F88;
	sub_82E73B88(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// bge 0x82672f80
	if (!ctx.cr0.lt) goto loc_82672F80;
	// addi r3,r31,488
	ctx.r3.s64 = ctx.r31.s64 + 488;
	// bl 0x825d4c60
	ctx.lr = 0x82672FA0;
	sub_825D4C60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82672FB0"))) PPC_WEAK_FUNC(sub_82672FB0);
PPC_FUNC_IMPL(__imp__sub_82672FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-26220
	ctx.r11.s64 = ctx.r11.s64 + -26220;
	// addi r10,r10,-26232
	ctx.r10.s64 = ctx.r10.s64 + -26232;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,500
	ctx.r3.s64 = ctx.r3.s64 + 500;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82de7330
	ctx.lr = 0x82672FE4;
	sub_82DE7330(ctx, base);
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// bl 0x82e73ba8
	ctx.lr = 0x82672FEC;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,460
	ctx.r3.s64 = ctx.r31.s64 + 460;
	// bl 0x82e73ba8
	ctx.lr = 0x82672FF4;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// bl 0x82e73ba8
	ctx.lr = 0x82672FFC;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,436
	ctx.r3.s64 = ctx.r31.s64 + 436;
	// bl 0x82e73ba8
	ctx.lr = 0x82673004;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// bl 0x82e73ba8
	ctx.lr = 0x8267300C;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,412
	ctx.r3.s64 = ctx.r31.s64 + 412;
	// bl 0x82e73ba8
	ctx.lr = 0x82673014;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// bl 0x82e73ba8
	ctx.lr = 0x8267301C;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// bl 0x82de7330
	ctx.lr = 0x82673024;
	sub_82DE7330(ctx, base);
	// addi r3,r31,332
	ctx.r3.s64 = ctx.r31.s64 + 332;
	// bl 0x830b2320
	ctx.lr = 0x8267302C;
	sub_830B2320(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e6bfe0
	ctx.lr = 0x82673034;
	sub_82E6BFE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673048"))) PPC_WEAK_FUNC(sub_82673048);
PPC_FUNC_IMPL(__imp__sub_82673048) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,499(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 499);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673050"))) PPC_WEAK_FUNC(sub_82673050);
PPC_FUNC_IMPL(__imp__sub_82673050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82672fb0
	ctx.lr = 0x82673070;
	sub_82672FB0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82673080
	if (ctx.cr0.eq) goto loc_82673080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82673080;
	sub_823FD208(ctx, base);
loc_82673080:
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

__attribute__((alias("__imp__sub_826730A0"))) PPC_WEAK_FUNC(sub_826730A0);
PPC_FUNC_IMPL(__imp__sub_826730A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-25932
	ctx.r11.s64 = ctx.r11.s64 + -25932;
	// addi r10,r10,-25940
	ctx.r10.s64 = ctx.r10.s64 + -25940;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,388
	ctx.r3.s64 = ctx.r3.s64 + 388;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82de7330
	ctx.lr = 0x826730D4;
	sub_82DE7330(ctx, base);
	// addi r3,r31,384
	ctx.r3.s64 = ctx.r31.s64 + 384;
	// bl 0x82de7330
	ctx.lr = 0x826730DC;
	sub_82DE7330(ctx, base);
	// addi r3,r31,380
	ctx.r3.s64 = ctx.r31.s64 + 380;
	// bl 0x82de7330
	ctx.lr = 0x826730E4;
	sub_82DE7330(ctx, base);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// bl 0x82de7330
	ctx.lr = 0x826730EC;
	sub_82DE7330(ctx, base);
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// bl 0x82de7330
	ctx.lr = 0x826730F4;
	sub_82DE7330(ctx, base);
	// addi r3,r31,332
	ctx.r3.s64 = ctx.r31.s64 + 332;
	// bl 0x830b2320
	ctx.lr = 0x826730FC;
	sub_830B2320(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e6bfe0
	ctx.lr = 0x82673104;
	sub_82E6BFE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673118"))) PPC_WEAK_FUNC(sub_82673118);
PPC_FUNC_IMPL(__imp__sub_82673118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826730a0
	ctx.lr = 0x82673138;
	sub_826730A0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82673148
	if (ctx.cr0.eq) goto loc_82673148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82673148;
	sub_823FD208(ctx, base);
loc_82673148:
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

__attribute__((alias("__imp__sub_82673168"))) PPC_WEAK_FUNC(sub_82673168);
PPC_FUNC_IMPL(__imp__sub_82673168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826708f0
	ctx.lr = 0x82673188;
	sub_826708F0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82673198
	if (ctx.cr0.eq) goto loc_82673198;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82673198;
	sub_823FD208(ctx, base);
loc_82673198:
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

__attribute__((alias("__imp__sub_826731B8"))) PPC_WEAK_FUNC(sub_826731B8);
PPC_FUNC_IMPL(__imp__sub_826731B8) {
	PPC_FUNC_PROLOGUE();
	// lfd f0,32(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826731C8"))) PPC_WEAK_FUNC(sub_826731C8);
PPC_FUNC_IMPL(__imp__sub_826731C8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 60);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826731D0"))) PPC_WEAK_FUNC(sub_826731D0);
PPC_FUNC_IMPL(__imp__sub_826731D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82742ab8
	ctx.lr = 0x826731E8;
	sub_82742AB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de7330
	ctx.lr = 0x826731F0;
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

__attribute__((alias("__imp__sub_82673208"))) PPC_WEAK_FUNC(sub_82673208);
PPC_FUNC_IMPL(__imp__sub_82673208) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82de7330
	ctx.lr = 0x8267321C;
	sub_82DE7330(ctx, base);
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

__attribute__((alias("__imp__sub_82673230"))) PPC_WEAK_FUNC(sub_82673230);
PPC_FUNC_IMPL(__imp__sub_82673230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82de7330
	ctx.lr = 0x8267324C;
	sub_82DE7330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de7330
	ctx.lr = 0x82673254;
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

__attribute__((alias("__imp__sub_82673268"))) PPC_WEAK_FUNC(sub_82673268);
PPC_FUNC_IMPL(__imp__sub_82673268) {
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
	// bl 0x82669068
	ctx.lr = 0x82673280;
	sub_82669068(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r10,r10,-25388
	ctx.r10.s64 = ctx.r10.s64 + -25388;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r9,r9,-25396
	ctx.r9.s64 = ctx.r9.s64 + -25396;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r8,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// stw r11,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r11.u32);
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// lfs f0,3368(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,420(r31)
	PPC_STORE_U8(ctx.r31.u32 + 420, ctx.r11.u8);
	// stw r11,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r11.u32);
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// stfs f0,436(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 436, temp.u32);
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826732F0"))) PPC_WEAK_FUNC(sub_826732F0);
PPC_FUNC_IMPL(__imp__sub_826732F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r3,r3,432
	ctx.r3.s64 = ctx.r3.s64 + 432;
	// bl 0x82de7330
	ctx.lr = 0x8267330C;
	sub_82DE7330(ctx, base);
	// addi r3,r31,428
	ctx.r3.s64 = ctx.r31.s64 + 428;
	// bl 0x82de7330
	ctx.lr = 0x82673314;
	sub_82DE7330(ctx, base);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x82de7330
	ctx.lr = 0x8267331C;
	sub_82DE7330(ctx, base);
	// addi r3,r31,332
	ctx.r3.s64 = ctx.r31.s64 + 332;
	// bl 0x830b2320
	ctx.lr = 0x82673324;
	sub_830B2320(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e6bfe0
	ctx.lr = 0x8267332C;
	sub_82E6BFE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673340"))) PPC_WEAK_FUNC(sub_82673340);
PPC_FUNC_IMPL(__imp__sub_82673340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82669068
	ctx.lr = 0x8267335C;
	sub_82669068(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-25148
	ctx.r11.s64 = ctx.r11.s64 + -25148;
	// addi r10,r10,-25160
	ctx.r10.s64 = ctx.r10.s64 + -25160;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82e73b88
	ctx.lr = 0x8267337C;
	sub_82E73B88(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,380
	ctx.r3.s64 = ctx.r31.s64 + 380;
	// addi r30,r11,27448
	ctx.r30.s64 = ctx.r11.s64 + 27448;
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// bl 0x82e73b88
	ctx.lr = 0x82673390;
	sub_82E73B88(ctx, base);
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// addi r3,r31,392
	ctx.r3.s64 = ctx.r31.s64 + 392;
	// bl 0x82e73b88
	ctx.lr = 0x8267339C;
	sub_82E73B88(ctx, base);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// addi r3,r31,404
	ctx.r3.s64 = ctx.r31.s64 + 404;
	// bl 0x82e73b88
	ctx.lr = 0x826733A8;
	sub_82E73B88(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826733D0"))) PPC_WEAK_FUNC(sub_826733D0);
PPC_FUNC_IMPL(__imp__sub_826733D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r3,r3,420
	ctx.r3.s64 = ctx.r3.s64 + 420;
	// bl 0x82de7330
	ctx.lr = 0x826733EC;
	sub_82DE7330(ctx, base);
	// addi r3,r31,404
	ctx.r3.s64 = ctx.r31.s64 + 404;
	// bl 0x82e73ba8
	ctx.lr = 0x826733F4;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,392
	ctx.r3.s64 = ctx.r31.s64 + 392;
	// bl 0x82e73ba8
	ctx.lr = 0x826733FC;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,380
	ctx.r3.s64 = ctx.r31.s64 + 380;
	// bl 0x82e73ba8
	ctx.lr = 0x82673404;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// bl 0x82e73ba8
	ctx.lr = 0x8267340C;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,332
	ctx.r3.s64 = ctx.r31.s64 + 332;
	// bl 0x830b2320
	ctx.lr = 0x82673414;
	sub_830B2320(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e6bfe0
	ctx.lr = 0x8267341C;
	sub_82E6BFE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673430"))) PPC_WEAK_FUNC(sub_82673430);
PPC_FUNC_IMPL(__imp__sub_82673430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82669068
	ctx.lr = 0x82673448;
	sub_82669068(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r5,r11,31232
	ctx.r5.s64 = ctx.r11.s64 + 31232;
	// addi r10,r10,31244
	ctx.r10.s64 = ctx.r10.s64 + 31244;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// stw r5,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r5.u32);
	// addi r9,r9,-24892
	ctx.r9.s64 = ctx.r9.s64 + -24892;
	// stw r10,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r10.u32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r10,r8,-24900
	ctx.r10.s64 = ctx.r8.s64 + -24900;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r7,-24912
	ctx.r8.s64 = ctx.r7.s64 + -24912;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r9,r6,-24920
	ctx.r9.s64 = ctx.r6.s64 + -24920;
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// stw r8,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r8.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// stw r11,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r11.u32);
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// stw r11,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// stb r11,412(r31)
	PPC_STORE_U8(ctx.r31.u32 + 412, ctx.r11.u8);
	// stb r11,413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 413, ctx.r11.u8);
	// stb r11,414(r31)
	PPC_STORE_U8(ctx.r31.u32 + 414, ctx.r11.u8);
	// stb r10,415(r31)
	PPC_STORE_U8(ctx.r31.u32 + 415, ctx.r10.u8);
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// stb r10,420(r31)
	PPC_STORE_U8(ctx.r31.u32 + 420, ctx.r10.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826734E8"))) PPC_WEAK_FUNC(sub_826734E8);
PPC_FUNC_IMPL(__imp__sub_826734E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d3bd0
	ctx.lr = 0x82673504;
	sub_825D3BD0(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-24652
	ctx.r10.s64 = ctx.r10.s64 + -24652;
	// addi r9,r9,-24664
	ctx.r9.s64 = ctx.r9.s64 + -24664;
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673540"))) PPC_WEAK_FUNC(sub_82673540);
PPC_FUNC_IMPL(__imp__sub_82673540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82669068
	ctx.lr = 0x82673558;
	sub_82669068(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-24172
	ctx.r11.s64 = ctx.r11.s64 + -24172;
	// addi r10,r10,-24184
	ctx.r10.s64 = ctx.r10.s64 + -24184;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82e73b88
	ctx.lr = 0x82673578;
	sub_82E73B88(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,27448
	ctx.r11.s64 = ctx.r11.s64 + 27448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// stw r10,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826735A8"))) PPC_WEAK_FUNC(sub_826735A8);
PPC_FUNC_IMPL(__imp__sub_826735A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826709d8
	ctx.lr = 0x826735C8;
	sub_826709D8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826735d8
	if (ctx.cr0.eq) goto loc_826735D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x826735D8;
	sub_823FD208(ctx, base);
loc_826735D8:
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

__attribute__((alias("__imp__sub_826735F8"))) PPC_WEAK_FUNC(sub_826735F8);
PPC_FUNC_IMPL(__imp__sub_826735F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82673600;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d3bd0
	ctx.lr = 0x82673610;
	sub_825D3BD0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-23692
	ctx.r11.s64 = ctx.r11.s64 + -23692;
	// addi r10,r10,-23704
	ctx.r10.s64 = ctx.r10.s64 + -23704;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// bl 0x82e73b88
	ctx.lr = 0x82673638;
	sub_82E73B88(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// addi r29,r11,27448
	ctx.r29.s64 = ctx.r11.s64 + 27448;
	// stw r29,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r29.u32);
	// bl 0x82e73b88
	ctx.lr = 0x8267364C;
	sub_82E73B88(ctx, base);
	// stw r29,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r29.u32);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82673660"))) PPC_WEAK_FUNC(sub_82673660);
PPC_FUNC_IMPL(__imp__sub_82673660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r3,r3,392
	ctx.r3.s64 = ctx.r3.s64 + 392;
	// bl 0x82487c40
	ctx.lr = 0x8267367C;
	sub_82487C40(ctx, base);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// bl 0x82e73ba8
	ctx.lr = 0x82673684;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// bl 0x82e73ba8
	ctx.lr = 0x8267368C;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,332
	ctx.r3.s64 = ctx.r31.s64 + 332;
	// bl 0x830b2320
	ctx.lr = 0x82673694;
	sub_830B2320(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e6bfe0
	ctx.lr = 0x8267369C;
	sub_82E6BFE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826736B0"))) PPC_WEAK_FUNC(sub_826736B0);
PPC_FUNC_IMPL(__imp__sub_826736B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d3bd0
	ctx.lr = 0x826736D0;
	sub_825D3BD0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-23420
	ctx.r11.s64 = ctx.r11.s64 + -23420;
	// addi r10,r10,-23432
	ctx.r10.s64 = ctx.r10.s64 + -23432;
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,380
	ctx.r3.s64 = ctx.r31.s64 + 380;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// bl 0x825d4c60
	ctx.lr = 0x82673708;
	sub_825D4C60(ctx, base);
	// addi r3,r31,404
	ctx.r3.s64 = ctx.r31.s64 + 404;
	// bl 0x825d4c60
	ctx.lr = 0x82673710;
	sub_825D4C60(ctx, base);
	// stw r30,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r30.u32);
	// stw r30,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673738"))) PPC_WEAK_FUNC(sub_82673738);
PPC_FUNC_IMPL(__imp__sub_82673738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,444
	ctx.r3.s64 = ctx.r3.s64 + 444;
	// bl 0x82de7330
	ctx.lr = 0x82673758;
	sub_82DE7330(ctx, base);
	// addi r3,r31,440
	ctx.r3.s64 = ctx.r31.s64 + 440;
	// bl 0x82de7330
	ctx.lr = 0x82673760;
	sub_82DE7330(ctx, base);
	// addi r30,r31,404
	ctx.r30.s64 = ctx.r31.s64 + 404;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x82e73ba8
	ctx.lr = 0x8267376C;
	sub_82E73BA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e73ba8
	ctx.lr = 0x82673774;
	sub_82E73BA8(ctx, base);
	// addi r30,r31,380
	ctx.r30.s64 = ctx.r31.s64 + 380;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x82e73ba8
	ctx.lr = 0x82673780;
	sub_82E73BA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e73ba8
	ctx.lr = 0x82673788;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,332
	ctx.r3.s64 = ctx.r31.s64 + 332;
	// bl 0x830b2320
	ctx.lr = 0x82673790;
	sub_830B2320(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e6bfe0
	ctx.lr = 0x82673798;
	sub_82E6BFE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826737B0"))) PPC_WEAK_FUNC(sub_826737B0);
PPC_FUNC_IMPL(__imp__sub_826737B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d3bd0
	ctx.lr = 0x826737CC;
	sub_825D3BD0(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-23180
	ctx.r10.s64 = ctx.r10.s64 + -23180;
	// addi r9,r9,-23192
	ctx.r9.s64 = ctx.r9.s64 + -23192;
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673808"))) PPC_WEAK_FUNC(sub_82673808);
PPC_FUNC_IMPL(__imp__sub_82673808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d3bd0
	ctx.lr = 0x82673824;
	sub_825D3BD0(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r10,-22940
	ctx.r10.s64 = ctx.r10.s64 + -22940;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r8,-22952
	ctx.r8.s64 = ctx.r8.s64 + -22952;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// addi r10,r31,364
	ctx.r10.s64 = ctx.r31.s64 + 364;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
loc_82673854:
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stwu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82673854
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82673854;
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

__attribute__((alias("__imp__sub_82673878"))) PPC_WEAK_FUNC(sub_82673878);
PPC_FUNC_IMPL(__imp__sub_82673878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82670d30
	ctx.lr = 0x82673898;
	sub_82670D30(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826738a8
	if (ctx.cr0.eq) goto loc_826738A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x826738A8;
	sub_823FD208(ctx, base);
loc_826738A8:
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

__attribute__((alias("__imp__sub_826738C8"))) PPC_WEAK_FUNC(sub_826738C8);
PPC_FUNC_IMPL(__imp__sub_826738C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d3bd0
	ctx.lr = 0x826738E8;
	sub_825D3BD0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-22460
	ctx.r11.s64 = ctx.r11.s64 + -22460;
	// addi r10,r10,-22472
	ctx.r10.s64 = ctx.r10.s64 + -22472;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82462098
	ctx.lr = 0x82673914;
	sub_82462098(ctx, base);
	// stw r30,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82673938"))) PPC_WEAK_FUNC(sub_82673938);
PPC_FUNC_IMPL(__imp__sub_82673938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-22460
	ctx.r11.s64 = ctx.r11.s64 + -22460;
	// addi r10,r10,-22472
	ctx.r10.s64 = ctx.r10.s64 + -22472;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,464
	ctx.r3.s64 = ctx.r3.s64 + 464;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82de7330
	ctx.lr = 0x8267396C;
	sub_82DE7330(ctx, base);
	// addi r3,r31,332
	ctx.r3.s64 = ctx.r31.s64 + 332;
	// bl 0x830b2320
	ctx.lr = 0x82673974;
	sub_830B2320(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e6bfe0
	ctx.lr = 0x8267397C;
	sub_82E6BFE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673990"))) PPC_WEAK_FUNC(sub_82673990);
PPC_FUNC_IMPL(__imp__sub_82673990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82673938
	ctx.lr = 0x826739B0;
	sub_82673938(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826739c0
	if (ctx.cr0.eq) goto loc_826739C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x826739C0;
	sub_823FD208(ctx, base);
loc_826739C0:
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

__attribute__((alias("__imp__sub_826739E0"))) PPC_WEAK_FUNC(sub_826739E0);
PPC_FUNC_IMPL(__imp__sub_826739E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d3bd0
	ctx.lr = 0x82673A00;
	sub_825D3BD0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-22220
	ctx.r11.s64 = ctx.r11.s64 + -22220;
	// addi r10,r10,-22232
	ctx.r10.s64 = ctx.r10.s64 + -22232;
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// bl 0x82e73b88
	ctx.lr = 0x82673A2C;
	sub_82E73B88(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,27448
	ctx.r11.s64 = ctx.r11.s64 + 27448;
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673A58"))) PPC_WEAK_FUNC(sub_82673A58);
PPC_FUNC_IMPL(__imp__sub_82673A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-22220
	ctx.r11.s64 = ctx.r11.s64 + -22220;
	// addi r10,r10,-22232
	ctx.r10.s64 = ctx.r10.s64 + -22232;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,380
	ctx.r3.s64 = ctx.r3.s64 + 380;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82de7330
	ctx.lr = 0x82673A8C;
	sub_82DE7330(ctx, base);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// bl 0x82e73ba8
	ctx.lr = 0x82673A94;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,332
	ctx.r3.s64 = ctx.r31.s64 + 332;
	// bl 0x830b2320
	ctx.lr = 0x82673A9C;
	sub_830B2320(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e6bfe0
	ctx.lr = 0x82673AA4;
	sub_82E6BFE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673AB8"))) PPC_WEAK_FUNC(sub_82673AB8);
PPC_FUNC_IMPL(__imp__sub_82673AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82673a58
	ctx.lr = 0x82673AD8;
	sub_82673A58(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82673ae8
	if (ctx.cr0.eq) goto loc_82673AE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82673AE8;
	sub_823FD208(ctx, base);
loc_82673AE8:
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

__attribute__((alias("__imp__sub_82673B08"))) PPC_WEAK_FUNC(sub_82673B08);
PPC_FUNC_IMPL(__imp__sub_82673B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82670ea8
	ctx.lr = 0x82673B28;
	sub_82670EA8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82673b38
	if (ctx.cr0.eq) goto loc_82673B38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82673B38;
	sub_823FD208(ctx, base);
loc_82673B38:
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

__attribute__((alias("__imp__sub_82673B58"))) PPC_WEAK_FUNC(sub_82673B58);
PPC_FUNC_IMPL(__imp__sub_82673B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-29452
	ctx.r11.s64 = ctx.r11.s64 + -29452;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82673B94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82673ba4
	if (ctx.cr0.eq) goto loc_82673BA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82673BA4;
	sub_823FD208(ctx, base);
loc_82673BA4:
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

__attribute__((alias("__imp__sub_82673BC0"))) PPC_WEAK_FUNC(sub_82673BC0);
PPC_FUNC_IMPL(__imp__sub_82673BC0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,512(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 512);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82673d18
	if (ctx.cr6.eq) goto loc_82673D18;
	// bl 0x825f6fb0
	ctx.lr = 0x82673BEC;
	sub_825F6FB0(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,19096(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19096);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82673d18
	if (ctx.cr6.eq) goto loc_82673D18;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// lfs f12,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r10,10316
	ctx.r10.s64 = ctx.r10.s64 + 10316;
	// lfs f0,3648(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82673c3c
	if (ctx.cr6.lt) goto loc_82673C3C;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
loc_82673C3C:
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lfs f31,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// addi r30,r11,10380
	ctx.r30.s64 = ctx.r11.s64 + 10380;
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82673d04
	if (!ctx.cr6.lt) goto loc_82673D04;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-21756
	ctx.r4.s64 = ctx.r11.s64 + -21756;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x824984c8
	ctx.lr = 0x82673C68;
	sub_824984C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x82673C74;
	sub_824AFB20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// bl 0x827ee5b0
	ctx.lr = 0x82673C80;
	sub_827EE5B0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82de7330
	ctx.lr = 0x82673C88;
	sub_82DE7330(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r3,-4068(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4068);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82673ccc
	if (ctx.cr0.eq) goto loc_82673CCC;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,516
	ctx.r4.s64 = ctx.r31.s64 + 516;
	// bl 0x82cadb20
	ctx.lr = 0x82673CB4;
	sub_82CADB20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82d35328
	ctx.lr = 0x82673CC0;
	sub_82D35328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// bl 0x827ee608
	ctx.lr = 0x82673CCC;
	sub_827EE608(ctx, base);
loc_82673CCC:
	// lwz r3,512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// lbz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 112);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82673d18
	if (!ctx.cr0.eq) goto loc_82673D18;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f13,3368(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82673cfc
	if (ctx.cr6.lt) goto loc_82673CFC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82673CFC:
	// bl 0x827e8ee0
	ctx.lr = 0x82673D00;
	sub_827E8EE0(ctx, base);
	// b 0x82673d18
	goto loc_82673D18;
loc_82673D04:
	// lwz r3,512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// lbz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 112);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82673d18
	if (ctx.cr0.eq) goto loc_82673D18;
	// bl 0x827e8f60
	ctx.lr = 0x82673D18;
	sub_827E8F60(ctx, base);
loc_82673D18:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82673D38"))) PPC_WEAK_FUNC(sub_82673D38);
PPC_FUNC_IMPL(__imp__sub_82673D38) {
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
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,-4060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4060);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82673da4
	if (ctx.cr6.eq) goto loc_82673DA4;
	// bl 0x82d6add0
	ctx.lr = 0x82673D64;
	sub_82D6ADD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82673da4
	if (ctx.cr0.eq) goto loc_82673DA4;
	// bl 0x825f6fb0
	ctx.lr = 0x82673D70;
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
	// beq cr6,0x82673da4
	if (ctx.cr6.eq) goto loc_82673DA4;
	// bl 0x8266f350
	ctx.lr = 0x82673D90;
	sub_8266F350(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828af580
	ctx.lr = 0x82673DA0;
	sub_828AF580(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82673DA4:
	// addic r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// subfe r3,r11,r30
	temp.u8 = (~ctx.r11.u32 + ctx.r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673DC8"))) PPC_WEAK_FUNC(sub_82673DC8);
PPC_FUNC_IMPL(__imp__sub_82673DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-21740
	ctx.r3.s64 = ctx.r11.s64 + -21740;
	// bl 0x82e73ab0
	ctx.lr = 0x82673DE8;
	sub_82E73AB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266f3f8
	ctx.lr = 0x82673DF4;
	sub_8266F3F8(ctx, base);
	// stw r3,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r3.u32);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,7496(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7496);
	// bl 0x82e5cd40
	ctx.lr = 0x82673E08;
	sub_82E5CD40(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,7556(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7556);
	// bl 0x82e5cd40
	ctx.lr = 0x82673E18;
	sub_82E5CD40(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-4060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4060);
	// bl 0x8247cb50
	ctx.lr = 0x82673E28;
	sub_8247CB50(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673E40"))) PPC_WEAK_FUNC(sub_82673E40);
PPC_FUNC_IMPL(__imp__sub_82673E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,364(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 364);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82673edc
	if (ctx.cr0.eq) goto loc_82673EDC;
	// lis r31,-31932
	ctx.r31.s64 = -2092695552;
	// lwz r3,-26400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26400);
	// bl 0x82bf87f8
	ctx.lr = 0x82673E70;
	sub_82BF87F8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x82673edc
	if (ctx.cr6.gt) goto loc_82673EDC;
	// lwz r11,-26400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26400);
	// mulli r10,r10,5648
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(5648));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// li r5,92
	ctx.r5.s64 = 92;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bfcbc8
	ctx.lr = 0x82673EA0;
	sub_82BFCBC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82673ec4
	if (!ctx.cr0.eq) goto loc_82673EC4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,103
	ctx.r5.s64 = 103;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bfcbc8
	ctx.lr = 0x82673EBC;
	sub_82BFCBC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82673edc
	if (ctx.cr0.eq) goto loc_82673EDC;
loc_82673EC4:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,7536(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7536);
	// bl 0x82e5cfd8
	ctx.lr = 0x82673ED4;
	sub_82E5CFD8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,364(r30)
	PPC_STORE_U8(ctx.r30.u32 + 364, ctx.r11.u8);
loc_82673EDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673EF8"))) PPC_WEAK_FUNC(sub_82673EF8);
PPC_FUNC_IMPL(__imp__sub_82673EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82673F00;
	__savegprlr_27(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r3,23748(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23748);
	// bl 0x828653d8
	ctx.lr = 0x82673F1C;
	sub_828653D8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82673F2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8252fc10
	ctx.lr = 0x82673F34;
	sub_8252FC10(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8252a630
	ctx.lr = 0x82673F40;
	sub_8252A630(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-21720
	ctx.r4.s64 = ctx.r11.s64 + -21720;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x824a0e20
	ctx.lr = 0x82673F58;
	sub_824A0E20(ctx, base);
	// li r3,200
	ctx.r3.s64 = 200;
	// bl 0x82c0f6c0
	ctx.lr = 0x82673F60;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82673f80
	if (ctx.cr0.eq) goto loc_82673F80;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8283de10
	ctx.lr = 0x82673F78;
	sub_8283DE10(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82673f84
	goto loc_82673F84;
loc_82673F80:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82673F84:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82673F9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// addi r29,r30,108
	ctx.r29.s64 = ctx.r30.s64 + 108;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82673FB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82832450
	ctx.lr = 0x82673FC8;
	sub_82832450(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-25220
	ctx.r4.s64 = ctx.r11.s64 + -25220;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82673FE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-28872
	ctx.r4.s64 = ctx.r11.s64 + -28872;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82674000;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82674014;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82674028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82674038"))) PPC_WEAK_FUNC(sub_82674038);
PPC_FUNC_IMPL(__imp__sub_82674038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddf8
	ctx.lr = 0x82674040;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,28
	ctx.r3.s64 = 28;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x82674064;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// beq 0x8267409c
	if (ctx.cr0.eq) goto loc_8267409C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-26812
	ctx.r11.s64 = ctx.r11.s64 + -26812;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stb r30,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r30.u8);
	// b 0x826740a0
	goto loc_826740A0;
loc_8267409C:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_826740A0:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82c0f6c0
	ctx.lr = 0x826740A8;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826740c4
	if (ctx.cr0.eq) goto loc_826740C4;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x828274a8
	ctx.lr = 0x826740C0;
	sub_828274A8(ctx, base);
	// b 0x826740c8
	goto loc_826740C8;
loc_826740C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_826740C8:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r24,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r24.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x826e1b10
	ctx.lr = 0x826740E0;
	sub_826E1B10(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x826e1b10
	ctx.lr = 0x826740EC;
	sub_826E1B10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82de7330
	ctx.lr = 0x826740F4;
	sub_82DE7330(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82de7330
	ctx.lr = 0x826740FC;
	sub_82DE7330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82674108"))) PPC_WEAK_FUNC(sub_82674108);
PPC_FUNC_IMPL(__imp__sub_82674108) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82674120
	if (ctx.cr6.lt) goto loc_82674120;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82674120:
	// lwz r10,360(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r10,108
	ctx.r3.s64 = ctx.r10.s64 + 108;
	// lwz r11,108(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82674140"))) PPC_WEAK_FUNC(sub_82674140);
PPC_FUNC_IMPL(__imp__sub_82674140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddf8
	ctx.lr = 0x82674148;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// sth r11,52(r4)
	PPC_STORE_U16(ctx.r4.u32 + 52, ctx.r11.u16);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lfs f31,30452(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 30452);
	ctx.f31.f64 = double(temp.f32);
	// addi r30,r4,16
	ctx.r30.s64 = ctx.r4.s64 + 16;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r25,r11,-23620
	ctx.r25.s64 = ctx.r11.s64 + -23620;
	// addi r26,r10,-28872
	ctx.r26.s64 = ctx.r10.s64 + -28872;
loc_82674180:
	// lwz r3,412(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 412);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267419C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,8(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826741BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826741D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r10,r28,14
	ctx.r10.s64 = ctx.r28.s64 + 14;
	// lwz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r28,9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 9, ctx.xer);
	// stwx r9,r10,r27
	PPC_STORE_U32(ctx.r10.u32 + ctx.r27.u32, ctx.r9.u32);
	// bgt cr6,0x8267435c
	if (ctx.cr6.gt) goto loc_8267435C;
	// lis r12,-32253
	ctx.r12.s64 = -2113732608;
	// addi r12,r12,27824
	ctx.r12.s64 = ctx.r12.s64 + 27824;
	// lbzx r0,r12,r28
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r28.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32153
	ctx.r12.s64 = -2107179008;
	// nop 
	// addi r12,r12,16920
	ctx.r12.s64 = ctx.r12.s64 + 16920;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r28.u32) {
	case 0:
		goto loc_8267426C;
	case 1:
		goto loc_82674274;
	case 2:
		goto loc_82674264;
	case 3:
		goto loc_82674218;
	case 4:
		goto loc_8267427C;
	case 5:
		goto loc_826742B8;
	case 6:
		goto loc_826742CC;
	case 7:
		goto loc_82674254;
	case 8:
		goto loc_826742C0;
	case 9:
		goto loc_82674340;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_82674218:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82674230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,416(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 416);
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// addi r8,r30,4
	ctx.r8.s64 = ctx.r30.s64 + 4;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r11,36
	ctx.r6.s64 = ctx.r11.s64 + 36;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8266f1f0
	ctx.lr = 0x82674250;
	sub_8266F1F0(ctx, base);
	// b 0x8267435c
	goto loc_8267435C;
loc_82674254:
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,14(r30)
	PPC_STORE_U16(ctx.r30.u32 + 14, ctx.r11.u16);
	// stw r10,84(r27)
	PPC_STORE_U32(ctx.r27.u32 + 84, ctx.r10.u32);
	// b 0x8267435c
	goto loc_8267435C;
loc_82674264:
	// sth r11,16(r30)
	PPC_STORE_U16(ctx.r30.u32 + 16, ctx.r11.u16);
	// b 0x8267435c
	goto loc_8267435C;
loc_8267426C:
	// sth r11,8(r30)
	PPC_STORE_U16(ctx.r30.u32 + 8, ctx.r11.u16);
	// b 0x8267435c
	goto loc_8267435C;
loc_82674274:
	// sth r11,10(r30)
	PPC_STORE_U16(ctx.r30.u32 + 10, ctx.r11.u16);
	// b 0x8267435c
	goto loc_8267435C;
loc_8267427C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82674294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,416(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 416);
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// addi r8,r30,20
	ctx.r8.s64 = ctx.r30.s64 + 20;
	// addi r7,r30,18
	ctx.r7.s64 = ctx.r30.s64 + 18;
	// addi r6,r11,52
	ctx.r6.s64 = ctx.r11.s64 + 52;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82672338
	ctx.lr = 0x826742B4;
	sub_82672338(ctx, base);
	// b 0x8267435c
	goto loc_8267435C;
loc_826742B8:
	// sth r11,22(r30)
	PPC_STORE_U16(ctx.r30.u32 + 22, ctx.r11.u16);
	// b 0x8267435c
	goto loc_8267435C;
loc_826742C0:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// b 0x8267435c
	goto loc_8267435C;
loc_826742CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826742E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,416(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 416);
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r6,r11,68
	ctx.r6.s64 = ctx.r11.s64 + 68;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82672338
	ctx.lr = 0x82674304;
	sub_82672338(ctx, base);
	// lha r10,82(r1)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 82));
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lha r11,80(r1)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 80));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,32(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f13,28(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// b 0x8267435c
	goto loc_8267435C;
loc_82674340:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82674358;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// sth r3,12(r30)
	PPC_STORE_U16(ctx.r30.u32 + 12, ctx.r3.u16);
loc_8267435C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 10, ctx.xer);
	// blt cr6,0x82674180
	if (ctx.cr6.lt) goto loc_82674180;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82a7de48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82674378"))) PPC_WEAK_FUNC(sub_82674378);
PPC_FUNC_IMPL(__imp__sub_82674378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// lwz r4,20704(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20704);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826743A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29444
	ctx.r10.s64 = ctx.r10.s64 + -29444;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82674140
	ctx.lr = 0x826743CC;
	sub_82674140(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e66e98
	ctx.lr = 0x826743D8;
	sub_82E66E98(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826743F0"))) PPC_WEAK_FUNC(sub_826743F0);
PPC_FUNC_IMPL(__imp__sub_826743F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lhz r4,364(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 364);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,23740(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23740);
	// bl 0x8287fbe8
	ctx.lr = 0x82674418;
	sub_8287FBE8(ctx, base);
	// stw r3,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r3.u32);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,10001
	ctx.r4.s64 = 10001;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82674438;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,580(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,10000
	ctx.r4.s64 = 10000;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82674454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,580(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,10002
	ctx.r4.s64 = 10002;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82674470;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,580(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,10003
	ctx.r4.s64 = 10003;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267448C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,580(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,10004
	ctx.r4.s64 = 10004;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826744A8;
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

__attribute__((alias("__imp__sub_826744C0"))) PPC_WEAK_FUNC(sub_826744C0);
PPC_FUNC_IMPL(__imp__sub_826744C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lhz r4,364(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 364);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,23740(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23740);
	// bl 0x8287fbd8
	ctx.lr = 0x826744EC;
	sub_8287FBD8(ctx, base);
	// stw r3,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r3.u32);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,10001
	ctx.r4.s64 = 10001;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267450C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,576(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,10000
	ctx.r4.s64 = 10000;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82674528;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,576(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,10002
	ctx.r4.s64 = 10002;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82674544;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,576(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,10003
	ctx.r4.s64 = 10003;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82674560;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,576(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,10004
	ctx.r4.s64 = 10004;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267457C;
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

__attribute__((alias("__imp__sub_82674598"))) PPC_WEAK_FUNC(sub_82674598);
PPC_FUNC_IMPL(__imp__sub_82674598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x826745A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,512(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 512);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826745C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,566(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 566);
	// cmpldi cr6,r29,0
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, 0, ctx.xer);
	// addi r30,r31,672
	ctx.r30.s64 = ctx.r31.s64 + 672;
	// stb r11,670(r31)
	PPC_STORE_U8(ctx.r31.u32 + 670, ctx.r11.u8);
	// bne cr6,0x826745e0
	if (!ctx.cr6.eq) goto loc_826745E0;
	// addi r30,r31,632
	ctx.r30.s64 = ctx.r31.s64 + 632;
loc_826745E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,572(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// bl 0x8266a6a0
	ctx.lr = 0x826745EC;
	sub_8266A6A0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lhz r4,364(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 364);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,23740(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23740);
	// bl 0x8287fbc8
	ctx.lr = 0x82674604;
	sub_8287FBC8(ctx, base);
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82674630
	if (!ctx.cr6.eq) goto loc_82674630;
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// addi r3,r11,108
	ctx.r3.s64 = ctx.r11.s64 + 108;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82674630;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82674630:
	// lwz r3,572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// li r4,10001
	ctx.r4.s64 = 10001;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82674650;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,10000
	ctx.r4.s64 = 10000;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267466C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,10002
	ctx.r4.s64 = 10002;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82674688;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,10003
	ctx.r4.s64 = 10003;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826746A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,10004
	ctx.r4.s64 = 10004;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826746C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826746C8"))) PPC_WEAK_FUNC(sub_826746C8);
PPC_FUNC_IMPL(__imp__sub_826746C8) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82e5fc28
	ctx.lr = 0x826746E0;
	sub_82E5FC28(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82cad4d8
	ctx.lr = 0x826746E8;
	sub_82CAD4D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x826746F4;
	sub_824AFB20(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e78ba0
	ctx.lr = 0x82674700;
	sub_82E78BA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x82674708;
	sub_82DE7330(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82de7330
	ctx.lr = 0x82674710;
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

__attribute__((alias("__imp__sub_82674728"))) PPC_WEAK_FUNC(sub_82674728);
PPC_FUNC_IMPL(__imp__sub_82674728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-4060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4060);
	// bl 0x82880b40
	ctx.lr = 0x82674748;
	sub_82880B40(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824f04b0
	ctx.lr = 0x82674750;
	sub_824F04B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82674760
	if (!ctx.cr0.eq) goto loc_82674760;
loc_82674758:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8267477c
	goto loc_8267477C;
loc_82674760:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r4,r31,364
	ctx.r4.s64 = ctx.r31.s64 + 364;
	// lwz r3,23740(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23740);
	// bl 0x82874a18
	ctx.lr = 0x82674770;
	sub_82874A18(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82674758
	if (!ctx.cr6.eq) goto loc_82674758;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267477C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674790"))) PPC_WEAK_FUNC(sub_82674790);
PPC_FUNC_IMPL(__imp__sub_82674790) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826747a0
	if (ctx.cr6.eq) goto loc_826747A0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82674728
	sub_82674728(ctx, base);
	return;
loc_826747A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826747A8"))) PPC_WEAK_FUNC(sub_826747A8);
PPC_FUNC_IMPL(__imp__sub_826747A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x826747B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r3,-4060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4060);
	// bl 0x82880b40
	ctx.lr = 0x826747C8;
	sub_82880B40(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824f04b0
	ctx.lr = 0x826747D0;
	sub_824F04B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82674824
	if (ctx.cr6.eq) goto loc_82674824;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82674824
	if (ctx.cr6.eq) goto loc_82674824;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8267480c
	if (!ctx.cr6.eq) goto loc_8267480C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x824f28f8
	ctx.lr = 0x826747FC;
	sub_824F28F8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82518f30
	ctx.lr = 0x8267480C;
	sub_82518F30(ctx, base);
loc_8267480C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82674820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82674844
	goto loc_82674844;
loc_82674824:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,472(r29)
	PPC_STORE_U32(ctx.r29.u32 + 472, ctx.r11.u32);
	// bl 0x82473ff8
	ctx.lr = 0x82674830;
	sub_82473FF8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,268(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 268);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82674844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82674844:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82674850"))) PPC_WEAK_FUNC(sub_82674850);
PPC_FUNC_IMPL(__imp__sub_82674850) {
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
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-5952
	ctx.r11.s64 = ctx.r11.s64 + -5952;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x826748bc
	if (ctx.cr0.eq) goto loc_826748BC;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r9,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r9.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r4,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x826a1e18
	ctx.lr = 0x826748BC;
	sub_826A1E18(ctx, base);
loc_826748BC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826748dc
	if (ctx.cr6.eq) goto loc_826748DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826748DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826748DC:
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

__attribute__((alias("__imp__sub_826748F0"))) PPC_WEAK_FUNC(sub_826748F0);
PPC_FUNC_IMPL(__imp__sub_826748F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82674918
	if (ctx.cr0.eq) goto loc_82674918;
	// bl 0x826a0ed8
	ctx.lr = 0x82674910;
	sub_826A0ED8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824ea9a8
	ctx.lr = 0x82674918;
	sub_824EA9A8(ctx, base);
loc_82674918:
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r10.u32);
	// lwz r11,32636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32636);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82674950
	if (ctx.cr6.eq) goto loc_82674950;
	// lbz r10,161(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 161);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82674948
	if (ctx.cr0.eq) goto loc_82674948;
	// lbz r11,162(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 162);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82674950
	if (!ctx.cr6.eq) goto loc_82674950;
loc_82674948:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
loc_82674950:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674968"))) PPC_WEAK_FUNC(sub_82674968);
PPC_FUNC_IMPL(__imp__sub_82674968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,-4084(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4084);
	// bl 0x8264a168
	ctx.lr = 0x82674990;
	sub_8264A168(ctx, base);
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826749a0
	if (!ctx.cr0.eq) goto loc_826749A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266aaa8
	ctx.lr = 0x826749A0;
	sub_8266AAA8(ctx, base);
loc_826749A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826749B8"))) PPC_WEAK_FUNC(sub_826749B8);
PPC_FUNC_IMPL(__imp__sub_826749B8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,3122(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3122);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826749cc
	if (ctx.cr0.eq) goto loc_826749CC;
loc_826749C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_826749CC:
	// lbz r11,3121(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3121);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x826749c4
	if (!ctx.cr0.eq) goto loc_826749C4;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r3,-4084(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4084);
	// b 0x8264a150
	sub_8264A150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826749E8"))) PPC_WEAK_FUNC(sub_826749E8);
PPC_FUNC_IMPL(__imp__sub_826749E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r3,-4084(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4084);
	// b 0x8264a138
	sub_8264A138(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826749F8"))) PPC_WEAK_FUNC(sub_826749F8);
PPC_FUNC_IMPL(__imp__sub_826749F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r3,-4084(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4084);
	// b 0x82648140
	sub_82648140(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82674A08"))) PPC_WEAK_FUNC(sub_82674A08);
PPC_FUNC_IMPL(__imp__sub_82674A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x825f6fb0
	ctx.lr = 0x82674A1C;
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
	// beq cr6,0x82674a58
	if (ctx.cr6.eq) goto loc_82674A58;
	// bl 0x825c4378
	ctx.lr = 0x82674A3C;
	sub_825C4378(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828af580
	ctx.lr = 0x82674A4C;
	sub_828AF580(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82674a58
	if (ctx.cr0.eq) goto loc_82674A58;
	// bl 0x828a7a68
	ctx.lr = 0x82674A58;
	sub_828A7A68(ctx, base);
loc_82674A58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674A70"))) PPC_WEAK_FUNC(sub_82674A70);
PPC_FUNC_IMPL(__imp__sub_82674A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82674A78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d3bd0
	ctx.lr = 0x82674A88;
	sub_825D3BD0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-21588
	ctx.r11.s64 = ctx.r11.s64 + -21588;
	// addi r10,r10,-21600
	ctx.r10.s64 = ctx.r10.s64 + -21600;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r30,r31,368
	ctx.r30.s64 = ctx.r31.s64 + 368;
	// stw r29,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r29.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r29,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82462098
	ctx.lr = 0x82674ABC;
	sub_82462098(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r29,465(r31)
	PPC_STORE_U8(ctx.r31.u32 + 465, ctx.r29.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,464(r31)
	PPC_STORE_U8(ctx.r31.u32 + 464, ctx.r11.u8);
	// bl 0x82c014c0
	ctx.lr = 0x82674AD0;
	sub_82C014C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82674AE0"))) PPC_WEAK_FUNC(sub_82674AE0);
PPC_FUNC_IMPL(__imp__sub_82674AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-21588
	ctx.r11.s64 = ctx.r11.s64 + -21588;
	// addi r10,r10,-21600
	ctx.r10.s64 = ctx.r10.s64 + -21600;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,364
	ctx.r3.s64 = ctx.r3.s64 + 364;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82de7330
	ctx.lr = 0x82674B14;
	sub_82DE7330(ctx, base);
	// addi r3,r31,360
	ctx.r3.s64 = ctx.r31.s64 + 360;
	// bl 0x82de7330
	ctx.lr = 0x82674B1C;
	sub_82DE7330(ctx, base);
	// addi r3,r31,332
	ctx.r3.s64 = ctx.r31.s64 + 332;
	// bl 0x830b2320
	ctx.lr = 0x82674B24;
	sub_830B2320(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e6bfe0
	ctx.lr = 0x82674B2C;
	sub_82E6BFE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674B40"))) PPC_WEAK_FUNC(sub_82674B40);
PPC_FUNC_IMPL(__imp__sub_82674B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82674ae0
	ctx.lr = 0x82674B60;
	sub_82674AE0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82674b70
	if (ctx.cr0.eq) goto loc_82674B70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82674B70;
	sub_823FD208(ctx, base);
loc_82674B70:
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

__attribute__((alias("__imp__sub_82674B90"))) PPC_WEAK_FUNC(sub_82674B90);
PPC_FUNC_IMPL(__imp__sub_82674B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,465(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 465);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82674c0c
	if (!ctx.cr0.eq) goto loc_82674C0C;
	// bl 0x82648b60
	ctx.lr = 0x82674BB8;
	sub_82648B60(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82674c0c
	if (ctx.cr0.eq) goto loc_82674C0C;
	// lbz r11,3122(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3122);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82674bd4
	if (ctx.cr0.eq) goto loc_82674BD4;
loc_82674BCC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82674bec
	goto loc_82674BEC;
loc_82674BD4:
	// lbz r11,3121(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3121);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82674bcc
	if (!ctx.cr0.eq) goto loc_82674BCC;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r3,-4084(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4084);
	// bl 0x8264a150
	ctx.lr = 0x82674BEC;
	sub_8264A150(ctx, base);
loc_82674BEC:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82674c0c
	if (ctx.cr0.eq) goto loc_82674C0C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82649408
	ctx.lr = 0x82674C04;
	sub_82649408(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,465(r30)
	PPC_STORE_U8(ctx.r30.u32 + 465, ctx.r11.u8);
loc_82674C0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82671978
	ctx.lr = 0x82674C14;
	sub_82671978(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82674c24
	if (ctx.cr0.eq) goto loc_82674C24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82671a10
	ctx.lr = 0x82674C24;
	sub_82671A10(ctx, base);
loc_82674C24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674C40"))) PPC_WEAK_FUNC(sub_82674C40);
PPC_FUNC_IMPL(__imp__sub_82674C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82674C48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-26460
	ctx.r11.s64 = ctx.r11.s64 + -26460;
	// addi r10,r10,-26472
	ctx.r10.s64 = ctx.r10.s64 + -26472;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r30,r3,488
	ctx.r30.s64 = ctx.r3.s64 + 488;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x82e73ba8
	ctx.lr = 0x82674C74;
	sub_82E73BA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e73ba8
	ctx.lr = 0x82674C7C;
	sub_82E73BA8(ctx, base);
	// addi r30,r31,488
	ctx.r30.s64 = ctx.r31.s64 + 488;
	// li r29,6
	ctx.r29.s64 = 6;
loc_82674C84:
	// addi r30,r30,-12
	ctx.r30.s64 = ctx.r30.s64 + -12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e73ba8
	ctx.lr = 0x82674C90;
	sub_82E73BA8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x82674c84
	if (!ctx.cr0.lt) goto loc_82674C84;
	// addi r3,r31,392
	ctx.r3.s64 = ctx.r31.s64 + 392;
	// bl 0x82e73ba8
	ctx.lr = 0x82674CA0;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,380
	ctx.r3.s64 = ctx.r31.s64 + 380;
	// bl 0x82e73ba8
	ctx.lr = 0x82674CA8;
	sub_82E73BA8(ctx, base);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// bl 0x82e73ba8
	ctx.lr = 0x82674CB0;
	sub_82E73BA8(ctx, base);
	// lwz r30,360(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82674ccc
	if (ctx.cr6.eq) goto loc_82674CCC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c9800
	ctx.lr = 0x82674CC4;
	sub_825C9800(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823fd208
	ctx.lr = 0x82674CCC;
	sub_823FD208(ctx, base);
loc_82674CCC:
	// addi r3,r31,332
	ctx.r3.s64 = ctx.r31.s64 + 332;
	// bl 0x830b2320
	ctx.lr = 0x82674CD4;
	sub_830B2320(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e6bfe0
	ctx.lr = 0x82674CDC;
	sub_82E6BFE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82674CE8"))) PPC_WEAK_FUNC(sub_82674CE8);
PPC_FUNC_IMPL(__imp__sub_82674CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,360(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82674d1c
	if (ctx.cr6.eq) goto loc_82674D1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825c9800
	ctx.lr = 0x82674D14;
	sub_825C9800(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82674D1C;
	sub_823FD208(ctx, base);
loc_82674D1C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,360(r30)
	PPC_STORE_U32(ctx.r30.u32 + 360, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674D40"))) PPC_WEAK_FUNC(sub_82674D40);
PPC_FUNC_IMPL(__imp__sub_82674D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// bl 0x826a82a0
	ctx.lr = 0x82674D58;
	sub_826A82A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82551708
	ctx.lr = 0x82674D64;
	sub_82551708(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x82674D70;
	sub_824AFB20(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82de7330
	ctx.lr = 0x82674D78;
	sub_82DE7330(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8252a3e0
	ctx.lr = 0x82674D80;
	sub_8252A3E0(ctx, base);
	// lfs f0,480(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// li r31,1
	ctx.r31.s64 = 1;
	// bge cr6,0x82674d94
	if (!ctx.cr6.lt) goto loc_82674D94;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82674D94:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x82674D9C;
	sub_82DE7330(ctx, base);
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_82674DB8"))) PPC_WEAK_FUNC(sub_82674DB8);
PPC_FUNC_IMPL(__imp__sub_82674DB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82674DC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,384
	ctx.r31.s64 = ctx.r3.s64 + 384;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x825f9cb0
	ctx.lr = 0x82674DD8;
	sub_825F9CB0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lbz r11,-26744(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -26744);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82674e84
	if (ctx.cr6.eq) goto loc_82674E84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826a82a0
	ctx.lr = 0x82674DF4;
	sub_826A82A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82551708
	ctx.lr = 0x82674E00;
	sub_82551708(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825f9cb0
	ctx.lr = 0x82674E0C;
	sub_825F9CB0(ctx, base);
	// clrlwi r27,r3,24
	ctx.r27.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8252a3d8
	ctx.lr = 0x82674E18;
	sub_8252A3D8(ctx, base);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82674e7c
	if (!ctx.cr6.lt) goto loc_82674E7C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825f31e8
	ctx.lr = 0x82674E28;
	sub_825F31E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826a83b8
	ctx.lr = 0x82674E38;
	sub_826A83B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82601408
	ctx.lr = 0x82674E4C;
	sub_82601408(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82de7330
	ctx.lr = 0x82674E54;
	sub_82DE7330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825f9cb0
	ctx.lr = 0x82674E5C;
	sub_825F9CB0(ctx, base);
	// stb r3,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, ctx.r3.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825f6e58
	ctx.lr = 0x82674E6C;
	sub_825F6E58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 & ctx.r29.u64;
loc_82674E7C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x82674E84;
	sub_82DE7330(ctx, base);
loc_82674E84:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82674E90"))) PPC_WEAK_FUNC(sub_82674E90);
PPC_FUNC_IMPL(__imp__sub_82674E90) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8264c528
	ctx.lr = 0x82674EB0;
	sub_8264C528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824afb20
	ctx.lr = 0x82674EBC;
	sub_824AFB20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r31,376
	ctx.r7.s64 = ctx.r31.s64 + 376;
	// bl 0x827b3ab8
	ctx.lr = 0x82674ED4;
	sub_827B3AB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82674f00
	if (ctx.cr6.eq) goto loc_82674F00;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82674F00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82674F00:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82de7330
	ctx.lr = 0x82674F08;
	sub_82DE7330(ctx, base);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,326
	ctx.r4.s64 = 326;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82674F28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,19684(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19684);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82674F44;
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

__attribute__((alias("__imp__sub_82674F60"))) PPC_WEAK_FUNC(sub_82674F60);
PPC_FUNC_IMPL(__imp__sub_82674F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82674F68;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,360(r3)
	PPC_STORE_U32(ctx.r3.u32 + 360, ctx.r30.u32);
	// bl 0x82648b50
	ctx.lr = 0x82674F7C;
	sub_82648B50(ctx, base);
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// stw r11,868(r3)
	PPC_STORE_U32(ctx.r3.u32 + 868, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r29,377(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 377);
	// bl 0x826a82a0
	ctx.lr = 0x82674F90;
	sub_826A82A0(ctx, base);
	// bl 0x8252a630
	ctx.lr = 0x82674F94;
	sub_8252A630(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// bl 0x827d2f40
	ctx.lr = 0x82674FB4;
	sub_827D2F40(ctx, base);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82674fdc
	if (ctx.cr6.eq) goto loc_82674FDC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82674FDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82674FDC:
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,239
	ctx.r4.s64 = 239;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826a1e18
	ctx.lr = 0x82674FF4;
	sub_826A1E18(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82675000"))) PPC_WEAK_FUNC(sub_82675000);
PPC_FUNC_IMPL(__imp__sub_82675000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82675008;
	__savegprlr_28(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825d4c60
	ctx.lr = 0x82675018;
	sub_825D4C60(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x825d4c60
	ctx.lr = 0x82675020;
	sub_825D4C60(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825d4c60
	ctx.lr = 0x82675028;
	sub_825D4C60(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e73b88
	ctx.lr = 0x82675030;
	sub_82E73B88(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,27448
	ctx.r11.s64 = ctx.r11.s64 + 27448;
	// addi r4,r10,-21212
	ctx.r4.s64 = ctx.r10.s64 + -21212;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e5fc28
	ctx.lr = 0x82675050;
	sub_82E5FC28(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-21228
	ctx.r4.s64 = ctx.r11.s64 + -21228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e5fc28
	ctx.lr = 0x82675064;
	sub_82E5FC28(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-21256
	ctx.r4.s64 = ctx.r11.s64 + -21256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e5fc28
	ctx.lr = 0x82675078;
	sub_82E5FC28(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-21276
	ctx.r4.s64 = ctx.r11.s64 + -21276;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e5fc28
	ctx.lr = 0x8267508C;
	sub_82E5FC28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827d0558
	ctx.lr = 0x82675094;
	sub_827D0558(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826a0ed8
	ctx.lr = 0x8267509C;
	sub_826A0ED8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// bl 0x8266ae90
	ctx.lr = 0x826750AC;
	sub_8266AE90(ctx, base);
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// li r29,10
	ctx.r29.s64 = 10;
	// lwz r11,728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 728);
	// divw r10,r11,r29
	ctx.r10.s32 = (ctx.r29.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r29.s32 == -1)) ? ctx.r11.s32 / ctx.r29.s32 : 0;
	// mulli r10,r10,10
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(10));
	// subf r30,r10,r11
	ctx.r30.u64 = ctx.r11.u64 - ctx.r10.u64;
	// clrlwi r28,r30,24
	ctx.r28.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825f3120
	ctx.lr = 0x826750D0;
	sub_825F3120(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e76130
	ctx.lr = 0x826750DC;
	sub_82E76130(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825f3120
	ctx.lr = 0x826750E4;
	sub_825F3120(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82e76130
	ctx.lr = 0x826750F0;
	sub_82E76130(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// addi r4,r11,-21344
	ctx.r4.s64 = ctx.r11.s64 + -21344;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8247cf40
	ctx.lr = 0x82675104;
	sub_8247CF40(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e773f0
	ctx.lr = 0x82675118;
	sub_82E773F0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,392(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// bl 0x824b8390
	ctx.lr = 0x82675124;
	sub_824B8390(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x82675130;
	sub_824AFB20(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e78ba0
	ctx.lr = 0x8267513C;
	sub_82E78BA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x82675144;
	sub_82DE7330(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82de7330
	ctx.lr = 0x8267514C;
	sub_82DE7330(ctx, base);
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// lwz r11,728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 728);
	// divw r10,r11,r29
	ctx.r10.s32 = (ctx.r29.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r29.s32 == -1)) ? ctx.r11.s32 / ctx.r29.s32 : 0;
	// mulli r10,r10,10
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(10));
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x8267518c
	if (!ctx.cr6.eq) goto loc_8267518C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-21364
	ctx.r3.s64 = ctx.r11.s64 + -21364;
	// bl 0x82e73af8
	ctx.lr = 0x82675178;
	sub_82E73AF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e5cfd8
	ctx.lr = 0x82675184;
	sub_82E5CFD8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,396(r31)
	PPC_STORE_U8(ctx.r31.u32 + 396, ctx.r11.u8);
loc_8267518C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e73ba8
	ctx.lr = 0x82675194;
	sub_82E73BA8(ctx, base);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82e73ba8
	ctx.lr = 0x8267519C;
	sub_82E73BA8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e73ba8
	ctx.lr = 0x826751A4;
	sub_82E73BA8(ctx, base);
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x82e73ba8
	ctx.lr = 0x826751AC;
	sub_82E73BA8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82e73ba8
	ctx.lr = 0x826751B4;
	sub_82E73BA8(ctx, base);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82e73ba8
	ctx.lr = 0x826751BC;
	sub_82E73BA8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e73ba8
	ctx.lr = 0x826751C4;
	sub_82E73BA8(ctx, base);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826751D0"))) PPC_WEAK_FUNC(sub_826751D0);
PPC_FUNC_IMPL(__imp__sub_826751D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,392(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// bl 0x824c29a0
	ctx.lr = 0x826751EC;
	sub_824C29A0(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,-4084(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4084);
	// bl 0x8265aaa8
	ctx.lr = 0x82675200;
	sub_8265AAA8(ctx, base);
	// lbz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 396);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82675218
	if (ctx.cr0.eq) goto loc_82675218;
	// bl 0x82473ff8
	ctx.lr = 0x82675210;
	sub_82473FF8(ctx, base);
	// li r5,311
	ctx.r5.s64 = 311;
	// b 0x82675220
	goto loc_82675220;
loc_82675218:
	// bl 0x82473ff8
	ctx.lr = 0x8267521C;
	sub_82473FF8(ctx, base);
	// li r5,335
	ctx.r5.s64 = 335;
loc_82675220:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,147
	ctx.r7.s64 = 147;
	// lwz r4,268(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82675240;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826a0ed8
	ctx.lr = 0x82675248;
	sub_826A0ED8(ctx, base);
	// bl 0x830b2320
	ctx.lr = 0x8267524C;
	sub_830B2320(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82675260"))) PPC_WEAK_FUNC(sub_82675260);
PPC_FUNC_IMPL(__imp__sub_82675260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82675268;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d3bd0
	ctx.lr = 0x82675278;
	sub_825D3BD0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-26220
	ctx.r11.s64 = ctx.r11.s64 + -26220;
	// addi r10,r10,-26232
	ctx.r10.s64 = ctx.r10.s64 + -26232;
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// bl 0x82cad4d8
	ctx.lr = 0x826752A8;
	sub_82CAD4D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// bl 0x824afb20
	ctx.lr = 0x826752B4;
	sub_824AFB20(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x826752BC;
	sub_82DE7330(ctx, base);
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// stb r30,392(r31)
	PPC_STORE_U8(ctx.r31.u32 + 392, ctx.r30.u8);
	// stb r30,393(r31)
	PPC_STORE_U8(ctx.r31.u32 + 393, ctx.r30.u8);
	// stb r30,394(r31)
	PPC_STORE_U8(ctx.r31.u32 + 394, ctx.r30.u8);
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// bl 0x82e73b88
	ctx.lr = 0x826752E4;
	sub_82E73B88(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,412
	ctx.r3.s64 = ctx.r31.s64 + 412;
	// addi r29,r11,27448
	ctx.r29.s64 = ctx.r11.s64 + 27448;
	// stw r29,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r29.u32);
	// bl 0x82e73b88
	ctx.lr = 0x826752F8;
	sub_82E73B88(ctx, base);
	// stw r29,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r29.u32);
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// bl 0x82e73b88
	ctx.lr = 0x82675304;
	sub_82E73B88(ctx, base);
	// stw r29,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r29.u32);
	// addi r3,r31,436
	ctx.r3.s64 = ctx.r31.s64 + 436;
	// bl 0x82e73b88
	ctx.lr = 0x82675310;
	sub_82E73B88(ctx, base);
	// stw r29,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r29.u32);
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// bl 0x82e73b88
	ctx.lr = 0x8267531C;
	sub_82E73B88(ctx, base);
	// stw r29,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r29.u32);
	// addi r3,r31,460
	ctx.r3.s64 = ctx.r31.s64 + 460;
	// bl 0x82e73b88
	ctx.lr = 0x82675328;
	sub_82E73B88(ctx, base);
	// stw r29,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r29.u32);
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// bl 0x82e73b88
	ctx.lr = 0x82675334;
	sub_82E73B88(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r30.u32);
	// stw r30,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r30.u32);
	// stb r30,492(r31)
	PPC_STORE_U8(ctx.r31.u32 + 492, ctx.r30.u8);
	// stb r30,493(r31)
	PPC_STORE_U8(ctx.r31.u32 + 493, ctx.r30.u8);
	// stb r11,494(r31)
	PPC_STORE_U8(ctx.r31.u32 + 494, ctx.r11.u8);
	// stb r30,495(r31)
	PPC_STORE_U8(ctx.r31.u32 + 495, ctx.r30.u8);
	// stb r30,496(r31)
	PPC_STORE_U8(ctx.r31.u32 + 496, ctx.r30.u8);
	// stb r30,497(r31)
	PPC_STORE_U8(ctx.r31.u32 + 497, ctx.r30.u8);
	// stb r11,498(r31)
	PPC_STORE_U8(ctx.r31.u32 + 498, ctx.r11.u8);
	// stb r11,499(r31)
	PPC_STORE_U8(ctx.r31.u32 + 499, ctx.r11.u8);
	// stw r30,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r30.u32);
	// stb r30,504(r31)
	PPC_STORE_U8(ctx.r31.u32 + 504, ctx.r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82675378"))) PPC_WEAK_FUNC(sub_82675378);
PPC_FUNC_IMPL(__imp__sub_82675378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-4060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4060);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826753a8
	if (ctx.cr0.eq) goto loc_826753A8;
	// bl 0x8247c7d0
	ctx.lr = 0x826753A0;
	sub_8247C7D0(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x825555e0
	ctx.lr = 0x826753A8;
	sub_825555E0(ctx, base);
loc_826753A8:
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826753d0
	if (ctx.cr6.eq) goto loc_826753D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826753C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
loc_826753D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826753E8"))) PPC_WEAK_FUNC(sub_826753E8);
PPC_FUNC_IMPL(__imp__sub_826753E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-4084(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4084);
	// bl 0x826425c0
	ctx.lr = 0x82675404;
	sub_826425C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82675440
	if (ctx.cr0.eq) goto loc_82675440;
	// lbz r11,3122(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3122);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82675420
	if (ctx.cr0.eq) goto loc_82675420;
loc_82675418:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82675434
	goto loc_82675434;
loc_82675420:
	// lbz r11,3121(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3121);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82675418
	if (!ctx.cr0.eq) goto loc_82675418;
	// lwz r3,-4084(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4084);
	// bl 0x8264a150
	ctx.lr = 0x82675434;
	sub_8264A150(ctx, base);
loc_82675434:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82675444
	if (!ctx.cr0.eq) goto loc_82675444;
loc_82675440:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82675444:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82675460"))) PPC_WEAK_FUNC(sub_82675460);
PPC_FUNC_IMPL(__imp__sub_82675460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-4084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4084);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826754b0
	if (ctx.cr0.eq) goto loc_826754B0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8264a150
	ctx.lr = 0x82675490;
	sub_8264A150(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826754a8
	if (ctx.cr0.eq) goto loc_826754A8;
	// lwz r11,388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x826754ac
	if (!ctx.cr6.eq) goto loc_826754AC;
loc_826754A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826754AC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
loc_826754B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826754C8"))) PPC_WEAK_FUNC(sub_826754C8);
PPC_FUNC_IMPL(__imp__sub_826754C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,498(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 498);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8267555c
	if (!ctx.cr0.eq) goto loc_8267555C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826754F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82675568
	if (ctx.cr0.eq) goto loc_82675568;
	// bl 0x82648b60
	ctx.lr = 0x82675504;
	sub_82648B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82675568
	if (ctx.cr0.eq) goto loc_82675568;
	// lbz r11,3122(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3122);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82675520
	if (ctx.cr0.eq) goto loc_82675520;
loc_82675518:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82675538
	goto loc_82675538;
loc_82675520:
	// lbz r11,3121(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3121);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82675518
	if (!ctx.cr0.eq) goto loc_82675518;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r3,-4084(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4084);
	// bl 0x8264a150
	ctx.lr = 0x82675538;
	sub_8264A150(ctx, base);
loc_82675538:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82675568
	if (ctx.cr0.eq) goto loc_82675568;
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// addi r3,r11,108
	ctx.r3.s64 = ctx.r11.s64 + 108;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82675558;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82675568
	goto loc_82675568;
loc_8267555C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266b040
	ctx.lr = 0x82675568;
	sub_8266B040(ctx, base);
loc_82675568:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82675580"))) PPC_WEAK_FUNC(sub_82675580);
PPC_FUNC_IMPL(__imp__sub_82675580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,498(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 498);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82675614
	if (!ctx.cr0.eq) goto loc_82675614;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826755B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82675620
	if (ctx.cr0.eq) goto loc_82675620;
	// bl 0x82648b60
	ctx.lr = 0x826755BC;
	sub_82648B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82675620
	if (ctx.cr0.eq) goto loc_82675620;
	// lbz r11,3122(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3122);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826755d8
	if (ctx.cr0.eq) goto loc_826755D8;
loc_826755D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826755f0
	goto loc_826755F0;
loc_826755D8:
	// lbz r11,3121(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3121);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x826755d0
	if (!ctx.cr0.eq) goto loc_826755D0;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r3,-4084(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4084);
	// bl 0x8264a150
	ctx.lr = 0x826755F0;
	sub_8264A150(ctx, base);
loc_826755F0:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82675620
	if (ctx.cr0.eq) goto loc_82675620;
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// addi r3,r11,108
	ctx.r3.s64 = ctx.r11.s64 + 108;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82675610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82675620
	goto loc_82675620;
loc_82675614:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266b040
	ctx.lr = 0x82675620;
	sub_8266B040(ctx, base);
loc_82675620:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82675638"))) PPC_WEAK_FUNC(sub_82675638);
PPC_FUNC_IMPL(__imp__sub_82675638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// beq cr6,0x82675700
	if (ctx.cr6.eq) goto loc_82675700;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// beq cr6,0x826756c8
	if (ctx.cr6.eq) goto loc_826756C8;
	// cmplwi cr6,r4,7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 7, ctx.xer);
	// beq cr6,0x8267569c
	if (ctx.cr6.eq) goto loc_8267569C;
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// bne cr6,0x82675720
	if (!ctx.cr6.eq) goto loc_82675720;
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82675720
	if (!ctx.cr6.eq) goto loc_82675720;
	// lbz r11,498(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 498);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82675720
	if (ctx.cr0.eq) goto loc_82675720;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r4,7464(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7464);
	// bl 0x82e5cfd8
	ctx.lr = 0x82675690;
	sub_82E5CFD8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,498(r31)
	PPC_STORE_U8(ctx.r31.u32 + 498, ctx.r11.u8);
	// b 0x82675720
	goto loc_82675720;
loc_8267569C:
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x826756b0
	if (!ctx.cr6.eq) goto loc_826756B0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,393(r31)
	PPC_STORE_U8(ctx.r31.u32 + 393, ctx.r11.u8);
loc_826756B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826756C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82675720
	goto loc_82675720;
loc_826756C8:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r10.u8);
	// lwz r11,23748(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23748);
	// stb r10,255(r11)
	PPC_STORE_U8(ctx.r11.u32 + 255, ctx.r10.u8);
	// bl 0x82648b50
	ctx.lr = 0x826756E0;
	sub_82648B50(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,984(r3)
	PPC_STORE_U8(ctx.r3.u32 + 984, ctx.r11.u8);
	// bl 0x82648b50
	ctx.lr = 0x826756EC;
	sub_82648B50(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,976(r3)
	PPC_STORE_U32(ctx.r3.u32 + 976, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8269d478
	ctx.lr = 0x826756FC;
	sub_8269D478(ctx, base);
	// b 0x82675720
	goto loc_82675720;
loc_82675700:
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82675720
	if (!ctx.cr6.eq) goto loc_82675720;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// stb r11,392(r31)
	PPC_STORE_U8(ctx.r31.u32 + 392, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826af8e8
	ctx.lr = 0x82675720;
	sub_826AF8E8(ctx, base);
loc_82675720:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82675738"))) PPC_WEAK_FUNC(sub_82675738);
PPC_FUNC_IMPL(__imp__sub_82675738) {
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
	// bl 0x82648b50
	ctx.lr = 0x82675748;
	sub_82648B50(ctx, base);
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

__attribute__((alias("__imp__sub_82675760"))) PPC_WEAK_FUNC(sub_82675760);
PPC_FUNC_IMPL(__imp__sub_82675760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82675260
	ctx.lr = 0x82675778;
	sub_82675260(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r9,r11,-21180
	ctx.r9.s64 = ctx.r11.s64 + -21180;
	// addi r10,r10,-21192
	ctx.r10.s64 = ctx.r10.s64 + -21192;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r11.u32);
	// stw r11,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r11.u32);
	// stw r11,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r11.u32);
	// stw r11,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r11.u32);
	// stb r11,524(r31)
	PPC_STORE_U8(ctx.r31.u32 + 524, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826757C0"))) PPC_WEAK_FUNC(sub_826757C0);
PPC_FUNC_IMPL(__imp__sub_826757C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-21180
	ctx.r11.s64 = ctx.r11.s64 + -21180;
	// addi r10,r10,-21192
	ctx.r10.s64 = ctx.r10.s64 + -21192;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,520
	ctx.r3.s64 = ctx.r3.s64 + 520;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82de7330
	ctx.lr = 0x826757F4;
	sub_82DE7330(ctx, base);
	// addi r3,r31,516
	ctx.r3.s64 = ctx.r31.s64 + 516;
	// bl 0x82de7330
	ctx.lr = 0x826757FC;
	sub_82DE7330(ctx, base);
	// addi r3,r31,512
	ctx.r3.s64 = ctx.r31.s64 + 512;
	// bl 0x82de7330
	ctx.lr = 0x82675804;
	sub_82DE7330(ctx, base);
	// addi r3,r31,508
	ctx.r3.s64 = ctx.r31.s64 + 508;
	// bl 0x82de7330
	ctx.lr = 0x8267580C;
	sub_82DE7330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82672fb0
	ctx.lr = 0x82675814;
	sub_82672FB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82675828"))) PPC_WEAK_FUNC(sub_82675828);
PPC_FUNC_IMPL(__imp__sub_82675828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826757c0
	ctx.lr = 0x82675848;
	sub_826757C0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82675858
	if (ctx.cr0.eq) goto loc_82675858;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82675858;
	sub_823FD208(ctx, base);
loc_82675858:
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

__attribute__((alias("__imp__sub_82675878"))) PPC_WEAK_FUNC(sub_82675878);
PPC_FUNC_IMPL(__imp__sub_82675878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82648b50
	ctx.lr = 0x82675894;
	sub_82648B50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r31,864(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 864);
	// bl 0x82c0f6c0
	ctx.lr = 0x826758A4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826758e4
	if (ctx.cr0.eq) goto loc_826758E4;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,29036
	ctx.r8.s64 = ctx.r10.s64 + 29036;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// stb r11,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r11.u8);
	// stb r11,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r11.u8);
	// stb r11,19(r3)
	PPC_STORE_U8(ctx.r3.u32 + 19, ctx.r11.u8);
	// b 0x826758e8
	goto loc_826758E8;
loc_826758E4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_826758E8:
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82675908;
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

__attribute__((alias("__imp__sub_82675920"))) PPC_WEAK_FUNC(sub_82675920);
PPC_FUNC_IMPL(__imp__sub_82675920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82675260
	ctx.lr = 0x82675938;
	sub_82675260(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r9,r11,-20892
	ctx.r9.s64 = ctx.r11.s64 + -20892;
	// addi r10,r10,-20900
	ctx.r10.s64 = ctx.r10.s64 + -20900;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r11.u32);
	// stw r11,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82675978"))) PPC_WEAK_FUNC(sub_82675978);
PPC_FUNC_IMPL(__imp__sub_82675978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-20892
	ctx.r11.s64 = ctx.r11.s64 + -20892;
	// addi r10,r10,-20900
	ctx.r10.s64 = ctx.r10.s64 + -20900;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,512
	ctx.r3.s64 = ctx.r3.s64 + 512;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82de7330
	ctx.lr = 0x826759AC;
	sub_82DE7330(ctx, base);
	// addi r3,r31,508
	ctx.r3.s64 = ctx.r31.s64 + 508;
	// bl 0x82de7330
	ctx.lr = 0x826759B4;
	sub_82DE7330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82672fb0
	ctx.lr = 0x826759BC;
	sub_82672FB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826759D0"))) PPC_WEAK_FUNC(sub_826759D0);
PPC_FUNC_IMPL(__imp__sub_826759D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82675978
	ctx.lr = 0x826759F0;
	sub_82675978(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82675a00
	if (ctx.cr0.eq) goto loc_82675A00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82675A00;
	sub_823FD208(ctx, base);
loc_82675A00:
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

__attribute__((alias("__imp__sub_82675A20"))) PPC_WEAK_FUNC(sub_82675A20);
PPC_FUNC_IMPL(__imp__sub_82675A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82675A28;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82675a74
	if (!ctx.cr6.eq) goto loc_82675A74;
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82675a70
	if (!ctx.cr6.eq) goto loc_82675A70;
	// bl 0x82906a18
	ctx.lr = 0x82675A5C;
	sub_82906A18(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82675A70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82675A70:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82675A74:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82675a94
	if (!ctx.cr0.eq) goto loc_82675A94;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82675638
	ctx.lr = 0x82675A94;
	sub_82675638(ctx, base);
loc_82675A94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82675AA0"))) PPC_WEAK_FUNC(sub_82675AA0);
PPC_FUNC_IMPL(__imp__sub_82675AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82675260
	ctx.lr = 0x82675AB8;
	sub_82675260(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-20604
	ctx.r11.s64 = ctx.r11.s64 + -20604;
	// addi r10,r10,-20612
	ctx.r10.s64 = ctx.r10.s64 + -20612;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82675AF0"))) PPC_WEAK_FUNC(sub_82675AF0);
PPC_FUNC_IMPL(__imp__sub_82675AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-20604
	ctx.r11.s64 = ctx.r11.s64 + -20604;
	// addi r10,r10,-20612
	ctx.r10.s64 = ctx.r10.s64 + -20612;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,508
	ctx.r3.s64 = ctx.r3.s64 + 508;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82de7330
	ctx.lr = 0x82675B24;
	sub_82DE7330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82672fb0
	ctx.lr = 0x82675B2C;
	sub_82672FB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82675B40"))) PPC_WEAK_FUNC(sub_82675B40);
PPC_FUNC_IMPL(__imp__sub_82675B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82675af0
	ctx.lr = 0x82675B60;
	sub_82675AF0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82675b70
	if (ctx.cr0.eq) goto loc_82675B70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82675B70;
	sub_823FD208(ctx, base);
loc_82675B70:
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

__attribute__((alias("__imp__sub_82675B90"))) PPC_WEAK_FUNC(sub_82675B90);
PPC_FUNC_IMPL(__imp__sub_82675B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82675B98;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82675be4
	if (!ctx.cr6.eq) goto loc_82675BE4;
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82675be0
	if (!ctx.cr6.eq) goto loc_82675BE0;
	// bl 0x8266b310
	ctx.lr = 0x82675BCC;
	sub_8266B310(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82675BE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82675BE0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82675BE4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82675c04
	if (!ctx.cr0.eq) goto loc_82675C04;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82675638
	ctx.lr = 0x82675C04;
	sub_82675638(ctx, base);
loc_82675C04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82675C10"))) PPC_WEAK_FUNC(sub_82675C10);
PPC_FUNC_IMPL(__imp__sub_82675C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-20316
	ctx.r11.s64 = ctx.r11.s64 + -20316;
	// addi r10,r10,-20324
	ctx.r10.s64 = ctx.r10.s64 + -20324;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82672fb0
	ctx.lr = 0x82675C48;
	sub_82672FB0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82675c58
	if (ctx.cr0.eq) goto loc_82675C58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82675C58;
	sub_823FD208(ctx, base);
loc_82675C58:
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

__attribute__((alias("__imp__sub_82675C78"))) PPC_WEAK_FUNC(sub_82675C78);
PPC_FUNC_IMPL(__imp__sub_82675C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82675C80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82e5d378
	ctx.lr = 0x82675C90;
	sub_82E5D378(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82675d34
	if (!ctx.cr0.eq) goto loc_82675D34;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r3,23980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23980);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82675cfc
	if (ctx.cr0.eq) goto loc_82675CFC;
	// bl 0x82882f88
	ctx.lr = 0x82675CAC;
	sub_82882F88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82675cfc
	if (ctx.cr0.eq) goto loc_82675CFC;
	// lbz r11,392(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 392);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82675cfc
	if (!ctx.cr0.eq) goto loc_82675CFC;
	// bl 0x82648b50
	ctx.lr = 0x82675CC4;
	sub_82648B50(ctx, base);
	// addi r31,r3,960
	ctx.r31.s64 = ctx.r3.s64 + 960;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82675cec
	if (ctx.cr6.eq) goto loc_82675CEC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82675CEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82675CEC:
	// stb r30,26(r31)
	PPC_STORE_U8(ctx.r31.u32 + 26, ctx.r30.u8);
	// bl 0x82473ff8
	ctx.lr = 0x82675CF4;
	sub_82473FF8(ctx, base);
	// li r5,189
	ctx.r5.s64 = 189;
	// b 0x82675d18
	goto loc_82675D18;
loc_82675CFC:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r3,23748(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23748);
	// bl 0x82866690
	ctx.lr = 0x82675D08;
	sub_82866690(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82675d34
	if (ctx.cr0.eq) goto loc_82675D34;
	// bl 0x82473ff8
	ctx.lr = 0x82675D14;
	sub_82473FF8(ctx, base);
	// li r5,135
	ctx.r5.s64 = 135;
loc_82675D18:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,268(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 268);
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82675D34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82675D34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82675D40"))) PPC_WEAK_FUNC(sub_82675D40);
PPC_FUNC_IMPL(__imp__sub_82675D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r3,408
	ctx.r5.s64 = ctx.r3.s64 + 408;
	// addi r4,r11,26092
	ctx.r4.s64 = ctx.r11.s64 + 26092;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e5fc28
	ctx.lr = 0x82675D64;
	sub_82E5FC28(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r31,420
	ctx.r5.s64 = ctx.r31.s64 + 420;
	// addi r4,r11,26076
	ctx.r4.s64 = ctx.r11.s64 + 26076;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e5fc28
	ctx.lr = 0x82675D78;
	sub_82E5FC28(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r31,456
	ctx.r5.s64 = ctx.r31.s64 + 456;
	// addi r4,r11,26052
	ctx.r4.s64 = ctx.r11.s64 + 26052;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e5fc28
	ctx.lr = 0x82675D8C;
	sub_82E5FC28(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r31,432
	ctx.r5.s64 = ctx.r31.s64 + 432;
	// addi r4,r11,26036
	ctx.r4.s64 = ctx.r11.s64 + 26036;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e5fc28
	ctx.lr = 0x82675DA0;
	sub_82E5FC28(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r31,444
	ctx.r5.s64 = ctx.r31.s64 + 444;
	// addi r4,r11,26016
	ctx.r4.s64 = ctx.r11.s64 + 26016;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e5fc28
	ctx.lr = 0x82675DB4;
	sub_82E5FC28(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r31,468
	ctx.r5.s64 = ctx.r31.s64 + 468;
	// addi r4,r11,25996
	ctx.r4.s64 = ctx.r11.s64 + 25996;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e5fc28
	ctx.lr = 0x82675DC8;
	sub_82E5FC28(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r31,480
	ctx.r5.s64 = ctx.r31.s64 + 480;
	// addi r4,r11,25972
	ctx.r4.s64 = ctx.r11.s64 + 25972;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e5fc28
	ctx.lr = 0x82675DDC;
	sub_82E5FC28(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r31,492
	ctx.r5.s64 = ctx.r31.s64 + 492;
	// addi r4,r11,25952
	ctx.r4.s64 = ctx.r11.s64 + 25952;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e5fc28
	ctx.lr = 0x82675DF0;
	sub_82E5FC28(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r31,504
	ctx.r5.s64 = ctx.r31.s64 + 504;
	// addi r4,r11,25932
	ctx.r4.s64 = ctx.r11.s64 + 25932;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e5fc28
	ctx.lr = 0x82675E04;
	sub_82E5FC28(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r31,516
	ctx.r5.s64 = ctx.r31.s64 + 516;
	// addi r4,r11,25912
	ctx.r4.s64 = ctx.r11.s64 + 25912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e5fc28
	ctx.lr = 0x82675E18;
	sub_82E5FC28(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r31,540
	ctx.r5.s64 = ctx.r31.s64 + 540;
	// addi r4,r11,25896
	ctx.r4.s64 = ctx.r11.s64 + 25896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e5fc28
	ctx.lr = 0x82675E2C;
	sub_82E5FC28(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r31,552
	ctx.r5.s64 = ctx.r31.s64 + 552;
	// addi r4,r11,25880
	ctx.r4.s64 = ctx.r11.s64 + 25880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e5fc28
	ctx.lr = 0x82675E40;
	sub_82E5FC28(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r31,564
	ctx.r5.s64 = ctx.r31.s64 + 564;
	// addi r4,r11,25868
	ctx.r4.s64 = ctx.r11.s64 + 25868;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e5fc28
	ctx.lr = 0x82675E54;
	sub_82E5FC28(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r31,576
	ctx.r5.s64 = ctx.r31.s64 + 576;
	// addi r4,r11,25852
	ctx.r4.s64 = ctx.r11.s64 + 25852;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e5fc28
	ctx.lr = 0x82675E68;
	sub_82E5FC28(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r31,588
	ctx.r5.s64 = ctx.r31.s64 + 588;
	// addi r4,r11,25828
	ctx.r4.s64 = ctx.r11.s64 + 25828;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e5fc28
	ctx.lr = 0x82675E7C;
	sub_82E5FC28(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r31,612
	ctx.r5.s64 = ctx.r31.s64 + 612;
	// addi r4,r11,25808
	ctx.r4.s64 = ctx.r11.s64 + 25808;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e5fc28
	ctx.lr = 0x82675E90;
	sub_82E5FC28(ctx, base);
	// addi r5,r31,636
	ctx.r5.s64 = ctx.r31.s64 + 636;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,25784
	ctx.r4.s64 = ctx.r11.s64 + 25784;
	// bl 0x82e5fc28
	ctx.lr = 0x82675EA4;
	sub_82E5FC28(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r31,648
	ctx.r5.s64 = ctx.r31.s64 + 648;
	// addi r4,r11,25760
	ctx.r4.s64 = ctx.r11.s64 + 25760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e5fc28
	ctx.lr = 0x82675EB8;
	sub_82E5FC28(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,25736
	ctx.r3.s64 = ctx.r11.s64 + 25736;
	// bl 0x82e73ab0
	ctx.lr = 0x82675EC4;
	sub_82E73AB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266f5b0
	ctx.lr = 0x82675ED0;
	sub_8266F5B0(ctx, base);
	// stw r3,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82675EE8"))) PPC_WEAK_FUNC(sub_82675EE8);
PPC_FUNC_IMPL(__imp__sub_82675EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,9800(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9800);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82675F08"))) PPC_WEAK_FUNC(sub_82675F08);
PPC_FUNC_IMPL(__imp__sub_82675F08) {
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
	// bl 0x82648b50
	ctx.lr = 0x82675F20;
	sub_82648B50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,864(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 864);
	// bl 0x82847738
	ctx.lr = 0x82675F30;
	sub_82847738(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x82675F3C;
	sub_824AFB20(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,648
	ctx.r3.s64 = ctx.r31.s64 + 648;
	// bl 0x82e78ba0
	ctx.lr = 0x82675F48;
	sub_82E78BA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x82675F50;
	sub_82DE7330(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82de7330
	ctx.lr = 0x82675F58;
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

__attribute__((alias("__imp__sub_82675F70"))) PPC_WEAK_FUNC(sub_82675F70);
PPC_FUNC_IMPL(__imp__sub_82675F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82675F78;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,365(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 365);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82675fec
	if (ctx.cr0.eq) goto loc_82675FEC;
	// bl 0x826a0ed8
	ctx.lr = 0x82675F98;
	sub_826A0ED8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82675fec
	if (ctx.cr0.eq) goto loc_82675FEC;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824b4d50
	ctx.lr = 0x82675FAC;
	sub_824B4D50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82675fec
	if (ctx.cr0.eq) goto loc_82675FEC;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x828408d8
	ctx.lr = 0x82675FC4;
	sub_828408D8(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x82675FD0;
	sub_824AFB20(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,444
	ctx.r3.s64 = ctx.r30.s64 + 444;
	// bl 0x82e78ba0
	ctx.lr = 0x82675FDC;
	sub_82E78BA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x82675FE4;
	sub_82DE7330(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82de7330
	ctx.lr = 0x82675FEC;
	sub_82DE7330(ctx, base);
loc_82675FEC:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82676000
	if (ctx.cr0.eq) goto loc_82676000;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-20024
	ctx.r3.s64 = ctx.r11.s64 + -20024;
	// b 0x82676008
	goto loc_82676008;
loc_82676000:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-20040
	ctx.r3.s64 = ctx.r11.s64 + -20040;
loc_82676008:
	// bl 0x82e73af8
	ctx.lr = 0x8267600C;
	sub_82E73AF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e5cfd8
	ctx.lr = 0x82676018;
	sub_82E5CFD8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

