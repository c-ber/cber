#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FExpressionInput // Size: 0x38
{
public:
    int32_t OutputIndex; /* Ofs: 0x0 Size: 0x4 IntProperty Engine.ExpressionInput.OutputIndex */
    uint8_t UnknownData4[0x4];
    FString InputName; /* Ofs: 0x8 Size: 0x10 StrProperty Engine.ExpressionInput.InputName */
    int32_t Mask; /* Ofs: 0x18 Size: 0x4 IntProperty Engine.ExpressionInput.Mask */
    int32_t MaskR; /* Ofs: 0x1C Size: 0x4 IntProperty Engine.ExpressionInput.MaskR */
    int32_t MaskG; /* Ofs: 0x20 Size: 0x4 IntProperty Engine.ExpressionInput.MaskG */
    int32_t MaskB; /* Ofs: 0x24 Size: 0x4 IntProperty Engine.ExpressionInput.MaskB */
    int32_t MaskA; /* Ofs: 0x28 Size: 0x4 IntProperty Engine.ExpressionInput.MaskA */
    uint8_t UnknownData2C[0x4];
    FName ExpressionName; /* Ofs: 0x30 Size: 0x8 NameProperty Engine.ExpressionInput.ExpressionName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFExpressionInput = sizeof(FExpressionInput); // 56
    static_assert(sizeof(FExpressionInput) == 0x38, "Size of FExpressionInput is not correct.");
	auto constexpr FExpressionInput_OutputIndex_Offset = offsetof(FExpressionInput, OutputIndex);
	static_assert(FExpressionInput_OutputIndex_Offset == 0x0, "FExpressionInput::OutputIndex offset is not 0");
	auto constexpr FExpressionInput_InputName_Offset = offsetof(FExpressionInput, InputName);
	static_assert(FExpressionInput_InputName_Offset == 0x8, "FExpressionInput::InputName offset is not 8");
	auto constexpr FExpressionInput_Mask_Offset = offsetof(FExpressionInput, Mask);
	static_assert(FExpressionInput_Mask_Offset == 0x18, "FExpressionInput::Mask offset is not 18");
	auto constexpr FExpressionInput_MaskR_Offset = offsetof(FExpressionInput, MaskR);
	static_assert(FExpressionInput_MaskR_Offset == 0x1c, "FExpressionInput::MaskR offset is not 1c");
	auto constexpr FExpressionInput_MaskG_Offset = offsetof(FExpressionInput, MaskG);
	static_assert(FExpressionInput_MaskG_Offset == 0x20, "FExpressionInput::MaskG offset is not 20");
	auto constexpr FExpressionInput_MaskB_Offset = offsetof(FExpressionInput, MaskB);
	static_assert(FExpressionInput_MaskB_Offset == 0x24, "FExpressionInput::MaskB offset is not 24");
	auto constexpr FExpressionInput_MaskA_Offset = offsetof(FExpressionInput, MaskA);
	static_assert(FExpressionInput_MaskA_Offset == 0x28, "FExpressionInput::MaskA offset is not 28");
	auto constexpr FExpressionInput_ExpressionName_Offset = offsetof(FExpressionInput, ExpressionName);
	static_assert(FExpressionInput_ExpressionName_Offset == 0x30, "FExpressionInput::ExpressionName offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
