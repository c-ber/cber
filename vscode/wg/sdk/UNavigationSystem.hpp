#pragma once
#include "UBlueprintFunctionLibrary.hpp"
#include "ENavDataGatheringModeConfig.hpp"
#include "FNavigationSystemRunMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavigationSystem // Size: 0x470
	: public UBlueprintFunctionLibrary // Size: 0x30
{
private:
	typedef UNavigationSystem t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(670); // id32("Class Engine.NavigationSystem")
		return ptr;
	}
	ExternalPtr<struct UNavigationData> MainNavData; /* Ofs: 0x30 Size: 0x8 - ObjectProperty Engine.NavigationSystem.MainNavData */
	ExternalPtr<struct UNavigationData> AbstractNavData; /* Ofs: 0x38 Size: 0x8 - ObjectProperty Engine.NavigationSystem.AbstractNavData */
	uint8_t boolField40;
	uint8_t UnknownData41[0x3];
	TEnumAsByte<enum ENavDataGatheringModeConfig> DataGatheringMode; /* Ofs: 0x44 Size: 0x1 - EnumProperty Engine.NavigationSystem.DataGatheringMode */
	uint8_t UnknownData45[0x3];
	uint8_t boolField48;
	uint8_t UnknownData49[0x3];
	float ActiveTilesUpdateInterval; /* Ofs: 0x4C Size: 0x4 - FloatProperty Engine.NavigationSystem.ActiveTilesUpdateInterval */
	TArray<struct FNavDataConfig> SupportedAgents; /* Ofs: 0x50 Size: 0x10 - ArrayProperty Engine.NavigationSystem.SupportedAgents */
	float DirtyAreasUpdateFreq; /* Ofs: 0x60 Size: 0x4 - FloatProperty Engine.NavigationSystem.DirtyAreasUpdateFreq */
	uint8_t UnknownData64[0x4];
	TArray<ExternalPtr<struct UNavigationData>> NavDataSet; /* Ofs: 0x68 Size: 0x10 - ArrayProperty Engine.NavigationSystem.NavDataSet */
	TArray<ExternalPtr<struct UNavigationData>> NavDataRegistrationQueue; /* Ofs: 0x78 Size: 0x10 - ArrayProperty Engine.NavigationSystem.NavDataRegistrationQueue */
	uint8_t UnknownData88[0x60];
	FScriptMulticastDelegate OnNavDataRegisteredEvent; /* Ofs: 0xE8 Size: 0x10 - MulticastDelegateProperty Engine.NavigationSystem.OnNavDataRegisteredEvent */
	FScriptMulticastDelegate OnNavigationGenerationFinishedDelegate; /* Ofs: 0xF8 Size: 0x10 - MulticastDelegateProperty Engine.NavigationSystem.OnNavigationGenerationFinishedDelegate */
	uint8_t UnknownData108[0x12C];
	TEnumAsByte<enum FNavigationSystemRunMode> OperationMode; /* Ofs: 0x234 Size: 0x1 - EnumProperty Engine.NavigationSystem.OperationMode */
	uint8_t UnknownData235[0x23B];


	inline bool SetMainNavData(t_structHelper inst, ExternalPtr<struct UNavigationData> value) { inst.WriteOffset(0x30, value); }
	inline bool SetAbstractNavData(t_structHelper inst, ExternalPtr<struct UNavigationData> value) { inst.WriteOffset(0x38, value); }
	inline bool bAutoCreateNavigationData()
	{
		return boolField40& 0x1;
	}
	inline bool SetbAutoCreateNavigationData(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bAllowClientSideNavigation()
	{
		return boolField40& 0x2;
	}
	inline bool SetbAllowClientSideNavigation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bSupportRebuilding()
	{
		return boolField40& 0x4;
	}
	inline bool SetbSupportRebuilding(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bInitialBuildingLocked()
	{
		return boolField40& 0x8;
	}
	inline bool SetbInitialBuildingLocked(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bSkipAgentHeightCheckWhenPickingNavData()
	{
		return boolField40& 0x20;
	}
	inline bool SetbSkipAgentHeightCheckWhenPickingNavData(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool SetDataGatheringMode(t_structHelper inst, TEnumAsByte<enum ENavDataGatheringModeConfig> value) { inst.WriteOffset(0x44, value); }
	inline bool bGenerateNavigationOnlyAroundNavigationInvokers()
	{
		return boolField48& 0x1;
	}
	inline bool SetbGenerateNavigationOnlyAroundNavigationInvokers(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x48, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetActiveTilesUpdateInterval(t_structHelper inst, float value) { inst.WriteOffset(0x4C, value); }
	inline bool SetSupportedAgents(t_structHelper inst, TArray<struct FNavDataConfig> value) { inst.WriteOffset(0x50, value); }
	inline bool SetDirtyAreasUpdateFreq(t_structHelper inst, float value) { inst.WriteOffset(0x60, value); }
	inline bool SetNavDataSet(t_structHelper inst, TArray<ExternalPtr<struct UNavigationData>> value) { inst.WriteOffset(0x68, value); }
	inline bool SetNavDataRegistrationQueue(t_structHelper inst, TArray<ExternalPtr<struct UNavigationData>> value) { inst.WriteOffset(0x78, value); }
	inline bool SetOnNavDataRegisteredEvent(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0xE8, value); }
	inline bool SetOnNavigationGenerationFinishedDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0xF8, value); }
	inline bool SetOperationMode(t_structHelper inst, TEnumAsByte<enum FNavigationSystemRunMode> value) { inst.WriteOffset(0x234, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavigationSystem = sizeof(UNavigationSystem); // 1136
    static_assert(sizeof(UNavigationSystem) == 0x470, "Size of UNavigationSystem is not correct.");
	auto constexpr UNavigationSystem_MainNavData_Offset = offsetof(UNavigationSystem, MainNavData);
	static_assert(UNavigationSystem_MainNavData_Offset == 0x30, "UNavigationSystem::MainNavData offset is not 30");
	auto constexpr UNavigationSystem_AbstractNavData_Offset = offsetof(UNavigationSystem, AbstractNavData);
	static_assert(UNavigationSystem_AbstractNavData_Offset == 0x38, "UNavigationSystem::AbstractNavData offset is not 38");
	auto constexpr UNavigationSystem_boolField40_Offset = offsetof(UNavigationSystem, boolField40);
	static_assert(UNavigationSystem_boolField40_Offset == 0x40, "UNavigationSystem::boolField40 offset is not 40");
	auto constexpr UNavigationSystem_DataGatheringMode_Offset = offsetof(UNavigationSystem, DataGatheringMode);
	static_assert(UNavigationSystem_DataGatheringMode_Offset == 0x44, "UNavigationSystem::DataGatheringMode offset is not 44");
	auto constexpr UNavigationSystem_boolField48_Offset = offsetof(UNavigationSystem, boolField48);
	static_assert(UNavigationSystem_boolField48_Offset == 0x48, "UNavigationSystem::boolField48 offset is not 48");
	auto constexpr UNavigationSystem_ActiveTilesUpdateInterval_Offset = offsetof(UNavigationSystem, ActiveTilesUpdateInterval);
	static_assert(UNavigationSystem_ActiveTilesUpdateInterval_Offset == 0x4c, "UNavigationSystem::ActiveTilesUpdateInterval offset is not 4c");
	auto constexpr UNavigationSystem_SupportedAgents_Offset = offsetof(UNavigationSystem, SupportedAgents);
	static_assert(UNavigationSystem_SupportedAgents_Offset == 0x50, "UNavigationSystem::SupportedAgents offset is not 50");
	auto constexpr UNavigationSystem_DirtyAreasUpdateFreq_Offset = offsetof(UNavigationSystem, DirtyAreasUpdateFreq);
	static_assert(UNavigationSystem_DirtyAreasUpdateFreq_Offset == 0x60, "UNavigationSystem::DirtyAreasUpdateFreq offset is not 60");
	auto constexpr UNavigationSystem_NavDataSet_Offset = offsetof(UNavigationSystem, NavDataSet);
	static_assert(UNavigationSystem_NavDataSet_Offset == 0x68, "UNavigationSystem::NavDataSet offset is not 68");
	auto constexpr UNavigationSystem_NavDataRegistrationQueue_Offset = offsetof(UNavigationSystem, NavDataRegistrationQueue);
	static_assert(UNavigationSystem_NavDataRegistrationQueue_Offset == 0x78, "UNavigationSystem::NavDataRegistrationQueue offset is not 78");
	auto constexpr UNavigationSystem_OnNavDataRegisteredEvent_Offset = offsetof(UNavigationSystem, OnNavDataRegisteredEvent);
	static_assert(UNavigationSystem_OnNavDataRegisteredEvent_Offset == 0xe8, "UNavigationSystem::OnNavDataRegisteredEvent offset is not e8");
	auto constexpr UNavigationSystem_OnNavigationGenerationFinishedDelegate_Offset = offsetof(UNavigationSystem, OnNavigationGenerationFinishedDelegate);
	static_assert(UNavigationSystem_OnNavigationGenerationFinishedDelegate_Offset == 0xf8, "UNavigationSystem::OnNavigationGenerationFinishedDelegate offset is not f8");
	auto constexpr UNavigationSystem_OperationMode_Offset = offsetof(UNavigationSystem, OperationMode);
	static_assert(UNavigationSystem_OperationMode_Offset == 0x234, "UNavigationSystem::OperationMode offset is not 234");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
