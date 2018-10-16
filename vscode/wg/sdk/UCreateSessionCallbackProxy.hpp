#pragma once
#include "UOnlineBlueprintCallProxyBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCreateSessionCallbackProxy // Size: 0x100
	: public UOnlineBlueprintCallProxyBase // Size: 0x30
{
private:
	typedef UCreateSessionCallbackProxy t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2088); // id32("Class OnlineSubsystemUtils.CreateSessionCallbackProxy")
		return ptr;
	}
	FScriptMulticastDelegate OnSuccess; /* Ofs: 0x30 Size: 0x10 - MulticastDelegateProperty OnlineSubsystemUtils.CreateSessionCallbackProxy.OnSuccess */
	FScriptMulticastDelegate OnFailure; /* Ofs: 0x40 Size: 0x10 - MulticastDelegateProperty OnlineSubsystemUtils.CreateSessionCallbackProxy.OnFailure */
	uint8_t UnknownData50[0xB0];


	inline bool SetOnSuccess(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x30, value); }
	inline bool SetOnFailure(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCreateSessionCallbackProxy = sizeof(UCreateSessionCallbackProxy); // 256
    static_assert(sizeof(UCreateSessionCallbackProxy) == 0x100, "Size of UCreateSessionCallbackProxy is not correct.");
	auto constexpr UCreateSessionCallbackProxy_OnSuccess_Offset = offsetof(UCreateSessionCallbackProxy, OnSuccess);
	static_assert(UCreateSessionCallbackProxy_OnSuccess_Offset == 0x30, "UCreateSessionCallbackProxy::OnSuccess offset is not 30");
	auto constexpr UCreateSessionCallbackProxy_OnFailure_Offset = offsetof(UCreateSessionCallbackProxy, OnFailure);
	static_assert(UCreateSessionCallbackProxy_OnFailure_Offset == 0x40, "UCreateSessionCallbackProxy::OnFailure offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
