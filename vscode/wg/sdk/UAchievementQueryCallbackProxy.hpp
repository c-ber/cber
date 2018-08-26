#pragma once
#include "UOnlineBlueprintCallProxyBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAchievementQueryCallbackProxy // Size: 0x68
	: public UOnlineBlueprintCallProxyBase // Size: 0x30
{
private:
	typedef UAchievementQueryCallbackProxy t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2085); // id32("Class OnlineSubsystemUtils.AchievementQueryCallbackProxy")
		return ptr;
	}
	FScriptMulticastDelegate OnSuccess; /* Ofs: 0x30 Size: 0x10 - MulticastDelegateProperty OnlineSubsystemUtils.AchievementQueryCallbackProxy.OnSuccess */
	FScriptMulticastDelegate OnFailure; /* Ofs: 0x40 Size: 0x10 - MulticastDelegateProperty OnlineSubsystemUtils.AchievementQueryCallbackProxy.OnFailure */
	uint8_t UnknownData50[0x18];


	inline bool SetOnSuccess(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x30, value); }
	inline bool SetOnFailure(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAchievementQueryCallbackProxy = sizeof(UAchievementQueryCallbackProxy); // 104
    static_assert(sizeof(UAchievementQueryCallbackProxy) == 0x68, "Size of UAchievementQueryCallbackProxy is not correct.");
	auto constexpr UAchievementQueryCallbackProxy_OnSuccess_Offset = offsetof(UAchievementQueryCallbackProxy, OnSuccess);
	static_assert(UAchievementQueryCallbackProxy_OnSuccess_Offset == 0x30, "UAchievementQueryCallbackProxy::OnSuccess offset is not 30");
	auto constexpr UAchievementQueryCallbackProxy_OnFailure_Offset = offsetof(UAchievementQueryCallbackProxy, OnFailure);
	static_assert(UAchievementQueryCallbackProxy_OnFailure_Offset == 0x40, "UAchievementQueryCallbackProxy::OnFailure offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
