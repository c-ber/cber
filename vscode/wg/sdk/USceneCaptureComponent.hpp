#pragma once
#include "USceneComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USceneCaptureComponent // Size: 0x510
	: public USceneComponent // Size: 0x490
{
private:
	typedef USceneCaptureComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(237); // id32("Class Engine.SceneCaptureComponent")
		return ptr;
	}
	TArray<ExternalPtr<struct UPrimitiveComponent>> HiddenComponents; /* Ofs: 0x490 Size: 0x10 - ArrayProperty Engine.SceneCaptureComponent.HiddenComponents */
	TArray<ExternalPtr<struct UActor>> HiddenActors; /* Ofs: 0x4A0 Size: 0x10 - ArrayProperty Engine.SceneCaptureComponent.HiddenActors */
	TArray<ExternalPtr<struct UPrimitiveComponent>> ShowOnlyComponents; /* Ofs: 0x4B0 Size: 0x10 - ArrayProperty Engine.SceneCaptureComponent.ShowOnlyComponents */
	TArray<ExternalPtr<struct UActor>> ShowOnlyActors; /* Ofs: 0x4C0 Size: 0x10 - ArrayProperty Engine.SceneCaptureComponent.ShowOnlyActors */
	uint8_t boolField4D0;
	uint8_t boolField4D1;
	uint8_t UnknownData4D2[0x2];
	float LODDistanceFactor; /* Ofs: 0x4D4 Size: 0x4 - FloatProperty Engine.SceneCaptureComponent.LODDistanceFactor */
	float MaxViewDistanceOverride; /* Ofs: 0x4D8 Size: 0x4 - FloatProperty Engine.SceneCaptureComponent.MaxViewDistanceOverride */
	int32_t CaptureSortPriority; /* Ofs: 0x4DC Size: 0x4 - IntProperty Engine.SceneCaptureComponent.CaptureSortPriority */
	TArray<struct FEngineShowFlagsSetting> ShowFlagSettings; /* Ofs: 0x4E0 Size: 0x10 - ArrayProperty Engine.SceneCaptureComponent.ShowFlagSettings */
	uint8_t UnknownData4F0[0x20];


	inline bool SetHiddenComponents(t_structHelper inst, TArray<ExternalPtr<struct UPrimitiveComponent>> value) { inst.WriteOffset(0x490, value); }
	inline bool SetHiddenActors(t_structHelper inst, TArray<ExternalPtr<struct UActor>> value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetShowOnlyComponents(t_structHelper inst, TArray<ExternalPtr<struct UPrimitiveComponent>> value) { inst.WriteOffset(0x4B0, value); }
	inline bool SetShowOnlyActors(t_structHelper inst, TArray<ExternalPtr<struct UActor>> value) { inst.WriteOffset(0x4C0, value); }
	inline bool bCaptureEveryFrame()
	{
		return boolField4D0& 0x1;
	}
	inline bool SetbCaptureEveryFrame(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4D0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bCaptureOnMovement()
	{
		return boolField4D1& 0x1;
	}
	inline bool SetbCaptureOnMovement(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4D1, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetLODDistanceFactor(t_structHelper inst, float value) { inst.WriteOffset(0x4D4, value); }
	inline bool SetMaxViewDistanceOverride(t_structHelper inst, float value) { inst.WriteOffset(0x4D8, value); }
	inline bool SetCaptureSortPriority(t_structHelper inst, int32_t value) { inst.WriteOffset(0x4DC, value); }
	inline bool SetShowFlagSettings(t_structHelper inst, TArray<struct FEngineShowFlagsSetting> value) { inst.WriteOffset(0x4E0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSceneCaptureComponent = sizeof(USceneCaptureComponent); // 1296
    static_assert(sizeof(USceneCaptureComponent) == 0x510, "Size of USceneCaptureComponent is not correct.");
	auto constexpr USceneCaptureComponent_HiddenComponents_Offset = offsetof(USceneCaptureComponent, HiddenComponents);
	static_assert(USceneCaptureComponent_HiddenComponents_Offset == 0x490, "USceneCaptureComponent::HiddenComponents offset is not 490");
	auto constexpr USceneCaptureComponent_HiddenActors_Offset = offsetof(USceneCaptureComponent, HiddenActors);
	static_assert(USceneCaptureComponent_HiddenActors_Offset == 0x4a0, "USceneCaptureComponent::HiddenActors offset is not 4a0");
	auto constexpr USceneCaptureComponent_ShowOnlyComponents_Offset = offsetof(USceneCaptureComponent, ShowOnlyComponents);
	static_assert(USceneCaptureComponent_ShowOnlyComponents_Offset == 0x4b0, "USceneCaptureComponent::ShowOnlyComponents offset is not 4b0");
	auto constexpr USceneCaptureComponent_ShowOnlyActors_Offset = offsetof(USceneCaptureComponent, ShowOnlyActors);
	static_assert(USceneCaptureComponent_ShowOnlyActors_Offset == 0x4c0, "USceneCaptureComponent::ShowOnlyActors offset is not 4c0");
	auto constexpr USceneCaptureComponent_boolField4D0_Offset = offsetof(USceneCaptureComponent, boolField4D0);
	static_assert(USceneCaptureComponent_boolField4D0_Offset == 0x4d0, "USceneCaptureComponent::boolField4D0 offset is not 4d0");
	auto constexpr USceneCaptureComponent_boolField4D1_Offset = offsetof(USceneCaptureComponent, boolField4D1);
	static_assert(USceneCaptureComponent_boolField4D1_Offset == 0x4d1, "USceneCaptureComponent::boolField4D1 offset is not 4d1");
	auto constexpr USceneCaptureComponent_LODDistanceFactor_Offset = offsetof(USceneCaptureComponent, LODDistanceFactor);
	static_assert(USceneCaptureComponent_LODDistanceFactor_Offset == 0x4d4, "USceneCaptureComponent::LODDistanceFactor offset is not 4d4");
	auto constexpr USceneCaptureComponent_MaxViewDistanceOverride_Offset = offsetof(USceneCaptureComponent, MaxViewDistanceOverride);
	static_assert(USceneCaptureComponent_MaxViewDistanceOverride_Offset == 0x4d8, "USceneCaptureComponent::MaxViewDistanceOverride offset is not 4d8");
	auto constexpr USceneCaptureComponent_CaptureSortPriority_Offset = offsetof(USceneCaptureComponent, CaptureSortPriority);
	static_assert(USceneCaptureComponent_CaptureSortPriority_Offset == 0x4dc, "USceneCaptureComponent::CaptureSortPriority offset is not 4dc");
	auto constexpr USceneCaptureComponent_ShowFlagSettings_Offset = offsetof(USceneCaptureComponent, ShowFlagSettings);
	static_assert(USceneCaptureComponent_ShowFlagSettings_Offset == 0x4e0, "USceneCaptureComponent::ShowFlagSettings offset is not 4e0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
