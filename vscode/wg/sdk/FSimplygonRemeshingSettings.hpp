#pragma once
#include "FSimplygonMaterialLODSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSimplygonRemeshingSettings // Size: 0xA8
{
public:
    bool bActive; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Engine.SimplygonRemeshingSettings.bActive */
    uint8_t UnknownData1[0x3];
    int32_t ScreenSize; /* Ofs: 0x4 Size: 0x4 IntProperty Engine.SimplygonRemeshingSettings.ScreenSize */
    bool bRecalculateNormals; /* Ofs: 0x8 Size: 0x1 BitMask: 01 BoolProperty Engine.SimplygonRemeshingSettings.bRecalculateNormals */
    uint8_t UnknownData9[0x3];
    float HardAngleThreshold; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.SimplygonRemeshingSettings.HardAngleThreshold */
    int32_t MergeDistance; /* Ofs: 0x10 Size: 0x4 IntProperty Engine.SimplygonRemeshingSettings.MergeDistance */
    bool bUseClippingPlane; /* Ofs: 0x14 Size: 0x1 BitMask: 01 BoolProperty Engine.SimplygonRemeshingSettings.bUseClippingPlane */
    uint8_t UnknownData15[0x3];
    float ClippingLevel; /* Ofs: 0x18 Size: 0x4 FloatProperty Engine.SimplygonRemeshingSettings.ClippingLevel */
    int32_t AxisIndex; /* Ofs: 0x1C Size: 0x4 IntProperty Engine.SimplygonRemeshingSettings.AxisIndex */
    bool bPlaneNegativeHalfspace; /* Ofs: 0x20 Size: 0x1 BitMask: 01 BoolProperty Engine.SimplygonRemeshingSettings.bPlaneNegativeHalfspace */
    bool bUseMassiveLOD; /* Ofs: 0x21 Size: 0x1 BitMask: 01 BoolProperty Engine.SimplygonRemeshingSettings.bUseMassiveLOD */
    bool bUseAggregateLOD; /* Ofs: 0x22 Size: 0x1 BitMask: 01 BoolProperty Engine.SimplygonRemeshingSettings.bUseAggregateLOD */
    uint8_t UnknownData23[0x5];
    FSimplygonMaterialLODSettings MaterialLODSettings; /* Ofs: 0x28 Size: 0x80 StructProperty Engine.SimplygonRemeshingSettings.MaterialLODSettings */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSimplygonRemeshingSettings = sizeof(FSimplygonRemeshingSettings); // 168
    static_assert(sizeof(FSimplygonRemeshingSettings) == 0xA8, "Size of FSimplygonRemeshingSettings is not correct.");
	auto constexpr FSimplygonRemeshingSettings_ScreenSize_Offset = offsetof(FSimplygonRemeshingSettings, ScreenSize);
	static_assert(FSimplygonRemeshingSettings_ScreenSize_Offset == 0x4, "FSimplygonRemeshingSettings::ScreenSize offset is not 4");
	auto constexpr FSimplygonRemeshingSettings_HardAngleThreshold_Offset = offsetof(FSimplygonRemeshingSettings, HardAngleThreshold);
	static_assert(FSimplygonRemeshingSettings_HardAngleThreshold_Offset == 0xc, "FSimplygonRemeshingSettings::HardAngleThreshold offset is not c");
	auto constexpr FSimplygonRemeshingSettings_MergeDistance_Offset = offsetof(FSimplygonRemeshingSettings, MergeDistance);
	static_assert(FSimplygonRemeshingSettings_MergeDistance_Offset == 0x10, "FSimplygonRemeshingSettings::MergeDistance offset is not 10");
	auto constexpr FSimplygonRemeshingSettings_ClippingLevel_Offset = offsetof(FSimplygonRemeshingSettings, ClippingLevel);
	static_assert(FSimplygonRemeshingSettings_ClippingLevel_Offset == 0x18, "FSimplygonRemeshingSettings::ClippingLevel offset is not 18");
	auto constexpr FSimplygonRemeshingSettings_AxisIndex_Offset = offsetof(FSimplygonRemeshingSettings, AxisIndex);
	static_assert(FSimplygonRemeshingSettings_AxisIndex_Offset == 0x1c, "FSimplygonRemeshingSettings::AxisIndex offset is not 1c");
	auto constexpr FSimplygonRemeshingSettings_MaterialLODSettings_Offset = offsetof(FSimplygonRemeshingSettings, MaterialLODSettings);
	static_assert(FSimplygonRemeshingSettings_MaterialLODSettings_Offset == 0x28, "FSimplygonRemeshingSettings::MaterialLODSettings offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
