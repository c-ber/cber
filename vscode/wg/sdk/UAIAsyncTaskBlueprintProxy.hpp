#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAIAsyncTaskBlueprintProxy // Size: 0x70
	: public UObject // Size: 0x30
{
private:
	typedef UAIAsyncTaskBlueprintProxy t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1664); // id32("Class AIModule.AIAsyncTaskBlueprintProxy")
		return ptr;
	}
	FScriptMulticastDelegate OnSuccess; /* Ofs: 0x30 Size: 0x10 - MulticastDelegateProperty AIModule.AIAsyncTaskBlueprintProxy.OnSuccess */
	FScriptMulticastDelegate OnFail; /* Ofs: 0x40 Size: 0x10 - MulticastDelegateProperty AIModule.AIAsyncTaskBlueprintProxy.OnFail */
	uint8_t UnknownData50[0x20];


	inline bool SetOnSuccess(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x30, value); }
	inline bool SetOnFail(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAIAsyncTaskBlueprintProxy = sizeof(UAIAsyncTaskBlueprintProxy); // 112
    static_assert(sizeof(UAIAsyncTaskBlueprintProxy) == 0x70, "Size of UAIAsyncTaskBlueprintProxy is not correct.");
	auto constexpr UAIAsyncTaskBlueprintProxy_OnSuccess_Offset = offsetof(UAIAsyncTaskBlueprintProxy, OnSuccess);
	static_assert(UAIAsyncTaskBlueprintProxy_OnSuccess_Offset == 0x30, "UAIAsyncTaskBlueprintProxy::OnSuccess offset is not 30");
	auto constexpr UAIAsyncTaskBlueprintProxy_OnFail_Offset = offsetof(UAIAsyncTaskBlueprintProxy, OnFail);
	static_assert(UAIAsyncTaskBlueprintProxy_OnFail_Offset == 0x40, "UAIAsyncTaskBlueprintProxy::OnFail offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
