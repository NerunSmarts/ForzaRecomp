#include "forza_horizon_1_init.h"

__attribute__((alias("__imp__sub_83190F58"))) PPC_WEAK_FUNC(sub_83190F58);
PPC_FUNC_IMPL(__imp__sub_83190F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30904
	ctx.r3.s64 = ctx.r11.s64 + 30904;
	// bl 0x82ca7538
	ctx.lr = 0x83190F70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3128(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3128, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190F88"))) PPC_WEAK_FUNC(sub_83190F88);
PPC_FUNC_IMPL(__imp__sub_83190F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30916
	ctx.r3.s64 = ctx.r11.s64 + 30916;
	// bl 0x82ca7538
	ctx.lr = 0x83190FA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3276(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3276, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190FB8"))) PPC_WEAK_FUNC(sub_83190FB8);
PPC_FUNC_IMPL(__imp__sub_83190FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30936
	ctx.r3.s64 = ctx.r11.s64 + 30936;
	// bl 0x82ca7538
	ctx.lr = 0x83190FD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1504(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1504, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190FE8"))) PPC_WEAK_FUNC(sub_83190FE8);
PPC_FUNC_IMPL(__imp__sub_83190FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30956
	ctx.r3.s64 = ctx.r11.s64 + 30956;
	// bl 0x82ca7538
	ctx.lr = 0x83191000;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3260(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3260, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191018"))) PPC_WEAK_FUNC(sub_83191018);
PPC_FUNC_IMPL(__imp__sub_83191018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30976
	ctx.r3.s64 = ctx.r11.s64 + 30976;
	// bl 0x82ca7538
	ctx.lr = 0x83191030;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3152(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3152, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191048"))) PPC_WEAK_FUNC(sub_83191048);
PPC_FUNC_IMPL(__imp__sub_83191048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30996
	ctx.r3.s64 = ctx.r11.s64 + 30996;
	// bl 0x82ca7538
	ctx.lr = 0x83191060;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1320(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1320, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191078"))) PPC_WEAK_FUNC(sub_83191078);
PPC_FUNC_IMPL(__imp__sub_83191078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31012
	ctx.r3.s64 = ctx.r11.s64 + 31012;
	// bl 0x82ca7538
	ctx.lr = 0x83191090;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2772(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2772, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831910A8"))) PPC_WEAK_FUNC(sub_831910A8);
PPC_FUNC_IMPL(__imp__sub_831910A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31024
	ctx.r3.s64 = ctx.r11.s64 + 31024;
	// bl 0x82ca7538
	ctx.lr = 0x831910C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2512(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2512, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831910D8"))) PPC_WEAK_FUNC(sub_831910D8);
PPC_FUNC_IMPL(__imp__sub_831910D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31036
	ctx.r3.s64 = ctx.r11.s64 + 31036;
	// bl 0x82ca7538
	ctx.lr = 0x831910F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3208(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3208, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191108"))) PPC_WEAK_FUNC(sub_83191108);
PPC_FUNC_IMPL(__imp__sub_83191108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31056
	ctx.r3.s64 = ctx.r11.s64 + 31056;
	// bl 0x82ca7538
	ctx.lr = 0x83191120;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5336, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191138"))) PPC_WEAK_FUNC(sub_83191138);
PPC_FUNC_IMPL(__imp__sub_83191138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31068
	ctx.r3.s64 = ctx.r11.s64 + 31068;
	// bl 0x82ca7538
	ctx.lr = 0x83191150;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3036(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3036, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191168"))) PPC_WEAK_FUNC(sub_83191168);
PPC_FUNC_IMPL(__imp__sub_83191168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31084
	ctx.r3.s64 = ctx.r11.s64 + 31084;
	// bl 0x82ca7538
	ctx.lr = 0x83191180;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3104(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3104, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191198"))) PPC_WEAK_FUNC(sub_83191198);
PPC_FUNC_IMPL(__imp__sub_83191198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31100
	ctx.r3.s64 = ctx.r11.s64 + 31100;
	// bl 0x82ca7538
	ctx.lr = 0x831911B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3068(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3068, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831911C8"))) PPC_WEAK_FUNC(sub_831911C8);
PPC_FUNC_IMPL(__imp__sub_831911C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31112
	ctx.r3.s64 = ctx.r11.s64 + 31112;
	// bl 0x82ca7538
	ctx.lr = 0x831911E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-296(r11)
	PPC_STORE_U32(ctx.r11.u32 + -296, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831911F8"))) PPC_WEAK_FUNC(sub_831911F8);
PPC_FUNC_IMPL(__imp__sub_831911F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31124
	ctx.r3.s64 = ctx.r11.s64 + 31124;
	// bl 0x82ca7538
	ctx.lr = 0x83191210;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5800(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5800, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191228"))) PPC_WEAK_FUNC(sub_83191228);
PPC_FUNC_IMPL(__imp__sub_83191228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31144
	ctx.r3.s64 = ctx.r11.s64 + 31144;
	// bl 0x82ca7538
	ctx.lr = 0x83191240;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3012(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3012, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191258"))) PPC_WEAK_FUNC(sub_83191258);
PPC_FUNC_IMPL(__imp__sub_83191258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31156
	ctx.r3.s64 = ctx.r11.s64 + 31156;
	// bl 0x82ca7538
	ctx.lr = 0x83191270;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1072(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1072, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191288"))) PPC_WEAK_FUNC(sub_83191288);
PPC_FUNC_IMPL(__imp__sub_83191288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,9232
	ctx.r3.s64 = ctx.r11.s64 + 9232;
	// bl 0x82ca7538
	ctx.lr = 0x831912A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 464, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831912B8"))) PPC_WEAK_FUNC(sub_831912B8);
PPC_FUNC_IMPL(__imp__sub_831912B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31168
	ctx.r3.s64 = ctx.r11.s64 + 31168;
	// bl 0x82ca7538
	ctx.lr = 0x831912D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2664(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2664, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831912E8"))) PPC_WEAK_FUNC(sub_831912E8);
PPC_FUNC_IMPL(__imp__sub_831912E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31180
	ctx.r3.s64 = ctx.r11.s64 + 31180;
	// bl 0x82ca7538
	ctx.lr = 0x83191300;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5780(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5780, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191318"))) PPC_WEAK_FUNC(sub_83191318);
PPC_FUNC_IMPL(__imp__sub_83191318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31192
	ctx.r3.s64 = ctx.r11.s64 + 31192;
	// bl 0x82ca7538
	ctx.lr = 0x83191330;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3216(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3216, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191348"))) PPC_WEAK_FUNC(sub_83191348);
PPC_FUNC_IMPL(__imp__sub_83191348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31212
	ctx.r3.s64 = ctx.r11.s64 + 31212;
	// bl 0x82ca7538
	ctx.lr = 0x83191360;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3144(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3144, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191378"))) PPC_WEAK_FUNC(sub_83191378);
PPC_FUNC_IMPL(__imp__sub_83191378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31224
	ctx.r3.s64 = ctx.r11.s64 + 31224;
	// bl 0x82ca7538
	ctx.lr = 0x83191390;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3088(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3088, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831913A8"))) PPC_WEAK_FUNC(sub_831913A8);
PPC_FUNC_IMPL(__imp__sub_831913A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31236
	ctx.r3.s64 = ctx.r11.s64 + 31236;
	// bl 0x82ca7538
	ctx.lr = 0x831913C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3040(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3040, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831913D8"))) PPC_WEAK_FUNC(sub_831913D8);
PPC_FUNC_IMPL(__imp__sub_831913D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,10380
	ctx.r3.s64 = ctx.r11.s64 + 10380;
	// bl 0x82ca7538
	ctx.lr = 0x831913F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3156(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3156, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191408"))) PPC_WEAK_FUNC(sub_83191408);
PPC_FUNC_IMPL(__imp__sub_83191408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31248
	ctx.r3.s64 = ctx.r11.s64 + 31248;
	// bl 0x82ca7538
	ctx.lr = 0x83191420;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3180(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3180, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191438"))) PPC_WEAK_FUNC(sub_83191438);
PPC_FUNC_IMPL(__imp__sub_83191438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31264
	ctx.r3.s64 = ctx.r11.s64 + 31264;
	// bl 0x82ca7538
	ctx.lr = 0x83191450;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3148(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3148, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191468"))) PPC_WEAK_FUNC(sub_83191468);
PPC_FUNC_IMPL(__imp__sub_83191468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31276
	ctx.r3.s64 = ctx.r11.s64 + 31276;
	// bl 0x82ca7538
	ctx.lr = 0x83191480;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2996(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2996, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191498"))) PPC_WEAK_FUNC(sub_83191498);
PPC_FUNC_IMPL(__imp__sub_83191498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31288
	ctx.r3.s64 = ctx.r11.s64 + 31288;
	// bl 0x82ca7538
	ctx.lr = 0x831914B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1220(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1220, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831914C8"))) PPC_WEAK_FUNC(sub_831914C8);
PPC_FUNC_IMPL(__imp__sub_831914C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31300
	ctx.r3.s64 = ctx.r11.s64 + 31300;
	// bl 0x82ca7538
	ctx.lr = 0x831914E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2016(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2016, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831914F8"))) PPC_WEAK_FUNC(sub_831914F8);
PPC_FUNC_IMPL(__imp__sub_831914F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31316
	ctx.r3.s64 = ctx.r11.s64 + 31316;
	// bl 0x82ca7538
	ctx.lr = 0x83191510;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2200, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191528"))) PPC_WEAK_FUNC(sub_83191528);
PPC_FUNC_IMPL(__imp__sub_83191528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31324
	ctx.r3.s64 = ctx.r11.s64 + 31324;
	// bl 0x82ca7538
	ctx.lr = 0x83191540;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2988(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2988, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191558"))) PPC_WEAK_FUNC(sub_83191558);
PPC_FUNC_IMPL(__imp__sub_83191558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31336
	ctx.r3.s64 = ctx.r11.s64 + 31336;
	// bl 0x82ca7538
	ctx.lr = 0x83191570;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1900(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1900, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191588"))) PPC_WEAK_FUNC(sub_83191588);
PPC_FUNC_IMPL(__imp__sub_83191588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31348
	ctx.r3.s64 = ctx.r11.s64 + 31348;
	// bl 0x82ca7538
	ctx.lr = 0x831915A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-408(r11)
	PPC_STORE_U32(ctx.r11.u32 + -408, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831915B8"))) PPC_WEAK_FUNC(sub_831915B8);
PPC_FUNC_IMPL(__imp__sub_831915B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31360
	ctx.r3.s64 = ctx.r11.s64 + 31360;
	// bl 0x82ca7538
	ctx.lr = 0x831915D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2184(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2184, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831915E8"))) PPC_WEAK_FUNC(sub_831915E8);
PPC_FUNC_IMPL(__imp__sub_831915E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31380
	ctx.r3.s64 = ctx.r11.s64 + 31380;
	// bl 0x82ca7538
	ctx.lr = 0x83191600;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3016(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3016, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191618"))) PPC_WEAK_FUNC(sub_83191618);
PPC_FUNC_IMPL(__imp__sub_83191618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31400
	ctx.r3.s64 = ctx.r11.s64 + 31400;
	// bl 0x82ca7538
	ctx.lr = 0x83191630;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3032(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3032, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191648"))) PPC_WEAK_FUNC(sub_83191648);
PPC_FUNC_IMPL(__imp__sub_83191648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31412
	ctx.r3.s64 = ctx.r11.s64 + 31412;
	// bl 0x82ca7538
	ctx.lr = 0x83191660;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5252, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191678"))) PPC_WEAK_FUNC(sub_83191678);
PPC_FUNC_IMPL(__imp__sub_83191678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31424
	ctx.r3.s64 = ctx.r11.s64 + 31424;
	// bl 0x82ca7538
	ctx.lr = 0x83191690;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3232(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3232, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831916A8"))) PPC_WEAK_FUNC(sub_831916A8);
PPC_FUNC_IMPL(__imp__sub_831916A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31444
	ctx.r3.s64 = ctx.r11.s64 + 31444;
	// bl 0x82ca7538
	ctx.lr = 0x831916C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5084(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5084, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831916D8"))) PPC_WEAK_FUNC(sub_831916D8);
PPC_FUNC_IMPL(__imp__sub_831916D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31460
	ctx.r3.s64 = ctx.r11.s64 + 31460;
	// bl 0x82ca7538
	ctx.lr = 0x831916F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5484, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191708"))) PPC_WEAK_FUNC(sub_83191708);
PPC_FUNC_IMPL(__imp__sub_83191708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31476
	ctx.r3.s64 = ctx.r11.s64 + 31476;
	// bl 0x82ca7538
	ctx.lr = 0x83191720;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1228, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191738"))) PPC_WEAK_FUNC(sub_83191738);
PPC_FUNC_IMPL(__imp__sub_83191738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31496
	ctx.r3.s64 = ctx.r11.s64 + 31496;
	// bl 0x82ca7538
	ctx.lr = 0x83191750;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191768"))) PPC_WEAK_FUNC(sub_83191768);
PPC_FUNC_IMPL(__imp__sub_83191768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31508
	ctx.r3.s64 = ctx.r11.s64 + 31508;
	// bl 0x82ca7538
	ctx.lr = 0x83191780;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2580(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2580, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191798"))) PPC_WEAK_FUNC(sub_83191798);
PPC_FUNC_IMPL(__imp__sub_83191798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31520
	ctx.r3.s64 = ctx.r11.s64 + 31520;
	// bl 0x82ca7538
	ctx.lr = 0x831917B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3008(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3008, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831917C8"))) PPC_WEAK_FUNC(sub_831917C8);
PPC_FUNC_IMPL(__imp__sub_831917C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31532
	ctx.r3.s64 = ctx.r11.s64 + 31532;
	// bl 0x82ca7538
	ctx.lr = 0x831917E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3160(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3160, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831917F8"))) PPC_WEAK_FUNC(sub_831917F8);
PPC_FUNC_IMPL(__imp__sub_831917F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31548
	ctx.r3.s64 = ctx.r11.s64 + 31548;
	// bl 0x82ca7538
	ctx.lr = 0x83191810;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6284(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6284, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191828"))) PPC_WEAK_FUNC(sub_83191828);
PPC_FUNC_IMPL(__imp__sub_83191828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31564
	ctx.r3.s64 = ctx.r11.s64 + 31564;
	// bl 0x82ca7538
	ctx.lr = 0x83191840;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-736(r11)
	PPC_STORE_U32(ctx.r11.u32 + -736, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191858"))) PPC_WEAK_FUNC(sub_83191858);
PPC_FUNC_IMPL(__imp__sub_83191858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31584
	ctx.r3.s64 = ctx.r11.s64 + 31584;
	// bl 0x82ca7538
	ctx.lr = 0x83191870;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3000(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3000, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191888"))) PPC_WEAK_FUNC(sub_83191888);
PPC_FUNC_IMPL(__imp__sub_83191888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31612
	ctx.r3.s64 = ctx.r11.s64 + 31612;
	// bl 0x82ca7538
	ctx.lr = 0x831918A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-924(r11)
	PPC_STORE_U32(ctx.r11.u32 + -924, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831918B8"))) PPC_WEAK_FUNC(sub_831918B8);
PPC_FUNC_IMPL(__imp__sub_831918B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31636
	ctx.r3.s64 = ctx.r11.s64 + 31636;
	// bl 0x82ca7538
	ctx.lr = 0x831918D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2712(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2712, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831918E8"))) PPC_WEAK_FUNC(sub_831918E8);
PPC_FUNC_IMPL(__imp__sub_831918E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31664
	ctx.r3.s64 = ctx.r11.s64 + 31664;
	// bl 0x82ca7538
	ctx.lr = 0x83191900;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3052(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3052, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191918"))) PPC_WEAK_FUNC(sub_83191918);
PPC_FUNC_IMPL(__imp__sub_83191918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31692
	ctx.r3.s64 = ctx.r11.s64 + 31692;
	// bl 0x82ca7538
	ctx.lr = 0x83191930;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2448(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2448, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191948"))) PPC_WEAK_FUNC(sub_83191948);
PPC_FUNC_IMPL(__imp__sub_83191948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31724
	ctx.r3.s64 = ctx.r11.s64 + 31724;
	// bl 0x82ca7538
	ctx.lr = 0x83191960;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2284(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2284, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191978"))) PPC_WEAK_FUNC(sub_83191978);
PPC_FUNC_IMPL(__imp__sub_83191978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31752
	ctx.r3.s64 = ctx.r11.s64 + 31752;
	// bl 0x82ca7538
	ctx.lr = 0x83191990;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5420, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831919A8"))) PPC_WEAK_FUNC(sub_831919A8);
PPC_FUNC_IMPL(__imp__sub_831919A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31788
	ctx.r3.s64 = ctx.r11.s64 + 31788;
	// bl 0x82ca7538
	ctx.lr = 0x831919C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4032(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4032, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831919D8"))) PPC_WEAK_FUNC(sub_831919D8);
PPC_FUNC_IMPL(__imp__sub_831919D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31812
	ctx.r3.s64 = ctx.r11.s64 + 31812;
	// bl 0x82ca7538
	ctx.lr = 0x831919F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3196(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3196, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191A08"))) PPC_WEAK_FUNC(sub_83191A08);
PPC_FUNC_IMPL(__imp__sub_83191A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31836
	ctx.r3.s64 = ctx.r11.s64 + 31836;
	// bl 0x82ca7538
	ctx.lr = 0x83191A20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5116, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191A38"))) PPC_WEAK_FUNC(sub_83191A38);
PPC_FUNC_IMPL(__imp__sub_83191A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31864
	ctx.r3.s64 = ctx.r11.s64 + 31864;
	// bl 0x82ca7538
	ctx.lr = 0x83191A50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2548(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2548, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191A68"))) PPC_WEAK_FUNC(sub_83191A68);
PPC_FUNC_IMPL(__imp__sub_83191A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31892
	ctx.r3.s64 = ctx.r11.s64 + 31892;
	// bl 0x82ca7538
	ctx.lr = 0x83191A80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5164, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191A98"))) PPC_WEAK_FUNC(sub_83191A98);
PPC_FUNC_IMPL(__imp__sub_83191A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31920
	ctx.r3.s64 = ctx.r11.s64 + 31920;
	// bl 0x82ca7538
	ctx.lr = 0x83191AB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3124(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3124, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191AC8"))) PPC_WEAK_FUNC(sub_83191AC8);
PPC_FUNC_IMPL(__imp__sub_83191AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31936
	ctx.r3.s64 = ctx.r11.s64 + 31936;
	// bl 0x82ca7538
	ctx.lr = 0x83191AE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6000(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6000, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191AF8"))) PPC_WEAK_FUNC(sub_83191AF8);
PPC_FUNC_IMPL(__imp__sub_83191AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31948
	ctx.r3.s64 = ctx.r11.s64 + 31948;
	// bl 0x82ca7538
	ctx.lr = 0x83191B10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3116(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3116, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191B28"))) PPC_WEAK_FUNC(sub_83191B28);
PPC_FUNC_IMPL(__imp__sub_83191B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31960
	ctx.r3.s64 = ctx.r11.s64 + 31960;
	// bl 0x82ca7538
	ctx.lr = 0x83191B40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3248(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3248, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191B58"))) PPC_WEAK_FUNC(sub_83191B58);
PPC_FUNC_IMPL(__imp__sub_83191B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31980
	ctx.r3.s64 = ctx.r11.s64 + 31980;
	// bl 0x82ca7538
	ctx.lr = 0x83191B70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3024(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3024, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191B88"))) PPC_WEAK_FUNC(sub_83191B88);
PPC_FUNC_IMPL(__imp__sub_83191B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,9540
	ctx.r3.s64 = ctx.r11.s64 + 9540;
	// bl 0x82ca7538
	ctx.lr = 0x83191BA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5528(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5528, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191BB8"))) PPC_WEAK_FUNC(sub_83191BB8);
PPC_FUNC_IMPL(__imp__sub_83191BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,8124
	ctx.r3.s64 = ctx.r11.s64 + 8124;
	// bl 0x82ca7538
	ctx.lr = 0x83191BD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3072(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3072, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191BE8"))) PPC_WEAK_FUNC(sub_83191BE8);
PPC_FUNC_IMPL(__imp__sub_83191BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32004
	ctx.r3.s64 = ctx.r11.s64 + 32004;
	// bl 0x82ca7538
	ctx.lr = 0x83191C00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3172(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3172, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191C18"))) PPC_WEAK_FUNC(sub_83191C18);
PPC_FUNC_IMPL(__imp__sub_83191C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32024
	ctx.r3.s64 = ctx.r11.s64 + 32024;
	// bl 0x82ca7538
	ctx.lr = 0x83191C30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2444(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2444, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191C48"))) PPC_WEAK_FUNC(sub_83191C48);
PPC_FUNC_IMPL(__imp__sub_83191C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32032
	ctx.r3.s64 = ctx.r11.s64 + 32032;
	// bl 0x82ca7538
	ctx.lr = 0x83191C60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3048(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3048, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191C78"))) PPC_WEAK_FUNC(sub_83191C78);
PPC_FUNC_IMPL(__imp__sub_83191C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32052
	ctx.r3.s64 = ctx.r11.s64 + 32052;
	// bl 0x82ca7538
	ctx.lr = 0x83191C90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-588(r11)
	PPC_STORE_U32(ctx.r11.u32 + -588, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191CA8"))) PPC_WEAK_FUNC(sub_83191CA8);
PPC_FUNC_IMPL(__imp__sub_83191CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32068
	ctx.r3.s64 = ctx.r11.s64 + 32068;
	// bl 0x82ca7538
	ctx.lr = 0x83191CC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2008(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2008, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191CD8"))) PPC_WEAK_FUNC(sub_83191CD8);
PPC_FUNC_IMPL(__imp__sub_83191CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32096
	ctx.r3.s64 = ctx.r11.s64 + 32096;
	// bl 0x82ca7538
	ctx.lr = 0x83191CF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-832(r11)
	PPC_STORE_U32(ctx.r11.u32 + -832, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191D08"))) PPC_WEAK_FUNC(sub_83191D08);
PPC_FUNC_IMPL(__imp__sub_83191D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32120
	ctx.r3.s64 = ctx.r11.s64 + 32120;
	// bl 0x82ca7538
	ctx.lr = 0x83191D20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3140(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3140, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191D38"))) PPC_WEAK_FUNC(sub_83191D38);
PPC_FUNC_IMPL(__imp__sub_83191D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32136
	ctx.r3.s64 = ctx.r11.s64 + 32136;
	// bl 0x82ca7538
	ctx.lr = 0x83191D50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2432(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2432, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191D68"))) PPC_WEAK_FUNC(sub_83191D68);
PPC_FUNC_IMPL(__imp__sub_83191D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32156
	ctx.r3.s64 = ctx.r11.s64 + 32156;
	// bl 0x82ca7538
	ctx.lr = 0x83191D80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3100(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3100, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191D98"))) PPC_WEAK_FUNC(sub_83191D98);
PPC_FUNC_IMPL(__imp__sub_83191D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32176
	ctx.r3.s64 = ctx.r11.s64 + 32176;
	// bl 0x82ca7538
	ctx.lr = 0x83191DB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3268(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3268, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191DC8"))) PPC_WEAK_FUNC(sub_83191DC8);
PPC_FUNC_IMPL(__imp__sub_83191DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32196
	ctx.r3.s64 = ctx.r11.s64 + 32196;
	// bl 0x82ca7538
	ctx.lr = 0x83191DE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3252(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3252, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191DF8"))) PPC_WEAK_FUNC(sub_83191DF8);
PPC_FUNC_IMPL(__imp__sub_83191DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32216
	ctx.r3.s64 = ctx.r11.s64 + 32216;
	// bl 0x82ca7538
	ctx.lr = 0x83191E10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2216(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2216, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191E28"))) PPC_WEAK_FUNC(sub_83191E28);
PPC_FUNC_IMPL(__imp__sub_83191E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32236
	ctx.r3.s64 = ctx.r11.s64 + 32236;
	// bl 0x82ca7538
	ctx.lr = 0x83191E40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3136(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3136, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191E58"))) PPC_WEAK_FUNC(sub_83191E58);
PPC_FUNC_IMPL(__imp__sub_83191E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32252
	ctx.r3.s64 = ctx.r11.s64 + 32252;
	// bl 0x82ca7538
	ctx.lr = 0x83191E70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2496(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2496, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191E88"))) PPC_WEAK_FUNC(sub_83191E88);
PPC_FUNC_IMPL(__imp__sub_83191E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32264
	ctx.r3.s64 = ctx.r11.s64 + 32264;
	// bl 0x82ca7538
	ctx.lr = 0x83191EA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5436, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191EB8"))) PPC_WEAK_FUNC(sub_83191EB8);
PPC_FUNC_IMPL(__imp__sub_83191EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32280
	ctx.r3.s64 = ctx.r11.s64 + 32280;
	// bl 0x82ca7538
	ctx.lr = 0x83191ED0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3028(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3028, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191EE8"))) PPC_WEAK_FUNC(sub_83191EE8);
PPC_FUNC_IMPL(__imp__sub_83191EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32296
	ctx.r3.s64 = ctx.r11.s64 + 32296;
	// bl 0x82ca7538
	ctx.lr = 0x83191F00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2124(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2124, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191F18"))) PPC_WEAK_FUNC(sub_83191F18);
PPC_FUNC_IMPL(__imp__sub_83191F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32324
	ctx.r3.s64 = ctx.r11.s64 + 32324;
	// bl 0x82ca7538
	ctx.lr = 0x83191F30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3092(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3092, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191F48"))) PPC_WEAK_FUNC(sub_83191F48);
PPC_FUNC_IMPL(__imp__sub_83191F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32348
	ctx.r3.s64 = ctx.r11.s64 + 32348;
	// bl 0x82ca7538
	ctx.lr = 0x83191F60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3020(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3020, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191F78"))) PPC_WEAK_FUNC(sub_83191F78);
PPC_FUNC_IMPL(__imp__sub_83191F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32372
	ctx.r3.s64 = ctx.r11.s64 + 32372;
	// bl 0x82ca7538
	ctx.lr = 0x83191F90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2984(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2984, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191FA8"))) PPC_WEAK_FUNC(sub_83191FA8);
PPC_FUNC_IMPL(__imp__sub_83191FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32392
	ctx.r3.s64 = ctx.r11.s64 + 32392;
	// bl 0x82ca7538
	ctx.lr = 0x83191FC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3264(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3264, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191FD8"))) PPC_WEAK_FUNC(sub_83191FD8);
PPC_FUNC_IMPL(__imp__sub_83191FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32408
	ctx.r3.s64 = ctx.r11.s64 + 32408;
	// bl 0x82ca7538
	ctx.lr = 0x83191FF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1964(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1964, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192008"))) PPC_WEAK_FUNC(sub_83192008);
PPC_FUNC_IMPL(__imp__sub_83192008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,26480
	ctx.r3.s64 = ctx.r11.s64 + 26480;
	// bl 0x82ca7538
	ctx.lr = 0x83192020;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5364, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192038"))) PPC_WEAK_FUNC(sub_83192038);
PPC_FUNC_IMPL(__imp__sub_83192038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,26504
	ctx.r3.s64 = ctx.r11.s64 + 26504;
	// bl 0x82ca7538
	ctx.lr = 0x83192050;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3716(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3716, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192068"))) PPC_WEAK_FUNC(sub_83192068);
PPC_FUNC_IMPL(__imp__sub_83192068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,26376
	ctx.r3.s64 = ctx.r11.s64 + 26376;
	// bl 0x82ca7538
	ctx.lr = 0x83192080;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2992(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2992, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192098"))) PPC_WEAK_FUNC(sub_83192098);
PPC_FUNC_IMPL(__imp__sub_83192098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,26404
	ctx.r3.s64 = ctx.r11.s64 + 26404;
	// bl 0x82ca7538
	ctx.lr = 0x831920B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3132(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3132, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831920C8"))) PPC_WEAK_FUNC(sub_831920C8);
PPC_FUNC_IMPL(__imp__sub_831920C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,26432
	ctx.r3.s64 = ctx.r11.s64 + 26432;
	// bl 0x82ca7538
	ctx.lr = 0x831920E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3084(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3084, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831920F8"))) PPC_WEAK_FUNC(sub_831920F8);
PPC_FUNC_IMPL(__imp__sub_831920F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,26456
	ctx.r3.s64 = ctx.r11.s64 + 26456;
	// bl 0x82ca7538
	ctx.lr = 0x83192110;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3204(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3204, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192128"))) PPC_WEAK_FUNC(sub_83192128);
PPC_FUNC_IMPL(__imp__sub_83192128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32424
	ctx.r3.s64 = ctx.r11.s64 + 32424;
	// bl 0x82ca7538
	ctx.lr = 0x83192140;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3256(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3256, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192158"))) PPC_WEAK_FUNC(sub_83192158);
PPC_FUNC_IMPL(__imp__sub_83192158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32448
	ctx.r3.s64 = ctx.r11.s64 + 32448;
	// bl 0x82ca7538
	ctx.lr = 0x83192170;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3080(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3080, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192188"))) PPC_WEAK_FUNC(sub_83192188);
PPC_FUNC_IMPL(__imp__sub_83192188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,26336
	ctx.r3.s64 = ctx.r11.s64 + 26336;
	// bl 0x82ca7538
	ctx.lr = 0x831921A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4960(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4960, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831921B8"))) PPC_WEAK_FUNC(sub_831921B8);
PPC_FUNC_IMPL(__imp__sub_831921B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,26356
	ctx.r3.s64 = ctx.r11.s64 + 26356;
	// bl 0x82ca7538
	ctx.lr = 0x831921D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-868(r11)
	PPC_STORE_U32(ctx.r11.u32 + -868, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831921E8"))) PPC_WEAK_FUNC(sub_831921E8);
PPC_FUNC_IMPL(__imp__sub_831921E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,22176
	ctx.r3.s64 = ctx.r11.s64 + 22176;
	// bl 0x82ca7538
	ctx.lr = 0x83192200;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5168, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192218"))) PPC_WEAK_FUNC(sub_83192218);
PPC_FUNC_IMPL(__imp__sub_83192218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,22208
	ctx.r3.s64 = ctx.r11.s64 + 22208;
	// bl 0x82ca7538
	ctx.lr = 0x83192230;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2804(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2804, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192248"))) PPC_WEAK_FUNC(sub_83192248);
PPC_FUNC_IMPL(__imp__sub_83192248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,26288
	ctx.r3.s64 = ctx.r11.s64 + 26288;
	// bl 0x82ca7538
	ctx.lr = 0x83192260;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1892(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1892, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192278"))) PPC_WEAK_FUNC(sub_83192278);
PPC_FUNC_IMPL(__imp__sub_83192278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,26312
	ctx.r3.s64 = ctx.r11.s64 + 26312;
	// bl 0x82ca7538
	ctx.lr = 0x83192290;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1124(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1124, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831922A8"))) PPC_WEAK_FUNC(sub_831922A8);
PPC_FUNC_IMPL(__imp__sub_831922A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,26240
	ctx.r3.s64 = ctx.r11.s64 + 26240;
	// bl 0x82ca7538
	ctx.lr = 0x831922C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2012(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2012, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831922D8"))) PPC_WEAK_FUNC(sub_831922D8);
PPC_FUNC_IMPL(__imp__sub_831922D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,26264
	ctx.r3.s64 = ctx.r11.s64 + 26264;
	// bl 0x82ca7538
	ctx.lr = 0x831922F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3164(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3164, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192308"))) PPC_WEAK_FUNC(sub_83192308);
PPC_FUNC_IMPL(__imp__sub_83192308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32472
	ctx.r3.s64 = ctx.r11.s64 + 32472;
	// bl 0x82ca7538
	ctx.lr = 0x83192320;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192338"))) PPC_WEAK_FUNC(sub_83192338);
PPC_FUNC_IMPL(__imp__sub_83192338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32496
	ctx.r3.s64 = ctx.r11.s64 + 32496;
	// bl 0x82ca7538
	ctx.lr = 0x83192350;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1112(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1112, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192368"))) PPC_WEAK_FUNC(sub_83192368);
PPC_FUNC_IMPL(__imp__sub_83192368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32520
	ctx.r3.s64 = ctx.r11.s64 + 32520;
	// bl 0x82ca7538
	ctx.lr = 0x83192380;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-44(r11)
	PPC_STORE_U32(ctx.r11.u32 + -44, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192398"))) PPC_WEAK_FUNC(sub_83192398);
PPC_FUNC_IMPL(__imp__sub_83192398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32548
	ctx.r3.s64 = ctx.r11.s64 + 32548;
	// bl 0x82ca7538
	ctx.lr = 0x831923B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2788(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2788, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831923C8"))) PPC_WEAK_FUNC(sub_831923C8);
PPC_FUNC_IMPL(__imp__sub_831923C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32576
	ctx.r3.s64 = ctx.r11.s64 + 32576;
	// bl 0x82ca7538
	ctx.lr = 0x831923E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3608, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831923F8"))) PPC_WEAK_FUNC(sub_831923F8);
PPC_FUNC_IMPL(__imp__sub_831923F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32592
	ctx.r3.s64 = ctx.r11.s64 + 32592;
	// bl 0x82ca7538
	ctx.lr = 0x83192410;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-532(r11)
	PPC_STORE_U32(ctx.r11.u32 + -532, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192428"))) PPC_WEAK_FUNC(sub_83192428);
PPC_FUNC_IMPL(__imp__sub_83192428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32608
	ctx.r3.s64 = ctx.r11.s64 + 32608;
	// bl 0x82ca7538
	ctx.lr = 0x83192440;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1708(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1708, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192458"))) PPC_WEAK_FUNC(sub_83192458);
PPC_FUNC_IMPL(__imp__sub_83192458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32628
	ctx.r3.s64 = ctx.r11.s64 + 32628;
	// bl 0x82ca7538
	ctx.lr = 0x83192470;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1480(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1480, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192488"))) PPC_WEAK_FUNC(sub_83192488);
PPC_FUNC_IMPL(__imp__sub_83192488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32648
	ctx.r3.s64 = ctx.r11.s64 + 32648;
	// bl 0x82ca7538
	ctx.lr = 0x831924A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1868(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1868, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831924B8"))) PPC_WEAK_FUNC(sub_831924B8);
PPC_FUNC_IMPL(__imp__sub_831924B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32664
	ctx.r3.s64 = ctx.r11.s64 + 32664;
	// bl 0x82ca7538
	ctx.lr = 0x831924D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1920(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1920, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831924E8"))) PPC_WEAK_FUNC(sub_831924E8);
PPC_FUNC_IMPL(__imp__sub_831924E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32680
	ctx.r3.s64 = ctx.r11.s64 + 32680;
	// bl 0x82ca7538
	ctx.lr = 0x83192500;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1600(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1600, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192518"))) PPC_WEAK_FUNC(sub_83192518);
PPC_FUNC_IMPL(__imp__sub_83192518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32696
	ctx.r3.s64 = ctx.r11.s64 + 32696;
	// bl 0x82ca7538
	ctx.lr = 0x83192530;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4932(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4932, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192548"))) PPC_WEAK_FUNC(sub_83192548);
PPC_FUNC_IMPL(__imp__sub_83192548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31324
	ctx.r3.s64 = ctx.r11.s64 + 31324;
	// bl 0x82ca7538
	ctx.lr = 0x83192560;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1444(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1444, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192578"))) PPC_WEAK_FUNC(sub_83192578);
PPC_FUNC_IMPL(__imp__sub_83192578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31336
	ctx.r3.s64 = ctx.r11.s64 + 31336;
	// bl 0x82ca7538
	ctx.lr = 0x83192590;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1484(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1484, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831925A8"))) PPC_WEAK_FUNC(sub_831925A8);
PPC_FUNC_IMPL(__imp__sub_831925A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32716
	ctx.r3.s64 = ctx.r11.s64 + 32716;
	// bl 0x82ca7538
	ctx.lr = 0x831925C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1704(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1704, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831925D8"))) PPC_WEAK_FUNC(sub_831925D8);
PPC_FUNC_IMPL(__imp__sub_831925D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32736
	ctx.r3.s64 = ctx.r11.s64 + 32736;
	// bl 0x82ca7538
	ctx.lr = 0x831925F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1532(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1532, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192608"))) PPC_WEAK_FUNC(sub_83192608);
PPC_FUNC_IMPL(__imp__sub_83192608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32752
	ctx.r3.s64 = ctx.r11.s64 + 32752;
	// bl 0x82ca7538
	ctx.lr = 0x83192620;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1584(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1584, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192638"))) PPC_WEAK_FUNC(sub_83192638);
PPC_FUNC_IMPL(__imp__sub_83192638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-32768
	ctx.r3.s64 = ctx.r11.s64 + -32768;
	// bl 0x82ca7538
	ctx.lr = 0x83192650;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-552(r11)
	PPC_STORE_U32(ctx.r11.u32 + -552, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192668"))) PPC_WEAK_FUNC(sub_83192668);
PPC_FUNC_IMPL(__imp__sub_83192668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-32752
	ctx.r3.s64 = ctx.r11.s64 + -32752;
	// bl 0x82ca7538
	ctx.lr = 0x83192680;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1588(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1588, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192698"))) PPC_WEAK_FUNC(sub_83192698);
PPC_FUNC_IMPL(__imp__sub_83192698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-32720
	ctx.r3.s64 = ctx.r11.s64 + -32720;
	// bl 0x82ca7538
	ctx.lr = 0x831926B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1392(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1392, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831926C8"))) PPC_WEAK_FUNC(sub_831926C8);
PPC_FUNC_IMPL(__imp__sub_831926C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-32696
	ctx.r3.s64 = ctx.r11.s64 + -32696;
	// bl 0x82ca7538
	ctx.lr = 0x831926E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1556(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1556, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831926F8"))) PPC_WEAK_FUNC(sub_831926F8);
PPC_FUNC_IMPL(__imp__sub_831926F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-32668
	ctx.r3.s64 = ctx.r11.s64 + -32668;
	// bl 0x82ca7538
	ctx.lr = 0x83192710;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1700(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1700, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192728"))) PPC_WEAK_FUNC(sub_83192728);
PPC_FUNC_IMPL(__imp__sub_83192728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-32640
	ctx.r3.s64 = ctx.r11.s64 + -32640;
	// bl 0x82ca7538
	ctx.lr = 0x83192740;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1732(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1732, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192758"))) PPC_WEAK_FUNC(sub_83192758);
PPC_FUNC_IMPL(__imp__sub_83192758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-32624
	ctx.r3.s64 = ctx.r11.s64 + -32624;
	// bl 0x82ca7538
	ctx.lr = 0x83192770;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2204, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192788"))) PPC_WEAK_FUNC(sub_83192788);
PPC_FUNC_IMPL(__imp__sub_83192788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-32604
	ctx.r3.s64 = ctx.r11.s64 + -32604;
	// bl 0x82ca7538
	ctx.lr = 0x831927A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1644(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1644, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831927B8"))) PPC_WEAK_FUNC(sub_831927B8);
PPC_FUNC_IMPL(__imp__sub_831927B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-32576
	ctx.r3.s64 = ctx.r11.s64 + -32576;
	// bl 0x82ca7538
	ctx.lr = 0x831927D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-956(r11)
	PPC_STORE_U32(ctx.r11.u32 + -956, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831927E8"))) PPC_WEAK_FUNC(sub_831927E8);
PPC_FUNC_IMPL(__imp__sub_831927E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-32548
	ctx.r3.s64 = ctx.r11.s64 + -32548;
	// bl 0x82ca7538
	ctx.lr = 0x83192800;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1452(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1452, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192818"))) PPC_WEAK_FUNC(sub_83192818);
PPC_FUNC_IMPL(__imp__sub_83192818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-32524
	ctx.r3.s64 = ctx.r11.s64 + -32524;
	// bl 0x82ca7538
	ctx.lr = 0x83192830;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4760(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4760, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192848"))) PPC_WEAK_FUNC(sub_83192848);
PPC_FUNC_IMPL(__imp__sub_83192848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-32508
	ctx.r3.s64 = ctx.r11.s64 + -32508;
	// bl 0x82ca7538
	ctx.lr = 0x83192860;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4816(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4816, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192878"))) PPC_WEAK_FUNC(sub_83192878);
PPC_FUNC_IMPL(__imp__sub_83192878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-32492
	ctx.r3.s64 = ctx.r11.s64 + -32492;
	// bl 0x82ca7538
	ctx.lr = 0x83192890;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1560(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1560, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831928A8"))) PPC_WEAK_FUNC(sub_831928A8);
PPC_FUNC_IMPL(__imp__sub_831928A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-32472
	ctx.r3.s64 = ctx.r11.s64 + -32472;
	// bl 0x82ca7538
	ctx.lr = 0x831928C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,940(r11)
	PPC_STORE_U32(ctx.r11.u32 + 940, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831928D8"))) PPC_WEAK_FUNC(sub_831928D8);
PPC_FUNC_IMPL(__imp__sub_831928D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-32448
	ctx.r3.s64 = ctx.r11.s64 + -32448;
	// bl 0x82ca7538
	ctx.lr = 0x831928F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1472(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1472, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192908"))) PPC_WEAK_FUNC(sub_83192908);
PPC_FUNC_IMPL(__imp__sub_83192908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-32436
	ctx.r3.s64 = ctx.r11.s64 + -32436;
	// bl 0x82ca7538
	ctx.lr = 0x83192920;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1640(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1640, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192938"))) PPC_WEAK_FUNC(sub_83192938);
PPC_FUNC_IMPL(__imp__sub_83192938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-32424
	ctx.r3.s64 = ctx.r11.s64 + -32424;
	// bl 0x82ca7538
	ctx.lr = 0x83192950;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1548(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1548, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192968"))) PPC_WEAK_FUNC(sub_83192968);
PPC_FUNC_IMPL(__imp__sub_83192968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-32400
	ctx.r3.s64 = ctx.r11.s64 + -32400;
	// bl 0x82ca7538
	ctx.lr = 0x83192980;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 256, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192998"))) PPC_WEAK_FUNC(sub_83192998);
PPC_FUNC_IMPL(__imp__sub_83192998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-32372
	ctx.r3.s64 = ctx.r11.s64 + -32372;
	// bl 0x82ca7538
	ctx.lr = 0x831929B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1536(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1536, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831929C8"))) PPC_WEAK_FUNC(sub_831929C8);
PPC_FUNC_IMPL(__imp__sub_831929C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-32348
	ctx.r3.s64 = ctx.r11.s64 + -32348;
	// bl 0x82ca7538
	ctx.lr = 0x831929E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1544(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1544, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831929F8"))) PPC_WEAK_FUNC(sub_831929F8);
PPC_FUNC_IMPL(__imp__sub_831929F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-32328
	ctx.r3.s64 = ctx.r11.s64 + -32328;
	// bl 0x82ca7538
	ctx.lr = 0x83192A10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1468(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1468, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192A28"))) PPC_WEAK_FUNC(sub_83192A28);
PPC_FUNC_IMPL(__imp__sub_83192A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-32308
	ctx.r3.s64 = ctx.r11.s64 + -32308;
	// bl 0x82ca7538
	ctx.lr = 0x83192A40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1488(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1488, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192A58"))) PPC_WEAK_FUNC(sub_83192A58);
PPC_FUNC_IMPL(__imp__sub_83192A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-32292
	ctx.r3.s64 = ctx.r11.s64 + -32292;
	// bl 0x82ca7538
	ctx.lr = 0x83192A70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6028(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6028, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192A88"))) PPC_WEAK_FUNC(sub_83192A88);
PPC_FUNC_IMPL(__imp__sub_83192A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-32272
	ctx.r3.s64 = ctx.r11.s64 + -32272;
	// bl 0x82ca7538
	ctx.lr = 0x83192AA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1604(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1604, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192AB8"))) PPC_WEAK_FUNC(sub_83192AB8);
PPC_FUNC_IMPL(__imp__sub_83192AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-32248
	ctx.r3.s64 = ctx.r11.s64 + -32248;
	// bl 0x82ca7538
	ctx.lr = 0x83192AD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1504(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1504, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192AE8"))) PPC_WEAK_FUNC(sub_83192AE8);
PPC_FUNC_IMPL(__imp__sub_83192AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-32228
	ctx.r3.s64 = ctx.r11.s64 + -32228;
	// bl 0x82ca7538
	ctx.lr = 0x83192B00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1632(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1632, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192B18"))) PPC_WEAK_FUNC(sub_83192B18);
PPC_FUNC_IMPL(__imp__sub_83192B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-32204
	ctx.r3.s64 = ctx.r11.s64 + -32204;
	// bl 0x82ca7538
	ctx.lr = 0x83192B30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-660(r11)
	PPC_STORE_U32(ctx.r11.u32 + -660, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192B48"))) PPC_WEAK_FUNC(sub_83192B48);
PPC_FUNC_IMPL(__imp__sub_83192B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-32180
	ctx.r3.s64 = ctx.r11.s64 + -32180;
	// bl 0x82ca7538
	ctx.lr = 0x83192B60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1692(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1692, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192B78"))) PPC_WEAK_FUNC(sub_83192B78);
PPC_FUNC_IMPL(__imp__sub_83192B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-32164
	ctx.r3.s64 = ctx.r11.s64 + -32164;
	// bl 0x82ca7538
	ctx.lr = 0x83192B90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 548, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192BA8"))) PPC_WEAK_FUNC(sub_83192BA8);
PPC_FUNC_IMPL(__imp__sub_83192BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-32140
	ctx.r3.s64 = ctx.r11.s64 + -32140;
	// bl 0x82ca7538
	ctx.lr = 0x83192BC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-92(r11)
	PPC_STORE_U32(ctx.r11.u32 + -92, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192BD8"))) PPC_WEAK_FUNC(sub_83192BD8);
PPC_FUNC_IMPL(__imp__sub_83192BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-32116
	ctx.r3.s64 = ctx.r11.s64 + -32116;
	// bl 0x82ca7538
	ctx.lr = 0x83192BF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1900(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1900, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192C08"))) PPC_WEAK_FUNC(sub_83192C08);
PPC_FUNC_IMPL(__imp__sub_83192C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-32096
	ctx.r3.s64 = ctx.r11.s64 + -32096;
	// bl 0x82ca7538
	ctx.lr = 0x83192C20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1636(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1636, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192C38"))) PPC_WEAK_FUNC(sub_83192C38);
PPC_FUNC_IMPL(__imp__sub_83192C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-32076
	ctx.r3.s64 = ctx.r11.s64 + -32076;
	// bl 0x82ca7538
	ctx.lr = 0x83192C50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1596(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1596, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192C68"))) PPC_WEAK_FUNC(sub_83192C68);
PPC_FUNC_IMPL(__imp__sub_83192C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-32060
	ctx.r3.s64 = ctx.r11.s64 + -32060;
	// bl 0x82ca7538
	ctx.lr = 0x83192C80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1568(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1568, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192C98"))) PPC_WEAK_FUNC(sub_83192C98);
PPC_FUNC_IMPL(__imp__sub_83192C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-32044
	ctx.r3.s64 = ctx.r11.s64 + -32044;
	// bl 0x82ca7538
	ctx.lr = 0x83192CB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1668(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1668, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192CC8"))) PPC_WEAK_FUNC(sub_83192CC8);
PPC_FUNC_IMPL(__imp__sub_83192CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-32024
	ctx.r3.s64 = ctx.r11.s64 + -32024;
	// bl 0x82ca7538
	ctx.lr = 0x83192CE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1184, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192CF8"))) PPC_WEAK_FUNC(sub_83192CF8);
PPC_FUNC_IMPL(__imp__sub_83192CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-32004
	ctx.r3.s64 = ctx.r11.s64 + -32004;
	// bl 0x82ca7538
	ctx.lr = 0x83192D10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3932(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3932, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192D28"))) PPC_WEAK_FUNC(sub_83192D28);
PPC_FUNC_IMPL(__imp__sub_83192D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31984
	ctx.r3.s64 = ctx.r11.s64 + -31984;
	// bl 0x82ca7538
	ctx.lr = 0x83192D40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1676(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1676, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192D58"))) PPC_WEAK_FUNC(sub_83192D58);
PPC_FUNC_IMPL(__imp__sub_83192D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31964
	ctx.r3.s64 = ctx.r11.s64 + -31964;
	// bl 0x82ca7538
	ctx.lr = 0x83192D70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192D88"))) PPC_WEAK_FUNC(sub_83192D88);
PPC_FUNC_IMPL(__imp__sub_83192D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31936
	ctx.r3.s64 = ctx.r11.s64 + -31936;
	// bl 0x82ca7538
	ctx.lr = 0x83192DA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3884(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3884, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192DB8"))) PPC_WEAK_FUNC(sub_83192DB8);
PPC_FUNC_IMPL(__imp__sub_83192DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31912
	ctx.r3.s64 = ctx.r11.s64 + -31912;
	// bl 0x82ca7538
	ctx.lr = 0x83192DD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1500(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1500, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192DE8"))) PPC_WEAK_FUNC(sub_83192DE8);
PPC_FUNC_IMPL(__imp__sub_83192DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31896
	ctx.r3.s64 = ctx.r11.s64 + -31896;
	// bl 0x82ca7538
	ctx.lr = 0x83192E00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5784, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192E18"))) PPC_WEAK_FUNC(sub_83192E18);
PPC_FUNC_IMPL(__imp__sub_83192E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31876
	ctx.r3.s64 = ctx.r11.s64 + -31876;
	// bl 0x82ca7538
	ctx.lr = 0x83192E30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1660(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1660, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192E48"))) PPC_WEAK_FUNC(sub_83192E48);
PPC_FUNC_IMPL(__imp__sub_83192E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31860
	ctx.r3.s64 = ctx.r11.s64 + -31860;
	// bl 0x82ca7538
	ctx.lr = 0x83192E60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1728(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1728, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192E78"))) PPC_WEAK_FUNC(sub_83192E78);
PPC_FUNC_IMPL(__imp__sub_83192E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31840
	ctx.r3.s64 = ctx.r11.s64 + -31840;
	// bl 0x82ca7538
	ctx.lr = 0x83192E90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1572(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1572, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192EA8"))) PPC_WEAK_FUNC(sub_83192EA8);
PPC_FUNC_IMPL(__imp__sub_83192EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31824
	ctx.r3.s64 = ctx.r11.s64 + -31824;
	// bl 0x82ca7538
	ctx.lr = 0x83192EC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1508(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1508, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192ED8"))) PPC_WEAK_FUNC(sub_83192ED8);
PPC_FUNC_IMPL(__imp__sub_83192ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31804
	ctx.r3.s64 = ctx.r11.s64 + -31804;
	// bl 0x82ca7538
	ctx.lr = 0x83192EF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1548, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192F08"))) PPC_WEAK_FUNC(sub_83192F08);
PPC_FUNC_IMPL(__imp__sub_83192F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31780
	ctx.r3.s64 = ctx.r11.s64 + -31780;
	// bl 0x82ca7538
	ctx.lr = 0x83192F20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1296(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1296, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192F38"))) PPC_WEAK_FUNC(sub_83192F38);
PPC_FUNC_IMPL(__imp__sub_83192F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31756
	ctx.r3.s64 = ctx.r11.s64 + -31756;
	// bl 0x82ca7538
	ctx.lr = 0x83192F50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1528(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1528, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192F68"))) PPC_WEAK_FUNC(sub_83192F68);
PPC_FUNC_IMPL(__imp__sub_83192F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31728
	ctx.r3.s64 = ctx.r11.s64 + -31728;
	// bl 0x82ca7538
	ctx.lr = 0x83192F80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1696(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1696, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192F98"))) PPC_WEAK_FUNC(sub_83192F98);
PPC_FUNC_IMPL(__imp__sub_83192F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31708
	ctx.r3.s64 = ctx.r11.s64 + -31708;
	// bl 0x82ca7538
	ctx.lr = 0x83192FB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192FC8"))) PPC_WEAK_FUNC(sub_83192FC8);
PPC_FUNC_IMPL(__imp__sub_83192FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31684
	ctx.r3.s64 = ctx.r11.s64 + -31684;
	// bl 0x82ca7538
	ctx.lr = 0x83192FE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1936(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1936, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192FF8"))) PPC_WEAK_FUNC(sub_83192FF8);
PPC_FUNC_IMPL(__imp__sub_83192FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31648
	ctx.r3.s64 = ctx.r11.s64 + -31648;
	// bl 0x82ca7538
	ctx.lr = 0x83193010;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1724(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1724, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193028"))) PPC_WEAK_FUNC(sub_83193028);
PPC_FUNC_IMPL(__imp__sub_83193028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31612
	ctx.r3.s64 = ctx.r11.s64 + -31612;
	// bl 0x82ca7538
	ctx.lr = 0x83193040;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1576(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1576, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193058"))) PPC_WEAK_FUNC(sub_83193058);
PPC_FUNC_IMPL(__imp__sub_83193058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31576
	ctx.r3.s64 = ctx.r11.s64 + -31576;
	// bl 0x82ca7538
	ctx.lr = 0x83193070;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1492(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1492, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193088"))) PPC_WEAK_FUNC(sub_83193088);
PPC_FUNC_IMPL(__imp__sub_83193088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31540
	ctx.r3.s64 = ctx.r11.s64 + -31540;
	// bl 0x82ca7538
	ctx.lr = 0x831930A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1608(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1608, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831930B8"))) PPC_WEAK_FUNC(sub_831930B8);
PPC_FUNC_IMPL(__imp__sub_831930B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31516
	ctx.r3.s64 = ctx.r11.s64 + -31516;
	// bl 0x82ca7538
	ctx.lr = 0x831930D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2580(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2580, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831930E8"))) PPC_WEAK_FUNC(sub_831930E8);
PPC_FUNC_IMPL(__imp__sub_831930E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31496
	ctx.r3.s64 = ctx.r11.s64 + -31496;
	// bl 0x82ca7538
	ctx.lr = 0x83193100;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1628(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1628, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193118"))) PPC_WEAK_FUNC(sub_83193118);
PPC_FUNC_IMPL(__imp__sub_83193118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31472
	ctx.r3.s64 = ctx.r11.s64 + -31472;
	// bl 0x82ca7538
	ctx.lr = 0x83193130;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5172, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193148"))) PPC_WEAK_FUNC(sub_83193148);
PPC_FUNC_IMPL(__imp__sub_83193148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31452
	ctx.r3.s64 = ctx.r11.s64 + -31452;
	// bl 0x82ca7538
	ctx.lr = 0x83193160;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1280, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193178"))) PPC_WEAK_FUNC(sub_83193178);
PPC_FUNC_IMPL(__imp__sub_83193178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31436
	ctx.r3.s64 = ctx.r11.s64 + -31436;
	// bl 0x82ca7538
	ctx.lr = 0x83193190;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1620(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1620, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831931A8"))) PPC_WEAK_FUNC(sub_831931A8);
PPC_FUNC_IMPL(__imp__sub_831931A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31420
	ctx.r3.s64 = ctx.r11.s64 + -31420;
	// bl 0x82ca7538
	ctx.lr = 0x831931C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1612(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1612, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831931D8"))) PPC_WEAK_FUNC(sub_831931D8);
PPC_FUNC_IMPL(__imp__sub_831931D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31404
	ctx.r3.s64 = ctx.r11.s64 + -31404;
	// bl 0x82ca7538
	ctx.lr = 0x831931F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3592, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193208"))) PPC_WEAK_FUNC(sub_83193208);
PPC_FUNC_IMPL(__imp__sub_83193208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31388
	ctx.r3.s64 = ctx.r11.s64 + -31388;
	// bl 0x82ca7538
	ctx.lr = 0x83193220;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2908(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2908, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193238"))) PPC_WEAK_FUNC(sub_83193238);
PPC_FUNC_IMPL(__imp__sub_83193238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31372
	ctx.r3.s64 = ctx.r11.s64 + -31372;
	// bl 0x82ca7538
	ctx.lr = 0x83193250;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1496(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1496, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193268"))) PPC_WEAK_FUNC(sub_83193268);
PPC_FUNC_IMPL(__imp__sub_83193268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31356
	ctx.r3.s64 = ctx.r11.s64 + -31356;
	// bl 0x82ca7538
	ctx.lr = 0x83193280;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2180, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193298"))) PPC_WEAK_FUNC(sub_83193298);
PPC_FUNC_IMPL(__imp__sub_83193298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31336
	ctx.r3.s64 = ctx.r11.s64 + -31336;
	// bl 0x82ca7538
	ctx.lr = 0x831932B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3612(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3612, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831932C8"))) PPC_WEAK_FUNC(sub_831932C8);
PPC_FUNC_IMPL(__imp__sub_831932C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31316
	ctx.r3.s64 = ctx.r11.s64 + -31316;
	// bl 0x82ca7538
	ctx.lr = 0x831932E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1448(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1448, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831932F8"))) PPC_WEAK_FUNC(sub_831932F8);
PPC_FUNC_IMPL(__imp__sub_831932F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31292
	ctx.r3.s64 = ctx.r11.s64 + -31292;
	// bl 0x82ca7538
	ctx.lr = 0x83193310;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193328"))) PPC_WEAK_FUNC(sub_83193328);
PPC_FUNC_IMPL(__imp__sub_83193328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31272
	ctx.r3.s64 = ctx.r11.s64 + -31272;
	// bl 0x82ca7538
	ctx.lr = 0x83193340;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1580(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1580, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193358"))) PPC_WEAK_FUNC(sub_83193358);
PPC_FUNC_IMPL(__imp__sub_83193358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31252
	ctx.r3.s64 = ctx.r11.s64 + -31252;
	// bl 0x82ca7538
	ctx.lr = 0x83193370;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1616(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1616, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193388"))) PPC_WEAK_FUNC(sub_83193388);
PPC_FUNC_IMPL(__imp__sub_83193388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31232
	ctx.r3.s64 = ctx.r11.s64 + -31232;
	// bl 0x82ca7538
	ctx.lr = 0x831933A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1684(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1684, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831933B8"))) PPC_WEAK_FUNC(sub_831933B8);
PPC_FUNC_IMPL(__imp__sub_831933B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31212
	ctx.r3.s64 = ctx.r11.s64 + -31212;
	// bl 0x82ca7538
	ctx.lr = 0x831933D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2912(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2912, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831933E8"))) PPC_WEAK_FUNC(sub_831933E8);
PPC_FUNC_IMPL(__imp__sub_831933E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31188
	ctx.r3.s64 = ctx.r11.s64 + -31188;
	// bl 0x82ca7538
	ctx.lr = 0x83193400;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 252, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193418"))) PPC_WEAK_FUNC(sub_83193418);
PPC_FUNC_IMPL(__imp__sub_83193418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31160
	ctx.r3.s64 = ctx.r11.s64 + -31160;
	// bl 0x82ca7538
	ctx.lr = 0x83193430;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5220, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193448"))) PPC_WEAK_FUNC(sub_83193448);
PPC_FUNC_IMPL(__imp__sub_83193448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31128
	ctx.r3.s64 = ctx.r11.s64 + -31128;
	// bl 0x82ca7538
	ctx.lr = 0x83193460;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1512(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1512, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193478"))) PPC_WEAK_FUNC(sub_83193478);
PPC_FUNC_IMPL(__imp__sub_83193478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31116
	ctx.r3.s64 = ctx.r11.s64 + -31116;
	// bl 0x82ca7538
	ctx.lr = 0x83193490;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1688(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1688, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831934A8"))) PPC_WEAK_FUNC(sub_831934A8);
PPC_FUNC_IMPL(__imp__sub_831934A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31104
	ctx.r3.s64 = ctx.r11.s64 + -31104;
	// bl 0x82ca7538
	ctx.lr = 0x831934C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2440, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831934D8"))) PPC_WEAK_FUNC(sub_831934D8);
PPC_FUNC_IMPL(__imp__sub_831934D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31080
	ctx.r3.s64 = ctx.r11.s64 + -31080;
	// bl 0x82ca7538
	ctx.lr = 0x831934F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2272, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193508"))) PPC_WEAK_FUNC(sub_83193508);
PPC_FUNC_IMPL(__imp__sub_83193508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31056
	ctx.r3.s64 = ctx.r11.s64 + -31056;
	// bl 0x82ca7538
	ctx.lr = 0x83193520;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1564(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1564, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193538"))) PPC_WEAK_FUNC(sub_83193538);
PPC_FUNC_IMPL(__imp__sub_83193538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31028
	ctx.r3.s64 = ctx.r11.s64 + -31028;
	// bl 0x82ca7538
	ctx.lr = 0x83193550;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1464(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1464, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193568"))) PPC_WEAK_FUNC(sub_83193568);
PPC_FUNC_IMPL(__imp__sub_83193568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-31000
	ctx.r3.s64 = ctx.r11.s64 + -31000;
	// bl 0x82ca7538
	ctx.lr = 0x83193580;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 440, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193598"))) PPC_WEAK_FUNC(sub_83193598);
PPC_FUNC_IMPL(__imp__sub_83193598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30988
	ctx.r3.s64 = ctx.r11.s64 + -30988;
	// bl 0x82ca7538
	ctx.lr = 0x831935B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1716(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1716, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831935C8"))) PPC_WEAK_FUNC(sub_831935C8);
PPC_FUNC_IMPL(__imp__sub_831935C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30972
	ctx.r3.s64 = ctx.r11.s64 + -30972;
	// bl 0x82ca7538
	ctx.lr = 0x831935E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1364(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1364, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831935F8"))) PPC_WEAK_FUNC(sub_831935F8);
PPC_FUNC_IMPL(__imp__sub_831935F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30944
	ctx.r3.s64 = ctx.r11.s64 + -30944;
	// bl 0x82ca7538
	ctx.lr = 0x83193610;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1592(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1592, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193628"))) PPC_WEAK_FUNC(sub_83193628);
PPC_FUNC_IMPL(__imp__sub_83193628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30924
	ctx.r3.s64 = ctx.r11.s64 + -30924;
	// bl 0x82ca7538
	ctx.lr = 0x83193640;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1656(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1656, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193658"))) PPC_WEAK_FUNC(sub_83193658);
PPC_FUNC_IMPL(__imp__sub_83193658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30900
	ctx.r3.s64 = ctx.r11.s64 + -30900;
	// bl 0x82ca7538
	ctx.lr = 0x83193670;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-564(r11)
	PPC_STORE_U32(ctx.r11.u32 + -564, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193688"))) PPC_WEAK_FUNC(sub_83193688);
PPC_FUNC_IMPL(__imp__sub_83193688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30872
	ctx.r3.s64 = ctx.r11.s64 + -30872;
	// bl 0x82ca7538
	ctx.lr = 0x831936A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1672(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1672, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831936B8"))) PPC_WEAK_FUNC(sub_831936B8);
PPC_FUNC_IMPL(__imp__sub_831936B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30840
	ctx.r3.s64 = ctx.r11.s64 + -30840;
	// bl 0x82ca7538
	ctx.lr = 0x831936D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1524(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1524, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831936E8"))) PPC_WEAK_FUNC(sub_831936E8);
PPC_FUNC_IMPL(__imp__sub_831936E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30824
	ctx.r3.s64 = ctx.r11.s64 + -30824;
	// bl 0x82ca7538
	ctx.lr = 0x83193700;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1520(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1520, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193718"))) PPC_WEAK_FUNC(sub_83193718);
PPC_FUNC_IMPL(__imp__sub_83193718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30800
	ctx.r3.s64 = ctx.r11.s64 + -30800;
	// bl 0x82ca7538
	ctx.lr = 0x83193730;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1232(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1232, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193748"))) PPC_WEAK_FUNC(sub_83193748);
PPC_FUNC_IMPL(__imp__sub_83193748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30772
	ctx.r3.s64 = ctx.r11.s64 + -30772;
	// bl 0x82ca7538
	ctx.lr = 0x83193760;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1724(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1724, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193778"))) PPC_WEAK_FUNC(sub_83193778);
PPC_FUNC_IMPL(__imp__sub_83193778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30748
	ctx.r3.s64 = ctx.r11.s64 + -30748;
	// bl 0x82ca7538
	ctx.lr = 0x83193790;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1284(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1284, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831937A8"))) PPC_WEAK_FUNC(sub_831937A8);
PPC_FUNC_IMPL(__imp__sub_831937A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30728
	ctx.r3.s64 = ctx.r11.s64 + -30728;
	// bl 0x82ca7538
	ctx.lr = 0x831937C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1664(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1664, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831937D8"))) PPC_WEAK_FUNC(sub_831937D8);
PPC_FUNC_IMPL(__imp__sub_831937D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30708
	ctx.r3.s64 = ctx.r11.s64 + -30708;
	// bl 0x82ca7538
	ctx.lr = 0x831937F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1988(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1988, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193808"))) PPC_WEAK_FUNC(sub_83193808);
PPC_FUNC_IMPL(__imp__sub_83193808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30688
	ctx.r3.s64 = ctx.r11.s64 + -30688;
	// bl 0x82ca7538
	ctx.lr = 0x83193820;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-656(r11)
	PPC_STORE_U32(ctx.r11.u32 + -656, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193838"))) PPC_WEAK_FUNC(sub_83193838);
PPC_FUNC_IMPL(__imp__sub_83193838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30668
	ctx.r3.s64 = ctx.r11.s64 + -30668;
	// bl 0x82ca7538
	ctx.lr = 0x83193850;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1332(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1332, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193868"))) PPC_WEAK_FUNC(sub_83193868);
PPC_FUNC_IMPL(__imp__sub_83193868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30648
	ctx.r3.s64 = ctx.r11.s64 + -30648;
	// bl 0x82ca7538
	ctx.lr = 0x83193880;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1552(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1552, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193898"))) PPC_WEAK_FUNC(sub_83193898);
PPC_FUNC_IMPL(__imp__sub_83193898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30624
	ctx.r3.s64 = ctx.r11.s64 + -30624;
	// bl 0x82ca7538
	ctx.lr = 0x831938B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1648(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1648, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831938C8"))) PPC_WEAK_FUNC(sub_831938C8);
PPC_FUNC_IMPL(__imp__sub_831938C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30600
	ctx.r3.s64 = ctx.r11.s64 + -30600;
	// bl 0x82ca7538
	ctx.lr = 0x831938E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1652(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1652, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831938F8"))) PPC_WEAK_FUNC(sub_831938F8);
PPC_FUNC_IMPL(__imp__sub_831938F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30572
	ctx.r3.s64 = ctx.r11.s64 + -30572;
	// bl 0x82ca7538
	ctx.lr = 0x83193910;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1428(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1428, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193928"))) PPC_WEAK_FUNC(sub_83193928);
PPC_FUNC_IMPL(__imp__sub_83193928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30544
	ctx.r3.s64 = ctx.r11.s64 + -30544;
	// bl 0x82ca7538
	ctx.lr = 0x83193940;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3668, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193958"))) PPC_WEAK_FUNC(sub_83193958);
PPC_FUNC_IMPL(__imp__sub_83193958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30532
	ctx.r3.s64 = ctx.r11.s64 + -30532;
	// bl 0x82ca7538
	ctx.lr = 0x83193970;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1476(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1476, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193988"))) PPC_WEAK_FUNC(sub_83193988);
PPC_FUNC_IMPL(__imp__sub_83193988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30500
	ctx.r3.s64 = ctx.r11.s64 + -30500;
	// bl 0x82ca7538
	ctx.lr = 0x831939A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1460(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1460, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831939B8"))) PPC_WEAK_FUNC(sub_831939B8);
PPC_FUNC_IMPL(__imp__sub_831939B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30468
	ctx.r3.s64 = ctx.r11.s64 + -30468;
	// bl 0x82ca7538
	ctx.lr = 0x831939D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1540(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1540, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831939E8"))) PPC_WEAK_FUNC(sub_831939E8);
PPC_FUNC_IMPL(__imp__sub_831939E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30444
	ctx.r3.s64 = ctx.r11.s64 + -30444;
	// bl 0x82ca7538
	ctx.lr = 0x83193A00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5104, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193A18"))) PPC_WEAK_FUNC(sub_83193A18);
PPC_FUNC_IMPL(__imp__sub_83193A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30416
	ctx.r3.s64 = ctx.r11.s64 + -30416;
	// bl 0x82ca7538
	ctx.lr = 0x83193A30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1516(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1516, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193A48"))) PPC_WEAK_FUNC(sub_83193A48);
PPC_FUNC_IMPL(__imp__sub_83193A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30384
	ctx.r3.s64 = ctx.r11.s64 + -30384;
	// bl 0x82ca7538
	ctx.lr = 0x83193A60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1712(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1712, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193A78"))) PPC_WEAK_FUNC(sub_83193A78);
PPC_FUNC_IMPL(__imp__sub_83193A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30356
	ctx.r3.s64 = ctx.r11.s64 + -30356;
	// bl 0x82ca7538
	ctx.lr = 0x83193A90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1720(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1720, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193AA8"))) PPC_WEAK_FUNC(sub_83193AA8);
PPC_FUNC_IMPL(__imp__sub_83193AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30324
	ctx.r3.s64 = ctx.r11.s64 + -30324;
	// bl 0x82ca7538
	ctx.lr = 0x83193AC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3976(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3976, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193AD8"))) PPC_WEAK_FUNC(sub_83193AD8);
PPC_FUNC_IMPL(__imp__sub_83193AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30296
	ctx.r3.s64 = ctx.r11.s64 + -30296;
	// bl 0x82ca7538
	ctx.lr = 0x83193AF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1680(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1680, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193B08"))) PPC_WEAK_FUNC(sub_83193B08);
PPC_FUNC_IMPL(__imp__sub_83193B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30276
	ctx.r3.s64 = ctx.r11.s64 + -30276;
	// bl 0x82ca7538
	ctx.lr = 0x83193B20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1456(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1456, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193B38"))) PPC_WEAK_FUNC(sub_83193B38);
PPC_FUNC_IMPL(__imp__sub_83193B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30240
	ctx.r3.s64 = ctx.r11.s64 + -30240;
	// bl 0x82ca7538
	ctx.lr = 0x83193B50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1624(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1624, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193B68"))) PPC_WEAK_FUNC(sub_83193B68);
PPC_FUNC_IMPL(__imp__sub_83193B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30204
	ctx.r3.s64 = ctx.r11.s64 + -30204;
	// bl 0x82ca7538
	ctx.lr = 0x83193B80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1048(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1048, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193B98"))) PPC_WEAK_FUNC(sub_83193B98);
PPC_FUNC_IMPL(__imp__sub_83193B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30192
	ctx.r3.s64 = ctx.r11.s64 + -30192;
	// bl 0x82ca7538
	ctx.lr = 0x83193BB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1432(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1432, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193BC8"))) PPC_WEAK_FUNC(sub_83193BC8);
PPC_FUNC_IMPL(__imp__sub_83193BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30176
	ctx.r3.s64 = ctx.r11.s64 + -30176;
	// bl 0x82ca7538
	ctx.lr = 0x83193BE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1056(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1056, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193BF8"))) PPC_WEAK_FUNC(sub_83193BF8);
PPC_FUNC_IMPL(__imp__sub_83193BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30160
	ctx.r3.s64 = ctx.r11.s64 + -30160;
	// bl 0x82ca7538
	ctx.lr = 0x83193C10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193C28"))) PPC_WEAK_FUNC(sub_83193C28);
PPC_FUNC_IMPL(__imp__sub_83193C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30140
	ctx.r3.s64 = ctx.r11.s64 + -30140;
	// bl 0x82ca7538
	ctx.lr = 0x83193C40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5384(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5384, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193C58"))) PPC_WEAK_FUNC(sub_83193C58);
PPC_FUNC_IMPL(__imp__sub_83193C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30120
	ctx.r3.s64 = ctx.r11.s64 + -30120;
	// bl 0x82ca7538
	ctx.lr = 0x83193C70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1044(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1044, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193C88"))) PPC_WEAK_FUNC(sub_83193C88);
PPC_FUNC_IMPL(__imp__sub_83193C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30088
	ctx.r3.s64 = ctx.r11.s64 + -30088;
	// bl 0x82ca7538
	ctx.lr = 0x83193CA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1028(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1028, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193CB8"))) PPC_WEAK_FUNC(sub_83193CB8);
PPC_FUNC_IMPL(__imp__sub_83193CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30056
	ctx.r3.s64 = ctx.r11.s64 + -30056;
	// bl 0x82ca7538
	ctx.lr = 0x83193CD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1036(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1036, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193CE8"))) PPC_WEAK_FUNC(sub_83193CE8);
PPC_FUNC_IMPL(__imp__sub_83193CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30032
	ctx.r3.s64 = ctx.r11.s64 + -30032;
	// bl 0x82ca7538
	ctx.lr = 0x83193D00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1040(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1040, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193D18"))) PPC_WEAK_FUNC(sub_83193D18);
PPC_FUNC_IMPL(__imp__sub_83193D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30004
	ctx.r3.s64 = ctx.r11.s64 + -30004;
	// bl 0x82ca7538
	ctx.lr = 0x83193D30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1060(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1060, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193D48"))) PPC_WEAK_FUNC(sub_83193D48);
PPC_FUNC_IMPL(__imp__sub_83193D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29976
	ctx.r3.s64 = ctx.r11.s64 + -29976;
	// bl 0x82ca7538
	ctx.lr = 0x83193D60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2276, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193D78"))) PPC_WEAK_FUNC(sub_83193D78);
PPC_FUNC_IMPL(__imp__sub_83193D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29944
	ctx.r3.s64 = ctx.r11.s64 + -29944;
	// bl 0x82ca7538
	ctx.lr = 0x83193D90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1052(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1052, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193DA8"))) PPC_WEAK_FUNC(sub_83193DA8);
PPC_FUNC_IMPL(__imp__sub_83193DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29912
	ctx.r3.s64 = ctx.r11.s64 + -29912;
	// bl 0x82ca7538
	ctx.lr = 0x83193DC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1032(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1032, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193DD8"))) PPC_WEAK_FUNC(sub_83193DD8);
PPC_FUNC_IMPL(__imp__sub_83193DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29892
	ctx.r3.s64 = ctx.r11.s64 + -29892;
	// bl 0x82ca7538
	ctx.lr = 0x83193DF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5348, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193E08"))) PPC_WEAK_FUNC(sub_83193E08);
PPC_FUNC_IMPL(__imp__sub_83193E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29876
	ctx.r3.s64 = ctx.r11.s64 + -29876;
	// bl 0x82ca7538
	ctx.lr = 0x83193E20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,640(r11)
	PPC_STORE_U32(ctx.r11.u32 + 640, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193E38"))) PPC_WEAK_FUNC(sub_83193E38);
PPC_FUNC_IMPL(__imp__sub_83193E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29860
	ctx.r3.s64 = ctx.r11.s64 + -29860;
	// bl 0x82ca7538
	ctx.lr = 0x83193E50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1076(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1076, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193E68"))) PPC_WEAK_FUNC(sub_83193E68);
PPC_FUNC_IMPL(__imp__sub_83193E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29840
	ctx.r3.s64 = ctx.r11.s64 + -29840;
	// bl 0x82ca7538
	ctx.lr = 0x83193E80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3620(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3620, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193E98"))) PPC_WEAK_FUNC(sub_83193E98);
PPC_FUNC_IMPL(__imp__sub_83193E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29824
	ctx.r3.s64 = ctx.r11.s64 + -29824;
	// bl 0x82ca7538
	ctx.lr = 0x83193EB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,596(r11)
	PPC_STORE_U32(ctx.r11.u32 + 596, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193EC8"))) PPC_WEAK_FUNC(sub_83193EC8);
PPC_FUNC_IMPL(__imp__sub_83193EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29812
	ctx.r3.s64 = ctx.r11.s64 + -29812;
	// bl 0x82ca7538
	ctx.lr = 0x83193EE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5924(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5924, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193EF8"))) PPC_WEAK_FUNC(sub_83193EF8);
PPC_FUNC_IMPL(__imp__sub_83193EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x83193F10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 572, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193F28"))) PPC_WEAK_FUNC(sub_83193F28);
PPC_FUNC_IMPL(__imp__sub_83193F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29788
	ctx.r3.s64 = ctx.r11.s64 + -29788;
	// bl 0x82ca7538
	ctx.lr = 0x83193F40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 660, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193F58"))) PPC_WEAK_FUNC(sub_83193F58);
PPC_FUNC_IMPL(__imp__sub_83193F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29764
	ctx.r3.s64 = ctx.r11.s64 + -29764;
	// bl 0x82ca7538
	ctx.lr = 0x83193F70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,716(r11)
	PPC_STORE_U32(ctx.r11.u32 + 716, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193F88"))) PPC_WEAK_FUNC(sub_83193F88);
PPC_FUNC_IMPL(__imp__sub_83193F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29744
	ctx.r3.s64 = ctx.r11.s64 + -29744;
	// bl 0x82ca7538
	ctx.lr = 0x83193FA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,636(r11)
	PPC_STORE_U32(ctx.r11.u32 + 636, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193FB8"))) PPC_WEAK_FUNC(sub_83193FB8);
PPC_FUNC_IMPL(__imp__sub_83193FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29728
	ctx.r3.s64 = ctx.r11.s64 + -29728;
	// bl 0x82ca7538
	ctx.lr = 0x83193FD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,648(r11)
	PPC_STORE_U32(ctx.r11.u32 + 648, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193FE8"))) PPC_WEAK_FUNC(sub_83193FE8);
PPC_FUNC_IMPL(__imp__sub_83193FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29708
	ctx.r3.s64 = ctx.r11.s64 + -29708;
	// bl 0x82ca7538
	ctx.lr = 0x83194000;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,768(r11)
	PPC_STORE_U32(ctx.r11.u32 + 768, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194018"))) PPC_WEAK_FUNC(sub_83194018);
PPC_FUNC_IMPL(__imp__sub_83194018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29680
	ctx.r3.s64 = ctx.r11.s64 + -29680;
	// bl 0x82ca7538
	ctx.lr = 0x83194030;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,580(r11)
	PPC_STORE_U32(ctx.r11.u32 + 580, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194048"))) PPC_WEAK_FUNC(sub_83194048);
PPC_FUNC_IMPL(__imp__sub_83194048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29664
	ctx.r3.s64 = ctx.r11.s64 + -29664;
	// bl 0x82ca7538
	ctx.lr = 0x83194060;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,800(r11)
	PPC_STORE_U32(ctx.r11.u32 + 800, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194078"))) PPC_WEAK_FUNC(sub_83194078);
PPC_FUNC_IMPL(__imp__sub_83194078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29636
	ctx.r3.s64 = ctx.r11.s64 + -29636;
	// bl 0x82ca7538
	ctx.lr = 0x83194090;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,680(r11)
	PPC_STORE_U32(ctx.r11.u32 + 680, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831940A8"))) PPC_WEAK_FUNC(sub_831940A8);
PPC_FUNC_IMPL(__imp__sub_831940A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29612
	ctx.r3.s64 = ctx.r11.s64 + -29612;
	// bl 0x82ca7538
	ctx.lr = 0x831940C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,820(r11)
	PPC_STORE_U32(ctx.r11.u32 + 820, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831940D8"))) PPC_WEAK_FUNC(sub_831940D8);
PPC_FUNC_IMPL(__imp__sub_831940D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29588
	ctx.r3.s64 = ctx.r11.s64 + -29588;
	// bl 0x82ca7538
	ctx.lr = 0x831940F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,676(r11)
	PPC_STORE_U32(ctx.r11.u32 + 676, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194108"))) PPC_WEAK_FUNC(sub_83194108);
PPC_FUNC_IMPL(__imp__sub_83194108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29568
	ctx.r3.s64 = ctx.r11.s64 + -29568;
	// bl 0x82ca7538
	ctx.lr = 0x83194120;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,748(r11)
	PPC_STORE_U32(ctx.r11.u32 + 748, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194138"))) PPC_WEAK_FUNC(sub_83194138);
PPC_FUNC_IMPL(__imp__sub_83194138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29548
	ctx.r3.s64 = ctx.r11.s64 + -29548;
	// bl 0x82ca7538
	ctx.lr = 0x83194150;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,744(r11)
	PPC_STORE_U32(ctx.r11.u32 + 744, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194168"))) PPC_WEAK_FUNC(sub_83194168);
PPC_FUNC_IMPL(__imp__sub_83194168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29524
	ctx.r3.s64 = ctx.r11.s64 + -29524;
	// bl 0x82ca7538
	ctx.lr = 0x83194180;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 672, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194198"))) PPC_WEAK_FUNC(sub_83194198);
PPC_FUNC_IMPL(__imp__sub_83194198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x831941B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5132, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831941C8"))) PPC_WEAK_FUNC(sub_831941C8);
PPC_FUNC_IMPL(__imp__sub_831941C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29504
	ctx.r3.s64 = ctx.r11.s64 + -29504;
	// bl 0x82ca7538
	ctx.lr = 0x831941E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 608, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831941F8"))) PPC_WEAK_FUNC(sub_831941F8);
PPC_FUNC_IMPL(__imp__sub_831941F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29492
	ctx.r3.s64 = ctx.r11.s64 + -29492;
	// bl 0x82ca7538
	ctx.lr = 0x83194210;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 592, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194228"))) PPC_WEAK_FUNC(sub_83194228);
PPC_FUNC_IMPL(__imp__sub_83194228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29472
	ctx.r3.s64 = ctx.r11.s64 + -29472;
	// bl 0x82ca7538
	ctx.lr = 0x83194240;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 700, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194258"))) PPC_WEAK_FUNC(sub_83194258);
PPC_FUNC_IMPL(__imp__sub_83194258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29448
	ctx.r3.s64 = ctx.r11.s64 + -29448;
	// bl 0x82ca7538
	ctx.lr = 0x83194270;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,776(r11)
	PPC_STORE_U32(ctx.r11.u32 + 776, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194288"))) PPC_WEAK_FUNC(sub_83194288);
PPC_FUNC_IMPL(__imp__sub_83194288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29428
	ctx.r3.s64 = ctx.r11.s64 + -29428;
	// bl 0x82ca7538
	ctx.lr = 0x831942A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,772(r11)
	PPC_STORE_U32(ctx.r11.u32 + 772, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831942B8"))) PPC_WEAK_FUNC(sub_831942B8);
PPC_FUNC_IMPL(__imp__sub_831942B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29404
	ctx.r3.s64 = ctx.r11.s64 + -29404;
	// bl 0x82ca7538
	ctx.lr = 0x831942D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,792(r11)
	PPC_STORE_U32(ctx.r11.u32 + 792, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831942E8"))) PPC_WEAK_FUNC(sub_831942E8);
PPC_FUNC_IMPL(__imp__sub_831942E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29384
	ctx.r3.s64 = ctx.r11.s64 + -29384;
	// bl 0x82ca7538
	ctx.lr = 0x83194300;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 764, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194318"))) PPC_WEAK_FUNC(sub_83194318);
PPC_FUNC_IMPL(__imp__sub_83194318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29368
	ctx.r3.s64 = ctx.r11.s64 + -29368;
	// bl 0x82ca7538
	ctx.lr = 0x83194330;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,684(r11)
	PPC_STORE_U32(ctx.r11.u32 + 684, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194348"))) PPC_WEAK_FUNC(sub_83194348);
PPC_FUNC_IMPL(__imp__sub_83194348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29348
	ctx.r3.s64 = ctx.r11.s64 + -29348;
	// bl 0x82ca7538
	ctx.lr = 0x83194360;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,976(r11)
	PPC_STORE_U32(ctx.r11.u32 + 976, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194378"))) PPC_WEAK_FUNC(sub_83194378);
PPC_FUNC_IMPL(__imp__sub_83194378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29328
	ctx.r3.s64 = ctx.r11.s64 + -29328;
	// bl 0x82ca7538
	ctx.lr = 0x83194390;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,644(r11)
	PPC_STORE_U32(ctx.r11.u32 + 644, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831943A8"))) PPC_WEAK_FUNC(sub_831943A8);
PPC_FUNC_IMPL(__imp__sub_831943A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29308
	ctx.r3.s64 = ctx.r11.s64 + -29308;
	// bl 0x82ca7538
	ctx.lr = 0x831943C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,812(r11)
	PPC_STORE_U32(ctx.r11.u32 + 812, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831943D8"))) PPC_WEAK_FUNC(sub_831943D8);
PPC_FUNC_IMPL(__imp__sub_831943D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x831943F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,632(r11)
	PPC_STORE_U32(ctx.r11.u32 + 632, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194408"))) PPC_WEAK_FUNC(sub_83194408);
PPC_FUNC_IMPL(__imp__sub_83194408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29288
	ctx.r3.s64 = ctx.r11.s64 + -29288;
	// bl 0x82ca7538
	ctx.lr = 0x83194420;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,788(r11)
	PPC_STORE_U32(ctx.r11.u32 + 788, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194438"))) PPC_WEAK_FUNC(sub_83194438);
PPC_FUNC_IMPL(__imp__sub_83194438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29268
	ctx.r3.s64 = ctx.r11.s64 + -29268;
	// bl 0x82ca7538
	ctx.lr = 0x83194450;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 560, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194468"))) PPC_WEAK_FUNC(sub_83194468);
PPC_FUNC_IMPL(__imp__sub_83194468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29244
	ctx.r3.s64 = ctx.r11.s64 + -29244;
	// bl 0x82ca7538
	ctx.lr = 0x83194480;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,824(r11)
	PPC_STORE_U32(ctx.r11.u32 + 824, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194498"))) PPC_WEAK_FUNC(sub_83194498);
PPC_FUNC_IMPL(__imp__sub_83194498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29212
	ctx.r3.s64 = ctx.r11.s64 + -29212;
	// bl 0x82ca7538
	ctx.lr = 0x831944B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,612(r11)
	PPC_STORE_U32(ctx.r11.u32 + 612, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831944C8"))) PPC_WEAK_FUNC(sub_831944C8);
PPC_FUNC_IMPL(__imp__sub_831944C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29184
	ctx.r3.s64 = ctx.r11.s64 + -29184;
	// bl 0x82ca7538
	ctx.lr = 0x831944E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 784, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831944F8"))) PPC_WEAK_FUNC(sub_831944F8);
PPC_FUNC_IMPL(__imp__sub_831944F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29156
	ctx.r3.s64 = ctx.r11.s64 + -29156;
	// bl 0x82ca7538
	ctx.lr = 0x83194510;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,552(r11)
	PPC_STORE_U32(ctx.r11.u32 + 552, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194528"))) PPC_WEAK_FUNC(sub_83194528);
PPC_FUNC_IMPL(__imp__sub_83194528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29128
	ctx.r3.s64 = ctx.r11.s64 + -29128;
	// bl 0x82ca7538
	ctx.lr = 0x83194540;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,832(r11)
	PPC_STORE_U32(ctx.r11.u32 + 832, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194558"))) PPC_WEAK_FUNC(sub_83194558);
PPC_FUNC_IMPL(__imp__sub_83194558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29112
	ctx.r3.s64 = ctx.r11.s64 + -29112;
	// bl 0x82ca7538
	ctx.lr = 0x83194570;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3576(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3576, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194588"))) PPC_WEAK_FUNC(sub_83194588);
PPC_FUNC_IMPL(__imp__sub_83194588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29092
	ctx.r3.s64 = ctx.r11.s64 + -29092;
	// bl 0x82ca7538
	ctx.lr = 0x831945A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,708(r11)
	PPC_STORE_U32(ctx.r11.u32 + 708, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831945B8"))) PPC_WEAK_FUNC(sub_831945B8);
PPC_FUNC_IMPL(__imp__sub_831945B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29072
	ctx.r3.s64 = ctx.r11.s64 + -29072;
	// bl 0x82ca7538
	ctx.lr = 0x831945D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,796(r11)
	PPC_STORE_U32(ctx.r11.u32 + 796, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831945E8"))) PPC_WEAK_FUNC(sub_831945E8);
PPC_FUNC_IMPL(__imp__sub_831945E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29052
	ctx.r3.s64 = ctx.r11.s64 + -29052;
	// bl 0x82ca7538
	ctx.lr = 0x83194600;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 656, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194618"))) PPC_WEAK_FUNC(sub_83194618);
PPC_FUNC_IMPL(__imp__sub_83194618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29040
	ctx.r3.s64 = ctx.r11.s64 + -29040;
	// bl 0x82ca7538
	ctx.lr = 0x83194630;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,696(r11)
	PPC_STORE_U32(ctx.r11.u32 + 696, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194648"))) PPC_WEAK_FUNC(sub_83194648);
PPC_FUNC_IMPL(__imp__sub_83194648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29020
	ctx.r3.s64 = ctx.r11.s64 + -29020;
	// bl 0x82ca7538
	ctx.lr = 0x83194660;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2796(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2796, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194678"))) PPC_WEAK_FUNC(sub_83194678);
PPC_FUNC_IMPL(__imp__sub_83194678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,7776
	ctx.r3.s64 = ctx.r11.s64 + 7776;
	// bl 0x82ca7538
	ctx.lr = 0x83194690;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2684(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2684, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831946A8"))) PPC_WEAK_FUNC(sub_831946A8);
PPC_FUNC_IMPL(__imp__sub_831946A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29008
	ctx.r3.s64 = ctx.r11.s64 + -29008;
	// bl 0x82ca7538
	ctx.lr = 0x831946C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2632(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2632, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831946D8"))) PPC_WEAK_FUNC(sub_831946D8);
PPC_FUNC_IMPL(__imp__sub_831946D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,16464
	ctx.r3.s64 = ctx.r11.s64 + 16464;
	// bl 0x82ca7538
	ctx.lr = 0x831946F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2668, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194708"))) PPC_WEAK_FUNC(sub_83194708);
PPC_FUNC_IMPL(__imp__sub_83194708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,30976
	ctx.r3.s64 = ctx.r11.s64 + 30976;
	// bl 0x82ca7538
	ctx.lr = 0x83194720;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,692(r11)
	PPC_STORE_U32(ctx.r11.u32 + 692, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194738"))) PPC_WEAK_FUNC(sub_83194738);
PPC_FUNC_IMPL(__imp__sub_83194738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28992
	ctx.r3.s64 = ctx.r11.s64 + -28992;
	// bl 0x82ca7538
	ctx.lr = 0x83194750;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 668, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194768"))) PPC_WEAK_FUNC(sub_83194768);
PPC_FUNC_IMPL(__imp__sub_83194768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28972
	ctx.r3.s64 = ctx.r11.s64 + -28972;
	// bl 0x82ca7538
	ctx.lr = 0x83194780;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,736(r11)
	PPC_STORE_U32(ctx.r11.u32 + 736, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194798"))) PPC_WEAK_FUNC(sub_83194798);
PPC_FUNC_IMPL(__imp__sub_83194798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28956
	ctx.r3.s64 = ctx.r11.s64 + -28956;
	// bl 0x82ca7538
	ctx.lr = 0x831947B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,724(r11)
	PPC_STORE_U32(ctx.r11.u32 + 724, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831947C8"))) PPC_WEAK_FUNC(sub_831947C8);
PPC_FUNC_IMPL(__imp__sub_831947C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,10380
	ctx.r3.s64 = ctx.r11.s64 + 10380;
	// bl 0x82ca7538
	ctx.lr = 0x831947E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,688(r11)
	PPC_STORE_U32(ctx.r11.u32 + 688, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831947F8"))) PPC_WEAK_FUNC(sub_831947F8);
PPC_FUNC_IMPL(__imp__sub_831947F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28940
	ctx.r3.s64 = ctx.r11.s64 + -28940;
	// bl 0x82ca7538
	ctx.lr = 0x83194810;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,604(r11)
	PPC_STORE_U32(ctx.r11.u32 + 604, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194828"))) PPC_WEAK_FUNC(sub_83194828);
PPC_FUNC_IMPL(__imp__sub_83194828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28924
	ctx.r3.s64 = ctx.r11.s64 + -28924;
	// bl 0x82ca7538
	ctx.lr = 0x83194840;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5300, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194858"))) PPC_WEAK_FUNC(sub_83194858);
PPC_FUNC_IMPL(__imp__sub_83194858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,10364
	ctx.r3.s64 = ctx.r11.s64 + 10364;
	// bl 0x82ca7538
	ctx.lr = 0x83194870;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,584(r11)
	PPC_STORE_U32(ctx.r11.u32 + 584, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194888"))) PPC_WEAK_FUNC(sub_83194888);
PPC_FUNC_IMPL(__imp__sub_83194888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28908
	ctx.r3.s64 = ctx.r11.s64 + -28908;
	// bl 0x82ca7538
	ctx.lr = 0x831948A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,628(r11)
	PPC_STORE_U32(ctx.r11.u32 + 628, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831948B8"))) PPC_WEAK_FUNC(sub_831948B8);
PPC_FUNC_IMPL(__imp__sub_831948B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,10312
	ctx.r3.s64 = ctx.r11.s64 + 10312;
	// bl 0x82ca7538
	ctx.lr = 0x831948D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,960(r11)
	PPC_STORE_U32(ctx.r11.u32 + 960, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831948E8"))) PPC_WEAK_FUNC(sub_831948E8);
PPC_FUNC_IMPL(__imp__sub_831948E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28892
	ctx.r3.s64 = ctx.r11.s64 + -28892;
	// bl 0x82ca7538
	ctx.lr = 0x83194900;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,760(r11)
	PPC_STORE_U32(ctx.r11.u32 + 760, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194918"))) PPC_WEAK_FUNC(sub_83194918);
PPC_FUNC_IMPL(__imp__sub_83194918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28880
	ctx.r3.s64 = ctx.r11.s64 + -28880;
	// bl 0x82ca7538
	ctx.lr = 0x83194930;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,816(r11)
	PPC_STORE_U32(ctx.r11.u32 + 816, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194948"))) PPC_WEAK_FUNC(sub_83194948);
PPC_FUNC_IMPL(__imp__sub_83194948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28868
	ctx.r3.s64 = ctx.r11.s64 + -28868;
	// bl 0x82ca7538
	ctx.lr = 0x83194960;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,756(r11)
	PPC_STORE_U32(ctx.r11.u32 + 756, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194978"))) PPC_WEAK_FUNC(sub_83194978);
PPC_FUNC_IMPL(__imp__sub_83194978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28844
	ctx.r3.s64 = ctx.r11.s64 + -28844;
	// bl 0x82ca7538
	ctx.lr = 0x83194990;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2152, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831949A8"))) PPC_WEAK_FUNC(sub_831949A8);
PPC_FUNC_IMPL(__imp__sub_831949A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28816
	ctx.r3.s64 = ctx.r11.s64 + -28816;
	// bl 0x82ca7538
	ctx.lr = 0x831949C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1896(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1896, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831949D8"))) PPC_WEAK_FUNC(sub_831949D8);
PPC_FUNC_IMPL(__imp__sub_831949D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28792
	ctx.r3.s64 = ctx.r11.s64 + -28792;
	// bl 0x82ca7538
	ctx.lr = 0x831949F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6272, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194A08"))) PPC_WEAK_FUNC(sub_83194A08);
PPC_FUNC_IMPL(__imp__sub_83194A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28768
	ctx.r3.s64 = ctx.r11.s64 + -28768;
	// bl 0x82ca7538
	ctx.lr = 0x83194A20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,720(r11)
	PPC_STORE_U32(ctx.r11.u32 + 720, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194A38"))) PPC_WEAK_FUNC(sub_83194A38);
PPC_FUNC_IMPL(__imp__sub_83194A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,8972
	ctx.r3.s64 = ctx.r11.s64 + 8972;
	// bl 0x82ca7538
	ctx.lr = 0x83194A50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,576(r11)
	PPC_STORE_U32(ctx.r11.u32 + 576, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194A68"))) PPC_WEAK_FUNC(sub_83194A68);
PPC_FUNC_IMPL(__imp__sub_83194A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28752
	ctx.r3.s64 = ctx.r11.s64 + -28752;
	// bl 0x82ca7538
	ctx.lr = 0x83194A80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,664(r11)
	PPC_STORE_U32(ctx.r11.u32 + 664, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194A98"))) PPC_WEAK_FUNC(sub_83194A98);
PPC_FUNC_IMPL(__imp__sub_83194A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x83194AB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1000(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1000, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194AC8"))) PPC_WEAK_FUNC(sub_83194AC8);
PPC_FUNC_IMPL(__imp__sub_83194AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28724
	ctx.r3.s64 = ctx.r11.s64 + -28724;
	// bl 0x82ca7538
	ctx.lr = 0x83194AE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,732(r11)
	PPC_STORE_U32(ctx.r11.u32 + 732, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194AF8"))) PPC_WEAK_FUNC(sub_83194AF8);
PPC_FUNC_IMPL(__imp__sub_83194AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28700
	ctx.r3.s64 = ctx.r11.s64 + -28700;
	// bl 0x82ca7538
	ctx.lr = 0x83194B10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2552(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2552, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194B28"))) PPC_WEAK_FUNC(sub_83194B28);
PPC_FUNC_IMPL(__imp__sub_83194B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28672
	ctx.r3.s64 = ctx.r11.s64 + -28672;
	// bl 0x82ca7538
	ctx.lr = 0x83194B40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,564(r11)
	PPC_STORE_U32(ctx.r11.u32 + 564, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194B58"))) PPC_WEAK_FUNC(sub_83194B58);
PPC_FUNC_IMPL(__imp__sub_83194B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28644
	ctx.r3.s64 = ctx.r11.s64 + -28644;
	// bl 0x82ca7538
	ctx.lr = 0x83194B70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,616(r11)
	PPC_STORE_U32(ctx.r11.u32 + 616, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194B88"))) PPC_WEAK_FUNC(sub_83194B88);
PPC_FUNC_IMPL(__imp__sub_83194B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28616
	ctx.r3.s64 = ctx.r11.s64 + -28616;
	// bl 0x82ca7538
	ctx.lr = 0x83194BA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,780(r11)
	PPC_STORE_U32(ctx.r11.u32 + 780, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194BB8"))) PPC_WEAK_FUNC(sub_83194BB8);
PPC_FUNC_IMPL(__imp__sub_83194BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28584
	ctx.r3.s64 = ctx.r11.s64 + -28584;
	// bl 0x82ca7538
	ctx.lr = 0x83194BD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,808(r11)
	PPC_STORE_U32(ctx.r11.u32 + 808, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194BE8"))) PPC_WEAK_FUNC(sub_83194BE8);
PPC_FUNC_IMPL(__imp__sub_83194BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28548
	ctx.r3.s64 = ctx.r11.s64 + -28548;
	// bl 0x82ca7538
	ctx.lr = 0x83194C00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,556(r11)
	PPC_STORE_U32(ctx.r11.u32 + 556, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194C18"))) PPC_WEAK_FUNC(sub_83194C18);
PPC_FUNC_IMPL(__imp__sub_83194C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28524
	ctx.r3.s64 = ctx.r11.s64 + -28524;
	// bl 0x82ca7538
	ctx.lr = 0x83194C30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,828(r11)
	PPC_STORE_U32(ctx.r11.u32 + 828, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194C48"))) PPC_WEAK_FUNC(sub_83194C48);
PPC_FUNC_IMPL(__imp__sub_83194C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28504
	ctx.r3.s64 = ctx.r11.s64 + -28504;
	// bl 0x82ca7538
	ctx.lr = 0x83194C60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6292, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194C78"))) PPC_WEAK_FUNC(sub_83194C78);
PPC_FUNC_IMPL(__imp__sub_83194C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28480
	ctx.r3.s64 = ctx.r11.s64 + -28480;
	// bl 0x82ca7538
	ctx.lr = 0x83194C90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 752, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194CA8"))) PPC_WEAK_FUNC(sub_83194CA8);
PPC_FUNC_IMPL(__imp__sub_83194CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28456
	ctx.r3.s64 = ctx.r11.s64 + -28456;
	// bl 0x82ca7538
	ctx.lr = 0x83194CC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 600, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194CD8"))) PPC_WEAK_FUNC(sub_83194CD8);
PPC_FUNC_IMPL(__imp__sub_83194CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28424
	ctx.r3.s64 = ctx.r11.s64 + -28424;
	// bl 0x82ca7538
	ctx.lr = 0x83194CF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 568, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194D08"))) PPC_WEAK_FUNC(sub_83194D08);
PPC_FUNC_IMPL(__imp__sub_83194D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28396
	ctx.r3.s64 = ctx.r11.s64 + -28396;
	// bl 0x82ca7538
	ctx.lr = 0x83194D20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6276, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194D38"))) PPC_WEAK_FUNC(sub_83194D38);
PPC_FUNC_IMPL(__imp__sub_83194D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28368
	ctx.r3.s64 = ctx.r11.s64 + -28368;
	// bl 0x82ca7538
	ctx.lr = 0x83194D50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,712(r11)
	PPC_STORE_U32(ctx.r11.u32 + 712, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194D68"))) PPC_WEAK_FUNC(sub_83194D68);
PPC_FUNC_IMPL(__imp__sub_83194D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28344
	ctx.r3.s64 = ctx.r11.s64 + -28344;
	// bl 0x82ca7538
	ctx.lr = 0x83194D80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,740(r11)
	PPC_STORE_U32(ctx.r11.u32 + 740, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194D98"))) PPC_WEAK_FUNC(sub_83194D98);
PPC_FUNC_IMPL(__imp__sub_83194D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28320
	ctx.r3.s64 = ctx.r11.s64 + -28320;
	// bl 0x82ca7538
	ctx.lr = 0x83194DB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,620(r11)
	PPC_STORE_U32(ctx.r11.u32 + 620, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194DC8"))) PPC_WEAK_FUNC(sub_83194DC8);
PPC_FUNC_IMPL(__imp__sub_83194DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28296
	ctx.r3.s64 = ctx.r11.s64 + -28296;
	// bl 0x82ca7538
	ctx.lr = 0x83194DE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,652(r11)
	PPC_STORE_U32(ctx.r11.u32 + 652, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194DF8"))) PPC_WEAK_FUNC(sub_83194DF8);
PPC_FUNC_IMPL(__imp__sub_83194DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28272
	ctx.r3.s64 = ctx.r11.s64 + -28272;
	// bl 0x82ca7538
	ctx.lr = 0x83194E10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,624(r11)
	PPC_STORE_U32(ctx.r11.u32 + 624, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194E28"))) PPC_WEAK_FUNC(sub_83194E28);
PPC_FUNC_IMPL(__imp__sub_83194E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28248
	ctx.r3.s64 = ctx.r11.s64 + -28248;
	// bl 0x82ca7538
	ctx.lr = 0x83194E40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,704(r11)
	PPC_STORE_U32(ctx.r11.u32 + 704, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194E58"))) PPC_WEAK_FUNC(sub_83194E58);
PPC_FUNC_IMPL(__imp__sub_83194E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28224
	ctx.r3.s64 = ctx.r11.s64 + -28224;
	// bl 0x82ca7538
	ctx.lr = 0x83194E70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5980(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5980, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194E88"))) PPC_WEAK_FUNC(sub_83194E88);
PPC_FUNC_IMPL(__imp__sub_83194E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28200
	ctx.r3.s64 = ctx.r11.s64 + -28200;
	// bl 0x82ca7538
	ctx.lr = 0x83194EA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,588(r11)
	PPC_STORE_U32(ctx.r11.u32 + 588, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194EB8"))) PPC_WEAK_FUNC(sub_83194EB8);
PPC_FUNC_IMPL(__imp__sub_83194EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28176
	ctx.r3.s64 = ctx.r11.s64 + -28176;
	// bl 0x82ca7538
	ctx.lr = 0x83194ED0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,804(r11)
	PPC_STORE_U32(ctx.r11.u32 + 804, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194EE8"))) PPC_WEAK_FUNC(sub_83194EE8);
PPC_FUNC_IMPL(__imp__sub_83194EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28160
	ctx.r3.s64 = ctx.r11.s64 + -28160;
	// bl 0x82ca7538
	ctx.lr = 0x83194F00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,728(r11)
	PPC_STORE_U32(ctx.r11.u32 + 728, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194F18"))) PPC_WEAK_FUNC(sub_83194F18);
PPC_FUNC_IMPL(__imp__sub_83194F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32024
	ctx.r3.s64 = ctx.r11.s64 + 32024;
	// bl 0x82ca7538
	ctx.lr = 0x83194F30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2440(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2440, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194F48"))) PPC_WEAK_FUNC(sub_83194F48);
PPC_FUNC_IMPL(__imp__sub_83194F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x83194F60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4860(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4860, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194F78"))) PPC_WEAK_FUNC(sub_83194F78);
PPC_FUNC_IMPL(__imp__sub_83194F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28128
	ctx.r3.s64 = ctx.r11.s64 + -28128;
	// bl 0x82ca7538
	ctx.lr = 0x83194F90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4864(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4864, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194FA8"))) PPC_WEAK_FUNC(sub_83194FA8);
PPC_FUNC_IMPL(__imp__sub_83194FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28116
	ctx.r3.s64 = ctx.r11.s64 + -28116;
	// bl 0x82ca7538
	ctx.lr = 0x83194FC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6296, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194FD8"))) PPC_WEAK_FUNC(sub_83194FD8);
PPC_FUNC_IMPL(__imp__sub_83194FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28088
	ctx.r3.s64 = ctx.r11.s64 + -28088;
	// bl 0x82ca7538
	ctx.lr = 0x83194FF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3952(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3952, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195008"))) PPC_WEAK_FUNC(sub_83195008);
PPC_FUNC_IMPL(__imp__sub_83195008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28056
	ctx.r3.s64 = ctx.r11.s64 + -28056;
	// bl 0x82ca7538
	ctx.lr = 0x83195020;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2880(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2880, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195038"))) PPC_WEAK_FUNC(sub_83195038);
PPC_FUNC_IMPL(__imp__sub_83195038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28032
	ctx.r3.s64 = ctx.r11.s64 + -28032;
	// bl 0x82ca7538
	ctx.lr = 0x83195050;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6104(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6104, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195068"))) PPC_WEAK_FUNC(sub_83195068);
PPC_FUNC_IMPL(__imp__sub_83195068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-28008
	ctx.r3.s64 = ctx.r11.s64 + -28008;
	// bl 0x82ca7538
	ctx.lr = 0x83195080;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4752, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195098"))) PPC_WEAK_FUNC(sub_83195098);
PPC_FUNC_IMPL(__imp__sub_83195098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27980
	ctx.r3.s64 = ctx.r11.s64 + -27980;
	// bl 0x82ca7538
	ctx.lr = 0x831950B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-172(r11)
	PPC_STORE_U32(ctx.r11.u32 + -172, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831950C8"))) PPC_WEAK_FUNC(sub_831950C8);
PPC_FUNC_IMPL(__imp__sub_831950C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27948
	ctx.r3.s64 = ctx.r11.s64 + -27948;
	// bl 0x82ca7538
	ctx.lr = 0x831950E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4808(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4808, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831950F8"))) PPC_WEAK_FUNC(sub_831950F8);
PPC_FUNC_IMPL(__imp__sub_831950F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27928
	ctx.r3.s64 = ctx.r11.s64 + -27928;
	// bl 0x82ca7538
	ctx.lr = 0x83195110;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2952(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2952, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195128"))) PPC_WEAK_FUNC(sub_83195128);
PPC_FUNC_IMPL(__imp__sub_83195128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27904
	ctx.r3.s64 = ctx.r11.s64 + -27904;
	// bl 0x82ca7538
	ctx.lr = 0x83195140;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2396(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2396, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195158"))) PPC_WEAK_FUNC(sub_83195158);
PPC_FUNC_IMPL(__imp__sub_83195158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27876
	ctx.r3.s64 = ctx.r11.s64 + -27876;
	// bl 0x82ca7538
	ctx.lr = 0x83195170;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1456(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1456, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195188"))) PPC_WEAK_FUNC(sub_83195188);
PPC_FUNC_IMPL(__imp__sub_83195188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27852
	ctx.r3.s64 = ctx.r11.s64 + -27852;
	// bl 0x82ca7538
	ctx.lr = 0x831951A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2452(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2452, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831951B8"))) PPC_WEAK_FUNC(sub_831951B8);
PPC_FUNC_IMPL(__imp__sub_831951B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27832
	ctx.r3.s64 = ctx.r11.s64 + -27832;
	// bl 0x82ca7538
	ctx.lr = 0x831951D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2116(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2116, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831951E8"))) PPC_WEAK_FUNC(sub_831951E8);
PPC_FUNC_IMPL(__imp__sub_831951E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27808
	ctx.r3.s64 = ctx.r11.s64 + -27808;
	// bl 0x82ca7538
	ctx.lr = 0x83195200;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6108(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6108, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195218"))) PPC_WEAK_FUNC(sub_83195218);
PPC_FUNC_IMPL(__imp__sub_83195218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27788
	ctx.r3.s64 = ctx.r11.s64 + -27788;
	// bl 0x82ca7538
	ctx.lr = 0x83195230;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3936(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3936, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195248"))) PPC_WEAK_FUNC(sub_83195248);
PPC_FUNC_IMPL(__imp__sub_83195248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27768
	ctx.r3.s64 = ctx.r11.s64 + -27768;
	// bl 0x82ca7538
	ctx.lr = 0x83195260;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5096(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5096, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195278"))) PPC_WEAK_FUNC(sub_83195278);
PPC_FUNC_IMPL(__imp__sub_83195278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27748
	ctx.r3.s64 = ctx.r11.s64 + -27748;
	// bl 0x82ca7538
	ctx.lr = 0x83195290;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6100(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6100, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831952A8"))) PPC_WEAK_FUNC(sub_831952A8);
PPC_FUNC_IMPL(__imp__sub_831952A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27732
	ctx.r3.s64 = ctx.r11.s64 + -27732;
	// bl 0x82ca7538
	ctx.lr = 0x831952C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4696(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4696, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831952D8"))) PPC_WEAK_FUNC(sub_831952D8);
PPC_FUNC_IMPL(__imp__sub_831952D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,16608
	ctx.r3.s64 = ctx.r11.s64 + 16608;
	// bl 0x82ca7538
	ctx.lr = 0x831952F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6572(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6572, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195308"))) PPC_WEAK_FUNC(sub_83195308);
PPC_FUNC_IMPL(__imp__sub_83195308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27712
	ctx.r3.s64 = ctx.r11.s64 + -27712;
	// bl 0x82ca7538
	ctx.lr = 0x83195320;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5744(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5744, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195338"))) PPC_WEAK_FUNC(sub_83195338);
PPC_FUNC_IMPL(__imp__sub_83195338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27688
	ctx.r3.s64 = ctx.r11.s64 + -27688;
	// bl 0x82ca7538
	ctx.lr = 0x83195350;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1424(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1424, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195368"))) PPC_WEAK_FUNC(sub_83195368);
PPC_FUNC_IMPL(__imp__sub_83195368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27676
	ctx.r3.s64 = ctx.r11.s64 + -27676;
	// bl 0x82ca7538
	ctx.lr = 0x83195380;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7020(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7020, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195398"))) PPC_WEAK_FUNC(sub_83195398);
PPC_FUNC_IMPL(__imp__sub_83195398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27664
	ctx.r3.s64 = ctx.r11.s64 + -27664;
	// bl 0x82ca7538
	ctx.lr = 0x831953B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2264(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2264, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831953C8"))) PPC_WEAK_FUNC(sub_831953C8);
PPC_FUNC_IMPL(__imp__sub_831953C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27644
	ctx.r3.s64 = ctx.r11.s64 + -27644;
	// bl 0x82ca7538
	ctx.lr = 0x831953E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4036(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4036, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831953F8"))) PPC_WEAK_FUNC(sub_831953F8);
PPC_FUNC_IMPL(__imp__sub_831953F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27632
	ctx.r3.s64 = ctx.r11.s64 + -27632;
	// bl 0x82ca7538
	ctx.lr = 0x83195410;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4400(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4400, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195428"))) PPC_WEAK_FUNC(sub_83195428);
PPC_FUNC_IMPL(__imp__sub_83195428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27620
	ctx.r3.s64 = ctx.r11.s64 + -27620;
	// bl 0x82ca7538
	ctx.lr = 0x83195440;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7060(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7060, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195458"))) PPC_WEAK_FUNC(sub_83195458);
PPC_FUNC_IMPL(__imp__sub_83195458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27608
	ctx.r3.s64 = ctx.r11.s64 + -27608;
	// bl 0x82ca7538
	ctx.lr = 0x83195470;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2344, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195488"))) PPC_WEAK_FUNC(sub_83195488);
PPC_FUNC_IMPL(__imp__sub_83195488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27584
	ctx.r3.s64 = ctx.r11.s64 + -27584;
	// bl 0x82ca7538
	ctx.lr = 0x831954A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2688(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2688, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831954B8"))) PPC_WEAK_FUNC(sub_831954B8);
PPC_FUNC_IMPL(__imp__sub_831954B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27560
	ctx.r3.s64 = ctx.r11.s64 + -27560;
	// bl 0x82ca7538
	ctx.lr = 0x831954D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6248, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831954E8"))) PPC_WEAK_FUNC(sub_831954E8);
PPC_FUNC_IMPL(__imp__sub_831954E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27536
	ctx.r3.s64 = ctx.r11.s64 + -27536;
	// bl 0x82ca7538
	ctx.lr = 0x83195500;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2112, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195518"))) PPC_WEAK_FUNC(sub_83195518);
PPC_FUNC_IMPL(__imp__sub_83195518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27512
	ctx.r3.s64 = ctx.r11.s64 + -27512;
	// bl 0x82ca7538
	ctx.lr = 0x83195530;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5400, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195548"))) PPC_WEAK_FUNC(sub_83195548);
PPC_FUNC_IMPL(__imp__sub_83195548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27488
	ctx.r3.s64 = ctx.r11.s64 + -27488;
	// bl 0x82ca7538
	ctx.lr = 0x83195560;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7096(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7096, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195578"))) PPC_WEAK_FUNC(sub_83195578);
PPC_FUNC_IMPL(__imp__sub_83195578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27464
	ctx.r3.s64 = ctx.r11.s64 + -27464;
	// bl 0x82ca7538
	ctx.lr = 0x83195590;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6904(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6904, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831955A8"))) PPC_WEAK_FUNC(sub_831955A8);
PPC_FUNC_IMPL(__imp__sub_831955A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27440
	ctx.r3.s64 = ctx.r11.s64 + -27440;
	// bl 0x82ca7538
	ctx.lr = 0x831955C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6592(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6592, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831955D8"))) PPC_WEAK_FUNC(sub_831955D8);
PPC_FUNC_IMPL(__imp__sub_831955D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27416
	ctx.r3.s64 = ctx.r11.s64 + -27416;
	// bl 0x82ca7538
	ctx.lr = 0x831955F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5532(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5532, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195608"))) PPC_WEAK_FUNC(sub_83195608);
PPC_FUNC_IMPL(__imp__sub_83195608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x82ca7538
	ctx.lr = 0x83195620;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3636(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3636, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195638"))) PPC_WEAK_FUNC(sub_83195638);
PPC_FUNC_IMPL(__imp__sub_83195638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27368
	ctx.r3.s64 = ctx.r11.s64 + -27368;
	// bl 0x82ca7538
	ctx.lr = 0x83195650;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5704(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5704, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195668"))) PPC_WEAK_FUNC(sub_83195668);
PPC_FUNC_IMPL(__imp__sub_83195668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27344
	ctx.r3.s64 = ctx.r11.s64 + -27344;
	// bl 0x82ca7538
	ctx.lr = 0x83195680;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5024, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195698"))) PPC_WEAK_FUNC(sub_83195698);
PPC_FUNC_IMPL(__imp__sub_83195698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27320
	ctx.r3.s64 = ctx.r11.s64 + -27320;
	// bl 0x82ca7538
	ctx.lr = 0x831956B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4868(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4868, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831956C8"))) PPC_WEAK_FUNC(sub_831956C8);
PPC_FUNC_IMPL(__imp__sub_831956C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27284
	ctx.r3.s64 = ctx.r11.s64 + -27284;
	// bl 0x82ca7538
	ctx.lr = 0x831956E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-624(r11)
	PPC_STORE_U32(ctx.r11.u32 + -624, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831956F8"))) PPC_WEAK_FUNC(sub_831956F8);
PPC_FUNC_IMPL(__imp__sub_831956F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27252
	ctx.r3.s64 = ctx.r11.s64 + -27252;
	// bl 0x82ca7538
	ctx.lr = 0x83195710;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4792(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4792, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195728"))) PPC_WEAK_FUNC(sub_83195728);
PPC_FUNC_IMPL(__imp__sub_83195728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27224
	ctx.r3.s64 = ctx.r11.s64 + -27224;
	// bl 0x82ca7538
	ctx.lr = 0x83195740;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6652(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6652, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195758"))) PPC_WEAK_FUNC(sub_83195758);
PPC_FUNC_IMPL(__imp__sub_83195758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27212
	ctx.r3.s64 = ctx.r11.s64 + -27212;
	// bl 0x82ca7538
	ctx.lr = 0x83195770;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7032(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7032, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195788"))) PPC_WEAK_FUNC(sub_83195788);
PPC_FUNC_IMPL(__imp__sub_83195788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27204
	ctx.r3.s64 = ctx.r11.s64 + -27204;
	// bl 0x82ca7538
	ctx.lr = 0x831957A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1100(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1100, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831957B8"))) PPC_WEAK_FUNC(sub_831957B8);
PPC_FUNC_IMPL(__imp__sub_831957B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27192
	ctx.r3.s64 = ctx.r11.s64 + -27192;
	// bl 0x82ca7538
	ctx.lr = 0x831957D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6628(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6628, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831957E8"))) PPC_WEAK_FUNC(sub_831957E8);
PPC_FUNC_IMPL(__imp__sub_831957E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27180
	ctx.r3.s64 = ctx.r11.s64 + -27180;
	// bl 0x82ca7538
	ctx.lr = 0x83195800;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1744(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1744, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195818"))) PPC_WEAK_FUNC(sub_83195818);
PPC_FUNC_IMPL(__imp__sub_83195818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27168
	ctx.r3.s64 = ctx.r11.s64 + -27168;
	// bl 0x82ca7538
	ctx.lr = 0x83195830;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1120(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1120, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195848"))) PPC_WEAK_FUNC(sub_83195848);
PPC_FUNC_IMPL(__imp__sub_83195848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27156
	ctx.r3.s64 = ctx.r11.s64 + -27156;
	// bl 0x82ca7538
	ctx.lr = 0x83195860;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1472(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1472, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195878"))) PPC_WEAK_FUNC(sub_83195878);
PPC_FUNC_IMPL(__imp__sub_83195878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27144
	ctx.r3.s64 = ctx.r11.s64 + -27144;
	// bl 0x82ca7538
	ctx.lr = 0x83195890;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4496(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4496, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831958A8"))) PPC_WEAK_FUNC(sub_831958A8);
PPC_FUNC_IMPL(__imp__sub_831958A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27120
	ctx.r3.s64 = ctx.r11.s64 + -27120;
	// bl 0x82ca7538
	ctx.lr = 0x831958C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4720(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4720, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831958D8"))) PPC_WEAK_FUNC(sub_831958D8);
PPC_FUNC_IMPL(__imp__sub_831958D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,6924
	ctx.r3.s64 = ctx.r11.s64 + 6924;
	// bl 0x82ca7538
	ctx.lr = 0x831958F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-984(r11)
	PPC_STORE_U32(ctx.r11.u32 + -984, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195908"))) PPC_WEAK_FUNC(sub_83195908);
PPC_FUNC_IMPL(__imp__sub_83195908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27096
	ctx.r3.s64 = ctx.r11.s64 + -27096;
	// bl 0x82ca7538
	ctx.lr = 0x83195920;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6988(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6988, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195938"))) PPC_WEAK_FUNC(sub_83195938);
PPC_FUNC_IMPL(__imp__sub_83195938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27080
	ctx.r3.s64 = ctx.r11.s64 + -27080;
	// bl 0x82ca7538
	ctx.lr = 0x83195950;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5620(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5620, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195968"))) PPC_WEAK_FUNC(sub_83195968);
PPC_FUNC_IMPL(__imp__sub_83195968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27060
	ctx.r3.s64 = ctx.r11.s64 + -27060;
	// bl 0x82ca7538
	ctx.lr = 0x83195980;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6948(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6948, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195998"))) PPC_WEAK_FUNC(sub_83195998);
PPC_FUNC_IMPL(__imp__sub_83195998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27040
	ctx.r3.s64 = ctx.r11.s64 + -27040;
	// bl 0x82ca7538
	ctx.lr = 0x831959B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2548, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831959C8"))) PPC_WEAK_FUNC(sub_831959C8);
PPC_FUNC_IMPL(__imp__sub_831959C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27016
	ctx.r3.s64 = ctx.r11.s64 + -27016;
	// bl 0x82ca7538
	ctx.lr = 0x831959E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5944(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5944, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831959F8"))) PPC_WEAK_FUNC(sub_831959F8);
PPC_FUNC_IMPL(__imp__sub_831959F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-27000
	ctx.r3.s64 = ctx.r11.s64 + -27000;
	// bl 0x82ca7538
	ctx.lr = 0x83195A10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6460(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6460, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195A28"))) PPC_WEAK_FUNC(sub_83195A28);
PPC_FUNC_IMPL(__imp__sub_83195A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26984
	ctx.r3.s64 = ctx.r11.s64 + -26984;
	// bl 0x82ca7538
	ctx.lr = 0x83195A40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4788(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4788, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195A58"))) PPC_WEAK_FUNC(sub_83195A58);
PPC_FUNC_IMPL(__imp__sub_83195A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26964
	ctx.r3.s64 = ctx.r11.s64 + -26964;
	// bl 0x82ca7538
	ctx.lr = 0x83195A70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1252, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195A88"))) PPC_WEAK_FUNC(sub_83195A88);
PPC_FUNC_IMPL(__imp__sub_83195A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26948
	ctx.r3.s64 = ctx.r11.s64 + -26948;
	// bl 0x82ca7538
	ctx.lr = 0x83195AA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5868(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5868, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195AB8"))) PPC_WEAK_FUNC(sub_83195AB8);
PPC_FUNC_IMPL(__imp__sub_83195AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26932
	ctx.r3.s64 = ctx.r11.s64 + -26932;
	// bl 0x82ca7538
	ctx.lr = 0x83195AD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4276(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4276, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195AE8"))) PPC_WEAK_FUNC(sub_83195AE8);
PPC_FUNC_IMPL(__imp__sub_83195AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26916
	ctx.r3.s64 = ctx.r11.s64 + -26916;
	// bl 0x82ca7538
	ctx.lr = 0x83195B00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3468(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3468, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195B18"))) PPC_WEAK_FUNC(sub_83195B18);
PPC_FUNC_IMPL(__imp__sub_83195B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26900
	ctx.r3.s64 = ctx.r11.s64 + -26900;
	// bl 0x82ca7538
	ctx.lr = 0x83195B30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7008(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7008, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195B48"))) PPC_WEAK_FUNC(sub_83195B48);
PPC_FUNC_IMPL(__imp__sub_83195B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26880
	ctx.r3.s64 = ctx.r11.s64 + -26880;
	// bl 0x82ca7538
	ctx.lr = 0x83195B60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1256, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195B78"))) PPC_WEAK_FUNC(sub_83195B78);
PPC_FUNC_IMPL(__imp__sub_83195B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26864
	ctx.r3.s64 = ctx.r11.s64 + -26864;
	// bl 0x82ca7538
	ctx.lr = 0x83195B90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4736(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4736, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195BA8"))) PPC_WEAK_FUNC(sub_83195BA8);
PPC_FUNC_IMPL(__imp__sub_83195BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26844
	ctx.r3.s64 = ctx.r11.s64 + -26844;
	// bl 0x82ca7538
	ctx.lr = 0x83195BC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4880(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4880, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195BD8"))) PPC_WEAK_FUNC(sub_83195BD8);
PPC_FUNC_IMPL(__imp__sub_83195BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26816
	ctx.r3.s64 = ctx.r11.s64 + -26816;
	// bl 0x82ca7538
	ctx.lr = 0x83195BF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-600(r11)
	PPC_STORE_U32(ctx.r11.u32 + -600, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195C08"))) PPC_WEAK_FUNC(sub_83195C08);
PPC_FUNC_IMPL(__imp__sub_83195C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26796
	ctx.r3.s64 = ctx.r11.s64 + -26796;
	// bl 0x82ca7538
	ctx.lr = 0x83195C20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5696(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5696, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195C38"))) PPC_WEAK_FUNC(sub_83195C38);
PPC_FUNC_IMPL(__imp__sub_83195C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26780
	ctx.r3.s64 = ctx.r11.s64 + -26780;
	// bl 0x82ca7538
	ctx.lr = 0x83195C50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3692(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3692, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195C68"))) PPC_WEAK_FUNC(sub_83195C68);
PPC_FUNC_IMPL(__imp__sub_83195C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26764
	ctx.r3.s64 = ctx.r11.s64 + -26764;
	// bl 0x82ca7538
	ctx.lr = 0x83195C80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5564(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5564, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195C98"))) PPC_WEAK_FUNC(sub_83195C98);
PPC_FUNC_IMPL(__imp__sub_83195C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26744
	ctx.r3.s64 = ctx.r11.s64 + -26744;
	// bl 0x82ca7538
	ctx.lr = 0x83195CB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5536(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5536, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195CC8"))) PPC_WEAK_FUNC(sub_83195CC8);
PPC_FUNC_IMPL(__imp__sub_83195CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26724
	ctx.r3.s64 = ctx.r11.s64 + -26724;
	// bl 0x82ca7538
	ctx.lr = 0x83195CE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-48(r11)
	PPC_STORE_U32(ctx.r11.u32 + -48, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195CF8"))) PPC_WEAK_FUNC(sub_83195CF8);
PPC_FUNC_IMPL(__imp__sub_83195CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26704
	ctx.r3.s64 = ctx.r11.s64 + -26704;
	// bl 0x82ca7538
	ctx.lr = 0x83195D10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5956(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5956, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195D28"))) PPC_WEAK_FUNC(sub_83195D28);
PPC_FUNC_IMPL(__imp__sub_83195D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26692
	ctx.r3.s64 = ctx.r11.s64 + -26692;
	// bl 0x82ca7538
	ctx.lr = 0x83195D40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-880(r11)
	PPC_STORE_U32(ctx.r11.u32 + -880, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195D58"))) PPC_WEAK_FUNC(sub_83195D58);
PPC_FUNC_IMPL(__imp__sub_83195D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26672
	ctx.r3.s64 = ctx.r11.s64 + -26672;
	// bl 0x82ca7538
	ctx.lr = 0x83195D70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5904(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5904, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195D88"))) PPC_WEAK_FUNC(sub_83195D88);
PPC_FUNC_IMPL(__imp__sub_83195D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26648
	ctx.r3.s64 = ctx.r11.s64 + -26648;
	// bl 0x82ca7538
	ctx.lr = 0x83195DA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4468(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4468, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195DB8"))) PPC_WEAK_FUNC(sub_83195DB8);
PPC_FUNC_IMPL(__imp__sub_83195DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26620
	ctx.r3.s64 = ctx.r11.s64 + -26620;
	// bl 0x82ca7538
	ctx.lr = 0x83195DD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1996(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1996, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195DE8"))) PPC_WEAK_FUNC(sub_83195DE8);
PPC_FUNC_IMPL(__imp__sub_83195DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26596
	ctx.r3.s64 = ctx.r11.s64 + -26596;
	// bl 0x82ca7538
	ctx.lr = 0x83195E00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-912(r11)
	PPC_STORE_U32(ctx.r11.u32 + -912, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195E18"))) PPC_WEAK_FUNC(sub_83195E18);
PPC_FUNC_IMPL(__imp__sub_83195E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26560
	ctx.r3.s64 = ctx.r11.s64 + -26560;
	// bl 0x82ca7538
	ctx.lr = 0x83195E30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4916(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4916, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195E48"))) PPC_WEAK_FUNC(sub_83195E48);
PPC_FUNC_IMPL(__imp__sub_83195E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26532
	ctx.r3.s64 = ctx.r11.s64 + -26532;
	// bl 0x82ca7538
	ctx.lr = 0x83195E60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6892(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6892, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195E78"))) PPC_WEAK_FUNC(sub_83195E78);
PPC_FUNC_IMPL(__imp__sub_83195E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,6584
	ctx.r3.s64 = ctx.r11.s64 + 6584;
	// bl 0x82ca7538
	ctx.lr = 0x83195E90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7036(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7036, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195EA8"))) PPC_WEAK_FUNC(sub_83195EA8);
PPC_FUNC_IMPL(__imp__sub_83195EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26492
	ctx.r3.s64 = ctx.r11.s64 + -26492;
	// bl 0x82ca7538
	ctx.lr = 0x83195EC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6184, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195ED8"))) PPC_WEAK_FUNC(sub_83195ED8);
PPC_FUNC_IMPL(__imp__sub_83195ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26464
	ctx.r3.s64 = ctx.r11.s64 + -26464;
	// bl 0x82ca7538
	ctx.lr = 0x83195EF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7016(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7016, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195F08"))) PPC_WEAK_FUNC(sub_83195F08);
PPC_FUNC_IMPL(__imp__sub_83195F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26432
	ctx.r3.s64 = ctx.r11.s64 + -26432;
	// bl 0x82ca7538
	ctx.lr = 0x83195F20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7088(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7088, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195F38"))) PPC_WEAK_FUNC(sub_83195F38);
PPC_FUNC_IMPL(__imp__sub_83195F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26392
	ctx.r3.s64 = ctx.r11.s64 + -26392;
	// bl 0x82ca7538
	ctx.lr = 0x83195F50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2320, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195F68"))) PPC_WEAK_FUNC(sub_83195F68);
PPC_FUNC_IMPL(__imp__sub_83195F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26352
	ctx.r3.s64 = ctx.r11.s64 + -26352;
	// bl 0x82ca7538
	ctx.lr = 0x83195F80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5936(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5936, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195F98"))) PPC_WEAK_FUNC(sub_83195F98);
PPC_FUNC_IMPL(__imp__sub_83195F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26332
	ctx.r3.s64 = ctx.r11.s64 + -26332;
	// bl 0x82ca7538
	ctx.lr = 0x83195FB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5092(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5092, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195FC8"))) PPC_WEAK_FUNC(sub_83195FC8);
PPC_FUNC_IMPL(__imp__sub_83195FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26316
	ctx.r3.s64 = ctx.r11.s64 + -26316;
	// bl 0x82ca7538
	ctx.lr = 0x83195FE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6748(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6748, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195FF8"))) PPC_WEAK_FUNC(sub_83195FF8);
PPC_FUNC_IMPL(__imp__sub_83195FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,8460
	ctx.r3.s64 = ctx.r11.s64 + 8460;
	// bl 0x82ca7538
	ctx.lr = 0x83196010;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1120, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196028"))) PPC_WEAK_FUNC(sub_83196028);
PPC_FUNC_IMPL(__imp__sub_83196028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,8476
	ctx.r3.s64 = ctx.r11.s64 + 8476;
	// bl 0x82ca7538
	ctx.lr = 0x83196040;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3964(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3964, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196058"))) PPC_WEAK_FUNC(sub_83196058);
PPC_FUNC_IMPL(__imp__sub_83196058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26296
	ctx.r3.s64 = ctx.r11.s64 + -26296;
	// bl 0x82ca7538
	ctx.lr = 0x83196070;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2096(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2096, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196088"))) PPC_WEAK_FUNC(sub_83196088);
PPC_FUNC_IMPL(__imp__sub_83196088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26276
	ctx.r3.s64 = ctx.r11.s64 + -26276;
	// bl 0x82ca7538
	ctx.lr = 0x831960A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6012(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6012, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831960B8"))) PPC_WEAK_FUNC(sub_831960B8);
PPC_FUNC_IMPL(__imp__sub_831960B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26256
	ctx.r3.s64 = ctx.r11.s64 + -26256;
	// bl 0x82ca7538
	ctx.lr = 0x831960D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2636(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2636, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831960E8"))) PPC_WEAK_FUNC(sub_831960E8);
PPC_FUNC_IMPL(__imp__sub_831960E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26236
	ctx.r3.s64 = ctx.r11.s64 + -26236;
	// bl 0x82ca7538
	ctx.lr = 0x83196100;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-104(r11)
	PPC_STORE_U32(ctx.r11.u32 + -104, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196118"))) PPC_WEAK_FUNC(sub_83196118);
PPC_FUNC_IMPL(__imp__sub_83196118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26216
	ctx.r3.s64 = ctx.r11.s64 + -26216;
	// bl 0x82ca7538
	ctx.lr = 0x83196130;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1216(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1216, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196148"))) PPC_WEAK_FUNC(sub_83196148);
PPC_FUNC_IMPL(__imp__sub_83196148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26192
	ctx.r3.s64 = ctx.r11.s64 + -26192;
	// bl 0x82ca7538
	ctx.lr = 0x83196160;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7012(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7012, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196178"))) PPC_WEAK_FUNC(sub_83196178);
PPC_FUNC_IMPL(__imp__sub_83196178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26172
	ctx.r3.s64 = ctx.r11.s64 + -26172;
	// bl 0x82ca7538
	ctx.lr = 0x83196190;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4412(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4412, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831961A8"))) PPC_WEAK_FUNC(sub_831961A8);
PPC_FUNC_IMPL(__imp__sub_831961A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,9540
	ctx.r3.s64 = ctx.r11.s64 + 9540;
	// bl 0x82ca7538
	ctx.lr = 0x831961C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5540(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5540, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831961D8"))) PPC_WEAK_FUNC(sub_831961D8);
PPC_FUNC_IMPL(__imp__sub_831961D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26148
	ctx.r3.s64 = ctx.r11.s64 + -26148;
	// bl 0x82ca7538
	ctx.lr = 0x831961F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7040(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7040, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196208"))) PPC_WEAK_FUNC(sub_83196208);
PPC_FUNC_IMPL(__imp__sub_83196208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26132
	ctx.r3.s64 = ctx.r11.s64 + -26132;
	// bl 0x82ca7538
	ctx.lr = 0x83196220;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5004(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5004, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196238"))) PPC_WEAK_FUNC(sub_83196238);
PPC_FUNC_IMPL(__imp__sub_83196238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26112
	ctx.r3.s64 = ctx.r11.s64 + -26112;
	// bl 0x82ca7538
	ctx.lr = 0x83196250;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2256, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196268"))) PPC_WEAK_FUNC(sub_83196268);
PPC_FUNC_IMPL(__imp__sub_83196268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26080
	ctx.r3.s64 = ctx.r11.s64 + -26080;
	// bl 0x82ca7538
	ctx.lr = 0x83196280;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2388(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2388, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196298"))) PPC_WEAK_FUNC(sub_83196298);
PPC_FUNC_IMPL(__imp__sub_83196298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26048
	ctx.r3.s64 = ctx.r11.s64 + -26048;
	// bl 0x82ca7538
	ctx.lr = 0x831962B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3488(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3488, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831962C8"))) PPC_WEAK_FUNC(sub_831962C8);
PPC_FUNC_IMPL(__imp__sub_831962C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26016
	ctx.r3.s64 = ctx.r11.s64 + -26016;
	// bl 0x82ca7538
	ctx.lr = 0x831962E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6672(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6672, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831962F8"))) PPC_WEAK_FUNC(sub_831962F8);
PPC_FUNC_IMPL(__imp__sub_831962F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-26000
	ctx.r3.s64 = ctx.r11.s64 + -26000;
	// bl 0x82ca7538
	ctx.lr = 0x83196310;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1032(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1032, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196328"))) PPC_WEAK_FUNC(sub_83196328);
PPC_FUNC_IMPL(__imp__sub_83196328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25992
	ctx.r3.s64 = ctx.r11.s64 + -25992;
	// bl 0x82ca7538
	ctx.lr = 0x83196340;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-168(r11)
	PPC_STORE_U32(ctx.r11.u32 + -168, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196358"))) PPC_WEAK_FUNC(sub_83196358);
PPC_FUNC_IMPL(__imp__sub_83196358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25984
	ctx.r3.s64 = ctx.r11.s64 + -25984;
	// bl 0x82ca7538
	ctx.lr = 0x83196370;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2348, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196388"))) PPC_WEAK_FUNC(sub_83196388);
PPC_FUNC_IMPL(__imp__sub_83196388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25976
	ctx.r3.s64 = ctx.r11.s64 + -25976;
	// bl 0x82ca7538
	ctx.lr = 0x831963A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6668(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6668, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831963B8"))) PPC_WEAK_FUNC(sub_831963B8);
PPC_FUNC_IMPL(__imp__sub_831963B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25940
	ctx.r3.s64 = ctx.r11.s64 + -25940;
	// bl 0x82ca7538
	ctx.lr = 0x831963D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5136, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831963E8"))) PPC_WEAK_FUNC(sub_831963E8);
PPC_FUNC_IMPL(__imp__sub_831963E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25896
	ctx.r3.s64 = ctx.r11.s64 + -25896;
	// bl 0x82ca7538
	ctx.lr = 0x83196400;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3984(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3984, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196418"))) PPC_WEAK_FUNC(sub_83196418);
PPC_FUNC_IMPL(__imp__sub_83196418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25864
	ctx.r3.s64 = ctx.r11.s64 + -25864;
	// bl 0x82ca7538
	ctx.lr = 0x83196430;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-256(r11)
	PPC_STORE_U32(ctx.r11.u32 + -256, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196448"))) PPC_WEAK_FUNC(sub_83196448);
PPC_FUNC_IMPL(__imp__sub_83196448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25844
	ctx.r3.s64 = ctx.r11.s64 + -25844;
	// bl 0x82ca7538
	ctx.lr = 0x83196460;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2764(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2764, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196478"))) PPC_WEAK_FUNC(sub_83196478);
PPC_FUNC_IMPL(__imp__sub_83196478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25816
	ctx.r3.s64 = ctx.r11.s64 + -25816;
	// bl 0x82ca7538
	ctx.lr = 0x83196490;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4888(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4888, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831964A8"))) PPC_WEAK_FUNC(sub_831964A8);
PPC_FUNC_IMPL(__imp__sub_831964A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25792
	ctx.r3.s64 = ctx.r11.s64 + -25792;
	// bl 0x82ca7538
	ctx.lr = 0x831964C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-720(r11)
	PPC_STORE_U32(ctx.r11.u32 + -720, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831964D8"))) PPC_WEAK_FUNC(sub_831964D8);
PPC_FUNC_IMPL(__imp__sub_831964D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25768
	ctx.r3.s64 = ctx.r11.s64 + -25768;
	// bl 0x82ca7538
	ctx.lr = 0x831964F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5188(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5188, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196508"))) PPC_WEAK_FUNC(sub_83196508);
PPC_FUNC_IMPL(__imp__sub_83196508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25748
	ctx.r3.s64 = ctx.r11.s64 + -25748;
	// bl 0x82ca7538
	ctx.lr = 0x83196520;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2664(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2664, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196538"))) PPC_WEAK_FUNC(sub_83196538);
PPC_FUNC_IMPL(__imp__sub_83196538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25728
	ctx.r3.s64 = ctx.r11.s64 + -25728;
	// bl 0x82ca7538
	ctx.lr = 0x83196550;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5892(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5892, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196568"))) PPC_WEAK_FUNC(sub_83196568);
PPC_FUNC_IMPL(__imp__sub_83196568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25704
	ctx.r3.s64 = ctx.r11.s64 + -25704;
	// bl 0x82ca7538
	ctx.lr = 0x83196580;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1336(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1336, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196598"))) PPC_WEAK_FUNC(sub_83196598);
PPC_FUNC_IMPL(__imp__sub_83196598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25684
	ctx.r3.s64 = ctx.r11.s64 + -25684;
	// bl 0x82ca7538
	ctx.lr = 0x831965B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-156(r11)
	PPC_STORE_U32(ctx.r11.u32 + -156, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831965C8"))) PPC_WEAK_FUNC(sub_831965C8);
PPC_FUNC_IMPL(__imp__sub_831965C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25664
	ctx.r3.s64 = ctx.r11.s64 + -25664;
	// bl 0x82ca7538
	ctx.lr = 0x831965E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 444, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831965F8"))) PPC_WEAK_FUNC(sub_831965F8);
PPC_FUNC_IMPL(__imp__sub_831965F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25644
	ctx.r3.s64 = ctx.r11.s64 + -25644;
	// bl 0x82ca7538
	ctx.lr = 0x83196610;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4036(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4036, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196628"))) PPC_WEAK_FUNC(sub_83196628);
PPC_FUNC_IMPL(__imp__sub_83196628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25628
	ctx.r3.s64 = ctx.r11.s64 + -25628;
	// bl 0x82ca7538
	ctx.lr = 0x83196640;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4900(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4900, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196658"))) PPC_WEAK_FUNC(sub_83196658);
PPC_FUNC_IMPL(__imp__sub_83196658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25608
	ctx.r3.s64 = ctx.r11.s64 + -25608;
	// bl 0x82ca7538
	ctx.lr = 0x83196670;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5880(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5880, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196688"))) PPC_WEAK_FUNC(sub_83196688);
PPC_FUNC_IMPL(__imp__sub_83196688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25592
	ctx.r3.s64 = ctx.r11.s64 + -25592;
	// bl 0x82ca7538
	ctx.lr = 0x831966A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4732(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4732, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831966B8"))) PPC_WEAK_FUNC(sub_831966B8);
PPC_FUNC_IMPL(__imp__sub_831966B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25576
	ctx.r3.s64 = ctx.r11.s64 + -25576;
	// bl 0x82ca7538
	ctx.lr = 0x831966D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-232(r11)
	PPC_STORE_U32(ctx.r11.u32 + -232, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831966E8"))) PPC_WEAK_FUNC(sub_831966E8);
PPC_FUNC_IMPL(__imp__sub_831966E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25556
	ctx.r3.s64 = ctx.r11.s64 + -25556;
	// bl 0x82ca7538
	ctx.lr = 0x83196700;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2392(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2392, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196718"))) PPC_WEAK_FUNC(sub_83196718);
PPC_FUNC_IMPL(__imp__sub_83196718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25532
	ctx.r3.s64 = ctx.r11.s64 + -25532;
	// bl 0x82ca7538
	ctx.lr = 0x83196730;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5824(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5824, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196748"))) PPC_WEAK_FUNC(sub_83196748);
PPC_FUNC_IMPL(__imp__sub_83196748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25516
	ctx.r3.s64 = ctx.r11.s64 + -25516;
	// bl 0x82ca7538
	ctx.lr = 0x83196760;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6420(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6420, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196778"))) PPC_WEAK_FUNC(sub_83196778);
PPC_FUNC_IMPL(__imp__sub_83196778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25500
	ctx.r3.s64 = ctx.r11.s64 + -25500;
	// bl 0x82ca7538
	ctx.lr = 0x83196790;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-384(r11)
	PPC_STORE_U32(ctx.r11.u32 + -384, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831967A8"))) PPC_WEAK_FUNC(sub_831967A8);
PPC_FUNC_IMPL(__imp__sub_831967A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25484
	ctx.r3.s64 = ctx.r11.s64 + -25484;
	// bl 0x82ca7538
	ctx.lr = 0x831967C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7048(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7048, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831967D8"))) PPC_WEAK_FUNC(sub_831967D8);
PPC_FUNC_IMPL(__imp__sub_831967D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25468
	ctx.r3.s64 = ctx.r11.s64 + -25468;
	// bl 0x82ca7538
	ctx.lr = 0x831967F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6600(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6600, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196808"))) PPC_WEAK_FUNC(sub_83196808);
PPC_FUNC_IMPL(__imp__sub_83196808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25452
	ctx.r3.s64 = ctx.r11.s64 + -25452;
	// bl 0x82ca7538
	ctx.lr = 0x83196820;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7068(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7068, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196838"))) PPC_WEAK_FUNC(sub_83196838);
PPC_FUNC_IMPL(__imp__sub_83196838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25432
	ctx.r3.s64 = ctx.r11.s64 + -25432;
	// bl 0x82ca7538
	ctx.lr = 0x83196850;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4716(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4716, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196868"))) PPC_WEAK_FUNC(sub_83196868);
PPC_FUNC_IMPL(__imp__sub_83196868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25396
	ctx.r3.s64 = ctx.r11.s64 + -25396;
	// bl 0x82ca7538
	ctx.lr = 0x83196880;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6956(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6956, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196898"))) PPC_WEAK_FUNC(sub_83196898);
PPC_FUNC_IMPL(__imp__sub_83196898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25380
	ctx.r3.s64 = ctx.r11.s64 + -25380;
	// bl 0x82ca7538
	ctx.lr = 0x831968B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4820(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4820, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831968C8"))) PPC_WEAK_FUNC(sub_831968C8);
PPC_FUNC_IMPL(__imp__sub_831968C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25364
	ctx.r3.s64 = ctx.r11.s64 + -25364;
	// bl 0x82ca7538
	ctx.lr = 0x831968E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4148(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4148, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831968F8"))) PPC_WEAK_FUNC(sub_831968F8);
PPC_FUNC_IMPL(__imp__sub_831968F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25344
	ctx.r3.s64 = ctx.r11.s64 + -25344;
	// bl 0x82ca7538
	ctx.lr = 0x83196910;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1012(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1012, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196928"))) PPC_WEAK_FUNC(sub_83196928);
PPC_FUNC_IMPL(__imp__sub_83196928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25316
	ctx.r3.s64 = ctx.r11.s64 + -25316;
	// bl 0x82ca7538
	ctx.lr = 0x83196940;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2228, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196958"))) PPC_WEAK_FUNC(sub_83196958);
PPC_FUNC_IMPL(__imp__sub_83196958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25300
	ctx.r3.s64 = ctx.r11.s64 + -25300;
	// bl 0x82ca7538
	ctx.lr = 0x83196970;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1916(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1916, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196988"))) PPC_WEAK_FUNC(sub_83196988);
PPC_FUNC_IMPL(__imp__sub_83196988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25288
	ctx.r3.s64 = ctx.r11.s64 + -25288;
	// bl 0x82ca7538
	ctx.lr = 0x831969A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1292(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1292, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831969B8"))) PPC_WEAK_FUNC(sub_831969B8);
PPC_FUNC_IMPL(__imp__sub_831969B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25272
	ctx.r3.s64 = ctx.r11.s64 + -25272;
	// bl 0x82ca7538
	ctx.lr = 0x831969D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831969E8"))) PPC_WEAK_FUNC(sub_831969E8);
PPC_FUNC_IMPL(__imp__sub_831969E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25256
	ctx.r3.s64 = ctx.r11.s64 + -25256;
	// bl 0x82ca7538
	ctx.lr = 0x83196A00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7064(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7064, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196A18"))) PPC_WEAK_FUNC(sub_83196A18);
PPC_FUNC_IMPL(__imp__sub_83196A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25236
	ctx.r3.s64 = ctx.r11.s64 + -25236;
	// bl 0x82ca7538
	ctx.lr = 0x83196A30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2800(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2800, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196A48"))) PPC_WEAK_FUNC(sub_83196A48);
PPC_FUNC_IMPL(__imp__sub_83196A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25212
	ctx.r3.s64 = ctx.r11.s64 + -25212;
	// bl 0x82ca7538
	ctx.lr = 0x83196A60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1288(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1288, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196A78"))) PPC_WEAK_FUNC(sub_83196A78);
PPC_FUNC_IMPL(__imp__sub_83196A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25196
	ctx.r3.s64 = ctx.r11.s64 + -25196;
	// bl 0x82ca7538
	ctx.lr = 0x83196A90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1028(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1028, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196AA8"))) PPC_WEAK_FUNC(sub_83196AA8);
PPC_FUNC_IMPL(__imp__sub_83196AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25176
	ctx.r3.s64 = ctx.r11.s64 + -25176;
	// bl 0x82ca7538
	ctx.lr = 0x83196AC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7092(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7092, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196AD8"))) PPC_WEAK_FUNC(sub_83196AD8);
PPC_FUNC_IMPL(__imp__sub_83196AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25156
	ctx.r3.s64 = ctx.r11.s64 + -25156;
	// bl 0x82ca7538
	ctx.lr = 0x83196AF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1936(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1936, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196B08"))) PPC_WEAK_FUNC(sub_83196B08);
PPC_FUNC_IMPL(__imp__sub_83196B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25132
	ctx.r3.s64 = ctx.r11.s64 + -25132;
	// bl 0x82ca7538
	ctx.lr = 0x83196B20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6728(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6728, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196B38"))) PPC_WEAK_FUNC(sub_83196B38);
PPC_FUNC_IMPL(__imp__sub_83196B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25112
	ctx.r3.s64 = ctx.r11.s64 + -25112;
	// bl 0x82ca7538
	ctx.lr = 0x83196B50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6664(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6664, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196B68"))) PPC_WEAK_FUNC(sub_83196B68);
PPC_FUNC_IMPL(__imp__sub_83196B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25092
	ctx.r3.s64 = ctx.r11.s64 + -25092;
	// bl 0x82ca7538
	ctx.lr = 0x83196B80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5440, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196B98"))) PPC_WEAK_FUNC(sub_83196B98);
PPC_FUNC_IMPL(__imp__sub_83196B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25072
	ctx.r3.s64 = ctx.r11.s64 + -25072;
	// bl 0x82ca7538
	ctx.lr = 0x83196BB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4068(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4068, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196BC8"))) PPC_WEAK_FUNC(sub_83196BC8);
PPC_FUNC_IMPL(__imp__sub_83196BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25052
	ctx.r3.s64 = ctx.r11.s64 + -25052;
	// bl 0x82ca7538
	ctx.lr = 0x83196BE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,448(r11)
	PPC_STORE_U32(ctx.r11.u32 + 448, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196BF8"))) PPC_WEAK_FUNC(sub_83196BF8);
PPC_FUNC_IMPL(__imp__sub_83196BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25020
	ctx.r3.s64 = ctx.r11.s64 + -25020;
	// bl 0x82ca7538
	ctx.lr = 0x83196C10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7072(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7072, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196C28"))) PPC_WEAK_FUNC(sub_83196C28);
PPC_FUNC_IMPL(__imp__sub_83196C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-24992
	ctx.r3.s64 = ctx.r11.s64 + -24992;
	// bl 0x82ca7538
	ctx.lr = 0x83196C40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6888(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6888, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196C58"))) PPC_WEAK_FUNC(sub_83196C58);
PPC_FUNC_IMPL(__imp__sub_83196C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-24960
	ctx.r3.s64 = ctx.r11.s64 + -24960;
	// bl 0x82ca7538
	ctx.lr = 0x83196C70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4980(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4980, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196C88"))) PPC_WEAK_FUNC(sub_83196C88);
PPC_FUNC_IMPL(__imp__sub_83196C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-24924
	ctx.r3.s64 = ctx.r11.s64 + -24924;
	// bl 0x82ca7538
	ctx.lr = 0x83196CA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4092(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4092, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196CB8"))) PPC_WEAK_FUNC(sub_83196CB8);
PPC_FUNC_IMPL(__imp__sub_83196CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-24888
	ctx.r3.s64 = ctx.r11.s64 + -24888;
	// bl 0x82ca7538
	ctx.lr = 0x83196CD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7028(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7028, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196CE8"))) PPC_WEAK_FUNC(sub_83196CE8);
PPC_FUNC_IMPL(__imp__sub_83196CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-24852
	ctx.r3.s64 = ctx.r11.s64 + -24852;
	// bl 0x82ca7538
	ctx.lr = 0x83196D00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5108, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

