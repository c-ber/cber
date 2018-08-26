#pragma once
#include "UGameInstance.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPlatformGameInstance // Size: 0x1C0
	: public UGameInstance // Size: 0x110
{
private:
	typedef UPlatformGameInstance t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(294); // id32("Class Engine.PlatformGameInstance")
		return ptr;
	}
//	FScriptMulticastDelegate ApplicationWillDeactivateDelegate; /* Ofs: 0x108 Size: 0x10 - MulticastDelegateProperty Engine.PlatformGameInstance.ApplicationWillDeactivateDelegate */
	uint8_t UnknownData110[0x8];
	FScriptMulticastDelegate ApplicationHasReactivatedDelegate; /* Ofs: 0x118 Size: 0x10 - MulticastDelegateProperty Engine.PlatformGameInstance.ApplicationHasReactivatedDelegate */
	FScriptMulticastDelegate ApplicationWillEnterBackgroundDelegate; /* Ofs: 0x128 Size: 0x10 - MulticastDelegateProperty Engine.PlatformGameInstance.ApplicationWillEnterBackgroundDelegate */
	FScriptMulticastDelegate ApplicationHasEnteredForegroundDelegate; /* Ofs: 0x138 Size: 0x10 - MulticastDelegateProperty Engine.PlatformGameInstance.ApplicationHasEnteredForegroundDelegate */
	FScriptMulticastDelegate ApplicationWillTerminateDelegate; /* Ofs: 0x148 Size: 0x10 - MulticastDelegateProperty Engine.PlatformGameInstance.ApplicationWillTerminateDelegate */
	FScriptMulticastDelegate ApplicationRegisteredForRemoteNotificationsDelegate; /* Ofs: 0x158 Size: 0x10 - MulticastDelegateProperty Engine.PlatformGameInstance.ApplicationRegisteredForRemoteNotificationsDelegate */
	FScriptMulticastDelegate ApplicationRegisteredForUserNotificationsDelegate; /* Ofs: 0x168 Size: 0x10 - MulticastDelegateProperty Engine.PlatformGameInstance.ApplicationRegisteredForUserNotificationsDelegate */
	FScriptMulticastDelegate ApplicationFailedToRegisterForRemoteNotificationsDelegate; /* Ofs: 0x178 Size: 0x10 - MulticastDelegateProperty Engine.PlatformGameInstance.ApplicationFailedToRegisterForRemoteNotificationsDelegate */
	FScriptMulticastDelegate ApplicationReceivedRemoteNotificationDelegate; /* Ofs: 0x188 Size: 0x10 - MulticastDelegateProperty Engine.PlatformGameInstance.ApplicationReceivedRemoteNotificationDelegate */
	FScriptMulticastDelegate ApplicationReceivedLocalNotificationDelegate; /* Ofs: 0x198 Size: 0x10 - MulticastDelegateProperty Engine.PlatformGameInstance.ApplicationReceivedLocalNotificationDelegate */
	FScriptMulticastDelegate ApplicationReceivedScreenOrientationChangedNotificationDelegate; /* Ofs: 0x1A8 Size: 0x10 - MulticastDelegateProperty Engine.PlatformGameInstance.ApplicationReceivedScreenOrientationChangedNotificationDelegate */
	uint8_t UnknownData1B8[0x8];


//	inline bool SetApplicationWillDeactivateDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x108, value); }
	inline bool SetApplicationHasReactivatedDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x118, value); }
	inline bool SetApplicationWillEnterBackgroundDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x128, value); }
	inline bool SetApplicationHasEnteredForegroundDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x138, value); }
	inline bool SetApplicationWillTerminateDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x148, value); }
	inline bool SetApplicationRegisteredForRemoteNotificationsDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x158, value); }
	inline bool SetApplicationRegisteredForUserNotificationsDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x168, value); }
	inline bool SetApplicationFailedToRegisterForRemoteNotificationsDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x178, value); }
	inline bool SetApplicationReceivedRemoteNotificationDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x188, value); }
	inline bool SetApplicationReceivedLocalNotificationDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x198, value); }
	inline bool SetApplicationReceivedScreenOrientationChangedNotificationDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x1A8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPlatformGameInstance = sizeof(UPlatformGameInstance); // 448
    static_assert(sizeof(UPlatformGameInstance) == 0x1C0, "Size of UPlatformGameInstance is not correct.");
//	auto constexpr UPlatformGameInstance_ApplicationWillDeactivateDelegate_Offset = offsetof(UPlatformGameInstance, ApplicationWillDeactivateDelegate);
//	static_assert(UPlatformGameInstance_ApplicationWillDeactivateDelegate_Offset == 0x108, "UPlatformGameInstance::ApplicationWillDeactivateDelegate offset is not 108");
	auto constexpr UPlatformGameInstance_ApplicationHasReactivatedDelegate_Offset = offsetof(UPlatformGameInstance, ApplicationHasReactivatedDelegate);
	static_assert(UPlatformGameInstance_ApplicationHasReactivatedDelegate_Offset == 0x118, "UPlatformGameInstance::ApplicationHasReactivatedDelegate offset is not 118");
	auto constexpr UPlatformGameInstance_ApplicationWillEnterBackgroundDelegate_Offset = offsetof(UPlatformGameInstance, ApplicationWillEnterBackgroundDelegate);
	static_assert(UPlatformGameInstance_ApplicationWillEnterBackgroundDelegate_Offset == 0x128, "UPlatformGameInstance::ApplicationWillEnterBackgroundDelegate offset is not 128");
	auto constexpr UPlatformGameInstance_ApplicationHasEnteredForegroundDelegate_Offset = offsetof(UPlatformGameInstance, ApplicationHasEnteredForegroundDelegate);
	static_assert(UPlatformGameInstance_ApplicationHasEnteredForegroundDelegate_Offset == 0x138, "UPlatformGameInstance::ApplicationHasEnteredForegroundDelegate offset is not 138");
	auto constexpr UPlatformGameInstance_ApplicationWillTerminateDelegate_Offset = offsetof(UPlatformGameInstance, ApplicationWillTerminateDelegate);
	static_assert(UPlatformGameInstance_ApplicationWillTerminateDelegate_Offset == 0x148, "UPlatformGameInstance::ApplicationWillTerminateDelegate offset is not 148");
	auto constexpr UPlatformGameInstance_ApplicationRegisteredForRemoteNotificationsDelegate_Offset = offsetof(UPlatformGameInstance, ApplicationRegisteredForRemoteNotificationsDelegate);
	static_assert(UPlatformGameInstance_ApplicationRegisteredForRemoteNotificationsDelegate_Offset == 0x158, "UPlatformGameInstance::ApplicationRegisteredForRemoteNotificationsDelegate offset is not 158");
	auto constexpr UPlatformGameInstance_ApplicationRegisteredForUserNotificationsDelegate_Offset = offsetof(UPlatformGameInstance, ApplicationRegisteredForUserNotificationsDelegate);
	static_assert(UPlatformGameInstance_ApplicationRegisteredForUserNotificationsDelegate_Offset == 0x168, "UPlatformGameInstance::ApplicationRegisteredForUserNotificationsDelegate offset is not 168");
	auto constexpr UPlatformGameInstance_ApplicationFailedToRegisterForRemoteNotificationsDelegate_Offset = offsetof(UPlatformGameInstance, ApplicationFailedToRegisterForRemoteNotificationsDelegate);
	static_assert(UPlatformGameInstance_ApplicationFailedToRegisterForRemoteNotificationsDelegate_Offset == 0x178, "UPlatformGameInstance::ApplicationFailedToRegisterForRemoteNotificationsDelegate offset is not 178");
	auto constexpr UPlatformGameInstance_ApplicationReceivedRemoteNotificationDelegate_Offset = offsetof(UPlatformGameInstance, ApplicationReceivedRemoteNotificationDelegate);
	static_assert(UPlatformGameInstance_ApplicationReceivedRemoteNotificationDelegate_Offset == 0x188, "UPlatformGameInstance::ApplicationReceivedRemoteNotificationDelegate offset is not 188");
	auto constexpr UPlatformGameInstance_ApplicationReceivedLocalNotificationDelegate_Offset = offsetof(UPlatformGameInstance, ApplicationReceivedLocalNotificationDelegate);
	static_assert(UPlatformGameInstance_ApplicationReceivedLocalNotificationDelegate_Offset == 0x198, "UPlatformGameInstance::ApplicationReceivedLocalNotificationDelegate offset is not 198");
	auto constexpr UPlatformGameInstance_ApplicationReceivedScreenOrientationChangedNotificationDelegate_Offset = offsetof(UPlatformGameInstance, ApplicationReceivedScreenOrientationChangedNotificationDelegate);
	static_assert(UPlatformGameInstance_ApplicationReceivedScreenOrientationChangedNotificationDelegate_Offset == 0x1a8, "UPlatformGameInstance::ApplicationReceivedScreenOrientationChangedNotificationDelegate offset is not 1a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
