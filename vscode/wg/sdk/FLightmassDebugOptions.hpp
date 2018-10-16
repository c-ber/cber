#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLightmassDebugOptions // Size: 0x10
{
public:
    bool bDebugMode : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Engine.LightmassDebugOptions.bDebugMode */
    bool bStatsEnabled : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 02 BoolProperty Engine.LightmassDebugOptions.bStatsEnabled */
    bool bGatherBSPSurfacesAcrossComponents : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 04 BoolProperty Engine.LightmassDebugOptions.bGatherBSPSurfacesAcrossComponents */
    uint8_t UnknownData1[0x3];
    float CoplanarTolerance; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.LightmassDebugOptions.CoplanarTolerance */
    bool bUseImmediateImport : 1; /* Ofs: 0x8 Size: 0x1 BitMask: 01 BoolProperty Engine.LightmassDebugOptions.bUseImmediateImport */
    bool bImmediateProcessMappings : 1; /* Ofs: 0x8 Size: 0x1 BitMask: 02 BoolProperty Engine.LightmassDebugOptions.bImmediateProcessMappings */
    bool bSortMappings : 1; /* Ofs: 0x8 Size: 0x1 BitMask: 04 BoolProperty Engine.LightmassDebugOptions.bSortMappings */
    bool bDumpBinaryFiles : 1; /* Ofs: 0x8 Size: 0x1 BitMask: 08 BoolProperty Engine.LightmassDebugOptions.bDumpBinaryFiles */
    bool bDebugMaterials : 1; /* Ofs: 0x8 Size: 0x1 BitMask: 10 BoolProperty Engine.LightmassDebugOptions.bDebugMaterials */
    bool bPadMappings : 1; /* Ofs: 0x8 Size: 0x1 BitMask: 20 BoolProperty Engine.LightmassDebugOptions.bPadMappings */
    bool bDebugPaddings : 1; /* Ofs: 0x8 Size: 0x1 BitMask: 40 BoolProperty Engine.LightmassDebugOptions.bDebugPaddings */
    bool bOnlyCalcDebugTexelMappings : 1; /* Ofs: 0x8 Size: 0x1 BitMask: 80 BoolProperty Engine.LightmassDebugOptions.bOnlyCalcDebugTexelMappings */
    bool bUseRandomColors : 1; /* Ofs: 0x9 Size: 0x1 BitMask: 01 BoolProperty Engine.LightmassDebugOptions.bUseRandomColors */
    bool bColorBordersGreen : 1; /* Ofs: 0x9 Size: 0x1 BitMask: 02 BoolProperty Engine.LightmassDebugOptions.bColorBordersGreen */
    bool bColorByExecutionTime : 1; /* Ofs: 0x9 Size: 0x1 BitMask: 04 BoolProperty Engine.LightmassDebugOptions.bColorByExecutionTime */
    uint8_t UnknownDataA[0x2];
    float ExecutionTimeDivisor; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.LightmassDebugOptions.ExecutionTimeDivisor */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLightmassDebugOptions = sizeof(FLightmassDebugOptions); // 16
    static_assert(sizeof(FLightmassDebugOptions) == 0x10, "Size of FLightmassDebugOptions is not correct.");
	auto constexpr FLightmassDebugOptions_CoplanarTolerance_Offset = offsetof(FLightmassDebugOptions, CoplanarTolerance);
	static_assert(FLightmassDebugOptions_CoplanarTolerance_Offset == 0x4, "FLightmassDebugOptions::CoplanarTolerance offset is not 4");
	auto constexpr FLightmassDebugOptions_ExecutionTimeDivisor_Offset = offsetof(FLightmassDebugOptions, ExecutionTimeDivisor);
	static_assert(FLightmassDebugOptions_ExecutionTimeDivisor_Offset == 0xc, "FLightmassDebugOptions::ExecutionTimeDivisor offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
