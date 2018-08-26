#pragma once
#include "UActorComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UApplicationLifecycleComponent // Size: 0x240
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UApplicationLifecycleComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1796); // id32("Class Engine.ApplicationLifecycleComponent")
		return ptr;
	}
//	FScriptMulticastDelegate ApplicationWillDeactivateDelegate; /* Ofs: 0x1E8 Size: 0x10 - MulticastDelegateProperty Engine.ApplicationLifecycleComponent.ApplicationWillDeactivateDelegate */
	uint8_t UnknownData1F0[0x8];
	FScriptMulticastDelegate ApplicationHasReactivatedDelegate; /* Ofs: 0x1F8 Size: 0x10 - MulticastDelegateProperty Engine.ApplicationLifecycleComponent.ApplicationHasReactivatedDelegate */
	FScriptMulticastDelegate ApplicationWillEnterBackgroundDelegate; /* Ofs: 0x208 Size: 0x10 - MulticastDelegateProperty Engine.ApplicationLifecycleComponent.ApplicationWillEnterBackgroundDelegate */
	FScriptMulticastDelegate ApplicationHasEnteredForegroundDelegate; /* Ofs: 0x218 Size: 0x10 - MulticastDelegateProperty Engine.ApplicationLifecycleComponent.ApplicationHasEnteredForegroundDelegate */
	FScriptMulticastDelegate ApplicationWillTerminateDelegate; /* Ofs: 0x228 Size: 0x10 - MulticastDelegateProperty Engine.ApplicationLifecycleComponent.ApplicationWillTerminateDelegate */
	uint8_t UnknownData238[0x8];


//	inline bool SetApplicationWillDeactivateDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x1E8, value); }
	inline bool SetApplicationHasReactivatedDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x1F8, value); }
	inline bool SetApplicationWillEnterBackgroundDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x208, value); }
	inline bool SetApplicationHasEnteredForegroundDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x218, value); }
	inline bool SetApplicationWillTerminateDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x228, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUApplicationLifecycleComponent = sizeof(UApplicationLifecycleComponent); // 576
    static_assert(sizeof(UApplicationLifecycleComponent) == 0x240, "Size of UApplicationLifecycleComponent is not correct.");
//	auto constexpr UApplicationLifecycleComponent_ApplicationWillDeactivateDelegate_Offset = offsetof(UApplicationLifecycleComponent, ApplicationWillDeactivateDelegate);
//	static_assert(UApplicationLifecycleComponent_ApplicationWillDeactivateDelegate_Offset == 0x1e8, "UApplicationLifecycleComponent::ApplicationWillDeactivateDelegate offset is not 1e8");
	auto constexpr UApplicationLifecycleComponent_ApplicationHasReactivatedDelegate_Offset = offsetof(UApplicationLifecycleComponent, ApplicationHasReactivatedDelegate);
	static_assert(UApplicationLifecycleComponent_ApplicationHasReactivatedDelegate_Offset == 0x1f8, "UApplicationLifecycleComponent::ApplicationHasReactivatedDelegate offset is not 1f8");
	auto constexpr UApplicationLifecycleComponent_ApplicationWillEnterBackgroundDelegate_Offset = offsetof(UApplicationLifecycleComponent, ApplicationWillEnterBackgroundDelegate);
	static_assert(UApplicationLifecycleComponent_ApplicationWillEnterBackgroundDelegate_Offset == 0x208, "UApplicationLifecycleComponent::ApplicationWillEnterBackgroundDelegate offset is not 208");
	auto constexpr UApplicationLifecycleComponent_ApplicationHasEnteredForegroundDelegate_Offset = offsetof(UApplicationLifecycleComponent, ApplicationHasEnteredForegroundDelegate);
	static_assert(UApplicationLifecycleComponent_ApplicationHasEnteredForegroundDelegate_Offset == 0x218, "UApplicationLifecycleComponent::ApplicationHasEnteredForegroundDelegate offset is not 218");
	auto constexpr UApplicationLifecycleComponent_ApplicationWillTerminateDelegate_Offset = offsetof(UApplicationLifecycleComponent, ApplicationWillTerminateDelegate);
	static_assert(UApplicationLifecycleComponent_ApplicationWillTerminateDelegate_Offset == 0x228, "UApplicationLifecycleComponent::ApplicationWillTerminateDelegate offset is not 228");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
