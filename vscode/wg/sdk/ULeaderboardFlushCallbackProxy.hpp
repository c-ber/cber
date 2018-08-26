#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULeaderboardFlushCallbackProxy // Size: 0xA0
	: public UObject // Size: 0x30
{
private:
	typedef ULeaderboardFlushCallbackProxy t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2101); // id32("Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy")
		return ptr;
	}
	FScriptMulticastDelegate OnSuccess; /* Ofs: 0x30 Size: 0x10 - MulticastDelegateProperty OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.OnSuccess */
	FScriptMulticastDelegate OnFailure; /* Ofs: 0x40 Size: 0x10 - MulticastDelegateProperty OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.OnFailure */
	uint8_t UnknownData50[0x50];


	inline bool SetOnSuccess(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x30, value); }
	inline bool SetOnFailure(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULeaderboardFlushCallbackProxy = sizeof(ULeaderboardFlushCallbackProxy); // 160
    static_assert(sizeof(ULeaderboardFlushCallbackProxy) == 0xA0, "Size of ULeaderboardFlushCallbackProxy is not correct.");
	auto constexpr ULeaderboardFlushCallbackProxy_OnSuccess_Offset = offsetof(ULeaderboardFlushCallbackProxy, OnSuccess);
	static_assert(ULeaderboardFlushCallbackProxy_OnSuccess_Offset == 0x30, "ULeaderboardFlushCallbackProxy::OnSuccess offset is not 30");
	auto constexpr ULeaderboardFlushCallbackProxy_OnFailure_Offset = offsetof(ULeaderboardFlushCallbackProxy, OnFailure);
	static_assert(ULeaderboardFlushCallbackProxy_OnFailure_Offset == 0x40, "ULeaderboardFlushCallbackProxy::OnFailure offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
