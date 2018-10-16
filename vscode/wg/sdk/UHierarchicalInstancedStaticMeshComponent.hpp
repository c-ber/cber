#pragma once
#include "UInstancedStaticMeshComponent.hpp"
#include "FBox.hpp"
#include "FBoxSphereBounds.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UHierarchicalInstancedStaticMeshComponent // Size: 0xCA0
	: public UInstancedStaticMeshComponent // Size: 0xB60
{
private:
	typedef UHierarchicalInstancedStaticMeshComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(212); // id32("Class Engine.HierarchicalInstancedStaticMeshComponent")
		return ptr;
	}
	uint8_t UnknownDataB60[0x68];
	TArray<int32_t> SortedInstances; /* Ofs: 0xBC8 Size: 0x10 - ArrayProperty Engine.HierarchicalInstancedStaticMeshComponent.SortedInstances */
	int32_t NumBuiltInstances; /* Ofs: 0xBD8 Size: 0x4 - IntProperty Engine.HierarchicalInstancedStaticMeshComponent.NumBuiltInstances */
	uint8_t UnknownDataBDC[0x4];
	FBox BuiltInstanceBounds; /* Ofs: 0xBE0 Size: 0x1C - StructProperty Engine.HierarchicalInstancedStaticMeshComponent.BuiltInstanceBounds */
	FBox UnbuiltInstanceBounds; /* Ofs: 0xBFC Size: 0x1C - StructProperty Engine.HierarchicalInstancedStaticMeshComponent.UnbuiltInstanceBounds */
	TArray<struct FBox> UnbuiltInstanceBoundsList; /* Ofs: 0xC18 Size: 0x10 - ArrayProperty Engine.HierarchicalInstancedStaticMeshComponent.UnbuiltInstanceBoundsList */
	uint8_t boolFieldC28;
	uint8_t UnknownDataC29[0x27];
	int32_t OcclusionLayerNumNodes; /* Ofs: 0xC50 Size: 0x4 - IntProperty Engine.HierarchicalInstancedStaticMeshComponent.OcclusionLayerNumNodes */
	FBoxSphereBounds CacheMeshExtendedBounds; /* Ofs: 0xC54 Size: 0x1C - StructProperty Engine.HierarchicalInstancedStaticMeshComponent.CacheMeshExtendedBounds */
	uint8_t UnknownDataC70[0x4];
	uint8_t boolFieldC74;
	uint8_t UnknownDataC75[0x2B];


	inline bool SetSortedInstances(t_structHelper inst, TArray<int32_t> value) { inst.WriteOffset(0xBC8, value); }
	inline bool SetNumBuiltInstances(t_structHelper inst, int32_t value) { inst.WriteOffset(0xBD8, value); }
	inline bool SetBuiltInstanceBounds(t_structHelper inst, FBox value) { inst.WriteOffset(0xBE0, value); }
	inline bool SetUnbuiltInstanceBounds(t_structHelper inst, FBox value) { inst.WriteOffset(0xBFC, value); }
	inline bool SetUnbuiltInstanceBoundsList(t_structHelper inst, TArray<struct FBox> value) { inst.WriteOffset(0xC18, value); }
	inline bool bEnableDensityScaling()
	{
		return boolFieldC28& 0x1;
	}
	inline bool SetbEnableDensityScaling(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC28, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetOcclusionLayerNumNodes(t_structHelper inst, int32_t value) { inst.WriteOffset(0xC50, value); }
	inline bool SetCacheMeshExtendedBounds(t_structHelper inst, FBoxSphereBounds value) { inst.WriteOffset(0xC54, value); }
	inline bool bDisableCollision()
	{
		return boolFieldC74& 0x1;
	}
	inline bool SetbDisableCollision(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC74, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUHierarchicalInstancedStaticMeshComponent = sizeof(UHierarchicalInstancedStaticMeshComponent); // 3232
    static_assert(sizeof(UHierarchicalInstancedStaticMeshComponent) == 0xCA0, "Size of UHierarchicalInstancedStaticMeshComponent is not correct.");
	auto constexpr UHierarchicalInstancedStaticMeshComponent_SortedInstances_Offset = offsetof(UHierarchicalInstancedStaticMeshComponent, SortedInstances);
	static_assert(UHierarchicalInstancedStaticMeshComponent_SortedInstances_Offset == 0xbc8, "UHierarchicalInstancedStaticMeshComponent::SortedInstances offset is not bc8");
	auto constexpr UHierarchicalInstancedStaticMeshComponent_NumBuiltInstances_Offset = offsetof(UHierarchicalInstancedStaticMeshComponent, NumBuiltInstances);
	static_assert(UHierarchicalInstancedStaticMeshComponent_NumBuiltInstances_Offset == 0xbd8, "UHierarchicalInstancedStaticMeshComponent::NumBuiltInstances offset is not bd8");
	auto constexpr UHierarchicalInstancedStaticMeshComponent_BuiltInstanceBounds_Offset = offsetof(UHierarchicalInstancedStaticMeshComponent, BuiltInstanceBounds);
	static_assert(UHierarchicalInstancedStaticMeshComponent_BuiltInstanceBounds_Offset == 0xbe0, "UHierarchicalInstancedStaticMeshComponent::BuiltInstanceBounds offset is not be0");
	auto constexpr UHierarchicalInstancedStaticMeshComponent_UnbuiltInstanceBounds_Offset = offsetof(UHierarchicalInstancedStaticMeshComponent, UnbuiltInstanceBounds);
	static_assert(UHierarchicalInstancedStaticMeshComponent_UnbuiltInstanceBounds_Offset == 0xbfc, "UHierarchicalInstancedStaticMeshComponent::UnbuiltInstanceBounds offset is not bfc");
	auto constexpr UHierarchicalInstancedStaticMeshComponent_UnbuiltInstanceBoundsList_Offset = offsetof(UHierarchicalInstancedStaticMeshComponent, UnbuiltInstanceBoundsList);
	static_assert(UHierarchicalInstancedStaticMeshComponent_UnbuiltInstanceBoundsList_Offset == 0xc18, "UHierarchicalInstancedStaticMeshComponent::UnbuiltInstanceBoundsList offset is not c18");
	auto constexpr UHierarchicalInstancedStaticMeshComponent_boolFieldC28_Offset = offsetof(UHierarchicalInstancedStaticMeshComponent, boolFieldC28);
	static_assert(UHierarchicalInstancedStaticMeshComponent_boolFieldC28_Offset == 0xc28, "UHierarchicalInstancedStaticMeshComponent::boolFieldC28 offset is not c28");
	auto constexpr UHierarchicalInstancedStaticMeshComponent_OcclusionLayerNumNodes_Offset = offsetof(UHierarchicalInstancedStaticMeshComponent, OcclusionLayerNumNodes);
	static_assert(UHierarchicalInstancedStaticMeshComponent_OcclusionLayerNumNodes_Offset == 0xc50, "UHierarchicalInstancedStaticMeshComponent::OcclusionLayerNumNodes offset is not c50");
	auto constexpr UHierarchicalInstancedStaticMeshComponent_CacheMeshExtendedBounds_Offset = offsetof(UHierarchicalInstancedStaticMeshComponent, CacheMeshExtendedBounds);
	static_assert(UHierarchicalInstancedStaticMeshComponent_CacheMeshExtendedBounds_Offset == 0xc54, "UHierarchicalInstancedStaticMeshComponent::CacheMeshExtendedBounds offset is not c54");
	auto constexpr UHierarchicalInstancedStaticMeshComponent_boolFieldC74_Offset = offsetof(UHierarchicalInstancedStaticMeshComponent, boolFieldC74);
	static_assert(UHierarchicalInstancedStaticMeshComponent_boolFieldC74_Offset == 0xc74, "UHierarchicalInstancedStaticMeshComponent::boolFieldC74 offset is not c74");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
