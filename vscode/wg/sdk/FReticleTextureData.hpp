#pragma once
#include "FVector2D.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FReticleTextureData // Size: 0x30
{
public:
    float ReticleAngularSize; /* Ofs: 0x0 Size: 0x4 FloatProperty TslGame.ReticleTextureData.ReticleAngularSize */
    FVector2D ReticleCenter; /* Ofs: 0x4 Size: 0x8 StructProperty TslGame.ReticleTextureData.ReticleCenter */
    uint8_t UnknownDataC[0x4];
    ExternalPtr<struct UTexture2D> ReticleTexture; /* Ofs: 0x10 Size: 0x8 ObjectProperty TslGame.ReticleTextureData.ReticleTexture */
    bool bUseHaloTexture; /* Ofs: 0x18 Size: 0x1 BitMask: 01 BoolProperty TslGame.ReticleTextureData.bUseHaloTexture */
    uint8_t UnknownData19[0x3];
    float HaloTextureScale; /* Ofs: 0x1C Size: 0x4 FloatProperty TslGame.ReticleTextureData.HaloTextureScale */
    FVector ReticleColor; /* Ofs: 0x20 Size: 0xC StructProperty TslGame.ReticleTextureData.ReticleColor */
    float ReticleScale; /* Ofs: 0x2C Size: 0x4 FloatProperty TslGame.ReticleTextureData.ReticleScale */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFReticleTextureData = sizeof(FReticleTextureData); // 48
    static_assert(sizeof(FReticleTextureData) == 0x30, "Size of FReticleTextureData is not correct.");
	auto constexpr FReticleTextureData_ReticleAngularSize_Offset = offsetof(FReticleTextureData, ReticleAngularSize);
	static_assert(FReticleTextureData_ReticleAngularSize_Offset == 0x0, "FReticleTextureData::ReticleAngularSize offset is not 0");
	auto constexpr FReticleTextureData_ReticleCenter_Offset = offsetof(FReticleTextureData, ReticleCenter);
	static_assert(FReticleTextureData_ReticleCenter_Offset == 0x4, "FReticleTextureData::ReticleCenter offset is not 4");
	auto constexpr FReticleTextureData_ReticleTexture_Offset = offsetof(FReticleTextureData, ReticleTexture);
	static_assert(FReticleTextureData_ReticleTexture_Offset == 0x10, "FReticleTextureData::ReticleTexture offset is not 10");
	auto constexpr FReticleTextureData_HaloTextureScale_Offset = offsetof(FReticleTextureData, HaloTextureScale);
	static_assert(FReticleTextureData_HaloTextureScale_Offset == 0x1c, "FReticleTextureData::HaloTextureScale offset is not 1c");
	auto constexpr FReticleTextureData_ReticleColor_Offset = offsetof(FReticleTextureData, ReticleColor);
	static_assert(FReticleTextureData_ReticleColor_Offset == 0x20, "FReticleTextureData::ReticleColor offset is not 20");
	auto constexpr FReticleTextureData_ReticleScale_Offset = offsetof(FReticleTextureData, ReticleScale);
	static_assert(FReticleTextureData_ReticleScale_Offset == 0x2c, "FReticleTextureData::ReticleScale offset is not 2c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
