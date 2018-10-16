#pragma once
#include "UOnlineBlueprintCallProxyBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UConnectionCallbackProxy // Size: 0xB0
	: public UOnlineBlueprintCallProxyBase // Size: 0x30
{
private:
	typedef UConnectionCallbackProxy t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2087); // id32("Class OnlineSubsystemUtils.ConnectionCallbackProxy")
		return ptr;
	}
	FScriptMulticastDelegate OnSuccess; /* Ofs: 0x30 Size: 0x10 - MulticastDelegateProperty OnlineSubsystemUtils.ConnectionCallbackProxy.OnSuccess */
	FScriptMulticastDelegate OnFailure; /* Ofs: 0x40 Size: 0x10 - MulticastDelegateProperty OnlineSubsystemUtils.ConnectionCallbackProxy.OnFailure */
	uint8_t UnknownData50[0x60];


	inline bool SetOnSuccess(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x30, value); }
	inline bool SetOnFailure(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUConnectionCallbackProxy = sizeof(UConnectionCallbackProxy); // 176
    static_assert(sizeof(UConnectionCallbackProxy) == 0xB0, "Size of UConnectionCallbackProxy is not correct.");
	auto constexpr UConnectionCallbackProxy_OnSuccess_Offset = offsetof(UConnectionCallbackProxy, OnSuccess);
	static_assert(UConnectionCallbackProxy_OnSuccess_Offset == 0x30, "UConnectionCallbackProxy::OnSuccess offset is not 30");
	auto constexpr UConnectionCallbackProxy_OnFailure_Offset = offsetof(UConnectionCallbackProxy, OnFailure);
	static_assert(UConnectionCallbackProxy_OnFailure_Offset == 0x40, "UConnectionCallbackProxy::OnFailure offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
