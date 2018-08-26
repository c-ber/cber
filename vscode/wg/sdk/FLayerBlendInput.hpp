#pragma once
#include "ELandscapeLayerBlendType.hpp"
#include "FExpressionInput.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLayerBlendInput // Size: 0x98
{
public:
    FName LayerName; /* Ofs: 0x0 Size: 0x8 NameProperty Landscape.LayerBlendInput.LayerName */
    TEnumAsByte<enum ELandscapeLayerBlendType> BlendType; /* Ofs: 0x8 Size: 0x1 ByteProperty Landscape.LayerBlendInput.BlendType */
    uint8_t UnknownData9[0x7];
    FExpressionInput LayerInput; /* Ofs: 0x10 Size: 0x38 StructProperty Landscape.LayerBlendInput.LayerInput */
    FExpressionInput HeightInput; /* Ofs: 0x48 Size: 0x38 StructProperty Landscape.LayerBlendInput.HeightInput */
    float PreviewWeight; /* Ofs: 0x80 Size: 0x4 FloatProperty Landscape.LayerBlendInput.PreviewWeight */
    FVector ConstLayerInput; /* Ofs: 0x84 Size: 0xC StructProperty Landscape.LayerBlendInput.ConstLayerInput */
    float ConstHeightInput; /* Ofs: 0x90 Size: 0x4 FloatProperty Landscape.LayerBlendInput.ConstHeightInput */
    uint8_t UnknownData94[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLayerBlendInput = sizeof(FLayerBlendInput); // 152
    static_assert(sizeof(FLayerBlendInput) == 0x98, "Size of FLayerBlendInput is not correct.");
	auto constexpr FLayerBlendInput_LayerName_Offset = offsetof(FLayerBlendInput, LayerName);
	static_assert(FLayerBlendInput_LayerName_Offset == 0x0, "FLayerBlendInput::LayerName offset is not 0");
	auto constexpr FLayerBlendInput_BlendType_Offset = offsetof(FLayerBlendInput, BlendType);
	static_assert(FLayerBlendInput_BlendType_Offset == 0x8, "FLayerBlendInput::BlendType offset is not 8");
	auto constexpr FLayerBlendInput_LayerInput_Offset = offsetof(FLayerBlendInput, LayerInput);
	static_assert(FLayerBlendInput_LayerInput_Offset == 0x10, "FLayerBlendInput::LayerInput offset is not 10");
	auto constexpr FLayerBlendInput_HeightInput_Offset = offsetof(FLayerBlendInput, HeightInput);
	static_assert(FLayerBlendInput_HeightInput_Offset == 0x48, "FLayerBlendInput::HeightInput offset is not 48");
	auto constexpr FLayerBlendInput_PreviewWeight_Offset = offsetof(FLayerBlendInput, PreviewWeight);
	static_assert(FLayerBlendInput_PreviewWeight_Offset == 0x80, "FLayerBlendInput::PreviewWeight offset is not 80");
	auto constexpr FLayerBlendInput_ConstLayerInput_Offset = offsetof(FLayerBlendInput, ConstLayerInput);
	static_assert(FLayerBlendInput_ConstLayerInput_Offset == 0x84, "FLayerBlendInput::ConstLayerInput offset is not 84");
	auto constexpr FLayerBlendInput_ConstHeightInput_Offset = offsetof(FLayerBlendInput, ConstHeightInput);
	static_assert(FLayerBlendInput_ConstHeightInput_Offset == 0x90, "FLayerBlendInput::ConstHeightInput offset is not 90");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
