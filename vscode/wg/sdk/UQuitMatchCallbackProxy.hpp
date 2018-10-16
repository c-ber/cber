#pragma once
#include "UOnlineBlueprintCallProxyBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UQuitMatchCallbackProxy // Size: 0x78
	: public UOnlineBlueprintCallProxyBase // Size: 0x30
{
private:
	typedef UQuitMatchCallbackProxy t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2116); // id32("Class OnlineSubsystemUtils.QuitMatchCallbackProxy")
		return ptr;
	}
	FScriptMulticastDelegate OnSuccess; /* Ofs: 0x30 Size: 0x10 - MulticastDelegateProperty OnlineSubsystemUtils.QuitMatchCallbackProxy.OnSuccess */
	FScriptMulticastDelegate OnFailure; /* Ofs: 0x40 Size: 0x10 - MulticastDelegateProperty OnlineSubsystemUtils.QuitMatchCallbackProxy.OnFailure */
	uint8_t UnknownData50[0x28];


	inline bool SetOnSuccess(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x30, value); }
	inline bool SetOnFailure(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUQuitMatchCallbackProxy = sizeof(UQuitMatchCallbackProxy); // 120
    static_assert(sizeof(UQuitMatchCallbackProxy) == 0x78, "Size of UQuitMatchCallbackProxy is not correct.");
	auto constexpr UQuitMatchCallbackProxy_OnSuccess_Offset = offsetof(UQuitMatchCallbackProxy, OnSuccess);
	static_assert(UQuitMatchCallbackProxy_OnSuccess_Offset == 0x30, "UQuitMatchCallbackProxy::OnSuccess offset is not 30");
	auto constexpr UQuitMatchCallbackProxy_OnFailure_Offset = offsetof(UQuitMatchCallbackProxy, OnFailure);
	static_assert(UQuitMatchCallbackProxy_OnFailure_Offset == 0x40, "UQuitMatchCallbackProxy::OnFailure offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
