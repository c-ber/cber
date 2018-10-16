#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInAppPurchaseRestoreCallbackProxy // Size: 0xD0
	: public UObject // Size: 0x30
{
private:
	typedef UInAppPurchaseRestoreCallbackProxy t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2096); // id32("Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy")
		return ptr;
	}
	FScriptMulticastDelegate OnSuccess; /* Ofs: 0x30 Size: 0x10 - MulticastDelegateProperty OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.OnSuccess */
	FScriptMulticastDelegate OnFailure; /* Ofs: 0x40 Size: 0x10 - MulticastDelegateProperty OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.OnFailure */
	uint8_t UnknownData50[0x80];


	inline bool SetOnSuccess(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x30, value); }
	inline bool SetOnFailure(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInAppPurchaseRestoreCallbackProxy = sizeof(UInAppPurchaseRestoreCallbackProxy); // 208
    static_assert(sizeof(UInAppPurchaseRestoreCallbackProxy) == 0xD0, "Size of UInAppPurchaseRestoreCallbackProxy is not correct.");
	auto constexpr UInAppPurchaseRestoreCallbackProxy_OnSuccess_Offset = offsetof(UInAppPurchaseRestoreCallbackProxy, OnSuccess);
	static_assert(UInAppPurchaseRestoreCallbackProxy_OnSuccess_Offset == 0x30, "UInAppPurchaseRestoreCallbackProxy::OnSuccess offset is not 30");
	auto constexpr UInAppPurchaseRestoreCallbackProxy_OnFailure_Offset = offsetof(UInAppPurchaseRestoreCallbackProxy, OnFailure);
	static_assert(UInAppPurchaseRestoreCallbackProxy_OnFailure_Offset == 0x40, "UInAppPurchaseRestoreCallbackProxy::OnFailure offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
