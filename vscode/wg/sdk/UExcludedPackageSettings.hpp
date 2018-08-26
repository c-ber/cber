#pragma once
#include "UDeveloperSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UExcludedPackageSettings // Size: 0x60
	: public UDeveloperSettings // Size: 0x40
{
private:
	typedef UExcludedPackageSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(726); // id32("Class Engine.ExcludedPackageSettings")
		return ptr;
	}
	TArray<struct FString> CommonExcludedPackages; /* Ofs: 0x40 Size: 0x10 - ArrayProperty Engine.ExcludedPackageSettings.CommonExcludedPackages */
	TArray<struct FString> MinSpecExcludedPackages; /* Ofs: 0x50 Size: 0x10 - ArrayProperty Engine.ExcludedPackageSettings.MinSpecExcludedPackages */


	inline bool SetCommonExcludedPackages(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x40, value); }
	inline bool SetMinSpecExcludedPackages(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x50, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUExcludedPackageSettings = sizeof(UExcludedPackageSettings); // 96
    static_assert(sizeof(UExcludedPackageSettings) == 0x60, "Size of UExcludedPackageSettings is not correct.");
	auto constexpr UExcludedPackageSettings_CommonExcludedPackages_Offset = offsetof(UExcludedPackageSettings, CommonExcludedPackages);
	static_assert(UExcludedPackageSettings_CommonExcludedPackages_Offset == 0x40, "UExcludedPackageSettings::CommonExcludedPackages offset is not 40");
	auto constexpr UExcludedPackageSettings_MinSpecExcludedPackages_Offset = offsetof(UExcludedPackageSettings, MinSpecExcludedPackages);
	static_assert(UExcludedPackageSettings_MinSpecExcludedPackages_Offset == 0x50, "UExcludedPackageSettings::MinSpecExcludedPackages offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
