#pragma once
#include "UTextureLODSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDeviceProfile // Size: 0xD0
	: public UTextureLODSettings // Size: 0x40
{
private:
	typedef UDeviceProfile t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1250); // id32("Class Engine.DeviceProfile")
		return ptr;
	}
	FString DeviceType; /* Ofs: 0x40 Size: 0x10 - StrProperty Engine.DeviceProfile.DeviceType */
	FString BaseProfileName; /* Ofs: 0x50 Size: 0x10 - StrProperty Engine.DeviceProfile.BaseProfileName */
	ExternalPtr<struct UObject> Parent; /* Ofs: 0x60 Size: 0x8 - ObjectProperty Engine.DeviceProfile.Parent */
	uint8_t UnknownData68[0x18];
	TArray<struct FString> CVars; /* Ofs: 0x80 Size: 0x10 - ArrayProperty Engine.DeviceProfile.CVars */
	uint8_t UnknownData90[0x40];


	inline bool SetDeviceType(t_structHelper inst, FString value) { inst.WriteOffset(0x40, value); }
	inline bool SetBaseProfileName(t_structHelper inst, FString value) { inst.WriteOffset(0x50, value); }
	inline bool SetParent(t_structHelper inst, ExternalPtr<struct UObject> value) { inst.WriteOffset(0x60, value); }
	inline bool SetCVars(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x80, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDeviceProfile = sizeof(UDeviceProfile); // 208
    static_assert(sizeof(UDeviceProfile) == 0xD0, "Size of UDeviceProfile is not correct.");
	auto constexpr UDeviceProfile_DeviceType_Offset = offsetof(UDeviceProfile, DeviceType);
	static_assert(UDeviceProfile_DeviceType_Offset == 0x40, "UDeviceProfile::DeviceType offset is not 40");
	auto constexpr UDeviceProfile_BaseProfileName_Offset = offsetof(UDeviceProfile, BaseProfileName);
	static_assert(UDeviceProfile_BaseProfileName_Offset == 0x50, "UDeviceProfile::BaseProfileName offset is not 50");
	auto constexpr UDeviceProfile_Parent_Offset = offsetof(UDeviceProfile, Parent);
	static_assert(UDeviceProfile_Parent_Offset == 0x60, "UDeviceProfile::Parent offset is not 60");
	auto constexpr UDeviceProfile_CVars_Offset = offsetof(UDeviceProfile, CVars);
	static_assert(UDeviceProfile_CVars_Offset == 0x80, "UDeviceProfile::CVars offset is not 80");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
