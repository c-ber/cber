#pragma once
#include "UActorComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVRNotificationsComponent // Size: 0x270
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UVRNotificationsComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(343); // id32("Class HeadMountedDisplay.VRNotificationsComponent")
		return ptr;
	}
//	FScriptMulticastDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; /* Ofs: 0x1E8 Size: 0x10 - MulticastDelegateProperty HeadMountedDisplay.VRNotificationsComponent.HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate */
	uint8_t UnknownData1F0[0x8];
	FScriptMulticastDelegate HMDTrackingInitializedDelegate; /* Ofs: 0x1F8 Size: 0x10 - MulticastDelegateProperty HeadMountedDisplay.VRNotificationsComponent.HMDTrackingInitializedDelegate */
	FScriptMulticastDelegate HMDRecenteredDelegate; /* Ofs: 0x208 Size: 0x10 - MulticastDelegateProperty HeadMountedDisplay.VRNotificationsComponent.HMDRecenteredDelegate */
	FScriptMulticastDelegate HMDLostDelegate; /* Ofs: 0x218 Size: 0x10 - MulticastDelegateProperty HeadMountedDisplay.VRNotificationsComponent.HMDLostDelegate */
	FScriptMulticastDelegate HMDReconnectedDelegate; /* Ofs: 0x228 Size: 0x10 - MulticastDelegateProperty HeadMountedDisplay.VRNotificationsComponent.HMDReconnectedDelegate */
	FScriptMulticastDelegate HMDConnectCanceledDelegate; /* Ofs: 0x238 Size: 0x10 - MulticastDelegateProperty HeadMountedDisplay.VRNotificationsComponent.HMDConnectCanceledDelegate */
	FScriptMulticastDelegate HMDPutOnHeadDelegate; /* Ofs: 0x248 Size: 0x10 - MulticastDelegateProperty HeadMountedDisplay.VRNotificationsComponent.HMDPutOnHeadDelegate */
	FScriptMulticastDelegate HMDRemovedFromHeadDelegate; /* Ofs: 0x258 Size: 0x10 - MulticastDelegateProperty HeadMountedDisplay.VRNotificationsComponent.HMDRemovedFromHeadDelegate */
	uint8_t UnknownData268[0x8];


//	inline bool SetHMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x1E8, value); }
	inline bool SetHMDTrackingInitializedDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x1F8, value); }
	inline bool SetHMDRecenteredDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x208, value); }
	inline bool SetHMDLostDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x218, value); }
	inline bool SetHMDReconnectedDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x228, value); }
	inline bool SetHMDConnectCanceledDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x238, value); }
	inline bool SetHMDPutOnHeadDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x248, value); }
	inline bool SetHMDRemovedFromHeadDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x258, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVRNotificationsComponent = sizeof(UVRNotificationsComponent); // 624
    static_assert(sizeof(UVRNotificationsComponent) == 0x270, "Size of UVRNotificationsComponent is not correct.");
//	auto constexpr UVRNotificationsComponent_HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate_Offset = offsetof(UVRNotificationsComponent, HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate);
//	static_assert(UVRNotificationsComponent_HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate_Offset == 0x1e8, "UVRNotificationsComponent::HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate offset is not 1e8");
	auto constexpr UVRNotificationsComponent_HMDTrackingInitializedDelegate_Offset = offsetof(UVRNotificationsComponent, HMDTrackingInitializedDelegate);
	static_assert(UVRNotificationsComponent_HMDTrackingInitializedDelegate_Offset == 0x1f8, "UVRNotificationsComponent::HMDTrackingInitializedDelegate offset is not 1f8");
	auto constexpr UVRNotificationsComponent_HMDRecenteredDelegate_Offset = offsetof(UVRNotificationsComponent, HMDRecenteredDelegate);
	static_assert(UVRNotificationsComponent_HMDRecenteredDelegate_Offset == 0x208, "UVRNotificationsComponent::HMDRecenteredDelegate offset is not 208");
	auto constexpr UVRNotificationsComponent_HMDLostDelegate_Offset = offsetof(UVRNotificationsComponent, HMDLostDelegate);
	static_assert(UVRNotificationsComponent_HMDLostDelegate_Offset == 0x218, "UVRNotificationsComponent::HMDLostDelegate offset is not 218");
	auto constexpr UVRNotificationsComponent_HMDReconnectedDelegate_Offset = offsetof(UVRNotificationsComponent, HMDReconnectedDelegate);
	static_assert(UVRNotificationsComponent_HMDReconnectedDelegate_Offset == 0x228, "UVRNotificationsComponent::HMDReconnectedDelegate offset is not 228");
	auto constexpr UVRNotificationsComponent_HMDConnectCanceledDelegate_Offset = offsetof(UVRNotificationsComponent, HMDConnectCanceledDelegate);
	static_assert(UVRNotificationsComponent_HMDConnectCanceledDelegate_Offset == 0x238, "UVRNotificationsComponent::HMDConnectCanceledDelegate offset is not 238");
	auto constexpr UVRNotificationsComponent_HMDPutOnHeadDelegate_Offset = offsetof(UVRNotificationsComponent, HMDPutOnHeadDelegate);
	static_assert(UVRNotificationsComponent_HMDPutOnHeadDelegate_Offset == 0x248, "UVRNotificationsComponent::HMDPutOnHeadDelegate offset is not 248");
	auto constexpr UVRNotificationsComponent_HMDRemovedFromHeadDelegate_Offset = offsetof(UVRNotificationsComponent, HMDRemovedFromHeadDelegate);
	static_assert(UVRNotificationsComponent_HMDRemovedFromHeadDelegate_Offset == 0x258, "UVRNotificationsComponent::HMDRemovedFromHeadDelegate offset is not 258");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
