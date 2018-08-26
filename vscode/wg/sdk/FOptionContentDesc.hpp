#pragma once
#include "EOptionExposeType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FOptionContentDesc // Size: 0x68
{
public:
    FName OptionName; /* Ofs: 0x0 Size: 0x8 NameProperty TslGame.OptionContentDesc.OptionName */
    FText DisplayName; /* Ofs: 0x8 Size: 0x18 TextProperty TslGame.OptionContentDesc.DisplayName */
    FText DescText; /* Ofs: 0x20 Size: 0x18 TextProperty TslGame.OptionContentDesc.DescText */
    TEnumAsByte<enum EOptionExposeType> ExposeType; /* Ofs: 0x38 Size: 0x1 EnumProperty TslGame.OptionContentDesc.ExposeType */
    bool bIsStepper; /* Ofs: 0x39 Size: 0x1 BitMask: 01 BoolProperty TslGame.OptionContentDesc.bIsStepper */
    uint8_t UnknownData3A[0x6];
    TArray<struct FText> StepperContents; /* Ofs: 0x40 Size: 0x10 ArrayProperty TslGame.OptionContentDesc.StepperContents */
    int32_t StepperDefaultIndex; /* Ofs: 0x50 Size: 0x4 IntProperty TslGame.OptionContentDesc.StepperDefaultIndex */
    bool bIsSlider; /* Ofs: 0x54 Size: 0x1 BitMask: 01 BoolProperty TslGame.OptionContentDesc.bIsSlider */
    uint8_t UnknownData55[0x3];
    float SliderMin; /* Ofs: 0x58 Size: 0x4 FloatProperty TslGame.OptionContentDesc.SliderMin */
    float SliderMax; /* Ofs: 0x5C Size: 0x4 FloatProperty TslGame.OptionContentDesc.SliderMax */
    float SliderDefaultValue; /* Ofs: 0x60 Size: 0x4 FloatProperty TslGame.OptionContentDesc.SliderDefaultValue */
    bool bIsSeparator; /* Ofs: 0x64 Size: 0x1 BitMask: 01 BoolProperty TslGame.OptionContentDesc.bIsSeparator */
    uint8_t UnknownData65[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFOptionContentDesc = sizeof(FOptionContentDesc); // 104
    static_assert(sizeof(FOptionContentDesc) == 0x68, "Size of FOptionContentDesc is not correct.");
	auto constexpr FOptionContentDesc_OptionName_Offset = offsetof(FOptionContentDesc, OptionName);
	static_assert(FOptionContentDesc_OptionName_Offset == 0x0, "FOptionContentDesc::OptionName offset is not 0");
	auto constexpr FOptionContentDesc_DisplayName_Offset = offsetof(FOptionContentDesc, DisplayName);
	static_assert(FOptionContentDesc_DisplayName_Offset == 0x8, "FOptionContentDesc::DisplayName offset is not 8");
	auto constexpr FOptionContentDesc_DescText_Offset = offsetof(FOptionContentDesc, DescText);
	static_assert(FOptionContentDesc_DescText_Offset == 0x20, "FOptionContentDesc::DescText offset is not 20");
	auto constexpr FOptionContentDesc_ExposeType_Offset = offsetof(FOptionContentDesc, ExposeType);
	static_assert(FOptionContentDesc_ExposeType_Offset == 0x38, "FOptionContentDesc::ExposeType offset is not 38");
	auto constexpr FOptionContentDesc_StepperContents_Offset = offsetof(FOptionContentDesc, StepperContents);
	static_assert(FOptionContentDesc_StepperContents_Offset == 0x40, "FOptionContentDesc::StepperContents offset is not 40");
	auto constexpr FOptionContentDesc_StepperDefaultIndex_Offset = offsetof(FOptionContentDesc, StepperDefaultIndex);
	static_assert(FOptionContentDesc_StepperDefaultIndex_Offset == 0x50, "FOptionContentDesc::StepperDefaultIndex offset is not 50");
	auto constexpr FOptionContentDesc_SliderMin_Offset = offsetof(FOptionContentDesc, SliderMin);
	static_assert(FOptionContentDesc_SliderMin_Offset == 0x58, "FOptionContentDesc::SliderMin offset is not 58");
	auto constexpr FOptionContentDesc_SliderMax_Offset = offsetof(FOptionContentDesc, SliderMax);
	static_assert(FOptionContentDesc_SliderMax_Offset == 0x5c, "FOptionContentDesc::SliderMax offset is not 5c");
	auto constexpr FOptionContentDesc_SliderDefaultValue_Offset = offsetof(FOptionContentDesc, SliderDefaultValue);
	static_assert(FOptionContentDesc_SliderDefaultValue_Offset == 0x60, "FOptionContentDesc::SliderDefaultValue offset is not 60");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
