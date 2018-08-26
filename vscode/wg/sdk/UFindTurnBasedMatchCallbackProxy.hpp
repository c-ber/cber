#pragma once
#include "UOnlineBlueprintCallProxyBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UFindTurnBasedMatchCallbackProxy // Size: 0x88
	: public UOnlineBlueprintCallProxyBase // Size: 0x30
{
private:
	typedef UFindTurnBasedMatchCallbackProxy t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2093); // id32("Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy")
		return ptr;
	}
	FScriptMulticastDelegate OnSuccess; /* Ofs: 0x30 Size: 0x10 - MulticastDelegateProperty OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.OnSuccess */
	FScriptMulticastDelegate OnFailure; /* Ofs: 0x40 Size: 0x10 - MulticastDelegateProperty OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.OnFailure */
	uint8_t UnknownData50[0x38];


	inline bool SetOnSuccess(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x30, value); }
	inline bool SetOnFailure(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUFindTurnBasedMatchCallbackProxy = sizeof(UFindTurnBasedMatchCallbackProxy); // 136
    static_assert(sizeof(UFindTurnBasedMatchCallbackProxy) == 0x88, "Size of UFindTurnBasedMatchCallbackProxy is not correct.");
	auto constexpr UFindTurnBasedMatchCallbackProxy_OnSuccess_Offset = offsetof(UFindTurnBasedMatchCallbackProxy, OnSuccess);
	static_assert(UFindTurnBasedMatchCallbackProxy_OnSuccess_Offset == 0x30, "UFindTurnBasedMatchCallbackProxy::OnSuccess offset is not 30");
	auto constexpr UFindTurnBasedMatchCallbackProxy_OnFailure_Offset = offsetof(UFindTurnBasedMatchCallbackProxy, OnFailure);
	static_assert(UFindTurnBasedMatchCallbackProxy_OnFailure_Offset == 0x40, "UFindTurnBasedMatchCallbackProxy::OnFailure offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
