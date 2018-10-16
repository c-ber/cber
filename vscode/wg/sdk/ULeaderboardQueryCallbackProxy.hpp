#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULeaderboardQueryCallbackProxy // Size: 0xD0
	: public UObject // Size: 0x30
{
private:
	typedef ULeaderboardQueryCallbackProxy t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2102); // id32("Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy")
		return ptr;
	}
	FScriptMulticastDelegate OnSuccess; /* Ofs: 0x30 Size: 0x10 - MulticastDelegateProperty OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.OnSuccess */
	FScriptMulticastDelegate OnFailure; /* Ofs: 0x40 Size: 0x10 - MulticastDelegateProperty OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.OnFailure */
	uint8_t UnknownData50[0x80];


	inline bool SetOnSuccess(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x30, value); }
	inline bool SetOnFailure(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULeaderboardQueryCallbackProxy = sizeof(ULeaderboardQueryCallbackProxy); // 208
    static_assert(sizeof(ULeaderboardQueryCallbackProxy) == 0xD0, "Size of ULeaderboardQueryCallbackProxy is not correct.");
	auto constexpr ULeaderboardQueryCallbackProxy_OnSuccess_Offset = offsetof(ULeaderboardQueryCallbackProxy, OnSuccess);
	static_assert(ULeaderboardQueryCallbackProxy_OnSuccess_Offset == 0x30, "ULeaderboardQueryCallbackProxy::OnSuccess offset is not 30");
	auto constexpr ULeaderboardQueryCallbackProxy_OnFailure_Offset = offsetof(ULeaderboardQueryCallbackProxy, OnFailure);
	static_assert(ULeaderboardQueryCallbackProxy_OnFailure_Offset == 0x40, "ULeaderboardQueryCallbackProxy::OnFailure offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
