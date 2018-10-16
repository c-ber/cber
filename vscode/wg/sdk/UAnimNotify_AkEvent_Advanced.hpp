#pragma once
#include "UAnimNotify.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimNotify_AkEvent_Advanced // Size: 0x90
	: public UAnimNotify // Size: 0x40
{
private:
	typedef UAnimNotify_AkEvent_Advanced t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(409); // id32("Class TslGame.AnimNotify_AkEvent_Advanced")
		return ptr;
	}
	ExternalPtr<struct UAkAudioEvent> AkAudioEvent; /* Ofs: 0x40 Size: 0x8 - ObjectProperty TslGame.AnimNotify_AkEvent_Advanced.AkAudioEvent */
	FString EventName; /* Ofs: 0x48 Size: 0x10 - StrProperty TslGame.AnimNotify_AkEvent_Advanced.EventName */
	FName AttachName; /* Ofs: 0x58 Size: 0x8 - NameProperty TslGame.AnimNotify_AkEvent_Advanced.AttachName */
	FVector CustomRelativeLocation; /* Ofs: 0x60 Size: 0xC - StructProperty TslGame.AnimNotify_AkEvent_Advanced.CustomRelativeLocation */
	uint8_t boolField6C;
	uint8_t boolField6D;
	uint8_t boolField6E;
	uint8_t UnknownData6F[0x1];
	float MinActivationDistance; /* Ofs: 0x70 Size: 0x4 - FloatProperty TslGame.AnimNotify_AkEvent_Advanced.MinActivationDistance */
	uint8_t boolField74;
	uint8_t UnknownData75[0x3];
	ExternalPtr<struct UClass> CameraShake; /* Ofs: 0x78 Size: 0x8 - ClassProperty TslGame.AnimNotify_AkEvent_Advanced.CameraShake */
	TArray<struct FName> AffectedCameras; /* Ofs: 0x80 Size: 0x10 - ArrayProperty TslGame.AnimNotify_AkEvent_Advanced.AffectedCameras */


	inline bool SetAkAudioEvent(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x40, value); }
	inline bool SetEventName(t_structHelper inst, FString value) { inst.WriteOffset(0x48, value); }
	inline bool SetAttachName(t_structHelper inst, FName value) { inst.WriteOffset(0x58, value); }
	inline bool SetCustomRelativeLocation(t_structHelper inst, FVector value) { inst.WriteOffset(0x60, value); }
	inline bool bFollow()
	{
		return boolField6C& 0x1;
	}
	inline bool SetbFollow(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseMinActivationDistance()
	{
		return boolField6D& 0x1;
	}
	inline bool SetbUseMinActivationDistance(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6D, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseActivationDistanceByAttenuation()
	{
		return boolField6E& 0x1;
	}
	inline bool SetbUseActivationDistanceByAttenuation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6E, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMinActivationDistance(t_structHelper inst, float value) { inst.WriteOffset(0x70, value); }
	inline bool bPlayCameraShake()
	{
		return boolField74& 0x1;
	}
	inline bool SetbPlayCameraShake(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x74, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCameraShake(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x78, value); }
	inline bool SetAffectedCameras(t_structHelper inst, TArray<struct FName> value) { inst.WriteOffset(0x80, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimNotify_AkEvent_Advanced = sizeof(UAnimNotify_AkEvent_Advanced); // 144
    static_assert(sizeof(UAnimNotify_AkEvent_Advanced) == 0x90, "Size of UAnimNotify_AkEvent_Advanced is not correct.");
	auto constexpr UAnimNotify_AkEvent_Advanced_AkAudioEvent_Offset = offsetof(UAnimNotify_AkEvent_Advanced, AkAudioEvent);
	static_assert(UAnimNotify_AkEvent_Advanced_AkAudioEvent_Offset == 0x40, "UAnimNotify_AkEvent_Advanced::AkAudioEvent offset is not 40");
	auto constexpr UAnimNotify_AkEvent_Advanced_EventName_Offset = offsetof(UAnimNotify_AkEvent_Advanced, EventName);
	static_assert(UAnimNotify_AkEvent_Advanced_EventName_Offset == 0x48, "UAnimNotify_AkEvent_Advanced::EventName offset is not 48");
	auto constexpr UAnimNotify_AkEvent_Advanced_AttachName_Offset = offsetof(UAnimNotify_AkEvent_Advanced, AttachName);
	static_assert(UAnimNotify_AkEvent_Advanced_AttachName_Offset == 0x58, "UAnimNotify_AkEvent_Advanced::AttachName offset is not 58");
	auto constexpr UAnimNotify_AkEvent_Advanced_CustomRelativeLocation_Offset = offsetof(UAnimNotify_AkEvent_Advanced, CustomRelativeLocation);
	static_assert(UAnimNotify_AkEvent_Advanced_CustomRelativeLocation_Offset == 0x60, "UAnimNotify_AkEvent_Advanced::CustomRelativeLocation offset is not 60");
	auto constexpr UAnimNotify_AkEvent_Advanced_boolField6C_Offset = offsetof(UAnimNotify_AkEvent_Advanced, boolField6C);
	static_assert(UAnimNotify_AkEvent_Advanced_boolField6C_Offset == 0x6c, "UAnimNotify_AkEvent_Advanced::boolField6C offset is not 6c");
	auto constexpr UAnimNotify_AkEvent_Advanced_boolField6D_Offset = offsetof(UAnimNotify_AkEvent_Advanced, boolField6D);
	static_assert(UAnimNotify_AkEvent_Advanced_boolField6D_Offset == 0x6d, "UAnimNotify_AkEvent_Advanced::boolField6D offset is not 6d");
	auto constexpr UAnimNotify_AkEvent_Advanced_boolField6E_Offset = offsetof(UAnimNotify_AkEvent_Advanced, boolField6E);
	static_assert(UAnimNotify_AkEvent_Advanced_boolField6E_Offset == 0x6e, "UAnimNotify_AkEvent_Advanced::boolField6E offset is not 6e");
	auto constexpr UAnimNotify_AkEvent_Advanced_MinActivationDistance_Offset = offsetof(UAnimNotify_AkEvent_Advanced, MinActivationDistance);
	static_assert(UAnimNotify_AkEvent_Advanced_MinActivationDistance_Offset == 0x70, "UAnimNotify_AkEvent_Advanced::MinActivationDistance offset is not 70");
	auto constexpr UAnimNotify_AkEvent_Advanced_boolField74_Offset = offsetof(UAnimNotify_AkEvent_Advanced, boolField74);
	static_assert(UAnimNotify_AkEvent_Advanced_boolField74_Offset == 0x74, "UAnimNotify_AkEvent_Advanced::boolField74 offset is not 74");
	auto constexpr UAnimNotify_AkEvent_Advanced_CameraShake_Offset = offsetof(UAnimNotify_AkEvent_Advanced, CameraShake);
	static_assert(UAnimNotify_AkEvent_Advanced_CameraShake_Offset == 0x78, "UAnimNotify_AkEvent_Advanced::CameraShake offset is not 78");
	auto constexpr UAnimNotify_AkEvent_Advanced_AffectedCameras_Offset = offsetof(UAnimNotify_AkEvent_Advanced, AffectedCameras);
	static_assert(UAnimNotify_AkEvent_Advanced_AffectedCameras_Offset == 0x80, "UAnimNotify_AkEvent_Advanced::AffectedCameras offset is not 80");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
