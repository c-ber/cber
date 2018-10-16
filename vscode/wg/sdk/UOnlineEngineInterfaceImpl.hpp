#pragma once
#include "UOnlineEngineInterface.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UOnlineEngineInterfaceImpl // Size: 0x138
	: public UOnlineEngineInterface // Size: 0x30
{
private:
	typedef UOnlineEngineInterfaceImpl t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2113); // id32("Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl")
		return ptr;
	}
	FName VoiceSubsystemNameOverride; /* Ofs: 0x30 Size: 0x8 - NameProperty OnlineSubsystemUtils.OnlineEngineInterfaceImpl.VoiceSubsystemNameOverride */
	uint8_t UnknownData38[0x100];


	inline bool SetVoiceSubsystemNameOverride(t_structHelper inst, FName value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUOnlineEngineInterfaceImpl = sizeof(UOnlineEngineInterfaceImpl); // 312
    static_assert(sizeof(UOnlineEngineInterfaceImpl) == 0x138, "Size of UOnlineEngineInterfaceImpl is not correct.");
	auto constexpr UOnlineEngineInterfaceImpl_VoiceSubsystemNameOverride_Offset = offsetof(UOnlineEngineInterfaceImpl, VoiceSubsystemNameOverride);
	static_assert(UOnlineEngineInterfaceImpl_VoiceSubsystemNameOverride_Offset == 0x30, "UOnlineEngineInterfaceImpl::VoiceSubsystemNameOverride offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
