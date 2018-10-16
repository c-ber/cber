#pragma once
#include "UOnlineBlueprintCallProxyBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UQueryLiveStreamsCallbackProxy // Size: 0x50
	: public UOnlineBlueprintCallProxyBase // Size: 0x30
{
private:
	typedef UQueryLiveStreamsCallbackProxy t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(459); // id32("Class GameLiveStreaming.QueryLiveStreamsCallbackProxy")
		return ptr;
	}
	FScriptMulticastDelegate OnQueriedLiveStreams; /* Ofs: 0x30 Size: 0x10 - MulticastDelegateProperty GameLiveStreaming.QueryLiveStreamsCallbackProxy.OnQueriedLiveStreams */
	uint8_t UnknownData40[0x10];


	inline bool SetOnQueriedLiveStreams(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUQueryLiveStreamsCallbackProxy = sizeof(UQueryLiveStreamsCallbackProxy); // 80
    static_assert(sizeof(UQueryLiveStreamsCallbackProxy) == 0x50, "Size of UQueryLiveStreamsCallbackProxy is not correct.");
	auto constexpr UQueryLiveStreamsCallbackProxy_OnQueriedLiveStreams_Offset = offsetof(UQueryLiveStreamsCallbackProxy, OnQueriedLiveStreams);
	static_assert(UQueryLiveStreamsCallbackProxy_OnQueriedLiveStreams_Offset == 0x30, "UQueryLiveStreamsCallbackProxy::OnQueriedLiveStreams offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
