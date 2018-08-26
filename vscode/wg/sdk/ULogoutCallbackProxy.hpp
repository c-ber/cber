#pragma once
#include "UBlueprintAsyncActionBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULogoutCallbackProxy // Size: 0x68
	: public UBlueprintAsyncActionBase // Size: 0x30
{
private:
	typedef ULogoutCallbackProxy t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2103); // id32("Class OnlineSubsystemUtils.LogoutCallbackProxy")
		return ptr;
	}
	FScriptMulticastDelegate OnSuccess; /* Ofs: 0x30 Size: 0x10 - MulticastDelegateProperty OnlineSubsystemUtils.LogoutCallbackProxy.OnSuccess */
	FScriptMulticastDelegate OnFailure; /* Ofs: 0x40 Size: 0x10 - MulticastDelegateProperty OnlineSubsystemUtils.LogoutCallbackProxy.OnFailure */
	uint8_t UnknownData50[0x18];


	inline bool SetOnSuccess(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x30, value); }
	inline bool SetOnFailure(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULogoutCallbackProxy = sizeof(ULogoutCallbackProxy); // 104
    static_assert(sizeof(ULogoutCallbackProxy) == 0x68, "Size of ULogoutCallbackProxy is not correct.");
	auto constexpr ULogoutCallbackProxy_OnSuccess_Offset = offsetof(ULogoutCallbackProxy, OnSuccess);
	static_assert(ULogoutCallbackProxy_OnSuccess_Offset == 0x30, "ULogoutCallbackProxy::OnSuccess offset is not 30");
	auto constexpr ULogoutCallbackProxy_OnFailure_Offset = offsetof(ULogoutCallbackProxy, OnFailure);
	static_assert(ULogoutCallbackProxy_OnFailure_Offset == 0x40, "ULogoutCallbackProxy::OnFailure offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
