#include "forza_horizon_1_init.h"

__attribute__((alias("__imp__sub_831EA280"))) PPC_WEAK_FUNC(sub_831EA280);
PPC_FUNC_IMPL(__imp__sub_831EA280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,20052
	ctx.r3.s64 = ctx.r11.s64 + 20052;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA290"))) PPC_WEAK_FUNC(sub_831EA290);
PPC_FUNC_IMPL(__imp__sub_831EA290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,19580
	ctx.r3.s64 = ctx.r11.s64 + 19580;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA2A0"))) PPC_WEAK_FUNC(sub_831EA2A0);
PPC_FUNC_IMPL(__imp__sub_831EA2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,19472
	ctx.r3.s64 = ctx.r11.s64 + 19472;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA2B0"))) PPC_WEAK_FUNC(sub_831EA2B0);
PPC_FUNC_IMPL(__imp__sub_831EA2B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,19952
	ctx.r3.s64 = ctx.r11.s64 + 19952;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA2C0"))) PPC_WEAK_FUNC(sub_831EA2C0);
PPC_FUNC_IMPL(__imp__sub_831EA2C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,20000
	ctx.r3.s64 = ctx.r11.s64 + 20000;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA2D0"))) PPC_WEAK_FUNC(sub_831EA2D0);
PPC_FUNC_IMPL(__imp__sub_831EA2D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,19628
	ctx.r3.s64 = ctx.r11.s64 + 19628;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA2E0"))) PPC_WEAK_FUNC(sub_831EA2E0);
PPC_FUNC_IMPL(__imp__sub_831EA2E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,19896
	ctx.r3.s64 = ctx.r11.s64 + 19896;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA2F0"))) PPC_WEAK_FUNC(sub_831EA2F0);
PPC_FUNC_IMPL(__imp__sub_831EA2F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,19520
	ctx.r3.s64 = ctx.r11.s64 + 19520;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA300"))) PPC_WEAK_FUNC(sub_831EA300);
PPC_FUNC_IMPL(__imp__sub_831EA300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,19844
	ctx.r3.s64 = ctx.r11.s64 + 19844;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA310"))) PPC_WEAK_FUNC(sub_831EA310);
PPC_FUNC_IMPL(__imp__sub_831EA310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,20336
	ctx.r3.s64 = ctx.r11.s64 + 20336;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA320"))) PPC_WEAK_FUNC(sub_831EA320);
PPC_FUNC_IMPL(__imp__sub_831EA320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x831EA328;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r30,59
	ctx.r30.s64 = 59;
	// addi r11,r11,16992
	ctx.r11.s64 = ctx.r11.s64 + 16992;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,1448
	ctx.r31.s64 = ctx.r11.s64 + 1448;
loc_831EA340:
	// lwzu r3,-24(r31)
	ea = -24 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831ea350
	if (ctx.cr6.eq) goto loc_831EA350;
	// bl 0x823fd208
	ctx.lr = 0x831EA350;
	sub_823FD208(ctx, base);
loc_831EA350:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// bge 0x831ea340
	if (!ctx.cr0.lt) goto loc_831EA340;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA370"))) PPC_WEAK_FUNC(sub_831EA370);
PPC_FUNC_IMPL(__imp__sub_831EA370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,21760
	ctx.r3.s64 = ctx.r11.s64 + 21760;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA380"))) PPC_WEAK_FUNC(sub_831EA380);
PPC_FUNC_IMPL(__imp__sub_831EA380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,21872
	ctx.r3.s64 = ctx.r11.s64 + 21872;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA390"))) PPC_WEAK_FUNC(sub_831EA390);
PPC_FUNC_IMPL(__imp__sub_831EA390) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA398"))) PPC_WEAK_FUNC(sub_831EA398);
PPC_FUNC_IMPL(__imp__sub_831EA398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,22032
	ctx.r3.s64 = ctx.r11.s64 + 22032;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA3A8"))) PPC_WEAK_FUNC(sub_831EA3A8);
PPC_FUNC_IMPL(__imp__sub_831EA3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,21900
	ctx.r3.s64 = ctx.r11.s64 + 21900;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA3B8"))) PPC_WEAK_FUNC(sub_831EA3B8);
PPC_FUNC_IMPL(__imp__sub_831EA3B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,22036
	ctx.r3.s64 = ctx.r11.s64 + 22036;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA3C8"))) PPC_WEAK_FUNC(sub_831EA3C8);
PPC_FUNC_IMPL(__imp__sub_831EA3C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,22116
	ctx.r3.s64 = ctx.r11.s64 + 22116;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA3D8"))) PPC_WEAK_FUNC(sub_831EA3D8);
PPC_FUNC_IMPL(__imp__sub_831EA3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,21984
	ctx.r3.s64 = ctx.r11.s64 + 21984;
	// b 0x82c9ed68
	sub_82C9ED68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA3E8"))) PPC_WEAK_FUNC(sub_831EA3E8);
PPC_FUNC_IMPL(__imp__sub_831EA3E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA3F0"))) PPC_WEAK_FUNC(sub_831EA3F0);
PPC_FUNC_IMPL(__imp__sub_831EA3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,22288
	ctx.r3.s64 = ctx.r11.s64 + 22288;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA400"))) PPC_WEAK_FUNC(sub_831EA400);
PPC_FUNC_IMPL(__imp__sub_831EA400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,22372
	ctx.r3.s64 = ctx.r11.s64 + 22372;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA410"))) PPC_WEAK_FUNC(sub_831EA410);
PPC_FUNC_IMPL(__imp__sub_831EA410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,22528
	ctx.r3.s64 = ctx.r11.s64 + 22528;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA420"))) PPC_WEAK_FUNC(sub_831EA420);
PPC_FUNC_IMPL(__imp__sub_831EA420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,22552
	ctx.r3.s64 = ctx.r11.s64 + 22552;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA430"))) PPC_WEAK_FUNC(sub_831EA430);
PPC_FUNC_IMPL(__imp__sub_831EA430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,22656
	ctx.r3.s64 = ctx.r11.s64 + 22656;
	// b 0x82d6e950
	sub_82D6E950(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA440"))) PPC_WEAK_FUNC(sub_831EA440);
PPC_FUNC_IMPL(__imp__sub_831EA440) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA448"))) PPC_WEAK_FUNC(sub_831EA448);
PPC_FUNC_IMPL(__imp__sub_831EA448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,22848
	ctx.r3.s64 = ctx.r11.s64 + 22848;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA458"))) PPC_WEAK_FUNC(sub_831EA458);
PPC_FUNC_IMPL(__imp__sub_831EA458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,22692
	ctx.r3.s64 = ctx.r11.s64 + 22692;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA468"))) PPC_WEAK_FUNC(sub_831EA468);
PPC_FUNC_IMPL(__imp__sub_831EA468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,22960
	ctx.r3.s64 = ctx.r11.s64 + 22960;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA478"))) PPC_WEAK_FUNC(sub_831EA478);
PPC_FUNC_IMPL(__imp__sub_831EA478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// addi r31,r10,23120
	ctx.r31.s64 = ctx.r10.s64 + 23120;
	// stw r11,23120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23120, ctx.r11.u32);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82a6d958
	ctx.lr = 0x831EA4A0;
	sub_82A6D958(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82a6d958
	ctx.lr = 0x831EA4A8;
	sub_82A6D958(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA4C0"))) PPC_WEAK_FUNC(sub_831EA4C0);
PPC_FUNC_IMPL(__imp__sub_831EA4C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,23200
	ctx.r3.s64 = ctx.r11.s64 + 23200;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA4D0"))) PPC_WEAK_FUNC(sub_831EA4D0);
PPC_FUNC_IMPL(__imp__sub_831EA4D0) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,23104
	ctx.r31.s64 = ctx.r11.s64 + 23104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d9c2d8
	ctx.lr = 0x831EA4FC;
	sub_82D9C2D8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823fd208
	ctx.lr = 0x831EA504;
	sub_823FD208(ctx, base);
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

__attribute__((alias("__imp__sub_831EA518"))) PPC_WEAK_FUNC(sub_831EA518);
PPC_FUNC_IMPL(__imp__sub_831EA518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,23328
	ctx.r3.s64 = ctx.r11.s64 + 23328;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA528"))) PPC_WEAK_FUNC(sub_831EA528);
PPC_FUNC_IMPL(__imp__sub_831EA528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA538"))) PPC_WEAK_FUNC(sub_831EA538);
PPC_FUNC_IMPL(__imp__sub_831EA538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r11,r11,3892
	ctx.r11.s64 = ctx.r11.s64 + 3892;
	// stw r11,26728(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26728, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA550"))) PPC_WEAK_FUNC(sub_831EA550);
PPC_FUNC_IMPL(__imp__sub_831EA550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,23648
	ctx.r3.s64 = ctx.r11.s64 + 23648;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA560"))) PPC_WEAK_FUNC(sub_831EA560);
PPC_FUNC_IMPL(__imp__sub_831EA560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x831EA568;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r30,9
	ctx.r30.s64 = 9;
	// addi r11,r11,26488
	ctx.r11.s64 = ctx.r11.s64 + 26488;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,248
	ctx.r31.s64 = ctx.r11.s64 + 248;
loc_831EA580:
	// lwzu r3,-24(r31)
	ea = -24 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831ea590
	if (ctx.cr6.eq) goto loc_831EA590;
	// bl 0x823fd208
	ctx.lr = 0x831EA590;
	sub_823FD208(ctx, base);
loc_831EA590:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// bge 0x831ea580
	if (!ctx.cr0.lt) goto loc_831EA580;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA5B0"))) PPC_WEAK_FUNC(sub_831EA5B0);
PPC_FUNC_IMPL(__imp__sub_831EA5B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,23760
	ctx.r3.s64 = ctx.r11.s64 + 23760;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA5C0"))) PPC_WEAK_FUNC(sub_831EA5C0);
PPC_FUNC_IMPL(__imp__sub_831EA5C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,23920
	ctx.r3.s64 = ctx.r11.s64 + 23920;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA5D0"))) PPC_WEAK_FUNC(sub_831EA5D0);
PPC_FUNC_IMPL(__imp__sub_831EA5D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,23764
	ctx.r3.s64 = ctx.r11.s64 + 23764;
	// b 0x82c543e0
	sub_82C543E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA5E0"))) PPC_WEAK_FUNC(sub_831EA5E0);
PPC_FUNC_IMPL(__imp__sub_831EA5E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,24032
	ctx.r3.s64 = ctx.r11.s64 + 24032;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA5F0"))) PPC_WEAK_FUNC(sub_831EA5F0);
PPC_FUNC_IMPL(__imp__sub_831EA5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,24144
	ctx.r3.s64 = ctx.r11.s64 + 24144;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA600"))) PPC_WEAK_FUNC(sub_831EA600);
PPC_FUNC_IMPL(__imp__sub_831EA600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,24288
	ctx.r3.s64 = ctx.r11.s64 + 24288;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA610"))) PPC_WEAK_FUNC(sub_831EA610);
PPC_FUNC_IMPL(__imp__sub_831EA610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r11,r11,-24416
	ctx.r11.s64 = ctx.r11.s64 + -24416;
	// stw r11,27928(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27928, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA628"))) PPC_WEAK_FUNC(sub_831EA628);
PPC_FUNC_IMPL(__imp__sub_831EA628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,24464
	ctx.r3.s64 = ctx.r11.s64 + 24464;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA638"))) PPC_WEAK_FUNC(sub_831EA638);
PPC_FUNC_IMPL(__imp__sub_831EA638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,24624
	ctx.r3.s64 = ctx.r11.s64 + 24624;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA648"))) PPC_WEAK_FUNC(sub_831EA648);
PPC_FUNC_IMPL(__imp__sub_831EA648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,24800
	ctx.r3.s64 = ctx.r11.s64 + 24800;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA658"))) PPC_WEAK_FUNC(sub_831EA658);
PPC_FUNC_IMPL(__imp__sub_831EA658) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA660"))) PPC_WEAK_FUNC(sub_831EA660);
PPC_FUNC_IMPL(__imp__sub_831EA660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,24984
	ctx.r3.s64 = ctx.r11.s64 + 24984;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA670"))) PPC_WEAK_FUNC(sub_831EA670);
PPC_FUNC_IMPL(__imp__sub_831EA670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,24876
	ctx.r3.s64 = ctx.r11.s64 + 24876;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA680"))) PPC_WEAK_FUNC(sub_831EA680);
PPC_FUNC_IMPL(__imp__sub_831EA680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,24872
	ctx.r3.s64 = ctx.r11.s64 + 24872;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA690"))) PPC_WEAK_FUNC(sub_831EA690);
PPC_FUNC_IMPL(__imp__sub_831EA690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,28808
	ctx.r3.s64 = ctx.r11.s64 + 28808;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411478
	sub_82411478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA6A8"))) PPC_WEAK_FUNC(sub_831EA6A8);
PPC_FUNC_IMPL(__imp__sub_831EA6A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,25080
	ctx.r3.s64 = ctx.r11.s64 + 25080;
	// b 0x82c67f58
	sub_82C67F58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA6B8"))) PPC_WEAK_FUNC(sub_831EA6B8);
PPC_FUNC_IMPL(__imp__sub_831EA6B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,24968
	ctx.r3.s64 = ctx.r11.s64 + 24968;
	// b 0x82d6e950
	sub_82D6E950(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA6C8"))) PPC_WEAK_FUNC(sub_831EA6C8);
PPC_FUNC_IMPL(__imp__sub_831EA6C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r3,r11,25272
	ctx.r3.s64 = ctx.r11.s64 + 25272;
	// b 0x82c00f48
	sub_82C00F48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA6D8"))) PPC_WEAK_FUNC(sub_831EA6D8);
PPC_FUNC_IMPL(__imp__sub_831EA6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r3,r11,25216
	ctx.r3.s64 = ctx.r11.s64 + 25216;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA6E8"))) PPC_WEAK_FUNC(sub_831EA6E8);
PPC_FUNC_IMPL(__imp__sub_831EA6E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA6F0"))) PPC_WEAK_FUNC(sub_831EA6F0);
PPC_FUNC_IMPL(__imp__sub_831EA6F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r3,r11,25268
	ctx.r3.s64 = ctx.r11.s64 + 25268;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA700"))) PPC_WEAK_FUNC(sub_831EA700);
PPC_FUNC_IMPL(__imp__sub_831EA700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r31,r11,25440
	ctx.r31.s64 = ctx.r11.s64 + 25440;
	// lwz r3,25440(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25440);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831ea728
	if (ctx.cr6.eq) goto loc_831EA728;
	// bl 0x823fd208
	ctx.lr = 0x831EA728;
	sub_823FD208(ctx, base);
loc_831EA728:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_831EA758"))) PPC_WEAK_FUNC(sub_831EA758);
PPC_FUNC_IMPL(__imp__sub_831EA758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31928
	ctx.r31.s64 = -2092433408;
	// addi r3,r31,25244
	ctx.r3.s64 = ctx.r31.s64 + 25244;
	// bl 0x82c7bb60
	ctx.lr = 0x831EA774;
	sub_82C7BB60(ctx, base);
	// lwz r3,25244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25244);
	// bl 0x823fd208
	ctx.lr = 0x831EA77C;
	sub_823FD208(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,25244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25244, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA798"))) PPC_WEAK_FUNC(sub_831EA798);
PPC_FUNC_IMPL(__imp__sub_831EA798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r3,r11,26656
	ctx.r3.s64 = ctx.r11.s64 + 26656;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA7A8"))) PPC_WEAK_FUNC(sub_831EA7A8);
PPC_FUNC_IMPL(__imp__sub_831EA7A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r3,r11,26684
	ctx.r3.s64 = ctx.r11.s64 + 26684;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA7B8"))) PPC_WEAK_FUNC(sub_831EA7B8);
PPC_FUNC_IMPL(__imp__sub_831EA7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r3,r11,25596
	ctx.r3.s64 = ctx.r11.s64 + 25596;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA7C8"))) PPC_WEAK_FUNC(sub_831EA7C8);
PPC_FUNC_IMPL(__imp__sub_831EA7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,26624
	ctx.r11.s64 = ctx.r11.s64 + 26624;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
loc_831EA7EC:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de7330
	ctx.lr = 0x831EA7F8;
	sub_82DE7330(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x831ea7ec
	if (!ctx.cr0.lt) goto loc_831EA7EC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA818"))) PPC_WEAK_FUNC(sub_831EA818);
PPC_FUNC_IMPL(__imp__sub_831EA818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-31648
	ctx.r3.s64 = ctx.r11.s64 + -31648;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411478
	sub_82411478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA830"))) PPC_WEAK_FUNC(sub_831EA830);
PPC_FUNC_IMPL(__imp__sub_831EA830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-31620
	ctx.r3.s64 = ctx.r11.s64 + -31620;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411478
	sub_82411478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA848"))) PPC_WEAK_FUNC(sub_831EA848);
PPC_FUNC_IMPL(__imp__sub_831EA848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-31592
	ctx.r3.s64 = ctx.r11.s64 + -31592;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411478
	sub_82411478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA860"))) PPC_WEAK_FUNC(sub_831EA860);
PPC_FUNC_IMPL(__imp__sub_831EA860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-31564
	ctx.r3.s64 = ctx.r11.s64 + -31564;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411478
	sub_82411478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA878"))) PPC_WEAK_FUNC(sub_831EA878);
PPC_FUNC_IMPL(__imp__sub_831EA878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// li r30,232
	ctx.r30.s64 = 232;
	// addi r11,r11,25616
	ctx.r11.s64 = ctx.r11.s64 + 25616;
	// addi r31,r11,932
	ctx.r31.s64 = ctx.r11.s64 + 932;
loc_831EA89C:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de7330
	ctx.lr = 0x831EA8A8;
	sub_82DE7330(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x831ea89c
	if (!ctx.cr0.lt) goto loc_831EA89C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA8C8"))) PPC_WEAK_FUNC(sub_831EA8C8);
PPC_FUNC_IMPL(__imp__sub_831EA8C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// li r30,14
	ctx.r30.s64 = 14;
	// addi r11,r11,25536
	ctx.r11.s64 = ctx.r11.s64 + 25536;
	// addi r31,r11,60
	ctx.r31.s64 = ctx.r11.s64 + 60;
loc_831EA8EC:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de7330
	ctx.lr = 0x831EA8F8;
	sub_82DE7330(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x831ea8ec
	if (!ctx.cr0.lt) goto loc_831EA8EC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA918"))) PPC_WEAK_FUNC(sub_831EA918);
PPC_FUNC_IMPL(__imp__sub_831EA918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// li r30,9
	ctx.r30.s64 = 9;
	// addi r11,r11,26548
	ctx.r11.s64 = ctx.r11.s64 + 26548;
	// addi r31,r11,40
	ctx.r31.s64 = ctx.r11.s64 + 40;
loc_831EA93C:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de7330
	ctx.lr = 0x831EA948;
	sub_82DE7330(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x831ea93c
	if (!ctx.cr0.lt) goto loc_831EA93C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA968"))) PPC_WEAK_FUNC(sub_831EA968);
PPC_FUNC_IMPL(__imp__sub_831EA968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r31,r11,32600
	ctx.r31.s64 = ctx.r11.s64 + 32600;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82d9a170
	ctx.lr = 0x831EA988;
	sub_82D9A170(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82411478
	ctx.lr = 0x831EA998;
	sub_82411478(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA9B0"))) PPC_WEAK_FUNC(sub_831EA9B0);
PPC_FUNC_IMPL(__imp__sub_831EA9B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r30,17
	ctx.r30.s64 = 17;
	// addi r11,r11,32664
	ctx.r11.s64 = ctx.r11.s64 + 32664;
	// addi r31,r11,1224
	ctx.r31.s64 = ctx.r11.s64 + 1224;
loc_831EA9D4:
	// addi r31,r31,-68
	ctx.r31.s64 = ctx.r31.s64 + -68;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82d9a170
	ctx.lr = 0x831EA9E0;
	sub_82D9A170(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82411478
	ctx.lr = 0x831EA9F0;
	sub_82411478(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x831ea9d4
	if (!ctx.cr0.lt) goto loc_831EA9D4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EAA10"))) PPC_WEAK_FUNC(sub_831EAA10);
PPC_FUNC_IMPL(__imp__sub_831EAA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r3,r11,26712
	ctx.r3.s64 = ctx.r11.s64 + 26712;
	// b 0x82c85240
	sub_82C85240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EAA20"))) PPC_WEAK_FUNC(sub_831EAA20);
PPC_FUNC_IMPL(__imp__sub_831EAA20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EAA28"))) PPC_WEAK_FUNC(sub_831EAA28);
PPC_FUNC_IMPL(__imp__sub_831EAA28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EAA30"))) PPC_WEAK_FUNC(sub_831EAA30);
PPC_FUNC_IMPL(__imp__sub_831EAA30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EAA38"))) PPC_WEAK_FUNC(sub_831EAA38);
PPC_FUNC_IMPL(__imp__sub_831EAA38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r3,r11,26776
	ctx.r3.s64 = ctx.r11.s64 + 26776;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EAA48"))) PPC_WEAK_FUNC(sub_831EAA48);
PPC_FUNC_IMPL(__imp__sub_831EAA48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r3,r11,26772
	ctx.r3.s64 = ctx.r11.s64 + 26772;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EAA58"))) PPC_WEAK_FUNC(sub_831EAA58);
PPC_FUNC_IMPL(__imp__sub_831EAA58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r3,r11,26972
	ctx.r3.s64 = ctx.r11.s64 + 26972;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EAA68"))) PPC_WEAK_FUNC(sub_831EAA68);
PPC_FUNC_IMPL(__imp__sub_831EAA68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EAA70"))) PPC_WEAK_FUNC(sub_831EAA70);
PPC_FUNC_IMPL(__imp__sub_831EAA70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r3,r11,27136
	ctx.r3.s64 = ctx.r11.s64 + 27136;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EAA80"))) PPC_WEAK_FUNC(sub_831EAA80);
PPC_FUNC_IMPL(__imp__sub_831EAA80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r3,r11,27296
	ctx.r3.s64 = ctx.r11.s64 + 27296;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EAA90"))) PPC_WEAK_FUNC(sub_831EAA90);
PPC_FUNC_IMPL(__imp__sub_831EAA90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r3,r11,27144
	ctx.r3.s64 = ctx.r11.s64 + 27144;
	// b 0x82c9db58
	sub_82C9DB58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EAAA0"))) PPC_WEAK_FUNC(sub_831EAAA0);
PPC_FUNC_IMPL(__imp__sub_831EAAA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r3,r11,27408
	ctx.r3.s64 = ctx.r11.s64 + 27408;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EAAB0"))) PPC_WEAK_FUNC(sub_831EAAB0);
PPC_FUNC_IMPL(__imp__sub_831EAAB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r3,r11,27520
	ctx.r3.s64 = ctx.r11.s64 + 27520;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EAAC0"))) PPC_WEAK_FUNC(sub_831EAAC0);
PPC_FUNC_IMPL(__imp__sub_831EAAC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r3,r11,27632
	ctx.r3.s64 = ctx.r11.s64 + 27632;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EAAD0"))) PPC_WEAK_FUNC(sub_831EAAD0);
PPC_FUNC_IMPL(__imp__sub_831EAAD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r3,r11,27744
	ctx.r3.s64 = ctx.r11.s64 + 27744;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EAAE0"))) PPC_WEAK_FUNC(sub_831EAAE0);
PPC_FUNC_IMPL(__imp__sub_831EAAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r3,r11,27856
	ctx.r3.s64 = ctx.r11.s64 + 27856;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EAAF0"))) PPC_WEAK_FUNC(sub_831EAAF0);
PPC_FUNC_IMPL(__imp__sub_831EAAF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r3,r11,27968
	ctx.r3.s64 = ctx.r11.s64 + 27968;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EAB00"))) PPC_WEAK_FUNC(sub_831EAB00);
PPC_FUNC_IMPL(__imp__sub_831EAB00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r3,r11,28080
	ctx.r3.s64 = ctx.r11.s64 + 28080;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EAB10"))) PPC_WEAK_FUNC(sub_831EAB10);
PPC_FUNC_IMPL(__imp__sub_831EAB10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r3,r11,28192
	ctx.r3.s64 = ctx.r11.s64 + 28192;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EAB20"))) PPC_WEAK_FUNC(sub_831EAB20);
PPC_FUNC_IMPL(__imp__sub_831EAB20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EAB28"))) PPC_WEAK_FUNC(sub_831EAB28);
PPC_FUNC_IMPL(__imp__sub_831EAB28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EAB30"))) PPC_WEAK_FUNC(sub_831EAB30);
PPC_FUNC_IMPL(__imp__sub_831EAB30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EAB38"))) PPC_WEAK_FUNC(sub_831EAB38);
PPC_FUNC_IMPL(__imp__sub_831EAB38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r3,r11,30768
	ctx.r3.s64 = ctx.r11.s64 + 30768;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EAB48"))) PPC_WEAK_FUNC(sub_831EAB48);
PPC_FUNC_IMPL(__imp__sub_831EAB48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r3,r11,30816
	ctx.r3.s64 = ctx.r11.s64 + 30816;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EAB58"))) PPC_WEAK_FUNC(sub_831EAB58);
PPC_FUNC_IMPL(__imp__sub_831EAB58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r3,r11,30944
	ctx.r3.s64 = ctx.r11.s64 + 30944;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EAB68"))) PPC_WEAK_FUNC(sub_831EAB68);
PPC_FUNC_IMPL(__imp__sub_831EAB68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EAB70"))) PPC_WEAK_FUNC(sub_831EAB70);
PPC_FUNC_IMPL(__imp__sub_831EAB70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-196
	ctx.r3.s64 = ctx.r11.s64 + -196;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EAB80"))) PPC_WEAK_FUNC(sub_831EAB80);
PPC_FUNC_IMPL(__imp__sub_831EAB80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-436
	ctx.r3.s64 = ctx.r11.s64 + -436;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EAB90"))) PPC_WEAK_FUNC(sub_831EAB90);
PPC_FUNC_IMPL(__imp__sub_831EAB90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-160
	ctx.r3.s64 = ctx.r11.s64 + -160;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EABA0"))) PPC_WEAK_FUNC(sub_831EABA0);
PPC_FUNC_IMPL(__imp__sub_831EABA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-464
	ctx.r3.s64 = ctx.r11.s64 + -464;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EABB0"))) PPC_WEAK_FUNC(sub_831EABB0);
PPC_FUNC_IMPL(__imp__sub_831EABB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EABB8"))) PPC_WEAK_FUNC(sub_831EABB8);
PPC_FUNC_IMPL(__imp__sub_831EABB8) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r10,-4032
	ctx.r3.s64 = ctx.r10.s64 + -4032;
	// addi r11,r11,6808
	ctx.r11.s64 = ctx.r11.s64 + 6808;
	// stw r11,-4032(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4032, ctx.r11.u32);
	// bl 0x82cbb138
	ctx.lr = 0x831EABDC;
	sub_82CBB138(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x830b2320
	ctx.lr = 0x831EABE4;
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

__attribute__((alias("__imp__sub_831EABF8"))) PPC_WEAK_FUNC(sub_831EABF8);
PPC_FUNC_IMPL(__imp__sub_831EABF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EAC00"))) PPC_WEAK_FUNC(sub_831EAC00);
PPC_FUNC_IMPL(__imp__sub_831EAC00) {
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
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r10,-128
	ctx.r3.s64 = ctx.r10.s64 + -128;
	// addi r11,r11,6808
	ctx.r11.s64 = ctx.r11.s64 + 6808;
	// stw r11,-128(r10)
	PPC_STORE_U32(ctx.r10.u32 + -128, ctx.r11.u32);
	// bl 0x82cbb138
	ctx.lr = 0x831EAC24;
	sub_82CBB138(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x830b2320
	ctx.lr = 0x831EAC2C;
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

__attribute__((alias("__imp__sub_831EAC40"))) PPC_WEAK_FUNC(sub_831EAC40);
PPC_FUNC_IMPL(__imp__sub_831EAC40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,13732
	ctx.r3.s64 = ctx.r11.s64 + 13732;
	// b 0x82cbc8b8
	sub_82CBC8B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EAC50"))) PPC_WEAK_FUNC(sub_831EAC50);
PPC_FUNC_IMPL(__imp__sub_831EAC50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-580
	ctx.r3.s64 = ctx.r11.s64 + -580;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EAC60"))) PPC_WEAK_FUNC(sub_831EAC60);
PPC_FUNC_IMPL(__imp__sub_831EAC60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r30,34
	ctx.r30.s64 = 34;
	// addi r11,r11,-3840
	ctx.r11.s64 = ctx.r11.s64 + -3840;
	// addi r31,r11,8540
	ctx.r31.s64 = ctx.r11.s64 + 8540;
loc_831EAC84:
	// addi r31,r31,-244
	ctx.r31.s64 = ctx.r31.s64 + -244;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbda40
	ctx.lr = 0x831EAC90;
	sub_82CBDA40(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x831eac84
	if (!ctx.cr0.lt) goto loc_831EAC84;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EACB0"))) PPC_WEAK_FUNC(sub_831EACB0);
PPC_FUNC_IMPL(__imp__sub_831EACB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31926
	ctx.r30.s64 = -2092302336;
	// addi r31,r30,-88
	ctx.r31.s64 = ctx.r30.s64 + -88;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x830b2320
	ctx.lr = 0x831EACD4;
	sub_830B2320(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82840b88
	ctx.lr = 0x831EACDC;
	sub_82840B88(ctx, base);
	// lwz r3,-88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -88);
	// bl 0x823fd208
	ctx.lr = 0x831EACE4;
	sub_823FD208(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EAD00"))) PPC_WEAK_FUNC(sub_831EAD00);
PPC_FUNC_IMPL(__imp__sub_831EAD00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r31,r11,-40
	ctx.r31.s64 = ctx.r11.s64 + -40;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82cc1300
	ctx.lr = 0x831EAD20;
	sub_82CC1300(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82cc1300
	ctx.lr = 0x831EAD28;
	sub_82CC1300(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82cc1300
	ctx.lr = 0x831EAD30;
	sub_82CC1300(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cc1300
	ctx.lr = 0x831EAD38;
	sub_82CC1300(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EAD50"))) PPC_WEAK_FUNC(sub_831EAD50);
PPC_FUNC_IMPL(__imp__sub_831EAD50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,136
	ctx.r3.s64 = ctx.r11.s64 + 136;
	// b 0x82cc32e0
	sub_82CC32E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EAD60"))) PPC_WEAK_FUNC(sub_831EAD60);
PPC_FUNC_IMPL(__imp__sub_831EAD60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r30,7
	ctx.r30.s64 = 7;
	// addi r11,r11,-21468
	ctx.r11.s64 = ctx.r11.s64 + -21468;
	// addi r31,r11,6320
	ctx.r31.s64 = ctx.r11.s64 + 6320;
loc_831EAD84:
	// addi r31,r31,-788
	ctx.r31.s64 = ctx.r31.s64 + -788;
	// addi r3,r31,384
	ctx.r3.s64 = ctx.r31.s64 + 384;
	// bl 0x82cc2da8
	ctx.lr = 0x831EAD90;
	sub_82CC2DA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cc2da8
	ctx.lr = 0x831EAD98;
	sub_82CC2DA8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x831ead84
	if (!ctx.cr0.lt) goto loc_831EAD84;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EADB8"))) PPC_WEAK_FUNC(sub_831EADB8);
PPC_FUNC_IMPL(__imp__sub_831EADB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,13760
	ctx.r3.s64 = ctx.r11.s64 + 13760;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EADC8"))) PPC_WEAK_FUNC(sub_831EADC8);
PPC_FUNC_IMPL(__imp__sub_831EADC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,13756
	ctx.r3.s64 = ctx.r11.s64 + 13756;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EADD8"))) PPC_WEAK_FUNC(sub_831EADD8);
PPC_FUNC_IMPL(__imp__sub_831EADD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EADE0"))) PPC_WEAK_FUNC(sub_831EADE0);
PPC_FUNC_IMPL(__imp__sub_831EADE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EADE8"))) PPC_WEAK_FUNC(sub_831EADE8);
PPC_FUNC_IMPL(__imp__sub_831EADE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EADF0"))) PPC_WEAK_FUNC(sub_831EADF0);
PPC_FUNC_IMPL(__imp__sub_831EADF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EADF8"))) PPC_WEAK_FUNC(sub_831EADF8);
PPC_FUNC_IMPL(__imp__sub_831EADF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-32008
	ctx.r3.s64 = ctx.r11.s64 + -32008;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EAE08"))) PPC_WEAK_FUNC(sub_831EAE08);
PPC_FUNC_IMPL(__imp__sub_831EAE08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-32032
	ctx.r31.s64 = ctx.r11.s64 + -32032;
	// lwz r3,-32032(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32032);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831eae30
	if (ctx.cr6.eq) goto loc_831EAE30;
	// bl 0x823fd208
	ctx.lr = 0x831EAE30;
	sub_823FD208(ctx, base);
loc_831EAE30:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_831EAE60"))) PPC_WEAK_FUNC(sub_831EAE60);
PPC_FUNC_IMPL(__imp__sub_831EAE60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31228(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31228, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EAE78"))) PPC_WEAK_FUNC(sub_831EAE78);
PPC_FUNC_IMPL(__imp__sub_831EAE78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EAE80"))) PPC_WEAK_FUNC(sub_831EAE80);
PPC_FUNC_IMPL(__imp__sub_831EAE80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-31232
	ctx.r3.s64 = ctx.r11.s64 + -31232;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EAE90"))) PPC_WEAK_FUNC(sub_831EAE90);
PPC_FUNC_IMPL(__imp__sub_831EAE90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31264(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31264, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EAEA8"))) PPC_WEAK_FUNC(sub_831EAEA8);
PPC_FUNC_IMPL(__imp__sub_831EAEA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31432
	ctx.r31.s64 = ctx.r11.s64 + -31432;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831eaed0
	if (ctx.cr6.eq) goto loc_831EAED0;
	// bl 0x823fd208
	ctx.lr = 0x831EAED0;
	sub_823FD208(ctx, base);
loc_831EAED0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_831EAF00"))) PPC_WEAK_FUNC(sub_831EAF00);
PPC_FUNC_IMPL(__imp__sub_831EAF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31824
	ctx.r31.s64 = ctx.r11.s64 + -31824;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831eaf28
	if (ctx.cr6.eq) goto loc_831EAF28;
	// bl 0x823fd208
	ctx.lr = 0x831EAF28;
	sub_823FD208(ctx, base);
loc_831EAF28:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_831EAF58"))) PPC_WEAK_FUNC(sub_831EAF58);
PPC_FUNC_IMPL(__imp__sub_831EAF58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31800
	ctx.r31.s64 = ctx.r11.s64 + -31800;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831eaf80
	if (ctx.cr6.eq) goto loc_831EAF80;
	// bl 0x823fd208
	ctx.lr = 0x831EAF80;
	sub_823FD208(ctx, base);
loc_831EAF80:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_831EAFB0"))) PPC_WEAK_FUNC(sub_831EAFB0);
PPC_FUNC_IMPL(__imp__sub_831EAFB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31776
	ctx.r31.s64 = ctx.r11.s64 + -31776;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831eafd8
	if (ctx.cr6.eq) goto loc_831EAFD8;
	// bl 0x823fd208
	ctx.lr = 0x831EAFD8;
	sub_823FD208(ctx, base);
loc_831EAFD8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_831EB008"))) PPC_WEAK_FUNC(sub_831EB008);
PPC_FUNC_IMPL(__imp__sub_831EB008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31752
	ctx.r31.s64 = ctx.r11.s64 + -31752;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831eb030
	if (ctx.cr6.eq) goto loc_831EB030;
	// bl 0x823fd208
	ctx.lr = 0x831EB030;
	sub_823FD208(ctx, base);
loc_831EB030:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_831EB060"))) PPC_WEAK_FUNC(sub_831EB060);
PPC_FUNC_IMPL(__imp__sub_831EB060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31728
	ctx.r31.s64 = ctx.r11.s64 + -31728;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831eb088
	if (ctx.cr6.eq) goto loc_831EB088;
	// bl 0x823fd208
	ctx.lr = 0x831EB088;
	sub_823FD208(ctx, base);
loc_831EB088:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_831EB0B8"))) PPC_WEAK_FUNC(sub_831EB0B8);
PPC_FUNC_IMPL(__imp__sub_831EB0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31704
	ctx.r31.s64 = ctx.r11.s64 + -31704;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831eb0e0
	if (ctx.cr6.eq) goto loc_831EB0E0;
	// bl 0x823fd208
	ctx.lr = 0x831EB0E0;
	sub_823FD208(ctx, base);
loc_831EB0E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_831EB110"))) PPC_WEAK_FUNC(sub_831EB110);
PPC_FUNC_IMPL(__imp__sub_831EB110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31680
	ctx.r31.s64 = ctx.r11.s64 + -31680;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831eb138
	if (ctx.cr6.eq) goto loc_831EB138;
	// bl 0x823fd208
	ctx.lr = 0x831EB138;
	sub_823FD208(ctx, base);
loc_831EB138:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_831EB168"))) PPC_WEAK_FUNC(sub_831EB168);
PPC_FUNC_IMPL(__imp__sub_831EB168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31656
	ctx.r31.s64 = ctx.r11.s64 + -31656;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831eb190
	if (ctx.cr6.eq) goto loc_831EB190;
	// bl 0x823fd208
	ctx.lr = 0x831EB190;
	sub_823FD208(ctx, base);
loc_831EB190:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_831EB1C0"))) PPC_WEAK_FUNC(sub_831EB1C0);
PPC_FUNC_IMPL(__imp__sub_831EB1C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31632
	ctx.r31.s64 = ctx.r11.s64 + -31632;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831eb1e8
	if (ctx.cr6.eq) goto loc_831EB1E8;
	// bl 0x823fd208
	ctx.lr = 0x831EB1E8;
	sub_823FD208(ctx, base);
loc_831EB1E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_831EB218"))) PPC_WEAK_FUNC(sub_831EB218);
PPC_FUNC_IMPL(__imp__sub_831EB218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31608
	ctx.r31.s64 = ctx.r11.s64 + -31608;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831eb240
	if (ctx.cr6.eq) goto loc_831EB240;
	// bl 0x823fd208
	ctx.lr = 0x831EB240;
	sub_823FD208(ctx, base);
loc_831EB240:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_831EB270"))) PPC_WEAK_FUNC(sub_831EB270);
PPC_FUNC_IMPL(__imp__sub_831EB270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31584
	ctx.r31.s64 = ctx.r11.s64 + -31584;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831eb298
	if (ctx.cr6.eq) goto loc_831EB298;
	// bl 0x823fd208
	ctx.lr = 0x831EB298;
	sub_823FD208(ctx, base);
loc_831EB298:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_831EB2C8"))) PPC_WEAK_FUNC(sub_831EB2C8);
PPC_FUNC_IMPL(__imp__sub_831EB2C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31560
	ctx.r31.s64 = ctx.r11.s64 + -31560;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831eb2f0
	if (ctx.cr6.eq) goto loc_831EB2F0;
	// bl 0x823fd208
	ctx.lr = 0x831EB2F0;
	sub_823FD208(ctx, base);
loc_831EB2F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_831EB320"))) PPC_WEAK_FUNC(sub_831EB320);
PPC_FUNC_IMPL(__imp__sub_831EB320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31536
	ctx.r31.s64 = ctx.r11.s64 + -31536;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831eb348
	if (ctx.cr6.eq) goto loc_831EB348;
	// bl 0x823fd208
	ctx.lr = 0x831EB348;
	sub_823FD208(ctx, base);
loc_831EB348:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_831EB378"))) PPC_WEAK_FUNC(sub_831EB378);
PPC_FUNC_IMPL(__imp__sub_831EB378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31512
	ctx.r31.s64 = ctx.r11.s64 + -31512;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831eb3a0
	if (ctx.cr6.eq) goto loc_831EB3A0;
	// bl 0x823fd208
	ctx.lr = 0x831EB3A0;
	sub_823FD208(ctx, base);
loc_831EB3A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_831EB3D0"))) PPC_WEAK_FUNC(sub_831EB3D0);
PPC_FUNC_IMPL(__imp__sub_831EB3D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31488
	ctx.r31.s64 = ctx.r11.s64 + -31488;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831eb3f8
	if (ctx.cr6.eq) goto loc_831EB3F8;
	// bl 0x823fd208
	ctx.lr = 0x831EB3F8;
	sub_823FD208(ctx, base);
loc_831EB3F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_831EB428"))) PPC_WEAK_FUNC(sub_831EB428);
PPC_FUNC_IMPL(__imp__sub_831EB428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31464
	ctx.r31.s64 = ctx.r11.s64 + -31464;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831eb450
	if (ctx.cr6.eq) goto loc_831EB450;
	// bl 0x823fd208
	ctx.lr = 0x831EB450;
	sub_823FD208(ctx, base);
loc_831EB450:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_831EB480"))) PPC_WEAK_FUNC(sub_831EB480);
PPC_FUNC_IMPL(__imp__sub_831EB480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-31408
	ctx.r3.s64 = ctx.r11.s64 + -31408;
	// b 0x8282ea80
	sub_8282EA80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EB490"))) PPC_WEAK_FUNC(sub_831EB490);
PPC_FUNC_IMPL(__imp__sub_831EB490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30896(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30896, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB4A8"))) PPC_WEAK_FUNC(sub_831EB4A8);
PPC_FUNC_IMPL(__imp__sub_831EB4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-29924
	ctx.r3.s64 = ctx.r11.s64 + -29924;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EB4B8"))) PPC_WEAK_FUNC(sub_831EB4B8);
PPC_FUNC_IMPL(__imp__sub_831EB4B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30728(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30728, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB4D0"))) PPC_WEAK_FUNC(sub_831EB4D0);
PPC_FUNC_IMPL(__imp__sub_831EB4D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30144(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30144, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB4E8"))) PPC_WEAK_FUNC(sub_831EB4E8);
PPC_FUNC_IMPL(__imp__sub_831EB4E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30464(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30464, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB500"))) PPC_WEAK_FUNC(sub_831EB500);
PPC_FUNC_IMPL(__imp__sub_831EB500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30316(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30316, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB518"))) PPC_WEAK_FUNC(sub_831EB518);
PPC_FUNC_IMPL(__imp__sub_831EB518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30072(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30072, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB530"))) PPC_WEAK_FUNC(sub_831EB530);
PPC_FUNC_IMPL(__imp__sub_831EB530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-29824(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29824, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB548"))) PPC_WEAK_FUNC(sub_831EB548);
PPC_FUNC_IMPL(__imp__sub_831EB548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30096(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30096, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB560"))) PPC_WEAK_FUNC(sub_831EB560);
PPC_FUNC_IMPL(__imp__sub_831EB560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30488(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30488, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB578"))) PPC_WEAK_FUNC(sub_831EB578);
PPC_FUNC_IMPL(__imp__sub_831EB578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30560(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30560, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB590"))) PPC_WEAK_FUNC(sub_831EB590);
PPC_FUNC_IMPL(__imp__sub_831EB590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30752(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30752, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB5A8"))) PPC_WEAK_FUNC(sub_831EB5A8);
PPC_FUNC_IMPL(__imp__sub_831EB5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30512(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30512, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB5C0"))) PPC_WEAK_FUNC(sub_831EB5C0);
PPC_FUNC_IMPL(__imp__sub_831EB5C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-29776(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29776, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB5D8"))) PPC_WEAK_FUNC(sub_831EB5D8);
PPC_FUNC_IMPL(__imp__sub_831EB5D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30776(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30776, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB5F0"))) PPC_WEAK_FUNC(sub_831EB5F0);
PPC_FUNC_IMPL(__imp__sub_831EB5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-29896(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29896, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB608"))) PPC_WEAK_FUNC(sub_831EB608);
PPC_FUNC_IMPL(__imp__sub_831EB608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30216(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30216, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB620"))) PPC_WEAK_FUNC(sub_831EB620);
PPC_FUNC_IMPL(__imp__sub_831EB620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30632(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30632, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB638"))) PPC_WEAK_FUNC(sub_831EB638);
PPC_FUNC_IMPL(__imp__sub_831EB638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-29848(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29848, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB650"))) PPC_WEAK_FUNC(sub_831EB650);
PPC_FUNC_IMPL(__imp__sub_831EB650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30992(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30992, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB668"))) PPC_WEAK_FUNC(sub_831EB668);
PPC_FUNC_IMPL(__imp__sub_831EB668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30872(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30872, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB680"))) PPC_WEAK_FUNC(sub_831EB680);
PPC_FUNC_IMPL(__imp__sub_831EB680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-29800(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29800, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB698"))) PPC_WEAK_FUNC(sub_831EB698);
PPC_FUNC_IMPL(__imp__sub_831EB698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30920(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30920, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB6B0"))) PPC_WEAK_FUNC(sub_831EB6B0);
PPC_FUNC_IMPL(__imp__sub_831EB6B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30824(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30824, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB6C8"))) PPC_WEAK_FUNC(sub_831EB6C8);
PPC_FUNC_IMPL(__imp__sub_831EB6C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30656(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30656, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB6E0"))) PPC_WEAK_FUNC(sub_831EB6E0);
PPC_FUNC_IMPL(__imp__sub_831EB6E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30440(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30440, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB6F8"))) PPC_WEAK_FUNC(sub_831EB6F8);
PPC_FUNC_IMPL(__imp__sub_831EB6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-29920(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29920, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB710"))) PPC_WEAK_FUNC(sub_831EB710);
PPC_FUNC_IMPL(__imp__sub_831EB710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30048(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30048, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB728"))) PPC_WEAK_FUNC(sub_831EB728);
PPC_FUNC_IMPL(__imp__sub_831EB728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-29996(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29996, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB740"))) PPC_WEAK_FUNC(sub_831EB740);
PPC_FUNC_IMPL(__imp__sub_831EB740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30800(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30800, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB758"))) PPC_WEAK_FUNC(sub_831EB758);
PPC_FUNC_IMPL(__imp__sub_831EB758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-29972(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29972, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB770"))) PPC_WEAK_FUNC(sub_831EB770);
PPC_FUNC_IMPL(__imp__sub_831EB770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31016(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31016, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB788"))) PPC_WEAK_FUNC(sub_831EB788);
PPC_FUNC_IMPL(__imp__sub_831EB788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30364(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30364, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB7A0"))) PPC_WEAK_FUNC(sub_831EB7A0);
PPC_FUNC_IMPL(__imp__sub_831EB7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30244(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30244, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB7B8"))) PPC_WEAK_FUNC(sub_831EB7B8);
PPC_FUNC_IMPL(__imp__sub_831EB7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30680(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30680, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB7D0"))) PPC_WEAK_FUNC(sub_831EB7D0);
PPC_FUNC_IMPL(__imp__sub_831EB7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30020(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30020, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB7E8"))) PPC_WEAK_FUNC(sub_831EB7E8);
PPC_FUNC_IMPL(__imp__sub_831EB7E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30168(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30168, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB800"))) PPC_WEAK_FUNC(sub_831EB800);
PPC_FUNC_IMPL(__imp__sub_831EB800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30388(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30388, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB818"))) PPC_WEAK_FUNC(sub_831EB818);
PPC_FUNC_IMPL(__imp__sub_831EB818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30608(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30608, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB830"))) PPC_WEAK_FUNC(sub_831EB830);
PPC_FUNC_IMPL(__imp__sub_831EB830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30536(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30536, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB848"))) PPC_WEAK_FUNC(sub_831EB848);
PPC_FUNC_IMPL(__imp__sub_831EB848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30416(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30416, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB860"))) PPC_WEAK_FUNC(sub_831EB860);
PPC_FUNC_IMPL(__imp__sub_831EB860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30292(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30292, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB878"))) PPC_WEAK_FUNC(sub_831EB878);
PPC_FUNC_IMPL(__imp__sub_831EB878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31040(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31040, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB890"))) PPC_WEAK_FUNC(sub_831EB890);
PPC_FUNC_IMPL(__imp__sub_831EB890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-29872(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29872, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB8A8"))) PPC_WEAK_FUNC(sub_831EB8A8);
PPC_FUNC_IMPL(__imp__sub_831EB8A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30340(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30340, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB8C0"))) PPC_WEAK_FUNC(sub_831EB8C0);
PPC_FUNC_IMPL(__imp__sub_831EB8C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30268(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30268, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB8D8"))) PPC_WEAK_FUNC(sub_831EB8D8);
PPC_FUNC_IMPL(__imp__sub_831EB8D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30704(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30704, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB8F0"))) PPC_WEAK_FUNC(sub_831EB8F0);
PPC_FUNC_IMPL(__imp__sub_831EB8F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-29948(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29948, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB908"))) PPC_WEAK_FUNC(sub_831EB908);
PPC_FUNC_IMPL(__imp__sub_831EB908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30584(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30584, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB920"))) PPC_WEAK_FUNC(sub_831EB920);
PPC_FUNC_IMPL(__imp__sub_831EB920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30848(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30848, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB938"))) PPC_WEAK_FUNC(sub_831EB938);
PPC_FUNC_IMPL(__imp__sub_831EB938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30944(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30944, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB950"))) PPC_WEAK_FUNC(sub_831EB950);
PPC_FUNC_IMPL(__imp__sub_831EB950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30968(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30968, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB968"))) PPC_WEAK_FUNC(sub_831EB968);
PPC_FUNC_IMPL(__imp__sub_831EB968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30192(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30192, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB980"))) PPC_WEAK_FUNC(sub_831EB980);
PPC_FUNC_IMPL(__imp__sub_831EB980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-29716
	ctx.r3.s64 = ctx.r11.s64 + -29716;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EB990"))) PPC_WEAK_FUNC(sub_831EB990);
PPC_FUNC_IMPL(__imp__sub_831EB990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-29632(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29632, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB9A8"))) PPC_WEAK_FUNC(sub_831EB9A8);
PPC_FUNC_IMPL(__imp__sub_831EB9A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-29740(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29740, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB9C0"))) PPC_WEAK_FUNC(sub_831EB9C0);
PPC_FUNC_IMPL(__imp__sub_831EB9C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB9C8"))) PPC_WEAK_FUNC(sub_831EB9C8);
PPC_FUNC_IMPL(__imp__sub_831EB9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-29408
	ctx.r3.s64 = ctx.r11.s64 + -29408;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EB9D8"))) PPC_WEAK_FUNC(sub_831EB9D8);
PPC_FUNC_IMPL(__imp__sub_831EB9D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-29216
	ctx.r3.s64 = ctx.r11.s64 + -29216;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EB9E8"))) PPC_WEAK_FUNC(sub_831EB9E8);
PPC_FUNC_IMPL(__imp__sub_831EB9E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-29404
	ctx.r3.s64 = ctx.r11.s64 + -29404;
	// b 0x82cea900
	sub_82CEA900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EB9F8"))) PPC_WEAK_FUNC(sub_831EB9F8);
PPC_FUNC_IMPL(__imp__sub_831EB9F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-29360
	ctx.r3.s64 = ctx.r11.s64 + -29360;
	// b 0x82ceb990
	sub_82CEB990(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBA08"))) PPC_WEAK_FUNC(sub_831EBA08);
PPC_FUNC_IMPL(__imp__sub_831EBA08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EBA10"))) PPC_WEAK_FUNC(sub_831EBA10);
PPC_FUNC_IMPL(__imp__sub_831EBA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-29052
	ctx.r3.s64 = ctx.r11.s64 + -29052;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBA20"))) PPC_WEAK_FUNC(sub_831EBA20);
PPC_FUNC_IMPL(__imp__sub_831EBA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-29088
	ctx.r3.s64 = ctx.r11.s64 + -29088;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411478
	sub_82411478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBA38"))) PPC_WEAK_FUNC(sub_831EBA38);
PPC_FUNC_IMPL(__imp__sub_831EBA38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r31,r11,-8912
	ctx.r31.s64 = ctx.r11.s64 + -8912;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82de7330
	ctx.lr = 0x831EBA58;
	sub_82DE7330(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x82de7330
	ctx.lr = 0x831EBA60;
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

__attribute__((alias("__imp__sub_831EBA78"))) PPC_WEAK_FUNC(sub_831EBA78);
PPC_FUNC_IMPL(__imp__sub_831EBA78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EBA80"))) PPC_WEAK_FUNC(sub_831EBA80);
PPC_FUNC_IMPL(__imp__sub_831EBA80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-27012
	ctx.r3.s64 = ctx.r11.s64 + -27012;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBA90"))) PPC_WEAK_FUNC(sub_831EBA90);
PPC_FUNC_IMPL(__imp__sub_831EBA90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-26888
	ctx.r3.s64 = ctx.r11.s64 + -26888;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBAA0"))) PPC_WEAK_FUNC(sub_831EBAA0);
PPC_FUNC_IMPL(__imp__sub_831EBAA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,-28896
	ctx.r11.s64 = ctx.r11.s64 + -28896;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
loc_831EBAC4:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de7330
	ctx.lr = 0x831EBAD0;
	sub_82DE7330(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x831ebac4
	if (!ctx.cr0.lt) goto loc_831EBAC4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EBAF0"))) PPC_WEAK_FUNC(sub_831EBAF0);
PPC_FUNC_IMPL(__imp__sub_831EBAF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-27016
	ctx.r3.s64 = ctx.r11.s64 + -27016;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBB00"))) PPC_WEAK_FUNC(sub_831EBB00);
PPC_FUNC_IMPL(__imp__sub_831EBB00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-28932
	ctx.r3.s64 = ctx.r11.s64 + -28932;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBB10"))) PPC_WEAK_FUNC(sub_831EBB10);
PPC_FUNC_IMPL(__imp__sub_831EBB10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-28936
	ctx.r3.s64 = ctx.r11.s64 + -28936;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBB20"))) PPC_WEAK_FUNC(sub_831EBB20);
PPC_FUNC_IMPL(__imp__sub_831EBB20) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-26904
	ctx.r31.s64 = ctx.r11.s64 + -26904;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x824bc288
	ctx.lr = 0x831EBB4C;
	sub_824BC288(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823fd208
	ctx.lr = 0x831EBB54;
	sub_823FD208(ctx, base);
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

__attribute__((alias("__imp__sub_831EBB68"))) PPC_WEAK_FUNC(sub_831EBB68);
PPC_FUNC_IMPL(__imp__sub_831EBB68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-28832
	ctx.r3.s64 = ctx.r11.s64 + -28832;
	// b 0x82cfc098
	sub_82CFC098(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBB78"))) PPC_WEAK_FUNC(sub_831EBB78);
PPC_FUNC_IMPL(__imp__sub_831EBB78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-26784
	ctx.r3.s64 = ctx.r11.s64 + -26784;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBB88"))) PPC_WEAK_FUNC(sub_831EBB88);
PPC_FUNC_IMPL(__imp__sub_831EBB88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-26764
	ctx.r3.s64 = ctx.r11.s64 + -26764;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBB98"))) PPC_WEAK_FUNC(sub_831EBB98);
PPC_FUNC_IMPL(__imp__sub_831EBB98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-26432
	ctx.r3.s64 = ctx.r11.s64 + -26432;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBBA8"))) PPC_WEAK_FUNC(sub_831EBBA8);
PPC_FUNC_IMPL(__imp__sub_831EBBA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-26288
	ctx.r3.s64 = ctx.r11.s64 + -26288;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBBB8"))) PPC_WEAK_FUNC(sub_831EBBB8);
PPC_FUNC_IMPL(__imp__sub_831EBBB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// addi r3,r31,-26512
	ctx.r3.s64 = ctx.r31.s64 + -26512;
	// bl 0x82d172f8
	ctx.lr = 0x831EBBD4;
	sub_82D172F8(ctx, base);
	// lwz r3,-26512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26512);
	// bl 0x823fd208
	ctx.lr = 0x831EBBDC;
	sub_823FD208(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EBBF0"))) PPC_WEAK_FUNC(sub_831EBBF0);
PPC_FUNC_IMPL(__imp__sub_831EBBF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-26000
	ctx.r3.s64 = ctx.r11.s64 + -26000;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBC00"))) PPC_WEAK_FUNC(sub_831EBC00);
PPC_FUNC_IMPL(__imp__sub_831EBC00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-25500
	ctx.r3.s64 = ctx.r11.s64 + -25500;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBC10"))) PPC_WEAK_FUNC(sub_831EBC10);
PPC_FUNC_IMPL(__imp__sub_831EBC10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-24328
	ctx.r3.s64 = ctx.r11.s64 + -24328;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBC20"))) PPC_WEAK_FUNC(sub_831EBC20);
PPC_FUNC_IMPL(__imp__sub_831EBC20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EBC28"))) PPC_WEAK_FUNC(sub_831EBC28);
PPC_FUNC_IMPL(__imp__sub_831EBC28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-23996
	ctx.r3.s64 = ctx.r11.s64 + -23996;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBC38"))) PPC_WEAK_FUNC(sub_831EBC38);
PPC_FUNC_IMPL(__imp__sub_831EBC38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-21616
	ctx.r3.s64 = ctx.r11.s64 + -21616;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBC48"))) PPC_WEAK_FUNC(sub_831EBC48);
PPC_FUNC_IMPL(__imp__sub_831EBC48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-21536
	ctx.r3.s64 = ctx.r11.s64 + -21536;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBC58"))) PPC_WEAK_FUNC(sub_831EBC58);
PPC_FUNC_IMPL(__imp__sub_831EBC58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EBC60"))) PPC_WEAK_FUNC(sub_831EBC60);
PPC_FUNC_IMPL(__imp__sub_831EBC60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EBC68"))) PPC_WEAK_FUNC(sub_831EBC68);
PPC_FUNC_IMPL(__imp__sub_831EBC68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-21436
	ctx.r3.s64 = ctx.r11.s64 + -21436;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBC78"))) PPC_WEAK_FUNC(sub_831EBC78);
PPC_FUNC_IMPL(__imp__sub_831EBC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-21432
	ctx.r3.s64 = ctx.r11.s64 + -21432;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411478
	sub_82411478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBC90"))) PPC_WEAK_FUNC(sub_831EBC90);
PPC_FUNC_IMPL(__imp__sub_831EBC90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-21328
	ctx.r3.s64 = ctx.r11.s64 + -21328;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBCA0"))) PPC_WEAK_FUNC(sub_831EBCA0);
PPC_FUNC_IMPL(__imp__sub_831EBCA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-21272
	ctx.r3.s64 = ctx.r11.s64 + -21272;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBCB0"))) PPC_WEAK_FUNC(sub_831EBCB0);
PPC_FUNC_IMPL(__imp__sub_831EBCB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-21456
	ctx.r31.s64 = ctx.r11.s64 + -21456;
	// lwz r3,-21456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21456);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831ebcd8
	if (ctx.cr6.eq) goto loc_831EBCD8;
	// bl 0x82a6d828
	ctx.lr = 0x831EBCD8;
	sub_82A6D828(ctx, base);
loc_831EBCD8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_831EBD08"))) PPC_WEAK_FUNC(sub_831EBD08);
PPC_FUNC_IMPL(__imp__sub_831EBD08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-21508
	ctx.r31.s64 = ctx.r11.s64 + -21508;
	// lwz r3,-21508(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21508);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831ebd30
	if (ctx.cr6.eq) goto loc_831EBD30;
	// bl 0x82a6d828
	ctx.lr = 0x831EBD30;
	sub_82A6D828(ctx, base);
loc_831EBD30:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_831EBD60"))) PPC_WEAK_FUNC(sub_831EBD60);
PPC_FUNC_IMPL(__imp__sub_831EBD60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-21100
	ctx.r3.s64 = ctx.r11.s64 + -21100;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBD70"))) PPC_WEAK_FUNC(sub_831EBD70);
PPC_FUNC_IMPL(__imp__sub_831EBD70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-21020
	ctx.r3.s64 = ctx.r11.s64 + -21020;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBD80"))) PPC_WEAK_FUNC(sub_831EBD80);
PPC_FUNC_IMPL(__imp__sub_831EBD80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EBD88"))) PPC_WEAK_FUNC(sub_831EBD88);
PPC_FUNC_IMPL(__imp__sub_831EBD88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EBD90"))) PPC_WEAK_FUNC(sub_831EBD90);
PPC_FUNC_IMPL(__imp__sub_831EBD90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EBD98"))) PPC_WEAK_FUNC(sub_831EBD98);
PPC_FUNC_IMPL(__imp__sub_831EBD98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EBDA0"))) PPC_WEAK_FUNC(sub_831EBDA0);
PPC_FUNC_IMPL(__imp__sub_831EBDA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EBDA8"))) PPC_WEAK_FUNC(sub_831EBDA8);
PPC_FUNC_IMPL(__imp__sub_831EBDA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-20992
	ctx.r3.s64 = ctx.r11.s64 + -20992;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBDB8"))) PPC_WEAK_FUNC(sub_831EBDB8);
PPC_FUNC_IMPL(__imp__sub_831EBDB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-20324
	ctx.r3.s64 = ctx.r11.s64 + -20324;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBDC8"))) PPC_WEAK_FUNC(sub_831EBDC8);
PPC_FUNC_IMPL(__imp__sub_831EBDC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-20484
	ctx.r3.s64 = ctx.r11.s64 + -20484;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBDD8"))) PPC_WEAK_FUNC(sub_831EBDD8);
PPC_FUNC_IMPL(__imp__sub_831EBDD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-20272
	ctx.r3.s64 = ctx.r11.s64 + -20272;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBDE8"))) PPC_WEAK_FUNC(sub_831EBDE8);
PPC_FUNC_IMPL(__imp__sub_831EBDE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-20424
	ctx.r3.s64 = ctx.r11.s64 + -20424;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBDF8"))) PPC_WEAK_FUNC(sub_831EBDF8);
PPC_FUNC_IMPL(__imp__sub_831EBDF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-20372
	ctx.r3.s64 = ctx.r11.s64 + -20372;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBE08"))) PPC_WEAK_FUNC(sub_831EBE08);
PPC_FUNC_IMPL(__imp__sub_831EBE08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-21120
	ctx.r31.s64 = ctx.r11.s64 + -21120;
	// lwz r3,-21120(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831ebe30
	if (ctx.cr6.eq) goto loc_831EBE30;
	// bl 0x82a6d828
	ctx.lr = 0x831EBE30;
	sub_82A6D828(ctx, base);
loc_831EBE30:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_831EBE60"))) PPC_WEAK_FUNC(sub_831EBE60);
PPC_FUNC_IMPL(__imp__sub_831EBE60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-21040
	ctx.r31.s64 = ctx.r11.s64 + -21040;
	// lwz r3,-21040(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21040);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831ebe88
	if (ctx.cr6.eq) goto loc_831EBE88;
	// bl 0x82a6d828
	ctx.lr = 0x831EBE88;
	sub_82A6D828(ctx, base);
loc_831EBE88:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_831EBEB8"))) PPC_WEAK_FUNC(sub_831EBEB8);
PPC_FUNC_IMPL(__imp__sub_831EBEB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-20016
	ctx.r3.s64 = ctx.r11.s64 + -20016;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBEC8"))) PPC_WEAK_FUNC(sub_831EBEC8);
PPC_FUNC_IMPL(__imp__sub_831EBEC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EBED0"))) PPC_WEAK_FUNC(sub_831EBED0);
PPC_FUNC_IMPL(__imp__sub_831EBED0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EBED8"))) PPC_WEAK_FUNC(sub_831EBED8);
PPC_FUNC_IMPL(__imp__sub_831EBED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-20092
	ctx.r3.s64 = ctx.r11.s64 + -20092;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBEE8"))) PPC_WEAK_FUNC(sub_831EBEE8);
PPC_FUNC_IMPL(__imp__sub_831EBEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-19932
	ctx.r3.s64 = ctx.r11.s64 + -19932;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBEF8"))) PPC_WEAK_FUNC(sub_831EBEF8);
PPC_FUNC_IMPL(__imp__sub_831EBEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-19980
	ctx.r3.s64 = ctx.r11.s64 + -19980;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBF08"))) PPC_WEAK_FUNC(sub_831EBF08);
PPC_FUNC_IMPL(__imp__sub_831EBF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-20112
	ctx.r31.s64 = ctx.r11.s64 + -20112;
	// lwz r3,-20112(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831ebf30
	if (ctx.cr6.eq) goto loc_831EBF30;
	// bl 0x82a6d828
	ctx.lr = 0x831EBF30;
	sub_82A6D828(ctx, base);
loc_831EBF30:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_831EBF60"))) PPC_WEAK_FUNC(sub_831EBF60);
PPC_FUNC_IMPL(__imp__sub_831EBF60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-19628
	ctx.r3.s64 = ctx.r11.s64 + -19628;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBF70"))) PPC_WEAK_FUNC(sub_831EBF70);
PPC_FUNC_IMPL(__imp__sub_831EBF70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-19660
	ctx.r3.s64 = ctx.r11.s64 + -19660;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBF80"))) PPC_WEAK_FUNC(sub_831EBF80);
PPC_FUNC_IMPL(__imp__sub_831EBF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-19740
	ctx.r3.s64 = ctx.r11.s64 + -19740;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBF90"))) PPC_WEAK_FUNC(sub_831EBF90);
PPC_FUNC_IMPL(__imp__sub_831EBF90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EBF98"))) PPC_WEAK_FUNC(sub_831EBF98);
PPC_FUNC_IMPL(__imp__sub_831EBF98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EBFA0"))) PPC_WEAK_FUNC(sub_831EBFA0);
PPC_FUNC_IMPL(__imp__sub_831EBFA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EBFA8"))) PPC_WEAK_FUNC(sub_831EBFA8);
PPC_FUNC_IMPL(__imp__sub_831EBFA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-19632
	ctx.r3.s64 = ctx.r11.s64 + -19632;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBFB8"))) PPC_WEAK_FUNC(sub_831EBFB8);
PPC_FUNC_IMPL(__imp__sub_831EBFB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-19664
	ctx.r3.s64 = ctx.r11.s64 + -19664;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBFC8"))) PPC_WEAK_FUNC(sub_831EBFC8);
PPC_FUNC_IMPL(__imp__sub_831EBFC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,-19696
	ctx.r11.s64 = ctx.r11.s64 + -19696;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
loc_831EBFEC:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de7330
	ctx.lr = 0x831EBFF8;
	sub_82DE7330(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x831ebfec
	if (!ctx.cr0.lt) goto loc_831EBFEC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EC018"))) PPC_WEAK_FUNC(sub_831EC018);
PPC_FUNC_IMPL(__imp__sub_831EC018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r31,r11,-56
	ctx.r31.s64 = ctx.r11.s64 + -56;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82c00e48
	ctx.lr = 0x831EC038;
	sub_82C00E48(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82de7330
	ctx.lr = 0x831EC040;
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

__attribute__((alias("__imp__sub_831EC058"))) PPC_WEAK_FUNC(sub_831EC058);
PPC_FUNC_IMPL(__imp__sub_831EC058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411478
	sub_82411478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC070"))) PPC_WEAK_FUNC(sub_831EC070);
PPC_FUNC_IMPL(__imp__sub_831EC070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-19524
	ctx.r3.s64 = ctx.r11.s64 + -19524;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC080"))) PPC_WEAK_FUNC(sub_831EC080);
PPC_FUNC_IMPL(__imp__sub_831EC080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-19760
	ctx.r31.s64 = ctx.r11.s64 + -19760;
	// lwz r3,-19760(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19760);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831ec0a8
	if (ctx.cr6.eq) goto loc_831EC0A8;
	// bl 0x82a6d828
	ctx.lr = 0x831EC0A8;
	sub_82A6D828(ctx, base);
loc_831EC0A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_831EC0D8"))) PPC_WEAK_FUNC(sub_831EC0D8);
PPC_FUNC_IMPL(__imp__sub_831EC0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-19468
	ctx.r3.s64 = ctx.r11.s64 + -19468;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC0E8"))) PPC_WEAK_FUNC(sub_831EC0E8);
PPC_FUNC_IMPL(__imp__sub_831EC0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-19324
	ctx.r3.s64 = ctx.r11.s64 + -19324;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC0F8"))) PPC_WEAK_FUNC(sub_831EC0F8);
PPC_FUNC_IMPL(__imp__sub_831EC0F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EC100"))) PPC_WEAK_FUNC(sub_831EC100);
PPC_FUNC_IMPL(__imp__sub_831EC100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-19328
	ctx.r3.s64 = ctx.r11.s64 + -19328;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC110"))) PPC_WEAK_FUNC(sub_831EC110);
PPC_FUNC_IMPL(__imp__sub_831EC110) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EC118"))) PPC_WEAK_FUNC(sub_831EC118);
PPC_FUNC_IMPL(__imp__sub_831EC118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-18824
	ctx.r3.s64 = ctx.r11.s64 + -18824;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC128"))) PPC_WEAK_FUNC(sub_831EC128);
PPC_FUNC_IMPL(__imp__sub_831EC128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r11,r11,11716
	ctx.r11.s64 = ctx.r11.s64 + 11716;
	// addi r31,r11,44
	ctx.r31.s64 = ctx.r11.s64 + 44;
loc_831EC14C:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de7330
	ctx.lr = 0x831EC158;
	sub_82DE7330(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x831ec14c
	if (!ctx.cr0.lt) goto loc_831EC14C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EC178"))) PPC_WEAK_FUNC(sub_831EC178);
PPC_FUNC_IMPL(__imp__sub_831EC178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r11,r11,11752
	ctx.r11.s64 = ctx.r11.s64 + 11752;
	// addi r31,r11,68
	ctx.r31.s64 = ctx.r11.s64 + 68;
loc_831EC19C:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de7330
	ctx.lr = 0x831EC1A8;
	sub_82DE7330(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x831ec19c
	if (!ctx.cr0.lt) goto loc_831EC19C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EC1C8"))) PPC_WEAK_FUNC(sub_831EC1C8);
PPC_FUNC_IMPL(__imp__sub_831EC1C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r11,r11,11812
	ctx.r11.s64 = ctx.r11.s64 + 11812;
	// addi r31,r11,44
	ctx.r31.s64 = ctx.r11.s64 + 44;
loc_831EC1EC:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de7330
	ctx.lr = 0x831EC1F8;
	sub_82DE7330(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x831ec1ec
	if (!ctx.cr0.lt) goto loc_831EC1EC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EC218"))) PPC_WEAK_FUNC(sub_831EC218);
PPC_FUNC_IMPL(__imp__sub_831EC218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,11864
	ctx.r11.s64 = ctx.r11.s64 + 11864;
	// addi r31,r11,20
	ctx.r31.s64 = ctx.r11.s64 + 20;
loc_831EC23C:
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de7330
	ctx.lr = 0x831EC248;
	sub_82DE7330(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x831ec23c
	if (!ctx.cr0.lt) goto loc_831EC23C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EC268"))) PPC_WEAK_FUNC(sub_831EC268);
PPC_FUNC_IMPL(__imp__sub_831EC268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-18828
	ctx.r3.s64 = ctx.r11.s64 + -18828;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC278"))) PPC_WEAK_FUNC(sub_831EC278);
PPC_FUNC_IMPL(__imp__sub_831EC278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-18872
	ctx.r3.s64 = ctx.r11.s64 + -18872;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC288"))) PPC_WEAK_FUNC(sub_831EC288);
PPC_FUNC_IMPL(__imp__sub_831EC288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-18832
	ctx.r3.s64 = ctx.r11.s64 + -18832;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC298"))) PPC_WEAK_FUNC(sub_831EC298);
PPC_FUNC_IMPL(__imp__sub_831EC298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r30,19
	ctx.r30.s64 = 19;
	// addi r11,r11,11016
	ctx.r11.s64 = ctx.r11.s64 + 11016;
	// addi r31,r11,668
	ctx.r31.s64 = ctx.r11.s64 + 668;
loc_831EC2BC:
	// addi r31,r31,-32
	ctx.r31.s64 = ctx.r31.s64 + -32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de7330
	ctx.lr = 0x831EC2C8;
	sub_82DE7330(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x831ec2bc
	if (!ctx.cr0.lt) goto loc_831EC2BC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EC2E8"))) PPC_WEAK_FUNC(sub_831EC2E8);
PPC_FUNC_IMPL(__imp__sub_831EC2E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r11,r11,11656
	ctx.r11.s64 = ctx.r11.s64 + 11656;
	// addi r31,r11,68
	ctx.r31.s64 = ctx.r11.s64 + 68;
loc_831EC30C:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de7330
	ctx.lr = 0x831EC318;
	sub_82DE7330(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x831ec30c
	if (!ctx.cr0.lt) goto loc_831EC30C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EC338"))) PPC_WEAK_FUNC(sub_831EC338);
PPC_FUNC_IMPL(__imp__sub_831EC338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,11848
	ctx.r11.s64 = ctx.r11.s64 + 11848;
	// addi r31,r11,20
	ctx.r31.s64 = ctx.r11.s64 + 20;
loc_831EC35C:
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de7330
	ctx.lr = 0x831EC368;
	sub_82DE7330(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x831ec35c
	if (!ctx.cr0.lt) goto loc_831EC35C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EC388"))) PPC_WEAK_FUNC(sub_831EC388);
PPC_FUNC_IMPL(__imp__sub_831EC388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// addi r3,r31,-18896
	ctx.r3.s64 = ctx.r31.s64 + -18896;
	// bl 0x828d37c8
	ctx.lr = 0x831EC3A4;
	sub_828D37C8(ctx, base);
	// lwz r3,-18896(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18896);
	// bl 0x823fd208
	ctx.lr = 0x831EC3AC;
	sub_823FD208(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-18896(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18896, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EC3C8"))) PPC_WEAK_FUNC(sub_831EC3C8);
PPC_FUNC_IMPL(__imp__sub_831EC3C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-18684
	ctx.r3.s64 = ctx.r11.s64 + -18684;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC3D8"))) PPC_WEAK_FUNC(sub_831EC3D8);
PPC_FUNC_IMPL(__imp__sub_831EC3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-18304
	ctx.r3.s64 = ctx.r11.s64 + -18304;
	// b 0x82c2b610
	sub_82C2B610(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC3E8"))) PPC_WEAK_FUNC(sub_831EC3E8);
PPC_FUNC_IMPL(__imp__sub_831EC3E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EC3F0"))) PPC_WEAK_FUNC(sub_831EC3F0);
PPC_FUNC_IMPL(__imp__sub_831EC3F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EC3F8"))) PPC_WEAK_FUNC(sub_831EC3F8);
PPC_FUNC_IMPL(__imp__sub_831EC3F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EC400"))) PPC_WEAK_FUNC(sub_831EC400);
PPC_FUNC_IMPL(__imp__sub_831EC400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-18272
	ctx.r3.s64 = ctx.r11.s64 + -18272;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC410"))) PPC_WEAK_FUNC(sub_831EC410);
PPC_FUNC_IMPL(__imp__sub_831EC410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-18048
	ctx.r3.s64 = ctx.r11.s64 + -18048;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC420"))) PPC_WEAK_FUNC(sub_831EC420);
PPC_FUNC_IMPL(__imp__sub_831EC420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-18100
	ctx.r3.s64 = ctx.r11.s64 + -18100;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC430"))) PPC_WEAK_FUNC(sub_831EC430);
PPC_FUNC_IMPL(__imp__sub_831EC430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r30,9
	ctx.r30.s64 = 9;
	// addi r11,r11,-18496
	ctx.r11.s64 = ctx.r11.s64 + -18496;
	// addi r31,r11,164
	ctx.r31.s64 = ctx.r11.s64 + 164;
loc_831EC454:
	// lwzu r6,-16(r31)
	ea = -16 + ctx.r31.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82dd0758
	ctx.lr = 0x831EC468;
	sub_82DD0758(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823fd208
	ctx.lr = 0x831EC470;
	sub_823FD208(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x831ec454
	if (!ctx.cr0.lt) goto loc_831EC454;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EC490"))) PPC_WEAK_FUNC(sub_831EC490);
PPC_FUNC_IMPL(__imp__sub_831EC490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r11,r11,-18576
	ctx.r11.s64 = ctx.r11.s64 + -18576;
	// addi r31,r11,84
	ctx.r31.s64 = ctx.r11.s64 + 84;
loc_831EC4B4:
	// lwzu r6,-16(r31)
	ea = -16 + ctx.r31.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82dd0758
	ctx.lr = 0x831EC4C8;
	sub_82DD0758(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823fd208
	ctx.lr = 0x831EC4D0;
	sub_823FD208(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x831ec4b4
	if (!ctx.cr0.lt) goto loc_831EC4B4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EC4F0"))) PPC_WEAK_FUNC(sub_831EC4F0);
PPC_FUNC_IMPL(__imp__sub_831EC4F0) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-18288
	ctx.r31.s64 = ctx.r11.s64 + -18288;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82dd0758
	ctx.lr = 0x831EC51C;
	sub_82DD0758(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823fd208
	ctx.lr = 0x831EC524;
	sub_823FD208(ctx, base);
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

__attribute__((alias("__imp__sub_831EC538"))) PPC_WEAK_FUNC(sub_831EC538);
PPC_FUNC_IMPL(__imp__sub_831EC538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-18268
	ctx.r31.s64 = ctx.r11.s64 + -18268;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82d186d8
	ctx.lr = 0x831EC558;
	sub_82D186D8(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82d186d8
	ctx.lr = 0x831EC560;
	sub_82D186D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EC578"))) PPC_WEAK_FUNC(sub_831EC578);
PPC_FUNC_IMPL(__imp__sub_831EC578) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EC580"))) PPC_WEAK_FUNC(sub_831EC580);
PPC_FUNC_IMPL(__imp__sub_831EC580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-17856
	ctx.r3.s64 = ctx.r11.s64 + -17856;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC590"))) PPC_WEAK_FUNC(sub_831EC590);
PPC_FUNC_IMPL(__imp__sub_831EC590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-17744
	ctx.r3.s64 = ctx.r11.s64 + -17744;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411478
	sub_82411478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC5A8"))) PPC_WEAK_FUNC(sub_831EC5A8);
PPC_FUNC_IMPL(__imp__sub_831EC5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-17568
	ctx.r3.s64 = ctx.r11.s64 + -17568;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC5B8"))) PPC_WEAK_FUNC(sub_831EC5B8);
PPC_FUNC_IMPL(__imp__sub_831EC5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-17540
	ctx.r3.s64 = ctx.r11.s64 + -17540;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC5C8"))) PPC_WEAK_FUNC(sub_831EC5C8);
PPC_FUNC_IMPL(__imp__sub_831EC5C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-17644
	ctx.r3.s64 = ctx.r11.s64 + -17644;
	// b 0x82c00e48
	sub_82C00E48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC5D8"))) PPC_WEAK_FUNC(sub_831EC5D8);
PPC_FUNC_IMPL(__imp__sub_831EC5D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-17512
	ctx.r3.s64 = ctx.r11.s64 + -17512;
	// b 0x82c00f48
	sub_82C00F48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC5E8"))) PPC_WEAK_FUNC(sub_831EC5E8);
PPC_FUNC_IMPL(__imp__sub_831EC5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-17636
	ctx.r3.s64 = ctx.r11.s64 + -17636;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC5F8"))) PPC_WEAK_FUNC(sub_831EC5F8);
PPC_FUNC_IMPL(__imp__sub_831EC5F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lwz r3,-17640(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17640);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831ec624
	if (ctx.cr6.eq) goto loc_831EC624;
	// bl 0x82a65bd8
	ctx.lr = 0x831EC61C;
	sub_82A65BD8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-17640(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17640, ctx.r11.u32);
loc_831EC624:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EC638"))) PPC_WEAK_FUNC(sub_831EC638);
PPC_FUNC_IMPL(__imp__sub_831EC638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x831EC640;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r30,125
	ctx.r30.s64 = 125;
	// addi r11,r11,-17280
	ctx.r11.s64 = ctx.r11.s64 + -17280;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,2016
	ctx.r31.s64 = ctx.r11.s64 + 2016;
loc_831EC658:
	// lwzu r3,-16(r31)
	ea = -16 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831ec668
	if (ctx.cr6.eq) goto loc_831EC668;
	// bl 0x823fd208
	ctx.lr = 0x831EC668;
	sub_823FD208(ctx, base);
loc_831EC668:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// bge 0x831ec658
	if (!ctx.cr0.lt) goto loc_831EC658;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC688"))) PPC_WEAK_FUNC(sub_831EC688);
PPC_FUNC_IMPL(__imp__sub_831EC688) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-17600
	ctx.r31.s64 = ctx.r11.s64 + -17600;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d9c2d8
	ctx.lr = 0x831EC6B4;
	sub_82D9C2D8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823fd208
	ctx.lr = 0x831EC6BC;
	sub_823FD208(ctx, base);
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

__attribute__((alias("__imp__sub_831EC6D0"))) PPC_WEAK_FUNC(sub_831EC6D0);
PPC_FUNC_IMPL(__imp__sub_831EC6D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-15248
	ctx.r3.s64 = ctx.r11.s64 + -15248;
	// b 0x82d878e0
	sub_82D878E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC6E0"))) PPC_WEAK_FUNC(sub_831EC6E0);
PPC_FUNC_IMPL(__imp__sub_831EC6E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,-17328
	ctx.r11.s64 = ctx.r11.s64 + -17328;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
loc_831EC704:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d641c0
	ctx.lr = 0x831EC710;
	sub_82D641C0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x831ec704
	if (!ctx.cr0.lt) goto loc_831EC704;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EC730"))) PPC_WEAK_FUNC(sub_831EC730);
PPC_FUNC_IMPL(__imp__sub_831EC730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-14976
	ctx.r3.s64 = ctx.r11.s64 + -14976;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC740"))) PPC_WEAK_FUNC(sub_831EC740);
PPC_FUNC_IMPL(__imp__sub_831EC740) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EC748"))) PPC_WEAK_FUNC(sub_831EC748);
PPC_FUNC_IMPL(__imp__sub_831EC748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-14784
	ctx.r3.s64 = ctx.r11.s64 + -14784;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC758"))) PPC_WEAK_FUNC(sub_831EC758);
PPC_FUNC_IMPL(__imp__sub_831EC758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-14676
	ctx.r3.s64 = ctx.r11.s64 + -14676;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC768"))) PPC_WEAK_FUNC(sub_831EC768);
PPC_FUNC_IMPL(__imp__sub_831EC768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-11420
	ctx.r3.s64 = ctx.r11.s64 + -11420;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC778"))) PPC_WEAK_FUNC(sub_831EC778);
PPC_FUNC_IMPL(__imp__sub_831EC778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-11264
	ctx.r3.s64 = ctx.r11.s64 + -11264;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC788"))) PPC_WEAK_FUNC(sub_831EC788);
PPC_FUNC_IMPL(__imp__sub_831EC788) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EC790"))) PPC_WEAK_FUNC(sub_831EC790);
PPC_FUNC_IMPL(__imp__sub_831EC790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-13712
	ctx.r3.s64 = ctx.r11.s64 + -13712;
	// b 0x82df5d20
	sub_82DF5D20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC7A0"))) PPC_WEAK_FUNC(sub_831EC7A0);
PPC_FUNC_IMPL(__imp__sub_831EC7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-11088
	ctx.r3.s64 = ctx.r11.s64 + -11088;
	// b 0x82df7680
	sub_82DF7680(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC7B0"))) PPC_WEAK_FUNC(sub_831EC7B0);
PPC_FUNC_IMPL(__imp__sub_831EC7B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EC7B8"))) PPC_WEAK_FUNC(sub_831EC7B8);
PPC_FUNC_IMPL(__imp__sub_831EC7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-11376
	ctx.r3.s64 = ctx.r11.s64 + -11376;
	// b 0x82df8a88
	sub_82DF8A88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC7C8"))) PPC_WEAK_FUNC(sub_831EC7C8);
PPC_FUNC_IMPL(__imp__sub_831EC7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r11,r11,-11040
	ctx.r11.s64 = ctx.r11.s64 + -11040;
	// addi r31,r11,84
	ctx.r31.s64 = ctx.r11.s64 + 84;
loc_831EC7EC:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82df80c8
	ctx.lr = 0x831EC7F8;
	sub_82DF80C8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x831ec7ec
	if (!ctx.cr0.lt) goto loc_831EC7EC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EC818"))) PPC_WEAK_FUNC(sub_831EC818);
PPC_FUNC_IMPL(__imp__sub_831EC818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-11688
	ctx.r3.s64 = ctx.r11.s64 + -11688;
	// b 0x82dfba78
	sub_82DFBA78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC828"))) PPC_WEAK_FUNC(sub_831EC828);
PPC_FUNC_IMPL(__imp__sub_831EC828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-11236
	ctx.r3.s64 = ctx.r11.s64 + -11236;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC838"))) PPC_WEAK_FUNC(sub_831EC838);
PPC_FUNC_IMPL(__imp__sub_831EC838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11716
	ctx.r3.s64 = ctx.r11.s64 + -11716;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411478
	sub_82411478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC850"))) PPC_WEAK_FUNC(sub_831EC850);
PPC_FUNC_IMPL(__imp__sub_831EC850) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EC858"))) PPC_WEAK_FUNC(sub_831EC858);
PPC_FUNC_IMPL(__imp__sub_831EC858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,13792
	ctx.r3.s64 = ctx.r11.s64 + 13792;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC868"))) PPC_WEAK_FUNC(sub_831EC868);
PPC_FUNC_IMPL(__imp__sub_831EC868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,13952
	ctx.r3.s64 = ctx.r11.s64 + 13952;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC878"))) PPC_WEAK_FUNC(sub_831EC878);
PPC_FUNC_IMPL(__imp__sub_831EC878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,13904
	ctx.r3.s64 = ctx.r11.s64 + 13904;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC888"))) PPC_WEAK_FUNC(sub_831EC888);
PPC_FUNC_IMPL(__imp__sub_831EC888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,13984
	ctx.r3.s64 = ctx.r11.s64 + 13984;
	// b 0x82c00e48
	sub_82C00E48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC898"))) PPC_WEAK_FUNC(sub_831EC898);
PPC_FUNC_IMPL(__imp__sub_831EC898) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EC8A0"))) PPC_WEAK_FUNC(sub_831EC8A0);
PPC_FUNC_IMPL(__imp__sub_831EC8A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EC8A8"))) PPC_WEAK_FUNC(sub_831EC8A8);
PPC_FUNC_IMPL(__imp__sub_831EC8A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EC8B0"))) PPC_WEAK_FUNC(sub_831EC8B0);
PPC_FUNC_IMPL(__imp__sub_831EC8B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EC8B8"))) PPC_WEAK_FUNC(sub_831EC8B8);
PPC_FUNC_IMPL(__imp__sub_831EC8B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EC8C0"))) PPC_WEAK_FUNC(sub_831EC8C0);
PPC_FUNC_IMPL(__imp__sub_831EC8C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EC8C8"))) PPC_WEAK_FUNC(sub_831EC8C8);
PPC_FUNC_IMPL(__imp__sub_831EC8C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,13820
	ctx.r3.s64 = ctx.r11.s64 + 13820;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC8D8"))) PPC_WEAK_FUNC(sub_831EC8D8);
PPC_FUNC_IMPL(__imp__sub_831EC8D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,14104
	ctx.r3.s64 = ctx.r11.s64 + 14104;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC8E8"))) PPC_WEAK_FUNC(sub_831EC8E8);
PPC_FUNC_IMPL(__imp__sub_831EC8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,14156
	ctx.r3.s64 = ctx.r11.s64 + 14156;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC8F8"))) PPC_WEAK_FUNC(sub_831EC8F8);
PPC_FUNC_IMPL(__imp__sub_831EC8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,14208
	ctx.r3.s64 = ctx.r11.s64 + 14208;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC908"))) PPC_WEAK_FUNC(sub_831EC908);
PPC_FUNC_IMPL(__imp__sub_831EC908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,14056
	ctx.r3.s64 = ctx.r11.s64 + 14056;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC918"))) PPC_WEAK_FUNC(sub_831EC918);
PPC_FUNC_IMPL(__imp__sub_831EC918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,13996
	ctx.r3.s64 = ctx.r11.s64 + 13996;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC928"))) PPC_WEAK_FUNC(sub_831EC928);
PPC_FUNC_IMPL(__imp__sub_831EC928) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EC930"))) PPC_WEAK_FUNC(sub_831EC930);
PPC_FUNC_IMPL(__imp__sub_831EC930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,14352
	ctx.r3.s64 = ctx.r11.s64 + 14352;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC940"))) PPC_WEAK_FUNC(sub_831EC940);
PPC_FUNC_IMPL(__imp__sub_831EC940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,14360
	ctx.r3.s64 = ctx.r11.s64 + 14360;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC950"))) PPC_WEAK_FUNC(sub_831EC950);
PPC_FUNC_IMPL(__imp__sub_831EC950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,14408
	ctx.r3.s64 = ctx.r11.s64 + 14408;
	// b 0x82da74b0
	sub_82DA74B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC960"))) PPC_WEAK_FUNC(sub_831EC960);
PPC_FUNC_IMPL(__imp__sub_831EC960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,14528
	ctx.r3.s64 = ctx.r11.s64 + 14528;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC970"))) PPC_WEAK_FUNC(sub_831EC970);
PPC_FUNC_IMPL(__imp__sub_831EC970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,14656
	ctx.r3.s64 = ctx.r11.s64 + 14656;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC980"))) PPC_WEAK_FUNC(sub_831EC980);
PPC_FUNC_IMPL(__imp__sub_831EC980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,14768
	ctx.r3.s64 = ctx.r11.s64 + 14768;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC990"))) PPC_WEAK_FUNC(sub_831EC990);
PPC_FUNC_IMPL(__imp__sub_831EC990) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EC998"))) PPC_WEAK_FUNC(sub_831EC998);
PPC_FUNC_IMPL(__imp__sub_831EC998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,14960
	ctx.r3.s64 = ctx.r11.s64 + 14960;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC9A8"))) PPC_WEAK_FUNC(sub_831EC9A8);
PPC_FUNC_IMPL(__imp__sub_831EC9A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,14976
	ctx.r3.s64 = ctx.r11.s64 + 14976;
	// b 0x82e57380
	sub_82E57380(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC9B8"))) PPC_WEAK_FUNC(sub_831EC9B8);
PPC_FUNC_IMPL(__imp__sub_831EC9B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EC9C0"))) PPC_WEAK_FUNC(sub_831EC9C0);
PPC_FUNC_IMPL(__imp__sub_831EC9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,18192
	ctx.r3.s64 = ctx.r11.s64 + 18192;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC9D0"))) PPC_WEAK_FUNC(sub_831EC9D0);
PPC_FUNC_IMPL(__imp__sub_831EC9D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,18304
	ctx.r3.s64 = ctx.r11.s64 + 18304;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC9E0"))) PPC_WEAK_FUNC(sub_831EC9E0);
PPC_FUNC_IMPL(__imp__sub_831EC9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,-18584
	ctx.r11.s64 = ctx.r11.s64 + -18584;
	// stw r11,18936(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18936, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EC9F8"))) PPC_WEAK_FUNC(sub_831EC9F8);
PPC_FUNC_IMPL(__imp__sub_831EC9F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831ECA00"))) PPC_WEAK_FUNC(sub_831ECA00);
PPC_FUNC_IMPL(__imp__sub_831ECA00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831ECA08"))) PPC_WEAK_FUNC(sub_831ECA08);
PPC_FUNC_IMPL(__imp__sub_831ECA08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831ECA10"))) PPC_WEAK_FUNC(sub_831ECA10);
PPC_FUNC_IMPL(__imp__sub_831ECA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,18532(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18532, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831ECA28"))) PPC_WEAK_FUNC(sub_831ECA28);
PPC_FUNC_IMPL(__imp__sub_831ECA28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,18708(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18708, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831ECA40"))) PPC_WEAK_FUNC(sub_831ECA40);
PPC_FUNC_IMPL(__imp__sub_831ECA40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,18356(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18356, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831ECA58"))) PPC_WEAK_FUNC(sub_831ECA58);
PPC_FUNC_IMPL(__imp__sub_831ECA58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,18508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18508, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831ECA70"))) PPC_WEAK_FUNC(sub_831ECA70);
PPC_FUNC_IMPL(__imp__sub_831ECA70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,18872(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18872, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831ECA88"))) PPC_WEAK_FUNC(sub_831ECA88);
PPC_FUNC_IMPL(__imp__sub_831ECA88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831ECA90"))) PPC_WEAK_FUNC(sub_831ECA90);
PPC_FUNC_IMPL(__imp__sub_831ECA90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,18764(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18764, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831ECAA8"))) PPC_WEAK_FUNC(sub_831ECAA8);
PPC_FUNC_IMPL(__imp__sub_831ECAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,18484(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18484, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831ECAC0"))) PPC_WEAK_FUNC(sub_831ECAC0);
PPC_FUNC_IMPL(__imp__sub_831ECAC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,18912(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18912, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831ECAD8"))) PPC_WEAK_FUNC(sub_831ECAD8);
PPC_FUNC_IMPL(__imp__sub_831ECAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,18740
	ctx.r3.s64 = ctx.r11.s64 + 18740;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831ECAE8"))) PPC_WEAK_FUNC(sub_831ECAE8);
PPC_FUNC_IMPL(__imp__sub_831ECAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,18944
	ctx.r3.s64 = ctx.r11.s64 + 18944;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411478
	sub_82411478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831ECB00"))) PPC_WEAK_FUNC(sub_831ECB00);
PPC_FUNC_IMPL(__imp__sub_831ECB00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,18788
	ctx.r3.s64 = ctx.r11.s64 + 18788;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831ECB10"))) PPC_WEAK_FUNC(sub_831ECB10);
PPC_FUNC_IMPL(__imp__sub_831ECB10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,18464
	ctx.r31.s64 = ctx.r11.s64 + 18464;
	// lwz r3,18464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18464);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831ecb38
	if (ctx.cr6.eq) goto loc_831ECB38;
	// bl 0x823fd208
	ctx.lr = 0x831ECB38;
	sub_823FD208(ctx, base);
loc_831ECB38:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_831ECB68"))) PPC_WEAK_FUNC(sub_831ECB68);
PPC_FUNC_IMPL(__imp__sub_831ECB68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,18976
	ctx.r3.s64 = ctx.r11.s64 + 18976;
	// b 0x82e67048
	sub_82E67048(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831ECB78"))) PPC_WEAK_FUNC(sub_831ECB78);
PPC_FUNC_IMPL(__imp__sub_831ECB78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,18988
	ctx.r3.s64 = ctx.r11.s64 + 18988;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831ECB88"))) PPC_WEAK_FUNC(sub_831ECB88);
PPC_FUNC_IMPL(__imp__sub_831ECB88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,19052
	ctx.r3.s64 = ctx.r11.s64 + 19052;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831ECB98"))) PPC_WEAK_FUNC(sub_831ECB98);
PPC_FUNC_IMPL(__imp__sub_831ECB98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,18744
	ctx.r3.s64 = ctx.r11.s64 + 18744;
	// b 0x82e6ec28
	sub_82E6EC28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831ECBA8"))) PPC_WEAK_FUNC(sub_831ECBA8);
PPC_FUNC_IMPL(__imp__sub_831ECBA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,20920
	ctx.r3.s64 = ctx.r11.s64 + 20920;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831ECBB8"))) PPC_WEAK_FUNC(sub_831ECBB8);
PPC_FUNC_IMPL(__imp__sub_831ECBB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831ECBC0"))) PPC_WEAK_FUNC(sub_831ECBC0);
PPC_FUNC_IMPL(__imp__sub_831ECBC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,20756
	ctx.r3.s64 = ctx.r11.s64 + 20756;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831ECBD0"))) PPC_WEAK_FUNC(sub_831ECBD0);
PPC_FUNC_IMPL(__imp__sub_831ECBD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// addi r3,r31,19556
	ctx.r3.s64 = ctx.r31.s64 + 19556;
	// bl 0x82840b88
	ctx.lr = 0x831ECBEC;
	sub_82840B88(ctx, base);
	// lwz r3,19556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19556);
	// bl 0x823fd208
	ctx.lr = 0x831ECBF4;
	sub_823FD208(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831ECC08"))) PPC_WEAK_FUNC(sub_831ECC08);
PPC_FUNC_IMPL(__imp__sub_831ECC08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,20024
	ctx.r31.s64 = ctx.r11.s64 + 20024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e7ba80
	ctx.lr = 0x831ECC28;
	sub_82E7BA80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e7b3a0
	ctx.lr = 0x831ECC30;
	sub_82E7B3A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831ECC48"))) PPC_WEAK_FUNC(sub_831ECC48);
PPC_FUNC_IMPL(__imp__sub_831ECC48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r11,r11,21480
	ctx.r11.s64 = ctx.r11.s64 + 21480;
	// addi r3,r11,576
	ctx.r3.s64 = ctx.r11.s64 + 576;
	// b 0x82ead638
	sub_82EAD638(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831ECC58"))) PPC_WEAK_FUNC(sub_831ECC58);
PPC_FUNC_IMPL(__imp__sub_831ECC58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-6208
	ctx.r3.s64 = ctx.r11.s64 + -6208;
	// b 0x82f2af60
	sub_82F2AF60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831ECC68"))) PPC_WEAK_FUNC(sub_831ECC68);
PPC_FUNC_IMPL(__imp__sub_831ECC68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831ECC70"))) PPC_WEAK_FUNC(sub_831ECC70);
PPC_FUNC_IMPL(__imp__sub_831ECC70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r31,r10,-6016
	ctx.r31.s64 = ctx.r10.s64 + -6016;
	// addi r11,r11,-18628
	ctx.r11.s64 = ctx.r11.s64 + -18628;
	// addi r3,r31,24292
	ctx.r3.s64 = ctx.r31.s64 + 24292;
	// stw r11,-6016(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6016, ctx.r11.u32);
	// bl 0x82fb4ff8
	ctx.lr = 0x831ECC9C;
	sub_82FB4FF8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,-18636
	ctx.r11.s64 = ctx.r11.s64 + -18636;
	// addi r4,r9,-13984
	ctx.r4.s64 = ctx.r9.s64 + -13984;
	// stw r11,23080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23080, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,21952
	ctx.r3.s64 = ctx.r31.s64 + 21952;
	// bl 0x82f8a288
	ctx.lr = 0x831ECCBC;
	sub_82F8A288(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831ECCD0"))) PPC_WEAK_FUNC(sub_831ECCD0);
PPC_FUNC_IMPL(__imp__sub_831ECCD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,20008
	ctx.r3.s64 = ctx.r11.s64 + 20008;
	// b 0x82f8a3c8
	sub_82F8A3C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831ECCE0"))) PPC_WEAK_FUNC(sub_831ECCE0);
PPC_FUNC_IMPL(__imp__sub_831ECCE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,-16624
	ctx.r11.s64 = ctx.r11.s64 + -16624;
	// stw r11,-17568(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17568, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831ECCF8"))) PPC_WEAK_FUNC(sub_831ECCF8);
PPC_FUNC_IMPL(__imp__sub_831ECCF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r3,r11,-28224
	ctx.r3.s64 = ctx.r11.s64 + -28224;
	// b 0x82aaba38
	sub_82AABA38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831ECD08"))) PPC_WEAK_FUNC(sub_831ECD08);
PPC_FUNC_IMPL(__imp__sub_831ECD08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r11,r11,-17508
	ctx.r11.s64 = ctx.r11.s64 + -17508;
	// addi r10,r10,-13140
	ctx.r10.s64 = ctx.r10.s64 + -13140;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
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

__attribute__((alias("__imp__sub_831ECD40"))) PPC_WEAK_FUNC(sub_831ECD40);
PPC_FUNC_IMPL(__imp__sub_831ECD40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r3,r11,-9968
	ctx.r3.s64 = ctx.r11.s64 + -9968;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831ECD50"))) PPC_WEAK_FUNC(sub_831ECD50);
PPC_FUNC_IMPL(__imp__sub_831ECD50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r3,r11,-9792
	ctx.r3.s64 = ctx.r11.s64 + -9792;
	// b 0x82c2b610
	sub_82C2B610(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831ECD60"))) PPC_WEAK_FUNC(sub_831ECD60);
PPC_FUNC_IMPL(__imp__sub_831ECD60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r3,r11,-9944
	ctx.r3.s64 = ctx.r11.s64 + -9944;
	// b 0x82c2b618
	sub_82C2B618(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831ECD70"))) PPC_WEAK_FUNC(sub_831ECD70);
PPC_FUNC_IMPL(__imp__sub_831ECD70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r3,r11,-9924
	ctx.r3.s64 = ctx.r11.s64 + -9924;
	// b 0x82c2b618
	sub_82C2B618(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831ECD80"))) PPC_WEAK_FUNC(sub_831ECD80);
PPC_FUNC_IMPL(__imp__sub_831ECD80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r3,r11,-9776
	ctx.r3.s64 = ctx.r11.s64 + -9776;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831ECD90"))) PPC_WEAK_FUNC(sub_831ECD90);
PPC_FUNC_IMPL(__imp__sub_831ECD90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r3,r11,-9536
	ctx.r3.s64 = ctx.r11.s64 + -9536;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831ECDA0"))) PPC_WEAK_FUNC(sub_831ECDA0);
PPC_FUNC_IMPL(__imp__sub_831ECDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r3,r11,-9408
	ctx.r3.s64 = ctx.r11.s64 + -9408;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831ECDB0"))) PPC_WEAK_FUNC(sub_831ECDB0);
PPC_FUNC_IMPL(__imp__sub_831ECDB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r3,r11,-9296
	ctx.r3.s64 = ctx.r11.s64 + -9296;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831ECDC0"))) PPC_WEAK_FUNC(sub_831ECDC0);
PPC_FUNC_IMPL(__imp__sub_831ECDC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,-16624
	ctx.r11.s64 = ctx.r11.s64 + -16624;
	// stw r11,-4220(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4220, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831ECDD8"))) PPC_WEAK_FUNC(sub_831ECDD8);
PPC_FUNC_IMPL(__imp__sub_831ECDD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r3,r11,-9184
	ctx.r3.s64 = ctx.r11.s64 + -9184;
	// b 0x82aaba38
	sub_82AABA38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831ECDE8"))) PPC_WEAK_FUNC(sub_831ECDE8);
PPC_FUNC_IMPL(__imp__sub_831ECDE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,-16624
	ctx.r11.s64 = ctx.r11.s64 + -16624;
	// stw r11,-4176(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4176, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831ECE00"))) PPC_WEAK_FUNC(sub_831ECE00);
PPC_FUNC_IMPL(__imp__sub_831ECE00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r3,r11,-9168
	ctx.r3.s64 = ctx.r11.s64 + -9168;
	// b 0x83157258
	sub_83157258(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EE800"))) PPC_WEAK_FUNC(sub_831EE800);
PPC_FUNC_IMPL(__imp__sub_831EE800) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_831EE82C:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x831ee82c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831EE82C;
	// li r10,256
	ctx.r10.s64 = 256;
	// li r11,256
	ctx.r11.s64 = 256;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_831EE840:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lbzx r7,r11,r30
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// rlwinm r9,r7,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// srawi r7,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 4;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stwx r6,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r6.u32);
	// lwzx r10,r7,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u32);
	// bdnz 0x831ee840
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831EE840;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// beq cr6,0x831eea90
	if (ctx.cr6.eq) goto loc_831EEA90;
	// cmpwi cr6,r11,511
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 511, ctx.xer);
	// beq cr6,0x831ee8d0
	if (ctx.cr6.eq) goto loc_831EE8D0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82a7d730
	ctx.lr = 0x831EE89C;
	sub_82A7D730(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
loc_831EE8A8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x831ee8d0
	if (!ctx.cr0.eq) goto loc_831EE8D0;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bne 0x831ee8a8
	if (!ctx.cr0.eq) goto loc_831EE8A8;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x831ee8d8
	if (ctx.cr6.eq) goto loc_831EE8D8;
loc_831EE8D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831eea94
	goto loc_831EEA94;
loc_831EE8D8:
	// li r9,15
	ctx.r9.s64 = 15;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_831EE8E8:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x831ee8e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831EE8E8;
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r11,8192
	ctx.r11.s64 = 8192;
loc_831EE900:
	// addi r8,r11,-16
	ctx.r8.s64 = ctx.r11.s64 + -16;
	// srawi r11,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 5;
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// rlwinm. r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831ee934
	if (ctx.cr0.eq) goto loc_831EE934;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// or r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 | ctx.r8.u64;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// sthx r7,r6,r31
	PPC_STORE_U16(ctx.r6.u32 + ctx.r31.u32, ctx.r7.u16);
loc_831EE934:
	// addi r11,r8,-16
	ctx.r11.s64 = ctx.r8.s64 + -16;
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// lbzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// clrlwi. r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x831ee968
	if (ctx.cr0.eq) goto loc_831EE968;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// or r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r10,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
	// sthx r7,r6,r31
	PPC_STORE_U16(ctx.r6.u32 + ctx.r31.u32, ctx.r7.u16);
loc_831EE968:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x831ee900
	if (!ctx.cr6.eq) goto loc_831EE900;
	// li r11,2048
	ctx.r11.s64 = 2048;
	// li r10,2048
	ctx.r10.s64 = 2048;
	// addi r6,r1,204
	ctx.r6.s64 = ctx.r1.s64 + 204;
	// li r7,5
	ctx.r7.s64 = 5;
loc_831EE980:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x831ee9c0
	if (!ctx.cr6.gt) goto loc_831EE9C0;
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r8,-1
	ctx.r3.s64 = ctx.r8.s64 + -1;
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + ctx.r31.u64;
	// rlwinm r9,r3,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_831EE9AC:
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// ori r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 32768;
	// sthu r9,-2(r8)
	ea = -2 + ctx.r8.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x831ee9ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831EE9AC;
loc_831EE9C0:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x831ee9f8
	if (ctx.cr0.lt) goto loc_831EE9F8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r5,r10,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r10.u64;
loc_831EE9EC:
	// lhzu r10,-2(r9)
	ea = -2 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// sthu r10,-2(r8)
	ea = -2 + ctx.r8.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x831ee9ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831EE9EC;
loc_831EE9F8:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// bne 0x831ee980
	if (!ctx.cr0.eq) goto loc_831EE980;
	// li r9,1024
	ctx.r9.s64 = 1024;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x831eea44
	if (!ctx.cr6.gt) goto loc_831EEA44;
	// subf r11,r11,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r11.u64;
	// addi r8,r31,2048
	ctx.r8.s64 = ctx.r31.s64 + 2048;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subfic r9,r11,1024
	ctx.xer.ca = ctx.r11.u32 <= 1024;
	ctx.r9.u64 = static_cast<uint64_t>(1024) - ctx.r11.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_831EEA30:
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// sthu r11,-2(r8)
	ea = -2 + ctx.r8.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x831eea30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831EEA30;
loc_831EEA44:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x831eea90
	if (!ctx.cr6.gt) goto loc_831EEA90;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_831EEA54:
	// lhzu r11,-2(r8)
	ea = -2 + ctx.r8.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r4,r11,28
	ctx.r4.u64 = ctx.r11.u32 & 0xF;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// sraw r11,r6,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r11.s64 = ctx.r6.s32 >> temp.u32;
	// subf r6,r11,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
loc_831EEA78:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// sthu r7,-2(r11)
	ea = -2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r11.u32 = ea;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x831eea78
	if (!ctx.cr6.eq) goto loc_831EEA78;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bgt cr6,0x831eea54
	if (ctx.cr6.gt) goto loc_831EEA54;
loc_831EEA90:
	// li r3,1
	ctx.r3.s64 = 1;
loc_831EEA94:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EEAB0"))) PPC_WEAK_FUNC(sub_831EEAB0);
PPC_FUNC_IMPL(__imp__sub_831EEAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x831EEAB8;
	__savegprlr_29(ctx, base);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r7,28(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r6,16
	ctx.r6.s64 = 16;
	// ori r4,r9,32798
	ctx.r4.u64 = ctx.r9.u64 | 32798;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r31,1
	ctx.r31.s64 = 1;
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lhzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// rotlwi r10,r5,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bge cr6,0x831eed70
	if (!ctx.cr6.lt) goto loc_831EED70;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x831eed70
	if (!ctx.cr6.lt) goto loc_831EED70;
loc_831EEAFC:
	// rlwinm r10,r9,10,22,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x3FF;
	// addi r10,r10,30
	ctx.r10.s64 = ctx.r10.s64 + 30;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_831EEB08:
	// lhax r10,r10,r3
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32));
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x831eeb20
	if (ctx.cr0.lt) goto loc_831EEB20;
	// clrlwi r5,r10,28
	ctx.r5.u64 = ctx.r10.u32 & 0xF;
	// slw r9,r9,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r5.u8 & 0x3F));
	// b 0x831eeb48
	goto loc_831EEB48;
loc_831EEB20:
	// rlwinm r9,r9,10,0,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0xFFFFFC00;
loc_831EEB24:
	// rlwinm r7,r9,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r10,r10,r3
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32));
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x831eeb24
	if (ctx.cr0.lt) goto loc_831EEB24;
	// clrlwi r5,r10,28
	ctx.r5.u64 = ctx.r10.u32 & 0xF;
loc_831EEB48:
	// srawi r7,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 4;
	// subf r10,r5,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r5.u64;
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// mr. r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x831eec14
	if (ctx.cr0.lt) goto loc_831EEC14;
	// addic. r10,r7,-256
	ctx.xer.ca = ctx.r7.u32 > 255;
	ctx.r10.s64 = ctx.r7.s64 + -256;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
loc_831EEB60:
	// blt 0x831eebfc
	if (ctx.cr0.lt) goto loc_831EEBFC;
	// srawi r7,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 4;
	// rlwinm r5,r9,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r8,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r8.u32);
	// extsb r30,r7
	ctx.r30.s64 = ctx.r7.s8;
	// oris r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 2147483648;
	// xori r29,r30,31
	ctx.r29.u64 = ctx.r30.u64 ^ 31;
	// clrlwi r7,r10,28
	ctx.r7.u64 = ctx.r10.u32 & 0xF;
	// subf r6,r30,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r30.u64;
	// srw r10,r5,r29
	ctx.r10.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r29.u8 & 0x3F));
	// slw r9,r9,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r30.u8 & 0x3F));
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// neg r5,r10
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// cmpwi cr6,r7,5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 5, ctx.xer);
	// bgt cr6,0x831eec54
	if (ctx.cr6.gt) goto loc_831EEC54;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x831ef018
	if (ctx.cr6.lt) goto loc_831EF018;
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stb r5,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// lbz r5,1(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r5,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r5.u8);
	// lbz r5,2(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r5,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r5.u8);
	// lbz r5,3(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r5,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r5.u8);
	// lbz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// stb r5,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r5.u8);
	// lbz r5,5(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// stb r5,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r5.u8);
	// lbz r5,6(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// stb r5,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r5.u8);
	// lbz r10,7(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// stb r10,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r10.u8);
	// addi r11,r8,3
	ctx.r11.s64 = ctx.r8.s64 + 3;
	// lwz r8,44(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// b 0x831eed2c
	goto loc_831EED2C;
loc_831EEBFC:
	// rlwinm r7,r9,10,22,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x3FF;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,30
	ctx.r7.s64 = ctx.r7.s64 + 30;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x831eeb08
	goto loc_831EEB08;
loc_831EEC14:
	// lwz r6,28(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x831eeea0
	if (!ctx.cr6.lt) goto loc_831EEEA0;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x831eeea0
	if (!ctx.cr6.lt) goto loc_831EEEA0;
	// neg r6,r10
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// lhz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// addi r30,r10,16
	ctx.r30.s64 = ctx.r10.s64 + 16;
	// addic. r10,r7,-256
	ctx.xer.ca = ctx.r7.u32 > 255;
	ctx.r10.s64 = ctx.r7.s64 + -256;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// extsb r7,r6
	ctx.r7.s64 = ctx.r6.s8;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// slw r7,r5,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r7.u8 & 0x3F));
	// extsb r6,r30
	ctx.r6.s64 = ctx.r30.s8;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// b 0x831eeb60
	goto loc_831EEB60;
loc_831EEC54:
	// cmpwi cr6,r7,15
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 15, ctx.xer);
	// bne cr6,0x831eec84
	if (!ctx.cr6.eq) goto loc_831EEC84;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,15
	ctx.r7.s64 = ctx.r7.s64 + 15;
	// cmpwi cr6,r7,270
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 270, ctx.xer);
	// bne cr6,0x831eec80
	if (!ctx.cr6.eq) goto loc_831EEC80;
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmpwi cr6,r7,270
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 270, ctx.xer);
	// blt cr6,0x831ef018
	if (ctx.cr6.lt) goto loc_831EF018;
loc_831EEC80:
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
loc_831EEC84:
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r8,r7,3
	ctx.r8.s64 = ctx.r7.s64 + 3;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// blt cr6,0x831ef018
	if (ctx.cr6.lt) goto loc_831EF018;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x831eee74
	if (!ctx.cr6.lt) goto loc_831EEE74;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// b 0x831eecfc
	goto loc_831EECFC;
loc_831EECB0:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r8,r8,-8
	ctx.r8.s64 = ctx.r8.s64 + -8;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r7,3(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r7,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r7.u8);
	// lbz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r7,5(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// stb r7,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// lbz r7,6(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r7,7(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stb r7,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r7.u8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_831EECFC:
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bgt cr6,0x831eecb0
	if (ctx.cr6.gt) goto loc_831EECB0;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_831EED08:
	// lbzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x831eed08
	if (!ctx.cr0.eq) goto loc_831EED08;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,44(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x831eef44
	if (!ctx.cr6.lt) goto loc_831EEF44;
loc_831EED2C:
	// extsb. r7,r6
	ctx.r7.s64 = ctx.r6.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge 0x831eeafc
	if (!ctx.cr0.lt) goto loc_831EEAFC;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x831eef4c
	if (!ctx.cr6.lt) goto loc_831EEF4C;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x831eef4c
	if (!ctx.cr6.lt) goto loc_831EEF4C;
	// neg r10,r7
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// lhz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// slw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// b 0x831eeafc
	goto loc_831EEAFC;
loc_831EED70:
	// rlwinm r10,r9,10,22,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x3FF;
	// addi r10,r10,30
	ctx.r10.s64 = ctx.r10.s64 + 30;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r10,r10,r3
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32));
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x831eed94
	if (ctx.cr0.lt) goto loc_831EED94;
	// clrlwi r5,r10,28
	ctx.r5.u64 = ctx.r10.u32 & 0xF;
	// slw r9,r9,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r5.u8 & 0x3F));
	// b 0x831eedbc
	goto loc_831EEDBC;
loc_831EED94:
	// rlwinm r9,r9,10,0,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0xFFFFFC00;
loc_831EED98:
	// rlwinm r7,r9,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r10,r10,r3
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32));
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x831eed98
	if (ctx.cr0.lt) goto loc_831EED98;
	// clrlwi r5,r10,28
	ctx.r5.u64 = ctx.r10.u32 & 0xF;
loc_831EEDBC:
	// srawi r7,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 4;
	// subf r10,r5,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r5.u64;
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// mr. r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x831eeea0
	if (ctx.cr0.lt) goto loc_831EEEA0;
	// addic. r10,r7,-256
	ctx.xer.ca = ctx.r7.u32 > 255;
	ctx.r10.s64 = ctx.r7.s64 + -256;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
loc_831EEDD4:
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt 0x831eee8c
	if (ctx.cr0.lt) goto loc_831EEE8C;
	// bge cr6,0x831eef7c
	if (!ctx.cr6.lt) goto loc_831EEF7C;
	// srawi r7,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 4;
	// stw r8,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r8.u32);
	// rlwinm r5,r9,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// extsb r30,r7
	ctx.r30.s64 = ctx.r7.s8;
	// oris r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 2147483648;
	// xori r29,r30,31
	ctx.r29.u64 = ctx.r30.u64 ^ 31;
	// clrlwi r7,r10,28
	ctx.r7.u64 = ctx.r10.u32 & 0xF;
	// subf r6,r30,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r30.u64;
	// srw r10,r5,r29
	ctx.r10.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r29.u8 & 0x3F));
	// slw r9,r9,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r30.u8 & 0x3F));
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// neg r5,r10
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// cmpwi cr6,r7,15
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 15, ctx.xer);
	// bne cr6,0x831eee5c
	if (!ctx.cr6.eq) goto loc_831EEE5C;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x831ef018
	if (!ctx.cr6.lt) goto loc_831EF018;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,15
	ctx.r7.s64 = ctx.r7.s64 + 15;
	// cmpwi cr6,r7,270
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 270, ctx.xer);
	// bne cr6,0x831eee58
	if (!ctx.cr6.eq) goto loc_831EEE58;
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x831ef018
	if (!ctx.cr6.lt) goto loc_831EF018;
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmpwi cr6,r7,270
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 270, ctx.xer);
	// blt cr6,0x831ef018
	if (ctx.cr6.lt) goto loc_831EF018;
loc_831EEE58:
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
loc_831EEE5C:
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r8,r7,3
	ctx.r8.s64 = ctx.r7.s64 + 3;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// blt cr6,0x831ef018
	if (ctx.cr6.lt) goto loc_831EF018;
loc_831EEE74:
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// ble cr6,0x831eef20
	if (!ctx.cr6.gt) goto loc_831EEF20;
	// subf r9,r11,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r11.u64;
	// b 0x831eefe4
	goto loc_831EEFE4;
loc_831EEE8C:
	// bge cr6,0x831ef008
	if (!ctx.cr6.lt) goto loc_831EF008;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x831eed70
	goto loc_831EED70;
loc_831EEEA0:
	// lwz r6,40(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x831ef018
	if (!ctx.cr6.lt) goto loc_831EF018;
	// neg r6,r10
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// lhz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// addi r30,r10,16
	ctx.r30.s64 = ctx.r10.s64 + 16;
	// addic. r10,r7,-256
	ctx.xer.ca = ctx.r7.u32 > 255;
	ctx.r10.s64 = ctx.r7.s64 + -256;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// extsb r7,r6
	ctx.r7.s64 = ctx.r6.s8;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// slw r7,r5,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r7.u8 & 0x3F));
	// extsb r6,r30
	ctx.r6.s64 = ctx.r30.s8;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// b 0x831eedd4
	goto loc_831EEDD4;
loc_831EEED4:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r8,r8,-8
	ctx.r8.s64 = ctx.r8.s64 + -8;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r7,3(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r7,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r7.u8);
	// lbz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r7,5(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// stb r7,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// lbz r7,6(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbz r7,7(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stb r7,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r7.u8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_831EEF20:
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bgt cr6,0x831eeed4
	if (ctx.cr6.gt) goto loc_831EEED4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_831EEF2C:
	// lbzu r7,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x831eef2c
	if (!ctx.cr0.eq) goto loc_831EEF2C;
	// lwz r8,44(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
loc_831EEF44:
	// extsb. r7,r6
	ctx.r7.s64 = ctx.r6.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge 0x831eed70
	if (!ctx.cr0.lt) goto loc_831EED70;
loc_831EEF4C:
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x831ef018
	if (!ctx.cr6.lt) goto loc_831EF018;
	// neg r10,r7
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// lhz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// slw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// b 0x831eed70
	goto loc_831EED70;
loc_831EEF7C:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x831ef008
	if (!ctx.cr6.eq) goto loc_831EF008;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x831ef008
	if (!ctx.cr6.eq) goto loc_831EF008;
	// stw r31,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r31.u32);
	// b 0x831ef008
	goto loc_831EF008;
loc_831EEF98:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r8,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// lbz r8,3(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// stb r8,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r8.u8);
	// lbz r8,5(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r8,6(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// stb r8,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r8.u8);
	// lbz r8,7(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stb r8,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_831EEFE4:
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// bgt cr6,0x831eef98
	if (ctx.cr6.gt) goto loc_831EEF98;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_831EEFF0:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x831eeff0
	if (!ctx.cr0.eq) goto loc_831EEFF0;
	// lwz r8,44(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
loc_831EF008:
	// stw r8,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r8.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r31,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r31.u32);
	// b 0x831ef020
	goto loc_831EF020;
loc_831EF018:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
loc_831EF020:
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EF028"))) PPC_WEAK_FUNC(sub_831EF028);
PPC_FUNC_IMPL(__imp__sub_831EF028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x831EF030;
	__savegprlr_29(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4528(r1)
	ea = -4528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// subf r31,r11,r10
	ctx.r31.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// ble cr6,0x831ef060
	if (!ctx.cr6.gt) goto loc_831EF060;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
loc_831EF060:
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x831ef180
	if (ctx.cr6.eq) goto loc_831EF180;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x831ef180
	if (ctx.cr6.eq) goto loc_831EF180;
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x831ef178
	if (ctx.cr6.lt) goto loc_831EF178;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x831ef178
	if (ctx.cr6.lt) goto loc_831EF178;
	// cmpwi cr6,r5,261
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 261, ctx.xer);
	// ble cr6,0x831ef178
	if (!ctx.cr6.gt) goto loc_831EF178;
	// cmpwi cr6,r8,261
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 261, ctx.xer);
	// blt cr6,0x831ef178
	if (ctx.cr6.lt) goto loc_831EF178;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x831ef178
	if (ctx.cr6.gt) goto loc_831EF178;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x831ef178
	if (ctx.cr6.lt) goto loc_831EF178;
	// add r11,r29,r8
	ctx.r11.u64 = ctx.r29.u64 + ctx.r8.u64;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// add r10,r4,r30
	ctx.r10.u64 = ctx.r4.u64 + ctx.r30.u64;
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// addi r7,r11,-3
	ctx.r7.s64 = ctx.r11.s64 + -3;
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// subf r6,r4,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r4.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// cmplwi cr6,r6,264
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 264, ctx.xer);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// ble cr6,0x831ef0ec
	if (!ctx.cr6.gt) goto loc_831EF0EC;
	// addi r10,r10,-264
	ctx.r10.s64 = ctx.r10.s64 + -264;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_831EF0EC:
	// subf r10,r3,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r3.u64;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// cmplwi cr6,r10,232
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 232, ctx.xer);
	// ble cr6,0x831ef104
	if (!ctx.cr6.gt) goto loc_831EF104;
	// addi r11,r11,-232
	ctx.r11.s64 = ctx.r11.s64 + -232;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_831EF104:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x831ee800
	ctx.lr = 0x831EF110;
	sub_831EE800(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x831ef178
	if (ctx.cr0.eq) goto loc_831EF178;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r29,256
	ctx.r10.s64 = ctx.r29.s64 + 256;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bl 0x831eeab0
	ctx.lr = 0x831EF134;
	sub_831EEAB0(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x831ef178
	if (ctx.cr6.eq) goto loc_831EF178;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x831ef178
	if (ctx.cr6.gt) goto loc_831EF178;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x831ef178
	if (ctx.cr6.gt) goto loc_831EF178;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x831ef180
	if (!ctx.cr6.eq) goto loc_831EF180;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x831ef180
	if (!ctx.cr6.eq) goto loc_831EF180;
loc_831EF178:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831ef184
	goto loc_831EF184;
loc_831EF180:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_831EF184:
	// addi r1,r1,4528
	ctx.r1.s64 = ctx.r1.s64 + 4528;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EF200"))) PPC_WEAK_FUNC(sub_831EF200);
PPC_FUNC_IMPL(__imp__sub_831EF200) {
	PPC_FUNC_PROLOGUE();
	// rlwinm. r10,r3,0,17,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x6000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// beq 0x831ef210
	if (ctx.cr0.eq) goto loc_831EF210;
	// andi. r3,r11,40959
	ctx.r3.u64 = ctx.r11.u64 & 40959;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
loc_831EF210:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x831ef224
	if (ctx.cr6.lt) goto loc_831EF224;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// ble cr6,0x831ef258
	if (!ctx.cr6.gt) goto loc_831EF258;
loc_831EF224:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x831ef234
	if (ctx.cr6.lt) goto loc_831EF234;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// ble cr6,0x831ef258
	if (!ctx.cr6.gt) goto loc_831EF258;
loc_831EF234:
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// beq cr6,0x831ef258
	if (ctx.cr6.eq) goto loc_831EF258;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// beq cr6,0x831ef258
	if (ctx.cr6.eq) goto loc_831EF258;
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// beq cr6,0x831ef258
	if (ctx.cr6.eq) goto loc_831EF258;
	// lis r3,-32766
	ctx.r3.s64 = -2147352576;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// blr 
	return;
loc_831EF258:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EF260"))) PPC_WEAK_FUNC(sub_831EF260);
PPC_FUNC_IMPL(__imp__sub_831EF260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lhz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// blt cr6,0x831ef384
	if (ctx.cr6.lt) goto loc_831EF384;
	// rlwinm r11,r3,0,19,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFF9FFF;
	// cmpwi cr6,r11,72
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 72, ctx.xer);
	// bne cr6,0x831ef2a8
	if (!ctx.cr6.eq) goto loc_831EF2A8;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831ef2bc
	if (ctx.cr6.eq) goto loc_831EF2BC;
	// bl 0x83133308
	ctx.lr = 0x831EF2A4;
	sub_83133308(ctx, base);
	// b 0x831ef2bc
	goto loc_831EF2BC;
loc_831EF2A8:
	// cmplwi cr6,r30,12
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 12, ctx.xer);
	// blt cr6,0x831ef2bc
	if (ctx.cr6.lt) goto loc_831EF2BC;
	// bl 0x831ef200
	ctx.lr = 0x831EF2B4;
	sub_831EF200(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x831ef390
	if (ctx.cr0.lt) goto loc_831EF390;
loc_831EF2BC:
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// beq cr6,0x831ef37c
	if (ctx.cr6.eq) goto loc_831EF37C;
	// cmpwi cr6,r30,9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 9, ctx.xer);
	// beq cr6,0x831ef35c
	if (ctx.cr6.eq) goto loc_831EF35C;
	// cmpwi cr6,r30,13
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 13, ctx.xer);
	// beq cr6,0x831ef35c
	if (ctx.cr6.eq) goto loc_831EF35C;
	// cmpwi cr6,r30,36
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 36, ctx.xer);
	// beq cr6,0x831ef30c
	if (ctx.cr6.eq) goto loc_831EF30C;
	// cmpwi cr6,r30,72
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 72, ctx.xer);
	// beq cr6,0x831ef35c
	if (ctx.cr6.eq) goto loc_831EF35C;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x831ef384
	if (ctx.cr0.eq) goto loc_831EF384;
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831ef384
	if (!ctx.cr0.eq) goto loc_831EF384;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82f12550
	ctx.lr = 0x831EF300;
	sub_82F12550(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x831ef384
	if (!ctx.cr0.lt) goto loc_831EF384;
	// b 0x831ef390
	goto loc_831EF390;
loc_831EF30C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831ef384
	if (ctx.cr6.eq) goto loc_831EF384;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x831ef334
	if (ctx.cr6.eq) goto loc_831EF334;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831EF334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831EF334:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831EF348;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831ef384
	if (ctx.cr6.eq) goto loc_831EF384;
	// bl 0x83133308
	ctx.lr = 0x831EF358;
	sub_83133308(ctx, base);
	// b 0x831ef384
	goto loc_831EF384;
loc_831EF35C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831ef384
	if (ctx.cr6.eq) goto loc_831EF384;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831EF378;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x831ef384
	goto loc_831EF384;
loc_831EF37C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82ef5e68
	ctx.lr = 0x831EF384;
	sub_82EF5E68(ctx, base);
loc_831EF384:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
loc_831EF390:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EF3A8"))) PPC_WEAK_FUNC(sub_831EF3A8);
PPC_FUNC_IMPL(__imp__sub_831EF3A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x831EF3B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r28,0(r4)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,12
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 12, ctx.xer);
	// blt cr6,0x831ef3dc
	if (ctx.cr6.lt) goto loc_831EF3DC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ef200
	ctx.lr = 0x831EF3D4;
	sub_831EF200(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x831ef594
	if (ctx.cr0.lt) goto loc_831EF594;
loc_831EF3DC:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x831ef590
	if (ctx.cr6.eq) goto loc_831EF590;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ef260
	ctx.lr = 0x831EF3EC;
	sub_831EF260(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x831ef594
	if (ctx.cr0.lt) goto loc_831EF594;
	// rlwinm r11,r29,0,17,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x6000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x831ef418
	if (!ctx.cr6.eq) goto loc_831EF418;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82f12828
	ctx.lr = 0x831EF40C;
	sub_82F12828(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x831ef594
	if (ctx.cr0.lt) goto loc_831EF594;
	// b 0x831ef54c
	goto loc_831EF54C;
loc_831EF418:
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// bne cr6,0x831ef440
	if (!ctx.cr6.eq) goto loc_831EF440;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82ef5f60
	ctx.lr = 0x831EF42C;
	sub_82EF5F60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x831ef594
	if (ctx.cr0.lt) goto loc_831EF594;
	// li r11,8
	ctx.r11.s64 = 8;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// b 0x831ef590
	goto loc_831EF590;
loc_831EF440:
	// rlwinm r11,r29,0,18,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// cmpwi cr6,r11,36
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 36, ctx.xer);
	// bne cr6,0x831ef554
	if (!ctx.cr6.eq) goto loc_831EF554;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831ef470
	if (!ctx.cr6.eq) goto loc_831EF470;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x831ef470
	if (ctx.cr6.eq) goto loc_831EF470;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x831ef594
	goto loc_831EF594;
loc_831EF470:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831ef51c
	if (ctx.cr6.eq) goto loc_831EF51C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831ef51c
	if (ctx.cr6.eq) goto loc_831EF51C;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm. r10,r10,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831ef520
	if (!ctx.cr0.eq) goto loc_831EF520;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831EF4B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x831ef594
	if (ctx.cr0.lt) goto loc_831EF594;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ead380
	ctx.lr = 0x831EF4D0;
	sub_82EAD380(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bne 0x831ef4e8
	if (!ctx.cr0.eq) goto loc_831EF4E8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x831ef594
	goto loc_831EF594;
loc_831EF4E8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a7f140
	ctx.lr = 0x831EF4F4;
	sub_82A7F140(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831EF510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x831ef524
	if (!ctx.cr0.lt) goto loc_831EF524;
	// b 0x831ef594
	goto loc_831EF594;
loc_831EF51C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831EF520:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_831EF524:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831ef54c
	if (!ctx.cr0.eq) goto loc_831EF54C;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831ef54c
	if (ctx.cr6.eq) goto loc_831EF54C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831EF54C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831EF54C:
	// sth r28,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r28.u16);
	// b 0x831ef590
	goto loc_831EF590;
loc_831EF554:
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// cmpwi cr6,r29,9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 9, ctx.xer);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// beq cr6,0x831ef574
	if (ctx.cr6.eq) goto loc_831EF574;
	// cmpwi cr6,r29,13
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 13, ctx.xer);
	// bne cr6,0x831ef590
	if (!ctx.cr6.eq) goto loc_831EF590;
loc_831EF574:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831ef590
	if (ctx.cr6.eq) goto loc_831EF590;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831EF590;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831EF590:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831EF594:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

