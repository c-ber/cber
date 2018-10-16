#pragma once
#include "FFloatRange.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDecalEffectData // Size: 0x28
{
public:
    ExternalPtr<struct UMaterial> Material; /* Ofs: 0x0 Size: 0x8 ObjectProperty TslGame.DecalEffectData.Material */
    FFloatRange Size; /* Ofs: 0x8 Size: 0x10 StructProperty TslGame.DecalEffectData.Size */
    float FadeScreenSize; /* Ofs: 0x18 Size: 0x4 FloatProperty TslGame.DecalEffectData.FadeScreenSize */
    float FadeStartDelay; /* Ofs: 0x1C Size: 0x4 FloatProperty TslGame.DecalEffectData.FadeStartDelay */
    float FadeDuration; /* Ofs: 0x20 Size: 0x4 FloatProperty TslGame.DecalEffectData.FadeDuration */
    bool bUseRandomInput; /* Ofs: 0x24 Size: 0x1 BitMask: 01 BoolProperty TslGame.DecalEffectData.bUseRandomInput */
    bool bUseRandomRoll; /* Ofs: 0x25 Size: 0x1 BitMask: 01 BoolProperty TslGame.DecalEffectData.bUseRandomRoll */
    bool bReversal; /* Ofs: 0x26 Size: 0x1 BitMask: 01 BoolProperty TslGame.DecalEffectData.bReversal */
    uint8_t UnknownData27[0x1];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDecalEffectData = sizeof(FDecalEffectData); // 40
    static_assert(sizeof(FDecalEffectData) == 0x28, "Size of FDecalEffectData is not correct.");
	auto constexpr FDecalEffectData_Material_Offset = offsetof(FDecalEffectData, Material);
	static_assert(FDecalEffectData_Material_Offset == 0x0, "FDecalEffectData::Material offset is not 0");
	auto constexpr FDecalEffectData_Size_Offset = offsetof(FDecalEffectData, Size);
	static_assert(FDecalEffectData_Size_Offset == 0x8, "FDecalEffectData::Size offset is not 8");
	auto constexpr FDecalEffectData_FadeScreenSize_Offset = offsetof(FDecalEffectData, FadeScreenSize);
	static_assert(FDecalEffectData_FadeScreenSize_Offset == 0x18, "FDecalEffectData::FadeScreenSize offset is not 18");
	auto constexpr FDecalEffectData_FadeStartDelay_Offset = offsetof(FDecalEffectData, FadeStartDelay);
	static_assert(FDecalEffectData_FadeStartDelay_Offset == 0x1c, "FDecalEffectData::FadeStartDelay offset is not 1c");
	auto constexpr FDecalEffectData_FadeDuration_Offset = offsetof(FDecalEffectData, FadeDuration);
	static_assert(FDecalEffectData_FadeDuration_Offset == 0x20, "FDecalEffectData::FadeDuration offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
