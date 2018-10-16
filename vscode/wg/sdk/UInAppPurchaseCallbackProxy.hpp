#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInAppPurchaseCallbackProxy // Size: 0xC0
	: public UObject // Size: 0x30
{
private:
	typedef UInAppPurchaseCallbackProxy t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2094); // id32("Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy")
		return ptr;
	}
	FScriptMulticastDelegate OnSuccess; /* Ofs: 0x30 Size: 0x10 - MulticastDelegateProperty OnlineSubsystemUtils.InAppPurchaseCallbackProxy.OnSuccess */
	FScriptMulticastDelegate OnFailure; /* Ofs: 0x40 Size: 0x10 - MulticastDelegateProperty OnlineSubsystemUtils.InAppPurchaseCallbackProxy.OnFailure */
	uint8_t UnknownData50[0x70];


	inline bool SetOnSuccess(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x30, value); }
	inline bool SetOnFailure(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInAppPurchaseCallbackProxy = sizeof(UInAppPurchaseCallbackProxy); // 192
    static_assert(sizeof(UInAppPurchaseCallbackProxy) == 0xC0, "Size of UInAppPurchaseCallbackProxy is not correct.");
	auto constexpr UInAppPurchaseCallbackProxy_OnSuccess_Offset = offsetof(UInAppPurchaseCallbackProxy, OnSuccess);
	static_assert(UInAppPurchaseCallbackProxy_OnSuccess_Offset == 0x30, "UInAppPurchaseCallbackProxy::OnSuccess offset is not 30");
	auto constexpr UInAppPurchaseCallbackProxy_OnFailure_Offset = offsetof(UInAppPurchaseCallbackProxy, OnFailure);
	static_assert(UInAppPurchaseCallbackProxy_OnFailure_Offset == 0x40, "UInAppPurchaseCallbackProxy::OnFailure offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
