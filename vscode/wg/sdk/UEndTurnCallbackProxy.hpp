#pragma once
#include "UOnlineBlueprintCallProxyBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEndTurnCallbackProxy // Size: 0x78
	: public UOnlineBlueprintCallProxyBase // Size: 0x30
{
private:
	typedef UEndTurnCallbackProxy t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2091); // id32("Class OnlineSubsystemUtils.EndTurnCallbackProxy")
		return ptr;
	}
	FScriptMulticastDelegate OnSuccess; /* Ofs: 0x30 Size: 0x10 - MulticastDelegateProperty OnlineSubsystemUtils.EndTurnCallbackProxy.OnSuccess */
	FScriptMulticastDelegate OnFailure; /* Ofs: 0x40 Size: 0x10 - MulticastDelegateProperty OnlineSubsystemUtils.EndTurnCallbackProxy.OnFailure */
	uint8_t UnknownData50[0x28];


	inline bool SetOnSuccess(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x30, value); }
	inline bool SetOnFailure(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEndTurnCallbackProxy = sizeof(UEndTurnCallbackProxy); // 120
    static_assert(sizeof(UEndTurnCallbackProxy) == 0x78, "Size of UEndTurnCallbackProxy is not correct.");
	auto constexpr UEndTurnCallbackProxy_OnSuccess_Offset = offsetof(UEndTurnCallbackProxy, OnSuccess);
	static_assert(UEndTurnCallbackProxy_OnSuccess_Offset == 0x30, "UEndTurnCallbackProxy::OnSuccess offset is not 30");
	auto constexpr UEndTurnCallbackProxy_OnFailure_Offset = offsetof(UEndTurnCallbackProxy, OnFailure);
	static_assert(UEndTurnCallbackProxy_OnFailure_Offset == 0x40, "UEndTurnCallbackProxy::OnFailure offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
