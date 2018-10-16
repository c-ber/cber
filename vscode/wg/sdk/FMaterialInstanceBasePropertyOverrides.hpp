#pragma once
#include "EBlendMode.hpp"
#include "EMaterialShadingModel.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMaterialInstanceBasePropertyOverrides // Size: 0x14
{
public:
    bool bOverride_OpacityMaskClipValue; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Engine.MaterialInstanceBasePropertyOverrides.bOverride_OpacityMaskClipValue */
    bool bOverride_BlendMode; /* Ofs: 0x1 Size: 0x1 BitMask: 01 BoolProperty Engine.MaterialInstanceBasePropertyOverrides.bOverride_BlendMode */
    bool bOverride_ShadingModel; /* Ofs: 0x2 Size: 0x1 BitMask: 01 BoolProperty Engine.MaterialInstanceBasePropertyOverrides.bOverride_ShadingModel */
    bool bOverride_PrepassMasked; /* Ofs: 0x3 Size: 0x1 BitMask: 01 BoolProperty Engine.MaterialInstanceBasePropertyOverrides.bOverride_PrepassMasked */
    bool bOverride_DitheredLODTransition; /* Ofs: 0x4 Size: 0x1 BitMask: 01 BoolProperty Engine.MaterialInstanceBasePropertyOverrides.bOverride_DitheredLODTransition */
    bool bOverride_TwoSided; /* Ofs: 0x5 Size: 0x1 BitMask: 01 BoolProperty Engine.MaterialInstanceBasePropertyOverrides.bOverride_TwoSided */
    uint8_t UnknownData6[0x2];
    float OpacityMaskClipValue; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.MaterialInstanceBasePropertyOverrides.OpacityMaskClipValue */
    TEnumAsByte<enum EBlendMode> BlendMode; /* Ofs: 0xC Size: 0x1 ByteProperty Engine.MaterialInstanceBasePropertyOverrides.BlendMode */
    TEnumAsByte<enum EMaterialShadingModel> ShadingModel; /* Ofs: 0xD Size: 0x1 ByteProperty Engine.MaterialInstanceBasePropertyOverrides.ShadingModel */
    uint8_t UnknownDataE[0x2];
    bool PrepassMasked : 1; /* Ofs: 0x10 Size: 0x1 BitMask: 01 BoolProperty Engine.MaterialInstanceBasePropertyOverrides.PrepassMasked */
    bool TwoSided : 1; /* Ofs: 0x10 Size: 0x1 BitMask: 02 BoolProperty Engine.MaterialInstanceBasePropertyOverrides.TwoSided */
    bool DitheredLODTransition : 1; /* Ofs: 0x10 Size: 0x1 BitMask: 04 BoolProperty Engine.MaterialInstanceBasePropertyOverrides.DitheredLODTransition */
    uint8_t UnknownData11[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMaterialInstanceBasePropertyOverrides = sizeof(FMaterialInstanceBasePropertyOverrides); // 20
    static_assert(sizeof(FMaterialInstanceBasePropertyOverrides) == 0x14, "Size of FMaterialInstanceBasePropertyOverrides is not correct.");
	auto constexpr FMaterialInstanceBasePropertyOverrides_OpacityMaskClipValue_Offset = offsetof(FMaterialInstanceBasePropertyOverrides, OpacityMaskClipValue);
	static_assert(FMaterialInstanceBasePropertyOverrides_OpacityMaskClipValue_Offset == 0x8, "FMaterialInstanceBasePropertyOverrides::OpacityMaskClipValue offset is not 8");
	auto constexpr FMaterialInstanceBasePropertyOverrides_BlendMode_Offset = offsetof(FMaterialInstanceBasePropertyOverrides, BlendMode);
	static_assert(FMaterialInstanceBasePropertyOverrides_BlendMode_Offset == 0xc, "FMaterialInstanceBasePropertyOverrides::BlendMode offset is not c");
	auto constexpr FMaterialInstanceBasePropertyOverrides_ShadingModel_Offset = offsetof(FMaterialInstanceBasePropertyOverrides, ShadingModel);
	static_assert(FMaterialInstanceBasePropertyOverrides_ShadingModel_Offset == 0xd, "FMaterialInstanceBasePropertyOverrides::ShadingModel offset is not d");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
