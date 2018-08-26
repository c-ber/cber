#pragma once
#include "FMatrix.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FInstancedStaticMeshInstanceData // Size: 0x50
{
public:
    FMatrix Transform; /* Ofs: 0x0 Size: 0x40 StructProperty Engine.InstancedStaticMeshInstanceData.Transform */
    FVector2D LightmapUVBias; /* Ofs: 0x40 Size: 0x8 StructProperty Engine.InstancedStaticMeshInstanceData.LightmapUVBias */
    FVector2D ShadowmapUVBias; /* Ofs: 0x48 Size: 0x8 StructProperty Engine.InstancedStaticMeshInstanceData.ShadowmapUVBias */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFInstancedStaticMeshInstanceData = sizeof(FInstancedStaticMeshInstanceData); // 80
    static_assert(sizeof(FInstancedStaticMeshInstanceData) == 0x50, "Size of FInstancedStaticMeshInstanceData is not correct.");
	auto constexpr FInstancedStaticMeshInstanceData_Transform_Offset = offsetof(FInstancedStaticMeshInstanceData, Transform);
	static_assert(FInstancedStaticMeshInstanceData_Transform_Offset == 0x0, "FInstancedStaticMeshInstanceData::Transform offset is not 0");
	auto constexpr FInstancedStaticMeshInstanceData_LightmapUVBias_Offset = offsetof(FInstancedStaticMeshInstanceData, LightmapUVBias);
	static_assert(FInstancedStaticMeshInstanceData_LightmapUVBias_Offset == 0x40, "FInstancedStaticMeshInstanceData::LightmapUVBias offset is not 40");
	auto constexpr FInstancedStaticMeshInstanceData_ShadowmapUVBias_Offset = offsetof(FInstancedStaticMeshInstanceData, ShadowmapUVBias);
	static_assert(FInstancedStaticMeshInstanceData_ShadowmapUVBias_Offset == 0x48, "FInstancedStaticMeshInstanceData::ShadowmapUVBias offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
