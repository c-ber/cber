#pragma once
#include "UOnlineBlueprintCallProxyBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEndMatchCallbackProxy // Size: 0x80
	: public UOnlineBlueprintCallProxyBase // Size: 0x30
{
private:
	typedef UEndMatchCallbackProxy t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2090); // id32("Class OnlineSubsystemUtils.EndMatchCallbackProxy")
		return ptr;
	}
	FScriptMulticastDelegate OnSuccess; /* Ofs: 0x30 Size: 0x10 - MulticastDelegateProperty OnlineSubsystemUtils.EndMatchCallbackProxy.OnSuccess */
	FScriptMulticastDelegate OnFailure; /* Ofs: 0x40 Size: 0x10 - MulticastDelegateProperty OnlineSubsystemUtils.EndMatchCallbackProxy.OnFailure */
	uint8_t UnknownData50[0x30];


	inline bool SetOnSuccess(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x30, value); }
	inline bool SetOnFailure(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEndMatchCallbackProxy = sizeof(UEndMatchCallbackProxy); // 128
    static_assert(sizeof(UEndMatchCallbackProxy) == 0x80, "Size of UEndMatchCallbackProxy is not correct.");
	auto constexpr UEndMatchCallbackProxy_OnSuccess_Offset = offsetof(UEndMatchCallbackProxy, OnSuccess);
	static_assert(UEndMatchCallbackProxy_OnSuccess_Offset == 0x30, "UEndMatchCallbackProxy::OnSuccess offset is not 30");
	auto constexpr UEndMatchCallbackProxy_OnFailure_Offset = offsetof(UEndMatchCallbackProxy, OnFailure);
	static_assert(UEndMatchCallbackProxy_OnFailure_Offset == 0x40, "UEndMatchCallbackProxy::OnFailure offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
