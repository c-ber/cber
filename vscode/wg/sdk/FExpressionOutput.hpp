#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FExpressionOutput // Size: 0x28
{
public:
    FString OutputName; /* Ofs: 0x0 Size: 0x10 StrProperty Engine.ExpressionOutput.OutputName */
    int32_t Mask; /* Ofs: 0x10 Size: 0x4 IntProperty Engine.ExpressionOutput.Mask */
    int32_t MaskR; /* Ofs: 0x14 Size: 0x4 IntProperty Engine.ExpressionOutput.MaskR */
    int32_t MaskG; /* Ofs: 0x18 Size: 0x4 IntProperty Engine.ExpressionOutput.MaskG */
    int32_t MaskB; /* Ofs: 0x1C Size: 0x4 IntProperty Engine.ExpressionOutput.MaskB */
    int32_t MaskA; /* Ofs: 0x20 Size: 0x4 IntProperty Engine.ExpressionOutput.MaskA */
    uint8_t UnknownData24[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFExpressionOutput = sizeof(FExpressionOutput); // 40
    static_assert(sizeof(FExpressionOutput) == 0x28, "Size of FExpressionOutput is not correct.");
	auto constexpr FExpressionOutput_OutputName_Offset = offsetof(FExpressionOutput, OutputName);
	static_assert(FExpressionOutput_OutputName_Offset == 0x0, "FExpressionOutput::OutputName offset is not 0");
	auto constexpr FExpressionOutput_Mask_Offset = offsetof(FExpressionOutput, Mask);
	static_assert(FExpressionOutput_Mask_Offset == 0x10, "FExpressionOutput::Mask offset is not 10");
	auto constexpr FExpressionOutput_MaskR_Offset = offsetof(FExpressionOutput, MaskR);
	static_assert(FExpressionOutput_MaskR_Offset == 0x14, "FExpressionOutput::MaskR offset is not 14");
	auto constexpr FExpressionOutput_MaskG_Offset = offsetof(FExpressionOutput, MaskG);
	static_assert(FExpressionOutput_MaskG_Offset == 0x18, "FExpressionOutput::MaskG offset is not 18");
	auto constexpr FExpressionOutput_MaskB_Offset = offsetof(FExpressionOutput, MaskB);
	static_assert(FExpressionOutput_MaskB_Offset == 0x1c, "FExpressionOutput::MaskB offset is not 1c");
	auto constexpr FExpressionOutput_MaskA_Offset = offsetof(FExpressionOutput, MaskA);
	static_assert(FExpressionOutput_MaskA_Offset == 0x20, "FExpressionOutput::MaskA offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
