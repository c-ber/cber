#pragma once
#include "UNavigationData.hpp"
#include "ERecastPartitioning.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) URecastNavMesh // Size: 0x6B0
	: public UNavigationData // Size: 0x5B0
{
private:
	typedef URecastNavMesh t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1761); // id32("Class Engine.RecastNavMesh")
		return ptr;
	}
//	uint8_t boolField5A8;
//	uint8_t boolField5A9;
//	float DrawOffset; /* Ofs: 0x5AC Size: 0x4 - FloatProperty Engine.RecastNavMesh.DrawOffset */
	uint8_t boolField5B0;
	uint8_t UnknownData5B1[0x3];
	int32_t TilePoolSize; /* Ofs: 0x5B4 Size: 0x4 - IntProperty Engine.RecastNavMesh.TilePoolSize */
	float TileSizeUU; /* Ofs: 0x5B8 Size: 0x4 - FloatProperty Engine.RecastNavMesh.TileSizeUU */
	float CellSize; /* Ofs: 0x5BC Size: 0x4 - FloatProperty Engine.RecastNavMesh.CellSize */
	float CellHeight; /* Ofs: 0x5C0 Size: 0x4 - FloatProperty Engine.RecastNavMesh.CellHeight */
	float AgentRadius; /* Ofs: 0x5C4 Size: 0x4 - FloatProperty Engine.RecastNavMesh.AgentRadius */
	float AgentHeight; /* Ofs: 0x5C8 Size: 0x4 - FloatProperty Engine.RecastNavMesh.AgentHeight */
	float AgentMaxHeight; /* Ofs: 0x5CC Size: 0x4 - FloatProperty Engine.RecastNavMesh.AgentMaxHeight */
	float AgentMaxSlope; /* Ofs: 0x5D0 Size: 0x4 - FloatProperty Engine.RecastNavMesh.AgentMaxSlope */
	float AgentMaxStepHeight; /* Ofs: 0x5D4 Size: 0x4 - FloatProperty Engine.RecastNavMesh.AgentMaxStepHeight */
	float MinRegionArea; /* Ofs: 0x5D8 Size: 0x4 - FloatProperty Engine.RecastNavMesh.MinRegionArea */
	float MergeRegionSize; /* Ofs: 0x5DC Size: 0x4 - FloatProperty Engine.RecastNavMesh.MergeRegionSize */
	float MaxSimplificationError; /* Ofs: 0x5E0 Size: 0x4 - FloatProperty Engine.RecastNavMesh.MaxSimplificationError */
	int32_t MaxSimultaneousTileGenerationJobsCount; /* Ofs: 0x5E4 Size: 0x4 - IntProperty Engine.RecastNavMesh.MaxSimultaneousTileGenerationJobsCount */
	int32_t TileNumberHardLimit; /* Ofs: 0x5E8 Size: 0x4 - IntProperty Engine.RecastNavMesh.TileNumberHardLimit */
	int32_t PolyRefTileBits; /* Ofs: 0x5EC Size: 0x4 - IntProperty Engine.RecastNavMesh.PolyRefTileBits */
	int32_t PolyRefNavPolyBits; /* Ofs: 0x5F0 Size: 0x4 - IntProperty Engine.RecastNavMesh.PolyRefNavPolyBits */
	int32_t PolyRefSaltBits; /* Ofs: 0x5F4 Size: 0x4 - IntProperty Engine.RecastNavMesh.PolyRefSaltBits */
	float DefaultDrawDistance; /* Ofs: 0x5F8 Size: 0x4 - FloatProperty Engine.RecastNavMesh.DefaultDrawDistance */
	float DefaultMaxSearchNodes; /* Ofs: 0x5FC Size: 0x4 - FloatProperty Engine.RecastNavMesh.DefaultMaxSearchNodes */
	float DefaultMaxHierarchicalSearchNodes; /* Ofs: 0x600 Size: 0x4 - FloatProperty Engine.RecastNavMesh.DefaultMaxHierarchicalSearchNodes */
	TEnumAsByte<enum ERecastPartitioning> RegionPartitioning; /* Ofs: 0x604 Size: 0x1 - ByteProperty Engine.RecastNavMesh.RegionPartitioning */
	TEnumAsByte<enum ERecastPartitioning> LayerPartitioning; /* Ofs: 0x605 Size: 0x1 - ByteProperty Engine.RecastNavMesh.LayerPartitioning */
	uint8_t UnknownData606[0x2];
	int32_t RegionChunkSplits; /* Ofs: 0x608 Size: 0x4 - IntProperty Engine.RecastNavMesh.RegionChunkSplits */
	int32_t LayerChunkSplits; /* Ofs: 0x60C Size: 0x4 - IntProperty Engine.RecastNavMesh.LayerChunkSplits */
	uint8_t boolField610;
	uint8_t boolField611;
	uint8_t UnknownData612[0x2];
	float TileSetUpdateInterval; /* Ofs: 0x614 Size: 0x4 - FloatProperty Engine.RecastNavMesh.TileSetUpdateInterval */
	float HeuristicScale; /* Ofs: 0x618 Size: 0x4 - FloatProperty Engine.RecastNavMesh.HeuristicScale */
	float VerticalDeviationFromGroundCompensation; /* Ofs: 0x61C Size: 0x4 - FloatProperty Engine.RecastNavMesh.VerticalDeviationFromGroundCompensation */
	uint8_t UnknownData620[0x90];


//	inline bool SetDrawOffset(t_structHelper inst, float value) { inst.WriteOffset(0x5AC, value); }
	inline bool bFixedTilePoolSize()
	{
		return boolField5B0& 0x1;
	}
	inline bool SetbFixedTilePoolSize(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x5B0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTilePoolSize(t_structHelper inst, int32_t value) { inst.WriteOffset(0x5B4, value); }
	inline bool SetTileSizeUU(t_structHelper inst, float value) { inst.WriteOffset(0x5B8, value); }
	inline bool SetCellSize(t_structHelper inst, float value) { inst.WriteOffset(0x5BC, value); }
	inline bool SetCellHeight(t_structHelper inst, float value) { inst.WriteOffset(0x5C0, value); }
	inline bool SetAgentRadius(t_structHelper inst, float value) { inst.WriteOffset(0x5C4, value); }
	inline bool SetAgentHeight(t_structHelper inst, float value) { inst.WriteOffset(0x5C8, value); }
	inline bool SetAgentMaxHeight(t_structHelper inst, float value) { inst.WriteOffset(0x5CC, value); }
	inline bool SetAgentMaxSlope(t_structHelper inst, float value) { inst.WriteOffset(0x5D0, value); }
	inline bool SetAgentMaxStepHeight(t_structHelper inst, float value) { inst.WriteOffset(0x5D4, value); }
	inline bool SetMinRegionArea(t_structHelper inst, float value) { inst.WriteOffset(0x5D8, value); }
	inline bool SetMergeRegionSize(t_structHelper inst, float value) { inst.WriteOffset(0x5DC, value); }
	inline bool SetMaxSimplificationError(t_structHelper inst, float value) { inst.WriteOffset(0x5E0, value); }
	inline bool SetMaxSimultaneousTileGenerationJobsCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x5E4, value); }
	inline bool SetTileNumberHardLimit(t_structHelper inst, int32_t value) { inst.WriteOffset(0x5E8, value); }
	inline bool SetPolyRefTileBits(t_structHelper inst, int32_t value) { inst.WriteOffset(0x5EC, value); }
	inline bool SetPolyRefNavPolyBits(t_structHelper inst, int32_t value) { inst.WriteOffset(0x5F0, value); }
	inline bool SetPolyRefSaltBits(t_structHelper inst, int32_t value) { inst.WriteOffset(0x5F4, value); }
	inline bool SetDefaultDrawDistance(t_structHelper inst, float value) { inst.WriteOffset(0x5F8, value); }
	inline bool SetDefaultMaxSearchNodes(t_structHelper inst, float value) { inst.WriteOffset(0x5FC, value); }
	inline bool SetDefaultMaxHierarchicalSearchNodes(t_structHelper inst, float value) { inst.WriteOffset(0x600, value); }
	inline bool SetRegionPartitioning(t_structHelper inst, TEnumAsByte<enum ERecastPartitioning> value) { inst.WriteOffset(0x604, value); }
	inline bool SetLayerPartitioning(t_structHelper inst, TEnumAsByte<enum ERecastPartitioning> value) { inst.WriteOffset(0x605, value); }
	inline bool SetRegionChunkSplits(t_structHelper inst, int32_t value) { inst.WriteOffset(0x608, value); }
	inline bool SetLayerChunkSplits(t_structHelper inst, int32_t value) { inst.WriteOffset(0x60C, value); }
	inline bool bSortNavigationAreasByCost()
	{
		return boolField610& 0x1;
	}
	inline bool SetbSortNavigationAreasByCost(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x610, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bPerformVoxelFiltering()
	{
		return boolField610& 0x2;
	}
	inline bool SetbPerformVoxelFiltering(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x610, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bMarkLowHeightAreas()
	{
		return boolField610& 0x4;
	}
	inline bool SetbMarkLowHeightAreas(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x610, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bDoFullyAsyncNavDataGathering()
	{
		return boolField610& 0x8;
	}
	inline bool SetbDoFullyAsyncNavDataGathering(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x610, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bUseBetterOffsetsFromCorners()
	{
		return boolField610& 0x10;
	}
	inline bool SetbUseBetterOffsetsFromCorners(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x610, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bStoreEmptyTileLayers()
	{
		return boolField610& 0x20;
	}
	inline bool SetbStoreEmptyTileLayers(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x610, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bUseVirtualFilters()
	{
		return boolField610& 0x40;
	}
	inline bool SetbUseVirtualFilters(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x610, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool bAllowNavLinkAsPathEnd()
	{
		return boolField610& 0x80;
	}
	inline bool SetbAllowNavLinkAsPathEnd(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x610, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
	inline bool bUseVoxelCache()
	{
		return boolField611& 0x1;
	}
	inline bool SetbUseVoxelCache(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x611, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTileSetUpdateInterval(t_structHelper inst, float value) { inst.WriteOffset(0x614, value); }
	inline bool SetHeuristicScale(t_structHelper inst, float value) { inst.WriteOffset(0x618, value); }
	inline bool SetVerticalDeviationFromGroundCompensation(t_structHelper inst, float value) { inst.WriteOffset(0x61C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofURecastNavMesh = sizeof(URecastNavMesh); // 1712
    static_assert(sizeof(URecastNavMesh) == 0x6B0, "Size of URecastNavMesh is not correct.");
//	auto constexpr URecastNavMesh_boolField5A8_Offset = offsetof(URecastNavMesh, boolField5A8);
//	static_assert(URecastNavMesh_boolField5A8_Offset == 0x5a8, "URecastNavMesh::boolField5A8 offset is not 5a8");
//	auto constexpr URecastNavMesh_boolField5A9_Offset = offsetof(URecastNavMesh, boolField5A9);
//	static_assert(URecastNavMesh_boolField5A9_Offset == 0x5a9, "URecastNavMesh::boolField5A9 offset is not 5a9");
//	auto constexpr URecastNavMesh_DrawOffset_Offset = offsetof(URecastNavMesh, DrawOffset);
//	static_assert(URecastNavMesh_DrawOffset_Offset == 0x5ac, "URecastNavMesh::DrawOffset offset is not 5ac");
	auto constexpr URecastNavMesh_boolField5B0_Offset = offsetof(URecastNavMesh, boolField5B0);
	static_assert(URecastNavMesh_boolField5B0_Offset == 0x5b0, "URecastNavMesh::boolField5B0 offset is not 5b0");
	auto constexpr URecastNavMesh_TilePoolSize_Offset = offsetof(URecastNavMesh, TilePoolSize);
	static_assert(URecastNavMesh_TilePoolSize_Offset == 0x5b4, "URecastNavMesh::TilePoolSize offset is not 5b4");
	auto constexpr URecastNavMesh_TileSizeUU_Offset = offsetof(URecastNavMesh, TileSizeUU);
	static_assert(URecastNavMesh_TileSizeUU_Offset == 0x5b8, "URecastNavMesh::TileSizeUU offset is not 5b8");
	auto constexpr URecastNavMesh_CellSize_Offset = offsetof(URecastNavMesh, CellSize);
	static_assert(URecastNavMesh_CellSize_Offset == 0x5bc, "URecastNavMesh::CellSize offset is not 5bc");
	auto constexpr URecastNavMesh_CellHeight_Offset = offsetof(URecastNavMesh, CellHeight);
	static_assert(URecastNavMesh_CellHeight_Offset == 0x5c0, "URecastNavMesh::CellHeight offset is not 5c0");
	auto constexpr URecastNavMesh_AgentRadius_Offset = offsetof(URecastNavMesh, AgentRadius);
	static_assert(URecastNavMesh_AgentRadius_Offset == 0x5c4, "URecastNavMesh::AgentRadius offset is not 5c4");
	auto constexpr URecastNavMesh_AgentHeight_Offset = offsetof(URecastNavMesh, AgentHeight);
	static_assert(URecastNavMesh_AgentHeight_Offset == 0x5c8, "URecastNavMesh::AgentHeight offset is not 5c8");
	auto constexpr URecastNavMesh_AgentMaxHeight_Offset = offsetof(URecastNavMesh, AgentMaxHeight);
	static_assert(URecastNavMesh_AgentMaxHeight_Offset == 0x5cc, "URecastNavMesh::AgentMaxHeight offset is not 5cc");
	auto constexpr URecastNavMesh_AgentMaxSlope_Offset = offsetof(URecastNavMesh, AgentMaxSlope);
	static_assert(URecastNavMesh_AgentMaxSlope_Offset == 0x5d0, "URecastNavMesh::AgentMaxSlope offset is not 5d0");
	auto constexpr URecastNavMesh_AgentMaxStepHeight_Offset = offsetof(URecastNavMesh, AgentMaxStepHeight);
	static_assert(URecastNavMesh_AgentMaxStepHeight_Offset == 0x5d4, "URecastNavMesh::AgentMaxStepHeight offset is not 5d4");
	auto constexpr URecastNavMesh_MinRegionArea_Offset = offsetof(URecastNavMesh, MinRegionArea);
	static_assert(URecastNavMesh_MinRegionArea_Offset == 0x5d8, "URecastNavMesh::MinRegionArea offset is not 5d8");
	auto constexpr URecastNavMesh_MergeRegionSize_Offset = offsetof(URecastNavMesh, MergeRegionSize);
	static_assert(URecastNavMesh_MergeRegionSize_Offset == 0x5dc, "URecastNavMesh::MergeRegionSize offset is not 5dc");
	auto constexpr URecastNavMesh_MaxSimplificationError_Offset = offsetof(URecastNavMesh, MaxSimplificationError);
	static_assert(URecastNavMesh_MaxSimplificationError_Offset == 0x5e0, "URecastNavMesh::MaxSimplificationError offset is not 5e0");
	auto constexpr URecastNavMesh_MaxSimultaneousTileGenerationJobsCount_Offset = offsetof(URecastNavMesh, MaxSimultaneousTileGenerationJobsCount);
	static_assert(URecastNavMesh_MaxSimultaneousTileGenerationJobsCount_Offset == 0x5e4, "URecastNavMesh::MaxSimultaneousTileGenerationJobsCount offset is not 5e4");
	auto constexpr URecastNavMesh_TileNumberHardLimit_Offset = offsetof(URecastNavMesh, TileNumberHardLimit);
	static_assert(URecastNavMesh_TileNumberHardLimit_Offset == 0x5e8, "URecastNavMesh::TileNumberHardLimit offset is not 5e8");
	auto constexpr URecastNavMesh_PolyRefTileBits_Offset = offsetof(URecastNavMesh, PolyRefTileBits);
	static_assert(URecastNavMesh_PolyRefTileBits_Offset == 0x5ec, "URecastNavMesh::PolyRefTileBits offset is not 5ec");
	auto constexpr URecastNavMesh_PolyRefNavPolyBits_Offset = offsetof(URecastNavMesh, PolyRefNavPolyBits);
	static_assert(URecastNavMesh_PolyRefNavPolyBits_Offset == 0x5f0, "URecastNavMesh::PolyRefNavPolyBits offset is not 5f0");
	auto constexpr URecastNavMesh_PolyRefSaltBits_Offset = offsetof(URecastNavMesh, PolyRefSaltBits);
	static_assert(URecastNavMesh_PolyRefSaltBits_Offset == 0x5f4, "URecastNavMesh::PolyRefSaltBits offset is not 5f4");
	auto constexpr URecastNavMesh_DefaultDrawDistance_Offset = offsetof(URecastNavMesh, DefaultDrawDistance);
	static_assert(URecastNavMesh_DefaultDrawDistance_Offset == 0x5f8, "URecastNavMesh::DefaultDrawDistance offset is not 5f8");
	auto constexpr URecastNavMesh_DefaultMaxSearchNodes_Offset = offsetof(URecastNavMesh, DefaultMaxSearchNodes);
	static_assert(URecastNavMesh_DefaultMaxSearchNodes_Offset == 0x5fc, "URecastNavMesh::DefaultMaxSearchNodes offset is not 5fc");
	auto constexpr URecastNavMesh_DefaultMaxHierarchicalSearchNodes_Offset = offsetof(URecastNavMesh, DefaultMaxHierarchicalSearchNodes);
	static_assert(URecastNavMesh_DefaultMaxHierarchicalSearchNodes_Offset == 0x600, "URecastNavMesh::DefaultMaxHierarchicalSearchNodes offset is not 600");
	auto constexpr URecastNavMesh_RegionPartitioning_Offset = offsetof(URecastNavMesh, RegionPartitioning);
	static_assert(URecastNavMesh_RegionPartitioning_Offset == 0x604, "URecastNavMesh::RegionPartitioning offset is not 604");
	auto constexpr URecastNavMesh_LayerPartitioning_Offset = offsetof(URecastNavMesh, LayerPartitioning);
	static_assert(URecastNavMesh_LayerPartitioning_Offset == 0x605, "URecastNavMesh::LayerPartitioning offset is not 605");
	auto constexpr URecastNavMesh_RegionChunkSplits_Offset = offsetof(URecastNavMesh, RegionChunkSplits);
	static_assert(URecastNavMesh_RegionChunkSplits_Offset == 0x608, "URecastNavMesh::RegionChunkSplits offset is not 608");
	auto constexpr URecastNavMesh_LayerChunkSplits_Offset = offsetof(URecastNavMesh, LayerChunkSplits);
	static_assert(URecastNavMesh_LayerChunkSplits_Offset == 0x60c, "URecastNavMesh::LayerChunkSplits offset is not 60c");
	auto constexpr URecastNavMesh_boolField610_Offset = offsetof(URecastNavMesh, boolField610);
	static_assert(URecastNavMesh_boolField610_Offset == 0x610, "URecastNavMesh::boolField610 offset is not 610");
	auto constexpr URecastNavMesh_boolField611_Offset = offsetof(URecastNavMesh, boolField611);
	static_assert(URecastNavMesh_boolField611_Offset == 0x611, "URecastNavMesh::boolField611 offset is not 611");
	auto constexpr URecastNavMesh_TileSetUpdateInterval_Offset = offsetof(URecastNavMesh, TileSetUpdateInterval);
	static_assert(URecastNavMesh_TileSetUpdateInterval_Offset == 0x614, "URecastNavMesh::TileSetUpdateInterval offset is not 614");
	auto constexpr URecastNavMesh_HeuristicScale_Offset = offsetof(URecastNavMesh, HeuristicScale);
	static_assert(URecastNavMesh_HeuristicScale_Offset == 0x618, "URecastNavMesh::HeuristicScale offset is not 618");
	auto constexpr URecastNavMesh_VerticalDeviationFromGroundCompensation_Offset = offsetof(URecastNavMesh, VerticalDeviationFromGroundCompensation);
	static_assert(URecastNavMesh_VerticalDeviationFromGroundCompensation_Offset == 0x61c, "URecastNavMesh::VerticalDeviationFromGroundCompensation offset is not 61c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
