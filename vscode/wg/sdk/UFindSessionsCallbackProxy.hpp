#pragma once
#include "UOnlineBlueprintCallProxyBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UFindSessionsCallbackProxy // Size: 0xD0
	: public UOnlineBlueprintCallProxyBase // Size: 0x30
{
private:
	typedef UFindSessionsCallbackProxy t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2092); // id32("Class OnlineSubsystemUtils.FindSessionsCallbackProxy")
		return ptr;
	}
	FScriptMulticastDelegate OnSuccess; /* Ofs: 0x30 Size: 0x10 - MulticastDelegateProperty OnlineSubsystemUtils.FindSessionsCallbackProxy.OnSuccess */
	FScriptMulticastDelegate OnFailure; /* Ofs: 0x40 Size: 0x10 - MulticastDelegateProperty OnlineSubsystemUtils.FindSessionsCallbackProxy.OnFailure */
	uint8_t UnknownData50[0x80];


	inline bool SetOnSuccess(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x30, value); }
	inline bool SetOnFailure(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUFindSessionsCallbackProxy = sizeof(UFindSessionsCallbackProxy); // 208
    static_assert(sizeof(UFindSessionsCallbackProxy) == 0xD0, "Size of UFindSessionsCallbackProxy is not correct.");
	auto constexpr UFindSessionsCallbackProxy_OnSuccess_Offset = offsetof(UFindSessionsCallbackProxy, OnSuccess);
	static_assert(UFindSessionsCallbackProxy_OnSuccess_Offset == 0x30, "UFindSessionsCallbackProxy::OnSuccess offset is not 30");
	auto constexpr UFindSessionsCallbackProxy_OnFailure_Offset = offsetof(UFindSessionsCallbackProxy, OnFailure);
	static_assert(UFindSessionsCallbackProxy_OnFailure_Offset == 0x40, "UFindSessionsCallbackProxy::OnFailure offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
