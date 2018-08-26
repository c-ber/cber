#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMatineeActor // Size: 0x4B0
	: public UActor // Size: 0x410
{
private:
	typedef UMatineeActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1756); // id32("Class Engine.MatineeActor")
		return ptr;
	}
//	ExternalPtr<struct UInterpData> MatineeData; /* Ofs: 0x408 Size: 0x8 - ObjectProperty Engine.MatineeActor.MatineeData */
	FName MatineeControllerName; /* Ofs: 0x410 Size: 0x8 - NameProperty Engine.MatineeActor.MatineeControllerName */
	float PlayRate; /* Ofs: 0x418 Size: 0x4 - FloatProperty Engine.MatineeActor.PlayRate */
	uint8_t boolField41C;
	uint8_t UnknownData41D[0x3];
	float ForceStartPosition; /* Ofs: 0x420 Size: 0x4 - FloatProperty Engine.MatineeActor.ForceStartPosition */
	uint8_t boolField424;
	uint8_t UnknownData425[0x3];
	int32_t PreferredSplitScreenNum; /* Ofs: 0x428 Size: 0x4 - IntProperty Engine.MatineeActor.PreferredSplitScreenNum */
	uint8_t boolField42C;
	uint8_t UnknownData42D[0x3];
	TArray<struct FInterpGroupActorInfo> GroupActorInfos; /* Ofs: 0x430 Size: 0x10 - ArrayProperty Engine.MatineeActor.GroupActorInfos */
	uint8_t boolField440;
	uint8_t UnknownData441[0x7];
	TArray<ExternalPtr<struct UInterpGroupInst>> GroupInst; /* Ofs: 0x448 Size: 0x10 - ArrayProperty Engine.MatineeActor.GroupInst */
	TArray<struct FCameraCutInfo> CameraCuts; /* Ofs: 0x458 Size: 0x10 - ArrayProperty Engine.MatineeActor.CameraCuts */
	uint8_t boolField468;
	uint8_t UnknownData469[0x3];
	float InterpPosition; /* Ofs: 0x46C Size: 0x4 - FloatProperty Engine.MatineeActor.InterpPosition */
	uint8_t UnknownData470[0x4];
	uint8_t ReplicationForceIsPlaying; /* Ofs: 0x474 Size: 0x1 - ByteProperty Engine.MatineeActor.ReplicationForceIsPlaying */
	uint8_t UnknownData475[0x3];
	FScriptMulticastDelegate OnPlay; /* Ofs: 0x478 Size: 0x10 - MulticastDelegateProperty Engine.MatineeActor.OnPlay */
	FScriptMulticastDelegate OnStop; /* Ofs: 0x488 Size: 0x10 - MulticastDelegateProperty Engine.MatineeActor.OnStop */
	FScriptMulticastDelegate OnPause; /* Ofs: 0x498 Size: 0x10 - MulticastDelegateProperty Engine.MatineeActor.OnPause */
	uint8_t UnknownData4A8[0x8];


//	inline bool SetMatineeData(t_structHelper inst, ExternalPtr<struct UInterpData> value) { inst.WriteOffset(0x408, value); }
	inline bool SetMatineeControllerName(t_structHelper inst, FName value) { inst.WriteOffset(0x410, value); }
	inline bool SetPlayRate(t_structHelper inst, float value) { inst.WriteOffset(0x418, value); }
	inline bool bPlayOnLevelLoad()
	{
		return boolField41C& 0x1;
	}
	inline bool SetbPlayOnLevelLoad(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x41C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bForceStartPos()
	{
		return boolField41C& 0x2;
	}
	inline bool SetbForceStartPos(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x41C, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetForceStartPosition(t_structHelper inst, float value) { inst.WriteOffset(0x420, value); }
	inline bool bLooping()
	{
		return boolField424& 0x1;
	}
	inline bool SetbLooping(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x424, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bRewindOnPlay()
	{
		return boolField424& 0x2;
	}
	inline bool SetbRewindOnPlay(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x424, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bNoResetOnRewind()
	{
		return boolField424& 0x4;
	}
	inline bool SetbNoResetOnRewind(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x424, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bRewindIfAlreadyPlaying()
	{
		return boolField424& 0x8;
	}
	inline bool SetbRewindIfAlreadyPlaying(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x424, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bDisableRadioFilter()
	{
		return boolField424& 0x10;
	}
	inline bool SetbDisableRadioFilter(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x424, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bClientSideOnly()
	{
		return boolField424& 0x20;
	}
	inline bool SetbClientSideOnly(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x424, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bSkipUpdateIfNotVisible()
	{
		return boolField424& 0x40;
	}
	inline bool SetbSkipUpdateIfNotVisible(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x424, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool bIsSkippable()
	{
		return boolField424& 0x80;
	}
	inline bool SetbIsSkippable(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x424, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
	inline bool SetPreferredSplitScreenNum(t_structHelper inst, int32_t value) { inst.WriteOffset(0x428, value); }
	inline bool bDisableMovementInput()
	{
		return boolField42C& 0x1;
	}
	inline bool SetbDisableMovementInput(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x42C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bDisableLookAtInput()
	{
		return boolField42C& 0x2;
	}
	inline bool SetbDisableLookAtInput(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x42C, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bHidePlayer()
	{
		return boolField42C& 0x4;
	}
	inline bool SetbHidePlayer(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x42C, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bHideHud()
	{
		return boolField42C& 0x8;
	}
	inline bool SetbHideHud(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x42C, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool SetGroupActorInfos(t_structHelper inst, TArray<struct FInterpGroupActorInfo> value) { inst.WriteOffset(0x430, value); }
	inline bool bShouldShowGore()
	{
		return boolField440& 0x1;
	}
	inline bool SetbShouldShowGore(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x440, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetGroupInst(t_structHelper inst, TArray<ExternalPtr<struct UInterpGroupInst>> value) { inst.WriteOffset(0x448, value); }
	inline bool SetCameraCuts(t_structHelper inst, TArray<struct FCameraCutInfo> value) { inst.WriteOffset(0x458, value); }
	inline bool bIsPlaying()
	{
		return boolField468& 0x1;
	}
	inline bool SetbIsPlaying(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x468, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bReversePlayback()
	{
		return boolField468& 0x2;
	}
	inline bool SetbReversePlayback(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x468, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bPaused()
	{
		return boolField468& 0x4;
	}
	inline bool SetbPaused(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x468, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bPendingStop()
	{
		return boolField468& 0x8;
	}
	inline bool SetbPendingStop(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x468, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool SetInterpPosition(t_structHelper inst, float value) { inst.WriteOffset(0x46C, value); }
	inline bool SetReplicationForceIsPlaying(t_structHelper inst, uint8_t value) { inst.WriteOffset(0x474, value); }
	inline bool SetOnPlay(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x478, value); }
	inline bool SetOnStop(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x488, value); }
	inline bool SetOnPause(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x498, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMatineeActor = sizeof(UMatineeActor); // 1200
    static_assert(sizeof(UMatineeActor) == 0x4B0, "Size of UMatineeActor is not correct.");
//	auto constexpr UMatineeActor_MatineeData_Offset = offsetof(UMatineeActor, MatineeData);
//	static_assert(UMatineeActor_MatineeData_Offset == 0x408, "UMatineeActor::MatineeData offset is not 408");
	auto constexpr UMatineeActor_MatineeControllerName_Offset = offsetof(UMatineeActor, MatineeControllerName);
	static_assert(UMatineeActor_MatineeControllerName_Offset == 0x410, "UMatineeActor::MatineeControllerName offset is not 410");
	auto constexpr UMatineeActor_PlayRate_Offset = offsetof(UMatineeActor, PlayRate);
	static_assert(UMatineeActor_PlayRate_Offset == 0x418, "UMatineeActor::PlayRate offset is not 418");
	auto constexpr UMatineeActor_boolField41C_Offset = offsetof(UMatineeActor, boolField41C);
	static_assert(UMatineeActor_boolField41C_Offset == 0x41c, "UMatineeActor::boolField41C offset is not 41c");
	auto constexpr UMatineeActor_ForceStartPosition_Offset = offsetof(UMatineeActor, ForceStartPosition);
	static_assert(UMatineeActor_ForceStartPosition_Offset == 0x420, "UMatineeActor::ForceStartPosition offset is not 420");
	auto constexpr UMatineeActor_boolField424_Offset = offsetof(UMatineeActor, boolField424);
	static_assert(UMatineeActor_boolField424_Offset == 0x424, "UMatineeActor::boolField424 offset is not 424");
	auto constexpr UMatineeActor_PreferredSplitScreenNum_Offset = offsetof(UMatineeActor, PreferredSplitScreenNum);
	static_assert(UMatineeActor_PreferredSplitScreenNum_Offset == 0x428, "UMatineeActor::PreferredSplitScreenNum offset is not 428");
	auto constexpr UMatineeActor_boolField42C_Offset = offsetof(UMatineeActor, boolField42C);
	static_assert(UMatineeActor_boolField42C_Offset == 0x42c, "UMatineeActor::boolField42C offset is not 42c");
	auto constexpr UMatineeActor_GroupActorInfos_Offset = offsetof(UMatineeActor, GroupActorInfos);
	static_assert(UMatineeActor_GroupActorInfos_Offset == 0x430, "UMatineeActor::GroupActorInfos offset is not 430");
	auto constexpr UMatineeActor_boolField440_Offset = offsetof(UMatineeActor, boolField440);
	static_assert(UMatineeActor_boolField440_Offset == 0x440, "UMatineeActor::boolField440 offset is not 440");
	auto constexpr UMatineeActor_GroupInst_Offset = offsetof(UMatineeActor, GroupInst);
	static_assert(UMatineeActor_GroupInst_Offset == 0x448, "UMatineeActor::GroupInst offset is not 448");
	auto constexpr UMatineeActor_CameraCuts_Offset = offsetof(UMatineeActor, CameraCuts);
	static_assert(UMatineeActor_CameraCuts_Offset == 0x458, "UMatineeActor::CameraCuts offset is not 458");
	auto constexpr UMatineeActor_boolField468_Offset = offsetof(UMatineeActor, boolField468);
	static_assert(UMatineeActor_boolField468_Offset == 0x468, "UMatineeActor::boolField468 offset is not 468");
	auto constexpr UMatineeActor_InterpPosition_Offset = offsetof(UMatineeActor, InterpPosition);
	static_assert(UMatineeActor_InterpPosition_Offset == 0x46c, "UMatineeActor::InterpPosition offset is not 46c");
	auto constexpr UMatineeActor_ReplicationForceIsPlaying_Offset = offsetof(UMatineeActor, ReplicationForceIsPlaying);
	static_assert(UMatineeActor_ReplicationForceIsPlaying_Offset == 0x474, "UMatineeActor::ReplicationForceIsPlaying offset is not 474");
	auto constexpr UMatineeActor_OnPlay_Offset = offsetof(UMatineeActor, OnPlay);
	static_assert(UMatineeActor_OnPlay_Offset == 0x478, "UMatineeActor::OnPlay offset is not 478");
	auto constexpr UMatineeActor_OnStop_Offset = offsetof(UMatineeActor, OnStop);
	static_assert(UMatineeActor_OnStop_Offset == 0x488, "UMatineeActor::OnStop offset is not 488");
	auto constexpr UMatineeActor_OnPause_Offset = offsetof(UMatineeActor, OnPause);
	static_assert(UMatineeActor_OnPause_Offset == 0x498, "UMatineeActor::OnPause offset is not 498");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
