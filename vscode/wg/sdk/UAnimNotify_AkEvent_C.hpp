#pragma once
#include "UAnimNotify.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimNotify_AkEvent_C // Size: 0x70
	: public UAnimNotify // Size: 0x40
{
private:
	typedef UAnimNotify_AkEvent_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(56722); // id32("BlueprintGeneratedClass AnimNotify_AkEvent.AnimNotify_AkEvent_C")
		return ptr;
	}
	FString Attach_Name; /* Ofs: 0x40 Size: 0x10 - StrProperty AnimNotify_AkEvent.AnimNotify_AkEvent_C.Attach_Name */
	ExternalPtr<struct UAkAudioEvent> Event; /* Ofs: 0x50 Size: 0x8 - ObjectProperty AnimNotify_AkEvent.AnimNotify_AkEvent_C.Event */
	uint8_t boolField58;
	uint8_t UnknownData59[0x7];
	FString EventName; /* Ofs: 0x60 Size: 0x10 - StrProperty AnimNotify_AkEvent.AnimNotify_AkEvent_C.EventName */


	inline bool SetAttach_Name(t_structHelper inst, FString value) { inst.WriteOffset(0x40, value); }
	inline bool SetEvent(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x50, value); }
	inline bool Follow()
	{
		return boolField58& 0x1;
	}
	inline bool SetFollow(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x58, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetEventName(t_structHelper inst, FString value) { inst.WriteOffset(0x60, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimNotify_AkEvent_C = sizeof(UAnimNotify_AkEvent_C); // 112
    static_assert(sizeof(UAnimNotify_AkEvent_C) == 0x70, "Size of UAnimNotify_AkEvent_C is not correct.");
	auto constexpr UAnimNotify_AkEvent_C_Attach_Name_Offset = offsetof(UAnimNotify_AkEvent_C, Attach_Name);
	static_assert(UAnimNotify_AkEvent_C_Attach_Name_Offset == 0x40, "UAnimNotify_AkEvent_C::Attach_Name offset is not 40");
	auto constexpr UAnimNotify_AkEvent_C_Event_Offset = offsetof(UAnimNotify_AkEvent_C, Event);
	static_assert(UAnimNotify_AkEvent_C_Event_Offset == 0x50, "UAnimNotify_AkEvent_C::Event offset is not 50");
	auto constexpr UAnimNotify_AkEvent_C_boolField58_Offset = offsetof(UAnimNotify_AkEvent_C, boolField58);
	static_assert(UAnimNotify_AkEvent_C_boolField58_Offset == 0x58, "UAnimNotify_AkEvent_C::boolField58 offset is not 58");
	auto constexpr UAnimNotify_AkEvent_C_EventName_Offset = offsetof(UAnimNotify_AkEvent_C, EventName);
	static_assert(UAnimNotify_AkEvent_C_EventName_Offset == 0x60, "UAnimNotify_AkEvent_C::EventName offset is not 60");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
