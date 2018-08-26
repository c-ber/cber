#pragma once
#include "UActorComponent.hpp"
#include "FVivoxConnectionInfo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVivoxBaseComponent // Size: 0x2A0
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UVivoxBaseComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(67); // id32("Class TslGame.VivoxBaseComponent")
		return ptr;
	}
//	FScriptMulticastDelegate OnVoiceChatUpdated; /* Ofs: 0x1E8 Size: 0x10 - MulticastDelegateProperty TslGame.VivoxBaseComponent.OnVoiceChatUpdated */
	uint8_t UnknownData1F0[0x8];
	FScriptMulticastDelegate OnParticipantMuteChanged; /* Ofs: 0x1F8 Size: 0x10 - MulticastDelegateProperty TslGame.VivoxBaseComponent.OnParticipantMuteChanged */
	FScriptMulticastDelegate OnParticipantRestrictionChanged; /* Ofs: 0x208 Size: 0x10 - MulticastDelegateProperty TslGame.VivoxBaseComponent.OnParticipantRestrictionChanged */
	uint8_t UnknownData218[0x8];
	FVivoxConnectionInfo ConnectionInfo; /* Ofs: 0x220 Size: 0x20 - StructProperty TslGame.VivoxBaseComponent.ConnectionInfo */
	uint8_t UnknownData240[0x8];
	FString TeamChannelUrl; /* Ofs: 0x248 Size: 0x10 - StrProperty TslGame.VivoxBaseComponent.TeamChannelUrl */
	FString GlobalChannelUrl; /* Ofs: 0x258 Size: 0x10 - StrProperty TslGame.VivoxBaseComponent.GlobalChannelUrl */
	uint8_t UnknownData268[0x4];
	float ResetFailureDelaySeconds; /* Ofs: 0x26C Size: 0x4 - FloatProperty TslGame.VivoxBaseComponent.ResetFailureDelaySeconds */
	uint8_t UnknownData270[0x18];
	float UpdatePositionIntervalSeconds; /* Ofs: 0x288 Size: 0x4 - FloatProperty TslGame.VivoxBaseComponent.UpdatePositionIntervalSeconds */
	uint8_t UnknownData28C[0xC];
	float UserInputVolumeModifier; /* Ofs: 0x298 Size: 0x4 - FloatProperty TslGame.VivoxBaseComponent.UserInputVolumeModifier */
	float UserOutputVolumeModifier; /* Ofs: 0x29C Size: 0x4 - FloatProperty TslGame.VivoxBaseComponent.UserOutputVolumeModifier */


//	inline bool SetOnVoiceChatUpdated(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x1E8, value); }
	inline bool SetOnParticipantMuteChanged(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x1F8, value); }
	inline bool SetOnParticipantRestrictionChanged(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x208, value); }
	inline bool SetConnectionInfo(t_structHelper inst, FVivoxConnectionInfo value) { inst.WriteOffset(0x220, value); }
	inline bool SetTeamChannelUrl(t_structHelper inst, FString value) { inst.WriteOffset(0x248, value); }
	inline bool SetGlobalChannelUrl(t_structHelper inst, FString value) { inst.WriteOffset(0x258, value); }
	inline bool SetResetFailureDelaySeconds(t_structHelper inst, float value) { inst.WriteOffset(0x26C, value); }
	inline bool SetUpdatePositionIntervalSeconds(t_structHelper inst, float value) { inst.WriteOffset(0x288, value); }
	inline bool SetUserInputVolumeModifier(t_structHelper inst, float value) { inst.WriteOffset(0x298, value); }
	inline bool SetUserOutputVolumeModifier(t_structHelper inst, float value) { inst.WriteOffset(0x29C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVivoxBaseComponent = sizeof(UVivoxBaseComponent); // 672
    static_assert(sizeof(UVivoxBaseComponent) == 0x2A0, "Size of UVivoxBaseComponent is not correct.");
//	auto constexpr UVivoxBaseComponent_OnVoiceChatUpdated_Offset = offsetof(UVivoxBaseComponent, OnVoiceChatUpdated);
//	static_assert(UVivoxBaseComponent_OnVoiceChatUpdated_Offset == 0x1e8, "UVivoxBaseComponent::OnVoiceChatUpdated offset is not 1e8");
	auto constexpr UVivoxBaseComponent_OnParticipantMuteChanged_Offset = offsetof(UVivoxBaseComponent, OnParticipantMuteChanged);
	static_assert(UVivoxBaseComponent_OnParticipantMuteChanged_Offset == 0x1f8, "UVivoxBaseComponent::OnParticipantMuteChanged offset is not 1f8");
	auto constexpr UVivoxBaseComponent_OnParticipantRestrictionChanged_Offset = offsetof(UVivoxBaseComponent, OnParticipantRestrictionChanged);
	static_assert(UVivoxBaseComponent_OnParticipantRestrictionChanged_Offset == 0x208, "UVivoxBaseComponent::OnParticipantRestrictionChanged offset is not 208");
	auto constexpr UVivoxBaseComponent_ConnectionInfo_Offset = offsetof(UVivoxBaseComponent, ConnectionInfo);
	static_assert(UVivoxBaseComponent_ConnectionInfo_Offset == 0x220, "UVivoxBaseComponent::ConnectionInfo offset is not 220");
	auto constexpr UVivoxBaseComponent_TeamChannelUrl_Offset = offsetof(UVivoxBaseComponent, TeamChannelUrl);
	static_assert(UVivoxBaseComponent_TeamChannelUrl_Offset == 0x248, "UVivoxBaseComponent::TeamChannelUrl offset is not 248");
	auto constexpr UVivoxBaseComponent_GlobalChannelUrl_Offset = offsetof(UVivoxBaseComponent, GlobalChannelUrl);
	static_assert(UVivoxBaseComponent_GlobalChannelUrl_Offset == 0x258, "UVivoxBaseComponent::GlobalChannelUrl offset is not 258");
	auto constexpr UVivoxBaseComponent_ResetFailureDelaySeconds_Offset = offsetof(UVivoxBaseComponent, ResetFailureDelaySeconds);
	static_assert(UVivoxBaseComponent_ResetFailureDelaySeconds_Offset == 0x26c, "UVivoxBaseComponent::ResetFailureDelaySeconds offset is not 26c");
	auto constexpr UVivoxBaseComponent_UpdatePositionIntervalSeconds_Offset = offsetof(UVivoxBaseComponent, UpdatePositionIntervalSeconds);
	static_assert(UVivoxBaseComponent_UpdatePositionIntervalSeconds_Offset == 0x288, "UVivoxBaseComponent::UpdatePositionIntervalSeconds offset is not 288");
	auto constexpr UVivoxBaseComponent_UserInputVolumeModifier_Offset = offsetof(UVivoxBaseComponent, UserInputVolumeModifier);
	static_assert(UVivoxBaseComponent_UserInputVolumeModifier_Offset == 0x298, "UVivoxBaseComponent::UserInputVolumeModifier offset is not 298");
	auto constexpr UVivoxBaseComponent_UserOutputVolumeModifier_Offset = offsetof(UVivoxBaseComponent, UserOutputVolumeModifier);
	static_assert(UVivoxBaseComponent_UserOutputVolumeModifier_Offset == 0x29c, "UVivoxBaseComponent::UserOutputVolumeModifier offset is not 29c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
