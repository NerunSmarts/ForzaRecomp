#include "forza_horizon_1_init.h"

__attribute__((alias("__imp__sub_83157A38"))) PPC_WEAK_FUNC(sub_83157A38);
PPC_FUNC_IMPL(__imp__sub_83157A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21684
	ctx.r3.s64 = ctx.r11.s64 + 21684;
	// bl 0x82e73af8
	ctx.lr = 0x83157A50;
	sub_82E73AF8(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,5308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5308, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157A68"))) PPC_WEAK_FUNC(sub_83157A68);
PPC_FUNC_IMPL(__imp__sub_83157A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21692
	ctx.r3.s64 = ctx.r11.s64 + 21692;
	// bl 0x82e73af8
	ctx.lr = 0x83157A80;
	sub_82E73AF8(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
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

__attribute__((alias("__imp__sub_83157A98"))) PPC_WEAK_FUNC(sub_83157A98);
PPC_FUNC_IMPL(__imp__sub_83157A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21712
	ctx.r3.s64 = ctx.r11.s64 + 21712;
	// bl 0x82e73af8
	ctx.lr = 0x83157AB0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,5272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5272, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157AC8"))) PPC_WEAK_FUNC(sub_83157AC8);
PPC_FUNC_IMPL(__imp__sub_83157AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21720
	ctx.r3.s64 = ctx.r11.s64 + 21720;
	// bl 0x82e73af8
	ctx.lr = 0x83157AE0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,5144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5144, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157AF8"))) PPC_WEAK_FUNC(sub_83157AF8);
PPC_FUNC_IMPL(__imp__sub_83157AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21728
	ctx.r3.s64 = ctx.r11.s64 + 21728;
	// bl 0x82e73af8
	ctx.lr = 0x83157B10;
	sub_82E73AF8(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,5316(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5316, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157B28"))) PPC_WEAK_FUNC(sub_83157B28);
PPC_FUNC_IMPL(__imp__sub_83157B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21736
	ctx.r3.s64 = ctx.r11.s64 + 21736;
	// bl 0x82e73af8
	ctx.lr = 0x83157B40;
	sub_82E73AF8(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,5304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5304, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157B58"))) PPC_WEAK_FUNC(sub_83157B58);
PPC_FUNC_IMPL(__imp__sub_83157B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21744
	ctx.r3.s64 = ctx.r11.s64 + 21744;
	// bl 0x82e73af8
	ctx.lr = 0x83157B70;
	sub_82E73AF8(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
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

__attribute__((alias("__imp__sub_83157B88"))) PPC_WEAK_FUNC(sub_83157B88);
PPC_FUNC_IMPL(__imp__sub_83157B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21756
	ctx.r3.s64 = ctx.r11.s64 + 21756;
	// bl 0x82e73af8
	ctx.lr = 0x83157BA0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,5288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5288, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157BB8"))) PPC_WEAK_FUNC(sub_83157BB8);
PPC_FUNC_IMPL(__imp__sub_83157BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21764
	ctx.r3.s64 = ctx.r11.s64 + 21764;
	// bl 0x82e73af8
	ctx.lr = 0x83157BD0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,5284(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5284, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157BE8"))) PPC_WEAK_FUNC(sub_83157BE8);
PPC_FUNC_IMPL(__imp__sub_83157BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21776
	ctx.r3.s64 = ctx.r11.s64 + 21776;
	// bl 0x82e73af8
	ctx.lr = 0x83157C00;
	sub_82E73AF8(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
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

__attribute__((alias("__imp__sub_83157C18"))) PPC_WEAK_FUNC(sub_83157C18);
PPC_FUNC_IMPL(__imp__sub_83157C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21788
	ctx.r3.s64 = ctx.r11.s64 + 21788;
	// bl 0x82e73af8
	ctx.lr = 0x83157C30;
	sub_82E73AF8(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,5320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5320, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157C48"))) PPC_WEAK_FUNC(sub_83157C48);
PPC_FUNC_IMPL(__imp__sub_83157C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21800
	ctx.r3.s64 = ctx.r11.s64 + 21800;
	// bl 0x82e73af8
	ctx.lr = 0x83157C60;
	sub_82E73AF8(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,5176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5176, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157C78"))) PPC_WEAK_FUNC(sub_83157C78);
PPC_FUNC_IMPL(__imp__sub_83157C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21808
	ctx.r3.s64 = ctx.r11.s64 + 21808;
	// bl 0x82e73af8
	ctx.lr = 0x83157C90;
	sub_82E73AF8(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,5292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5292, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157CA8"))) PPC_WEAK_FUNC(sub_83157CA8);
PPC_FUNC_IMPL(__imp__sub_83157CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21816
	ctx.r3.s64 = ctx.r11.s64 + 21816;
	// bl 0x82e73af8
	ctx.lr = 0x83157CC0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,5264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5264, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157CD8"))) PPC_WEAK_FUNC(sub_83157CD8);
PPC_FUNC_IMPL(__imp__sub_83157CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21824
	ctx.r3.s64 = ctx.r11.s64 + 21824;
	// bl 0x82e73af8
	ctx.lr = 0x83157CF0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,5280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5280, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157D08"))) PPC_WEAK_FUNC(sub_83157D08);
PPC_FUNC_IMPL(__imp__sub_83157D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,5180
	ctx.r31.s64 = ctx.r11.s64 + 5180;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x83157D2C;
	sub_824683B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r3,r10,-24080
	ctx.r3.s64 = ctx.r10.s64 + -24080;
	// bl 0x82a7e6b0
	ctx.lr = 0x83157D54;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157D68"))) PPC_WEAK_FUNC(sub_83157D68);
PPC_FUNC_IMPL(__imp__sub_83157D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-24200
	ctx.r3.s64 = ctx.r11.s64 + -24200;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83157D78"))) PPC_WEAK_FUNC(sub_83157D78);
PPC_FUNC_IMPL(__imp__sub_83157D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,5092
	ctx.r31.s64 = ctx.r11.s64 + 5092;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x83157D9C;
	sub_824683B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r3,r10,-24064
	ctx.r3.s64 = ctx.r10.s64 + -24064;
	// bl 0x82a7e6b0
	ctx.lr = 0x83157DC4;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157DD8"))) PPC_WEAK_FUNC(sub_83157DD8);
PPC_FUNC_IMPL(__imp__sub_83157DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-24192
	ctx.r3.s64 = ctx.r11.s64 + -24192;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83157DE8"))) PPC_WEAK_FUNC(sub_83157DE8);
PPC_FUNC_IMPL(__imp__sub_83157DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-24184
	ctx.r3.s64 = ctx.r11.s64 + -24184;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83157DF8"))) PPC_WEAK_FUNC(sub_83157DF8);
PPC_FUNC_IMPL(__imp__sub_83157DF8) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r31,4752
	ctx.r30.s64 = ctx.r31.s64 + 4752;
	// addi r4,r11,21836
	ctx.r4.s64 = ctx.r11.s64 + 21836;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83157E24;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,21832(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21832);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-24176
	ctx.r3.s64 = ctx.r7.s64 + -24176;
	// lfs f12,3368(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3368);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,4752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4752, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x83157E64;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157E80"))) PPC_WEAK_FUNC(sub_83157E80);
PPC_FUNC_IMPL(__imp__sub_83157E80) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r31,4936
	ctx.r30.s64 = ctx.r31.s64 + 4936;
	// addi r4,r11,21856
	ctx.r4.s64 = ctx.r11.s64 + 21856;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83157EAC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3296(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3296);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-24152
	ctx.r3.s64 = ctx.r7.s64 + -24152;
	// lfs f12,3264(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3264);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,4936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4936, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x83157EEC;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157F08"))) PPC_WEAK_FUNC(sub_83157F08);
PPC_FUNC_IMPL(__imp__sub_83157F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-24128
	ctx.r3.s64 = ctx.r11.s64 + -24128;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83157F18"))) PPC_WEAK_FUNC(sub_83157F18);
PPC_FUNC_IMPL(__imp__sub_83157F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-24120
	ctx.r3.s64 = ctx.r11.s64 + -24120;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83157F28"))) PPC_WEAK_FUNC(sub_83157F28);
PPC_FUNC_IMPL(__imp__sub_83157F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,5472
	ctx.r9.s64 = ctx.r11.s64 + 5472;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157F58"))) PPC_WEAK_FUNC(sub_83157F58);
PPC_FUNC_IMPL(__imp__sub_83157F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,5440
	ctx.r9.s64 = ctx.r11.s64 + 5440;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157F88"))) PPC_WEAK_FUNC(sub_83157F88);
PPC_FUNC_IMPL(__imp__sub_83157F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,5392
	ctx.r9.s64 = ctx.r11.s64 + 5392;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157FB8"))) PPC_WEAK_FUNC(sub_83157FB8);
PPC_FUNC_IMPL(__imp__sub_83157FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,5424
	ctx.r9.s64 = ctx.r11.s64 + 5424;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r8,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157FE8"))) PPC_WEAK_FUNC(sub_83157FE8);
PPC_FUNC_IMPL(__imp__sub_83157FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,5408
	ctx.r10.s64 = ctx.r10.s64 + 5408;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158008"))) PPC_WEAK_FUNC(sub_83158008);
PPC_FUNC_IMPL(__imp__sub_83158008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,5376
	ctx.r10.s64 = ctx.r10.s64 + 5376;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158028"))) PPC_WEAK_FUNC(sub_83158028);
PPC_FUNC_IMPL(__imp__sub_83158028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-24048
	ctx.r3.s64 = ctx.r11.s64 + -24048;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83158038"))) PPC_WEAK_FUNC(sub_83158038);
PPC_FUNC_IMPL(__imp__sub_83158038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,5456
	ctx.r10.s64 = ctx.r10.s64 + 5456;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158058"))) PPC_WEAK_FUNC(sub_83158058);
PPC_FUNC_IMPL(__imp__sub_83158058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,5488
	ctx.r3.s64 = ctx.r11.s64 + 5488;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83158068"))) PPC_WEAK_FUNC(sub_83158068);
PPC_FUNC_IMPL(__imp__sub_83158068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-24000
	ctx.r3.s64 = ctx.r11.s64 + -24000;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83158078"))) PPC_WEAK_FUNC(sub_83158078);
PPC_FUNC_IMPL(__imp__sub_83158078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,5728
	ctx.r9.s64 = ctx.r11.s64 + 5728;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831580A8"))) PPC_WEAK_FUNC(sub_831580A8);
PPC_FUNC_IMPL(__imp__sub_831580A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,5664
	ctx.r9.s64 = ctx.r11.s64 + 5664;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831580D8"))) PPC_WEAK_FUNC(sub_831580D8);
PPC_FUNC_IMPL(__imp__sub_831580D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,5616
	ctx.r9.s64 = ctx.r11.s64 + 5616;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158108"))) PPC_WEAK_FUNC(sub_83158108);
PPC_FUNC_IMPL(__imp__sub_83158108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,5648
	ctx.r9.s64 = ctx.r11.s64 + 5648;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r8,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158138"))) PPC_WEAK_FUNC(sub_83158138);
PPC_FUNC_IMPL(__imp__sub_83158138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,5632
	ctx.r10.s64 = ctx.r10.s64 + 5632;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158158"))) PPC_WEAK_FUNC(sub_83158158);
PPC_FUNC_IMPL(__imp__sub_83158158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,5600
	ctx.r10.s64 = ctx.r10.s64 + 5600;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158178"))) PPC_WEAK_FUNC(sub_83158178);
PPC_FUNC_IMPL(__imp__sub_83158178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-23984
	ctx.r3.s64 = ctx.r11.s64 + -23984;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83158188"))) PPC_WEAK_FUNC(sub_83158188);
PPC_FUNC_IMPL(__imp__sub_83158188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,5712
	ctx.r10.s64 = ctx.r10.s64 + 5712;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831581A8"))) PPC_WEAK_FUNC(sub_831581A8);
PPC_FUNC_IMPL(__imp__sub_831581A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,5760
	ctx.r3.s64 = ctx.r11.s64 + 5760;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831581B8"))) PPC_WEAK_FUNC(sub_831581B8);
PPC_FUNC_IMPL(__imp__sub_831581B8) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r31,5680
	ctx.r30.s64 = ctx.r31.s64 + 5680;
	// addi r4,r11,25344
	ctx.r4.s64 = ctx.r11.s64 + 25344;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831581E4;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,25340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25340);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-23968
	ctx.r3.s64 = ctx.r10.s64 + -23968;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,5680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5680, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315822C;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158248"))) PPC_WEAK_FUNC(sub_83158248);
PPC_FUNC_IMPL(__imp__sub_83158248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,5744
	ctx.r3.s64 = ctx.r11.s64 + 5744;
	// bl 0x824967d8
	ctx.lr = 0x83158260;
	sub_824967D8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-23944
	ctx.r3.s64 = ctx.r11.s64 + -23944;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315826C;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158280"))) PPC_WEAK_FUNC(sub_83158280);
PPC_FUNC_IMPL(__imp__sub_83158280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-23824
	ctx.r3.s64 = ctx.r11.s64 + -23824;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83158290"))) PPC_WEAK_FUNC(sub_83158290);
PPC_FUNC_IMPL(__imp__sub_83158290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,5968
	ctx.r9.s64 = ctx.r11.s64 + 5968;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831582C0"))) PPC_WEAK_FUNC(sub_831582C0);
PPC_FUNC_IMPL(__imp__sub_831582C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,5936
	ctx.r9.s64 = ctx.r11.s64 + 5936;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831582F0"))) PPC_WEAK_FUNC(sub_831582F0);
PPC_FUNC_IMPL(__imp__sub_831582F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,5888
	ctx.r9.s64 = ctx.r11.s64 + 5888;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158320"))) PPC_WEAK_FUNC(sub_83158320);
PPC_FUNC_IMPL(__imp__sub_83158320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,5920
	ctx.r9.s64 = ctx.r11.s64 + 5920;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r8,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158350"))) PPC_WEAK_FUNC(sub_83158350);
PPC_FUNC_IMPL(__imp__sub_83158350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,5904
	ctx.r10.s64 = ctx.r10.s64 + 5904;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158370"))) PPC_WEAK_FUNC(sub_83158370);
PPC_FUNC_IMPL(__imp__sub_83158370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,5872
	ctx.r10.s64 = ctx.r10.s64 + 5872;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158390"))) PPC_WEAK_FUNC(sub_83158390);
PPC_FUNC_IMPL(__imp__sub_83158390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,5952
	ctx.r10.s64 = ctx.r10.s64 + 5952;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831583B0"))) PPC_WEAK_FUNC(sub_831583B0);
PPC_FUNC_IMPL(__imp__sub_831583B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,6008
	ctx.r3.s64 = ctx.r11.s64 + 6008;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831583C0"))) PPC_WEAK_FUNC(sub_831583C0);
PPC_FUNC_IMPL(__imp__sub_831583C0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// lis r8,-31954
	ctx.r8.s64 = -2094137344;
	// lwz r11,6104(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6104);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,6104(r9)
	PPC_STORE_U32(ctx.r9.u32 + 6104, ctx.r10.u32);
	// stw r11,6156(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6156, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831583E0"))) PPC_WEAK_FUNC(sub_831583E0);
PPC_FUNC_IMPL(__imp__sub_831583E0) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r31,5844
	ctx.r30.s64 = ctx.r31.s64 + 5844;
	// addi r4,r11,25684
	ctx.r4.s64 = ctx.r11.s64 + 25684;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315840C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,25680(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25680);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3264(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3264);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-23808
	ctx.r3.s64 = ctx.r7.s64 + -23808;
	// lfs f12,3192(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3192);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,5844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5844, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315844C;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158468"))) PPC_WEAK_FUNC(sub_83158468);
PPC_FUNC_IMPL(__imp__sub_83158468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r31,6080
	ctx.r30.s64 = ctx.r31.s64 + 6080;
	// addi r4,r11,25724
	ctx.r4.s64 = ctx.r11.s64 + 25724;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83158494;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// ori r11,r11,50000
	ctx.r11.u64 = ctx.r11.u64 | 50000;
	// stw r10,6080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6080, ctx.r10.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1000
	ctx.r9.s64 = 1000;
	// li r11,1000
	ctx.r11.s64 = 1000;
	// ori r10,r10,18928
	ctx.r10.u64 = ctx.r10.u64 | 18928;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-23872
	ctx.r3.s64 = ctx.r11.s64 + -23872;
	// bl 0x82a7e6b0
	ctx.lr = 0x831584D4;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831584F0"))) PPC_WEAK_FUNC(sub_831584F0);
PPC_FUNC_IMPL(__imp__sub_831584F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r31,5984
	ctx.r30.s64 = ctx.r31.s64 + 5984;
	// addi r4,r11,25764
	ctx.r4.s64 = ctx.r11.s64 + 25764;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315851C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,1200
	ctx.r11.s64 = 1200;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r10,5984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5984, ctx.r10.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,3600
	ctx.r10.s64 = 3600;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-23848
	ctx.r3.s64 = ctx.r11.s64 + -23848;
	// bl 0x82a7e6b0
	ctx.lr = 0x83158554;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158570"))) PPC_WEAK_FUNC(sub_83158570);
PPC_FUNC_IMPL(__imp__sub_83158570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,6368
	ctx.r9.s64 = ctx.r11.s64 + 6368;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831585A0"))) PPC_WEAK_FUNC(sub_831585A0);
PPC_FUNC_IMPL(__imp__sub_831585A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,6304
	ctx.r9.s64 = ctx.r11.s64 + 6304;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831585D0"))) PPC_WEAK_FUNC(sub_831585D0);
PPC_FUNC_IMPL(__imp__sub_831585D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,6192
	ctx.r9.s64 = ctx.r11.s64 + 6192;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158600"))) PPC_WEAK_FUNC(sub_83158600);
PPC_FUNC_IMPL(__imp__sub_83158600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,6288
	ctx.r9.s64 = ctx.r11.s64 + 6288;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r8,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158630"))) PPC_WEAK_FUNC(sub_83158630);
PPC_FUNC_IMPL(__imp__sub_83158630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,6272
	ctx.r10.s64 = ctx.r10.s64 + 6272;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158650"))) PPC_WEAK_FUNC(sub_83158650);
PPC_FUNC_IMPL(__imp__sub_83158650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,6176
	ctx.r10.s64 = ctx.r10.s64 + 6176;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158670"))) PPC_WEAK_FUNC(sub_83158670);
PPC_FUNC_IMPL(__imp__sub_83158670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-23560
	ctx.r3.s64 = ctx.r11.s64 + -23560;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83158680"))) PPC_WEAK_FUNC(sub_83158680);
PPC_FUNC_IMPL(__imp__sub_83158680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,6352
	ctx.r10.s64 = ctx.r10.s64 + 6352;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831586A0"))) PPC_WEAK_FUNC(sub_831586A0);
PPC_FUNC_IMPL(__imp__sub_831586A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,6384
	ctx.r3.s64 = ctx.r11.s64 + 6384;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831586B0"))) PPC_WEAK_FUNC(sub_831586B0);
PPC_FUNC_IMPL(__imp__sub_831586B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,6256
	ctx.r3.s64 = ctx.r11.s64 + 6256;
	// b 0x82499678
	sub_82499678(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831586C0"))) PPC_WEAK_FUNC(sub_831586C0);
PPC_FUNC_IMPL(__imp__sub_831586C0) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r31,6164
	ctx.r30.s64 = ctx.r31.s64 + 6164;
	// addi r4,r11,26568
	ctx.r4.s64 = ctx.r11.s64 + 26568;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831586EC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-23744
	ctx.r3.s64 = ctx.r9.s64 + -23744;
	// lfs f0,26564(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26564);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,6164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6164, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x83158710;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158728"))) PPC_WEAK_FUNC(sub_83158728);
PPC_FUNC_IMPL(__imp__sub_83158728) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r31,6332
	ctx.r30.s64 = ctx.r31.s64 + 6332;
	// addi r4,r11,26608
	ctx.r4.s64 = ctx.r11.s64 + 26608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83158754;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-23720
	ctx.r3.s64 = ctx.r9.s64 + -23720;
	// lfs f0,22300(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22300);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,6332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6332, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x83158778;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158790"))) PPC_WEAK_FUNC(sub_83158790);
PPC_FUNC_IMPL(__imp__sub_83158790) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r31,6232
	ctx.r30.s64 = ctx.r31.s64 + 6232;
	// addi r4,r11,26648
	ctx.r4.s64 = ctx.r11.s64 + 26648;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831587BC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-23696
	ctx.r3.s64 = ctx.r9.s64 + -23696;
	// lfs f0,22296(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22296);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,6232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6232, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831587E0;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831587F8"))) PPC_WEAK_FUNC(sub_831587F8);
PPC_FUNC_IMPL(__imp__sub_831587F8) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r31,6208
	ctx.r30.s64 = ctx.r31.s64 + 6208;
	// addi r4,r11,26696
	ctx.r4.s64 = ctx.r11.s64 + 26696;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83158824;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,26692(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26692);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,25844(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 25844);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-23672
	ctx.r3.s64 = ctx.r10.s64 + -23672;
	// lfs f11,3256(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3256);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,6208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6208, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315886C;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158888"))) PPC_WEAK_FUNC(sub_83158888);
PPC_FUNC_IMPL(__imp__sub_83158888) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r31,6244
	ctx.r30.s64 = ctx.r31.s64 + 6244;
	// addi r4,r11,26748
	ctx.r4.s64 = ctx.r11.s64 + 26748;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831588B4;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-23648
	ctx.r3.s64 = ctx.r9.s64 + -23648;
	// lfs f0,26744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26744);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,6244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6244, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831588D8;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831588F0"))) PPC_WEAK_FUNC(sub_831588F0);
PPC_FUNC_IMPL(__imp__sub_831588F0) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r31,6320
	ctx.r30.s64 = ctx.r31.s64 + 6320;
	// addi r4,r11,26792
	ctx.r4.s64 = ctx.r11.s64 + 26792;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315891C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-23624
	ctx.r3.s64 = ctx.r9.s64 + -23624;
	// lfs f0,26788(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26788);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,6320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6320, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x83158940;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158958"))) PPC_WEAK_FUNC(sub_83158958);
PPC_FUNC_IMPL(__imp__sub_83158958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,6257
	ctx.r3.s64 = ctx.r11.s64 + 6257;
	// b 0x82499930
	sub_82499930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83158968"))) PPC_WEAK_FUNC(sub_83158968);
PPC_FUNC_IMPL(__imp__sub_83158968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-23544
	ctx.r3.s64 = ctx.r11.s64 + -23544;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83158978"))) PPC_WEAK_FUNC(sub_83158978);
PPC_FUNC_IMPL(__imp__sub_83158978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,6704
	ctx.r9.s64 = ctx.r11.s64 + 6704;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831589A8"))) PPC_WEAK_FUNC(sub_831589A8);
PPC_FUNC_IMPL(__imp__sub_831589A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,6672
	ctx.r9.s64 = ctx.r11.s64 + 6672;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831589D8"))) PPC_WEAK_FUNC(sub_831589D8);
PPC_FUNC_IMPL(__imp__sub_831589D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,6624
	ctx.r9.s64 = ctx.r11.s64 + 6624;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158A08"))) PPC_WEAK_FUNC(sub_83158A08);
PPC_FUNC_IMPL(__imp__sub_83158A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,6656
	ctx.r9.s64 = ctx.r11.s64 + 6656;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r8,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158A38"))) PPC_WEAK_FUNC(sub_83158A38);
PPC_FUNC_IMPL(__imp__sub_83158A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,6640
	ctx.r10.s64 = ctx.r10.s64 + 6640;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158A58"))) PPC_WEAK_FUNC(sub_83158A58);
PPC_FUNC_IMPL(__imp__sub_83158A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,6608
	ctx.r10.s64 = ctx.r10.s64 + 6608;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158A78"))) PPC_WEAK_FUNC(sub_83158A78);
PPC_FUNC_IMPL(__imp__sub_83158A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,6688
	ctx.r10.s64 = ctx.r10.s64 + 6688;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158A98"))) PPC_WEAK_FUNC(sub_83158A98);
PPC_FUNC_IMPL(__imp__sub_83158A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,6728
	ctx.r3.s64 = ctx.r11.s64 + 6728;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83158AA8"))) PPC_WEAK_FUNC(sub_83158AA8);
PPC_FUNC_IMPL(__imp__sub_83158AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,6976
	ctx.r9.s64 = ctx.r11.s64 + 6976;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158AD8"))) PPC_WEAK_FUNC(sub_83158AD8);
PPC_FUNC_IMPL(__imp__sub_83158AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,6944
	ctx.r9.s64 = ctx.r11.s64 + 6944;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158B08"))) PPC_WEAK_FUNC(sub_83158B08);
PPC_FUNC_IMPL(__imp__sub_83158B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,6880
	ctx.r9.s64 = ctx.r11.s64 + 6880;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158B38"))) PPC_WEAK_FUNC(sub_83158B38);
PPC_FUNC_IMPL(__imp__sub_83158B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,6928
	ctx.r9.s64 = ctx.r11.s64 + 6928;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r8,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158B68"))) PPC_WEAK_FUNC(sub_83158B68);
PPC_FUNC_IMPL(__imp__sub_83158B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,6912
	ctx.r10.s64 = ctx.r10.s64 + 6912;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158B88"))) PPC_WEAK_FUNC(sub_83158B88);
PPC_FUNC_IMPL(__imp__sub_83158B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,6864
	ctx.r10.s64 = ctx.r10.s64 + 6864;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158BA8"))) PPC_WEAK_FUNC(sub_83158BA8);
PPC_FUNC_IMPL(__imp__sub_83158BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-23488
	ctx.r3.s64 = ctx.r11.s64 + -23488;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83158BB8"))) PPC_WEAK_FUNC(sub_83158BB8);
PPC_FUNC_IMPL(__imp__sub_83158BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,6960
	ctx.r10.s64 = ctx.r10.s64 + 6960;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158BD8"))) PPC_WEAK_FUNC(sub_83158BD8);
PPC_FUNC_IMPL(__imp__sub_83158BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,7000
	ctx.r3.s64 = ctx.r11.s64 + 7000;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83158BE8"))) PPC_WEAK_FUNC(sub_83158BE8);
PPC_FUNC_IMPL(__imp__sub_83158BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,6896
	ctx.r3.s64 = ctx.r11.s64 + 6896;
	// b 0x8249b118
	sub_8249B118(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83158BF8"))) PPC_WEAK_FUNC(sub_83158BF8);
PPC_FUNC_IMPL(__imp__sub_83158BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,7936
	ctx.r9.s64 = ctx.r11.s64 + 7936;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158C28"))) PPC_WEAK_FUNC(sub_83158C28);
PPC_FUNC_IMPL(__imp__sub_83158C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,7664
	ctx.r9.s64 = ctx.r11.s64 + 7664;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158C58"))) PPC_WEAK_FUNC(sub_83158C58);
PPC_FUNC_IMPL(__imp__sub_83158C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,7184
	ctx.r9.s64 = ctx.r11.s64 + 7184;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158C88"))) PPC_WEAK_FUNC(sub_83158C88);
PPC_FUNC_IMPL(__imp__sub_83158C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,7568
	ctx.r9.s64 = ctx.r11.s64 + 7568;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r8,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158CB8"))) PPC_WEAK_FUNC(sub_83158CB8);
PPC_FUNC_IMPL(__imp__sub_83158CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,7376
	ctx.r10.s64 = ctx.r10.s64 + 7376;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158CD8"))) PPC_WEAK_FUNC(sub_83158CD8);
PPC_FUNC_IMPL(__imp__sub_83158CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,7168
	ctx.r10.s64 = ctx.r10.s64 + 7168;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158CF8"))) PPC_WEAK_FUNC(sub_83158CF8);
PPC_FUNC_IMPL(__imp__sub_83158CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-22088
	ctx.r3.s64 = ctx.r11.s64 + -22088;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83158D08"))) PPC_WEAK_FUNC(sub_83158D08);
PPC_FUNC_IMPL(__imp__sub_83158D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,7872
	ctx.r10.s64 = ctx.r10.s64 + 7872;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158D28"))) PPC_WEAK_FUNC(sub_83158D28);
PPC_FUNC_IMPL(__imp__sub_83158D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,8672
	ctx.r3.s64 = ctx.r11.s64 + 8672;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83158D38"))) PPC_WEAK_FUNC(sub_83158D38);
PPC_FUNC_IMPL(__imp__sub_83158D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-23448
	ctx.r3.s64 = ctx.r11.s64 + -23448;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83158D48"))) PPC_WEAK_FUNC(sub_83158D48);
PPC_FUNC_IMPL(__imp__sub_83158D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-15508
	ctx.r3.s64 = ctx.r11.s64 + -15508;
	// bl 0x82ca7538
	ctx.lr = 0x83158D60;
	sub_82CA7538(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,9176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9176, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158D78"))) PPC_WEAK_FUNC(sub_83158D78);
PPC_FUNC_IMPL(__imp__sub_83158D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-15476
	ctx.r3.s64 = ctx.r11.s64 + -15476;
	// bl 0x82ca7538
	ctx.lr = 0x83158D90;
	sub_82CA7538(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,9112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9112, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158DA8"))) PPC_WEAK_FUNC(sub_83158DA8);
PPC_FUNC_IMPL(__imp__sub_83158DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-15444
	ctx.r3.s64 = ctx.r11.s64 + -15444;
	// bl 0x82ca7538
	ctx.lr = 0x83158DC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,9152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9152, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158DD8"))) PPC_WEAK_FUNC(sub_83158DD8);
PPC_FUNC_IMPL(__imp__sub_83158DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-15412
	ctx.r3.s64 = ctx.r11.s64 + -15412;
	// bl 0x82ca7538
	ctx.lr = 0x83158DF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,9136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9136, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158E08"))) PPC_WEAK_FUNC(sub_83158E08);
PPC_FUNC_IMPL(__imp__sub_83158E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-15388
	ctx.r3.s64 = ctx.r11.s64 + -15388;
	// bl 0x82ca7538
	ctx.lr = 0x83158E20;
	sub_82CA7538(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,9092(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9092, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158E38"))) PPC_WEAK_FUNC(sub_83158E38);
PPC_FUNC_IMPL(__imp__sub_83158E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-15360
	ctx.r3.s64 = ctx.r11.s64 + -15360;
	// bl 0x82ca7538
	ctx.lr = 0x83158E50;
	sub_82CA7538(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,9116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9116, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158E68"))) PPC_WEAK_FUNC(sub_83158E68);
PPC_FUNC_IMPL(__imp__sub_83158E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-15336
	ctx.r3.s64 = ctx.r11.s64 + -15336;
	// bl 0x82ca7538
	ctx.lr = 0x83158E80;
	sub_82CA7538(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,9196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9196, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158E98"))) PPC_WEAK_FUNC(sub_83158E98);
PPC_FUNC_IMPL(__imp__sub_83158E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-15312
	ctx.r3.s64 = ctx.r11.s64 + -15312;
	// bl 0x82ca7538
	ctx.lr = 0x83158EB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,9156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9156, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158EC8"))) PPC_WEAK_FUNC(sub_83158EC8);
PPC_FUNC_IMPL(__imp__sub_83158EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-15292
	ctx.r3.s64 = ctx.r11.s64 + -15292;
	// bl 0x82ca7538
	ctx.lr = 0x83158EE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,9132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9132, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158EF8"))) PPC_WEAK_FUNC(sub_83158EF8);
PPC_FUNC_IMPL(__imp__sub_83158EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-15272
	ctx.r3.s64 = ctx.r11.s64 + -15272;
	// bl 0x82ca7538
	ctx.lr = 0x83158F10;
	sub_82CA7538(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,9120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9120, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158F28"))) PPC_WEAK_FUNC(sub_83158F28);
PPC_FUNC_IMPL(__imp__sub_83158F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-15248
	ctx.r3.s64 = ctx.r11.s64 + -15248;
	// bl 0x82ca7538
	ctx.lr = 0x83158F40;
	sub_82CA7538(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,8668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8668, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158F58"))) PPC_WEAK_FUNC(sub_83158F58);
PPC_FUNC_IMPL(__imp__sub_83158F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-15228
	ctx.r3.s64 = ctx.r11.s64 + -15228;
	// bl 0x82ca7538
	ctx.lr = 0x83158F70;
	sub_82CA7538(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,9200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9200, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158F88"))) PPC_WEAK_FUNC(sub_83158F88);
PPC_FUNC_IMPL(__imp__sub_83158F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-15204
	ctx.r3.s64 = ctx.r11.s64 + -15204;
	// bl 0x82ca7538
	ctx.lr = 0x83158FA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,9188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9188, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158FB8"))) PPC_WEAK_FUNC(sub_83158FB8);
PPC_FUNC_IMPL(__imp__sub_83158FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-15180
	ctx.r3.s64 = ctx.r11.s64 + -15180;
	// bl 0x82ca7538
	ctx.lr = 0x83158FD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,9180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9180, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158FE8"))) PPC_WEAK_FUNC(sub_83158FE8);
PPC_FUNC_IMPL(__imp__sub_83158FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-15152
	ctx.r3.s64 = ctx.r11.s64 + -15152;
	// bl 0x82ca7538
	ctx.lr = 0x83159000;
	sub_82CA7538(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,9204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9204, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159018"))) PPC_WEAK_FUNC(sub_83159018);
PPC_FUNC_IMPL(__imp__sub_83159018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-15128
	ctx.r3.s64 = ctx.r11.s64 + -15128;
	// bl 0x82ca7538
	ctx.lr = 0x83159030;
	sub_82CA7538(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,9140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9140, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159048"))) PPC_WEAK_FUNC(sub_83159048);
PPC_FUNC_IMPL(__imp__sub_83159048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-15104
	ctx.r3.s64 = ctx.r11.s64 + -15104;
	// bl 0x82ca7538
	ctx.lr = 0x83159060;
	sub_82CA7538(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,9160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9160, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159078"))) PPC_WEAK_FUNC(sub_83159078);
PPC_FUNC_IMPL(__imp__sub_83159078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-15080
	ctx.r3.s64 = ctx.r11.s64 + -15080;
	// bl 0x82ca7538
	ctx.lr = 0x83159090;
	sub_82CA7538(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,9100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9100, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831590A8"))) PPC_WEAK_FUNC(sub_831590A8);
PPC_FUNC_IMPL(__imp__sub_831590A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-15060
	ctx.r3.s64 = ctx.r11.s64 + -15060;
	// bl 0x82ca7538
	ctx.lr = 0x831590C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,9128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9128, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831590D8"))) PPC_WEAK_FUNC(sub_831590D8);
PPC_FUNC_IMPL(__imp__sub_831590D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-15028
	ctx.r3.s64 = ctx.r11.s64 + -15028;
	// bl 0x82ca7538
	ctx.lr = 0x831590F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,9124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9124, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159108"))) PPC_WEAK_FUNC(sub_83159108);
PPC_FUNC_IMPL(__imp__sub_83159108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-15004
	ctx.r3.s64 = ctx.r11.s64 + -15004;
	// bl 0x82ca7538
	ctx.lr = 0x83159120;
	sub_82CA7538(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,9108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9108, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159138"))) PPC_WEAK_FUNC(sub_83159138);
PPC_FUNC_IMPL(__imp__sub_83159138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-14980
	ctx.r3.s64 = ctx.r11.s64 + -14980;
	// bl 0x82ca7538
	ctx.lr = 0x83159150;
	sub_82CA7538(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,9144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9144, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159168"))) PPC_WEAK_FUNC(sub_83159168);
PPC_FUNC_IMPL(__imp__sub_83159168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-14964
	ctx.r3.s64 = ctx.r11.s64 + -14964;
	// bl 0x82ca7538
	ctx.lr = 0x83159180;
	sub_82CA7538(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,9104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9104, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159198"))) PPC_WEAK_FUNC(sub_83159198);
PPC_FUNC_IMPL(__imp__sub_83159198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-14948
	ctx.r3.s64 = ctx.r11.s64 + -14948;
	// bl 0x82ca7538
	ctx.lr = 0x831591B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,9088(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9088, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831591C8"))) PPC_WEAK_FUNC(sub_831591C8);
PPC_FUNC_IMPL(__imp__sub_831591C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-14920
	ctx.r3.s64 = ctx.r11.s64 + -14920;
	// bl 0x82ca7538
	ctx.lr = 0x831591E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,9096(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9096, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831591F8"))) PPC_WEAK_FUNC(sub_831591F8);
PPC_FUNC_IMPL(__imp__sub_831591F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-14888
	ctx.r3.s64 = ctx.r11.s64 + -14888;
	// bl 0x82ca7538
	ctx.lr = 0x83159210;
	sub_82CA7538(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,9184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9184, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159228"))) PPC_WEAK_FUNC(sub_83159228);
PPC_FUNC_IMPL(__imp__sub_83159228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-14864
	ctx.r3.s64 = ctx.r11.s64 + -14864;
	// bl 0x82ca7538
	ctx.lr = 0x83159240;
	sub_82CA7538(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,9192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9192, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159258"))) PPC_WEAK_FUNC(sub_83159258);
PPC_FUNC_IMPL(__imp__sub_83159258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-14836
	ctx.r3.s64 = ctx.r11.s64 + -14836;
	// bl 0x82ca7538
	ctx.lr = 0x83159270;
	sub_82CA7538(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,9168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9168, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159288"))) PPC_WEAK_FUNC(sub_83159288);
PPC_FUNC_IMPL(__imp__sub_83159288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-14812
	ctx.r3.s64 = ctx.r11.s64 + -14812;
	// bl 0x82ca7538
	ctx.lr = 0x831592A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,9172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9172, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831592B8"))) PPC_WEAK_FUNC(sub_831592B8);
PPC_FUNC_IMPL(__imp__sub_831592B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-14784
	ctx.r3.s64 = ctx.r11.s64 + -14784;
	// bl 0x82ca7538
	ctx.lr = 0x831592D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,9148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9148, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831592E8"))) PPC_WEAK_FUNC(sub_831592E8);
PPC_FUNC_IMPL(__imp__sub_831592E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-14756
	ctx.r3.s64 = ctx.r11.s64 + -14756;
	// bl 0x82ca7538
	ctx.lr = 0x83159300;
	sub_82CA7538(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,9164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9164, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159318"))) PPC_WEAK_FUNC(sub_83159318);
PPC_FUNC_IMPL(__imp__sub_83159318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-15508
	ctx.r3.s64 = ctx.r11.s64 + -15508;
	// bl 0x82ca7538
	ctx.lr = 0x83159330;
	sub_82CA7538(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,9220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9220, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159348"))) PPC_WEAK_FUNC(sub_83159348);
PPC_FUNC_IMPL(__imp__sub_83159348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-14728
	ctx.r3.s64 = ctx.r11.s64 + -14728;
	// bl 0x82ca7538
	ctx.lr = 0x83159360;
	sub_82CA7538(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,9224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9224, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159378"))) PPC_WEAK_FUNC(sub_83159378);
PPC_FUNC_IMPL(__imp__sub_83159378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-14716
	ctx.r3.s64 = ctx.r11.s64 + -14716;
	// bl 0x82ca7538
	ctx.lr = 0x83159390;
	sub_82CA7538(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,9216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9216, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831593A8"))) PPC_WEAK_FUNC(sub_831593A8);
PPC_FUNC_IMPL(__imp__sub_831593A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-14700
	ctx.r3.s64 = ctx.r11.s64 + -14700;
	// bl 0x82ca7538
	ctx.lr = 0x831593C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,9212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9212, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831593D8"))) PPC_WEAK_FUNC(sub_831593D8);
PPC_FUNC_IMPL(__imp__sub_831593D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-14676
	ctx.r3.s64 = ctx.r11.s64 + -14676;
	// bl 0x82ca7538
	ctx.lr = 0x831593F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,9412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9412, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159408"))) PPC_WEAK_FUNC(sub_83159408);
PPC_FUNC_IMPL(__imp__sub_83159408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-14652
	ctx.r3.s64 = ctx.r11.s64 + -14652;
	// bl 0x82ca7538
	ctx.lr = 0x83159420;
	sub_82CA7538(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,9228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9228, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159438"))) PPC_WEAK_FUNC(sub_83159438);
PPC_FUNC_IMPL(__imp__sub_83159438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-14628
	ctx.r3.s64 = ctx.r11.s64 + -14628;
	// bl 0x82ca7538
	ctx.lr = 0x83159450;
	sub_82CA7538(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,9208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9208, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159468"))) PPC_WEAK_FUNC(sub_83159468);
PPC_FUNC_IMPL(__imp__sub_83159468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-23440
	ctx.r3.s64 = ctx.r11.s64 + -23440;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83159478"))) PPC_WEAK_FUNC(sub_83159478);
PPC_FUNC_IMPL(__imp__sub_83159478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-23432
	ctx.r3.s64 = ctx.r11.s64 + -23432;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83159488"))) PPC_WEAK_FUNC(sub_83159488);
PPC_FUNC_IMPL(__imp__sub_83159488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r4,r11,-14604
	ctx.r4.s64 = ctx.r11.s64 + -14604;
	// addi r3,r10,7704
	ctx.r3.s64 = ctx.r10.s64 + 7704;
	// bl 0x82450f48
	ctx.lr = 0x831594A8;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-22072
	ctx.r3.s64 = ctx.r11.s64 + -22072;
	// bl 0x82a7e6b0
	ctx.lr = 0x831594B4;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831594C8"))) PPC_WEAK_FUNC(sub_831594C8);
PPC_FUNC_IMPL(__imp__sub_831594C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-13700
	ctx.r3.s64 = ctx.r11.s64 + -13700;
	// bl 0x82cfcb28
	ctx.lr = 0x831594E4;
	sub_82CFCB28(ctx, base);
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,8744
	ctx.r31.s64 = ctx.r10.s64 + 8744;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r3,8744(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8744, ctx.r3.u32);
	// addi r3,r9,-13712
	ctx.r3.s64 = ctx.r9.s64 + -13712;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82cfcb28
	ctx.lr = 0x83159504;
	sub_82CFCB28(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r3,r10,-13724
	ctx.r3.s64 = ctx.r10.s64 + -13724;
	// bl 0x82cfcb28
	ctx.lr = 0x8315951C;
	sub_82CFCB28(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r3,r10,-13740
	ctx.r3.s64 = ctx.r10.s64 + -13740;
	// bl 0x82cfcb28
	ctx.lr = 0x83159534;
	sub_82CFCB28(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r3,r10,-13748
	ctx.r3.s64 = ctx.r10.s64 + -13748;
	// bl 0x82cfcb28
	ctx.lr = 0x8315954C;
	sub_82CFCB28(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r3,r10,-13764
	ctx.r3.s64 = ctx.r10.s64 + -13764;
	// bl 0x82cfcb28
	ctx.lr = 0x83159564;
	sub_82CFCB28(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r3,r10,-13776
	ctx.r3.s64 = ctx.r10.s64 + -13776;
	// bl 0x82cfcb28
	ctx.lr = 0x8315957C;
	sub_82CFCB28(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// addi r3,r10,-13792
	ctx.r3.s64 = ctx.r10.s64 + -13792;
	// bl 0x82cfcb28
	ctx.lr = 0x83159594;
	sub_82CFCB28(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// addi r3,r10,-13808
	ctx.r3.s64 = ctx.r10.s64 + -13808;
	// bl 0x82cfcb28
	ctx.lr = 0x831595AC;
	sub_82CFCB28(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r3,r10,-13820
	ctx.r3.s64 = ctx.r10.s64 + -13820;
	// bl 0x82cfcb28
	ctx.lr = 0x831595C4;
	sub_82CFCB28(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r10,-13844
	ctx.r3.s64 = ctx.r10.s64 + -13844;
	// bl 0x82cfcb28
	ctx.lr = 0x831595DC;
	sub_82CFCB28(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r3,r10,-13868
	ctx.r3.s64 = ctx.r10.s64 + -13868;
	// bl 0x82cfcb28
	ctx.lr = 0x831595F4;
	sub_82CFCB28(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// addi r3,r10,-13896
	ctx.r3.s64 = ctx.r10.s64 + -13896;
	// bl 0x82cfcb28
	ctx.lr = 0x8315960C;
	sub_82CFCB28(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r3,r10,-13920
	ctx.r3.s64 = ctx.r10.s64 + -13920;
	// bl 0x82cfcb28
	ctx.lr = 0x83159624;
	sub_82CFCB28(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// addi r3,r10,-13944
	ctx.r3.s64 = ctx.r10.s64 + -13944;
	// bl 0x82cfcb28
	ctx.lr = 0x8315963C;
	sub_82CFCB28(ctx, base);
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// addi r3,r10,-13956
	ctx.r3.s64 = ctx.r10.s64 + -13956;
	// bl 0x82cfcb28
	ctx.lr = 0x83159654;
	sub_82CFCB28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// addi r3,r10,-13980
	ctx.r3.s64 = ctx.r10.s64 + -13980;
	// bl 0x82cfcb28
	ctx.lr = 0x8315966C;
	sub_82CFCB28(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// addi r3,r10,-14000
	ctx.r3.s64 = ctx.r10.s64 + -14000;
	// bl 0x82cfcb28
	ctx.lr = 0x83159684;
	sub_82CFCB28(ctx, base);
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// addi r3,r10,-14012
	ctx.r3.s64 = ctx.r10.s64 + -14012;
	// bl 0x82cfcb28
	ctx.lr = 0x8315969C;
	sub_82CFCB28(ctx, base);
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r3,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// addi r3,r10,-14028
	ctx.r3.s64 = ctx.r10.s64 + -14028;
	// bl 0x82cfcb28
	ctx.lr = 0x831596B4;
	sub_82CFCB28(ctx, base);
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r3,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// addi r3,r10,-14044
	ctx.r3.s64 = ctx.r10.s64 + -14044;
	// bl 0x82cfcb28
	ctx.lr = 0x831596CC;
	sub_82CFCB28(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r3,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// addi r3,r10,-14056
	ctx.r3.s64 = ctx.r10.s64 + -14056;
	// bl 0x82cfcb28
	ctx.lr = 0x831596E4;
	sub_82CFCB28(ctx, base);
	// li r11,21
	ctx.r11.s64 = 21;
	// stw r3,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// addi r3,r10,-14076
	ctx.r3.s64 = ctx.r10.s64 + -14076;
	// bl 0x82cfcb28
	ctx.lr = 0x831596FC;
	sub_82CFCB28(ctx, base);
	// li r11,27
	ctx.r11.s64 = 27;
	// stw r3,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r3.u32);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-14108
	ctx.r3.s64 = ctx.r11.s64 + -14108;
	// bl 0x82cfcb28
	ctx.lr = 0x83159714;
	sub_82CFCB28(ctx, base);
	// li r11,28
	ctx.r11.s64 = 28;
	// stw r3,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// addi r3,r10,-14140
	ctx.r3.s64 = ctx.r10.s64 + -14140;
	// bl 0x82cfcb28
	ctx.lr = 0x8315972C;
	sub_82CFCB28(ctx, base);
	// li r11,29
	ctx.r11.s64 = 29;
	// stw r3,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// addi r3,r10,-14176
	ctx.r3.s64 = ctx.r10.s64 + -14176;
	// bl 0x82cfcb28
	ctx.lr = 0x83159744;
	sub_82CFCB28(ctx, base);
	// li r11,30
	ctx.r11.s64 = 30;
	// stw r3,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// addi r3,r10,-14204
	ctx.r3.s64 = ctx.r10.s64 + -14204;
	// bl 0x82cfcb28
	ctx.lr = 0x8315975C;
	sub_82CFCB28(ctx, base);
	// li r11,31
	ctx.r11.s64 = 31;
	// stw r3,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// addi r3,r10,-14232
	ctx.r3.s64 = ctx.r10.s64 + -14232;
	// bl 0x82cfcb28
	ctx.lr = 0x83159774;
	sub_82CFCB28(ctx, base);
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r3,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// addi r3,r10,-14264
	ctx.r3.s64 = ctx.r10.s64 + -14264;
	// bl 0x82cfcb28
	ctx.lr = 0x8315978C;
	sub_82CFCB28(ctx, base);
	// li r11,33
	ctx.r11.s64 = 33;
	// stw r3,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// addi r3,r10,-14292
	ctx.r3.s64 = ctx.r10.s64 + -14292;
	// bl 0x82cfcb28
	ctx.lr = 0x831597A4;
	sub_82CFCB28(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// stw r3,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// addi r3,r10,-14328
	ctx.r3.s64 = ctx.r10.s64 + -14328;
	// bl 0x82cfcb28
	ctx.lr = 0x831597BC;
	sub_82CFCB28(ctx, base);
	// li r11,35
	ctx.r11.s64 = 35;
	// stw r3,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// addi r3,r10,-14364
	ctx.r3.s64 = ctx.r10.s64 + -14364;
	// bl 0x82cfcb28
	ctx.lr = 0x831597D4;
	sub_82CFCB28(ctx, base);
	// li r11,36
	ctx.r11.s64 = 36;
	// stw r3,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// addi r3,r10,-14396
	ctx.r3.s64 = ctx.r10.s64 + -14396;
	// bl 0x82cfcb28
	ctx.lr = 0x831597EC;
	sub_82CFCB28(ctx, base);
	// li r11,37
	ctx.r11.s64 = 37;
	// stw r3,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// addi r3,r10,-14428
	ctx.r3.s64 = ctx.r10.s64 + -14428;
	// bl 0x82cfcb28
	ctx.lr = 0x83159804;
	sub_82CFCB28(ctx, base);
	// li r11,38
	ctx.r11.s64 = 38;
	// stw r3,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// addi r3,r10,-14460
	ctx.r3.s64 = ctx.r10.s64 + -14460;
	// bl 0x82cfcb28
	ctx.lr = 0x8315981C;
	sub_82CFCB28(ctx, base);
	// li r11,39
	ctx.r11.s64 = 39;
	// stw r3,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// addi r3,r10,-14476
	ctx.r3.s64 = ctx.r10.s64 + -14476;
	// bl 0x82cfcb28
	ctx.lr = 0x83159834;
	sub_82CFCB28(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r3,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// addi r3,r10,-14500
	ctx.r3.s64 = ctx.r10.s64 + -14500;
	// bl 0x82cfcb28
	ctx.lr = 0x8315984C;
	sub_82CFCB28(ctx, base);
	// li r11,23
	ctx.r11.s64 = 23;
	// stw r3,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// addi r3,r10,-14524
	ctx.r3.s64 = ctx.r10.s64 + -14524;
	// bl 0x82cfcb28
	ctx.lr = 0x83159864;
	sub_82CFCB28(ctx, base);
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r3,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// addi r3,r10,-14540
	ctx.r3.s64 = ctx.r10.s64 + -14540;
	// bl 0x82cfcb28
	ctx.lr = 0x8315987C;
	sub_82CFCB28(ctx, base);
	// li r11,25
	ctx.r11.s64 = 25;
	// stw r3,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// addi r3,r10,-14552
	ctx.r3.s64 = ctx.r10.s64 + -14552;
	// bl 0x82cfcb28
	ctx.lr = 0x83159894;
	sub_82CFCB28(ctx, base);
	// li r11,26
	ctx.r11.s64 = 26;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831598B8"))) PPC_WEAK_FUNC(sub_831598B8);
PPC_FUNC_IMPL(__imp__sub_831598B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r4,r11,8744
	ctx.r4.s64 = ctx.r11.s64 + 8744;
	// addi r3,r10,7732
	ctx.r3.s64 = ctx.r10.s64 + 7732;
	// addi r5,r4,320
	ctx.r5.s64 = ctx.r4.s64 + 320;
	// bl 0x824d85b8
	ctx.lr = 0x831598DC;
	sub_824D85B8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-21752
	ctx.r3.s64 = ctx.r11.s64 + -21752;
	// bl 0x82a7e6b0
	ctx.lr = 0x831598E8;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831598F8"))) PPC_WEAK_FUNC(sub_831598F8);
PPC_FUNC_IMPL(__imp__sub_831598F8) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,8268
	ctx.r30.s64 = ctx.r31.s64 + 8268;
	// addi r4,r11,-13692
	ctx.r4.s64 = ctx.r11.s64 + -13692;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83159924;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-23424
	ctx.r3.s64 = ctx.r9.s64 + -23424;
	// lfs f0,30880(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30880);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,8268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8268, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x83159948;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159960"))) PPC_WEAK_FUNC(sub_83159960);
PPC_FUNC_IMPL(__imp__sub_83159960) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,9304
	ctx.r30.s64 = ctx.r31.s64 + 9304;
	// addi r4,r11,-13656
	ctx.r4.s64 = ctx.r11.s64 + -13656;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315998C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-23400
	ctx.r3.s64 = ctx.r9.s64 + -23400;
	// lfs f0,3296(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3296);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,9304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9304, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831599B0;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831599C8"))) PPC_WEAK_FUNC(sub_831599C8);
PPC_FUNC_IMPL(__imp__sub_831599C8) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,8412
	ctx.r30.s64 = ctx.r31.s64 + 8412;
	// addi r4,r11,-13620
	ctx.r4.s64 = ctx.r11.s64 + -13620;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831599F4;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-23376
	ctx.r3.s64 = ctx.r9.s64 + -23376;
	// lfs f0,3296(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3296);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,8412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8412, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x83159A18;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159A30"))) PPC_WEAK_FUNC(sub_83159A30);
PPC_FUNC_IMPL(__imp__sub_83159A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,7296
	ctx.r30.s64 = ctx.r31.s64 + 7296;
	// addi r4,r11,-13572
	ctx.r4.s64 = ctx.r11.s64 + -13572;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83159A5C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,33
	ctx.r11.s64 = 33;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,7296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7296, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-23352
	ctx.r3.s64 = ctx.r11.s64 + -23352;
	// bl 0x82a7e6b0
	ctx.lr = 0x83159A94;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159AB0"))) PPC_WEAK_FUNC(sub_83159AB0);
PPC_FUNC_IMPL(__imp__sub_83159AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,9516
	ctx.r30.s64 = ctx.r31.s64 + 9516;
	// addi r4,r11,-13540
	ctx.r4.s64 = ctx.r11.s64 + -13540;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83159ADC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,33
	ctx.r11.s64 = 33;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,9516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9516, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-23328
	ctx.r3.s64 = ctx.r11.s64 + -23328;
	// bl 0x82a7e6b0
	ctx.lr = 0x83159B14;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159B30"))) PPC_WEAK_FUNC(sub_83159B30);
PPC_FUNC_IMPL(__imp__sub_83159B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,9280
	ctx.r30.s64 = ctx.r31.s64 + 9280;
	// addi r4,r11,-13508
	ctx.r4.s64 = ctx.r11.s64 + -13508;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83159B5C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,33
	ctx.r11.s64 = 33;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,9280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9280, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-23304
	ctx.r3.s64 = ctx.r11.s64 + -23304;
	// bl 0x82a7e6b0
	ctx.lr = 0x83159B94;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159BB0"))) PPC_WEAK_FUNC(sub_83159BB0);
PPC_FUNC_IMPL(__imp__sub_83159BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,7420
	ctx.r30.s64 = ctx.r31.s64 + 7420;
	// addi r4,r11,-13476
	ctx.r4.s64 = ctx.r11.s64 + -13476;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83159BDC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,255
	ctx.r11.s64 = 255;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,7420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7420, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-23280
	ctx.r3.s64 = ctx.r11.s64 + -23280;
	// bl 0x82a7e6b0
	ctx.lr = 0x83159C14;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159C30"))) PPC_WEAK_FUNC(sub_83159C30);
PPC_FUNC_IMPL(__imp__sub_83159C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,7444
	ctx.r30.s64 = ctx.r31.s64 + 7444;
	// addi r4,r11,-13440
	ctx.r4.s64 = ctx.r11.s64 + -13440;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83159C5C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,218
	ctx.r11.s64 = 218;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,7444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7444, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-23256
	ctx.r3.s64 = ctx.r11.s64 + -23256;
	// bl 0x82a7e6b0
	ctx.lr = 0x83159C94;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159CB0"))) PPC_WEAK_FUNC(sub_83159CB0);
PPC_FUNC_IMPL(__imp__sub_83159CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,9388
	ctx.r30.s64 = ctx.r31.s64 + 9388;
	// addi r4,r11,-13408
	ctx.r4.s64 = ctx.r11.s64 + -13408;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83159CDC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,234
	ctx.r11.s64 = 234;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,9388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9388, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-23232
	ctx.r3.s64 = ctx.r11.s64 + -23232;
	// bl 0x82a7e6b0
	ctx.lr = 0x83159D14;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159D30"))) PPC_WEAK_FUNC(sub_83159D30);
PPC_FUNC_IMPL(__imp__sub_83159D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,8304
	ctx.r30.s64 = ctx.r31.s64 + 8304;
	// addi r4,r11,-13376
	ctx.r4.s64 = ctx.r11.s64 + -13376;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83159D5C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,19
	ctx.r11.s64 = 19;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,8304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8304, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-23208
	ctx.r3.s64 = ctx.r11.s64 + -23208;
	// bl 0x82a7e6b0
	ctx.lr = 0x83159D94;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159DB0"))) PPC_WEAK_FUNC(sub_83159DB0);
PPC_FUNC_IMPL(__imp__sub_83159DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,7200
	ctx.r30.s64 = ctx.r31.s64 + 7200;
	// addi r4,r11,-13344
	ctx.r4.s64 = ctx.r11.s64 + -13344;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83159DDC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,255
	ctx.r11.s64 = 255;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,7200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7200, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-23184
	ctx.r3.s64 = ctx.r11.s64 + -23184;
	// bl 0x82a7e6b0
	ctx.lr = 0x83159E14;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159E30"))) PPC_WEAK_FUNC(sub_83159E30);
PPC_FUNC_IMPL(__imp__sub_83159E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,8496
	ctx.r30.s64 = ctx.r31.s64 + 8496;
	// addi r4,r11,-13308
	ctx.r4.s64 = ctx.r11.s64 + -13308;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83159E5C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,33
	ctx.r11.s64 = 33;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,8496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8496, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-23160
	ctx.r3.s64 = ctx.r11.s64 + -23160;
	// bl 0x82a7e6b0
	ctx.lr = 0x83159E94;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159EB0"))) PPC_WEAK_FUNC(sub_83159EB0);
PPC_FUNC_IMPL(__imp__sub_83159EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,8352
	ctx.r30.s64 = ctx.r31.s64 + 8352;
	// addi r4,r11,-13280
	ctx.r4.s64 = ctx.r11.s64 + -13280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83159EDC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,33
	ctx.r11.s64 = 33;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,8352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8352, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-23136
	ctx.r3.s64 = ctx.r11.s64 + -23136;
	// bl 0x82a7e6b0
	ctx.lr = 0x83159F14;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159F30"))) PPC_WEAK_FUNC(sub_83159F30);
PPC_FUNC_IMPL(__imp__sub_83159F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,7820
	ctx.r30.s64 = ctx.r31.s64 + 7820;
	// addi r4,r11,-13252
	ctx.r4.s64 = ctx.r11.s64 + -13252;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83159F5C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,33
	ctx.r11.s64 = 33;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,7820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7820, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-23112
	ctx.r3.s64 = ctx.r11.s64 + -23112;
	// bl 0x82a7e6b0
	ctx.lr = 0x83159F94;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159FB0"))) PPC_WEAK_FUNC(sub_83159FB0);
PPC_FUNC_IMPL(__imp__sub_83159FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,7516
	ctx.r30.s64 = ctx.r31.s64 + 7516;
	// addi r4,r11,-13224
	ctx.r4.s64 = ctx.r11.s64 + -13224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83159FDC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,255
	ctx.r11.s64 = 255;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,7516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7516, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-23088
	ctx.r3.s64 = ctx.r11.s64 + -23088;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315A014;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A030"))) PPC_WEAK_FUNC(sub_8315A030);
PPC_FUNC_IMPL(__imp__sub_8315A030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,7636
	ctx.r30.s64 = ctx.r31.s64 + 7636;
	// addi r4,r11,-13192
	ctx.r4.s64 = ctx.r11.s64 + -13192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315A05C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,255
	ctx.r11.s64 = 255;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,7636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7636, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-23064
	ctx.r3.s64 = ctx.r11.s64 + -23064;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315A094;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A0B0"))) PPC_WEAK_FUNC(sub_8315A0B0);
PPC_FUNC_IMPL(__imp__sub_8315A0B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,7492
	ctx.r30.s64 = ctx.r31.s64 + 7492;
	// addi r4,r11,-13164
	ctx.r4.s64 = ctx.r11.s64 + -13164;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315A0DC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,220
	ctx.r11.s64 = 220;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,7492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7492, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-23040
	ctx.r3.s64 = ctx.r11.s64 + -23040;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315A114;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A130"))) PPC_WEAK_FUNC(sub_8315A130);
PPC_FUNC_IMPL(__imp__sub_8315A130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,7468
	ctx.r30.s64 = ctx.r31.s64 + 7468;
	// addi r4,r11,-13136
	ctx.r4.s64 = ctx.r11.s64 + -13136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315A15C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,72
	ctx.r11.s64 = 72;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,7468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7468, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-23016
	ctx.r3.s64 = ctx.r11.s64 + -23016;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315A194;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A1B0"))) PPC_WEAK_FUNC(sub_8315A1B0);
PPC_FUNC_IMPL(__imp__sub_8315A1B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,9316
	ctx.r30.s64 = ctx.r31.s64 + 9316;
	// addi r4,r11,-13108
	ctx.r4.s64 = ctx.r11.s64 + -13108;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315A1DC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,255
	ctx.r11.s64 = 255;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,9316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9316, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-22992
	ctx.r3.s64 = ctx.r11.s64 + -22992;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315A214;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A230"))) PPC_WEAK_FUNC(sub_8315A230);
PPC_FUNC_IMPL(__imp__sub_8315A230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,9340
	ctx.r30.s64 = ctx.r31.s64 + 9340;
	// addi r4,r11,-13076
	ctx.r4.s64 = ctx.r11.s64 + -13076;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315A25C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,33
	ctx.r11.s64 = 33;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,9340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9340, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-22968
	ctx.r3.s64 = ctx.r11.s64 + -22968;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315A294;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A2B0"))) PPC_WEAK_FUNC(sub_8315A2B0);
PPC_FUNC_IMPL(__imp__sub_8315A2B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,8388
	ctx.r30.s64 = ctx.r31.s64 + 8388;
	// addi r4,r11,-13048
	ctx.r4.s64 = ctx.r11.s64 + -13048;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315A2DC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,33
	ctx.r11.s64 = 33;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,8388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8388, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-22944
	ctx.r3.s64 = ctx.r11.s64 + -22944;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315A314;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A330"))) PPC_WEAK_FUNC(sub_8315A330);
PPC_FUNC_IMPL(__imp__sub_8315A330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,8216
	ctx.r30.s64 = ctx.r31.s64 + 8216;
	// addi r4,r11,-13020
	ctx.r4.s64 = ctx.r11.s64 + -13020;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315A35C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,33
	ctx.r11.s64 = 33;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,8216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8216, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-22920
	ctx.r3.s64 = ctx.r11.s64 + -22920;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315A394;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A3B0"))) PPC_WEAK_FUNC(sub_8315A3B0);
PPC_FUNC_IMPL(__imp__sub_8315A3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,7680
	ctx.r30.s64 = ctx.r31.s64 + 7680;
	// addi r4,r11,-12992
	ctx.r4.s64 = ctx.r11.s64 + -12992;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315A3DC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,255
	ctx.r11.s64 = 255;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,7680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7680, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-22896
	ctx.r3.s64 = ctx.r11.s64 + -22896;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315A414;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A430"))) PPC_WEAK_FUNC(sub_8315A430);
PPC_FUNC_IMPL(__imp__sub_8315A430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,9364
	ctx.r30.s64 = ctx.r31.s64 + 9364;
	// addi r4,r11,-12956
	ctx.r4.s64 = ctx.r11.s64 + -12956;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315A45C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,239
	ctx.r11.s64 = 239;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,9364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9364, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-22872
	ctx.r3.s64 = ctx.r11.s64 + -22872;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315A494;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A4B0"))) PPC_WEAK_FUNC(sub_8315A4B0);
PPC_FUNC_IMPL(__imp__sub_8315A4B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,9256
	ctx.r30.s64 = ctx.r31.s64 + 9256;
	// addi r4,r11,-12928
	ctx.r4.s64 = ctx.r11.s64 + -12928;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315A4DC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,37
	ctx.r11.s64 = 37;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,9256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9256, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-22848
	ctx.r3.s64 = ctx.r11.s64 + -22848;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315A514;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A530"))) PPC_WEAK_FUNC(sub_8315A530);
PPC_FUNC_IMPL(__imp__sub_8315A530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,7248
	ctx.r30.s64 = ctx.r31.s64 + 7248;
	// addi r4,r11,-12900
	ctx.r4.s64 = ctx.r11.s64 + -12900;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315A55C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,90
	ctx.r11.s64 = 90;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,7248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7248, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-22824
	ctx.r3.s64 = ctx.r11.s64 + -22824;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315A594;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A5B0"))) PPC_WEAK_FUNC(sub_8315A5B0);
PPC_FUNC_IMPL(__imp__sub_8315A5B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,7272
	ctx.r30.s64 = ctx.r31.s64 + 7272;
	// addi r4,r11,-12872
	ctx.r4.s64 = ctx.r11.s64 + -12872;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315A5DC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,255
	ctx.r11.s64 = 255;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,7272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7272, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-22800
	ctx.r3.s64 = ctx.r11.s64 + -22800;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315A614;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A630"))) PPC_WEAK_FUNC(sub_8315A630);
PPC_FUNC_IMPL(__imp__sub_8315A630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,7224
	ctx.r30.s64 = ctx.r31.s64 + 7224;
	// addi r4,r11,-12840
	ctx.r4.s64 = ctx.r11.s64 + -12840;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315A65C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,33
	ctx.r11.s64 = 33;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,7224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7224, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-22776
	ctx.r3.s64 = ctx.r11.s64 + -22776;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315A694;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A6B0"))) PPC_WEAK_FUNC(sub_8315A6B0);
PPC_FUNC_IMPL(__imp__sub_8315A6B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,8572
	ctx.r30.s64 = ctx.r31.s64 + 8572;
	// addi r4,r11,-12812
	ctx.r4.s64 = ctx.r11.s64 + -12812;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315A6DC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,33
	ctx.r11.s64 = 33;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,8572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8572, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-22752
	ctx.r3.s64 = ctx.r11.s64 + -22752;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315A714;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A730"))) PPC_WEAK_FUNC(sub_8315A730);
PPC_FUNC_IMPL(__imp__sub_8315A730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,8328
	ctx.r30.s64 = ctx.r31.s64 + 8328;
	// addi r4,r11,-12784
	ctx.r4.s64 = ctx.r11.s64 + -12784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315A75C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,33
	ctx.r11.s64 = 33;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,8328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8328, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-22728
	ctx.r3.s64 = ctx.r11.s64 + -22728;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315A794;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A7B0"))) PPC_WEAK_FUNC(sub_8315A7B0);
PPC_FUNC_IMPL(__imp__sub_8315A7B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,8424
	ctx.r30.s64 = ctx.r31.s64 + 8424;
	// addi r4,r11,-12756
	ctx.r4.s64 = ctx.r11.s64 + -12756;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315A7DC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,255
	ctx.r11.s64 = 255;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,8424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8424, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-22704
	ctx.r3.s64 = ctx.r11.s64 + -22704;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315A814;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A830"))) PPC_WEAK_FUNC(sub_8315A830);
PPC_FUNC_IMPL(__imp__sub_8315A830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,9064
	ctx.r30.s64 = ctx.r31.s64 + 9064;
	// addi r4,r11,-12720
	ctx.r4.s64 = ctx.r11.s64 + -12720;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315A85C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,31
	ctx.r11.s64 = 31;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,9064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9064, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-22680
	ctx.r3.s64 = ctx.r11.s64 + -22680;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315A894;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A8B0"))) PPC_WEAK_FUNC(sub_8315A8B0);
PPC_FUNC_IMPL(__imp__sub_8315A8B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,8544
	ctx.r30.s64 = ctx.r31.s64 + 8544;
	// addi r4,r11,-12692
	ctx.r4.s64 = ctx.r11.s64 + -12692;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315A8DC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,192
	ctx.r11.s64 = 192;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,8544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8544, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-22656
	ctx.r3.s64 = ctx.r11.s64 + -22656;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315A914;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A930"))) PPC_WEAK_FUNC(sub_8315A930);
PPC_FUNC_IMPL(__imp__sub_8315A930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,9232
	ctx.r30.s64 = ctx.r31.s64 + 9232;
	// addi r4,r11,-12664
	ctx.r4.s64 = ctx.r11.s64 + -12664;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315A95C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,255
	ctx.r11.s64 = 255;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,9232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9232, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-22632
	ctx.r3.s64 = ctx.r11.s64 + -22632;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315A994;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A9B0"))) PPC_WEAK_FUNC(sub_8315A9B0);
PPC_FUNC_IMPL(__imp__sub_8315A9B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,8620
	ctx.r30.s64 = ctx.r31.s64 + 8620;
	// addi r4,r11,-12636
	ctx.r4.s64 = ctx.r11.s64 + -12636;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315A9DC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,255
	ctx.r11.s64 = 255;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,8620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8620, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-22608
	ctx.r3.s64 = ctx.r11.s64 + -22608;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315AA14;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315AA30"))) PPC_WEAK_FUNC(sub_8315AA30);
PPC_FUNC_IMPL(__imp__sub_8315AA30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,7772
	ctx.r30.s64 = ctx.r31.s64 + 7772;
	// addi r4,r11,-12604
	ctx.r4.s64 = ctx.r11.s64 + -12604;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315AA5C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,33
	ctx.r11.s64 = 33;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,7772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7772, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-22584
	ctx.r3.s64 = ctx.r11.s64 + -22584;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315AA94;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315AAB0"))) PPC_WEAK_FUNC(sub_8315AAB0);
PPC_FUNC_IMPL(__imp__sub_8315AAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,7748
	ctx.r30.s64 = ctx.r31.s64 + 7748;
	// addi r4,r11,-12576
	ctx.r4.s64 = ctx.r11.s64 + -12576;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315AADC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,33
	ctx.r11.s64 = 33;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,7748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7748, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-22560
	ctx.r3.s64 = ctx.r11.s64 + -22560;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315AB14;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315AB30"))) PPC_WEAK_FUNC(sub_8315AB30);
PPC_FUNC_IMPL(__imp__sub_8315AB30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,7888
	ctx.r30.s64 = ctx.r31.s64 + 7888;
	// addi r4,r11,-12548
	ctx.r4.s64 = ctx.r11.s64 + -12548;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315AB5C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,33
	ctx.r11.s64 = 33;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,7888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7888, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-22536
	ctx.r3.s64 = ctx.r11.s64 + -22536;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315AB94;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315ABB0"))) PPC_WEAK_FUNC(sub_8315ABB0);
PPC_FUNC_IMPL(__imp__sub_8315ABB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,7796
	ctx.r30.s64 = ctx.r31.s64 + 7796;
	// addi r4,r11,-12520
	ctx.r4.s64 = ctx.r11.s64 + -12520;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315ABDC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,255
	ctx.r11.s64 = 255;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,7796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7796, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-22512
	ctx.r3.s64 = ctx.r11.s64 + -22512;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315AC14;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315AC30"))) PPC_WEAK_FUNC(sub_8315AC30);
PPC_FUNC_IMPL(__imp__sub_8315AC30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,7612
	ctx.r30.s64 = ctx.r31.s64 + 7612;
	// addi r4,r11,-12484
	ctx.r4.s64 = ctx.r11.s64 + -12484;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315AC5C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,233
	ctx.r11.s64 = 233;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,7612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7612, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-22488
	ctx.r3.s64 = ctx.r11.s64 + -22488;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315AC94;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315ACB0"))) PPC_WEAK_FUNC(sub_8315ACB0);
PPC_FUNC_IMPL(__imp__sub_8315ACB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,7844
	ctx.r30.s64 = ctx.r31.s64 + 7844;
	// addi r4,r11,-12456
	ctx.r4.s64 = ctx.r11.s64 + -12456;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315ACDC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,233
	ctx.r11.s64 = 233;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,7844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7844, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-22464
	ctx.r3.s64 = ctx.r11.s64 + -22464;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315AD14;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315AD30"))) PPC_WEAK_FUNC(sub_8315AD30);
PPC_FUNC_IMPL(__imp__sub_8315AD30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,7348
	ctx.r30.s64 = ctx.r31.s64 + 7348;
	// addi r4,r11,-12428
	ctx.r4.s64 = ctx.r11.s64 + -12428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315AD5C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,233
	ctx.r11.s64 = 233;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,7348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7348, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-22440
	ctx.r3.s64 = ctx.r11.s64 + -22440;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315AD94;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315ADB0"))) PPC_WEAK_FUNC(sub_8315ADB0);
PPC_FUNC_IMPL(__imp__sub_8315ADB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,8448
	ctx.r30.s64 = ctx.r31.s64 + 8448;
	// addi r4,r11,-12400
	ctx.r4.s64 = ctx.r11.s64 + -12400;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315ADDC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,255
	ctx.r11.s64 = 255;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,8448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8448, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-22416
	ctx.r3.s64 = ctx.r11.s64 + -22416;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315AE14;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315AE30"))) PPC_WEAK_FUNC(sub_8315AE30);
PPC_FUNC_IMPL(__imp__sub_8315AE30) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,8596
	ctx.r30.s64 = ctx.r31.s64 + 8596;
	// addi r4,r11,-12364
	ctx.r4.s64 = ctx.r11.s64 + -12364;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315AE5C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3320(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3320);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-22392
	ctx.r3.s64 = ctx.r10.s64 + -22392;
	// lfs f11,3328(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3328);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,8596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8596, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315AEA4;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315AEC0"))) PPC_WEAK_FUNC(sub_8315AEC0);
PPC_FUNC_IMPL(__imp__sub_8315AEC0) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,7912
	ctx.r30.s64 = ctx.r31.s64 + 7912;
	// addi r4,r11,-12320
	ctx.r4.s64 = ctx.r11.s64 + -12320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315AEEC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3296(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3296);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-22368
	ctx.r3.s64 = ctx.r10.s64 + -22368;
	// lfs f11,19696(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 19696);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,7912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7912, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315AF34;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315AF50"))) PPC_WEAK_FUNC(sub_8315AF50);
PPC_FUNC_IMPL(__imp__sub_8315AF50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r4,r11,-12280
	ctx.r4.s64 = ctx.r11.s64 + -12280;
	// addi r3,r10,7540
	ctx.r3.s64 = ctx.r10.s64 + 7540;
	// bl 0x82450f48
	ctx.lr = 0x8315AF70;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-22048
	ctx.r3.s64 = ctx.r11.s64 + -22048;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315AF7C;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315AF90"))) PPC_WEAK_FUNC(sub_8315AF90);
PPC_FUNC_IMPL(__imp__sub_8315AF90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r4,r11,-12256
	ctx.r4.s64 = ctx.r11.s64 + -12256;
	// addi r3,r10,8176
	ctx.r3.s64 = ctx.r10.s64 + 8176;
	// bl 0x82450f48
	ctx.lr = 0x8315AFB0;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-22024
	ctx.r3.s64 = ctx.r11.s64 + -22024;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315AFBC;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315AFD0"))) PPC_WEAK_FUNC(sub_8315AFD0);
PPC_FUNC_IMPL(__imp__sub_8315AFD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r11,7952
	ctx.r31.s64 = ctx.r11.s64 + 7952;
	// addi r4,r10,17984
	ctx.r4.s64 = ctx.r10.s64 + 17984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450f48
	ctx.lr = 0x8315AFF8;
	sub_82450F48(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// addi r4,r11,-12196
	ctx.r4.s64 = ctx.r11.s64 + -12196;
	// bl 0x82450f48
	ctx.lr = 0x8315B008;
	sub_82450F48(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// addi r4,r11,-12200
	ctx.r4.s64 = ctx.r11.s64 + -12200;
	// bl 0x82450f48
	ctx.lr = 0x8315B018;
	sub_82450F48(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,-12204
	ctx.r4.s64 = ctx.r11.s64 + -12204;
	// bl 0x82450f48
	ctx.lr = 0x8315B028;
	sub_82450F48(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r4,r11,-12208
	ctx.r4.s64 = ctx.r11.s64 + -12208;
	// bl 0x82450f48
	ctx.lr = 0x8315B038;
	sub_82450F48(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// addi r4,r11,-12212
	ctx.r4.s64 = ctx.r11.s64 + -12212;
	// bl 0x82450f48
	ctx.lr = 0x8315B048;
	sub_82450F48(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// addi r4,r11,-12216
	ctx.r4.s64 = ctx.r11.s64 + -12216;
	// bl 0x82450f48
	ctx.lr = 0x8315B058;
	sub_82450F48(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// addi r4,r11,-12220
	ctx.r4.s64 = ctx.r11.s64 + -12220;
	// bl 0x82450f48
	ctx.lr = 0x8315B068;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-22000
	ctx.r3.s64 = ctx.r11.s64 + -22000;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315B074;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B088"))) PPC_WEAK_FUNC(sub_8315B088);
PPC_FUNC_IMPL(__imp__sub_8315B088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,8376
	ctx.r30.s64 = ctx.r31.s64 + 8376;
	// addi r5,r11,-12192
	ctx.r5.s64 = ctx.r11.s64 + -12192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82c07478
	ctx.lr = 0x8315B0B8;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,30984
	ctx.r10.s64 = ctx.r10.s64 + 30984;
	// stb r11,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r11.u8);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,8376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8376, ctx.r10.u32);
	// addi r3,r11,-22344
	ctx.r3.s64 = ctx.r11.s64 + -22344;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315B0D8;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B0F0"))) PPC_WEAK_FUNC(sub_8315B0F0);
PPC_FUNC_IMPL(__imp__sub_8315B0F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,9444
	ctx.r30.s64 = ctx.r31.s64 + 9444;
	// addi r4,r11,-12144
	ctx.r4.s64 = ctx.r11.s64 + -12144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315B11C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r10,9444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9444, ctx.r10.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-22320
	ctx.r3.s64 = ctx.r11.s64 + -22320;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315B150;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B168"))) PPC_WEAK_FUNC(sub_8315B168);
PPC_FUNC_IMPL(__imp__sub_8315B168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,8644
	ctx.r30.s64 = ctx.r31.s64 + 8644;
	// addi r4,r11,-12100
	ctx.r4.s64 = ctx.r11.s64 + -12100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315B194;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r10,8644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8644, ctx.r10.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-22296
	ctx.r3.s64 = ctx.r11.s64 + -22296;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315B1C8;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B1E0"))) PPC_WEAK_FUNC(sub_8315B1E0);
PPC_FUNC_IMPL(__imp__sub_8315B1E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,8520
	ctx.r30.s64 = ctx.r31.s64 + 8520;
	// addi r4,r11,-12052
	ctx.r4.s64 = ctx.r11.s64 + -12052;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315B20C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,8520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8520, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-22272
	ctx.r3.s64 = ctx.r11.s64 + -22272;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315B244;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B260"))) PPC_WEAK_FUNC(sub_8315B260);
PPC_FUNC_IMPL(__imp__sub_8315B260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,9492
	ctx.r30.s64 = ctx.r31.s64 + 9492;
	// addi r4,r11,-12008
	ctx.r4.s64 = ctx.r11.s64 + -12008;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315B28C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r10,9492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9492, ctx.r10.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-22248
	ctx.r3.s64 = ctx.r11.s64 + -22248;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315B2C0;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B2D8"))) PPC_WEAK_FUNC(sub_8315B2D8);
PPC_FUNC_IMPL(__imp__sub_8315B2D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,9468
	ctx.r30.s64 = ctx.r31.s64 + 9468;
	// addi r4,r11,-11968
	ctx.r4.s64 = ctx.r11.s64 + -11968;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315B304;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r10,9468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9468, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-22224
	ctx.r3.s64 = ctx.r11.s64 + -22224;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315B338;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B350"))) PPC_WEAK_FUNC(sub_8315B350);
PPC_FUNC_IMPL(__imp__sub_8315B350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,8280
	ctx.r30.s64 = ctx.r31.s64 + 8280;
	// addi r4,r11,-11924
	ctx.r4.s64 = ctx.r11.s64 + -11924;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315B37C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r10,8280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8280, ctx.r10.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-22200
	ctx.r3.s64 = ctx.r11.s64 + -22200;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315B3B0;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B3C8"))) PPC_WEAK_FUNC(sub_8315B3C8);
PPC_FUNC_IMPL(__imp__sub_8315B3C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,8204
	ctx.r30.s64 = ctx.r31.s64 + 8204;
	// addi r5,r11,-11876
	ctx.r5.s64 = ctx.r11.s64 + -11876;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82c07478
	ctx.lr = 0x8315B3F8;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,30984
	ctx.r10.s64 = ctx.r10.s64 + 30984;
	// stb r11,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r11.u8);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,8204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8204, ctx.r10.u32);
	// addi r3,r11,-22176
	ctx.r3.s64 = ctx.r11.s64 + -22176;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315B418;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B430"))) PPC_WEAK_FUNC(sub_8315B430);
PPC_FUNC_IMPL(__imp__sub_8315B430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-22152
	ctx.r3.s64 = ctx.r11.s64 + -22152;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315B440"))) PPC_WEAK_FUNC(sub_8315B440);
PPC_FUNC_IMPL(__imp__sub_8315B440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,9808
	ctx.r31.s64 = ctx.r11.s64 + 9808;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x8315B464;
	sub_824683B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r3,r10,-21768
	ctx.r3.s64 = ctx.r10.s64 + -21768;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315B48C;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B4A0"))) PPC_WEAK_FUNC(sub_8315B4A0);
PPC_FUNC_IMPL(__imp__sub_8315B4A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-22144
	ctx.r3.s64 = ctx.r11.s64 + -22144;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315B4B0"))) PPC_WEAK_FUNC(sub_8315B4B0);
PPC_FUNC_IMPL(__imp__sub_8315B4B0) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,8472
	ctx.r30.s64 = ctx.r31.s64 + 8472;
	// addi r4,r11,-11828
	ctx.r4.s64 = ctx.r11.s64 + -11828;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315B4DC;
	sub_82C07410(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,-11832(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11832);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-22136
	ctx.r3.s64 = ctx.r10.s64 + -22136;
	// lfs f11,3156(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3156);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,8472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8472, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315B524;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B540"))) PPC_WEAK_FUNC(sub_8315B540);
PPC_FUNC_IMPL(__imp__sub_8315B540) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,7140
	ctx.r30.s64 = ctx.r31.s64 + 7140;
	// addi r4,r11,-11784
	ctx.r4.s64 = ctx.r11.s64 + -11784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315B56C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3412(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3412);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-22112
	ctx.r3.s64 = ctx.r10.s64 + -22112;
	// lfs f11,3156(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3156);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,7140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7140, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315B5B4;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B5D0"))) PPC_WEAK_FUNC(sub_8315B5D0);
PPC_FUNC_IMPL(__imp__sub_8315B5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r4,r11,-11740
	ctx.r4.s64 = ctx.r11.s64 + -11740;
	// addi r3,r10,7392
	ctx.r3.s64 = ctx.r10.s64 + 7392;
	// bl 0x82450f48
	ctx.lr = 0x8315B5F0;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-21912
	ctx.r3.s64 = ctx.r11.s64 + -21912;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315B5FC;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B610"))) PPC_WEAK_FUNC(sub_8315B610);
PPC_FUNC_IMPL(__imp__sub_8315B610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r4,r11,-11692
	ctx.r4.s64 = ctx.r11.s64 + -11692;
	// addi r3,r10,9416
	ctx.r3.s64 = ctx.r10.s64 + 9416;
	// bl 0x82450f48
	ctx.lr = 0x8315B630;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-21888
	ctx.r3.s64 = ctx.r11.s64 + -21888;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315B63C;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B650"))) PPC_WEAK_FUNC(sub_8315B650);
PPC_FUNC_IMPL(__imp__sub_8315B650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r4,r11,-11660
	ctx.r4.s64 = ctx.r11.s64 + -11660;
	// addi r3,r10,7112
	ctx.r3.s64 = ctx.r10.s64 + 7112;
	// bl 0x82450f48
	ctx.lr = 0x8315B670;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-21864
	ctx.r3.s64 = ctx.r11.s64 + -21864;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315B67C;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B690"))) PPC_WEAK_FUNC(sub_8315B690);
PPC_FUNC_IMPL(__imp__sub_8315B690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r4,r11,-11628
	ctx.r4.s64 = ctx.r11.s64 + -11628;
	// addi r3,r10,7320
	ctx.r3.s64 = ctx.r10.s64 + 7320;
	// bl 0x82450f48
	ctx.lr = 0x8315B6B0;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-21840
	ctx.r3.s64 = ctx.r11.s64 + -21840;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315B6BC;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B6D0"))) PPC_WEAK_FUNC(sub_8315B6D0);
PPC_FUNC_IMPL(__imp__sub_8315B6D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r4,r11,-11584
	ctx.r4.s64 = ctx.r11.s64 + -11584;
	// addi r3,r10,7584
	ctx.r3.s64 = ctx.r10.s64 + 7584;
	// bl 0x82450f48
	ctx.lr = 0x8315B6F0;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-21816
	ctx.r3.s64 = ctx.r11.s64 + -21816;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315B6FC;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B710"))) PPC_WEAK_FUNC(sub_8315B710);
PPC_FUNC_IMPL(__imp__sub_8315B710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r4,r11,-11556
	ctx.r4.s64 = ctx.r11.s64 + -11556;
	// addi r3,r10,8240
	ctx.r3.s64 = ctx.r10.s64 + 8240;
	// bl 0x82450f48
	ctx.lr = 0x8315B730;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-21792
	ctx.r3.s64 = ctx.r11.s64 + -21792;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315B73C;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B750"))) PPC_WEAK_FUNC(sub_8315B750);
PPC_FUNC_IMPL(__imp__sub_8315B750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-21312
	ctx.r3.s64 = ctx.r11.s64 + -21312;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315B760"))) PPC_WEAK_FUNC(sub_8315B760);
PPC_FUNC_IMPL(__imp__sub_8315B760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,10192
	ctx.r9.s64 = ctx.r11.s64 + 10192;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B790"))) PPC_WEAK_FUNC(sub_8315B790);
PPC_FUNC_IMPL(__imp__sub_8315B790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,9984
	ctx.r9.s64 = ctx.r11.s64 + 9984;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B7C0"))) PPC_WEAK_FUNC(sub_8315B7C0);
PPC_FUNC_IMPL(__imp__sub_8315B7C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,9904
	ctx.r9.s64 = ctx.r11.s64 + 9904;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B7F0"))) PPC_WEAK_FUNC(sub_8315B7F0);
PPC_FUNC_IMPL(__imp__sub_8315B7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,9968
	ctx.r9.s64 = ctx.r11.s64 + 9968;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r8,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B820"))) PPC_WEAK_FUNC(sub_8315B820);
PPC_FUNC_IMPL(__imp__sub_8315B820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,9952
	ctx.r10.s64 = ctx.r10.s64 + 9952;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B840"))) PPC_WEAK_FUNC(sub_8315B840);
PPC_FUNC_IMPL(__imp__sub_8315B840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,9888
	ctx.r10.s64 = ctx.r10.s64 + 9888;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B860"))) PPC_WEAK_FUNC(sub_8315B860);
PPC_FUNC_IMPL(__imp__sub_8315B860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,10112
	ctx.r10.s64 = ctx.r10.s64 + 10112;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B880"))) PPC_WEAK_FUNC(sub_8315B880);
PPC_FUNC_IMPL(__imp__sub_8315B880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,10464
	ctx.r3.s64 = ctx.r11.s64 + 10464;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315B890"))) PPC_WEAK_FUNC(sub_8315B890);
PPC_FUNC_IMPL(__imp__sub_8315B890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-21680
	ctx.r3.s64 = ctx.r11.s64 + -21680;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315B8A0"))) PPC_WEAK_FUNC(sub_8315B8A0);
PPC_FUNC_IMPL(__imp__sub_8315B8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-21672
	ctx.r3.s64 = ctx.r11.s64 + -21672;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315B8B0"))) PPC_WEAK_FUNC(sub_8315B8B0);
PPC_FUNC_IMPL(__imp__sub_8315B8B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-21664
	ctx.r3.s64 = ctx.r11.s64 + -21664;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315B8C0"))) PPC_WEAK_FUNC(sub_8315B8C0);
PPC_FUNC_IMPL(__imp__sub_8315B8C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,10236
	ctx.r3.s64 = ctx.r11.s64 + 10236;
	// bl 0x82c1de18
	ctx.lr = 0x8315B8D8;
	sub_82C1DE18(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-20968
	ctx.r3.s64 = ctx.r11.s64 + -20968;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315B8E4;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B8F8"))) PPC_WEAK_FUNC(sub_8315B8F8);
PPC_FUNC_IMPL(__imp__sub_8315B8F8) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,10088
	ctx.r30.s64 = ctx.r31.s64 + 10088;
	// addi r4,r11,17804
	ctx.r4.s64 = ctx.r11.s64 + 17804;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315B924;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3264(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3264);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-21656
	ctx.r3.s64 = ctx.r10.s64 + -21656;
	// lfs f11,17800(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 17800);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,10088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10088, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315B96C;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B988"))) PPC_WEAK_FUNC(sub_8315B988);
PPC_FUNC_IMPL(__imp__sub_8315B988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-21632
	ctx.r3.s64 = ctx.r11.s64 + -21632;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315B998"))) PPC_WEAK_FUNC(sub_8315B998);
PPC_FUNC_IMPL(__imp__sub_8315B998) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// lis r8,-31954
	ctx.r8.s64 = -2094137344;
	// lwz r11,6104(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6104);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,6104(r9)
	PPC_STORE_U32(ctx.r9.u32 + 6104, ctx.r10.u32);
	// stw r11,19096(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19096, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B9B8"))) PPC_WEAK_FUNC(sub_8315B9B8);
PPC_FUNC_IMPL(__imp__sub_8315B9B8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// lis r8,-31954
	ctx.r8.s64 = -2094137344;
	// lwz r11,6104(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6104);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,6104(r9)
	PPC_STORE_U32(ctx.r9.u32 + 6104, ctx.r10.u32);
	// stw r11,19104(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B9D8"))) PPC_WEAK_FUNC(sub_8315B9D8);
PPC_FUNC_IMPL(__imp__sub_8315B9D8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// lis r8,-31954
	ctx.r8.s64 = -2094137344;
	// lwz r11,6104(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6104);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,6104(r9)
	PPC_STORE_U32(ctx.r9.u32 + 6104, ctx.r10.u32);
	// stw r11,19080(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19080, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B9F8"))) PPC_WEAK_FUNC(sub_8315B9F8);
PPC_FUNC_IMPL(__imp__sub_8315B9F8) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,10340
	ctx.r30.s64 = ctx.r31.s64 + 10340;
	// addi r4,r11,17836
	ctx.r4.s64 = ctx.r11.s64 + 17836;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315BA24;
	sub_82C07410(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-21624
	ctx.r3.s64 = ctx.r9.s64 + -21624;
	// lfs f0,17832(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17832);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,10340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10340, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315BA48;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315BA60"))) PPC_WEAK_FUNC(sub_8315BA60);
PPC_FUNC_IMPL(__imp__sub_8315BA60) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,10180
	ctx.r30.s64 = ctx.r31.s64 + 10180;
	// addi r4,r11,17864
	ctx.r4.s64 = ctx.r11.s64 + 17864;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315BA8C;
	sub_82C07410(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-21600
	ctx.r3.s64 = ctx.r9.s64 + -21600;
	// lfs f0,17832(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17832);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,10180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10180, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315BAB0;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315BAC8"))) PPC_WEAK_FUNC(sub_8315BAC8);
PPC_FUNC_IMPL(__imp__sub_8315BAC8) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,10316
	ctx.r30.s64 = ctx.r31.s64 + 10316;
	// addi r4,r11,17892
	ctx.r4.s64 = ctx.r11.s64 + 17892;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315BAF4;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-21576
	ctx.r3.s64 = ctx.r9.s64 + -21576;
	// lfs f0,26564(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26564);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,10316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10316, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315BB18;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315BB30"))) PPC_WEAK_FUNC(sub_8315BB30);
PPC_FUNC_IMPL(__imp__sub_8315BB30) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,10452
	ctx.r30.s64 = ctx.r31.s64 + 10452;
	// addi r4,r11,17920
	ctx.r4.s64 = ctx.r11.s64 + 17920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315BB5C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-21552
	ctx.r3.s64 = ctx.r9.s64 + -21552;
	// lfs f0,3488(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3488);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,10452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10452, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315BB80;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315BB98"))) PPC_WEAK_FUNC(sub_8315BB98);
PPC_FUNC_IMPL(__imp__sub_8315BB98) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,10328
	ctx.r30.s64 = ctx.r31.s64 + 10328;
	// addi r4,r11,17948
	ctx.r4.s64 = ctx.r11.s64 + 17948;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315BBC4;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-21528
	ctx.r3.s64 = ctx.r9.s64 + -21528;
	// lfs f0,19508(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19508);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,10328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10328, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315BBE8;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315BC00"))) PPC_WEAK_FUNC(sub_8315BC00);
PPC_FUNC_IMPL(__imp__sub_8315BC00) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,10128
	ctx.r30.s64 = ctx.r31.s64 + 10128;
	// addi r4,r11,17984
	ctx.r4.s64 = ctx.r11.s64 + 17984;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315BC2C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-21504
	ctx.r3.s64 = ctx.r9.s64 + -21504;
	// lfs f0,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,10128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10128, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315BC50;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315BC68"))) PPC_WEAK_FUNC(sub_8315BC68);
PPC_FUNC_IMPL(__imp__sub_8315BC68) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,10168
	ctx.r30.s64 = ctx.r31.s64 + 10168;
	// addi r4,r11,18016
	ctx.r4.s64 = ctx.r11.s64 + 18016;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315BC94;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-21480
	ctx.r3.s64 = ctx.r9.s64 + -21480;
	// lfs f0,3400(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3400);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,10168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10168, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315BCB8;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315BCD0"))) PPC_WEAK_FUNC(sub_8315BCD0);
PPC_FUNC_IMPL(__imp__sub_8315BCD0) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,9936
	ctx.r30.s64 = ctx.r31.s64 + 9936;
	// addi r4,r11,18040
	ctx.r4.s64 = ctx.r11.s64 + 18040;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315BCFC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-21456
	ctx.r3.s64 = ctx.r9.s64 + -21456;
	// lfs f0,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,9936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9936, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315BD20;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315BD38"))) PPC_WEAK_FUNC(sub_8315BD38);
PPC_FUNC_IMPL(__imp__sub_8315BD38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,9924
	ctx.r30.s64 = ctx.r31.s64 + 9924;
	// addi r4,r11,18068
	ctx.r4.s64 = ctx.r11.s64 + 18068;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315BD64;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r10,r10,25528
	ctx.r10.s64 = ctx.r10.s64 + 25528;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,9924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9924, ctx.r10.u32);
	// addi r3,r11,-21432
	ctx.r3.s64 = ctx.r11.s64 + -21432;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315BD84;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315BDA0"))) PPC_WEAK_FUNC(sub_8315BDA0);
PPC_FUNC_IMPL(__imp__sub_8315BDA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,10076
	ctx.r30.s64 = ctx.r31.s64 + 10076;
	// addi r4,r11,18096
	ctx.r4.s64 = ctx.r11.s64 + 18096;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315BDCC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,10000
	ctx.r11.s64 = 10000;
	// addi r10,r10,25528
	ctx.r10.s64 = ctx.r10.s64 + 25528;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,10076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10076, ctx.r10.u32);
	// addi r3,r11,-21408
	ctx.r3.s64 = ctx.r11.s64 + -21408;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315BDEC;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315BE08"))) PPC_WEAK_FUNC(sub_8315BE08);
PPC_FUNC_IMPL(__imp__sub_8315BE08) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,10380
	ctx.r30.s64 = ctx.r31.s64 + 10380;
	// addi r4,r11,18116
	ctx.r4.s64 = ctx.r11.s64 + 18116;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315BE34;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-21384
	ctx.r3.s64 = ctx.r9.s64 + -21384;
	// lfs f0,3492(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3492);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,10380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10380, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315BE58;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315BE70"))) PPC_WEAK_FUNC(sub_8315BE70);
PPC_FUNC_IMPL(__imp__sub_8315BE70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,9920
	ctx.r3.s64 = ctx.r11.s64 + 9920;
	// b 0x824ece80
	sub_824ECE80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315BE80"))) PPC_WEAK_FUNC(sub_8315BE80);
PPC_FUNC_IMPL(__imp__sub_8315BE80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,10028
	ctx.r3.s64 = ctx.r11.s64 + 10028;
	// bl 0x8250d260
	ctx.lr = 0x8315BE98;
	sub_8250D260(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-20952
	ctx.r3.s64 = ctx.r11.s64 + -20952;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315BEA4;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315BEB8"))) PPC_WEAK_FUNC(sub_8315BEB8);
PPC_FUNC_IMPL(__imp__sub_8315BEB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r4,r11,18148
	ctx.r4.s64 = ctx.r11.s64 + 18148;
	// addi r3,r10,9860
	ctx.r3.s64 = ctx.r10.s64 + 9860;
	// bl 0x82450f48
	ctx.lr = 0x8315BED8;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-21264
	ctx.r3.s64 = ctx.r11.s64 + -21264;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315BEE4;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315BEF8"))) PPC_WEAK_FUNC(sub_8315BEF8);
PPC_FUNC_IMPL(__imp__sub_8315BEF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r4,r11,18148
	ctx.r4.s64 = ctx.r11.s64 + 18148;
	// addi r3,r10,10208
	ctx.r3.s64 = ctx.r10.s64 + 10208;
	// bl 0x82450f48
	ctx.lr = 0x8315BF18;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-21240
	ctx.r3.s64 = ctx.r11.s64 + -21240;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315BF24;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315BF38"))) PPC_WEAK_FUNC(sub_8315BF38);
PPC_FUNC_IMPL(__imp__sub_8315BF38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r4,r11,18164
	ctx.r4.s64 = ctx.r11.s64 + 18164;
	// addi r3,r10,10352
	ctx.r3.s64 = ctx.r10.s64 + 10352;
	// bl 0x82450f48
	ctx.lr = 0x8315BF58;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-21216
	ctx.r3.s64 = ctx.r11.s64 + -21216;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315BF64;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315BF78"))) PPC_WEAK_FUNC(sub_8315BF78);
PPC_FUNC_IMPL(__imp__sub_8315BF78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r4,r11,-16712
	ctx.r4.s64 = ctx.r11.s64 + -16712;
	// addi r3,r10,10424
	ctx.r3.s64 = ctx.r10.s64 + 10424;
	// bl 0x82450f48
	ctx.lr = 0x8315BF98;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-21192
	ctx.r3.s64 = ctx.r11.s64 + -21192;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315BFA4;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315BFB8"))) PPC_WEAK_FUNC(sub_8315BFB8);
PPC_FUNC_IMPL(__imp__sub_8315BFB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r4,r11,18180
	ctx.r4.s64 = ctx.r11.s64 + 18180;
	// addi r3,r10,10000
	ctx.r3.s64 = ctx.r10.s64 + 10000;
	// bl 0x82450f48
	ctx.lr = 0x8315BFD8;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-21168
	ctx.r3.s64 = ctx.r11.s64 + -21168;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315BFE4;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315BFF8"))) PPC_WEAK_FUNC(sub_8315BFF8);
PPC_FUNC_IMPL(__imp__sub_8315BFF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r4,r11,18192
	ctx.r4.s64 = ctx.r11.s64 + 18192;
	// addi r3,r10,10048
	ctx.r3.s64 = ctx.r10.s64 + 10048;
	// bl 0x82450f48
	ctx.lr = 0x8315C018;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-21144
	ctx.r3.s64 = ctx.r11.s64 + -21144;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315C024;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315C038"))) PPC_WEAK_FUNC(sub_8315C038);
PPC_FUNC_IMPL(__imp__sub_8315C038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r4,r11,18200
	ctx.r4.s64 = ctx.r11.s64 + 18200;
	// addi r3,r10,10140
	ctx.r3.s64 = ctx.r10.s64 + 10140;
	// bl 0x82450f48
	ctx.lr = 0x8315C058;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-21120
	ctx.r3.s64 = ctx.r11.s64 + -21120;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315C064;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315C078"))) PPC_WEAK_FUNC(sub_8315C078);
PPC_FUNC_IMPL(__imp__sub_8315C078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r4,r11,18216
	ctx.r4.s64 = ctx.r11.s64 + 18216;
	// addi r3,r10,10536
	ctx.r3.s64 = ctx.r10.s64 + 10536;
	// bl 0x82450f48
	ctx.lr = 0x8315C098;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-21096
	ctx.r3.s64 = ctx.r11.s64 + -21096;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315C0A4;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315C0B8"))) PPC_WEAK_FUNC(sub_8315C0B8);
PPC_FUNC_IMPL(__imp__sub_8315C0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r4,r11,18244
	ctx.r4.s64 = ctx.r11.s64 + 18244;
	// addi r3,r10,10396
	ctx.r3.s64 = ctx.r10.s64 + 10396;
	// bl 0x82450f48
	ctx.lr = 0x8315C0D8;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-21072
	ctx.r3.s64 = ctx.r11.s64 + -21072;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315C0E4;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315C0F8"))) PPC_WEAK_FUNC(sub_8315C0F8);
PPC_FUNC_IMPL(__imp__sub_8315C0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r11,10208
	ctx.r10.s64 = ctx.r11.s64 + 10208;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r11,r11,10372
	ctx.r11.s64 = ctx.r11.s64 + 10372;
	// blt cr6,0x8315c118
	if (ctx.cr6.lt) goto loc_8315C118;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8315C118:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r10,r10,10352
	ctx.r10.s64 = ctx.r10.s64 + 10352;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x8315c134
	if (ctx.cr6.lt) goto loc_8315C134;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8315C134:
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r10,r10,10140
	ctx.r10.s64 = ctx.r10.s64 + 10140;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x8315c150
	if (ctx.cr6.lt) goto loc_8315C150;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8315C150:
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r10,r10,10396
	ctx.r10.s64 = ctx.r10.s64 + 10396;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x8315c16c
	if (ctx.cr6.lt) goto loc_8315C16C;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8315C16C:
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315C178"))) PPC_WEAK_FUNC(sub_8315C178);
PPC_FUNC_IMPL(__imp__sub_8315C178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-21280
	ctx.r3.s64 = ctx.r11.s64 + -21280;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315C188"))) PPC_WEAK_FUNC(sub_8315C188);
PPC_FUNC_IMPL(__imp__sub_8315C188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-21320
	ctx.r3.s64 = ctx.r11.s64 + -21320;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315C198"))) PPC_WEAK_FUNC(sub_8315C198);
PPC_FUNC_IMPL(__imp__sub_8315C198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,19440
	ctx.r9.s64 = ctx.r11.s64 + 19440;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315C1C8"))) PPC_WEAK_FUNC(sub_8315C1C8);
PPC_FUNC_IMPL(__imp__sub_8315C1C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,19264
	ctx.r9.s64 = ctx.r11.s64 + 19264;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315C1F8"))) PPC_WEAK_FUNC(sub_8315C1F8);
PPC_FUNC_IMPL(__imp__sub_8315C1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,19216
	ctx.r9.s64 = ctx.r11.s64 + 19216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315C228"))) PPC_WEAK_FUNC(sub_8315C228);
PPC_FUNC_IMPL(__imp__sub_8315C228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,19248
	ctx.r9.s64 = ctx.r11.s64 + 19248;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r8,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315C258"))) PPC_WEAK_FUNC(sub_8315C258);
PPC_FUNC_IMPL(__imp__sub_8315C258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,19232
	ctx.r10.s64 = ctx.r10.s64 + 19232;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315C278"))) PPC_WEAK_FUNC(sub_8315C278);
PPC_FUNC_IMPL(__imp__sub_8315C278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,19152
	ctx.r10.s64 = ctx.r10.s64 + 19152;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315C298"))) PPC_WEAK_FUNC(sub_8315C298);
PPC_FUNC_IMPL(__imp__sub_8315C298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-19944
	ctx.r3.s64 = ctx.r11.s64 + -19944;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315C2A8"))) PPC_WEAK_FUNC(sub_8315C2A8);
PPC_FUNC_IMPL(__imp__sub_8315C2A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,19424
	ctx.r10.s64 = ctx.r10.s64 + 19424;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315C2C8"))) PPC_WEAK_FUNC(sub_8315C2C8);
PPC_FUNC_IMPL(__imp__sub_8315C2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,19888
	ctx.r3.s64 = ctx.r11.s64 + 19888;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315C2D8"))) PPC_WEAK_FUNC(sub_8315C2D8);
PPC_FUNC_IMPL(__imp__sub_8315C2D8) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,19456
	ctx.r30.s64 = ctx.r31.s64 + 19456;
	// addi r5,r11,19252
	ctx.r5.s64 = ctx.r11.s64 + 19252;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315C308;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3492(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3492);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-20880
	ctx.r3.s64 = ctx.r10.s64 + -20880;
	// lfs f11,32544(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 32544);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,19456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19456, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315C350;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315C368"))) PPC_WEAK_FUNC(sub_8315C368);
PPC_FUNC_IMPL(__imp__sub_8315C368) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,19864
	ctx.r30.s64 = ctx.r31.s64 + 19864;
	// addi r5,r11,19280
	ctx.r5.s64 = ctx.r11.s64 + 19280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315C398;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3156(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3156);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-20856
	ctx.r3.s64 = ctx.r10.s64 + -20856;
	// lfs f11,32544(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 32544);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,19864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19864, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315C3E0;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315C3F8"))) PPC_WEAK_FUNC(sub_8315C3F8);
PPC_FUNC_IMPL(__imp__sub_8315C3F8) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,19960
	ctx.r30.s64 = ctx.r31.s64 + 19960;
	// addi r5,r11,19312
	ctx.r5.s64 = ctx.r11.s64 + 19312;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315C428;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,26564(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26564);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-20832
	ctx.r3.s64 = ctx.r7.s64 + -20832;
	// lfs f12,19308(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19308);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,19960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19960, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315C468;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315C480"))) PPC_WEAK_FUNC(sub_8315C480);
PPC_FUNC_IMPL(__imp__sub_8315C480) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,19400
	ctx.r30.s64 = ctx.r31.s64 + 19400;
	// addi r5,r11,19344
	ctx.r5.s64 = ctx.r11.s64 + 19344;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315C4B0;
	sub_82C07478(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,19340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19340);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-20808
	ctx.r3.s64 = ctx.r7.s64 + -20808;
	// lfs f12,19308(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19308);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,19400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19400, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315C4F0;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315C508"))) PPC_WEAK_FUNC(sub_8315C508);
PPC_FUNC_IMPL(__imp__sub_8315C508) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,19376
	ctx.r30.s64 = ctx.r31.s64 + 19376;
	// addi r5,r11,19372
	ctx.r5.s64 = ctx.r11.s64 + 19372;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315C538;
	sub_82C07478(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,-3056(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -3056);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-20784
	ctx.r3.s64 = ctx.r7.s64 + -20784;
	// lfs f12,3408(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3408);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,19376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19376, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315C578;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315C590"))) PPC_WEAK_FUNC(sub_8315C590);
PPC_FUNC_IMPL(__imp__sub_8315C590) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,19124
	ctx.r30.s64 = ctx.r31.s64 + 19124;
	// addi r5,r11,19392
	ctx.r5.s64 = ctx.r11.s64 + 19392;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315C5C0;
	sub_82C07478(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,-3056(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -3056);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-20760
	ctx.r3.s64 = ctx.r7.s64 + -20760;
	// lfs f12,3408(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3408);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,19124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19124, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315C600;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315C618"))) PPC_WEAK_FUNC(sub_8315C618);
PPC_FUNC_IMPL(__imp__sub_8315C618) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,19352
	ctx.r30.s64 = ctx.r31.s64 + 19352;
	// addi r5,r11,19416
	ctx.r5.s64 = ctx.r11.s64 + 19416;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315C648;
	sub_82C07478(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,-3056(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -3056);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,19412(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19412);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-20736
	ctx.r3.s64 = ctx.r10.s64 + -20736;
	// lfs f11,17832(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 17832);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,19352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19352, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315C690;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315C6A8"))) PPC_WEAK_FUNC(sub_8315C6A8);
PPC_FUNC_IMPL(__imp__sub_8315C6A8) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,19984
	ctx.r30.s64 = ctx.r31.s64 + 19984;
	// addi r5,r11,19444
	ctx.r5.s64 = ctx.r11.s64 + 19444;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315C6D8;
	sub_82C07478(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,-3056(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -3056);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,19412(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19412);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-20712
	ctx.r3.s64 = ctx.r10.s64 + -20712;
	// lfs f11,17832(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 17832);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,19984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19984, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315C720;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315C738"))) PPC_WEAK_FUNC(sub_8315C738);
PPC_FUNC_IMPL(__imp__sub_8315C738) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,19480
	ctx.r30.s64 = ctx.r31.s64 + 19480;
	// addi r5,r11,19472
	ctx.r5.s64 = ctx.r11.s64 + 19472;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315C768;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3284(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3284);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3392(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3392);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-20688
	ctx.r3.s64 = ctx.r10.s64 + -20688;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,19480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19480, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315C7B0;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315C7C8"))) PPC_WEAK_FUNC(sub_8315C7C8);
PPC_FUNC_IMPL(__imp__sub_8315C7C8) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,19792
	ctx.r30.s64 = ctx.r31.s64 + 19792;
	// addi r5,r11,19516
	ctx.r5.s64 = ctx.r11.s64 + 19516;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315C7F8;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3492(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3492);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-20664
	ctx.r3.s64 = ctx.r10.s64 + -20664;
	// lfs f11,32544(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 32544);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,19792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19792, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315C840;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315C858"))) PPC_WEAK_FUNC(sub_8315C858);
PPC_FUNC_IMPL(__imp__sub_8315C858) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,20032
	ctx.r30.s64 = ctx.r31.s64 + 20032;
	// addi r5,r11,19560
	ctx.r5.s64 = ctx.r11.s64 + 19560;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315C888;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3156(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3156);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-20640
	ctx.r3.s64 = ctx.r10.s64 + -20640;
	// lfs f11,32544(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 32544);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,20032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20032, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315C8D0;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315C8E8"))) PPC_WEAK_FUNC(sub_8315C8E8);
PPC_FUNC_IMPL(__imp__sub_8315C8E8) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,20176
	ctx.r30.s64 = ctx.r31.s64 + 20176;
	// addi r5,r11,19608
	ctx.r5.s64 = ctx.r11.s64 + 19608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315C918;
	sub_82C07478(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,19604(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19604);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-20616
	ctx.r3.s64 = ctx.r7.s64 + -20616;
	// lfs f12,19308(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19308);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,20176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20176, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315C958;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315C970"))) PPC_WEAK_FUNC(sub_8315C970);
PPC_FUNC_IMPL(__imp__sub_8315C970) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,20152
	ctx.r30.s64 = ctx.r31.s64 + 20152;
	// addi r5,r11,19652
	ctx.r5.s64 = ctx.r11.s64 + 19652;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315C9A0;
	sub_82C07478(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,19604(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19604);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-20592
	ctx.r3.s64 = ctx.r7.s64 + -20592;
	// lfs f12,19308(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19308);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,20152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20152, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315C9E0;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315C9F8"))) PPC_WEAK_FUNC(sub_8315C9F8);
PPC_FUNC_IMPL(__imp__sub_8315C9F8) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,20224
	ctx.r30.s64 = ctx.r31.s64 + 20224;
	// addi r5,r11,19696
	ctx.r5.s64 = ctx.r11.s64 + 19696;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315CA28;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-20568
	ctx.r3.s64 = ctx.r7.s64 + -20568;
	// lfs f12,3408(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3408);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,20224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20224, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315CA68;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315CA80"))) PPC_WEAK_FUNC(sub_8315CA80);
PPC_FUNC_IMPL(__imp__sub_8315CA80) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,19768
	ctx.r30.s64 = ctx.r31.s64 + 19768;
	// addi r5,r11,19732
	ctx.r5.s64 = ctx.r11.s64 + 19732;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315CAB0;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-20544
	ctx.r3.s64 = ctx.r7.s64 + -20544;
	// lfs f12,3408(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3408);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,19768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19768, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315CAF0;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315CB08"))) PPC_WEAK_FUNC(sub_8315CB08);
PPC_FUNC_IMPL(__imp__sub_8315CB08) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,20056
	ctx.r30.s64 = ctx.r31.s64 + 20056;
	// addi r5,r11,19768
	ctx.r5.s64 = ctx.r11.s64 + 19768;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315CB38;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3648(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,19412(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19412);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-20520
	ctx.r3.s64 = ctx.r10.s64 + -20520;
	// lfs f11,17832(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 17832);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,20056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20056, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315CB80;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315CB98"))) PPC_WEAK_FUNC(sub_8315CB98);
PPC_FUNC_IMPL(__imp__sub_8315CB98) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,19192
	ctx.r30.s64 = ctx.r31.s64 + 19192;
	// addi r5,r11,19812
	ctx.r5.s64 = ctx.r11.s64 + 19812;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315CBC8;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3648(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,19412(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19412);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-20496
	ctx.r3.s64 = ctx.r10.s64 + -20496;
	// lfs f11,17832(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 17832);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,19192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19192, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315CC10;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315CC28"))) PPC_WEAK_FUNC(sub_8315CC28);
PPC_FUNC_IMPL(__imp__sub_8315CC28) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,19840
	ctx.r30.s64 = ctx.r31.s64 + 19840;
	// addi r5,r11,19856
	ctx.r5.s64 = ctx.r11.s64 + 19856;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315CC58;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3648(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3392(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3392);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-20472
	ctx.r3.s64 = ctx.r10.s64 + -20472;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,19840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19840, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315CCA0;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315CCB8"))) PPC_WEAK_FUNC(sub_8315CCB8);
PPC_FUNC_IMPL(__imp__sub_8315CCB8) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,19720
	ctx.r30.s64 = ctx.r31.s64 + 19720;
	// addi r5,r11,19920
	ctx.r5.s64 = ctx.r11.s64 + 19920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315CCE8;
	sub_82C07478(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,19916(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19916);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-20448
	ctx.r3.s64 = ctx.r10.s64 + -20448;
	// lfs f11,3256(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3256);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,19720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19720, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315CD30;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315CD48"))) PPC_WEAK_FUNC(sub_8315CD48);
PPC_FUNC_IMPL(__imp__sub_8315CD48) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,19168
	ctx.r30.s64 = ctx.r31.s64 + 19168;
	// addi r5,r11,19952
	ctx.r5.s64 = ctx.r11.s64 + 19952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315CD78;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,32544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32544);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-20424
	ctx.r3.s64 = ctx.r7.s64 + -20424;
	// lfs f12,19308(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19308);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,19168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19168, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315CDB8;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315CDD0"))) PPC_WEAK_FUNC(sub_8315CDD0);
PPC_FUNC_IMPL(__imp__sub_8315CDD0) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,19280
	ctx.r30.s64 = ctx.r31.s64 + 19280;
	// addi r5,r11,19980
	ctx.r5.s64 = ctx.r11.s64 + 19980;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315CE00;
	sub_82C07478(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,19976(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19976);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-20400
	ctx.r3.s64 = ctx.r7.s64 + -20400;
	// lfs f12,19308(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19308);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,19280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19280, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315CE40;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315CE58"))) PPC_WEAK_FUNC(sub_8315CE58);
PPC_FUNC_IMPL(__imp__sub_8315CE58) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,20128
	ctx.r30.s64 = ctx.r31.s64 + 20128;
	// addi r5,r11,20004
	ctx.r5.s64 = ctx.r11.s64 + 20004;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315CE88;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,26564(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26564);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3320(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3320);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-20376
	ctx.r3.s64 = ctx.r10.s64 + -20376;
	// lfs f11,3328(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3328);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,20128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20128, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315CED0;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315CEE8"))) PPC_WEAK_FUNC(sub_8315CEE8);
PPC_FUNC_IMPL(__imp__sub_8315CEE8) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,19600
	ctx.r30.s64 = ctx.r31.s64 + 19600;
	// addi r5,r11,20032
	ctx.r5.s64 = ctx.r11.s64 + 20032;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315CF18;
	sub_82C07478(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,20028(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20028);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3320(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3320);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-20352
	ctx.r3.s64 = ctx.r10.s64 + -20352;
	// lfs f11,3328(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3328);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,19600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19600, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315CF60;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315CF78"))) PPC_WEAK_FUNC(sub_8315CF78);
PPC_FUNC_IMPL(__imp__sub_8315CF78) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,19624
	ctx.r30.s64 = ctx.r31.s64 + 19624;
	// addi r5,r11,20056
	ctx.r5.s64 = ctx.r11.s64 + 20056;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315CFA8;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3208(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-20328
	ctx.r3.s64 = ctx.r10.s64 + -20328;
	// lfs f11,3296(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3296);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,19624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19624, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315CFF0;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D008"))) PPC_WEAK_FUNC(sub_8315D008);
PPC_FUNC_IMPL(__imp__sub_8315D008) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,19328
	ctx.r30.s64 = ctx.r31.s64 + 19328;
	// addi r5,r11,20080
	ctx.r5.s64 = ctx.r11.s64 + 20080;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315D038;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3880(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3880);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-20304
	ctx.r3.s64 = ctx.r10.s64 + -20304;
	// lfs f11,3296(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3296);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,19328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19328, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315D080;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D098"))) PPC_WEAK_FUNC(sub_8315D098);
PPC_FUNC_IMPL(__imp__sub_8315D098) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,19576
	ctx.r30.s64 = ctx.r31.s64 + 19576;
	// addi r5,r11,20104
	ctx.r5.s64 = ctx.r11.s64 + 20104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315D0C8;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3200(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3200);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-20280
	ctx.r3.s64 = ctx.r7.s64 + -20280;
	// lfs f12,3492(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3492);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,19576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19576, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315D108;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D120"))) PPC_WEAK_FUNC(sub_8315D120);
PPC_FUNC_IMPL(__imp__sub_8315D120) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,19504
	ctx.r30.s64 = ctx.r31.s64 + 19504;
	// addi r5,r11,20128
	ctx.r5.s64 = ctx.r11.s64 + 20128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315D150;
	sub_82C07478(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,20124(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20124);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-20256
	ctx.r3.s64 = ctx.r10.s64 + -20256;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,19504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19504, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315D198;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D1B0"))) PPC_WEAK_FUNC(sub_8315D1B0);
PPC_FUNC_IMPL(__imp__sub_8315D1B0) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,19648
	ctx.r30.s64 = ctx.r31.s64 + 19648;
	// addi r5,r11,20148
	ctx.r5.s64 = ctx.r11.s64 + 20148;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315D1E0;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-20232
	ctx.r3.s64 = ctx.r7.s64 + -20232;
	// lfs f12,3492(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3492);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,19648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19648, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315D220;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D238"))) PPC_WEAK_FUNC(sub_8315D238);
PPC_FUNC_IMPL(__imp__sub_8315D238) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,20080
	ctx.r30.s64 = ctx.r31.s64 + 20080;
	// addi r5,r11,20180
	ctx.r5.s64 = ctx.r11.s64 + 20180;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315D268;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-20208
	ctx.r3.s64 = ctx.r7.s64 + -20208;
	// lfs f12,3492(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3492);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,20080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20080, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315D2A8;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D2C0"))) PPC_WEAK_FUNC(sub_8315D2C0);
PPC_FUNC_IMPL(__imp__sub_8315D2C0) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,20200
	ctx.r30.s64 = ctx.r31.s64 + 20200;
	// addi r5,r11,20212
	ctx.r5.s64 = ctx.r11.s64 + 20212;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315D2F0;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3296(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3296);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-20184
	ctx.r3.s64 = ctx.r7.s64 + -20184;
	// lfs f12,3492(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3492);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,20200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20200, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315D330;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D348"))) PPC_WEAK_FUNC(sub_8315D348);
PPC_FUNC_IMPL(__imp__sub_8315D348) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,19528
	ctx.r30.s64 = ctx.r31.s64 + 19528;
	// addi r5,r11,20236
	ctx.r5.s64 = ctx.r11.s64 + 20236;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315D378;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3320(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3320);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3492(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3492);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-20160
	ctx.r3.s64 = ctx.r7.s64 + -20160;
	// lfs f12,3400(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3400);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,19528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19528, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315D3B8;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D3D0"))) PPC_WEAK_FUNC(sub_8315D3D0);
PPC_FUNC_IMPL(__imp__sub_8315D3D0) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,19552
	ctx.r30.s64 = ctx.r31.s64 + 19552;
	// addi r5,r11,20268
	ctx.r5.s64 = ctx.r11.s64 + 20268;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315D400;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3488(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3488);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3492(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3492);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-20136
	ctx.r3.s64 = ctx.r7.s64 + -20136;
	// lfs f12,3400(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3400);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,19552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19552, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315D440;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D458"))) PPC_WEAK_FUNC(sub_8315D458);
PPC_FUNC_IMPL(__imp__sub_8315D458) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,19696
	ctx.r30.s64 = ctx.r31.s64 + 19696;
	// addi r5,r11,20300
	ctx.r5.s64 = ctx.r11.s64 + 20300;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315D488;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,32544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32544);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3492(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3492);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-20112
	ctx.r3.s64 = ctx.r7.s64 + -20112;
	// lfs f12,3400(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3400);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,19696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19696, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315D4C8;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D4E0"))) PPC_WEAK_FUNC(sub_8315D4E0);
PPC_FUNC_IMPL(__imp__sub_8315D4E0) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,20008
	ctx.r30.s64 = ctx.r31.s64 + 20008;
	// addi r5,r11,20328
	ctx.r5.s64 = ctx.r11.s64 + 20328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315D510;
	sub_82C07478(ctx, base);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,10008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10008);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3492(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3492);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-20088
	ctx.r3.s64 = ctx.r7.s64 + -20088;
	// lfs f12,3400(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3400);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,20008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20008, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315D550;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D568"))) PPC_WEAK_FUNC(sub_8315D568);
PPC_FUNC_IMPL(__imp__sub_8315D568) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,19304
	ctx.r30.s64 = ctx.r31.s64 + 19304;
	// addi r5,r11,20356
	ctx.r5.s64 = ctx.r11.s64 + 20356;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315D598;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3880(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3880);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-20064
	ctx.r3.s64 = ctx.r10.s64 + -20064;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,19304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19304, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315D5E0;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D5F8"))) PPC_WEAK_FUNC(sub_8315D5F8);
PPC_FUNC_IMPL(__imp__sub_8315D5F8) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,19744
	ctx.r30.s64 = ctx.r31.s64 + 19744;
	// addi r5,r11,20380
	ctx.r5.s64 = ctx.r11.s64 + 20380;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315D628;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3240);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20376(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20376);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-20040
	ctx.r3.s64 = ctx.r10.s64 + -20040;
	// lfs f11,3464(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3464);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,19744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19744, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315D670;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D688"))) PPC_WEAK_FUNC(sub_8315D688);
PPC_FUNC_IMPL(__imp__sub_8315D688) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,20104
	ctx.r30.s64 = ctx.r31.s64 + 20104;
	// addi r5,r11,20400
	ctx.r5.s64 = ctx.r11.s64 + 20400;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315D6B8;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3400(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3400);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20376(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20376);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-20016
	ctx.r3.s64 = ctx.r10.s64 + -20016;
	// lfs f11,3464(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3464);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,20104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20104, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315D700;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D718"))) PPC_WEAK_FUNC(sub_8315D718);
PPC_FUNC_IMPL(__imp__sub_8315D718) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,19672
	ctx.r30.s64 = ctx.r31.s64 + 19672;
	// addi r5,r11,20424
	ctx.r5.s64 = ctx.r11.s64 + 20424;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315D748;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3400(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3400);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20376(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20376);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-19992
	ctx.r3.s64 = ctx.r10.s64 + -19992;
	// lfs f11,3464(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3464);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,19672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19672, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315D790;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D7A8"))) PPC_WEAK_FUNC(sub_8315D7A8);
PPC_FUNC_IMPL(__imp__sub_8315D7A8) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,19816
	ctx.r30.s64 = ctx.r31.s64 + 19816;
	// addi r5,r11,20444
	ctx.r5.s64 = ctx.r11.s64 + 20444;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x8315D7D8;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3240);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20376(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20376);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-19968
	ctx.r3.s64 = ctx.r10.s64 + -19968;
	// lfs f11,3464(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3464);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,19816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19816, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315D820;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D838"))) PPC_WEAK_FUNC(sub_8315D838);
PPC_FUNC_IMPL(__imp__sub_8315D838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,20448
	ctx.r3.s64 = ctx.r11.s64 + 20448;
	// b 0x8251f398
	sub_8251F398(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315D848"))) PPC_WEAK_FUNC(sub_8315D848);
PPC_FUNC_IMPL(__imp__sub_8315D848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,20450
	ctx.r3.s64 = ctx.r11.s64 + 20450;
	// b 0x8251f570
	sub_8251F570(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315D858"))) PPC_WEAK_FUNC(sub_8315D858);
PPC_FUNC_IMPL(__imp__sub_8315D858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,20449
	ctx.r3.s64 = ctx.r11.s64 + 20449;
	// b 0x8251f690
	sub_8251F690(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315D868"))) PPC_WEAK_FUNC(sub_8315D868);
PPC_FUNC_IMPL(__imp__sub_8315D868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,20768
	ctx.r9.s64 = ctx.r11.s64 + 20768;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D898"))) PPC_WEAK_FUNC(sub_8315D898);
PPC_FUNC_IMPL(__imp__sub_8315D898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,20464
	ctx.r9.s64 = ctx.r11.s64 + 20464;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D8C8"))) PPC_WEAK_FUNC(sub_8315D8C8);
PPC_FUNC_IMPL(__imp__sub_8315D8C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,20400
	ctx.r9.s64 = ctx.r11.s64 + 20400;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D8F8"))) PPC_WEAK_FUNC(sub_8315D8F8);
PPC_FUNC_IMPL(__imp__sub_8315D8F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,20432
	ctx.r9.s64 = ctx.r11.s64 + 20432;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r8,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D928"))) PPC_WEAK_FUNC(sub_8315D928);
PPC_FUNC_IMPL(__imp__sub_8315D928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,20416
	ctx.r10.s64 = ctx.r10.s64 + 20416;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D948"))) PPC_WEAK_FUNC(sub_8315D948);
PPC_FUNC_IMPL(__imp__sub_8315D948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,20384
	ctx.r10.s64 = ctx.r10.s64 + 20384;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D968"))) PPC_WEAK_FUNC(sub_8315D968);
PPC_FUNC_IMPL(__imp__sub_8315D968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r31,r11,20480
	ctx.r31.s64 = ctx.r11.s64 + 20480;
	// addi r6,r10,21268
	ctx.r6.s64 = ctx.r10.s64 + 21268;
	// addi r5,r9,21236
	ctx.r5.s64 = ctx.r9.s64 + 21236;
	// addi r4,r8,21208
	ctx.r4.s64 = ctx.r8.s64 + 21208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8251efc8
	ctx.lr = 0x8315D9A0;
	sub_8251EFC8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r6,r11,21176
	ctx.r6.s64 = ctx.r11.s64 + 21176;
	// addi r5,r10,21144
	ctx.r5.s64 = ctx.r10.s64 + 21144;
	// addi r4,r9,21116
	ctx.r4.s64 = ctx.r9.s64 + 21116;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x8251efc8
	ctx.lr = 0x8315D9C0;
	sub_8251EFC8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r6,r11,21080
	ctx.r6.s64 = ctx.r11.s64 + 21080;
	// addi r5,r10,21044
	ctx.r5.s64 = ctx.r10.s64 + 21044;
	// addi r4,r9,21008
	ctx.r4.s64 = ctx.r9.s64 + 21008;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x8251efc8
	ctx.lr = 0x8315D9E0;
	sub_8251EFC8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r6,r11,20976
	ctx.r6.s64 = ctx.r11.s64 + 20976;
	// addi r5,r10,20940
	ctx.r5.s64 = ctx.r10.s64 + 20940;
	// addi r4,r9,20908
	ctx.r4.s64 = ctx.r9.s64 + 20908;
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// bl 0x8251efc8
	ctx.lr = 0x8315DA00;
	sub_8251EFC8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-19808
	ctx.r3.s64 = ctx.r11.s64 + -19808;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315DA0C;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315DA20"))) PPC_WEAK_FUNC(sub_8315DA20);
PPC_FUNC_IMPL(__imp__sub_8315DA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-19744
	ctx.r3.s64 = ctx.r11.s64 + -19744;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DA30"))) PPC_WEAK_FUNC(sub_8315DA30);
PPC_FUNC_IMPL(__imp__sub_8315DA30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,20896
	ctx.r9.s64 = ctx.r11.s64 + 20896;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315DA60"))) PPC_WEAK_FUNC(sub_8315DA60);
PPC_FUNC_IMPL(__imp__sub_8315DA60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,20864
	ctx.r9.s64 = ctx.r11.s64 + 20864;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315DA90"))) PPC_WEAK_FUNC(sub_8315DA90);
PPC_FUNC_IMPL(__imp__sub_8315DA90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,20816
	ctx.r9.s64 = ctx.r11.s64 + 20816;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315DAC0"))) PPC_WEAK_FUNC(sub_8315DAC0);
PPC_FUNC_IMPL(__imp__sub_8315DAC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,20848
	ctx.r9.s64 = ctx.r11.s64 + 20848;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r8,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315DAF0"))) PPC_WEAK_FUNC(sub_8315DAF0);
PPC_FUNC_IMPL(__imp__sub_8315DAF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,20832
	ctx.r10.s64 = ctx.r10.s64 + 20832;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315DB10"))) PPC_WEAK_FUNC(sub_8315DB10);
PPC_FUNC_IMPL(__imp__sub_8315DB10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,20800
	ctx.r10.s64 = ctx.r10.s64 + 20800;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315DB30"))) PPC_WEAK_FUNC(sub_8315DB30);
PPC_FUNC_IMPL(__imp__sub_8315DB30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,20920
	ctx.r3.s64 = ctx.r11.s64 + 20920;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DB40"))) PPC_WEAK_FUNC(sub_8315DB40);
PPC_FUNC_IMPL(__imp__sub_8315DB40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,20880
	ctx.r10.s64 = ctx.r10.s64 + 20880;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315DB60"))) PPC_WEAK_FUNC(sub_8315DB60);
PPC_FUNC_IMPL(__imp__sub_8315DB60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-19752
	ctx.r3.s64 = ctx.r11.s64 + -19752;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DB70"))) PPC_WEAK_FUNC(sub_8315DB70);
PPC_FUNC_IMPL(__imp__sub_8315DB70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,21264
	ctx.r9.s64 = ctx.r11.s64 + 21264;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315DBA0"))) PPC_WEAK_FUNC(sub_8315DBA0);
PPC_FUNC_IMPL(__imp__sub_8315DBA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,21056
	ctx.r9.s64 = ctx.r11.s64 + 21056;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315DBD0"))) PPC_WEAK_FUNC(sub_8315DBD0);
PPC_FUNC_IMPL(__imp__sub_8315DBD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,21008
	ctx.r9.s64 = ctx.r11.s64 + 21008;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315DC00"))) PPC_WEAK_FUNC(sub_8315DC00);
PPC_FUNC_IMPL(__imp__sub_8315DC00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,21040
	ctx.r9.s64 = ctx.r11.s64 + 21040;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r8,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315DC30"))) PPC_WEAK_FUNC(sub_8315DC30);
PPC_FUNC_IMPL(__imp__sub_8315DC30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,21024
	ctx.r10.s64 = ctx.r10.s64 + 21024;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315DC50"))) PPC_WEAK_FUNC(sub_8315DC50);
PPC_FUNC_IMPL(__imp__sub_8315DC50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,20992
	ctx.r10.s64 = ctx.r10.s64 + 20992;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315DC70"))) PPC_WEAK_FUNC(sub_8315DC70);
PPC_FUNC_IMPL(__imp__sub_8315DC70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-19728
	ctx.r3.s64 = ctx.r11.s64 + -19728;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DC80"))) PPC_WEAK_FUNC(sub_8315DC80);
PPC_FUNC_IMPL(__imp__sub_8315DC80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,21248
	ctx.r10.s64 = ctx.r10.s64 + 21248;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315DCA0"))) PPC_WEAK_FUNC(sub_8315DCA0);
PPC_FUNC_IMPL(__imp__sub_8315DCA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,21392
	ctx.r3.s64 = ctx.r11.s64 + 21392;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DCB0"))) PPC_WEAK_FUNC(sub_8315DCB0);
PPC_FUNC_IMPL(__imp__sub_8315DCB0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// lis r8,-31954
	ctx.r8.s64 = -2094137344;
	// lwz r11,6104(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6104);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,6104(r9)
	PPC_STORE_U32(ctx.r9.u32 + 6104, ctx.r10.u32);
	// stw r11,21492(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21492, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315DCD0"))) PPC_WEAK_FUNC(sub_8315DCD0);
PPC_FUNC_IMPL(__imp__sub_8315DCD0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// lis r8,-31954
	ctx.r8.s64 = -2094137344;
	// lwz r11,6104(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6104);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,6104(r9)
	PPC_STORE_U32(ctx.r9.u32 + 6104, ctx.r10.u32);
	// stw r11,21496(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21496, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315DCF0"))) PPC_WEAK_FUNC(sub_8315DCF0);
PPC_FUNC_IMPL(__imp__sub_8315DCF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r4,r11,27936
	ctx.r4.s64 = ctx.r11.s64 + 27936;
	// addi r3,r10,21308
	ctx.r3.s64 = ctx.r10.s64 + 21308;
	// bl 0x82450f48
	ctx.lr = 0x8315DD10;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-19568
	ctx.r3.s64 = ctx.r11.s64 + -19568;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315DD1C;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315DD30"))) PPC_WEAK_FUNC(sub_8315DD30);
PPC_FUNC_IMPL(__imp__sub_8315DD30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r4,r11,27980
	ctx.r4.s64 = ctx.r11.s64 + 27980;
	// addi r3,r10,21172
	ctx.r3.s64 = ctx.r10.s64 + 21172;
	// bl 0x82450f48
	ctx.lr = 0x8315DD50;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-19544
	ctx.r3.s64 = ctx.r11.s64 + -19544;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315DD5C;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315DD70"))) PPC_WEAK_FUNC(sub_8315DD70);
PPC_FUNC_IMPL(__imp__sub_8315DD70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r4,r11,28008
	ctx.r4.s64 = ctx.r11.s64 + 28008;
	// addi r3,r10,21096
	ctx.r3.s64 = ctx.r10.s64 + 21096;
	// bl 0x82450f48
	ctx.lr = 0x8315DD90;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-19520
	ctx.r3.s64 = ctx.r11.s64 + -19520;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315DD9C;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315DDB0"))) PPC_WEAK_FUNC(sub_8315DDB0);
PPC_FUNC_IMPL(__imp__sub_8315DDB0) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,21072
	ctx.r30.s64 = ctx.r31.s64 + 21072;
	// addi r4,r11,28036
	ctx.r4.s64 = ctx.r11.s64 + 28036;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315DDDC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3280(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3280);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-19712
	ctx.r3.s64 = ctx.r10.s64 + -19712;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,21072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21072, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315DE24;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315DE40"))) PPC_WEAK_FUNC(sub_8315DE40);
PPC_FUNC_IMPL(__imp__sub_8315DE40) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,21224
	ctx.r30.s64 = ctx.r31.s64 + 21224;
	// addi r4,r11,28076
	ctx.r4.s64 = ctx.r11.s64 + 28076;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315DE6C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3280(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3280);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-19688
	ctx.r3.s64 = ctx.r10.s64 + -19688;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,21224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21224, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315DEB4;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315DED0"))) PPC_WEAK_FUNC(sub_8315DED0);
PPC_FUNC_IMPL(__imp__sub_8315DED0) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,21148
	ctx.r30.s64 = ctx.r31.s64 + 21148;
	// addi r4,r11,28116
	ctx.r4.s64 = ctx.r11.s64 + 28116;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315DEFC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f0,3208(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3648(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3648);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r7,-19664
	ctx.r3.s64 = ctx.r7.s64 + -19664;
	// lfs f12,3492(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3492);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,21148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21148, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f13,16(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315DF3C;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315DF58"))) PPC_WEAK_FUNC(sub_8315DF58);
PPC_FUNC_IMPL(__imp__sub_8315DF58) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,21124
	ctx.r30.s64 = ctx.r31.s64 + 21124;
	// addi r4,r11,28164
	ctx.r4.s64 = ctx.r11.s64 + 28164;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315DF84;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3412(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3412);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,28160(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28160);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-19640
	ctx.r3.s64 = ctx.r10.s64 + -19640;
	// lfs f11,3408(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3408);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,21124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21124, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315DFCC;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315DFE8"))) PPC_WEAK_FUNC(sub_8315DFE8);
PPC_FUNC_IMPL(__imp__sub_8315DFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r4,r11,28204
	ctx.r4.s64 = ctx.r11.s64 + 28204;
	// addi r3,r10,21464
	ctx.r3.s64 = ctx.r10.s64 + 21464;
	// bl 0x82450f48
	ctx.lr = 0x8315E008;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-19496
	ctx.r3.s64 = ctx.r11.s64 + -19496;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315E014;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E028"))) PPC_WEAK_FUNC(sub_8315E028);
PPC_FUNC_IMPL(__imp__sub_8315E028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r4,r11,28252
	ctx.r4.s64 = ctx.r11.s64 + 28252;
	// addi r3,r10,21364
	ctx.r3.s64 = ctx.r10.s64 + 21364;
	// bl 0x82450f48
	ctx.lr = 0x8315E048;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-19472
	ctx.r3.s64 = ctx.r11.s64 + -19472;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315E054;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E068"))) PPC_WEAK_FUNC(sub_8315E068);
PPC_FUNC_IMPL(__imp__sub_8315E068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r4,r11,28280
	ctx.r4.s64 = ctx.r11.s64 + 28280;
	// addi r3,r10,21280
	ctx.r3.s64 = ctx.r10.s64 + 21280;
	// bl 0x82450f48
	ctx.lr = 0x8315E088;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-19448
	ctx.r3.s64 = ctx.r11.s64 + -19448;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315E094;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E0A8"))) PPC_WEAK_FUNC(sub_8315E0A8);
PPC_FUNC_IMPL(__imp__sub_8315E0A8) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,21340
	ctx.r30.s64 = ctx.r31.s64 + 21340;
	// addi r4,r11,28312
	ctx.r4.s64 = ctx.r11.s64 + 28312;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315E0D4;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3280(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3280);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-19616
	ctx.r3.s64 = ctx.r10.s64 + -19616;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,21340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21340, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315E11C;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E138"))) PPC_WEAK_FUNC(sub_8315E138);
PPC_FUNC_IMPL(__imp__sub_8315E138) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,21200
	ctx.r30.s64 = ctx.r31.s64 + 21200;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315E164;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3280(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3280);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-19592
	ctx.r3.s64 = ctx.r10.s64 + -19592;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,21200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21200, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315E1AC;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E1C8"))) PPC_WEAK_FUNC(sub_8315E1C8);
PPC_FUNC_IMPL(__imp__sub_8315E1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-18200
	ctx.r3.s64 = ctx.r11.s64 + -18200;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E1D8"))) PPC_WEAK_FUNC(sub_8315E1D8);
PPC_FUNC_IMPL(__imp__sub_8315E1D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,21616
	ctx.r9.s64 = ctx.r11.s64 + 21616;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E208"))) PPC_WEAK_FUNC(sub_8315E208);
PPC_FUNC_IMPL(__imp__sub_8315E208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,21584
	ctx.r9.s64 = ctx.r11.s64 + 21584;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E238"))) PPC_WEAK_FUNC(sub_8315E238);
PPC_FUNC_IMPL(__imp__sub_8315E238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,21536
	ctx.r9.s64 = ctx.r11.s64 + 21536;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E268"))) PPC_WEAK_FUNC(sub_8315E268);
PPC_FUNC_IMPL(__imp__sub_8315E268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,21568
	ctx.r9.s64 = ctx.r11.s64 + 21568;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r8,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E298"))) PPC_WEAK_FUNC(sub_8315E298);
PPC_FUNC_IMPL(__imp__sub_8315E298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,21552
	ctx.r10.s64 = ctx.r10.s64 + 21552;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E2B8"))) PPC_WEAK_FUNC(sub_8315E2B8);
PPC_FUNC_IMPL(__imp__sub_8315E2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,21520
	ctx.r10.s64 = ctx.r10.s64 + 21520;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E2D8"))) PPC_WEAK_FUNC(sub_8315E2D8);
PPC_FUNC_IMPL(__imp__sub_8315E2D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,21600
	ctx.r10.s64 = ctx.r10.s64 + 21600;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E2F8"))) PPC_WEAK_FUNC(sub_8315E2F8);
PPC_FUNC_IMPL(__imp__sub_8315E2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,21704
	ctx.r3.s64 = ctx.r11.s64 + 21704;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E308"))) PPC_WEAK_FUNC(sub_8315E308);
PPC_FUNC_IMPL(__imp__sub_8315E308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-18184
	ctx.r3.s64 = ctx.r11.s64 + -18184;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E318"))) PPC_WEAK_FUNC(sub_8315E318);
PPC_FUNC_IMPL(__imp__sub_8315E318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r31,21804
	ctx.r30.s64 = ctx.r31.s64 + 21804;
	// addi r5,r11,-12896
	ctx.r5.s64 = ctx.r11.s64 + -12896;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82c07478
	ctx.lr = 0x8315E348;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,30984
	ctx.r10.s64 = ctx.r10.s64 + 30984;
	// stb r11,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r11.u8);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,21804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21804, ctx.r10.u32);
	// addi r3,r11,-19424
	ctx.r3.s64 = ctx.r11.s64 + -19424;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315E368;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E380"))) PPC_WEAK_FUNC(sub_8315E380);
PPC_FUNC_IMPL(__imp__sub_8315E380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,21663
	ctx.r3.s64 = ctx.r11.s64 + 21663;
	// b 0x82534e20
	sub_82534E20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E390"))) PPC_WEAK_FUNC(sub_8315E390);
PPC_FUNC_IMPL(__imp__sub_8315E390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,21675
	ctx.r3.s64 = ctx.r11.s64 + 21675;
	// b 0x82534ee8
	sub_82534EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E3A0"))) PPC_WEAK_FUNC(sub_8315E3A0);
PPC_FUNC_IMPL(__imp__sub_8315E3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,21659
	ctx.r3.s64 = ctx.r11.s64 + 21659;
	// b 0x82534fb0
	sub_82534FB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E3B0"))) PPC_WEAK_FUNC(sub_8315E3B0);
PPC_FUNC_IMPL(__imp__sub_8315E3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,21816
	ctx.r3.s64 = ctx.r11.s64 + 21816;
	// b 0x82535078
	sub_82535078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E3C0"))) PPC_WEAK_FUNC(sub_8315E3C0);
PPC_FUNC_IMPL(__imp__sub_8315E3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,21517
	ctx.r3.s64 = ctx.r11.s64 + 21517;
	// b 0x82535140
	sub_82535140(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E3D0"))) PPC_WEAK_FUNC(sub_8315E3D0);
PPC_FUNC_IMPL(__imp__sub_8315E3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,21669
	ctx.r3.s64 = ctx.r11.s64 + 21669;
	// b 0x82535208
	sub_82535208(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E3E0"))) PPC_WEAK_FUNC(sub_8315E3E0);
PPC_FUNC_IMPL(__imp__sub_8315E3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,21674
	ctx.r3.s64 = ctx.r11.s64 + 21674;
	// b 0x825352d0
	sub_825352D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E3F0"))) PPC_WEAK_FUNC(sub_8315E3F0);
PPC_FUNC_IMPL(__imp__sub_8315E3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,21518
	ctx.r3.s64 = ctx.r11.s64 + 21518;
	// b 0x82535398
	sub_82535398(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E400"))) PPC_WEAK_FUNC(sub_8315E400);
PPC_FUNC_IMPL(__imp__sub_8315E400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,21668
	ctx.r3.s64 = ctx.r11.s64 + 21668;
	// b 0x82535460
	sub_82535460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E410"))) PPC_WEAK_FUNC(sub_8315E410);
PPC_FUNC_IMPL(__imp__sub_8315E410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,21667
	ctx.r3.s64 = ctx.r11.s64 + 21667;
	// b 0x82535528
	sub_82535528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E420"))) PPC_WEAK_FUNC(sub_8315E420);
PPC_FUNC_IMPL(__imp__sub_8315E420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,21519
	ctx.r3.s64 = ctx.r11.s64 + 21519;
	// b 0x825355f0
	sub_825355F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E430"))) PPC_WEAK_FUNC(sub_8315E430);
PPC_FUNC_IMPL(__imp__sub_8315E430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,21657
	ctx.r3.s64 = ctx.r11.s64 + 21657;
	// b 0x82535710
	sub_82535710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E440"))) PPC_WEAK_FUNC(sub_8315E440);
PPC_FUNC_IMPL(__imp__sub_8315E440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,21661
	ctx.r3.s64 = ctx.r11.s64 + 21661;
	// b 0x825357d8
	sub_825357D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E450"))) PPC_WEAK_FUNC(sub_8315E450);
PPC_FUNC_IMPL(__imp__sub_8315E450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,21658
	ctx.r3.s64 = ctx.r11.s64 + 21658;
	// b 0x825358a0
	sub_825358A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E460"))) PPC_WEAK_FUNC(sub_8315E460);
PPC_FUNC_IMPL(__imp__sub_8315E460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,21665
	ctx.r3.s64 = ctx.r11.s64 + 21665;
	// b 0x82535968
	sub_82535968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E470"))) PPC_WEAK_FUNC(sub_8315E470);
PPC_FUNC_IMPL(__imp__sub_8315E470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,21664
	ctx.r3.s64 = ctx.r11.s64 + 21664;
	// b 0x82535a30
	sub_82535A30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E480"))) PPC_WEAK_FUNC(sub_8315E480);
PPC_FUNC_IMPL(__imp__sub_8315E480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,21656
	ctx.r3.s64 = ctx.r11.s64 + 21656;
	// b 0x82539998
	sub_82539998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E490"))) PPC_WEAK_FUNC(sub_8315E490);
PPC_FUNC_IMPL(__imp__sub_8315E490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,21662
	ctx.r3.s64 = ctx.r11.s64 + 21662;
	// b 0x82535af8
	sub_82535AF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E4A0"))) PPC_WEAK_FUNC(sub_8315E4A0);
PPC_FUNC_IMPL(__imp__sub_8315E4A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,21666
	ctx.r3.s64 = ctx.r11.s64 + 21666;
	// b 0x82535bc0
	sub_82535BC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E4B0"))) PPC_WEAK_FUNC(sub_8315E4B0);
PPC_FUNC_IMPL(__imp__sub_8315E4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,21660
	ctx.r3.s64 = ctx.r11.s64 + 21660;
	// b 0x82535c88
	sub_82535C88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E4C0"))) PPC_WEAK_FUNC(sub_8315E4C0);
PPC_FUNC_IMPL(__imp__sub_8315E4C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,21514
	ctx.r3.s64 = ctx.r11.s64 + 21514;
	// b 0x82539a18
	sub_82539A18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E4D0"))) PPC_WEAK_FUNC(sub_8315E4D0);
PPC_FUNC_IMPL(__imp__sub_8315E4D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,21670
	ctx.r3.s64 = ctx.r11.s64 + 21670;
	// b 0x82535e28
	sub_82535E28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E4E0"))) PPC_WEAK_FUNC(sub_8315E4E0);
PPC_FUNC_IMPL(__imp__sub_8315E4E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,21516
	ctx.r3.s64 = ctx.r11.s64 + 21516;
	// b 0x82535ef0
	sub_82535EF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E4F0"))) PPC_WEAK_FUNC(sub_8315E4F0);
PPC_FUNC_IMPL(__imp__sub_8315E4F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,21513
	ctx.r3.s64 = ctx.r11.s64 + 21513;
	// b 0x82535fb8
	sub_82535FB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E500"))) PPC_WEAK_FUNC(sub_8315E500);
PPC_FUNC_IMPL(__imp__sub_8315E500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,21515
	ctx.r3.s64 = ctx.r11.s64 + 21515;
	// b 0x82536080
	sub_82536080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E510"))) PPC_WEAK_FUNC(sub_8315E510);
PPC_FUNC_IMPL(__imp__sub_8315E510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,21672
	ctx.r3.s64 = ctx.r11.s64 + 21672;
	// b 0x82536148
	sub_82536148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E520"))) PPC_WEAK_FUNC(sub_8315E520);
PPC_FUNC_IMPL(__imp__sub_8315E520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,21673
	ctx.r3.s64 = ctx.r11.s64 + 21673;
	// b 0x82536298
	sub_82536298(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E530"))) PPC_WEAK_FUNC(sub_8315E530);
PPC_FUNC_IMPL(__imp__sub_8315E530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,21512
	ctx.r3.s64 = ctx.r11.s64 + 21512;
	// b 0x82536360
	sub_82536360(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E540"))) PPC_WEAK_FUNC(sub_8315E540);
PPC_FUNC_IMPL(__imp__sub_8315E540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,21671
	ctx.r3.s64 = ctx.r11.s64 + 21671;
	// b 0x82536428
	sub_82536428(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E550"))) PPC_WEAK_FUNC(sub_8315E550);
PPC_FUNC_IMPL(__imp__sub_8315E550) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r31,21780
	ctx.r30.s64 = ctx.r31.s64 + 21780;
	// addi r4,r11,-12868
	ctx.r4.s64 = ctx.r11.s64 + -12868;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315E57C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3148);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-18296
	ctx.r3.s64 = ctx.r10.s64 + -18296;
	// lfs f11,3264(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3264);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,21780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21780, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315E5C4;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E5E0"))) PPC_WEAK_FUNC(sub_8315E5E0);
PPC_FUNC_IMPL(__imp__sub_8315E5E0) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r31,21676
	ctx.r30.s64 = ctx.r31.s64 + 21676;
	// addi r4,r11,-12836
	ctx.r4.s64 = ctx.r11.s64 + -12836;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315E60C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,19696(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19696);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-18272
	ctx.r3.s64 = ctx.r10.s64 + -18272;
	// lfs f11,3400(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3400);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,21676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21676, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315E654;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E670"))) PPC_WEAK_FUNC(sub_8315E670);
PPC_FUNC_IMPL(__imp__sub_8315E670) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r31,21632
	ctx.r30.s64 = ctx.r31.s64 + 21632;
	// addi r4,r11,-12800
	ctx.r4.s64 = ctx.r11.s64 + -12800;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315E69C;
	sub_82C07410(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,-12804(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12804);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-18248
	ctx.r3.s64 = ctx.r10.s64 + -18248;
	// lfs f11,3400(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3400);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,21632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21632, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315E6E4;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E700"))) PPC_WEAK_FUNC(sub_8315E700);
PPC_FUNC_IMPL(__imp__sub_8315E700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-18224
	ctx.r3.s64 = ctx.r11.s64 + -18224;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E710"))) PPC_WEAK_FUNC(sub_8315E710);
PPC_FUNC_IMPL(__imp__sub_8315E710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-18216
	ctx.r3.s64 = ctx.r11.s64 + -18216;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E720"))) PPC_WEAK_FUNC(sub_8315E720);
PPC_FUNC_IMPL(__imp__sub_8315E720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-18208
	ctx.r3.s64 = ctx.r11.s64 + -18208;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E730"))) PPC_WEAK_FUNC(sub_8315E730);
PPC_FUNC_IMPL(__imp__sub_8315E730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,25584
	ctx.r9.s64 = ctx.r11.s64 + 25584;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E760"))) PPC_WEAK_FUNC(sub_8315E760);
PPC_FUNC_IMPL(__imp__sub_8315E760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,25552
	ctx.r9.s64 = ctx.r11.s64 + 25552;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E790"))) PPC_WEAK_FUNC(sub_8315E790);
PPC_FUNC_IMPL(__imp__sub_8315E790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,25504
	ctx.r9.s64 = ctx.r11.s64 + 25504;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E7C0"))) PPC_WEAK_FUNC(sub_8315E7C0);
PPC_FUNC_IMPL(__imp__sub_8315E7C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,25536
	ctx.r9.s64 = ctx.r11.s64 + 25536;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r8,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E7F0"))) PPC_WEAK_FUNC(sub_8315E7F0);
PPC_FUNC_IMPL(__imp__sub_8315E7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,25520
	ctx.r10.s64 = ctx.r10.s64 + 25520;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E810"))) PPC_WEAK_FUNC(sub_8315E810);
PPC_FUNC_IMPL(__imp__sub_8315E810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,25488
	ctx.r10.s64 = ctx.r10.s64 + 25488;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E830"))) PPC_WEAK_FUNC(sub_8315E830);
PPC_FUNC_IMPL(__imp__sub_8315E830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-18112
	ctx.r3.s64 = ctx.r11.s64 + -18112;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E840"))) PPC_WEAK_FUNC(sub_8315E840);
PPC_FUNC_IMPL(__imp__sub_8315E840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,25608
	ctx.r3.s64 = ctx.r11.s64 + 25608;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E850"))) PPC_WEAK_FUNC(sub_8315E850);
PPC_FUNC_IMPL(__imp__sub_8315E850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,25568
	ctx.r10.s64 = ctx.r10.s64 + 25568;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E870"))) PPC_WEAK_FUNC(sub_8315E870);
PPC_FUNC_IMPL(__imp__sub_8315E870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,25680
	ctx.r3.s64 = ctx.r11.s64 + 25680;
	// bl 0x82c00f20
	ctx.lr = 0x8315E888;
	sub_82C00F20(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-18168
	ctx.r3.s64 = ctx.r11.s64 + -18168;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315E894;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E8A8"))) PPC_WEAK_FUNC(sub_8315E8A8);
PPC_FUNC_IMPL(__imp__sub_8315E8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lis r5,255
	ctx.r5.s64 = 16711680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,25604
	ctx.r3.s64 = ctx.r11.s64 + 25604;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c00e10
	ctx.lr = 0x8315E8D0;
	sub_82C00E10(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-18152
	ctx.r3.s64 = ctx.r11.s64 + -18152;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315E8DC;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E8F0"))) PPC_WEAK_FUNC(sub_8315E8F0);
PPC_FUNC_IMPL(__imp__sub_8315E8F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-17664
	ctx.r3.s64 = ctx.r11.s64 + -17664;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E900"))) PPC_WEAK_FUNC(sub_8315E900);
PPC_FUNC_IMPL(__imp__sub_8315E900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,26528
	ctx.r9.s64 = ctx.r11.s64 + 26528;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E930"))) PPC_WEAK_FUNC(sub_8315E930);
PPC_FUNC_IMPL(__imp__sub_8315E930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,26464
	ctx.r9.s64 = ctx.r11.s64 + 26464;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E960"))) PPC_WEAK_FUNC(sub_8315E960);
PPC_FUNC_IMPL(__imp__sub_8315E960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,26416
	ctx.r9.s64 = ctx.r11.s64 + 26416;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E990"))) PPC_WEAK_FUNC(sub_8315E990);
PPC_FUNC_IMPL(__imp__sub_8315E990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,26448
	ctx.r9.s64 = ctx.r11.s64 + 26448;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r8,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E9C0"))) PPC_WEAK_FUNC(sub_8315E9C0);
PPC_FUNC_IMPL(__imp__sub_8315E9C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,26432
	ctx.r10.s64 = ctx.r10.s64 + 26432;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E9E0"))) PPC_WEAK_FUNC(sub_8315E9E0);
PPC_FUNC_IMPL(__imp__sub_8315E9E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,26400
	ctx.r10.s64 = ctx.r10.s64 + 26400;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315EA00"))) PPC_WEAK_FUNC(sub_8315EA00);
PPC_FUNC_IMPL(__imp__sub_8315EA00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,26552
	ctx.r3.s64 = ctx.r11.s64 + 26552;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315EA10"))) PPC_WEAK_FUNC(sub_8315EA10);
PPC_FUNC_IMPL(__imp__sub_8315EA10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,26512
	ctx.r10.s64 = ctx.r10.s64 + 26512;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315EA30"))) PPC_WEAK_FUNC(sub_8315EA30);
PPC_FUNC_IMPL(__imp__sub_8315EA30) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r31,26624
	ctx.r30.s64 = ctx.r31.s64 + 26624;
	// addi r4,r11,-8136
	ctx.r4.s64 = ctx.r11.s64 + -8136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315EA5C;
	sub_82C07410(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,-9960(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9960);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-18056
	ctx.r3.s64 = ctx.r7.s64 + -18056;
	// lfs f12,29264(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29264);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,26624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26624, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315EA9C;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315EAB8"))) PPC_WEAK_FUNC(sub_8315EAB8);
PPC_FUNC_IMPL(__imp__sub_8315EAB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,31640
	ctx.r3.s64 = ctx.r11.s64 + 31640;
	// bl 0x82864e60
	ctx.lr = 0x8315EAD0;
	sub_82864E60(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stb r3,26487(r11)
	PPC_STORE_U8(ctx.r11.u32 + 26487, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315EAE8"))) PPC_WEAK_FUNC(sub_8315EAE8);
PPC_FUNC_IMPL(__imp__sub_8315EAE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,31652
	ctx.r3.s64 = ctx.r11.s64 + 31652;
	// bl 0x82864e60
	ctx.lr = 0x8315EB00;
	sub_82864E60(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stb r3,26551(r11)
	PPC_STORE_U8(ctx.r11.u32 + 26551, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315EB18"))) PPC_WEAK_FUNC(sub_8315EB18);
PPC_FUNC_IMPL(__imp__sub_8315EB18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,26483
	ctx.r3.s64 = ctx.r11.s64 + 26483;
	// b 0x82560ce8
	sub_82560CE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315EB28"))) PPC_WEAK_FUNC(sub_8315EB28);
PPC_FUNC_IMPL(__imp__sub_8315EB28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,26549
	ctx.r3.s64 = ctx.r11.s64 + 26549;
	// b 0x82561090
	sub_82561090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315EB38"))) PPC_WEAK_FUNC(sub_8315EB38);
PPC_FUNC_IMPL(__imp__sub_8315EB38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,26481
	ctx.r3.s64 = ctx.r11.s64 + 26481;
	// b 0x82563300
	sub_82563300(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315EB48"))) PPC_WEAK_FUNC(sub_8315EB48);
PPC_FUNC_IMPL(__imp__sub_8315EB48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-17952
	ctx.r3.s64 = ctx.r11.s64 + -17952;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315EB58"))) PPC_WEAK_FUNC(sub_8315EB58);
PPC_FUNC_IMPL(__imp__sub_8315EB58) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r31,26488
	ctx.r30.s64 = ctx.r31.s64 + 26488;
	// addi r4,r11,-8088
	ctx.r4.s64 = ctx.r11.s64 + -8088;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315EB84;
	sub_82C07410(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,-9960(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9960);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-17944
	ctx.r3.s64 = ctx.r7.s64 + -17944;
	// lfs f12,29264(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29264);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,26488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26488, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315EBC4;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315EBE0"))) PPC_WEAK_FUNC(sub_8315EBE0);
PPC_FUNC_IMPL(__imp__sub_8315EBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,26482
	ctx.r3.s64 = ctx.r11.s64 + 26482;
	// b 0x82563698
	sub_82563698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315EBF0"))) PPC_WEAK_FUNC(sub_8315EBF0);
PPC_FUNC_IMPL(__imp__sub_8315EBF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,26550
	ctx.r3.s64 = ctx.r11.s64 + 26550;
	// b 0x82563708
	sub_82563708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315EC00"))) PPC_WEAK_FUNC(sub_8315EC00);
PPC_FUNC_IMPL(__imp__sub_8315EC00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,26486
	ctx.r3.s64 = ctx.r11.s64 + 26486;
	// b 0x825637d0
	sub_825637D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315EC10"))) PPC_WEAK_FUNC(sub_8315EC10);
PPC_FUNC_IMPL(__imp__sub_8315EC10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,26485
	ctx.r3.s64 = ctx.r11.s64 + 26485;
	// b 0x82563898
	sub_82563898(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315EC20"))) PPC_WEAK_FUNC(sub_8315EC20);
PPC_FUNC_IMPL(__imp__sub_8315EC20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,26548
	ctx.r3.s64 = ctx.r11.s64 + 26548;
	// b 0x82563960
	sub_82563960(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315EC30"))) PPC_WEAK_FUNC(sub_8315EC30);
PPC_FUNC_IMPL(__imp__sub_8315EC30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,26480
	ctx.r3.s64 = ctx.r11.s64 + 26480;
	// b 0x82561748
	sub_82561748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315EC40"))) PPC_WEAK_FUNC(sub_8315EC40);
PPC_FUNC_IMPL(__imp__sub_8315EC40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,26484
	ctx.r3.s64 = ctx.r11.s64 + 26484;
	// b 0x82561948
	sub_82561948(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315EC50"))) PPC_WEAK_FUNC(sub_8315EC50);
PPC_FUNC_IMPL(__imp__sub_8315EC50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,26896
	ctx.r9.s64 = ctx.r11.s64 + 26896;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315EC80"))) PPC_WEAK_FUNC(sub_8315EC80);
PPC_FUNC_IMPL(__imp__sub_8315EC80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,26864
	ctx.r9.s64 = ctx.r11.s64 + 26864;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315ECB0"))) PPC_WEAK_FUNC(sub_8315ECB0);
PPC_FUNC_IMPL(__imp__sub_8315ECB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,26784
	ctx.r9.s64 = ctx.r11.s64 + 26784;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315ECE0"))) PPC_WEAK_FUNC(sub_8315ECE0);
PPC_FUNC_IMPL(__imp__sub_8315ECE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,26848
	ctx.r9.s64 = ctx.r11.s64 + 26848;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r8,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315ED10"))) PPC_WEAK_FUNC(sub_8315ED10);
PPC_FUNC_IMPL(__imp__sub_8315ED10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,26832
	ctx.r10.s64 = ctx.r10.s64 + 26832;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315ED30"))) PPC_WEAK_FUNC(sub_8315ED30);
PPC_FUNC_IMPL(__imp__sub_8315ED30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,26768
	ctx.r10.s64 = ctx.r10.s64 + 26768;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315ED50"))) PPC_WEAK_FUNC(sub_8315ED50);
PPC_FUNC_IMPL(__imp__sub_8315ED50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-17616
	ctx.r3.s64 = ctx.r11.s64 + -17616;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315ED60"))) PPC_WEAK_FUNC(sub_8315ED60);
PPC_FUNC_IMPL(__imp__sub_8315ED60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,26880
	ctx.r10.s64 = ctx.r10.s64 + 26880;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315ED80"))) PPC_WEAK_FUNC(sub_8315ED80);
PPC_FUNC_IMPL(__imp__sub_8315ED80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,26944
	ctx.r3.s64 = ctx.r11.s64 + 26944;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315ED90"))) PPC_WEAK_FUNC(sub_8315ED90);
PPC_FUNC_IMPL(__imp__sub_8315ED90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,4
	ctx.r10.s64 = 4;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r11,r11,26912
	ctx.r11.s64 = ctx.r11.s64 + 26912;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_8315EDA8:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stwu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8315eda8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8315EDA8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315EDB8"))) PPC_WEAK_FUNC(sub_8315EDB8);
PPC_FUNC_IMPL(__imp__sub_8315EDB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-17648
	ctx.r3.s64 = ctx.r11.s64 + -17648;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315EDC8"))) PPC_WEAK_FUNC(sub_8315EDC8);
PPC_FUNC_IMPL(__imp__sub_8315EDC8) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r31,26800
	ctx.r30.s64 = ctx.r31.s64 + 26800;
	// addi r4,r11,-2372
	ctx.r4.s64 = ctx.r11.s64 + -2372;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315EDF4;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3492(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3492);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-17640
	ctx.r3.s64 = ctx.r7.s64 + -17640;
	// lfs f12,29264(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29264);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,26800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26800, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315EE34;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315EE50"))) PPC_WEAK_FUNC(sub_8315EE50);
PPC_FUNC_IMPL(__imp__sub_8315EE50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,27392
	ctx.r9.s64 = ctx.r11.s64 + 27392;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315EE80"))) PPC_WEAK_FUNC(sub_8315EE80);
PPC_FUNC_IMPL(__imp__sub_8315EE80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,27328
	ctx.r9.s64 = ctx.r11.s64 + 27328;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315EEB0"))) PPC_WEAK_FUNC(sub_8315EEB0);
PPC_FUNC_IMPL(__imp__sub_8315EEB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,27232
	ctx.r9.s64 = ctx.r11.s64 + 27232;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315EEE0"))) PPC_WEAK_FUNC(sub_8315EEE0);
PPC_FUNC_IMPL(__imp__sub_8315EEE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,27264
	ctx.r9.s64 = ctx.r11.s64 + 27264;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r8,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315EF10"))) PPC_WEAK_FUNC(sub_8315EF10);
PPC_FUNC_IMPL(__imp__sub_8315EF10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,27248
	ctx.r10.s64 = ctx.r10.s64 + 27248;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315EF30"))) PPC_WEAK_FUNC(sub_8315EF30);
PPC_FUNC_IMPL(__imp__sub_8315EF30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,27216
	ctx.r10.s64 = ctx.r10.s64 + 27216;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315EF50"))) PPC_WEAK_FUNC(sub_8315EF50);
PPC_FUNC_IMPL(__imp__sub_8315EF50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-17312
	ctx.r3.s64 = ctx.r11.s64 + -17312;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315EF60"))) PPC_WEAK_FUNC(sub_8315EF60);
PPC_FUNC_IMPL(__imp__sub_8315EF60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,27376
	ctx.r10.s64 = ctx.r10.s64 + 27376;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315EF80"))) PPC_WEAK_FUNC(sub_8315EF80);
PPC_FUNC_IMPL(__imp__sub_8315EF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,32176
	ctx.r3.s64 = ctx.r11.s64 + 32176;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315EF90"))) PPC_WEAK_FUNC(sub_8315EF90);
PPC_FUNC_IMPL(__imp__sub_8315EF90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,27212
	ctx.r3.s64 = ctx.r11.s64 + 27212;
	// b 0x82592b80
	sub_82592B80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315EFA0"))) PPC_WEAK_FUNC(sub_8315EFA0);
PPC_FUNC_IMPL(__imp__sub_8315EFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,27214
	ctx.r3.s64 = ctx.r11.s64 + 27214;
	// b 0x82592c48
	sub_82592C48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315EFB0"))) PPC_WEAK_FUNC(sub_8315EFB0);
PPC_FUNC_IMPL(__imp__sub_8315EFB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,27213
	ctx.r3.s64 = ctx.r11.s64 + 27213;
	// b 0x82592d10
	sub_82592D10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315EFC0"))) PPC_WEAK_FUNC(sub_8315EFC0);
PPC_FUNC_IMPL(__imp__sub_8315EFC0) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r31,27304
	ctx.r30.s64 = ctx.r31.s64 + 27304;
	// addi r4,r11,9136
	ctx.r4.s64 = ctx.r11.s64 + 9136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315EFEC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3492(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3492);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-17400
	ctx.r3.s64 = ctx.r7.s64 + -17400;
	// lfs f12,29264(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29264);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,27304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27304, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315F02C;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F048"))) PPC_WEAK_FUNC(sub_8315F048);
PPC_FUNC_IMPL(__imp__sub_8315F048) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r31,27280
	ctx.r30.s64 = ctx.r31.s64 + 27280;
	// addi r4,r11,9196
	ctx.r4.s64 = ctx.r11.s64 + 9196;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315F074;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3492(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3492);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-17376
	ctx.r3.s64 = ctx.r7.s64 + -17376;
	// lfs f12,29264(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29264);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,27280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27280, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315F0B4;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F0D0"))) PPC_WEAK_FUNC(sub_8315F0D0);
PPC_FUNC_IMPL(__imp__sub_8315F0D0) {
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
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r31,32152
	ctx.r30.s64 = ctx.r31.s64 + 32152;
	// addi r4,r11,9256
	ctx.r4.s64 = ctx.r11.s64 + 9256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315F0FC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3384(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3384);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-17352
	ctx.r3.s64 = ctx.r10.s64 + -17352;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,32152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32152, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315F144;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F160"))) PPC_WEAK_FUNC(sub_8315F160);
PPC_FUNC_IMPL(__imp__sub_8315F160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,32356
	ctx.r31.s64 = ctx.r11.s64 + 32356;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x8315F184;
	sub_824683B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r3,r10,-17584
	ctx.r3.s64 = ctx.r10.s64 + -17584;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315F198;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F1B0"))) PPC_WEAK_FUNC(sub_8315F1B0);
PPC_FUNC_IMPL(__imp__sub_8315F1B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,32388
	ctx.r31.s64 = ctx.r11.s64 + 32388;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x8315F1D4;
	sub_824683B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r3,r10,-17568
	ctx.r3.s64 = ctx.r10.s64 + -17568;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315F1E8;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F200"))) PPC_WEAK_FUNC(sub_8315F200);
PPC_FUNC_IMPL(__imp__sub_8315F200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,27344
	ctx.r31.s64 = ctx.r11.s64 + 27344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x8315F224;
	sub_824683B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r3,r10,-17552
	ctx.r3.s64 = ctx.r10.s64 + -17552;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315F238;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F250"))) PPC_WEAK_FUNC(sub_8315F250);
PPC_FUNC_IMPL(__imp__sub_8315F250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,32248
	ctx.r31.s64 = ctx.r11.s64 + 32248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x8315F274;
	sub_824683B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r3,r10,-17536
	ctx.r3.s64 = ctx.r10.s64 + -17536;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315F288;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F2A0"))) PPC_WEAK_FUNC(sub_8315F2A0);
PPC_FUNC_IMPL(__imp__sub_8315F2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-17328
	ctx.r3.s64 = ctx.r11.s64 + -17328;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315F2B0"))) PPC_WEAK_FUNC(sub_8315F2B0);
PPC_FUNC_IMPL(__imp__sub_8315F2B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,32280
	ctx.r3.s64 = ctx.r11.s64 + 32280;
	// bl 0x82c3fb30
	ctx.lr = 0x8315F2C8;
	sub_82C3FB30(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-17280
	ctx.r3.s64 = ctx.r11.s64 + -17280;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315F2D4;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F2E8"))) PPC_WEAK_FUNC(sub_8315F2E8);
PPC_FUNC_IMPL(__imp__sub_8315F2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,27416
	ctx.r3.s64 = ctx.r11.s64 + 27416;
	// b 0x8257c178
	sub_8257C178(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315F2F8"))) PPC_WEAK_FUNC(sub_8315F2F8);
PPC_FUNC_IMPL(__imp__sub_8315F2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-17264
	ctx.r3.s64 = ctx.r11.s64 + -17264;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315F308"))) PPC_WEAK_FUNC(sub_8315F308);
PPC_FUNC_IMPL(__imp__sub_8315F308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// addi r10,r10,-27216
	ctx.r10.s64 = ctx.r10.s64 + -27216;
	// lwz r11,-27396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27396);
	// stw r11,1780(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1780, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F320"))) PPC_WEAK_FUNC(sub_8315F320);
PPC_FUNC_IMPL(__imp__sub_8315F320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-32688
	ctx.r9.s64 = ctx.r11.s64 + -32688;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F350"))) PPC_WEAK_FUNC(sub_8315F350);
PPC_FUNC_IMPL(__imp__sub_8315F350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-32720
	ctx.r9.s64 = ctx.r11.s64 + -32720;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F380"))) PPC_WEAK_FUNC(sub_8315F380);
PPC_FUNC_IMPL(__imp__sub_8315F380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-32768
	ctx.r9.s64 = ctx.r11.s64 + -32768;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F3B0"))) PPC_WEAK_FUNC(sub_8315F3B0);
PPC_FUNC_IMPL(__imp__sub_8315F3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-32736
	ctx.r9.s64 = ctx.r11.s64 + -32736;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r8,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F3E0"))) PPC_WEAK_FUNC(sub_8315F3E0);
PPC_FUNC_IMPL(__imp__sub_8315F3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-32752
	ctx.r10.s64 = ctx.r10.s64 + -32752;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F400"))) PPC_WEAK_FUNC(sub_8315F400);
PPC_FUNC_IMPL(__imp__sub_8315F400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,32752
	ctx.r10.s64 = ctx.r10.s64 + 32752;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F420"))) PPC_WEAK_FUNC(sub_8315F420);
PPC_FUNC_IMPL(__imp__sub_8315F420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-17032
	ctx.r3.s64 = ctx.r11.s64 + -17032;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315F430"))) PPC_WEAK_FUNC(sub_8315F430);
PPC_FUNC_IMPL(__imp__sub_8315F430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// addi r3,r11,-32656
	ctx.r3.s64 = ctx.r11.s64 + -32656;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315F440"))) PPC_WEAK_FUNC(sub_8315F440);
PPC_FUNC_IMPL(__imp__sub_8315F440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,-32704
	ctx.r10.s64 = ctx.r10.s64 + -32704;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F460"))) PPC_WEAK_FUNC(sub_8315F460);
PPC_FUNC_IMPL(__imp__sub_8315F460) {
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
	// lis r31,-31953
	ctx.r31.s64 = -2094071808;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r31,-32584
	ctx.r30.s64 = ctx.r31.s64 + -32584;
	// addi r4,r11,9564
	ctx.r4.s64 = ctx.r11.s64 + 9564;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315F48C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-17168
	ctx.r3.s64 = ctx.r9.s64 + -17168;
	// lfs f0,3408(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3408);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,-32584(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32584, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315F4B0;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F4C8"))) PPC_WEAK_FUNC(sub_8315F4C8);
PPC_FUNC_IMPL(__imp__sub_8315F4C8) {
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
	// lis r31,-31953
	ctx.r31.s64 = -2094071808;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r31,-32568
	ctx.r30.s64 = ctx.r31.s64 + -32568;
	// addi r4,r11,9608
	ctx.r4.s64 = ctx.r11.s64 + 9608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315F4F4;
	sub_82C07410(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-17144
	ctx.r3.s64 = ctx.r9.s64 + -17144;
	// lfs f0,9604(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9604);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,-32568(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32568, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315F518;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F530"))) PPC_WEAK_FUNC(sub_8315F530);
PPC_FUNC_IMPL(__imp__sub_8315F530) {
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
	// lis r31,-31953
	ctx.r31.s64 = -2094071808;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r31,-32668
	ctx.r30.s64 = ctx.r31.s64 + -32668;
	// addi r4,r11,9648
	ctx.r4.s64 = ctx.r11.s64 + 9648;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315F55C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-17120
	ctx.r3.s64 = ctx.r9.s64 + -17120;
	// lfs f0,3276(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3276);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,-32668(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32668, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315F580;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F598"))) PPC_WEAK_FUNC(sub_8315F598);
PPC_FUNC_IMPL(__imp__sub_8315F598) {
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
	// lis r31,-31953
	ctx.r31.s64 = -2094071808;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r31,-32556
	ctx.r30.s64 = ctx.r31.s64 + -32556;
	// addi r4,r11,9520
	ctx.r4.s64 = ctx.r11.s64 + 9520;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8315F5C4;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-17096
	ctx.r3.s64 = ctx.r9.s64 + -17096;
	// lfs f0,3320(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3320);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,-32556(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32556, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8315F5E8;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F600"))) PPC_WEAK_FUNC(sub_8315F600);
PPC_FUNC_IMPL(__imp__sub_8315F600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// addi r3,r11,-32572
	ctx.r3.s64 = ctx.r11.s64 + -32572;
	// b 0x825a7088
	sub_825A7088(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315F610"))) PPC_WEAK_FUNC(sub_8315F610);
PPC_FUNC_IMPL(__imp__sub_8315F610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-10464
	ctx.r9.s64 = ctx.r11.s64 + -10464;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F640"))) PPC_WEAK_FUNC(sub_8315F640);
PPC_FUNC_IMPL(__imp__sub_8315F640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-10496
	ctx.r9.s64 = ctx.r11.s64 + -10496;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F670"))) PPC_WEAK_FUNC(sub_8315F670);
PPC_FUNC_IMPL(__imp__sub_8315F670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-32528
	ctx.r9.s64 = ctx.r11.s64 + -32528;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F6A0"))) PPC_WEAK_FUNC(sub_8315F6A0);
PPC_FUNC_IMPL(__imp__sub_8315F6A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-10512
	ctx.r9.s64 = ctx.r11.s64 + -10512;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r8,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F6D0"))) PPC_WEAK_FUNC(sub_8315F6D0);
PPC_FUNC_IMPL(__imp__sub_8315F6D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-10528
	ctx.r10.s64 = ctx.r10.s64 + -10528;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F6F0"))) PPC_WEAK_FUNC(sub_8315F6F0);
PPC_FUNC_IMPL(__imp__sub_8315F6F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-32544
	ctx.r10.s64 = ctx.r10.s64 + -32544;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F710"))) PPC_WEAK_FUNC(sub_8315F710);
PPC_FUNC_IMPL(__imp__sub_8315F710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-17016
	ctx.r3.s64 = ctx.r11.s64 + -17016;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315F720"))) PPC_WEAK_FUNC(sub_8315F720);
PPC_FUNC_IMPL(__imp__sub_8315F720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,-10480
	ctx.r10.s64 = ctx.r10.s64 + -10480;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F740"))) PPC_WEAK_FUNC(sub_8315F740);
PPC_FUNC_IMPL(__imp__sub_8315F740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-10440
	ctx.r3.s64 = ctx.r11.s64 + -10440;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315F750"))) PPC_WEAK_FUNC(sub_8315F750);
PPC_FUNC_IMPL(__imp__sub_8315F750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// addi r3,r11,-32512
	ctx.r3.s64 = ctx.r11.s64 + -32512;
	// bl 0x825aaeb0
	ctx.lr = 0x8315F768;
	sub_825AAEB0(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-17000
	ctx.r3.s64 = ctx.r11.s64 + -17000;
	// bl 0x82a7e6b0
	ctx.lr = 0x8315F774;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F788"))) PPC_WEAK_FUNC(sub_8315F788);
PPC_FUNC_IMPL(__imp__sub_8315F788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-15784
	ctx.r3.s64 = ctx.r11.s64 + -15784;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315F798"))) PPC_WEAK_FUNC(sub_8315F798);
PPC_FUNC_IMPL(__imp__sub_8315F798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-10240
	ctx.r9.s64 = ctx.r11.s64 + -10240;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F7C8"))) PPC_WEAK_FUNC(sub_8315F7C8);
PPC_FUNC_IMPL(__imp__sub_8315F7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-10272
	ctx.r9.s64 = ctx.r11.s64 + -10272;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F7F8"))) PPC_WEAK_FUNC(sub_8315F7F8);
PPC_FUNC_IMPL(__imp__sub_8315F7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-10336
	ctx.r9.s64 = ctx.r11.s64 + -10336;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F828"))) PPC_WEAK_FUNC(sub_8315F828);
PPC_FUNC_IMPL(__imp__sub_8315F828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-10288
	ctx.r9.s64 = ctx.r11.s64 + -10288;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r8,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F858"))) PPC_WEAK_FUNC(sub_8315F858);
PPC_FUNC_IMPL(__imp__sub_8315F858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-10304
	ctx.r10.s64 = ctx.r10.s64 + -10304;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F878"))) PPC_WEAK_FUNC(sub_8315F878);
PPC_FUNC_IMPL(__imp__sub_8315F878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-10352
	ctx.r10.s64 = ctx.r10.s64 + -10352;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F898"))) PPC_WEAK_FUNC(sub_8315F898);
PPC_FUNC_IMPL(__imp__sub_8315F898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-10224
	ctx.r3.s64 = ctx.r11.s64 + -10224;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315F8A8"))) PPC_WEAK_FUNC(sub_8315F8A8);
PPC_FUNC_IMPL(__imp__sub_8315F8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,-10256
	ctx.r10.s64 = ctx.r10.s64 + -10256;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F8C8"))) PPC_WEAK_FUNC(sub_8315F8C8);
PPC_FUNC_IMPL(__imp__sub_8315F8C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-10361
	ctx.r3.s64 = ctx.r11.s64 + -10361;
	// b 0x825b26d0
	sub_825B26D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315F8D8"))) PPC_WEAK_FUNC(sub_8315F8D8);
PPC_FUNC_IMPL(__imp__sub_8315F8D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-10152
	ctx.r3.s64 = ctx.r11.s64 + -10152;
	// b 0x825b2798
	sub_825B2798(ctx, base);
	return;
}

