#pragma once
#include "FTransform.hpp"
#include "FRotator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FGPUSpriteLocalVectorFieldInfo // Size: 0x70
{
public:
    ExternalPtr<struct UVectorField> Field; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.GPUSpriteLocalVectorFieldInfo.Field */
    uint8_t UnknownData8[0x8];
    FTransform Transform; /* Ofs: 0x10 Size: 0x30 StructProperty Engine.GPUSpriteLocalVectorFieldInfo.Transform */
    FRotator MinInitialRotation; /* Ofs: 0x40 Size: 0xC StructProperty Engine.GPUSpriteLocalVectorFieldInfo.MinInitialRotation */
    FRotator MaxInitialRotation; /* Ofs: 0x4C Size: 0xC StructProperty Engine.GPUSpriteLocalVectorFieldInfo.MaxInitialRotation */
    FRotator RotationRate; /* Ofs: 0x58 Size: 0xC StructProperty Engine.GPUSpriteLocalVectorFieldInfo.RotationRate */
    float Intensity; /* Ofs: 0x64 Size: 0x4 FloatProperty Engine.GPUSpriteLocalVectorFieldInfo.Intensity */
    float Tightness; /* Ofs: 0x68 Size: 0x4 FloatProperty Engine.GPUSpriteLocalVectorFieldInfo.Tightness */
    bool bIgnoreComponentTransform : 1; /* Ofs: 0x6C Size: 0x1 BitMask: 01 BoolProperty Engine.GPUSpriteLocalVectorFieldInfo.bIgnoreComponentTransform */
    bool bTileX : 1; /* Ofs: 0x6C Size: 0x1 BitMask: 02 BoolProperty Engine.GPUSpriteLocalVectorFieldInfo.bTileX */
    bool bTileY : 1; /* Ofs: 0x6C Size: 0x1 BitMask: 04 BoolProperty Engine.GPUSpriteLocalVectorFieldInfo.bTileY */
    bool bTileZ : 1; /* Ofs: 0x6C Size: 0x1 BitMask: 08 BoolProperty Engine.GPUSpriteLocalVectorFieldInfo.bTileZ */
    bool bUseFixDT : 1; /* Ofs: 0x6C Size: 0x1 BitMask: 10 BoolProperty Engine.GPUSpriteLocalVectorFieldInfo.bUseFixDT */
    uint8_t UnknownData6D[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFGPUSpriteLocalVectorFieldInfo = sizeof(FGPUSpriteLocalVectorFieldInfo); // 112
    static_assert(sizeof(FGPUSpriteLocalVectorFieldInfo) == 0x70, "Size of FGPUSpriteLocalVectorFieldInfo is not correct.");
	auto constexpr FGPUSpriteLocalVectorFieldInfo_Field_Offset = offsetof(FGPUSpriteLocalVectorFieldInfo, Field);
	static_assert(FGPUSpriteLocalVectorFieldInfo_Field_Offset == 0x0, "FGPUSpriteLocalVectorFieldInfo::Field offset is not 0");
	auto constexpr FGPUSpriteLocalVectorFieldInfo_Transform_Offset = offsetof(FGPUSpriteLocalVectorFieldInfo, Transform);
	static_assert(FGPUSpriteLocalVectorFieldInfo_Transform_Offset == 0x10, "FGPUSpriteLocalVectorFieldInfo::Transform offset is not 10");
	auto constexpr FGPUSpriteLocalVectorFieldInfo_MinInitialRotation_Offset = offsetof(FGPUSpriteLocalVectorFieldInfo, MinInitialRotation);
	static_assert(FGPUSpriteLocalVectorFieldInfo_MinInitialRotation_Offset == 0x40, "FGPUSpriteLocalVectorFieldInfo::MinInitialRotation offset is not 40");
	auto constexpr FGPUSpriteLocalVectorFieldInfo_MaxInitialRotation_Offset = offsetof(FGPUSpriteLocalVectorFieldInfo, MaxInitialRotation);
	static_assert(FGPUSpriteLocalVectorFieldInfo_MaxInitialRotation_Offset == 0x4c, "FGPUSpriteLocalVectorFieldInfo::MaxInitialRotation offset is not 4c");
	auto constexpr FGPUSpriteLocalVectorFieldInfo_RotationRate_Offset = offsetof(FGPUSpriteLocalVectorFieldInfo, RotationRate);
	static_assert(FGPUSpriteLocalVectorFieldInfo_RotationRate_Offset == 0x58, "FGPUSpriteLocalVectorFieldInfo::RotationRate offset is not 58");
	auto constexpr FGPUSpriteLocalVectorFieldInfo_Intensity_Offset = offsetof(FGPUSpriteLocalVectorFieldInfo, Intensity);
	static_assert(FGPUSpriteLocalVectorFieldInfo_Intensity_Offset == 0x64, "FGPUSpriteLocalVectorFieldInfo::Intensity offset is not 64");
	auto constexpr FGPUSpriteLocalVectorFieldInfo_Tightness_Offset = offsetof(FGPUSpriteLocalVectorFieldInfo, Tightness);
	static_assert(FGPUSpriteLocalVectorFieldInfo_Tightness_Offset == 0x68, "FGPUSpriteLocalVectorFieldInfo::Tightness offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
