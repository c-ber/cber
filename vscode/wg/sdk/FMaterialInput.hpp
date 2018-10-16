#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMaterialInput // Size: 0x38
{
public:
    int32_t OutputIndex; /* Ofs: 0x0 Size: 0x4 IntProperty Engine.MaterialInput.OutputIndex */
    uint8_t UnknownData4[0x4];
    FString InputName; /* Ofs: 0x8 Size: 0x10 StrProperty Engine.MaterialInput.InputName */
    int32_t Mask; /* Ofs: 0x18 Size: 0x4 IntProperty Engine.MaterialInput.Mask */
    int32_t MaskR; /* Ofs: 0x1C Size: 0x4 IntProperty Engine.MaterialInput.MaskR */
    int32_t MaskG; /* Ofs: 0x20 Size: 0x4 IntProperty Engine.MaterialInput.MaskG */
    int32_t MaskB; /* Ofs: 0x24 Size: 0x4 IntProperty Engine.MaterialInput.MaskB */
    int32_t MaskA; /* Ofs: 0x28 Size: 0x4 IntProperty Engine.MaterialInput.MaskA */
    uint8_t UnknownData2C[0x4];
    FName ExpressionName; /* Ofs: 0x30 Size: 0x8 NameProperty Engine.MaterialInput.ExpressionName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMaterialInput = sizeof(FMaterialInput); // 56
    static_assert(sizeof(FMaterialInput) == 0x38, "Size of FMaterialInput is not correct.");
	auto constexpr FMaterialInput_OutputIndex_Offset = offsetof(FMaterialInput, OutputIndex);
	static_assert(FMaterialInput_OutputIndex_Offset == 0x0, "FMaterialInput::OutputIndex offset is not 0");
	auto constexpr FMaterialInput_InputName_Offset = offsetof(FMaterialInput, InputName);
	static_assert(FMaterialInput_InputName_Offset == 0x8, "FMaterialInput::InputName offset is not 8");
	auto constexpr FMaterialInput_Mask_Offset = offsetof(FMaterialInput, Mask);
	static_assert(FMaterialInput_Mask_Offset == 0x18, "FMaterialInput::Mask offset is not 18");
	auto constexpr FMaterialInput_MaskR_Offset = offsetof(FMaterialInput, MaskR);
	static_assert(FMaterialInput_MaskR_Offset == 0x1c, "FMaterialInput::MaskR offset is not 1c");
	auto constexpr FMaterialInput_MaskG_Offset = offsetof(FMaterialInput, MaskG);
	static_assert(FMaterialInput_MaskG_Offset == 0x20, "FMaterialInput::MaskG offset is not 20");
	auto constexpr FMaterialInput_MaskB_Offset = offsetof(FMaterialInput, MaskB);
	static_assert(FMaterialInput_MaskB_Offset == 0x24, "FMaterialInput::MaskB offset is not 24");
	auto constexpr FMaterialInput_MaskA_Offset = offsetof(FMaterialInput, MaskA);
	static_assert(FMaterialInput_MaskA_Offset == 0x28, "FMaterialInput::MaskA offset is not 28");
	auto constexpr FMaterialInput_ExpressionName_Offset = offsetof(FMaterialInput, ExpressionName);
	static_assert(FMaterialInput_ExpressionName_Offset == 0x30, "FMaterialInput::ExpressionName offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
