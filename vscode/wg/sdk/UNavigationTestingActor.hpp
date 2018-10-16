#pragma once
#include "UActor.hpp"
#include "FNavAgentProperties.hpp"
#include "FVector.hpp"
#include "ENavCostDisplay.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavigationTestingActor // Size: 0x510
	: public UActor // Size: 0x410
{
private:
	typedef UNavigationTestingActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1767); // id32("Class Engine.NavigationTestingActor")
		return ptr;
	}
	uint8_t UnknownData410[0x8];
	ExternalPtr<struct UCapsuleComponent> CapsuleComponent; /* Ofs: 0x418 Size: 0x8 - ObjectProperty Engine.NavigationTestingActor.CapsuleComponent */
	ExternalPtr<struct UNavigationInvokerComponent> InvokerComponent; /* Ofs: 0x420 Size: 0x8 - ObjectProperty Engine.NavigationTestingActor.InvokerComponent */
	uint8_t boolField428;
	uint8_t UnknownData429[0x7];
	FNavAgentProperties NavAgentProps; /* Ofs: 0x430 Size: 0x20 - StructProperty Engine.NavigationTestingActor.NavAgentProps */
	FVector QueryingExtent; /* Ofs: 0x450 Size: 0xC - StructProperty Engine.NavigationTestingActor.QueryingExtent */
	uint8_t UnknownData45C[0x4];
	ExternalPtr<struct UNavigationData> MyNavData; /* Ofs: 0x460 Size: 0x8 - ObjectProperty Engine.NavigationTestingActor.MyNavData */
	FVector ProjectedLocation; /* Ofs: 0x468 Size: 0xC - StructProperty Engine.NavigationTestingActor.ProjectedLocation */
	uint8_t boolField474;
	uint8_t boolField475;
	uint8_t UnknownData476[0x2];
	TEnumAsByte<enum ENavCostDisplay> CostDisplayMode; /* Ofs: 0x478 Size: 0x1 - ByteProperty Engine.NavigationTestingActor.CostDisplayMode */
	uint8_t UnknownData479[0x3];
	FVector2D TextCanvasOffset; /* Ofs: 0x47C Size: 0x8 - StructProperty Engine.NavigationTestingActor.TextCanvasOffset */
	uint8_t boolField484;
	uint8_t UnknownData485[0x3];
	float PathfindingTime; /* Ofs: 0x488 Size: 0x4 - FloatProperty Engine.NavigationTestingActor.PathfindingTime */
	float PathCost; /* Ofs: 0x48C Size: 0x4 - FloatProperty Engine.NavigationTestingActor.PathCost */
	int32_t PathfindingSteps; /* Ofs: 0x490 Size: 0x4 - IntProperty Engine.NavigationTestingActor.PathfindingSteps */
	uint8_t UnknownData494[0x4];
	ExternalPtr<struct UNavigationTestingActor> OtherActor; /* Ofs: 0x498 Size: 0x8 - ObjectProperty Engine.NavigationTestingActor.OtherActor */
	ExternalPtr<struct UClass> FilterClass; /* Ofs: 0x4A0 Size: 0x8 - ClassProperty Engine.NavigationTestingActor.FilterClass */
	int32_t ShowStepIndex; /* Ofs: 0x4A8 Size: 0x4 - IntProperty Engine.NavigationTestingActor.ShowStepIndex */
	float OffsetFromCornersDistance; /* Ofs: 0x4AC Size: 0x4 - FloatProperty Engine.NavigationTestingActor.OffsetFromCornersDistance */
	uint8_t UnknownData4B0[0x60];


	inline bool SetCapsuleComponent(t_structHelper inst, ExternalPtr<struct UCapsuleComponent> value) { inst.WriteOffset(0x418, value); }
	inline bool SetInvokerComponent(t_structHelper inst, ExternalPtr<struct UNavigationInvokerComponent> value) { inst.WriteOffset(0x420, value); }
	inline bool bActAsNavigationInvoker()
	{
		return boolField428& 0x1;
	}
	inline bool SetbActAsNavigationInvoker(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x428, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetNavAgentProps(t_structHelper inst, FNavAgentProperties value) { inst.WriteOffset(0x430, value); }
	inline bool SetQueryingExtent(t_structHelper inst, FVector value) { inst.WriteOffset(0x450, value); }
	inline bool SetMyNavData(t_structHelper inst, ExternalPtr<struct UNavigationData> value) { inst.WriteOffset(0x460, value); }
	inline bool SetProjectedLocation(t_structHelper inst, FVector value) { inst.WriteOffset(0x468, value); }
	inline bool bProjectedLocationValid()
	{
		return boolField474& 0x1;
	}
	inline bool SetbProjectedLocationValid(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x474, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bSearchStart()
	{
		return boolField474& 0x2;
	}
	inline bool SetbSearchStart(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x474, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bUseHierarchicalPathfinding()
	{
		return boolField474& 0x4;
	}
	inline bool SetbUseHierarchicalPathfinding(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x474, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bGatherDetailedInfo()
	{
		return boolField474& 0x8;
	}
	inline bool SetbGatherDetailedInfo(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x474, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bDrawDistanceToWall()
	{
		return boolField474& 0x10;
	}
	inline bool SetbDrawDistanceToWall(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x474, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bShowNodePool()
	{
		return boolField474& 0x20;
	}
	inline bool SetbShowNodePool(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x474, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bShowBestPath()
	{
		return boolField474& 0x40;
	}
	inline bool SetbShowBestPath(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x474, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool bShowDiffWithPreviousStep()
	{
		return boolField474& 0x80;
	}
	inline bool SetbShowDiffWithPreviousStep(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x474, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
	inline bool bShouldBeVisibleInGame()
	{
		return boolField475& 0x1;
	}
	inline bool SetbShouldBeVisibleInGame(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x475, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCostDisplayMode(t_structHelper inst, TEnumAsByte<enum ENavCostDisplay> value) { inst.WriteOffset(0x478, value); }
	inline bool SetTextCanvasOffset(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x47C, value); }
	inline bool bPathExist()
	{
		return boolField484& 0x1;
	}
	inline bool SetbPathExist(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x484, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bPathIsPartial()
	{
		return boolField484& 0x2;
	}
	inline bool SetbPathIsPartial(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x484, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bPathSearchOutOfNodes()
	{
		return boolField484& 0x4;
	}
	inline bool SetbPathSearchOutOfNodes(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x484, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool SetPathfindingTime(t_structHelper inst, float value) { inst.WriteOffset(0x488, value); }
	inline bool SetPathCost(t_structHelper inst, float value) { inst.WriteOffset(0x48C, value); }
	inline bool SetPathfindingSteps(t_structHelper inst, int32_t value) { inst.WriteOffset(0x490, value); }
	inline bool SetOtherActor(t_structHelper inst, ExternalPtr<struct UNavigationTestingActor> value) { inst.WriteOffset(0x498, value); }
	inline bool SetFilterClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetShowStepIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetOffsetFromCornersDistance(t_structHelper inst, float value) { inst.WriteOffset(0x4AC, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavigationTestingActor = sizeof(UNavigationTestingActor); // 1296
    static_assert(sizeof(UNavigationTestingActor) == 0x510, "Size of UNavigationTestingActor is not correct.");
	auto constexpr UNavigationTestingActor_CapsuleComponent_Offset = offsetof(UNavigationTestingActor, CapsuleComponent);
	static_assert(UNavigationTestingActor_CapsuleComponent_Offset == 0x418, "UNavigationTestingActor::CapsuleComponent offset is not 418");
	auto constexpr UNavigationTestingActor_InvokerComponent_Offset = offsetof(UNavigationTestingActor, InvokerComponent);
	static_assert(UNavigationTestingActor_InvokerComponent_Offset == 0x420, "UNavigationTestingActor::InvokerComponent offset is not 420");
	auto constexpr UNavigationTestingActor_boolField428_Offset = offsetof(UNavigationTestingActor, boolField428);
	static_assert(UNavigationTestingActor_boolField428_Offset == 0x428, "UNavigationTestingActor::boolField428 offset is not 428");
	auto constexpr UNavigationTestingActor_NavAgentProps_Offset = offsetof(UNavigationTestingActor, NavAgentProps);
	static_assert(UNavigationTestingActor_NavAgentProps_Offset == 0x430, "UNavigationTestingActor::NavAgentProps offset is not 430");
	auto constexpr UNavigationTestingActor_QueryingExtent_Offset = offsetof(UNavigationTestingActor, QueryingExtent);
	static_assert(UNavigationTestingActor_QueryingExtent_Offset == 0x450, "UNavigationTestingActor::QueryingExtent offset is not 450");
	auto constexpr UNavigationTestingActor_MyNavData_Offset = offsetof(UNavigationTestingActor, MyNavData);
	static_assert(UNavigationTestingActor_MyNavData_Offset == 0x460, "UNavigationTestingActor::MyNavData offset is not 460");
	auto constexpr UNavigationTestingActor_ProjectedLocation_Offset = offsetof(UNavigationTestingActor, ProjectedLocation);
	static_assert(UNavigationTestingActor_ProjectedLocation_Offset == 0x468, "UNavigationTestingActor::ProjectedLocation offset is not 468");
	auto constexpr UNavigationTestingActor_boolField474_Offset = offsetof(UNavigationTestingActor, boolField474);
	static_assert(UNavigationTestingActor_boolField474_Offset == 0x474, "UNavigationTestingActor::boolField474 offset is not 474");
	auto constexpr UNavigationTestingActor_boolField475_Offset = offsetof(UNavigationTestingActor, boolField475);
	static_assert(UNavigationTestingActor_boolField475_Offset == 0x475, "UNavigationTestingActor::boolField475 offset is not 475");
	auto constexpr UNavigationTestingActor_CostDisplayMode_Offset = offsetof(UNavigationTestingActor, CostDisplayMode);
	static_assert(UNavigationTestingActor_CostDisplayMode_Offset == 0x478, "UNavigationTestingActor::CostDisplayMode offset is not 478");
	auto constexpr UNavigationTestingActor_TextCanvasOffset_Offset = offsetof(UNavigationTestingActor, TextCanvasOffset);
	static_assert(UNavigationTestingActor_TextCanvasOffset_Offset == 0x47c, "UNavigationTestingActor::TextCanvasOffset offset is not 47c");
	auto constexpr UNavigationTestingActor_boolField484_Offset = offsetof(UNavigationTestingActor, boolField484);
	static_assert(UNavigationTestingActor_boolField484_Offset == 0x484, "UNavigationTestingActor::boolField484 offset is not 484");
	auto constexpr UNavigationTestingActor_PathfindingTime_Offset = offsetof(UNavigationTestingActor, PathfindingTime);
	static_assert(UNavigationTestingActor_PathfindingTime_Offset == 0x488, "UNavigationTestingActor::PathfindingTime offset is not 488");
	auto constexpr UNavigationTestingActor_PathCost_Offset = offsetof(UNavigationTestingActor, PathCost);
	static_assert(UNavigationTestingActor_PathCost_Offset == 0x48c, "UNavigationTestingActor::PathCost offset is not 48c");
	auto constexpr UNavigationTestingActor_PathfindingSteps_Offset = offsetof(UNavigationTestingActor, PathfindingSteps);
	static_assert(UNavigationTestingActor_PathfindingSteps_Offset == 0x490, "UNavigationTestingActor::PathfindingSteps offset is not 490");
	auto constexpr UNavigationTestingActor_OtherActor_Offset = offsetof(UNavigationTestingActor, OtherActor);
	static_assert(UNavigationTestingActor_OtherActor_Offset == 0x498, "UNavigationTestingActor::OtherActor offset is not 498");
	auto constexpr UNavigationTestingActor_FilterClass_Offset = offsetof(UNavigationTestingActor, FilterClass);
	static_assert(UNavigationTestingActor_FilterClass_Offset == 0x4a0, "UNavigationTestingActor::FilterClass offset is not 4a0");
	auto constexpr UNavigationTestingActor_ShowStepIndex_Offset = offsetof(UNavigationTestingActor, ShowStepIndex);
	static_assert(UNavigationTestingActor_ShowStepIndex_Offset == 0x4a8, "UNavigationTestingActor::ShowStepIndex offset is not 4a8");
	auto constexpr UNavigationTestingActor_OffsetFromCornersDistance_Offset = offsetof(UNavigationTestingActor, OffsetFromCornersDistance);
	static_assert(UNavigationTestingActor_OffsetFromCornersDistance_Offset == 0x4ac, "UNavigationTestingActor::OffsetFromCornersDistance offset is not 4ac");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
