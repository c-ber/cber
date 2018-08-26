#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPlayMontageCallbackProxy // Size: 0x110
	: public UObject // Size: 0x30
{
private:
	typedef UPlayMontageCallbackProxy t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1618); // id32("Class AnimGraphRuntime.PlayMontageCallbackProxy")
		return ptr;
	}
	FScriptMulticastDelegate OnCompleted; /* Ofs: 0x30 Size: 0x10 - MulticastDelegateProperty AnimGraphRuntime.PlayMontageCallbackProxy.OnCompleted */
	FScriptMulticastDelegate OnBlendOut; /* Ofs: 0x40 Size: 0x10 - MulticastDelegateProperty AnimGraphRuntime.PlayMontageCallbackProxy.OnBlendOut */
	FScriptMulticastDelegate OnInterrupted; /* Ofs: 0x50 Size: 0x10 - MulticastDelegateProperty AnimGraphRuntime.PlayMontageCallbackProxy.OnInterrupted */
	FScriptMulticastDelegate OnNotifyBegin; /* Ofs: 0x60 Size: 0x10 - MulticastDelegateProperty AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBegin */
	FScriptMulticastDelegate OnNotifyEnd; /* Ofs: 0x70 Size: 0x10 - MulticastDelegateProperty AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEnd */
	uint8_t UnknownData80[0x90];


	inline bool SetOnCompleted(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x30, value); }
	inline bool SetOnBlendOut(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x40, value); }
	inline bool SetOnInterrupted(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x50, value); }
	inline bool SetOnNotifyBegin(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x60, value); }
	inline bool SetOnNotifyEnd(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x70, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPlayMontageCallbackProxy = sizeof(UPlayMontageCallbackProxy); // 272
    static_assert(sizeof(UPlayMontageCallbackProxy) == 0x110, "Size of UPlayMontageCallbackProxy is not correct.");
	auto constexpr UPlayMontageCallbackProxy_OnCompleted_Offset = offsetof(UPlayMontageCallbackProxy, OnCompleted);
	static_assert(UPlayMontageCallbackProxy_OnCompleted_Offset == 0x30, "UPlayMontageCallbackProxy::OnCompleted offset is not 30");
	auto constexpr UPlayMontageCallbackProxy_OnBlendOut_Offset = offsetof(UPlayMontageCallbackProxy, OnBlendOut);
	static_assert(UPlayMontageCallbackProxy_OnBlendOut_Offset == 0x40, "UPlayMontageCallbackProxy::OnBlendOut offset is not 40");
	auto constexpr UPlayMontageCallbackProxy_OnInterrupted_Offset = offsetof(UPlayMontageCallbackProxy, OnInterrupted);
	static_assert(UPlayMontageCallbackProxy_OnInterrupted_Offset == 0x50, "UPlayMontageCallbackProxy::OnInterrupted offset is not 50");
	auto constexpr UPlayMontageCallbackProxy_OnNotifyBegin_Offset = offsetof(UPlayMontageCallbackProxy, OnNotifyBegin);
	static_assert(UPlayMontageCallbackProxy_OnNotifyBegin_Offset == 0x60, "UPlayMontageCallbackProxy::OnNotifyBegin offset is not 60");
	auto constexpr UPlayMontageCallbackProxy_OnNotifyEnd_Offset = offsetof(UPlayMontageCallbackProxy, OnNotifyEnd);
	static_assert(UPlayMontageCallbackProxy_OnNotifyEnd_Offset == 0x70, "UPlayMontageCallbackProxy::OnNotifyEnd offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
