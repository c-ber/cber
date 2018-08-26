#pragma once
#include "UOnlineBlueprintCallProxyBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAchievementWriteCallbackProxy // Size: 0x80
	: public UOnlineBlueprintCallProxyBase // Size: 0x30
{
private:
	typedef UAchievementWriteCallbackProxy t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2086); // id32("Class OnlineSubsystemUtils.AchievementWriteCallbackProxy")
		return ptr;
	}
	FScriptMulticastDelegate OnSuccess; /* Ofs: 0x30 Size: 0x10 - MulticastDelegateProperty OnlineSubsystemUtils.AchievementWriteCallbackProxy.OnSuccess */
	FScriptMulticastDelegate OnFailure; /* Ofs: 0x40 Size: 0x10 - MulticastDelegateProperty OnlineSubsystemUtils.AchievementWriteCallbackProxy.OnFailure */
	uint8_t UnknownData50[0x30];


	inline bool SetOnSuccess(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x30, value); }
	inline bool SetOnFailure(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAchievementWriteCallbackProxy = sizeof(UAchievementWriteCallbackProxy); // 128
    static_assert(sizeof(UAchievementWriteCallbackProxy) == 0x80, "Size of UAchievementWriteCallbackProxy is not correct.");
	auto constexpr UAchievementWriteCallbackProxy_OnSuccess_Offset = offsetof(UAchievementWriteCallbackProxy, OnSuccess);
	static_assert(UAchievementWriteCallbackProxy_OnSuccess_Offset == 0x30, "UAchievementWriteCallbackProxy::OnSuccess offset is not 30");
	auto constexpr UAchievementWriteCallbackProxy_OnFailure_Offset = offsetof(UAchievementWriteCallbackProxy, OnFailure);
	static_assert(UAchievementWriteCallbackProxy_OnFailure_Offset == 0x40, "UAchievementWriteCallbackProxy::OnFailure offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
