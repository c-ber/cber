#pragma once
#include "UBlueprintAsyncActionBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UShowLoginUICallbackProxy // Size: 0x60
	: public UBlueprintAsyncActionBase // Size: 0x30
{
private:
	typedef UShowLoginUICallbackProxy t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2117); // id32("Class OnlineSubsystemUtils.ShowLoginUICallbackProxy")
		return ptr;
	}
	FScriptMulticastDelegate OnSuccess; /* Ofs: 0x30 Size: 0x10 - MulticastDelegateProperty OnlineSubsystemUtils.ShowLoginUICallbackProxy.OnSuccess */
	FScriptMulticastDelegate OnFailure; /* Ofs: 0x40 Size: 0x10 - MulticastDelegateProperty OnlineSubsystemUtils.ShowLoginUICallbackProxy.OnFailure */
	uint8_t UnknownData50[0x10];


	inline bool SetOnSuccess(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x30, value); }
	inline bool SetOnFailure(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUShowLoginUICallbackProxy = sizeof(UShowLoginUICallbackProxy); // 96
    static_assert(sizeof(UShowLoginUICallbackProxy) == 0x60, "Size of UShowLoginUICallbackProxy is not correct.");
	auto constexpr UShowLoginUICallbackProxy_OnSuccess_Offset = offsetof(UShowLoginUICallbackProxy, OnSuccess);
	static_assert(UShowLoginUICallbackProxy_OnSuccess_Offset == 0x30, "UShowLoginUICallbackProxy::OnSuccess offset is not 30");
	auto constexpr UShowLoginUICallbackProxy_OnFailure_Offset = offsetof(UShowLoginUICallbackProxy, OnFailure);
	static_assert(UShowLoginUICallbackProxy_OnFailure_Offset == 0x40, "UShowLoginUICallbackProxy::OnFailure offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
