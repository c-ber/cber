#pragma once
#include "UOnlineBlueprintCallProxyBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDestroySessionCallbackProxy // Size: 0xB0
	: public UOnlineBlueprintCallProxyBase // Size: 0x30
{
private:
	typedef UDestroySessionCallbackProxy t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2089); // id32("Class OnlineSubsystemUtils.DestroySessionCallbackProxy")
		return ptr;
	}
	FScriptMulticastDelegate OnSuccess; /* Ofs: 0x30 Size: 0x10 - MulticastDelegateProperty OnlineSubsystemUtils.DestroySessionCallbackProxy.OnSuccess */
	FScriptMulticastDelegate OnFailure; /* Ofs: 0x40 Size: 0x10 - MulticastDelegateProperty OnlineSubsystemUtils.DestroySessionCallbackProxy.OnFailure */
	uint8_t UnknownData50[0x60];


	inline bool SetOnSuccess(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x30, value); }
	inline bool SetOnFailure(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDestroySessionCallbackProxy = sizeof(UDestroySessionCallbackProxy); // 176
    static_assert(sizeof(UDestroySessionCallbackProxy) == 0xB0, "Size of UDestroySessionCallbackProxy is not correct.");
	auto constexpr UDestroySessionCallbackProxy_OnSuccess_Offset = offsetof(UDestroySessionCallbackProxy, OnSuccess);
	static_assert(UDestroySessionCallbackProxy_OnSuccess_Offset == 0x30, "UDestroySessionCallbackProxy::OnSuccess offset is not 30");
	auto constexpr UDestroySessionCallbackProxy_OnFailure_Offset = offsetof(UDestroySessionCallbackProxy, OnFailure);
	static_assert(UDestroySessionCallbackProxy_OnFailure_Offset == 0x40, "UDestroySessionCallbackProxy::OnFailure offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
