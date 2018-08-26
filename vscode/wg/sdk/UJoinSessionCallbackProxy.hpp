#pragma once
#include "UOnlineBlueprintCallProxyBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UJoinSessionCallbackProxy // Size: 0x160
	: public UOnlineBlueprintCallProxyBase // Size: 0x30
{
private:
	typedef UJoinSessionCallbackProxy t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2099); // id32("Class OnlineSubsystemUtils.JoinSessionCallbackProxy")
		return ptr;
	}
	FScriptMulticastDelegate OnSuccess; /* Ofs: 0x30 Size: 0x10 - MulticastDelegateProperty OnlineSubsystemUtils.JoinSessionCallbackProxy.OnSuccess */
	FScriptMulticastDelegate OnFailure; /* Ofs: 0x40 Size: 0x10 - MulticastDelegateProperty OnlineSubsystemUtils.JoinSessionCallbackProxy.OnFailure */
	uint8_t UnknownData50[0x110];


	inline bool SetOnSuccess(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x30, value); }
	inline bool SetOnFailure(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUJoinSessionCallbackProxy = sizeof(UJoinSessionCallbackProxy); // 352
    static_assert(sizeof(UJoinSessionCallbackProxy) == 0x160, "Size of UJoinSessionCallbackProxy is not correct.");
	auto constexpr UJoinSessionCallbackProxy_OnSuccess_Offset = offsetof(UJoinSessionCallbackProxy, OnSuccess);
	static_assert(UJoinSessionCallbackProxy_OnSuccess_Offset == 0x30, "UJoinSessionCallbackProxy::OnSuccess offset is not 30");
	auto constexpr UJoinSessionCallbackProxy_OnFailure_Offset = offsetof(UJoinSessionCallbackProxy, OnFailure);
	static_assert(UJoinSessionCallbackProxy_OnFailure_Offset == 0x40, "UJoinSessionCallbackProxy::OnFailure offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
