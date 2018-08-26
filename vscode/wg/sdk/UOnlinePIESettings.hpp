#pragma once
#include "UDeveloperSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UOnlinePIESettings // Size: 0x58
	: public UDeveloperSettings // Size: 0x40
{
private:
	typedef UOnlinePIESettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2114); // id32("Class OnlineSubsystemUtils.OnlinePIESettings")
		return ptr;
	}
	uint8_t boolField40;
	uint8_t UnknownData41[0x7];
	TArray<struct FPIELoginSettingsInternal> Logins; /* Ofs: 0x48 Size: 0x10 - ArrayProperty OnlineSubsystemUtils.OnlinePIESettings.Logins */


	inline bool bOnlinePIEEnabled()
	{
		return boolField40& 0x1;
	}
	inline bool SetbOnlinePIEEnabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetLogins(t_structHelper inst, TArray<struct FPIELoginSettingsInternal> value) { inst.WriteOffset(0x48, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUOnlinePIESettings = sizeof(UOnlinePIESettings); // 88
    static_assert(sizeof(UOnlinePIESettings) == 0x58, "Size of UOnlinePIESettings is not correct.");
	auto constexpr UOnlinePIESettings_boolField40_Offset = offsetof(UOnlinePIESettings, boolField40);
	static_assert(UOnlinePIESettings_boolField40_Offset == 0x40, "UOnlinePIESettings::boolField40 offset is not 40");
	auto constexpr UOnlinePIESettings_Logins_Offset = offsetof(UOnlinePIESettings, Logins);
	static_assert(UOnlinePIESettings_Logins_Offset == 0x48, "UOnlinePIESettings::Logins offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
