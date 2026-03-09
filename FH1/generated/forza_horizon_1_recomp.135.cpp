#include "forza_horizon_1_init.h"

__attribute__((alias("__imp__sub_8318B198"))) PPC_WEAK_FUNC(sub_8318B198);
PPC_FUNC_IMPL(__imp__sub_8318B198) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,16752
	ctx.r3.s64 = ctx.r11.s64 + 16752;
	// bl 0x82ca7538
	ctx.lr = 0x8318B1B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-316(r11)
	PPC_STORE_U32(ctx.r11.u32 + -316, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B1C8"))) PPC_WEAK_FUNC(sub_8318B1C8);
PPC_FUNC_IMPL(__imp__sub_8318B1C8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,16776
	ctx.r3.s64 = ctx.r11.s64 + 16776;
	// bl 0x82ca7538
	ctx.lr = 0x8318B1E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2484(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2484, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B1F8"))) PPC_WEAK_FUNC(sub_8318B1F8);
PPC_FUNC_IMPL(__imp__sub_8318B1F8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,16792
	ctx.r3.s64 = ctx.r11.s64 + 16792;
	// bl 0x82ca7538
	ctx.lr = 0x8318B210;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2828(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2828, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B228"))) PPC_WEAK_FUNC(sub_8318B228);
PPC_FUNC_IMPL(__imp__sub_8318B228) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,16808
	ctx.r3.s64 = ctx.r11.s64 + 16808;
	// bl 0x82ca7538
	ctx.lr = 0x8318B240;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3668(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3668, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B258"))) PPC_WEAK_FUNC(sub_8318B258);
PPC_FUNC_IMPL(__imp__sub_8318B258) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,16820
	ctx.r3.s64 = ctx.r11.s64 + 16820;
	// bl 0x82ca7538
	ctx.lr = 0x8318B270;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3664(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3664, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B288"))) PPC_WEAK_FUNC(sub_8318B288);
PPC_FUNC_IMPL(__imp__sub_8318B288) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,16836
	ctx.r3.s64 = ctx.r11.s64 + 16836;
	// bl 0x82ca7538
	ctx.lr = 0x8318B2A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2972(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2972, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B2B8"))) PPC_WEAK_FUNC(sub_8318B2B8);
PPC_FUNC_IMPL(__imp__sub_8318B2B8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,6672
	ctx.r3.s64 = ctx.r11.s64 + 6672;
	// bl 0x82ca7538
	ctx.lr = 0x8318B2D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3792(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3792, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B2E8"))) PPC_WEAK_FUNC(sub_8318B2E8);
PPC_FUNC_IMPL(__imp__sub_8318B2E8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,16852
	ctx.r3.s64 = ctx.r11.s64 + 16852;
	// bl 0x82ca7538
	ctx.lr = 0x8318B300;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-356(r11)
	PPC_STORE_U32(ctx.r11.u32 + -356, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B318"))) PPC_WEAK_FUNC(sub_8318B318);
PPC_FUNC_IMPL(__imp__sub_8318B318) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,16868
	ctx.r3.s64 = ctx.r11.s64 + 16868;
	// bl 0x82ca7538
	ctx.lr = 0x8318B330;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-340(r11)
	PPC_STORE_U32(ctx.r11.u32 + -340, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B348"))) PPC_WEAK_FUNC(sub_8318B348);
PPC_FUNC_IMPL(__imp__sub_8318B348) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,16884
	ctx.r3.s64 = ctx.r11.s64 + 16884;
	// bl 0x82ca7538
	ctx.lr = 0x8318B360;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,996(r11)
	PPC_STORE_U32(ctx.r11.u32 + 996, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B378"))) PPC_WEAK_FUNC(sub_8318B378);
PPC_FUNC_IMPL(__imp__sub_8318B378) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,16900
	ctx.r3.s64 = ctx.r11.s64 + 16900;
	// bl 0x82ca7538
	ctx.lr = 0x8318B390;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2300(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2300, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B3A8"))) PPC_WEAK_FUNC(sub_8318B3A8);
PPC_FUNC_IMPL(__imp__sub_8318B3A8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,16920
	ctx.r3.s64 = ctx.r11.s64 + 16920;
	// bl 0x82ca7538
	ctx.lr = 0x8318B3C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1344(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1344, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B3D8"))) PPC_WEAK_FUNC(sub_8318B3D8);
PPC_FUNC_IMPL(__imp__sub_8318B3D8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,16940
	ctx.r3.s64 = ctx.r11.s64 + 16940;
	// bl 0x82ca7538
	ctx.lr = 0x8318B3F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3660(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3660, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B408"))) PPC_WEAK_FUNC(sub_8318B408);
PPC_FUNC_IMPL(__imp__sub_8318B408) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,16968
	ctx.r3.s64 = ctx.r11.s64 + 16968;
	// bl 0x82ca7538
	ctx.lr = 0x8318B420;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3656(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3656, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B438"))) PPC_WEAK_FUNC(sub_8318B438);
PPC_FUNC_IMPL(__imp__sub_8318B438) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17000
	ctx.r3.s64 = ctx.r11.s64 + 17000;
	// bl 0x82ca7538
	ctx.lr = 0x8318B450;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4772(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4772, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B468"))) PPC_WEAK_FUNC(sub_8318B468);
PPC_FUNC_IMPL(__imp__sub_8318B468) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17028
	ctx.r3.s64 = ctx.r11.s64 + 17028;
	// bl 0x82ca7538
	ctx.lr = 0x8318B480;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3808(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3808, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B498"))) PPC_WEAK_FUNC(sub_8318B498);
PPC_FUNC_IMPL(__imp__sub_8318B498) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17060
	ctx.r3.s64 = ctx.r11.s64 + 17060;
	// bl 0x82ca7538
	ctx.lr = 0x8318B4B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3532(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3532, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B4C8"))) PPC_WEAK_FUNC(sub_8318B4C8);
PPC_FUNC_IMPL(__imp__sub_8318B4C8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17076
	ctx.r3.s64 = ctx.r11.s64 + 17076;
	// bl 0x82ca7538
	ctx.lr = 0x8318B4E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3644(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3644, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B4F8"))) PPC_WEAK_FUNC(sub_8318B4F8);
PPC_FUNC_IMPL(__imp__sub_8318B4F8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17092
	ctx.r3.s64 = ctx.r11.s64 + 17092;
	// bl 0x82ca7538
	ctx.lr = 0x8318B510;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-220(r11)
	PPC_STORE_U32(ctx.r11.u32 + -220, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B528"))) PPC_WEAK_FUNC(sub_8318B528);
PPC_FUNC_IMPL(__imp__sub_8318B528) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17112
	ctx.r3.s64 = ctx.r11.s64 + 17112;
	// bl 0x82ca7538
	ctx.lr = 0x8318B540;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-940(r11)
	PPC_STORE_U32(ctx.r11.u32 + -940, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B558"))) PPC_WEAK_FUNC(sub_8318B558);
PPC_FUNC_IMPL(__imp__sub_8318B558) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17136
	ctx.r3.s64 = ctx.r11.s64 + 17136;
	// bl 0x82ca7538
	ctx.lr = 0x8318B570;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3616(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3616, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B588"))) PPC_WEAK_FUNC(sub_8318B588);
PPC_FUNC_IMPL(__imp__sub_8318B588) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17160
	ctx.r3.s64 = ctx.r11.s64 + 17160;
	// bl 0x82ca7538
	ctx.lr = 0x8318B5A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3576(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3576, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B5B8"))) PPC_WEAK_FUNC(sub_8318B5B8);
PPC_FUNC_IMPL(__imp__sub_8318B5B8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17184
	ctx.r3.s64 = ctx.r11.s64 + 17184;
	// bl 0x82ca7538
	ctx.lr = 0x8318B5D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3844(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3844, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B5E8"))) PPC_WEAK_FUNC(sub_8318B5E8);
PPC_FUNC_IMPL(__imp__sub_8318B5E8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17212
	ctx.r3.s64 = ctx.r11.s64 + 17212;
	// bl 0x82ca7538
	ctx.lr = 0x8318B600;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B618"))) PPC_WEAK_FUNC(sub_8318B618);
PPC_FUNC_IMPL(__imp__sub_8318B618) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17240
	ctx.r3.s64 = ctx.r11.s64 + 17240;
	// bl 0x82ca7538
	ctx.lr = 0x8318B630;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1868(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1868, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B648"))) PPC_WEAK_FUNC(sub_8318B648);
PPC_FUNC_IMPL(__imp__sub_8318B648) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17268
	ctx.r3.s64 = ctx.r11.s64 + 17268;
	// bl 0x82ca7538
	ctx.lr = 0x8318B660;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3852(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3852, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B678"))) PPC_WEAK_FUNC(sub_8318B678);
PPC_FUNC_IMPL(__imp__sub_8318B678) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17292
	ctx.r3.s64 = ctx.r11.s64 + 17292;
	// bl 0x82ca7538
	ctx.lr = 0x8318B690;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2024, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B6A8"))) PPC_WEAK_FUNC(sub_8318B6A8);
PPC_FUNC_IMPL(__imp__sub_8318B6A8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17316
	ctx.r3.s64 = ctx.r11.s64 + 17316;
	// bl 0x82ca7538
	ctx.lr = 0x8318B6C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1852(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1852, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B6D8"))) PPC_WEAK_FUNC(sub_8318B6D8);
PPC_FUNC_IMPL(__imp__sub_8318B6D8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17340
	ctx.r3.s64 = ctx.r11.s64 + 17340;
	// bl 0x82ca7538
	ctx.lr = 0x8318B6F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3584(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3584, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B708"))) PPC_WEAK_FUNC(sub_8318B708);
PPC_FUNC_IMPL(__imp__sub_8318B708) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17364
	ctx.r3.s64 = ctx.r11.s64 + 17364;
	// bl 0x82ca7538
	ctx.lr = 0x8318B720;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3476(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3476, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B738"))) PPC_WEAK_FUNC(sub_8318B738);
PPC_FUNC_IMPL(__imp__sub_8318B738) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17388
	ctx.r3.s64 = ctx.r11.s64 + 17388;
	// bl 0x82ca7538
	ctx.lr = 0x8318B750;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 248, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B768"))) PPC_WEAK_FUNC(sub_8318B768);
PPC_FUNC_IMPL(__imp__sub_8318B768) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17412
	ctx.r3.s64 = ctx.r11.s64 + 17412;
	// bl 0x82ca7538
	ctx.lr = 0x8318B780;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B798"))) PPC_WEAK_FUNC(sub_8318B798);
PPC_FUNC_IMPL(__imp__sub_8318B798) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17436
	ctx.r3.s64 = ctx.r11.s64 + 17436;
	// bl 0x82ca7538
	ctx.lr = 0x8318B7B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3600(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3600, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B7C8"))) PPC_WEAK_FUNC(sub_8318B7C8);
PPC_FUNC_IMPL(__imp__sub_8318B7C8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17460
	ctx.r3.s64 = ctx.r11.s64 + 17460;
	// bl 0x82ca7538
	ctx.lr = 0x8318B7E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2852(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2852, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B7F8"))) PPC_WEAK_FUNC(sub_8318B7F8);
PPC_FUNC_IMPL(__imp__sub_8318B7F8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17480
	ctx.r3.s64 = ctx.r11.s64 + 17480;
	// bl 0x82ca7538
	ctx.lr = 0x8318B810;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1260(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1260, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B828"))) PPC_WEAK_FUNC(sub_8318B828);
PPC_FUNC_IMPL(__imp__sub_8318B828) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17508
	ctx.r3.s64 = ctx.r11.s64 + 17508;
	// bl 0x82ca7538
	ctx.lr = 0x8318B840;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3776(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3776, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B858"))) PPC_WEAK_FUNC(sub_8318B858);
PPC_FUNC_IMPL(__imp__sub_8318B858) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17532
	ctx.r3.s64 = ctx.r11.s64 + 17532;
	// bl 0x82ca7538
	ctx.lr = 0x8318B870;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1196(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1196, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B888"))) PPC_WEAK_FUNC(sub_8318B888);
PPC_FUNC_IMPL(__imp__sub_8318B888) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17556
	ctx.r3.s64 = ctx.r11.s64 + 17556;
	// bl 0x82ca7538
	ctx.lr = 0x8318B8A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3608(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3608, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B8B8"))) PPC_WEAK_FUNC(sub_8318B8B8);
PPC_FUNC_IMPL(__imp__sub_8318B8B8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17580
	ctx.r3.s64 = ctx.r11.s64 + 17580;
	// bl 0x82ca7538
	ctx.lr = 0x8318B8D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1140, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B8E8"))) PPC_WEAK_FUNC(sub_8318B8E8);
PPC_FUNC_IMPL(__imp__sub_8318B8E8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17600
	ctx.r3.s64 = ctx.r11.s64 + 17600;
	// bl 0x82ca7538
	ctx.lr = 0x8318B900;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3520(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3520, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B918"))) PPC_WEAK_FUNC(sub_8318B918);
PPC_FUNC_IMPL(__imp__sub_8318B918) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17620
	ctx.r3.s64 = ctx.r11.s64 + 17620;
	// bl 0x82ca7538
	ctx.lr = 0x8318B930;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3556(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3556, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B948"))) PPC_WEAK_FUNC(sub_8318B948);
PPC_FUNC_IMPL(__imp__sub_8318B948) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17648
	ctx.r3.s64 = ctx.r11.s64 + 17648;
	// bl 0x82ca7538
	ctx.lr = 0x8318B960;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3692(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3692, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B978"))) PPC_WEAK_FUNC(sub_8318B978);
PPC_FUNC_IMPL(__imp__sub_8318B978) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17672
	ctx.r3.s64 = ctx.r11.s64 + 17672;
	// bl 0x82ca7538
	ctx.lr = 0x8318B990;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3524(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3524, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B9A8"))) PPC_WEAK_FUNC(sub_8318B9A8);
PPC_FUNC_IMPL(__imp__sub_8318B9A8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17700
	ctx.r3.s64 = ctx.r11.s64 + 17700;
	// bl 0x82ca7538
	ctx.lr = 0x8318B9C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3592(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3592, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B9D8"))) PPC_WEAK_FUNC(sub_8318B9D8);
PPC_FUNC_IMPL(__imp__sub_8318B9D8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17728
	ctx.r3.s64 = ctx.r11.s64 + 17728;
	// bl 0x82ca7538
	ctx.lr = 0x8318B9F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-308(r11)
	PPC_STORE_U32(ctx.r11.u32 + -308, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BA08"))) PPC_WEAK_FUNC(sub_8318BA08);
PPC_FUNC_IMPL(__imp__sub_8318BA08) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17756
	ctx.r3.s64 = ctx.r11.s64 + 17756;
	// bl 0x82ca7538
	ctx.lr = 0x8318BA20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3344(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3344, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BA38"))) PPC_WEAK_FUNC(sub_8318BA38);
PPC_FUNC_IMPL(__imp__sub_8318BA38) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17784
	ctx.r3.s64 = ctx.r11.s64 + 17784;
	// bl 0x82ca7538
	ctx.lr = 0x8318BA50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3528(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3528, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BA68"))) PPC_WEAK_FUNC(sub_8318BA68);
PPC_FUNC_IMPL(__imp__sub_8318BA68) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17804
	ctx.r3.s64 = ctx.r11.s64 + 17804;
	// bl 0x82ca7538
	ctx.lr = 0x8318BA80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5772(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5772, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BA98"))) PPC_WEAK_FUNC(sub_8318BA98);
PPC_FUNC_IMPL(__imp__sub_8318BA98) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17820
	ctx.r3.s64 = ctx.r11.s64 + 17820;
	// bl 0x82ca7538
	ctx.lr = 0x8318BAB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3744(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3744, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BAC8"))) PPC_WEAK_FUNC(sub_8318BAC8);
PPC_FUNC_IMPL(__imp__sub_8318BAC8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17840
	ctx.r3.s64 = ctx.r11.s64 + 17840;
	// bl 0x82ca7538
	ctx.lr = 0x8318BAE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-988(r11)
	PPC_STORE_U32(ctx.r11.u32 + -988, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BAF8"))) PPC_WEAK_FUNC(sub_8318BAF8);
PPC_FUNC_IMPL(__imp__sub_8318BAF8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17860
	ctx.r3.s64 = ctx.r11.s64 + 17860;
	// bl 0x82ca7538
	ctx.lr = 0x8318BB10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3768(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3768, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BB28"))) PPC_WEAK_FUNC(sub_8318BB28);
PPC_FUNC_IMPL(__imp__sub_8318BB28) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17880
	ctx.r3.s64 = ctx.r11.s64 + 17880;
	// bl 0x82ca7538
	ctx.lr = 0x8318BB40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2424(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2424, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BB58"))) PPC_WEAK_FUNC(sub_8318BB58);
PPC_FUNC_IMPL(__imp__sub_8318BB58) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17912
	ctx.r3.s64 = ctx.r11.s64 + 17912;
	// bl 0x82ca7538
	ctx.lr = 0x8318BB70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2008(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2008, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BB88"))) PPC_WEAK_FUNC(sub_8318BB88);
PPC_FUNC_IMPL(__imp__sub_8318BB88) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17940
	ctx.r3.s64 = ctx.r11.s64 + 17940;
	// bl 0x82ca7538
	ctx.lr = 0x8318BBA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5776(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5776, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BBB8"))) PPC_WEAK_FUNC(sub_8318BBB8);
PPC_FUNC_IMPL(__imp__sub_8318BBB8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17968
	ctx.r3.s64 = ctx.r11.s64 + 17968;
	// bl 0x82ca7538
	ctx.lr = 0x8318BBD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2036(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2036, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BBE8"))) PPC_WEAK_FUNC(sub_8318BBE8);
PPC_FUNC_IMPL(__imp__sub_8318BBE8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,17992
	ctx.r3.s64 = ctx.r11.s64 + 17992;
	// bl 0x82ca7538
	ctx.lr = 0x8318BC00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3580(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3580, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BC18"))) PPC_WEAK_FUNC(sub_8318BC18);
PPC_FUNC_IMPL(__imp__sub_8318BC18) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,18024
	ctx.r3.s64 = ctx.r11.s64 + 18024;
	// bl 0x82ca7538
	ctx.lr = 0x8318BC30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4720(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4720, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BC48"))) PPC_WEAK_FUNC(sub_8318BC48);
PPC_FUNC_IMPL(__imp__sub_8318BC48) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,18052
	ctx.r3.s64 = ctx.r11.s64 + 18052;
	// bl 0x82ca7538
	ctx.lr = 0x8318BC60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1404(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1404, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BC78"))) PPC_WEAK_FUNC(sub_8318BC78);
PPC_FUNC_IMPL(__imp__sub_8318BC78) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,18088
	ctx.r3.s64 = ctx.r11.s64 + 18088;
	// bl 0x82ca7538
	ctx.lr = 0x8318BC90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3804(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3804, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BCA8"))) PPC_WEAK_FUNC(sub_8318BCA8);
PPC_FUNC_IMPL(__imp__sub_8318BCA8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,18120
	ctx.r3.s64 = ctx.r11.s64 + 18120;
	// bl 0x82ca7538
	ctx.lr = 0x8318BCC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1156(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1156, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BCD8"))) PPC_WEAK_FUNC(sub_8318BCD8);
PPC_FUNC_IMPL(__imp__sub_8318BCD8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,18152
	ctx.r3.s64 = ctx.r11.s64 + 18152;
	// bl 0x82ca7538
	ctx.lr = 0x8318BCF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3516(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3516, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BD08"))) PPC_WEAK_FUNC(sub_8318BD08);
PPC_FUNC_IMPL(__imp__sub_8318BD08) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,18176
	ctx.r3.s64 = ctx.r11.s64 + 18176;
	// bl 0x82ca7538
	ctx.lr = 0x8318BD20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1296, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BD38"))) PPC_WEAK_FUNC(sub_8318BD38);
PPC_FUNC_IMPL(__imp__sub_8318BD38) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,18200
	ctx.r3.s64 = ctx.r11.s64 + 18200;
	// bl 0x82ca7538
	ctx.lr = 0x8318BD50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1036(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1036, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BD68"))) PPC_WEAK_FUNC(sub_8318BD68);
PPC_FUNC_IMPL(__imp__sub_8318BD68) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,18224
	ctx.r3.s64 = ctx.r11.s64 + 18224;
	// bl 0x82ca7538
	ctx.lr = 0x8318BD80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3684(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3684, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BD98"))) PPC_WEAK_FUNC(sub_8318BD98);
PPC_FUNC_IMPL(__imp__sub_8318BD98) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,18244
	ctx.r3.s64 = ctx.r11.s64 + 18244;
	// bl 0x82ca7538
	ctx.lr = 0x8318BDB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3632(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3632, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BDC8"))) PPC_WEAK_FUNC(sub_8318BDC8);
PPC_FUNC_IMPL(__imp__sub_8318BDC8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,18276
	ctx.r3.s64 = ctx.r11.s64 + 18276;
	// bl 0x82ca7538
	ctx.lr = 0x8318BDE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1360(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1360, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BDF8"))) PPC_WEAK_FUNC(sub_8318BDF8);
PPC_FUNC_IMPL(__imp__sub_8318BDF8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,18304
	ctx.r3.s64 = ctx.r11.s64 + 18304;
	// bl 0x82ca7538
	ctx.lr = 0x8318BE10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2076(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2076, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BE28"))) PPC_WEAK_FUNC(sub_8318BE28);
PPC_FUNC_IMPL(__imp__sub_8318BE28) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,18328
	ctx.r3.s64 = ctx.r11.s64 + 18328;
	// bl 0x82ca7538
	ctx.lr = 0x8318BE40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3748(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3748, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BE58"))) PPC_WEAK_FUNC(sub_8318BE58);
PPC_FUNC_IMPL(__imp__sub_8318BE58) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,18356
	ctx.r3.s64 = ctx.r11.s64 + 18356;
	// bl 0x82ca7538
	ctx.lr = 0x8318BE70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3572(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3572, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BE88"))) PPC_WEAK_FUNC(sub_8318BE88);
PPC_FUNC_IMPL(__imp__sub_8318BE88) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,18392
	ctx.r3.s64 = ctx.r11.s64 + 18392;
	// bl 0x82ca7538
	ctx.lr = 0x8318BEA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BEB8"))) PPC_WEAK_FUNC(sub_8318BEB8);
PPC_FUNC_IMPL(__imp__sub_8318BEB8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,18416
	ctx.r3.s64 = ctx.r11.s64 + 18416;
	// bl 0x82ca7538
	ctx.lr = 0x8318BED0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2176, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BEE8"))) PPC_WEAK_FUNC(sub_8318BEE8);
PPC_FUNC_IMPL(__imp__sub_8318BEE8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,18440
	ctx.r3.s64 = ctx.r11.s64 + 18440;
	// bl 0x82ca7538
	ctx.lr = 0x8318BF00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-272(r11)
	PPC_STORE_U32(ctx.r11.u32 + -272, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BF18"))) PPC_WEAK_FUNC(sub_8318BF18);
PPC_FUNC_IMPL(__imp__sub_8318BF18) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,18468
	ctx.r3.s64 = ctx.r11.s64 + 18468;
	// bl 0x82ca7538
	ctx.lr = 0x8318BF30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2780(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2780, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BF48"))) PPC_WEAK_FUNC(sub_8318BF48);
PPC_FUNC_IMPL(__imp__sub_8318BF48) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,18496
	ctx.r3.s64 = ctx.r11.s64 + 18496;
	// bl 0x82ca7538
	ctx.lr = 0x8318BF60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4724(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4724, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BF78"))) PPC_WEAK_FUNC(sub_8318BF78);
PPC_FUNC_IMPL(__imp__sub_8318BF78) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,18520
	ctx.r3.s64 = ctx.r11.s64 + 18520;
	// bl 0x82ca7538
	ctx.lr = 0x8318BF90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3772(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3772, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BFA8"))) PPC_WEAK_FUNC(sub_8318BFA8);
PPC_FUNC_IMPL(__imp__sub_8318BFA8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,18544
	ctx.r3.s64 = ctx.r11.s64 + 18544;
	// bl 0x82ca7538
	ctx.lr = 0x8318BFC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-536(r11)
	PPC_STORE_U32(ctx.r11.u32 + -536, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318BFD8"))) PPC_WEAK_FUNC(sub_8318BFD8);
PPC_FUNC_IMPL(__imp__sub_8318BFD8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,18568
	ctx.r3.s64 = ctx.r11.s64 + 18568;
	// bl 0x82ca7538
	ctx.lr = 0x8318BFF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4728(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4728, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C008"))) PPC_WEAK_FUNC(sub_8318C008);
PPC_FUNC_IMPL(__imp__sub_8318C008) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,18596
	ctx.r3.s64 = ctx.r11.s64 + 18596;
	// bl 0x82ca7538
	ctx.lr = 0x8318C020;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5428(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5428, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C038"))) PPC_WEAK_FUNC(sub_8318C038);
PPC_FUNC_IMPL(__imp__sub_8318C038) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,18620
	ctx.r3.s64 = ctx.r11.s64 + 18620;
	// bl 0x82ca7538
	ctx.lr = 0x8318C050;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2040(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2040, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C068"))) PPC_WEAK_FUNC(sub_8318C068);
PPC_FUNC_IMPL(__imp__sub_8318C068) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,18644
	ctx.r3.s64 = ctx.r11.s64 + 18644;
	// bl 0x82ca7538
	ctx.lr = 0x8318C080;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-436(r11)
	PPC_STORE_U32(ctx.r11.u32 + -436, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C098"))) PPC_WEAK_FUNC(sub_8318C098);
PPC_FUNC_IMPL(__imp__sub_8318C098) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,18664
	ctx.r3.s64 = ctx.r11.s64 + 18664;
	// bl 0x82ca7538
	ctx.lr = 0x8318C0B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3552(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3552, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C0C8"))) PPC_WEAK_FUNC(sub_8318C0C8);
PPC_FUNC_IMPL(__imp__sub_8318C0C8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,18696
	ctx.r3.s64 = ctx.r11.s64 + 18696;
	// bl 0x82ca7538
	ctx.lr = 0x8318C0E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3568, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C0F8"))) PPC_WEAK_FUNC(sub_8318C0F8);
PPC_FUNC_IMPL(__imp__sub_8318C0F8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,18724
	ctx.r3.s64 = ctx.r11.s64 + 18724;
	// bl 0x82ca7538
	ctx.lr = 0x8318C110;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3764(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3764, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C128"))) PPC_WEAK_FUNC(sub_8318C128);
PPC_FUNC_IMPL(__imp__sub_8318C128) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,18752
	ctx.r3.s64 = ctx.r11.s64 + 18752;
	// bl 0x82ca7538
	ctx.lr = 0x8318C140;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3508(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3508, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C158"))) PPC_WEAK_FUNC(sub_8318C158);
PPC_FUNC_IMPL(__imp__sub_8318C158) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,18784
	ctx.r3.s64 = ctx.r11.s64 + 18784;
	// bl 0x82ca7538
	ctx.lr = 0x8318C170;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-572(r11)
	PPC_STORE_U32(ctx.r11.u32 + -572, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C188"))) PPC_WEAK_FUNC(sub_8318C188);
PPC_FUNC_IMPL(__imp__sub_8318C188) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,18824
	ctx.r3.s64 = ctx.r11.s64 + 18824;
	// bl 0x82ca7538
	ctx.lr = 0x8318C1A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3720(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3720, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C1B8"))) PPC_WEAK_FUNC(sub_8318C1B8);
PPC_FUNC_IMPL(__imp__sub_8318C1B8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,18872
	ctx.r3.s64 = ctx.r11.s64 + 18872;
	// bl 0x82ca7538
	ctx.lr = 0x8318C1D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1064(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1064, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C1E8"))) PPC_WEAK_FUNC(sub_8318C1E8);
PPC_FUNC_IMPL(__imp__sub_8318C1E8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,18912
	ctx.r3.s64 = ctx.r11.s64 + 18912;
	// bl 0x82ca7538
	ctx.lr = 0x8318C200;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1424(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1424, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C218"))) PPC_WEAK_FUNC(sub_8318C218);
PPC_FUNC_IMPL(__imp__sub_8318C218) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,18956
	ctx.r3.s64 = ctx.r11.s64 + 18956;
	// bl 0x82ca7538
	ctx.lr = 0x8318C230;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1256(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1256, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C248"))) PPC_WEAK_FUNC(sub_8318C248);
PPC_FUNC_IMPL(__imp__sub_8318C248) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19000
	ctx.r3.s64 = ctx.r11.s64 + 19000;
	// bl 0x82ca7538
	ctx.lr = 0x8318C260;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2404, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C278"))) PPC_WEAK_FUNC(sub_8318C278);
PPC_FUNC_IMPL(__imp__sub_8318C278) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19028
	ctx.r3.s64 = ctx.r11.s64 + 19028;
	// bl 0x82ca7538
	ctx.lr = 0x8318C290;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3728(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3728, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C2A8"))) PPC_WEAK_FUNC(sub_8318C2A8);
PPC_FUNC_IMPL(__imp__sub_8318C2A8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19048
	ctx.r3.s64 = ctx.r11.s64 + 19048;
	// bl 0x82ca7538
	ctx.lr = 0x8318C2C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3640(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3640, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C2D8"))) PPC_WEAK_FUNC(sub_8318C2D8);
PPC_FUNC_IMPL(__imp__sub_8318C2D8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19072
	ctx.r3.s64 = ctx.r11.s64 + 19072;
	// bl 0x82ca7538
	ctx.lr = 0x8318C2F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3836(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3836, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C308"))) PPC_WEAK_FUNC(sub_8318C308);
PPC_FUNC_IMPL(__imp__sub_8318C308) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19096
	ctx.r3.s64 = ctx.r11.s64 + 19096;
	// bl 0x82ca7538
	ctx.lr = 0x8318C320;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1144, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C338"))) PPC_WEAK_FUNC(sub_8318C338);
PPC_FUNC_IMPL(__imp__sub_8318C338) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19124
	ctx.r3.s64 = ctx.r11.s64 + 19124;
	// bl 0x82ca7538
	ctx.lr = 0x8318C350;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3820(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3820, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C368"))) PPC_WEAK_FUNC(sub_8318C368);
PPC_FUNC_IMPL(__imp__sub_8318C368) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19152
	ctx.r3.s64 = ctx.r11.s64 + 19152;
	// bl 0x82ca7538
	ctx.lr = 0x8318C380;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3612(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3612, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C398"))) PPC_WEAK_FUNC(sub_8318C398);
PPC_FUNC_IMPL(__imp__sub_8318C398) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19184
	ctx.r3.s64 = ctx.r11.s64 + 19184;
	// bl 0x82ca7538
	ctx.lr = 0x8318C3B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5012(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5012, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C3C8"))) PPC_WEAK_FUNC(sub_8318C3C8);
PPC_FUNC_IMPL(__imp__sub_8318C3C8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19216
	ctx.r3.s64 = ctx.r11.s64 + 19216;
	// bl 0x82ca7538
	ctx.lr = 0x8318C3E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2808(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2808, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C3F8"))) PPC_WEAK_FUNC(sub_8318C3F8);
PPC_FUNC_IMPL(__imp__sub_8318C3F8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19240
	ctx.r3.s64 = ctx.r11.s64 + 19240;
	// bl 0x82ca7538
	ctx.lr = 0x8318C410;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3636(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3636, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C428"))) PPC_WEAK_FUNC(sub_8318C428);
PPC_FUNC_IMPL(__imp__sub_8318C428) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19268
	ctx.r3.s64 = ctx.r11.s64 + 19268;
	// bl 0x82ca7538
	ctx.lr = 0x8318C440;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3604(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3604, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C458"))) PPC_WEAK_FUNC(sub_8318C458);
PPC_FUNC_IMPL(__imp__sub_8318C458) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19296
	ctx.r3.s64 = ctx.r11.s64 + 19296;
	// bl 0x82ca7538
	ctx.lr = 0x8318C470;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-372(r11)
	PPC_STORE_U32(ctx.r11.u32 + -372, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C488"))) PPC_WEAK_FUNC(sub_8318C488);
PPC_FUNC_IMPL(__imp__sub_8318C488) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19316
	ctx.r3.s64 = ctx.r11.s64 + 19316;
	// bl 0x82ca7538
	ctx.lr = 0x8318C4A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3512(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3512, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C4B8"))) PPC_WEAK_FUNC(sub_8318C4B8);
PPC_FUNC_IMPL(__imp__sub_8318C4B8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19336
	ctx.r3.s64 = ctx.r11.s64 + 19336;
	// bl 0x82ca7538
	ctx.lr = 0x8318C4D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3848(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3848, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C4E8"))) PPC_WEAK_FUNC(sub_8318C4E8);
PPC_FUNC_IMPL(__imp__sub_8318C4E8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19364
	ctx.r3.s64 = ctx.r11.s64 + 19364;
	// bl 0x82ca7538
	ctx.lr = 0x8318C500;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3724(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3724, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C518"))) PPC_WEAK_FUNC(sub_8318C518);
PPC_FUNC_IMPL(__imp__sub_8318C518) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19392
	ctx.r3.s64 = ctx.r11.s64 + 19392;
	// bl 0x82ca7538
	ctx.lr = 0x8318C530;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3652(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3652, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C548"))) PPC_WEAK_FUNC(sub_8318C548);
PPC_FUNC_IMPL(__imp__sub_8318C548) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19416
	ctx.r3.s64 = ctx.r11.s64 + 19416;
	// bl 0x82ca7538
	ctx.lr = 0x8318C560;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3536(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3536, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C578"))) PPC_WEAK_FUNC(sub_8318C578);
PPC_FUNC_IMPL(__imp__sub_8318C578) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19436
	ctx.r3.s64 = ctx.r11.s64 + 19436;
	// bl 0x82ca7538
	ctx.lr = 0x8318C590;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C5A8"))) PPC_WEAK_FUNC(sub_8318C5A8);
PPC_FUNC_IMPL(__imp__sub_8318C5A8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19460
	ctx.r3.s64 = ctx.r11.s64 + 19460;
	// bl 0x82ca7538
	ctx.lr = 0x8318C5C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2824(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2824, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C5D8"))) PPC_WEAK_FUNC(sub_8318C5D8);
PPC_FUNC_IMPL(__imp__sub_8318C5D8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19484
	ctx.r3.s64 = ctx.r11.s64 + 19484;
	// bl 0x82ca7538
	ctx.lr = 0x8318C5F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3620(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3620, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C608"))) PPC_WEAK_FUNC(sub_8318C608);
PPC_FUNC_IMPL(__imp__sub_8318C608) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19516
	ctx.r3.s64 = ctx.r11.s64 + 19516;
	// bl 0x82ca7538
	ctx.lr = 0x8318C620;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1276, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C638"))) PPC_WEAK_FUNC(sub_8318C638);
PPC_FUNC_IMPL(__imp__sub_8318C638) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19548
	ctx.r3.s64 = ctx.r11.s64 + 19548;
	// bl 0x82ca7538
	ctx.lr = 0x8318C650;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-412(r11)
	PPC_STORE_U32(ctx.r11.u32 + -412, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C668"))) PPC_WEAK_FUNC(sub_8318C668);
PPC_FUNC_IMPL(__imp__sub_8318C668) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,21516
	ctx.r3.s64 = ctx.r11.s64 + 21516;
	// bl 0x82ca7538
	ctx.lr = 0x8318C680;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3760(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3760, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C698"))) PPC_WEAK_FUNC(sub_8318C698);
PPC_FUNC_IMPL(__imp__sub_8318C698) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19576
	ctx.r3.s64 = ctx.r11.s64 + 19576;
	// bl 0x82ca7538
	ctx.lr = 0x8318C6B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3740(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3740, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C6C8"))) PPC_WEAK_FUNC(sub_8318C6C8);
PPC_FUNC_IMPL(__imp__sub_8318C6C8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19600
	ctx.r3.s64 = ctx.r11.s64 + 19600;
	// bl 0x82ca7538
	ctx.lr = 0x8318C6E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3720(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3720, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C6F8"))) PPC_WEAK_FUNC(sub_8318C6F8);
PPC_FUNC_IMPL(__imp__sub_8318C6F8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19624
	ctx.r3.s64 = ctx.r11.s64 + 19624;
	// bl 0x82ca7538
	ctx.lr = 0x8318C710;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3784(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3784, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C728"))) PPC_WEAK_FUNC(sub_8318C728);
PPC_FUNC_IMPL(__imp__sub_8318C728) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19648
	ctx.r3.s64 = ctx.r11.s64 + 19648;
	// bl 0x82ca7538
	ctx.lr = 0x8318C740;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3680(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3680, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C758"))) PPC_WEAK_FUNC(sub_8318C758);
PPC_FUNC_IMPL(__imp__sub_8318C758) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19672
	ctx.r3.s64 = ctx.r11.s64 + 19672;
	// bl 0x82ca7538
	ctx.lr = 0x8318C770;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3564(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3564, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C788"))) PPC_WEAK_FUNC(sub_8318C788);
PPC_FUNC_IMPL(__imp__sub_8318C788) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19696
	ctx.r3.s64 = ctx.r11.s64 + 19696;
	// bl 0x82ca7538
	ctx.lr = 0x8318C7A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-640(r11)
	PPC_STORE_U32(ctx.r11.u32 + -640, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C7B8"))) PPC_WEAK_FUNC(sub_8318C7B8);
PPC_FUNC_IMPL(__imp__sub_8318C7B8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19728
	ctx.r3.s64 = ctx.r11.s64 + 19728;
	// bl 0x82ca7538
	ctx.lr = 0x8318C7D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1368(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1368, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C7E8"))) PPC_WEAK_FUNC(sub_8318C7E8);
PPC_FUNC_IMPL(__imp__sub_8318C7E8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19756
	ctx.r3.s64 = ctx.r11.s64 + 19756;
	// bl 0x82ca7538
	ctx.lr = 0x8318C800;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3540(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3540, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C818"))) PPC_WEAK_FUNC(sub_8318C818);
PPC_FUNC_IMPL(__imp__sub_8318C818) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19788
	ctx.r3.s64 = ctx.r11.s64 + 19788;
	// bl 0x82ca7538
	ctx.lr = 0x8318C830;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3500(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3500, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C848"))) PPC_WEAK_FUNC(sub_8318C848);
PPC_FUNC_IMPL(__imp__sub_8318C848) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19804
	ctx.r3.s64 = ctx.r11.s64 + 19804;
	// bl 0x82ca7538
	ctx.lr = 0x8318C860;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C878"))) PPC_WEAK_FUNC(sub_8318C878);
PPC_FUNC_IMPL(__imp__sub_8318C878) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19816
	ctx.r3.s64 = ctx.r11.s64 + 19816;
	// bl 0x82ca7538
	ctx.lr = 0x8318C890;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C8A8"))) PPC_WEAK_FUNC(sub_8318C8A8);
PPC_FUNC_IMPL(__imp__sub_8318C8A8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19836
	ctx.r3.s64 = ctx.r11.s64 + 19836;
	// bl 0x82ca7538
	ctx.lr = 0x8318C8C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3648(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3648, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C8D8"))) PPC_WEAK_FUNC(sub_8318C8D8);
PPC_FUNC_IMPL(__imp__sub_8318C8D8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19856
	ctx.r3.s64 = ctx.r11.s64 + 19856;
	// bl 0x82ca7538
	ctx.lr = 0x8318C8F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3736(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3736, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C908"))) PPC_WEAK_FUNC(sub_8318C908);
PPC_FUNC_IMPL(__imp__sub_8318C908) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19876
	ctx.r3.s64 = ctx.r11.s64 + 19876;
	// bl 0x82ca7538
	ctx.lr = 0x8318C920;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3752(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3752, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C938"))) PPC_WEAK_FUNC(sub_8318C938);
PPC_FUNC_IMPL(__imp__sub_8318C938) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19904
	ctx.r3.s64 = ctx.r11.s64 + 19904;
	// bl 0x82ca7538
	ctx.lr = 0x8318C950;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3700(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3700, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C968"))) PPC_WEAK_FUNC(sub_8318C968);
PPC_FUNC_IMPL(__imp__sub_8318C968) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19932
	ctx.r3.s64 = ctx.r11.s64 + 19932;
	// bl 0x82ca7538
	ctx.lr = 0x8318C980;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3716(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3716, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C998"))) PPC_WEAK_FUNC(sub_8318C998);
PPC_FUNC_IMPL(__imp__sub_8318C998) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19960
	ctx.r3.s64 = ctx.r11.s64 + 19960;
	// bl 0x82ca7538
	ctx.lr = 0x8318C9B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3816(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3816, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C9C8"))) PPC_WEAK_FUNC(sub_8318C9C8);
PPC_FUNC_IMPL(__imp__sub_8318C9C8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19980
	ctx.r3.s64 = ctx.r11.s64 + 19980;
	// bl 0x82ca7538
	ctx.lr = 0x8318C9E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3588(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3588, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318C9F8"))) PPC_WEAK_FUNC(sub_8318C9F8);
PPC_FUNC_IMPL(__imp__sub_8318C9F8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,20000
	ctx.r3.s64 = ctx.r11.s64 + 20000;
	// bl 0x82ca7538
	ctx.lr = 0x8318CA10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1436(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1436, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318CA28"))) PPC_WEAK_FUNC(sub_8318CA28);
PPC_FUNC_IMPL(__imp__sub_8318CA28) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,20020
	ctx.r3.s64 = ctx.r11.s64 + 20020;
	// bl 0x82ca7538
	ctx.lr = 0x8318CA40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3624(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3624, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318CA58"))) PPC_WEAK_FUNC(sub_8318CA58);
PPC_FUNC_IMPL(__imp__sub_8318CA58) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,20044
	ctx.r3.s64 = ctx.r11.s64 + 20044;
	// bl 0x82ca7538
	ctx.lr = 0x8318CA70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3824(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3824, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318CA88"))) PPC_WEAK_FUNC(sub_8318CA88);
PPC_FUNC_IMPL(__imp__sub_8318CA88) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,20072
	ctx.r3.s64 = ctx.r11.s64 + 20072;
	// bl 0x82ca7538
	ctx.lr = 0x8318CAA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3704(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3704, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318CAB8"))) PPC_WEAK_FUNC(sub_8318CAB8);
PPC_FUNC_IMPL(__imp__sub_8318CAB8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,20084
	ctx.r3.s64 = ctx.r11.s64 + 20084;
	// bl 0x82ca7538
	ctx.lr = 0x8318CAD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318CAE8"))) PPC_WEAK_FUNC(sub_8318CAE8);
PPC_FUNC_IMPL(__imp__sub_8318CAE8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,20108
	ctx.r3.s64 = ctx.r11.s64 + 20108;
	// bl 0x82ca7538
	ctx.lr = 0x8318CB00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3596(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3596, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318CB18"))) PPC_WEAK_FUNC(sub_8318CB18);
PPC_FUNC_IMPL(__imp__sub_8318CB18) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,20132
	ctx.r3.s64 = ctx.r11.s64 + 20132;
	// bl 0x82ca7538
	ctx.lr = 0x8318CB30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3788(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3788, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318CB48"))) PPC_WEAK_FUNC(sub_8318CB48);
PPC_FUNC_IMPL(__imp__sub_8318CB48) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,20168
	ctx.r3.s64 = ctx.r11.s64 + 20168;
	// bl 0x82ca7538
	ctx.lr = 0x8318CB60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3672(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3672, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318CB78"))) PPC_WEAK_FUNC(sub_8318CB78);
PPC_FUNC_IMPL(__imp__sub_8318CB78) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,20204
	ctx.r3.s64 = ctx.r11.s64 + 20204;
	// bl 0x82ca7538
	ctx.lr = 0x8318CB90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3872(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3872, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318CBA8"))) PPC_WEAK_FUNC(sub_8318CBA8);
PPC_FUNC_IMPL(__imp__sub_8318CBA8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,20240
	ctx.r3.s64 = ctx.r11.s64 + 20240;
	// bl 0x82ca7538
	ctx.lr = 0x8318CBC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3696(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3696, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318CBD8"))) PPC_WEAK_FUNC(sub_8318CBD8);
PPC_FUNC_IMPL(__imp__sub_8318CBD8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,20280
	ctx.r3.s64 = ctx.r11.s64 + 20280;
	// bl 0x82ca7538
	ctx.lr = 0x8318CBF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2756(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2756, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318CC08"))) PPC_WEAK_FUNC(sub_8318CC08);
PPC_FUNC_IMPL(__imp__sub_8318CC08) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,20320
	ctx.r3.s64 = ctx.r11.s64 + 20320;
	// bl 0x82ca7538
	ctx.lr = 0x8318CC20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3340(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3340, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318CC38"))) PPC_WEAK_FUNC(sub_8318CC38);
PPC_FUNC_IMPL(__imp__sub_8318CC38) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,20348
	ctx.r3.s64 = ctx.r11.s64 + 20348;
	// bl 0x82ca7538
	ctx.lr = 0x8318CC50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2912(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2912, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318CC68"))) PPC_WEAK_FUNC(sub_8318CC68);
PPC_FUNC_IMPL(__imp__sub_8318CC68) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,20384
	ctx.r3.s64 = ctx.r11.s64 + 20384;
	// bl 0x82ca7538
	ctx.lr = 0x8318CC80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3712(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3712, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318CC98"))) PPC_WEAK_FUNC(sub_8318CC98);
PPC_FUNC_IMPL(__imp__sub_8318CC98) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,20420
	ctx.r3.s64 = ctx.r11.s64 + 20420;
	// bl 0x82ca7538
	ctx.lr = 0x8318CCB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3832(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3832, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318CCC8"))) PPC_WEAK_FUNC(sub_8318CCC8);
PPC_FUNC_IMPL(__imp__sub_8318CCC8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,20448
	ctx.r3.s64 = ctx.r11.s64 + 20448;
	// bl 0x82ca7538
	ctx.lr = 0x8318CCE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-604(r11)
	PPC_STORE_U32(ctx.r11.u32 + -604, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318CCF8"))) PPC_WEAK_FUNC(sub_8318CCF8);
PPC_FUNC_IMPL(__imp__sub_8318CCF8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,20476
	ctx.r3.s64 = ctx.r11.s64 + 20476;
	// bl 0x82ca7538
	ctx.lr = 0x8318CD10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3544(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3544, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318CD28"))) PPC_WEAK_FUNC(sub_8318CD28);
PPC_FUNC_IMPL(__imp__sub_8318CD28) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,20504
	ctx.r3.s64 = ctx.r11.s64 + 20504;
	// bl 0x82ca7538
	ctx.lr = 0x8318CD40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3732(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3732, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318CD58"))) PPC_WEAK_FUNC(sub_8318CD58);
PPC_FUNC_IMPL(__imp__sub_8318CD58) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,20532
	ctx.r3.s64 = ctx.r11.s64 + 20532;
	// bl 0x82ca7538
	ctx.lr = 0x8318CD70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3796(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3796, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318CD88"))) PPC_WEAK_FUNC(sub_8318CD88);
PPC_FUNC_IMPL(__imp__sub_8318CD88) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,20560
	ctx.r3.s64 = ctx.r11.s64 + 20560;
	// bl 0x82ca7538
	ctx.lr = 0x8318CDA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-964(r11)
	PPC_STORE_U32(ctx.r11.u32 + -964, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318CDB8"))) PPC_WEAK_FUNC(sub_8318CDB8);
PPC_FUNC_IMPL(__imp__sub_8318CDB8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,20580
	ctx.r3.s64 = ctx.r11.s64 + 20580;
	// bl 0x82ca7538
	ctx.lr = 0x8318CDD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3568(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3568, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318CDE8"))) PPC_WEAK_FUNC(sub_8318CDE8);
PPC_FUNC_IMPL(__imp__sub_8318CDE8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,20604
	ctx.r3.s64 = ctx.r11.s64 + 20604;
	// bl 0x82ca7538
	ctx.lr = 0x8318CE00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3840(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3840, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318CE18"))) PPC_WEAK_FUNC(sub_8318CE18);
PPC_FUNC_IMPL(__imp__sub_8318CE18) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,20620
	ctx.r3.s64 = ctx.r11.s64 + 20620;
	// bl 0x82ca7538
	ctx.lr = 0x8318CE30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3628(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3628, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318CE48"))) PPC_WEAK_FUNC(sub_8318CE48);
PPC_FUNC_IMPL(__imp__sub_8318CE48) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,20640
	ctx.r3.s64 = ctx.r11.s64 + 20640;
	// bl 0x82ca7538
	ctx.lr = 0x8318CE60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3828(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3828, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318CE78"))) PPC_WEAK_FUNC(sub_8318CE78);
PPC_FUNC_IMPL(__imp__sub_8318CE78) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,20668
	ctx.r3.s64 = ctx.r11.s64 + 20668;
	// bl 0x82ca7538
	ctx.lr = 0x8318CE90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3972(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3972, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318CEA8"))) PPC_WEAK_FUNC(sub_8318CEA8);
PPC_FUNC_IMPL(__imp__sub_8318CEA8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,20696
	ctx.r3.s64 = ctx.r11.s64 + 20696;
	// bl 0x82ca7538
	ctx.lr = 0x8318CEC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318CED8"))) PPC_WEAK_FUNC(sub_8318CED8);
PPC_FUNC_IMPL(__imp__sub_8318CED8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,20728
	ctx.r3.s64 = ctx.r11.s64 + 20728;
	// bl 0x82ca7538
	ctx.lr = 0x8318CEF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3560(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3560, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318CF08"))) PPC_WEAK_FUNC(sub_8318CF08);
PPC_FUNC_IMPL(__imp__sub_8318CF08) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,20760
	ctx.r3.s64 = ctx.r11.s64 + 20760;
	// bl 0x82ca7538
	ctx.lr = 0x8318CF20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-112(r11)
	PPC_STORE_U32(ctx.r11.u32 + -112, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318CF38"))) PPC_WEAK_FUNC(sub_8318CF38);
PPC_FUNC_IMPL(__imp__sub_8318CF38) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,20800
	ctx.r3.s64 = ctx.r11.s64 + 20800;
	// bl 0x82ca7538
	ctx.lr = 0x8318CF50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3708(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3708, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318CF68"))) PPC_WEAK_FUNC(sub_8318CF68);
PPC_FUNC_IMPL(__imp__sub_8318CF68) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,20828
	ctx.r3.s64 = ctx.r11.s64 + 20828;
	// bl 0x82ca7538
	ctx.lr = 0x8318CF80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3284(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3284, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318CF98"))) PPC_WEAK_FUNC(sub_8318CF98);
PPC_FUNC_IMPL(__imp__sub_8318CF98) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,20860
	ctx.r3.s64 = ctx.r11.s64 + 20860;
	// bl 0x82ca7538
	ctx.lr = 0x8318CFB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1060(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1060, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318CFC8"))) PPC_WEAK_FUNC(sub_8318CFC8);
PPC_FUNC_IMPL(__imp__sub_8318CFC8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,20892
	ctx.r3.s64 = ctx.r11.s64 + 20892;
	// bl 0x82ca7538
	ctx.lr = 0x8318CFE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2136(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2136, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318CFF8"))) PPC_WEAK_FUNC(sub_8318CFF8);
PPC_FUNC_IMPL(__imp__sub_8318CFF8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,20924
	ctx.r3.s64 = ctx.r11.s64 + 20924;
	// bl 0x82ca7538
	ctx.lr = 0x8318D010;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4956(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4956, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D028"))) PPC_WEAK_FUNC(sub_8318D028);
PPC_FUNC_IMPL(__imp__sub_8318D028) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,20948
	ctx.r3.s64 = ctx.r11.s64 + 20948;
	// bl 0x82ca7538
	ctx.lr = 0x8318D040;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3548(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3548, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D058"))) PPC_WEAK_FUNC(sub_8318D058);
PPC_FUNC_IMPL(__imp__sub_8318D058) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,20968
	ctx.r3.s64 = ctx.r11.s64 + 20968;
	// bl 0x82ca7538
	ctx.lr = 0x8318D070;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-288(r11)
	PPC_STORE_U32(ctx.r11.u32 + -288, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D088"))) PPC_WEAK_FUNC(sub_8318D088);
PPC_FUNC_IMPL(__imp__sub_8318D088) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,20996
	ctx.r3.s64 = ctx.r11.s64 + 20996;
	// bl 0x82ca7538
	ctx.lr = 0x8318D0A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2380(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2380, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D0B8"))) PPC_WEAK_FUNC(sub_8318D0B8);
PPC_FUNC_IMPL(__imp__sub_8318D0B8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21024
	ctx.r3.s64 = ctx.r11.s64 + 21024;
	// bl 0x82ca7538
	ctx.lr = 0x8318D0D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-484(r11)
	PPC_STORE_U32(ctx.r11.u32 + -484, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D0E8"))) PPC_WEAK_FUNC(sub_8318D0E8);
PPC_FUNC_IMPL(__imp__sub_8318D0E8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21056
	ctx.r3.s64 = ctx.r11.s64 + 21056;
	// bl 0x82ca7538
	ctx.lr = 0x8318D100;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2128(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2128, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D118"))) PPC_WEAK_FUNC(sub_8318D118);
PPC_FUNC_IMPL(__imp__sub_8318D118) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21088
	ctx.r3.s64 = ctx.r11.s64 + 21088;
	// bl 0x82ca7538
	ctx.lr = 0x8318D130;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2560(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2560, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D148"))) PPC_WEAK_FUNC(sub_8318D148);
PPC_FUNC_IMPL(__imp__sub_8318D148) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21112
	ctx.r3.s64 = ctx.r11.s64 + 21112;
	// bl 0x82ca7538
	ctx.lr = 0x8318D160;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2104(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2104, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D178"))) PPC_WEAK_FUNC(sub_8318D178);
PPC_FUNC_IMPL(__imp__sub_8318D178) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21136
	ctx.r3.s64 = ctx.r11.s64 + 21136;
	// bl 0x82ca7538
	ctx.lr = 0x8318D190;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2368(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2368, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D1A8"))) PPC_WEAK_FUNC(sub_8318D1A8);
PPC_FUNC_IMPL(__imp__sub_8318D1A8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21156
	ctx.r3.s64 = ctx.r11.s64 + 21156;
	// bl 0x82ca7538
	ctx.lr = 0x8318D1C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3780(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3780, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D1D8"))) PPC_WEAK_FUNC(sub_8318D1D8);
PPC_FUNC_IMPL(__imp__sub_8318D1D8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21176
	ctx.r3.s64 = ctx.r11.s64 + 21176;
	// bl 0x82ca7538
	ctx.lr = 0x8318D1F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-904(r11)
	PPC_STORE_U32(ctx.r11.u32 + -904, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D208"))) PPC_WEAK_FUNC(sub_8318D208);
PPC_FUNC_IMPL(__imp__sub_8318D208) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21196
	ctx.r3.s64 = ctx.r11.s64 + 21196;
	// bl 0x82ca7538
	ctx.lr = 0x8318D220;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3504(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3504, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D238"))) PPC_WEAK_FUNC(sub_8318D238);
PPC_FUNC_IMPL(__imp__sub_8318D238) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21224
	ctx.r3.s64 = ctx.r11.s64 + 21224;
	// bl 0x82ca7538
	ctx.lr = 0x8318D250;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3688(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3688, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D268"))) PPC_WEAK_FUNC(sub_8318D268);
PPC_FUNC_IMPL(__imp__sub_8318D268) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21244
	ctx.r3.s64 = ctx.r11.s64 + 21244;
	// bl 0x82ca7538
	ctx.lr = 0x8318D280;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3920(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3920, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D298"))) PPC_WEAK_FUNC(sub_8318D298);
PPC_FUNC_IMPL(__imp__sub_8318D298) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21268
	ctx.r3.s64 = ctx.r11.s64 + 21268;
	// bl 0x82ca7538
	ctx.lr = 0x8318D2B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2908(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2908, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D2C8"))) PPC_WEAK_FUNC(sub_8318D2C8);
PPC_FUNC_IMPL(__imp__sub_8318D2C8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21292
	ctx.r3.s64 = ctx.r11.s64 + 21292;
	// bl 0x82ca7538
	ctx.lr = 0x8318D2E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3676(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3676, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D2F8"))) PPC_WEAK_FUNC(sub_8318D2F8);
PPC_FUNC_IMPL(__imp__sub_8318D2F8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21316
	ctx.r3.s64 = ctx.r11.s64 + 21316;
	// bl 0x82ca7538
	ctx.lr = 0x8318D310;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1968(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1968, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D328"))) PPC_WEAK_FUNC(sub_8318D328);
PPC_FUNC_IMPL(__imp__sub_8318D328) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21336
	ctx.r3.s64 = ctx.r11.s64 + 21336;
	// bl 0x82ca7538
	ctx.lr = 0x8318D340;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-364(r11)
	PPC_STORE_U32(ctx.r11.u32 + -364, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D358"))) PPC_WEAK_FUNC(sub_8318D358);
PPC_FUNC_IMPL(__imp__sub_8318D358) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21348
	ctx.r3.s64 = ctx.r11.s64 + 21348;
	// bl 0x82ca7538
	ctx.lr = 0x8318D370;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6200, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D388"))) PPC_WEAK_FUNC(sub_8318D388);
PPC_FUNC_IMPL(__imp__sub_8318D388) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21372
	ctx.r3.s64 = ctx.r11.s64 + 21372;
	// bl 0x82ca7538
	ctx.lr = 0x8318D3A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3632(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3632, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D3B8"))) PPC_WEAK_FUNC(sub_8318D3B8);
PPC_FUNC_IMPL(__imp__sub_8318D3B8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21396
	ctx.r3.s64 = ctx.r11.s64 + 21396;
	// bl 0x82ca7538
	ctx.lr = 0x8318D3D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1816(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1816, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D3E8"))) PPC_WEAK_FUNC(sub_8318D3E8);
PPC_FUNC_IMPL(__imp__sub_8318D3E8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21424
	ctx.r3.s64 = ctx.r11.s64 + 21424;
	// bl 0x82ca7538
	ctx.lr = 0x8318D400;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3812(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3812, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D418"))) PPC_WEAK_FUNC(sub_8318D418);
PPC_FUNC_IMPL(__imp__sub_8318D418) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21452
	ctx.r3.s64 = ctx.r11.s64 + 21452;
	// bl 0x82ca7538
	ctx.lr = 0x8318D430;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3800(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3800, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D448"))) PPC_WEAK_FUNC(sub_8318D448);
PPC_FUNC_IMPL(__imp__sub_8318D448) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21476
	ctx.r3.s64 = ctx.r11.s64 + 21476;
	// bl 0x82ca7538
	ctx.lr = 0x8318D460;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2576(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2576, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D478"))) PPC_WEAK_FUNC(sub_8318D478);
PPC_FUNC_IMPL(__imp__sub_8318D478) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21500
	ctx.r3.s64 = ctx.r11.s64 + 21500;
	// bl 0x82ca7538
	ctx.lr = 0x8318D490;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3756(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3756, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D4A8"))) PPC_WEAK_FUNC(sub_8318D4A8);
PPC_FUNC_IMPL(__imp__sub_8318D4A8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21516
	ctx.r3.s64 = ctx.r11.s64 + 21516;
	// bl 0x82ca7538
	ctx.lr = 0x8318D4C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3688(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3688, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D4D8"))) PPC_WEAK_FUNC(sub_8318D4D8);
PPC_FUNC_IMPL(__imp__sub_8318D4D8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21544
	ctx.r3.s64 = ctx.r11.s64 + 21544;
	// bl 0x82ca7538
	ctx.lr = 0x8318D4F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-820(r11)
	PPC_STORE_U32(ctx.r11.u32 + -820, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D508"))) PPC_WEAK_FUNC(sub_8318D508);
PPC_FUNC_IMPL(__imp__sub_8318D508) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21580
	ctx.r3.s64 = ctx.r11.s64 + 21580;
	// bl 0x82ca7538
	ctx.lr = 0x8318D520;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D538"))) PPC_WEAK_FUNC(sub_8318D538);
PPC_FUNC_IMPL(__imp__sub_8318D538) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21596
	ctx.r3.s64 = ctx.r11.s64 + 21596;
	// bl 0x82ca7538
	ctx.lr = 0x8318D550;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D568"))) PPC_WEAK_FUNC(sub_8318D568);
PPC_FUNC_IMPL(__imp__sub_8318D568) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21612
	ctx.r3.s64 = ctx.r11.s64 + 21612;
	// bl 0x82ca7538
	ctx.lr = 0x8318D580;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5124, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D598"))) PPC_WEAK_FUNC(sub_8318D598);
PPC_FUNC_IMPL(__imp__sub_8318D598) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21632
	ctx.r3.s64 = ctx.r11.s64 + 21632;
	// bl 0x82ca7538
	ctx.lr = 0x8318D5B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D5C8"))) PPC_WEAK_FUNC(sub_8318D5C8);
PPC_FUNC_IMPL(__imp__sub_8318D5C8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21652
	ctx.r3.s64 = ctx.r11.s64 + 21652;
	// bl 0x82ca7538
	ctx.lr = 0x8318D5E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D5F8"))) PPC_WEAK_FUNC(sub_8318D5F8);
PPC_FUNC_IMPL(__imp__sub_8318D5F8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21668
	ctx.r3.s64 = ctx.r11.s64 + 21668;
	// bl 0x82ca7538
	ctx.lr = 0x8318D610;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D628"))) PPC_WEAK_FUNC(sub_8318D628);
PPC_FUNC_IMPL(__imp__sub_8318D628) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21688
	ctx.r3.s64 = ctx.r11.s64 + 21688;
	// bl 0x82ca7538
	ctx.lr = 0x8318D640;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D658"))) PPC_WEAK_FUNC(sub_8318D658);
PPC_FUNC_IMPL(__imp__sub_8318D658) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21712
	ctx.r3.s64 = ctx.r11.s64 + 21712;
	// bl 0x82ca7538
	ctx.lr = 0x8318D670;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D688"))) PPC_WEAK_FUNC(sub_8318D688);
PPC_FUNC_IMPL(__imp__sub_8318D688) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21732
	ctx.r3.s64 = ctx.r11.s64 + 21732;
	// bl 0x82ca7538
	ctx.lr = 0x8318D6A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D6B8"))) PPC_WEAK_FUNC(sub_8318D6B8);
PPC_FUNC_IMPL(__imp__sub_8318D6B8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21760
	ctx.r3.s64 = ctx.r11.s64 + 21760;
	// bl 0x82ca7538
	ctx.lr = 0x8318D6D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D6E8"))) PPC_WEAK_FUNC(sub_8318D6E8);
PPC_FUNC_IMPL(__imp__sub_8318D6E8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21788
	ctx.r3.s64 = ctx.r11.s64 + 21788;
	// bl 0x82ca7538
	ctx.lr = 0x8318D700;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D718"))) PPC_WEAK_FUNC(sub_8318D718);
PPC_FUNC_IMPL(__imp__sub_8318D718) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21824
	ctx.r3.s64 = ctx.r11.s64 + 21824;
	// bl 0x82ca7538
	ctx.lr = 0x8318D730;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2660, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D748"))) PPC_WEAK_FUNC(sub_8318D748);
PPC_FUNC_IMPL(__imp__sub_8318D748) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21860
	ctx.r3.s64 = ctx.r11.s64 + 21860;
	// bl 0x82ca7538
	ctx.lr = 0x8318D760;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2792(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2792, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D778"))) PPC_WEAK_FUNC(sub_8318D778);
PPC_FUNC_IMPL(__imp__sub_8318D778) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21884
	ctx.r3.s64 = ctx.r11.s64 + 21884;
	// bl 0x82ca7538
	ctx.lr = 0x8318D790;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D7A8"))) PPC_WEAK_FUNC(sub_8318D7A8);
PPC_FUNC_IMPL(__imp__sub_8318D7A8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21912
	ctx.r3.s64 = ctx.r11.s64 + 21912;
	// bl 0x82ca7538
	ctx.lr = 0x8318D7C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D7D8"))) PPC_WEAK_FUNC(sub_8318D7D8);
PPC_FUNC_IMPL(__imp__sub_8318D7D8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21944
	ctx.r3.s64 = ctx.r11.s64 + 21944;
	// bl 0x82ca7538
	ctx.lr = 0x8318D7F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1364, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D808"))) PPC_WEAK_FUNC(sub_8318D808);
PPC_FUNC_IMPL(__imp__sub_8318D808) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,21972
	ctx.r3.s64 = ctx.r11.s64 + 21972;
	// bl 0x82ca7538
	ctx.lr = 0x8318D820;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D838"))) PPC_WEAK_FUNC(sub_8318D838);
PPC_FUNC_IMPL(__imp__sub_8318D838) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,22004
	ctx.r3.s64 = ctx.r11.s64 + 22004;
	// bl 0x82ca7538
	ctx.lr = 0x8318D850;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D868"))) PPC_WEAK_FUNC(sub_8318D868);
PPC_FUNC_IMPL(__imp__sub_8318D868) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,22036
	ctx.r3.s64 = ctx.r11.s64 + 22036;
	// bl 0x82ca7538
	ctx.lr = 0x8318D880;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1000(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1000, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D898"))) PPC_WEAK_FUNC(sub_8318D898);
PPC_FUNC_IMPL(__imp__sub_8318D898) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,22076
	ctx.r3.s64 = ctx.r11.s64 + 22076;
	// bl 0x82ca7538
	ctx.lr = 0x8318D8B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2384(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2384, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D8C8"))) PPC_WEAK_FUNC(sub_8318D8C8);
PPC_FUNC_IMPL(__imp__sub_8318D8C8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,22116
	ctx.r3.s64 = ctx.r11.s64 + 22116;
	// bl 0x82ca7538
	ctx.lr = 0x8318D8E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1340(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1340, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D8F8"))) PPC_WEAK_FUNC(sub_8318D8F8);
PPC_FUNC_IMPL(__imp__sub_8318D8F8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,22168
	ctx.r3.s64 = ctx.r11.s64 + 22168;
	// bl 0x82ca7538
	ctx.lr = 0x8318D910;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4984(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4984, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D928"))) PPC_WEAK_FUNC(sub_8318D928);
PPC_FUNC_IMPL(__imp__sub_8318D928) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,22216
	ctx.r3.s64 = ctx.r11.s64 + 22216;
	// bl 0x82ca7538
	ctx.lr = 0x8318D940;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2604(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2604, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D958"))) PPC_WEAK_FUNC(sub_8318D958);
PPC_FUNC_IMPL(__imp__sub_8318D958) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,22260
	ctx.r3.s64 = ctx.r11.s64 + 22260;
	// bl 0x82ca7538
	ctx.lr = 0x8318D970;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,968(r11)
	PPC_STORE_U32(ctx.r11.u32 + 968, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D988"))) PPC_WEAK_FUNC(sub_8318D988);
PPC_FUNC_IMPL(__imp__sub_8318D988) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,22300
	ctx.r3.s64 = ctx.r11.s64 + 22300;
	// bl 0x82ca7538
	ctx.lr = 0x8318D9A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-132(r11)
	PPC_STORE_U32(ctx.r11.u32 + -132, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D9B8"))) PPC_WEAK_FUNC(sub_8318D9B8);
PPC_FUNC_IMPL(__imp__sub_8318D9B8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,22344
	ctx.r3.s64 = ctx.r11.s64 + 22344;
	// bl 0x82ca7538
	ctx.lr = 0x8318D9D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4632(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4632, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D9E8"))) PPC_WEAK_FUNC(sub_8318D9E8);
PPC_FUNC_IMPL(__imp__sub_8318D9E8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,22384
	ctx.r3.s64 = ctx.r11.s64 + 22384;
	// bl 0x82ca7538
	ctx.lr = 0x8318DA00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1496(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1496, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DA18"))) PPC_WEAK_FUNC(sub_8318DA18);
PPC_FUNC_IMPL(__imp__sub_8318DA18) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,22432
	ctx.r3.s64 = ctx.r11.s64 + 22432;
	// bl 0x82ca7538
	ctx.lr = 0x8318DA30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3588(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3588, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DA48"))) PPC_WEAK_FUNC(sub_8318DA48);
PPC_FUNC_IMPL(__imp__sub_8318DA48) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,22480
	ctx.r3.s64 = ctx.r11.s64 + 22480;
	// bl 0x82ca7538
	ctx.lr = 0x8318DA60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-496(r11)
	PPC_STORE_U32(ctx.r11.u32 + -496, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DA78"))) PPC_WEAK_FUNC(sub_8318DA78);
PPC_FUNC_IMPL(__imp__sub_8318DA78) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,22524
	ctx.r3.s64 = ctx.r11.s64 + 22524;
	// bl 0x82ca7538
	ctx.lr = 0x8318DA90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1432(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1432, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DAA8"))) PPC_WEAK_FUNC(sub_8318DAA8);
PPC_FUNC_IMPL(__imp__sub_8318DAA8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,22568
	ctx.r3.s64 = ctx.r11.s64 + 22568;
	// bl 0x82ca7538
	ctx.lr = 0x8318DAC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7208(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7208, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DAD8"))) PPC_WEAK_FUNC(sub_8318DAD8);
PPC_FUNC_IMPL(__imp__sub_8318DAD8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,22608
	ctx.r3.s64 = ctx.r11.s64 + 22608;
	// bl 0x82ca7538
	ctx.lr = 0x8318DAF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5596(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5596, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DB08"))) PPC_WEAK_FUNC(sub_8318DB08);
PPC_FUNC_IMPL(__imp__sub_8318DB08) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,22648
	ctx.r3.s64 = ctx.r11.s64 + 22648;
	// bl 0x82ca7538
	ctx.lr = 0x8318DB20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6820(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6820, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DB38"))) PPC_WEAK_FUNC(sub_8318DB38);
PPC_FUNC_IMPL(__imp__sub_8318DB38) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,22692
	ctx.r3.s64 = ctx.r11.s64 + 22692;
	// bl 0x82ca7538
	ctx.lr = 0x8318DB50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7256(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7256, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DB68"))) PPC_WEAK_FUNC(sub_8318DB68);
PPC_FUNC_IMPL(__imp__sub_8318DB68) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,22716
	ctx.r3.s64 = ctx.r11.s64 + 22716;
	// bl 0x82ca7538
	ctx.lr = 0x8318DB80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7000(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7000, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DB98"))) PPC_WEAK_FUNC(sub_8318DB98);
PPC_FUNC_IMPL(__imp__sub_8318DB98) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,22752
	ctx.r3.s64 = ctx.r11.s64 + 22752;
	// bl 0x82ca7538
	ctx.lr = 0x8318DBB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1484, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DBC8"))) PPC_WEAK_FUNC(sub_8318DBC8);
PPC_FUNC_IMPL(__imp__sub_8318DBC8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,22792
	ctx.r3.s64 = ctx.r11.s64 + 22792;
	// bl 0x82ca7538
	ctx.lr = 0x8318DBE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2032(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2032, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DBF8"))) PPC_WEAK_FUNC(sub_8318DBF8);
PPC_FUNC_IMPL(__imp__sub_8318DBF8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,22832
	ctx.r3.s64 = ctx.r11.s64 + 22832;
	// bl 0x82ca7538
	ctx.lr = 0x8318DC10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-352(r11)
	PPC_STORE_U32(ctx.r11.u32 + -352, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DC28"))) PPC_WEAK_FUNC(sub_8318DC28);
PPC_FUNC_IMPL(__imp__sub_8318DC28) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,22872
	ctx.r3.s64 = ctx.r11.s64 + 22872;
	// bl 0x82ca7538
	ctx.lr = 0x8318DC40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5540(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5540, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DC58"))) PPC_WEAK_FUNC(sub_8318DC58);
PPC_FUNC_IMPL(__imp__sub_8318DC58) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,22892
	ctx.r3.s64 = ctx.r11.s64 + 22892;
	// bl 0x82ca7538
	ctx.lr = 0x8318DC70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5056(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5056, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DC88"))) PPC_WEAK_FUNC(sub_8318DC88);
PPC_FUNC_IMPL(__imp__sub_8318DC88) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,22916
	ctx.r3.s64 = ctx.r11.s64 + 22916;
	// bl 0x82ca7538
	ctx.lr = 0x8318DCA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5732(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5732, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DCB8"))) PPC_WEAK_FUNC(sub_8318DCB8);
PPC_FUNC_IMPL(__imp__sub_8318DCB8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,22944
	ctx.r3.s64 = ctx.r11.s64 + 22944;
	// bl 0x82ca7538
	ctx.lr = 0x8318DCD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1500(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1500, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DCE8"))) PPC_WEAK_FUNC(sub_8318DCE8);
PPC_FUNC_IMPL(__imp__sub_8318DCE8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,22972
	ctx.r3.s64 = ctx.r11.s64 + 22972;
	// bl 0x82ca7538
	ctx.lr = 0x8318DD00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-268(r11)
	PPC_STORE_U32(ctx.r11.u32 + -268, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DD18"))) PPC_WEAK_FUNC(sub_8318DD18);
PPC_FUNC_IMPL(__imp__sub_8318DD18) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,23008
	ctx.r3.s64 = ctx.r11.s64 + 23008;
	// bl 0x82ca7538
	ctx.lr = 0x8318DD30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3912(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3912, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DD48"))) PPC_WEAK_FUNC(sub_8318DD48);
PPC_FUNC_IMPL(__imp__sub_8318DD48) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,23044
	ctx.r3.s64 = ctx.r11.s64 + 23044;
	// bl 0x82ca7538
	ctx.lr = 0x8318DD60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6720(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6720, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DD78"))) PPC_WEAK_FUNC(sub_8318DD78);
PPC_FUNC_IMPL(__imp__sub_8318DD78) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,23068
	ctx.r3.s64 = ctx.r11.s64 + 23068;
	// bl 0x82ca7538
	ctx.lr = 0x8318DD90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4428(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4428, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DDA8"))) PPC_WEAK_FUNC(sub_8318DDA8);
PPC_FUNC_IMPL(__imp__sub_8318DDA8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,23092
	ctx.r3.s64 = ctx.r11.s64 + 23092;
	// bl 0x82ca7538
	ctx.lr = 0x8318DDC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1952(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1952, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DDD8"))) PPC_WEAK_FUNC(sub_8318DDD8);
PPC_FUNC_IMPL(__imp__sub_8318DDD8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,23112
	ctx.r3.s64 = ctx.r11.s64 + 23112;
	// bl 0x82ca7538
	ctx.lr = 0x8318DDF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6876(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6876, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DE08"))) PPC_WEAK_FUNC(sub_8318DE08);
PPC_FUNC_IMPL(__imp__sub_8318DE08) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,23144
	ctx.r3.s64 = ctx.r11.s64 + 23144;
	// bl 0x82ca7538
	ctx.lr = 0x8318DE20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5924(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5924, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DE38"))) PPC_WEAK_FUNC(sub_8318DE38);
PPC_FUNC_IMPL(__imp__sub_8318DE38) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,23172
	ctx.r3.s64 = ctx.r11.s64 + 23172;
	// bl 0x82ca7538
	ctx.lr = 0x8318DE50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7264(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7264, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DE68"))) PPC_WEAK_FUNC(sub_8318DE68);
PPC_FUNC_IMPL(__imp__sub_8318DE68) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,23196
	ctx.r3.s64 = ctx.r11.s64 + 23196;
	// bl 0x82ca7538
	ctx.lr = 0x8318DE80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3904(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3904, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DE98"))) PPC_WEAK_FUNC(sub_8318DE98);
PPC_FUNC_IMPL(__imp__sub_8318DE98) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,23224
	ctx.r3.s64 = ctx.r11.s64 + 23224;
	// bl 0x82ca7538
	ctx.lr = 0x8318DEB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6996(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6996, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DEC8"))) PPC_WEAK_FUNC(sub_8318DEC8);
PPC_FUNC_IMPL(__imp__sub_8318DEC8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,23248
	ctx.r3.s64 = ctx.r11.s64 + 23248;
	// bl 0x82ca7538
	ctx.lr = 0x8318DEE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4348(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4348, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DEF8"))) PPC_WEAK_FUNC(sub_8318DEF8);
PPC_FUNC_IMPL(__imp__sub_8318DEF8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,23280
	ctx.r3.s64 = ctx.r11.s64 + 23280;
	// bl 0x82ca7538
	ctx.lr = 0x8318DF10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1980(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1980, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DF28"))) PPC_WEAK_FUNC(sub_8318DF28);
PPC_FUNC_IMPL(__imp__sub_8318DF28) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,23304
	ctx.r3.s64 = ctx.r11.s64 + 23304;
	// bl 0x82ca7538
	ctx.lr = 0x8318DF40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6136, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DF58"))) PPC_WEAK_FUNC(sub_8318DF58);
PPC_FUNC_IMPL(__imp__sub_8318DF58) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,23332
	ctx.r3.s64 = ctx.r11.s64 + 23332;
	// bl 0x82ca7538
	ctx.lr = 0x8318DF70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-748(r11)
	PPC_STORE_U32(ctx.r11.u32 + -748, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DF88"))) PPC_WEAK_FUNC(sub_8318DF88);
PPC_FUNC_IMPL(__imp__sub_8318DF88) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,23360
	ctx.r3.s64 = ctx.r11.s64 + 23360;
	// bl 0x82ca7538
	ctx.lr = 0x8318DFA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2316(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2316, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DFB8"))) PPC_WEAK_FUNC(sub_8318DFB8);
PPC_FUNC_IMPL(__imp__sub_8318DFB8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,23396
	ctx.r3.s64 = ctx.r11.s64 + 23396;
	// bl 0x82ca7538
	ctx.lr = 0x8318DFD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7272(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7272, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DFE8"))) PPC_WEAK_FUNC(sub_8318DFE8);
PPC_FUNC_IMPL(__imp__sub_8318DFE8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,23416
	ctx.r3.s64 = ctx.r11.s64 + 23416;
	// bl 0x82ca7538
	ctx.lr = 0x8318E000;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3604(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3604, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E018"))) PPC_WEAK_FUNC(sub_8318E018);
PPC_FUNC_IMPL(__imp__sub_8318E018) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,23440
	ctx.r3.s64 = ctx.r11.s64 + 23440;
	// bl 0x82ca7538
	ctx.lr = 0x8318E030;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7252(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7252, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E048"))) PPC_WEAK_FUNC(sub_8318E048);
PPC_FUNC_IMPL(__imp__sub_8318E048) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,23464
	ctx.r3.s64 = ctx.r11.s64 + 23464;
	// bl 0x82ca7538
	ctx.lr = 0x8318E060;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2668(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2668, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E078"))) PPC_WEAK_FUNC(sub_8318E078);
PPC_FUNC_IMPL(__imp__sub_8318E078) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,23488
	ctx.r3.s64 = ctx.r11.s64 + 23488;
	// bl 0x82ca7538
	ctx.lr = 0x8318E090;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6568(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6568, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E0A8"))) PPC_WEAK_FUNC(sub_8318E0A8);
PPC_FUNC_IMPL(__imp__sub_8318E0A8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,23512
	ctx.r3.s64 = ctx.r11.s64 + 23512;
	// bl 0x82ca7538
	ctx.lr = 0x8318E0C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4668(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4668, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E0D8"))) PPC_WEAK_FUNC(sub_8318E0D8);
PPC_FUNC_IMPL(__imp__sub_8318E0D8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,23532
	ctx.r3.s64 = ctx.r11.s64 + 23532;
	// bl 0x82ca7538
	ctx.lr = 0x8318E0F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1740(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1740, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E108"))) PPC_WEAK_FUNC(sub_8318E108);
PPC_FUNC_IMPL(__imp__sub_8318E108) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,23552
	ctx.r3.s64 = ctx.r11.s64 + 23552;
	// bl 0x82ca7538
	ctx.lr = 0x8318E120;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5860(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5860, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E138"))) PPC_WEAK_FUNC(sub_8318E138);
PPC_FUNC_IMPL(__imp__sub_8318E138) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,23584
	ctx.r3.s64 = ctx.r11.s64 + 23584;
	// bl 0x82ca7538
	ctx.lr = 0x8318E150;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4292(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4292, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E168"))) PPC_WEAK_FUNC(sub_8318E168);
PPC_FUNC_IMPL(__imp__sub_8318E168) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,23608
	ctx.r3.s64 = ctx.r11.s64 + 23608;
	// bl 0x82ca7538
	ctx.lr = 0x8318E180;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4248(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4248, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E198"))) PPC_WEAK_FUNC(sub_8318E198);
PPC_FUNC_IMPL(__imp__sub_8318E198) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,23632
	ctx.r3.s64 = ctx.r11.s64 + 23632;
	// bl 0x82ca7538
	ctx.lr = 0x8318E1B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2780(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2780, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E1C8"))) PPC_WEAK_FUNC(sub_8318E1C8);
PPC_FUNC_IMPL(__imp__sub_8318E1C8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,23664
	ctx.r3.s64 = ctx.r11.s64 + 23664;
	// bl 0x82ca7538
	ctx.lr = 0x8318E1E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6796(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6796, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E1F8"))) PPC_WEAK_FUNC(sub_8318E1F8);
PPC_FUNC_IMPL(__imp__sub_8318E1F8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,23684
	ctx.r3.s64 = ctx.r11.s64 + 23684;
	// bl 0x82ca7538
	ctx.lr = 0x8318E210;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3676(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3676, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E228"))) PPC_WEAK_FUNC(sub_8318E228);
PPC_FUNC_IMPL(__imp__sub_8318E228) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,23708
	ctx.r3.s64 = ctx.r11.s64 + 23708;
	// bl 0x82ca7538
	ctx.lr = 0x8318E240;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2708(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2708, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E258"))) PPC_WEAK_FUNC(sub_8318E258);
PPC_FUNC_IMPL(__imp__sub_8318E258) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,23732
	ctx.r3.s64 = ctx.r11.s64 + 23732;
	// bl 0x82ca7538
	ctx.lr = 0x8318E270;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1908(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1908, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E288"))) PPC_WEAK_FUNC(sub_8318E288);
PPC_FUNC_IMPL(__imp__sub_8318E288) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,23756
	ctx.r3.s64 = ctx.r11.s64 + 23756;
	// bl 0x82ca7538
	ctx.lr = 0x8318E2A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4156(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4156, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E2B8"))) PPC_WEAK_FUNC(sub_8318E2B8);
PPC_FUNC_IMPL(__imp__sub_8318E2B8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,23780
	ctx.r3.s64 = ctx.r11.s64 + 23780;
	// bl 0x82ca7538
	ctx.lr = 0x8318E2D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1920(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1920, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E2E8"))) PPC_WEAK_FUNC(sub_8318E2E8);
PPC_FUNC_IMPL(__imp__sub_8318E2E8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,23808
	ctx.r3.s64 = ctx.r11.s64 + 23808;
	// bl 0x82ca7538
	ctx.lr = 0x8318E300;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5448(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5448, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E318"))) PPC_WEAK_FUNC(sub_8318E318);
PPC_FUNC_IMPL(__imp__sub_8318E318) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,23840
	ctx.r3.s64 = ctx.r11.s64 + 23840;
	// bl 0x82ca7538
	ctx.lr = 0x8318E330;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4664(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4664, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E348"))) PPC_WEAK_FUNC(sub_8318E348);
PPC_FUNC_IMPL(__imp__sub_8318E348) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,23868
	ctx.r3.s64 = ctx.r11.s64 + 23868;
	// bl 0x82ca7538
	ctx.lr = 0x8318E360;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5512, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E378"))) PPC_WEAK_FUNC(sub_8318E378);
PPC_FUNC_IMPL(__imp__sub_8318E378) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,23896
	ctx.r3.s64 = ctx.r11.s64 + 23896;
	// bl 0x82ca7538
	ctx.lr = 0x8318E390;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2768(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2768, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E3A8"))) PPC_WEAK_FUNC(sub_8318E3A8);
PPC_FUNC_IMPL(__imp__sub_8318E3A8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,23924
	ctx.r3.s64 = ctx.r11.s64 + 23924;
	// bl 0x82ca7538
	ctx.lr = 0x8318E3C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5360(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5360, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E3D8"))) PPC_WEAK_FUNC(sub_8318E3D8);
PPC_FUNC_IMPL(__imp__sub_8318E3D8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,23960
	ctx.r3.s64 = ctx.r11.s64 + 23960;
	// bl 0x82ca7538
	ctx.lr = 0x8318E3F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6852(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6852, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E408"))) PPC_WEAK_FUNC(sub_8318E408);
PPC_FUNC_IMPL(__imp__sub_8318E408) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,23992
	ctx.r3.s64 = ctx.r11.s64 + 23992;
	// bl 0x82ca7538
	ctx.lr = 0x8318E420;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5612(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5612, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E438"))) PPC_WEAK_FUNC(sub_8318E438);
PPC_FUNC_IMPL(__imp__sub_8318E438) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,24020
	ctx.r3.s64 = ctx.r11.s64 + 24020;
	// bl 0x82ca7538
	ctx.lr = 0x8318E450;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1916(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1916, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E468"))) PPC_WEAK_FUNC(sub_8318E468);
PPC_FUNC_IMPL(__imp__sub_8318E468) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,24048
	ctx.r3.s64 = ctx.r11.s64 + 24048;
	// bl 0x82ca7538
	ctx.lr = 0x8318E480;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7236(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7236, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E498"))) PPC_WEAK_FUNC(sub_8318E498);
PPC_FUNC_IMPL(__imp__sub_8318E498) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,24072
	ctx.r3.s64 = ctx.r11.s64 + 24072;
	// bl 0x82ca7538
	ctx.lr = 0x8318E4B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-264(r11)
	PPC_STORE_U32(ctx.r11.u32 + -264, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E4C8"))) PPC_WEAK_FUNC(sub_8318E4C8);
PPC_FUNC_IMPL(__imp__sub_8318E4C8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,24096
	ctx.r3.s64 = ctx.r11.s64 + 24096;
	// bl 0x82ca7538
	ctx.lr = 0x8318E4E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4896(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4896, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E4F8"))) PPC_WEAK_FUNC(sub_8318E4F8);
PPC_FUNC_IMPL(__imp__sub_8318E4F8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,24112
	ctx.r3.s64 = ctx.r11.s64 + 24112;
	// bl 0x82ca7538
	ctx.lr = 0x8318E510;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4048(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4048, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E528"))) PPC_WEAK_FUNC(sub_8318E528);
PPC_FUNC_IMPL(__imp__sub_8318E528) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,24132
	ctx.r3.s64 = ctx.r11.s64 + 24132;
	// bl 0x82ca7538
	ctx.lr = 0x8318E540;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7132(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7132, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E558"))) PPC_WEAK_FUNC(sub_8318E558);
PPC_FUNC_IMPL(__imp__sub_8318E558) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,24148
	ctx.r3.s64 = ctx.r11.s64 + 24148;
	// bl 0x82ca7538
	ctx.lr = 0x8318E570;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4840(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4840, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E588"))) PPC_WEAK_FUNC(sub_8318E588);
PPC_FUNC_IMPL(__imp__sub_8318E588) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,24164
	ctx.r3.s64 = ctx.r11.s64 + 24164;
	// bl 0x82ca7538
	ctx.lr = 0x8318E5A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6452(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6452, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E5B8"))) PPC_WEAK_FUNC(sub_8318E5B8);
PPC_FUNC_IMPL(__imp__sub_8318E5B8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,24180
	ctx.r3.s64 = ctx.r11.s64 + 24180;
	// bl 0x82ca7538
	ctx.lr = 0x8318E5D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5752(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5752, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E5E8"))) PPC_WEAK_FUNC(sub_8318E5E8);
PPC_FUNC_IMPL(__imp__sub_8318E5E8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,24216
	ctx.r3.s64 = ctx.r11.s64 + 24216;
	// bl 0x82ca7538
	ctx.lr = 0x8318E600;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2144, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E618"))) PPC_WEAK_FUNC(sub_8318E618);
PPC_FUNC_IMPL(__imp__sub_8318E618) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,24240
	ctx.r3.s64 = ctx.r11.s64 + 24240;
	// bl 0x82ca7538
	ctx.lr = 0x8318E630;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1428(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1428, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E648"))) PPC_WEAK_FUNC(sub_8318E648);
PPC_FUNC_IMPL(__imp__sub_8318E648) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,24264
	ctx.r3.s64 = ctx.r11.s64 + 24264;
	// bl 0x82ca7538
	ctx.lr = 0x8318E660;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2048(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2048, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E678"))) PPC_WEAK_FUNC(sub_8318E678);
PPC_FUNC_IMPL(__imp__sub_8318E678) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,24296
	ctx.r3.s64 = ctx.r11.s64 + 24296;
	// bl 0x82ca7538
	ctx.lr = 0x8318E690;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3724(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3724, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E6A8"))) PPC_WEAK_FUNC(sub_8318E6A8);
PPC_FUNC_IMPL(__imp__sub_8318E6A8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,24320
	ctx.r3.s64 = ctx.r11.s64 + 24320;
	// bl 0x82ca7538
	ctx.lr = 0x8318E6C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2960(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2960, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E6D8"))) PPC_WEAK_FUNC(sub_8318E6D8);
PPC_FUNC_IMPL(__imp__sub_8318E6D8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,24344
	ctx.r3.s64 = ctx.r11.s64 + 24344;
	// bl 0x82ca7538
	ctx.lr = 0x8318E6F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5148, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E708"))) PPC_WEAK_FUNC(sub_8318E708);
PPC_FUNC_IMPL(__imp__sub_8318E708) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,24364
	ctx.r3.s64 = ctx.r11.s64 + 24364;
	// bl 0x82ca7538
	ctx.lr = 0x8318E720;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1184(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1184, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E738"))) PPC_WEAK_FUNC(sub_8318E738);
PPC_FUNC_IMPL(__imp__sub_8318E738) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,24388
	ctx.r3.s64 = ctx.r11.s64 + 24388;
	// bl 0x82ca7538
	ctx.lr = 0x8318E750;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6872(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6872, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E768"))) PPC_WEAK_FUNC(sub_8318E768);
PPC_FUNC_IMPL(__imp__sub_8318E768) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,24416
	ctx.r3.s64 = ctx.r11.s64 + 24416;
	// bl 0x82ca7538
	ctx.lr = 0x8318E780;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2436, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E798"))) PPC_WEAK_FUNC(sub_8318E798);
PPC_FUNC_IMPL(__imp__sub_8318E798) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,24452
	ctx.r3.s64 = ctx.r11.s64 + 24452;
	// bl 0x82ca7538
	ctx.lr = 0x8318E7B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1904(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1904, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E7C8"))) PPC_WEAK_FUNC(sub_8318E7C8);
PPC_FUNC_IMPL(__imp__sub_8318E7C8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,24480
	ctx.r3.s64 = ctx.r11.s64 + 24480;
	// bl 0x82ca7538
	ctx.lr = 0x8318E7E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1408(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1408, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E7F8"))) PPC_WEAK_FUNC(sub_8318E7F8);
PPC_FUNC_IMPL(__imp__sub_8318E7F8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,24504
	ctx.r3.s64 = ctx.r11.s64 + 24504;
	// bl 0x82ca7538
	ctx.lr = 0x8318E810;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1820(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1820, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E828"))) PPC_WEAK_FUNC(sub_8318E828);
PPC_FUNC_IMPL(__imp__sub_8318E828) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,24532
	ctx.r3.s64 = ctx.r11.s64 + 24532;
	// bl 0x82ca7538
	ctx.lr = 0x8318E840;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2752(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2752, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E858"))) PPC_WEAK_FUNC(sub_8318E858);
PPC_FUNC_IMPL(__imp__sub_8318E858) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,24564
	ctx.r3.s64 = ctx.r11.s64 + 24564;
	// bl 0x82ca7538
	ctx.lr = 0x8318E870;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-108(r11)
	PPC_STORE_U32(ctx.r11.u32 + -108, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E888"))) PPC_WEAK_FUNC(sub_8318E888);
PPC_FUNC_IMPL(__imp__sub_8318E888) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,24592
	ctx.r3.s64 = ctx.r11.s64 + 24592;
	// bl 0x82ca7538
	ctx.lr = 0x8318E8A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4232(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4232, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E8B8"))) PPC_WEAK_FUNC(sub_8318E8B8);
PPC_FUNC_IMPL(__imp__sub_8318E8B8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,24628
	ctx.r3.s64 = ctx.r11.s64 + 24628;
	// bl 0x82ca7538
	ctx.lr = 0x8318E8D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5216, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E8E8"))) PPC_WEAK_FUNC(sub_8318E8E8);
PPC_FUNC_IMPL(__imp__sub_8318E8E8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,24656
	ctx.r3.s64 = ctx.r11.s64 + 24656;
	// bl 0x82ca7538
	ctx.lr = 0x8318E900;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2844(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2844, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E918"))) PPC_WEAK_FUNC(sub_8318E918);
PPC_FUNC_IMPL(__imp__sub_8318E918) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,24688
	ctx.r3.s64 = ctx.r11.s64 + 24688;
	// bl 0x82ca7538
	ctx.lr = 0x8318E930;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-636(r11)
	PPC_STORE_U32(ctx.r11.u32 + -636, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E948"))) PPC_WEAK_FUNC(sub_8318E948);
PPC_FUNC_IMPL(__imp__sub_8318E948) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,24716
	ctx.r3.s64 = ctx.r11.s64 + 24716;
	// bl 0x82ca7538
	ctx.lr = 0x8318E960;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-260(r11)
	PPC_STORE_U32(ctx.r11.u32 + -260, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E978"))) PPC_WEAK_FUNC(sub_8318E978);
PPC_FUNC_IMPL(__imp__sub_8318E978) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,24752
	ctx.r3.s64 = ctx.r11.s64 + 24752;
	// bl 0x82ca7538
	ctx.lr = 0x8318E990;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-324(r11)
	PPC_STORE_U32(ctx.r11.u32 + -324, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E9A8"))) PPC_WEAK_FUNC(sub_8318E9A8);
PPC_FUNC_IMPL(__imp__sub_8318E9A8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,24788
	ctx.r3.s64 = ctx.r11.s64 + 24788;
	// bl 0x82ca7538
	ctx.lr = 0x8318E9C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1976(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1976, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E9D8"))) PPC_WEAK_FUNC(sub_8318E9D8);
PPC_FUNC_IMPL(__imp__sub_8318E9D8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,24820
	ctx.r3.s64 = ctx.r11.s64 + 24820;
	// bl 0x82ca7538
	ctx.lr = 0x8318E9F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-420(r11)
	PPC_STORE_U32(ctx.r11.u32 + -420, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318EA08"))) PPC_WEAK_FUNC(sub_8318EA08);
PPC_FUNC_IMPL(__imp__sub_8318EA08) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,24848
	ctx.r3.s64 = ctx.r11.s64 + 24848;
	// bl 0x82ca7538
	ctx.lr = 0x8318EA20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4948(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4948, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318EA38"))) PPC_WEAK_FUNC(sub_8318EA38);
PPC_FUNC_IMPL(__imp__sub_8318EA38) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,24880
	ctx.r3.s64 = ctx.r11.s64 + 24880;
	// bl 0x82ca7538
	ctx.lr = 0x8318EA50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2748(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2748, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318EA68"))) PPC_WEAK_FUNC(sub_8318EA68);
PPC_FUNC_IMPL(__imp__sub_8318EA68) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,24912
	ctx.r3.s64 = ctx.r11.s64 + 24912;
	// bl 0x82ca7538
	ctx.lr = 0x8318EA80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4004(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4004, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318EA98"))) PPC_WEAK_FUNC(sub_8318EA98);
PPC_FUNC_IMPL(__imp__sub_8318EA98) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,24948
	ctx.r3.s64 = ctx.r11.s64 + 24948;
	// bl 0x82ca7538
	ctx.lr = 0x8318EAB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-332(r11)
	PPC_STORE_U32(ctx.r11.u32 + -332, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318EAC8"))) PPC_WEAK_FUNC(sub_8318EAC8);
PPC_FUNC_IMPL(__imp__sub_8318EAC8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,24984
	ctx.r3.s64 = ctx.r11.s64 + 24984;
	// bl 0x82ca7538
	ctx.lr = 0x8318EAE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1204, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318EAF8"))) PPC_WEAK_FUNC(sub_8318EAF8);
PPC_FUNC_IMPL(__imp__sub_8318EAF8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,25016
	ctx.r3.s64 = ctx.r11.s64 + 25016;
	// bl 0x82ca7538
	ctx.lr = 0x8318EB10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2828(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2828, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318EB28"))) PPC_WEAK_FUNC(sub_8318EB28);
PPC_FUNC_IMPL(__imp__sub_8318EB28) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,25044
	ctx.r3.s64 = ctx.r11.s64 + 25044;
	// bl 0x82ca7538
	ctx.lr = 0x8318EB40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3304(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3304, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318EB58"))) PPC_WEAK_FUNC(sub_8318EB58);
PPC_FUNC_IMPL(__imp__sub_8318EB58) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,25076
	ctx.r3.s64 = ctx.r11.s64 + 25076;
	// bl 0x82ca7538
	ctx.lr = 0x8318EB70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3940(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3940, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318EB88"))) PPC_WEAK_FUNC(sub_8318EB88);
PPC_FUNC_IMPL(__imp__sub_8318EB88) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,25108
	ctx.r3.s64 = ctx.r11.s64 + 25108;
	// bl 0x82ca7538
	ctx.lr = 0x8318EBA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6896(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6896, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318EBB8"))) PPC_WEAK_FUNC(sub_8318EBB8);
PPC_FUNC_IMPL(__imp__sub_8318EBB8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,25148
	ctx.r3.s64 = ctx.r11.s64 + 25148;
	// bl 0x82ca7538
	ctx.lr = 0x8318EBD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6840(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6840, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318EBE8"))) PPC_WEAK_FUNC(sub_8318EBE8);
PPC_FUNC_IMPL(__imp__sub_8318EBE8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,25184
	ctx.r3.s64 = ctx.r11.s64 + 25184;
	// bl 0x82ca7538
	ctx.lr = 0x8318EC00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2028(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2028, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318EC18"))) PPC_WEAK_FUNC(sub_8318EC18);
PPC_FUNC_IMPL(__imp__sub_8318EC18) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,25220
	ctx.r3.s64 = ctx.r11.s64 + 25220;
	// bl 0x82ca7538
	ctx.lr = 0x8318EC30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5592(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5592, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318EC48"))) PPC_WEAK_FUNC(sub_8318EC48);
PPC_FUNC_IMPL(__imp__sub_8318EC48) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,25252
	ctx.r3.s64 = ctx.r11.s64 + 25252;
	// bl 0x82ca7538
	ctx.lr = 0x8318EC60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1932(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1932, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318EC78"))) PPC_WEAK_FUNC(sub_8318EC78);
PPC_FUNC_IMPL(__imp__sub_8318EC78) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,25284
	ctx.r3.s64 = ctx.r11.s64 + 25284;
	// bl 0x82ca7538
	ctx.lr = 0x8318EC90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4308(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4308, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318ECA8"))) PPC_WEAK_FUNC(sub_8318ECA8);
PPC_FUNC_IMPL(__imp__sub_8318ECA8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,25316
	ctx.r3.s64 = ctx.r11.s64 + 25316;
	// bl 0x82ca7538
	ctx.lr = 0x8318ECC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2356(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2356, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318ECD8"))) PPC_WEAK_FUNC(sub_8318ECD8);
PPC_FUNC_IMPL(__imp__sub_8318ECD8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,25352
	ctx.r3.s64 = ctx.r11.s64 + 25352;
	// bl 0x82ca7538
	ctx.lr = 0x8318ECF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5876(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5876, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318ED08"))) PPC_WEAK_FUNC(sub_8318ED08);
PPC_FUNC_IMPL(__imp__sub_8318ED08) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,25388
	ctx.r3.s64 = ctx.r11.s64 + 25388;
	// bl 0x82ca7538
	ctx.lr = 0x8318ED20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2296(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2296, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318ED38"))) PPC_WEAK_FUNC(sub_8318ED38);
PPC_FUNC_IMPL(__imp__sub_8318ED38) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,25428
	ctx.r3.s64 = ctx.r11.s64 + 25428;
	// bl 0x82ca7538
	ctx.lr = 0x8318ED50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4956(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4956, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318ED68"))) PPC_WEAK_FUNC(sub_8318ED68);
PPC_FUNC_IMPL(__imp__sub_8318ED68) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,25468
	ctx.r3.s64 = ctx.r11.s64 + 25468;
	// bl 0x82ca7538
	ctx.lr = 0x8318ED80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6880(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6880, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318ED98"))) PPC_WEAK_FUNC(sub_8318ED98);
PPC_FUNC_IMPL(__imp__sub_8318ED98) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,25512
	ctx.r3.s64 = ctx.r11.s64 + 25512;
	// bl 0x82ca7538
	ctx.lr = 0x8318EDB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318EDC8"))) PPC_WEAK_FUNC(sub_8318EDC8);
PPC_FUNC_IMPL(__imp__sub_8318EDC8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,25552
	ctx.r3.s64 = ctx.r11.s64 + 25552;
	// bl 0x82ca7538
	ctx.lr = 0x8318EDE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1464, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318EDF8"))) PPC_WEAK_FUNC(sub_8318EDF8);
PPC_FUNC_IMPL(__imp__sub_8318EDF8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,25580
	ctx.r3.s64 = ctx.r11.s64 + 25580;
	// bl 0x82ca7538
	ctx.lr = 0x8318EE10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4708(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4708, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318EE28"))) PPC_WEAK_FUNC(sub_8318EE28);
PPC_FUNC_IMPL(__imp__sub_8318EE28) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,25608
	ctx.r3.s64 = ctx.r11.s64 + 25608;
	// bl 0x82ca7538
	ctx.lr = 0x8318EE40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2080(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2080, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318EE58"))) PPC_WEAK_FUNC(sub_8318EE58);
PPC_FUNC_IMPL(__imp__sub_8318EE58) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,25644
	ctx.r3.s64 = ctx.r11.s64 + 25644;
	// bl 0x82ca7538
	ctx.lr = 0x8318EE70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2936(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2936, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318EE88"))) PPC_WEAK_FUNC(sub_8318EE88);
PPC_FUNC_IMPL(__imp__sub_8318EE88) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,25680
	ctx.r3.s64 = ctx.r11.s64 + 25680;
	// bl 0x82ca7538
	ctx.lr = 0x8318EEA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7240(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7240, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318EEB8"))) PPC_WEAK_FUNC(sub_8318EEB8);
PPC_FUNC_IMPL(__imp__sub_8318EEB8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,25708
	ctx.r3.s64 = ctx.r11.s64 + 25708;
	// bl 0x82ca7538
	ctx.lr = 0x8318EED0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6828(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6828, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318EEE8"))) PPC_WEAK_FUNC(sub_8318EEE8);
PPC_FUNC_IMPL(__imp__sub_8318EEE8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,25740
	ctx.r3.s64 = ctx.r11.s64 + 25740;
	// bl 0x82ca7538
	ctx.lr = 0x8318EF00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2240, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318EF18"))) PPC_WEAK_FUNC(sub_8318EF18);
PPC_FUNC_IMPL(__imp__sub_8318EF18) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,25772
	ctx.r3.s64 = ctx.r11.s64 + 25772;
	// bl 0x82ca7538
	ctx.lr = 0x8318EF30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,972(r11)
	PPC_STORE_U32(ctx.r11.u32 + 972, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318EF48"))) PPC_WEAK_FUNC(sub_8318EF48);
PPC_FUNC_IMPL(__imp__sub_8318EF48) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,25808
	ctx.r3.s64 = ctx.r11.s64 + 25808;
	// bl 0x82ca7538
	ctx.lr = 0x8318EF60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6756(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6756, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318EF78"))) PPC_WEAK_FUNC(sub_8318EF78);
PPC_FUNC_IMPL(__imp__sub_8318EF78) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,25840
	ctx.r3.s64 = ctx.r11.s64 + 25840;
	// bl 0x82ca7538
	ctx.lr = 0x8318EF90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7128(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7128, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318EFA8"))) PPC_WEAK_FUNC(sub_8318EFA8);
PPC_FUNC_IMPL(__imp__sub_8318EFA8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,25880
	ctx.r3.s64 = ctx.r11.s64 + 25880;
	// bl 0x82ca7538
	ctx.lr = 0x8318EFC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2716(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2716, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318EFD8"))) PPC_WEAK_FUNC(sub_8318EFD8);
PPC_FUNC_IMPL(__imp__sub_8318EFD8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,25920
	ctx.r3.s64 = ctx.r11.s64 + 25920;
	// bl 0x82ca7538
	ctx.lr = 0x8318EFF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4152(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4152, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F008"))) PPC_WEAK_FUNC(sub_8318F008);
PPC_FUNC_IMPL(__imp__sub_8318F008) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,25960
	ctx.r3.s64 = ctx.r11.s64 + 25960;
	// bl 0x82ca7538
	ctx.lr = 0x8318F020;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 488, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F038"))) PPC_WEAK_FUNC(sub_8318F038);
PPC_FUNC_IMPL(__imp__sub_8318F038) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,26000
	ctx.r3.s64 = ctx.r11.s64 + 26000;
	// bl 0x82ca7538
	ctx.lr = 0x8318F050;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4024, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F068"))) PPC_WEAK_FUNC(sub_8318F068);
PPC_FUNC_IMPL(__imp__sub_8318F068) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,26032
	ctx.r3.s64 = ctx.r11.s64 + 26032;
	// bl 0x82ca7538
	ctx.lr = 0x8318F080;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-432(r11)
	PPC_STORE_U32(ctx.r11.u32 + -432, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F098"))) PPC_WEAK_FUNC(sub_8318F098);
PPC_FUNC_IMPL(__imp__sub_8318F098) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,26064
	ctx.r3.s64 = ctx.r11.s64 + 26064;
	// bl 0x82ca7538
	ctx.lr = 0x8318F0B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2188(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2188, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F0C8"))) PPC_WEAK_FUNC(sub_8318F0C8);
PPC_FUNC_IMPL(__imp__sub_8318F0C8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,26100
	ctx.r3.s64 = ctx.r11.s64 + 26100;
	// bl 0x82ca7538
	ctx.lr = 0x8318F0E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6924(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6924, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F0F8"))) PPC_WEAK_FUNC(sub_8318F0F8);
PPC_FUNC_IMPL(__imp__sub_8318F0F8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,26132
	ctx.r3.s64 = ctx.r11.s64 + 26132;
	// bl 0x82ca7538
	ctx.lr = 0x8318F110;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6140, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F128"))) PPC_WEAK_FUNC(sub_8318F128);
PPC_FUNC_IMPL(__imp__sub_8318F128) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,26172
	ctx.r3.s64 = ctx.r11.s64 + 26172;
	// bl 0x82ca7538
	ctx.lr = 0x8318F140;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3728(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3728, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F158"))) PPC_WEAK_FUNC(sub_8318F158);
PPC_FUNC_IMPL(__imp__sub_8318F158) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,26208
	ctx.r3.s64 = ctx.r11.s64 + 26208;
	// bl 0x82ca7538
	ctx.lr = 0x8318F170;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2044(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2044, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F188"))) PPC_WEAK_FUNC(sub_8318F188);
PPC_FUNC_IMPL(__imp__sub_8318F188) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,26248
	ctx.r3.s64 = ctx.r11.s64 + 26248;
	// bl 0x82ca7538
	ctx.lr = 0x8318F1A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4816(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4816, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F1B8"))) PPC_WEAK_FUNC(sub_8318F1B8);
PPC_FUNC_IMPL(__imp__sub_8318F1B8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,26288
	ctx.r3.s64 = ctx.r11.s64 + 26288;
	// bl 0x82ca7538
	ctx.lr = 0x8318F1D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2784, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F1E8"))) PPC_WEAK_FUNC(sub_8318F1E8);
PPC_FUNC_IMPL(__imp__sub_8318F1E8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,26324
	ctx.r3.s64 = ctx.r11.s64 + 26324;
	// bl 0x82ca7538
	ctx.lr = 0x8318F200;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5544(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5544, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F218"))) PPC_WEAK_FUNC(sub_8318F218);
PPC_FUNC_IMPL(__imp__sub_8318F218) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,26360
	ctx.r3.s64 = ctx.r11.s64 + 26360;
	// bl 0x82ca7538
	ctx.lr = 0x8318F230;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-480(r11)
	PPC_STORE_U32(ctx.r11.u32 + -480, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F248"))) PPC_WEAK_FUNC(sub_8318F248);
PPC_FUNC_IMPL(__imp__sub_8318F248) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,26396
	ctx.r3.s64 = ctx.r11.s64 + 26396;
	// bl 0x82ca7538
	ctx.lr = 0x8318F260;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2552(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2552, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F278"))) PPC_WEAK_FUNC(sub_8318F278);
PPC_FUNC_IMPL(__imp__sub_8318F278) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,26432
	ctx.r3.s64 = ctx.r11.s64 + 26432;
	// bl 0x82ca7538
	ctx.lr = 0x8318F290;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2860(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2860, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F2A8"))) PPC_WEAK_FUNC(sub_8318F2A8);
PPC_FUNC_IMPL(__imp__sub_8318F2A8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,26468
	ctx.r3.s64 = ctx.r11.s64 + 26468;
	// bl 0x82ca7538
	ctx.lr = 0x8318F2C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4808(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4808, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F2D8"))) PPC_WEAK_FUNC(sub_8318F2D8);
PPC_FUNC_IMPL(__imp__sub_8318F2D8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,26504
	ctx.r3.s64 = ctx.r11.s64 + 26504;
	// bl 0x82ca7538
	ctx.lr = 0x8318F2F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1412, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F308"))) PPC_WEAK_FUNC(sub_8318F308);
PPC_FUNC_IMPL(__imp__sub_8318F308) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,26540
	ctx.r3.s64 = ctx.r11.s64 + 26540;
	// bl 0x82ca7538
	ctx.lr = 0x8318F320;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2692(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2692, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F338"))) PPC_WEAK_FUNC(sub_8318F338);
PPC_FUNC_IMPL(__imp__sub_8318F338) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,26576
	ctx.r3.s64 = ctx.r11.s64 + 26576;
	// bl 0x82ca7538
	ctx.lr = 0x8318F350;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1468, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F368"))) PPC_WEAK_FUNC(sub_8318F368);
PPC_FUNC_IMPL(__imp__sub_8318F368) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,26616
	ctx.r3.s64 = ctx.r11.s64 + 26616;
	// bl 0x82ca7538
	ctx.lr = 0x8318F380;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4260(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4260, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F398"))) PPC_WEAK_FUNC(sub_8318F398);
PPC_FUNC_IMPL(__imp__sub_8318F398) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,26652
	ctx.r3.s64 = ctx.r11.s64 + 26652;
	// bl 0x82ca7538
	ctx.lr = 0x8318F3B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2292(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2292, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F3C8"))) PPC_WEAK_FUNC(sub_8318F3C8);
PPC_FUNC_IMPL(__imp__sub_8318F3C8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,26692
	ctx.r3.s64 = ctx.r11.s64 + 26692;
	// bl 0x82ca7538
	ctx.lr = 0x8318F3E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6712(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6712, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F3F8"))) PPC_WEAK_FUNC(sub_8318F3F8);
PPC_FUNC_IMPL(__imp__sub_8318F3F8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,26732
	ctx.r3.s64 = ctx.r11.s64 + 26732;
	// bl 0x82ca7538
	ctx.lr = 0x8318F410;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1016(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1016, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F428"))) PPC_WEAK_FUNC(sub_8318F428);
PPC_FUNC_IMPL(__imp__sub_8318F428) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,26768
	ctx.r3.s64 = ctx.r11.s64 + 26768;
	// bl 0x82ca7538
	ctx.lr = 0x8318F440;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5536(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5536, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F458"))) PPC_WEAK_FUNC(sub_8318F458);
PPC_FUNC_IMPL(__imp__sub_8318F458) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,26804
	ctx.r3.s64 = ctx.r11.s64 + 26804;
	// bl 0x82ca7538
	ctx.lr = 0x8318F470;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2888(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2888, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F488"))) PPC_WEAK_FUNC(sub_8318F488);
PPC_FUNC_IMPL(__imp__sub_8318F488) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,26840
	ctx.r3.s64 = ctx.r11.s64 + 26840;
	// bl 0x82ca7538
	ctx.lr = 0x8318F4A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6848(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6848, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F4B8"))) PPC_WEAK_FUNC(sub_8318F4B8);
PPC_FUNC_IMPL(__imp__sub_8318F4B8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,26876
	ctx.r3.s64 = ctx.r11.s64 + 26876;
	// bl 0x82ca7538
	ctx.lr = 0x8318F4D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5936(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5936, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F4E8"))) PPC_WEAK_FUNC(sub_8318F4E8);
PPC_FUNC_IMPL(__imp__sub_8318F4E8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,26916
	ctx.r3.s64 = ctx.r11.s64 + 26916;
	// bl 0x82ca7538
	ctx.lr = 0x8318F500;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2816(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2816, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F518"))) PPC_WEAK_FUNC(sub_8318F518);
PPC_FUNC_IMPL(__imp__sub_8318F518) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,26952
	ctx.r3.s64 = ctx.r11.s64 + 26952;
	// bl 0x82ca7538
	ctx.lr = 0x8318F530;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4216(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4216, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F548"))) PPC_WEAK_FUNC(sub_8318F548);
PPC_FUNC_IMPL(__imp__sub_8318F548) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,26992
	ctx.r3.s64 = ctx.r11.s64 + 26992;
	// bl 0x82ca7538
	ctx.lr = 0x8318F560;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-304(r11)
	PPC_STORE_U32(ctx.r11.u32 + -304, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F578"))) PPC_WEAK_FUNC(sub_8318F578);
PPC_FUNC_IMPL(__imp__sub_8318F578) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,27032
	ctx.r3.s64 = ctx.r11.s64 + 27032;
	// bl 0x82ca7538
	ctx.lr = 0x8318F590;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4920(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4920, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F5A8"))) PPC_WEAK_FUNC(sub_8318F5A8);
PPC_FUNC_IMPL(__imp__sub_8318F5A8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,27068
	ctx.r3.s64 = ctx.r11.s64 + 27068;
	// bl 0x82ca7538
	ctx.lr = 0x8318F5C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4780(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4780, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F5D8"))) PPC_WEAK_FUNC(sub_8318F5D8);
PPC_FUNC_IMPL(__imp__sub_8318F5D8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,27104
	ctx.r3.s64 = ctx.r11.s64 + 27104;
	// bl 0x82ca7538
	ctx.lr = 0x8318F5F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2192, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F608"))) PPC_WEAK_FUNC(sub_8318F608);
PPC_FUNC_IMPL(__imp__sub_8318F608) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,27136
	ctx.r3.s64 = ctx.r11.s64 + 27136;
	// bl 0x82ca7538
	ctx.lr = 0x8318F620;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6868(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6868, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F638"))) PPC_WEAK_FUNC(sub_8318F638);
PPC_FUNC_IMPL(__imp__sub_8318F638) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,27172
	ctx.r3.s64 = ctx.r11.s64 + 27172;
	// bl 0x82ca7538
	ctx.lr = 0x8318F650;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5452, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F668"))) PPC_WEAK_FUNC(sub_8318F668);
PPC_FUNC_IMPL(__imp__sub_8318F668) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,27208
	ctx.r3.s64 = ctx.r11.s64 + 27208;
	// bl 0x82ca7538
	ctx.lr = 0x8318F680;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5232, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F698"))) PPC_WEAK_FUNC(sub_8318F698);
PPC_FUNC_IMPL(__imp__sub_8318F698) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,27240
	ctx.r3.s64 = ctx.r11.s64 + 27240;
	// bl 0x82ca7538
	ctx.lr = 0x8318F6B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5836(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5836, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F6C8"))) PPC_WEAK_FUNC(sub_8318F6C8);
PPC_FUNC_IMPL(__imp__sub_8318F6C8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,27272
	ctx.r3.s64 = ctx.r11.s64 + 27272;
	// bl 0x82ca7538
	ctx.lr = 0x8318F6E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4344(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4344, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F6F8"))) PPC_WEAK_FUNC(sub_8318F6F8);
PPC_FUNC_IMPL(__imp__sub_8318F6F8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,27308
	ctx.r3.s64 = ctx.r11.s64 + 27308;
	// bl 0x82ca7538
	ctx.lr = 0x8318F710;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2040(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2040, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F728"))) PPC_WEAK_FUNC(sub_8318F728);
PPC_FUNC_IMPL(__imp__sub_8318F728) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,27340
	ctx.r3.s64 = ctx.r11.s64 + 27340;
	// bl 0x82ca7538
	ctx.lr = 0x8318F740;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1368(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1368, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F758"))) PPC_WEAK_FUNC(sub_8318F758);
PPC_FUNC_IMPL(__imp__sub_8318F758) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,27372
	ctx.r3.s64 = ctx.r11.s64 + 27372;
	// bl 0x82ca7538
	ctx.lr = 0x8318F770;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5040(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5040, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F788"))) PPC_WEAK_FUNC(sub_8318F788);
PPC_FUNC_IMPL(__imp__sub_8318F788) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,27408
	ctx.r3.s64 = ctx.r11.s64 + 27408;
	// bl 0x82ca7538
	ctx.lr = 0x8318F7A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2892(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2892, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F7B8"))) PPC_WEAK_FUNC(sub_8318F7B8);
PPC_FUNC_IMPL(__imp__sub_8318F7B8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,27440
	ctx.r3.s64 = ctx.r11.s64 + 27440;
	// bl 0x82ca7538
	ctx.lr = 0x8318F7D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4812(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4812, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F7E8"))) PPC_WEAK_FUNC(sub_8318F7E8);
PPC_FUNC_IMPL(__imp__sub_8318F7E8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,27472
	ctx.r3.s64 = ctx.r11.s64 + 27472;
	// bl 0x82ca7538
	ctx.lr = 0x8318F800;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6692(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6692, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F818"))) PPC_WEAK_FUNC(sub_8318F818);
PPC_FUNC_IMPL(__imp__sub_8318F818) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,27504
	ctx.r3.s64 = ctx.r11.s64 + 27504;
	// bl 0x82ca7538
	ctx.lr = 0x8318F830;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7260(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7260, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F848"))) PPC_WEAK_FUNC(sub_8318F848);
PPC_FUNC_IMPL(__imp__sub_8318F848) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,27536
	ctx.r3.s64 = ctx.r11.s64 + 27536;
	// bl 0x82ca7538
	ctx.lr = 0x8318F860;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5160, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F878"))) PPC_WEAK_FUNC(sub_8318F878);
PPC_FUNC_IMPL(__imp__sub_8318F878) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,27568
	ctx.r3.s64 = ctx.r11.s64 + 27568;
	// bl 0x82ca7538
	ctx.lr = 0x8318F890;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7244(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7244, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F8A8"))) PPC_WEAK_FUNC(sub_8318F8A8);
PPC_FUNC_IMPL(__imp__sub_8318F8A8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,27600
	ctx.r3.s64 = ctx.r11.s64 + 27600;
	// bl 0x82ca7538
	ctx.lr = 0x8318F8C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5952(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5952, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F8D8"))) PPC_WEAK_FUNC(sub_8318F8D8);
PPC_FUNC_IMPL(__imp__sub_8318F8D8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,27632
	ctx.r3.s64 = ctx.r11.s64 + 27632;
	// bl 0x82ca7538
	ctx.lr = 0x8318F8F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6644(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6644, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F908"))) PPC_WEAK_FUNC(sub_8318F908);
PPC_FUNC_IMPL(__imp__sub_8318F908) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,27672
	ctx.r3.s64 = ctx.r11.s64 + 27672;
	// bl 0x82ca7538
	ctx.lr = 0x8318F920;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3452(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3452, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F938"))) PPC_WEAK_FUNC(sub_8318F938);
PPC_FUNC_IMPL(__imp__sub_8318F938) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,27712
	ctx.r3.s64 = ctx.r11.s64 + 27712;
	// bl 0x82ca7538
	ctx.lr = 0x8318F950;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2196(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2196, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F968"))) PPC_WEAK_FUNC(sub_8318F968);
PPC_FUNC_IMPL(__imp__sub_8318F968) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,27752
	ctx.r3.s64 = ctx.r11.s64 + 27752;
	// bl 0x82ca7538
	ctx.lr = 0x8318F980;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6640(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6640, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F998"))) PPC_WEAK_FUNC(sub_8318F998);
PPC_FUNC_IMPL(__imp__sub_8318F998) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,27792
	ctx.r3.s64 = ctx.r11.s64 + 27792;
	// bl 0x82ca7538
	ctx.lr = 0x8318F9B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6968(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6968, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F9C8"))) PPC_WEAK_FUNC(sub_8318F9C8);
PPC_FUNC_IMPL(__imp__sub_8318F9C8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,27828
	ctx.r3.s64 = ctx.r11.s64 + 27828;
	// bl 0x82ca7538
	ctx.lr = 0x8318F9E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1864(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1864, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F9F8"))) PPC_WEAK_FUNC(sub_8318F9F8);
PPC_FUNC_IMPL(__imp__sub_8318F9F8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,27864
	ctx.r3.s64 = ctx.r11.s64 + 27864;
	// bl 0x82ca7538
	ctx.lr = 0x8318FA10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1380(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1380, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FA28"))) PPC_WEAK_FUNC(sub_8318FA28);
PPC_FUNC_IMPL(__imp__sub_8318FA28) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,27900
	ctx.r3.s64 = ctx.r11.s64 + 27900;
	// bl 0x82ca7538
	ctx.lr = 0x8318FA40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4488(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4488, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FA58"))) PPC_WEAK_FUNC(sub_8318FA58);
PPC_FUNC_IMPL(__imp__sub_8318FA58) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,27936
	ctx.r3.s64 = ctx.r11.s64 + 27936;
	// bl 0x82ca7538
	ctx.lr = 0x8318FA70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-176(r11)
	PPC_STORE_U32(ctx.r11.u32 + -176, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FA88"))) PPC_WEAK_FUNC(sub_8318FA88);
PPC_FUNC_IMPL(__imp__sub_8318FA88) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,27972
	ctx.r3.s64 = ctx.r11.s64 + 27972;
	// bl 0x82ca7538
	ctx.lr = 0x8318FAA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1020(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1020, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FAB8"))) PPC_WEAK_FUNC(sub_8318FAB8);
PPC_FUNC_IMPL(__imp__sub_8318FAB8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,28008
	ctx.r3.s64 = ctx.r11.s64 + 28008;
	// bl 0x82ca7538
	ctx.lr = 0x8318FAD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7248(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7248, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FAE8"))) PPC_WEAK_FUNC(sub_8318FAE8);
PPC_FUNC_IMPL(__imp__sub_8318FAE8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,28044
	ctx.r3.s64 = ctx.r11.s64 + 28044;
	// bl 0x82ca7538
	ctx.lr = 0x8318FB00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6800(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6800, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FB18"))) PPC_WEAK_FUNC(sub_8318FB18);
PPC_FUNC_IMPL(__imp__sub_8318FB18) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,28080
	ctx.r3.s64 = ctx.r11.s64 + 28080;
	// bl 0x82ca7538
	ctx.lr = 0x8318FB30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5376(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5376, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FB48"))) PPC_WEAK_FUNC(sub_8318FB48);
PPC_FUNC_IMPL(__imp__sub_8318FB48) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,28124
	ctx.r3.s64 = ctx.r11.s64 + 28124;
	// bl 0x82ca7538
	ctx.lr = 0x8318FB60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2748(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2748, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FB78"))) PPC_WEAK_FUNC(sub_8318FB78);
PPC_FUNC_IMPL(__imp__sub_8318FB78) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,28168
	ctx.r3.s64 = ctx.r11.s64 + 28168;
	// bl 0x82ca7538
	ctx.lr = 0x8318FB90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-960(r11)
	PPC_STORE_U32(ctx.r11.u32 + -960, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FBA8"))) PPC_WEAK_FUNC(sub_8318FBA8);
PPC_FUNC_IMPL(__imp__sub_8318FBA8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,28212
	ctx.r3.s64 = ctx.r11.s64 + 28212;
	// bl 0x82ca7538
	ctx.lr = 0x8318FBC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FBD8"))) PPC_WEAK_FUNC(sub_8318FBD8);
PPC_FUNC_IMPL(__imp__sub_8318FBD8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,28256
	ctx.r3.s64 = ctx.r11.s64 + 28256;
	// bl 0x82ca7538
	ctx.lr = 0x8318FBF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FC08"))) PPC_WEAK_FUNC(sub_8318FC08);
PPC_FUNC_IMPL(__imp__sub_8318FC08) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,28296
	ctx.r3.s64 = ctx.r11.s64 + 28296;
	// bl 0x82ca7538
	ctx.lr = 0x8318FC20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4328(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4328, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FC38"))) PPC_WEAK_FUNC(sub_8318FC38);
PPC_FUNC_IMPL(__imp__sub_8318FC38) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,28336
	ctx.r3.s64 = ctx.r11.s64 + 28336;
	// bl 0x82ca7538
	ctx.lr = 0x8318FC50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4640(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4640, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FC68"))) PPC_WEAK_FUNC(sub_8318FC68);
PPC_FUNC_IMPL(__imp__sub_8318FC68) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,28380
	ctx.r3.s64 = ctx.r11.s64 + 28380;
	// bl 0x82ca7538
	ctx.lr = 0x8318FC80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1452, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FC98"))) PPC_WEAK_FUNC(sub_8318FC98);
PPC_FUNC_IMPL(__imp__sub_8318FC98) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,28420
	ctx.r3.s64 = ctx.r11.s64 + 28420;
	// bl 0x82ca7538
	ctx.lr = 0x8318FCB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6032(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6032, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FCC8"))) PPC_WEAK_FUNC(sub_8318FCC8);
PPC_FUNC_IMPL(__imp__sub_8318FCC8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,28456
	ctx.r3.s64 = ctx.r11.s64 + 28456;
	// bl 0x82ca7538
	ctx.lr = 0x8318FCE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6448(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6448, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FCF8"))) PPC_WEAK_FUNC(sub_8318FCF8);
PPC_FUNC_IMPL(__imp__sub_8318FCF8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,28492
	ctx.r3.s64 = ctx.r11.s64 + 28492;
	// bl 0x82ca7538
	ctx.lr = 0x8318FD10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6920(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6920, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FD28"))) PPC_WEAK_FUNC(sub_8318FD28);
PPC_FUNC_IMPL(__imp__sub_8318FD28) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,28532
	ctx.r3.s64 = ctx.r11.s64 + 28532;
	// bl 0x82ca7538
	ctx.lr = 0x8318FD40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1180, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FD58"))) PPC_WEAK_FUNC(sub_8318FD58);
PPC_FUNC_IMPL(__imp__sub_8318FD58) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,28568
	ctx.r3.s64 = ctx.r11.s64 + 28568;
	// bl 0x82ca7538
	ctx.lr = 0x8318FD70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4144(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4144, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FD88"))) PPC_WEAK_FUNC(sub_8318FD88);
PPC_FUNC_IMPL(__imp__sub_8318FD88) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,28612
	ctx.r3.s64 = ctx.r11.s64 + 28612;
	// bl 0x82ca7538
	ctx.lr = 0x8318FDA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7280(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7280, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FDB8"))) PPC_WEAK_FUNC(sub_8318FDB8);
PPC_FUNC_IMPL(__imp__sub_8318FDB8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,28656
	ctx.r3.s64 = ctx.r11.s64 + 28656;
	// bl 0x82ca7538
	ctx.lr = 0x8318FDD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4960(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4960, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FDE8"))) PPC_WEAK_FUNC(sub_8318FDE8);
PPC_FUNC_IMPL(__imp__sub_8318FDE8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,28700
	ctx.r3.s64 = ctx.r11.s64 + 28700;
	// bl 0x82ca7538
	ctx.lr = 0x8318FE00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5748(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5748, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FE18"))) PPC_WEAK_FUNC(sub_8318FE18);
PPC_FUNC_IMPL(__imp__sub_8318FE18) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,28744
	ctx.r3.s64 = ctx.r11.s64 + 28744;
	// bl 0x82ca7538
	ctx.lr = 0x8318FE30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-568(r11)
	PPC_STORE_U32(ctx.r11.u32 + -568, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FE48"))) PPC_WEAK_FUNC(sub_8318FE48);
PPC_FUNC_IMPL(__imp__sub_8318FE48) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,28784
	ctx.r3.s64 = ctx.r11.s64 + 28784;
	// bl 0x82ca7538
	ctx.lr = 0x8318FE60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5552(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5552, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FE78"))) PPC_WEAK_FUNC(sub_8318FE78);
PPC_FUNC_IMPL(__imp__sub_8318FE78) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,28824
	ctx.r3.s64 = ctx.r11.s64 + 28824;
	// bl 0x82ca7538
	ctx.lr = 0x8318FE90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3436(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3436, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FEA8"))) PPC_WEAK_FUNC(sub_8318FEA8);
PPC_FUNC_IMPL(__imp__sub_8318FEA8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,28868
	ctx.r3.s64 = ctx.r11.s64 + 28868;
	// bl 0x82ca7538
	ctx.lr = 0x8318FEC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2352(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2352, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FED8"))) PPC_WEAK_FUNC(sub_8318FED8);
PPC_FUNC_IMPL(__imp__sub_8318FED8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,28908
	ctx.r3.s64 = ctx.r11.s64 + 28908;
	// bl 0x82ca7538
	ctx.lr = 0x8318FEF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5848(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5848, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FF08"))) PPC_WEAK_FUNC(sub_8318FF08);
PPC_FUNC_IMPL(__imp__sub_8318FF08) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,28944
	ctx.r3.s64 = ctx.r11.s64 + 28944;
	// bl 0x82ca7538
	ctx.lr = 0x8318FF20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1160, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FF38"))) PPC_WEAK_FUNC(sub_8318FF38);
PPC_FUNC_IMPL(__imp__sub_8318FF38) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,28976
	ctx.r3.s64 = ctx.r11.s64 + 28976;
	// bl 0x82ca7538
	ctx.lr = 0x8318FF50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7276(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7276, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FF68"))) PPC_WEAK_FUNC(sub_8318FF68);
PPC_FUNC_IMPL(__imp__sub_8318FF68) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,29012
	ctx.r3.s64 = ctx.r11.s64 + 29012;
	// bl 0x82ca7538
	ctx.lr = 0x8318FF80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6708(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6708, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FF98"))) PPC_WEAK_FUNC(sub_8318FF98);
PPC_FUNC_IMPL(__imp__sub_8318FF98) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,29048
	ctx.r3.s64 = ctx.r11.s64 + 29048;
	// bl 0x82ca7538
	ctx.lr = 0x8318FFB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2148, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FFC8"))) PPC_WEAK_FUNC(sub_8318FFC8);
PPC_FUNC_IMPL(__imp__sub_8318FFC8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,29088
	ctx.r3.s64 = ctx.r11.s64 + 29088;
	// bl 0x82ca7538
	ctx.lr = 0x8318FFE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7204(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7204, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FFF8"))) PPC_WEAK_FUNC(sub_8318FFF8);
PPC_FUNC_IMPL(__imp__sub_8318FFF8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,29124
	ctx.r3.s64 = ctx.r11.s64 + 29124;
	// bl 0x82ca7538
	ctx.lr = 0x83190010;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3444(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3444, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190028"))) PPC_WEAK_FUNC(sub_83190028);
PPC_FUNC_IMPL(__imp__sub_83190028) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,29164
	ctx.r3.s64 = ctx.r11.s64 + 29164;
	// bl 0x82ca7538
	ctx.lr = 0x83190040;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5296, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190058"))) PPC_WEAK_FUNC(sub_83190058);
PPC_FUNC_IMPL(__imp__sub_83190058) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,29204
	ctx.r3.s64 = ctx.r11.s64 + 29204;
	// bl 0x82ca7538
	ctx.lr = 0x83190070;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2244, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190088"))) PPC_WEAK_FUNC(sub_83190088);
PPC_FUNC_IMPL(__imp__sub_83190088) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,29240
	ctx.r3.s64 = ctx.r11.s64 + 29240;
	// bl 0x82ca7538
	ctx.lr = 0x831900A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6992(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6992, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831900B8"))) PPC_WEAK_FUNC(sub_831900B8);
PPC_FUNC_IMPL(__imp__sub_831900B8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,29276
	ctx.r3.s64 = ctx.r11.s64 + 29276;
	// bl 0x82ca7538
	ctx.lr = 0x831900D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4648(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4648, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831900E8"))) PPC_WEAK_FUNC(sub_831900E8);
PPC_FUNC_IMPL(__imp__sub_831900E8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,29316
	ctx.r3.s64 = ctx.r11.s64 + 29316;
	// bl 0x82ca7538
	ctx.lr = 0x83190100;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5012(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5012, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190118"))) PPC_WEAK_FUNC(sub_83190118);
PPC_FUNC_IMPL(__imp__sub_83190118) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,29352
	ctx.r3.s64 = ctx.r11.s64 + 29352;
	// bl 0x82ca7538
	ctx.lr = 0x83190130;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7124(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7124, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190148"))) PPC_WEAK_FUNC(sub_83190148);
PPC_FUNC_IMPL(__imp__sub_83190148) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,29392
	ctx.r3.s64 = ctx.r11.s64 + 29392;
	// bl 0x82ca7538
	ctx.lr = 0x83190160;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2436(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2436, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190178"))) PPC_WEAK_FUNC(sub_83190178);
PPC_FUNC_IMPL(__imp__sub_83190178) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,29432
	ctx.r3.s64 = ctx.r11.s64 + 29432;
	// bl 0x82ca7538
	ctx.lr = 0x83190190;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6324(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6324, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831901A8"))) PPC_WEAK_FUNC(sub_831901A8);
PPC_FUNC_IMPL(__imp__sub_831901A8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,29476
	ctx.r3.s64 = ctx.r11.s64 + 29476;
	// bl 0x82ca7538
	ctx.lr = 0x831901C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6464(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6464, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831901D8"))) PPC_WEAK_FUNC(sub_831901D8);
PPC_FUNC_IMPL(__imp__sub_831901D8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,29516
	ctx.r3.s64 = ctx.r11.s64 + 29516;
	// bl 0x82ca7538
	ctx.lr = 0x831901F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2500(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2500, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190208"))) PPC_WEAK_FUNC(sub_83190208);
PPC_FUNC_IMPL(__imp__sub_83190208) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,29552
	ctx.r3.s64 = ctx.r11.s64 + 29552;
	// bl 0x82ca7538
	ctx.lr = 0x83190220;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7116(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7116, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190238"))) PPC_WEAK_FUNC(sub_83190238);
PPC_FUNC_IMPL(__imp__sub_83190238) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,29588
	ctx.r3.s64 = ctx.r11.s64 + 29588;
	// bl 0x82ca7538
	ctx.lr = 0x83190250;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1012(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1012, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190268"))) PPC_WEAK_FUNC(sub_83190268);
PPC_FUNC_IMPL(__imp__sub_83190268) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,29628
	ctx.r3.s64 = ctx.r11.s64 + 29628;
	// bl 0x82ca7538
	ctx.lr = 0x83190280;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6392(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6392, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190298"))) PPC_WEAK_FUNC(sub_83190298);
PPC_FUNC_IMPL(__imp__sub_83190298) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,29664
	ctx.r3.s64 = ctx.r11.s64 + 29664;
	// bl 0x82ca7538
	ctx.lr = 0x831902B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,884(r11)
	PPC_STORE_U32(ctx.r11.u32 + 884, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831902C8"))) PPC_WEAK_FUNC(sub_831902C8);
PPC_FUNC_IMPL(__imp__sub_831902C8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,29700
	ctx.r3.s64 = ctx.r11.s64 + 29700;
	// bl 0x82ca7538
	ctx.lr = 0x831902E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5584(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5584, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831902F8"))) PPC_WEAK_FUNC(sub_831902F8);
PPC_FUNC_IMPL(__imp__sub_831902F8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,29736
	ctx.r3.s64 = ctx.r11.s64 + 29736;
	// bl 0x82ca7538
	ctx.lr = 0x83190310;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5588(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5588, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190328"))) PPC_WEAK_FUNC(sub_83190328);
PPC_FUNC_IMPL(__imp__sub_83190328) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,29772
	ctx.r3.s64 = ctx.r11.s64 + 29772;
	// bl 0x82ca7538
	ctx.lr = 0x83190340;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4536(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4536, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190358"))) PPC_WEAK_FUNC(sub_83190358);
PPC_FUNC_IMPL(__imp__sub_83190358) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,29808
	ctx.r3.s64 = ctx.r11.s64 + 29808;
	// bl 0x82ca7538
	ctx.lr = 0x83190370;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2620(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2620, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190388"))) PPC_WEAK_FUNC(sub_83190388);
PPC_FUNC_IMPL(__imp__sub_83190388) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,29852
	ctx.r3.s64 = ctx.r11.s64 + 29852;
	// bl 0x82ca7538
	ctx.lr = 0x831903A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2412, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831903B8"))) PPC_WEAK_FUNC(sub_831903B8);
PPC_FUNC_IMPL(__imp__sub_831903B8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,29892
	ctx.r3.s64 = ctx.r11.s64 + 29892;
	// bl 0x82ca7538
	ctx.lr = 0x831903D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6588(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6588, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831903E8"))) PPC_WEAK_FUNC(sub_831903E8);
PPC_FUNC_IMPL(__imp__sub_831903E8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,29936
	ctx.r3.s64 = ctx.r11.s64 + 29936;
	// bl 0x82ca7538
	ctx.lr = 0x83190400;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1180(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1180, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190418"))) PPC_WEAK_FUNC(sub_83190418);
PPC_FUNC_IMPL(__imp__sub_83190418) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,29980
	ctx.r3.s64 = ctx.r11.s64 + 29980;
	// bl 0x82ca7538
	ctx.lr = 0x83190430;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6832(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6832, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190448"))) PPC_WEAK_FUNC(sub_83190448);
PPC_FUNC_IMPL(__imp__sub_83190448) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30020
	ctx.r3.s64 = ctx.r11.s64 + 30020;
	// bl 0x82ca7538
	ctx.lr = 0x83190460;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7268(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7268, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190478"))) PPC_WEAK_FUNC(sub_83190478);
PPC_FUNC_IMPL(__imp__sub_83190478) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30060
	ctx.r3.s64 = ctx.r11.s64 + 30060;
	// bl 0x82ca7538
	ctx.lr = 0x83190490;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3948(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3948, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831904A8"))) PPC_WEAK_FUNC(sub_831904A8);
PPC_FUNC_IMPL(__imp__sub_831904A8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30100
	ctx.r3.s64 = ctx.r11.s64 + 30100;
	// bl 0x82ca7538
	ctx.lr = 0x831904C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5768(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5768, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831904D8"))) PPC_WEAK_FUNC(sub_831904D8);
PPC_FUNC_IMPL(__imp__sub_831904D8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30140
	ctx.r3.s64 = ctx.r11.s64 + 30140;
	// bl 0x82ca7538
	ctx.lr = 0x831904F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1068(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1068, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190508"))) PPC_WEAK_FUNC(sub_83190508);
PPC_FUNC_IMPL(__imp__sub_83190508) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30148
	ctx.r3.s64 = ctx.r11.s64 + 30148;
	// bl 0x82ca7538
	ctx.lr = 0x83190520;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3004(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3004, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190538"))) PPC_WEAK_FUNC(sub_83190538);
PPC_FUNC_IMPL(__imp__sub_83190538) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30172
	ctx.r3.s64 = ctx.r11.s64 + 30172;
	// bl 0x82ca7538
	ctx.lr = 0x83190550;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2864(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2864, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190568"))) PPC_WEAK_FUNC(sub_83190568);
PPC_FUNC_IMPL(__imp__sub_83190568) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,32696
	ctx.r3.s64 = ctx.r11.s64 + 32696;
	// bl 0x82ca7538
	ctx.lr = 0x83190580;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-320(r11)
	PPC_STORE_U32(ctx.r11.u32 + -320, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190598"))) PPC_WEAK_FUNC(sub_83190598);
PPC_FUNC_IMPL(__imp__sub_83190598) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30192
	ctx.r3.s64 = ctx.r11.s64 + 30192;
	// bl 0x82ca7538
	ctx.lr = 0x831905B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3064(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3064, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831905C8"))) PPC_WEAK_FUNC(sub_831905C8);
PPC_FUNC_IMPL(__imp__sub_831905C8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30208
	ctx.r3.s64 = ctx.r11.s64 + 30208;
	// bl 0x82ca7538
	ctx.lr = 0x831905E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3096(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3096, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831905F8"))) PPC_WEAK_FUNC(sub_831905F8);
PPC_FUNC_IMPL(__imp__sub_831905F8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30216
	ctx.r3.s64 = ctx.r11.s64 + 30216;
	// bl 0x82ca7538
	ctx.lr = 0x83190610;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3200(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3200, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190628"))) PPC_WEAK_FUNC(sub_83190628);
PPC_FUNC_IMPL(__imp__sub_83190628) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,9480
	ctx.r3.s64 = ctx.r11.s64 + 9480;
	// bl 0x82ca7538
	ctx.lr = 0x83190640;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5016(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5016, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190658"))) PPC_WEAK_FUNC(sub_83190658);
PPC_FUNC_IMPL(__imp__sub_83190658) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30224
	ctx.r3.s64 = ctx.r11.s64 + 30224;
	// bl 0x82ca7538
	ctx.lr = 0x83190670;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3120(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3120, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190688"))) PPC_WEAK_FUNC(sub_83190688);
PPC_FUNC_IMPL(__imp__sub_83190688) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30236
	ctx.r3.s64 = ctx.r11.s64 + 30236;
	// bl 0x82ca7538
	ctx.lr = 0x831906A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1492(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1492, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831906B8"))) PPC_WEAK_FUNC(sub_831906B8);
PPC_FUNC_IMPL(__imp__sub_831906B8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30248
	ctx.r3.s64 = ctx.r11.s64 + 30248;
	// bl 0x82ca7538
	ctx.lr = 0x831906D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3108(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3108, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831906E8"))) PPC_WEAK_FUNC(sub_831906E8);
PPC_FUNC_IMPL(__imp__sub_831906E8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30260
	ctx.r3.s64 = ctx.r11.s64 + 30260;
	// bl 0x82ca7538
	ctx.lr = 0x83190700;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-816(r11)
	PPC_STORE_U32(ctx.r11.u32 + -816, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190718"))) PPC_WEAK_FUNC(sub_83190718);
PPC_FUNC_IMPL(__imp__sub_83190718) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30272
	ctx.r3.s64 = ctx.r11.s64 + 30272;
	// bl 0x82ca7538
	ctx.lr = 0x83190730;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3188(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3188, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190748"))) PPC_WEAK_FUNC(sub_83190748);
PPC_FUNC_IMPL(__imp__sub_83190748) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30284
	ctx.r3.s64 = ctx.r11.s64 + 30284;
	// bl 0x82ca7538
	ctx.lr = 0x83190760;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5480, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190778"))) PPC_WEAK_FUNC(sub_83190778);
PPC_FUNC_IMPL(__imp__sub_83190778) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30308
	ctx.r3.s64 = ctx.r11.s64 + 30308;
	// bl 0x82ca7538
	ctx.lr = 0x83190790;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3280(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3280, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831907A8"))) PPC_WEAK_FUNC(sub_831907A8);
PPC_FUNC_IMPL(__imp__sub_831907A8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30324
	ctx.r3.s64 = ctx.r11.s64 + 30324;
	// bl 0x82ca7538
	ctx.lr = 0x831907C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3076(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3076, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831907D8"))) PPC_WEAK_FUNC(sub_831907D8);
PPC_FUNC_IMPL(__imp__sub_831907D8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30344
	ctx.r3.s64 = ctx.r11.s64 + 30344;
	// bl 0x82ca7538
	ctx.lr = 0x831907F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2968(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2968, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190808"))) PPC_WEAK_FUNC(sub_83190808);
PPC_FUNC_IMPL(__imp__sub_83190808) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30360
	ctx.r3.s64 = ctx.r11.s64 + 30360;
	// bl 0x82ca7538
	ctx.lr = 0x83190820;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1024, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190838"))) PPC_WEAK_FUNC(sub_83190838);
PPC_FUNC_IMPL(__imp__sub_83190838) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30380
	ctx.r3.s64 = ctx.r11.s64 + 30380;
	// bl 0x82ca7538
	ctx.lr = 0x83190850;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3176(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3176, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190868"))) PPC_WEAK_FUNC(sub_83190868);
PPC_FUNC_IMPL(__imp__sub_83190868) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,9496
	ctx.r3.s64 = ctx.r11.s64 + 9496;
	// bl 0x82ca7538
	ctx.lr = 0x83190880;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5020(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5020, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190898"))) PPC_WEAK_FUNC(sub_83190898);
PPC_FUNC_IMPL(__imp__sub_83190898) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30392
	ctx.r3.s64 = ctx.r11.s64 + 30392;
	// bl 0x82ca7538
	ctx.lr = 0x831908B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3236(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3236, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831908C8"))) PPC_WEAK_FUNC(sub_831908C8);
PPC_FUNC_IMPL(__imp__sub_831908C8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30404
	ctx.r3.s64 = ctx.r11.s64 + 30404;
	// bl 0x82ca7538
	ctx.lr = 0x831908E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3192(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3192, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831908F8"))) PPC_WEAK_FUNC(sub_831908F8);
PPC_FUNC_IMPL(__imp__sub_831908F8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30416
	ctx.r3.s64 = ctx.r11.s64 + 30416;
	// bl 0x82ca7538
	ctx.lr = 0x83190910;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3060(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3060, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190928"))) PPC_WEAK_FUNC(sub_83190928);
PPC_FUNC_IMPL(__imp__sub_83190928) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30428
	ctx.r3.s64 = ctx.r11.s64 + 30428;
	// bl 0x82ca7538
	ctx.lr = 0x83190940;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3220(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3220, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190958"))) PPC_WEAK_FUNC(sub_83190958);
PPC_FUNC_IMPL(__imp__sub_83190958) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30440
	ctx.r3.s64 = ctx.r11.s64 + 30440;
	// bl 0x82ca7538
	ctx.lr = 0x83190970;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190988"))) PPC_WEAK_FUNC(sub_83190988);
PPC_FUNC_IMPL(__imp__sub_83190988) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30460
	ctx.r3.s64 = ctx.r11.s64 + 30460;
	// bl 0x82ca7538
	ctx.lr = 0x831909A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3112(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3112, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831909B8"))) PPC_WEAK_FUNC(sub_831909B8);
PPC_FUNC_IMPL(__imp__sub_831909B8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30476
	ctx.r3.s64 = ctx.r11.s64 + 30476;
	// bl 0x82ca7538
	ctx.lr = 0x831909D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3572, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831909E8"))) PPC_WEAK_FUNC(sub_831909E8);
PPC_FUNC_IMPL(__imp__sub_831909E8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30488
	ctx.r3.s64 = ctx.r11.s64 + 30488;
	// bl 0x82ca7538
	ctx.lr = 0x83190A00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1224, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190A18"))) PPC_WEAK_FUNC(sub_83190A18);
PPC_FUNC_IMPL(__imp__sub_83190A18) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30508
	ctx.r3.s64 = ctx.r11.s64 + 30508;
	// bl 0x82ca7538
	ctx.lr = 0x83190A30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2072(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2072, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190A48"))) PPC_WEAK_FUNC(sub_83190A48);
PPC_FUNC_IMPL(__imp__sub_83190A48) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30532
	ctx.r3.s64 = ctx.r11.s64 + 30532;
	// bl 0x82ca7538
	ctx.lr = 0x83190A60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3056(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3056, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190A78"))) PPC_WEAK_FUNC(sub_83190A78);
PPC_FUNC_IMPL(__imp__sub_83190A78) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30548
	ctx.r3.s64 = ctx.r11.s64 + 30548;
	// bl 0x82ca7538
	ctx.lr = 0x83190A90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3212(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3212, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190AA8"))) PPC_WEAK_FUNC(sub_83190AA8);
PPC_FUNC_IMPL(__imp__sub_83190AA8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30564
	ctx.r3.s64 = ctx.r11.s64 + 30564;
	// bl 0x82ca7538
	ctx.lr = 0x83190AC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3272(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3272, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190AD8"))) PPC_WEAK_FUNC(sub_83190AD8);
PPC_FUNC_IMPL(__imp__sub_83190AD8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,16436
	ctx.r3.s64 = ctx.r11.s64 + 16436;
	// bl 0x82ca7538
	ctx.lr = 0x83190AF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2724(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2724, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190B08"))) PPC_WEAK_FUNC(sub_83190B08);
PPC_FUNC_IMPL(__imp__sub_83190B08) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30576
	ctx.r3.s64 = ctx.r11.s64 + 30576;
	// bl 0x82ca7538
	ctx.lr = 0x83190B20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3708(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3708, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190B38"))) PPC_WEAK_FUNC(sub_83190B38);
PPC_FUNC_IMPL(__imp__sub_83190B38) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,16448
	ctx.r3.s64 = ctx.r11.s64 + 16448;
	// bl 0x82ca7538
	ctx.lr = 0x83190B50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6008(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6008, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190B68"))) PPC_WEAK_FUNC(sub_83190B68);
PPC_FUNC_IMPL(__imp__sub_83190B68) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30592
	ctx.r3.s64 = ctx.r11.s64 + 30592;
	// bl 0x82ca7538
	ctx.lr = 0x83190B80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3184(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3184, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190B98"))) PPC_WEAK_FUNC(sub_83190B98);
PPC_FUNC_IMPL(__imp__sub_83190B98) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30608
	ctx.r3.s64 = ctx.r11.s64 + 30608;
	// bl 0x82ca7538
	ctx.lr = 0x83190BB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2224, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190BC8"))) PPC_WEAK_FUNC(sub_83190BC8);
PPC_FUNC_IMPL(__imp__sub_83190BC8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30624
	ctx.r3.s64 = ctx.r11.s64 + 30624;
	// bl 0x82ca7538
	ctx.lr = 0x83190BE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3240(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3240, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190BF8"))) PPC_WEAK_FUNC(sub_83190BF8);
PPC_FUNC_IMPL(__imp__sub_83190BF8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30644
	ctx.r3.s64 = ctx.r11.s64 + 30644;
	// bl 0x82ca7538
	ctx.lr = 0x83190C10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3244(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3244, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190C28"))) PPC_WEAK_FUNC(sub_83190C28);
PPC_FUNC_IMPL(__imp__sub_83190C28) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30656
	ctx.r3.s64 = ctx.r11.s64 + 30656;
	// bl 0x82ca7538
	ctx.lr = 0x83190C40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5128, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190C58"))) PPC_WEAK_FUNC(sub_83190C58);
PPC_FUNC_IMPL(__imp__sub_83190C58) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30668
	ctx.r3.s64 = ctx.r11.s64 + 30668;
	// bl 0x82ca7538
	ctx.lr = 0x83190C70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3228(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3228, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190C88"))) PPC_WEAK_FUNC(sub_83190C88);
PPC_FUNC_IMPL(__imp__sub_83190C88) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30684
	ctx.r3.s64 = ctx.r11.s64 + 30684;
	// bl 0x82ca7538
	ctx.lr = 0x83190CA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1764, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190CB8"))) PPC_WEAK_FUNC(sub_83190CB8);
PPC_FUNC_IMPL(__imp__sub_83190CB8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30700
	ctx.r3.s64 = ctx.r11.s64 + 30700;
	// bl 0x82ca7538
	ctx.lr = 0x83190CD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3044(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3044, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190CE8"))) PPC_WEAK_FUNC(sub_83190CE8);
PPC_FUNC_IMPL(__imp__sub_83190CE8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30724
	ctx.r3.s64 = ctx.r11.s64 + 30724;
	// bl 0x82ca7538
	ctx.lr = 0x83190D00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2516(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2516, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190D18"))) PPC_WEAK_FUNC(sub_83190D18);
PPC_FUNC_IMPL(__imp__sub_83190D18) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30736
	ctx.r3.s64 = ctx.r11.s64 + 30736;
	// bl 0x82ca7538
	ctx.lr = 0x83190D30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5112, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190D48"))) PPC_WEAK_FUNC(sub_83190D48);
PPC_FUNC_IMPL(__imp__sub_83190D48) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30756
	ctx.r3.s64 = ctx.r11.s64 + 30756;
	// bl 0x82ca7538
	ctx.lr = 0x83190D60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4812(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4812, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190D78"))) PPC_WEAK_FUNC(sub_83190D78);
PPC_FUNC_IMPL(__imp__sub_83190D78) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30776
	ctx.r3.s64 = ctx.r11.s64 + 30776;
	// bl 0x82ca7538
	ctx.lr = 0x83190D90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2956(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2956, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190DA8"))) PPC_WEAK_FUNC(sub_83190DA8);
PPC_FUNC_IMPL(__imp__sub_83190DA8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30792
	ctx.r3.s64 = ctx.r11.s64 + 30792;
	// bl 0x82ca7538
	ctx.lr = 0x83190DC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-300(r11)
	PPC_STORE_U32(ctx.r11.u32 + -300, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190DD8"))) PPC_WEAK_FUNC(sub_83190DD8);
PPC_FUNC_IMPL(__imp__sub_83190DD8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30804
	ctx.r3.s64 = ctx.r11.s64 + 30804;
	// bl 0x82ca7538
	ctx.lr = 0x83190DF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3168(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3168, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190E08"))) PPC_WEAK_FUNC(sub_83190E08);
PPC_FUNC_IMPL(__imp__sub_83190E08) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30820
	ctx.r3.s64 = ctx.r11.s64 + 30820;
	// bl 0x82ca7538
	ctx.lr = 0x83190E20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4856(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4856, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190E38"))) PPC_WEAK_FUNC(sub_83190E38);
PPC_FUNC_IMPL(__imp__sub_83190E38) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30832
	ctx.r3.s64 = ctx.r11.s64 + 30832;
	// bl 0x82ca7538
	ctx.lr = 0x83190E50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5396, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190E68"))) PPC_WEAK_FUNC(sub_83190E68);
PPC_FUNC_IMPL(__imp__sub_83190E68) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30852
	ctx.r3.s64 = ctx.r11.s64 + 30852;
	// bl 0x82ca7538
	ctx.lr = 0x83190E80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-192(r11)
	PPC_STORE_U32(ctx.r11.u32 + -192, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190E98"))) PPC_WEAK_FUNC(sub_83190E98);
PPC_FUNC_IMPL(__imp__sub_83190E98) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30872
	ctx.r3.s64 = ctx.r11.s64 + 30872;
	// bl 0x82ca7538
	ctx.lr = 0x83190EB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1148(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1148, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190EC8"))) PPC_WEAK_FUNC(sub_83190EC8);
PPC_FUNC_IMPL(__imp__sub_83190EC8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30880
	ctx.r3.s64 = ctx.r11.s64 + 30880;
	// bl 0x82ca7538
	ctx.lr = 0x83190EE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4028(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4028, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190EF8"))) PPC_WEAK_FUNC(sub_83190EF8);
PPC_FUNC_IMPL(__imp__sub_83190EF8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,9196
	ctx.r3.s64 = ctx.r11.s64 + 9196;
	// bl 0x82ca7538
	ctx.lr = 0x83190F10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5080(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5080, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190F28"))) PPC_WEAK_FUNC(sub_83190F28);
PPC_FUNC_IMPL(__imp__sub_83190F28) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30892
	ctx.r3.s64 = ctx.r11.s64 + 30892;
	// bl 0x82ca7538
	ctx.lr = 0x83190F40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3224(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3224, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

