#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInAppPurchaseQueryCallbackProxy // Size: 0xD0
	: public UObject // Size: 0x30
{
private:
	typedef UInAppPurchaseQueryCallbackProxy t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2095); // id32("Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy")
		return ptr;
	}
	FScriptMulticastDelegate OnSuccess; /* Ofs: 0x30 Size: 0x10 - MulticastDelegateProperty OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.OnSuccess */
	FScriptMulticastDelegate OnFailure; /* Ofs: 0x40 Size: 0x10 - MulticastDelegateProperty OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.OnFailure */
	uint8_t UnknownData50[0x80];


	inline bool SetOnSuccess(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x30, value); }
	inline bool SetOnFailure(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInAppPurchaseQueryCallbackProxy = sizeof(UInAppPurchaseQueryCallbackProxy); // 208
    static_assert(sizeof(UInAppPurchaseQueryCallbackProxy) == 0xD0, "Size of UInAppPurchaseQueryCallbackProxy is not correct.");
	auto constexpr UInAppPurchaseQueryCallbackProxy_OnSuccess_Offset = offsetof(UInAppPurchaseQueryCallbackProxy, OnSuccess);
	static_assert(UInAppPurchaseQueryCallbackProxy_OnSuccess_Offset == 0x30, "UInAppPurchaseQueryCallbackProxy::OnSuccess offset is not 30");
	auto constexpr UInAppPurchaseQueryCallbackProxy_OnFailure_Offset = offsetof(UInAppPurchaseQueryCallbackProxy, OnFailure);
	static_assert(UInAppPurchaseQueryCallbackProxy_OnFailure_Offset == 0x40, "UInAppPurchaseQueryCallbackProxy::OnFailure offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
