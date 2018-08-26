#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDeviceProfileManager // Size: 0x110
	: public UObject // Size: 0x30
{
private:
	typedef UDeviceProfileManager t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(735); // id32("Class Engine.DeviceProfileManager")
		return ptr;
	}
	TArray<ExternalPtr<struct UObject>> Profiles; /* Ofs: 0x30 Size: 0x10 - ArrayProperty Engine.DeviceProfileManager.Profiles */
	uint8_t UnknownData40[0xD0];


	inline bool SetProfiles(t_structHelper inst, TArray<ExternalPtr<struct UObject>> value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDeviceProfileManager = sizeof(UDeviceProfileManager); // 272
    static_assert(sizeof(UDeviceProfileManager) == 0x110, "Size of UDeviceProfileManager is not correct.");
	auto constexpr UDeviceProfileManager_Profiles_Offset = offsetof(UDeviceProfileManager, Profiles);
	static_assert(UDeviceProfileManager_Profiles_Offset == 0x30, "UDeviceProfileManager::Profiles offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
