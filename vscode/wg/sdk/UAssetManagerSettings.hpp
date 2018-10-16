#pragma once
#include "UDeveloperSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAssetManagerSettings // Size: 0xA8
	: public UDeveloperSettings // Size: 0x40
{
private:
	typedef UAssetManagerSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(724); // id32("Class Engine.AssetManagerSettings")
		return ptr;
	}
	TArray<struct FPrimaryAssetTypeInfo> PrimaryAssetTypesToScan; /* Ofs: 0x40 Size: 0x10 - ArrayProperty Engine.AssetManagerSettings.PrimaryAssetTypesToScan */
	TArray<struct FDirectoryPath> DirectoriesToExclude; /* Ofs: 0x50 Size: 0x10 - ArrayProperty Engine.AssetManagerSettings.DirectoriesToExclude */
	TArray<struct FPrimaryAssetRulesOverride> PrimaryAssetRules; /* Ofs: 0x60 Size: 0x10 - ArrayProperty Engine.AssetManagerSettings.PrimaryAssetRules */
	uint8_t boolField70;
	uint8_t UnknownData71[0x7];
	TArray<struct FAssetManagerRedirect> PrimaryAssetIdRedirects; /* Ofs: 0x78 Size: 0x10 - ArrayProperty Engine.AssetManagerSettings.PrimaryAssetIdRedirects */
	TArray<struct FAssetManagerRedirect> PrimaryAssetTypeRedirects; /* Ofs: 0x88 Size: 0x10 - ArrayProperty Engine.AssetManagerSettings.PrimaryAssetTypeRedirects */
	TArray<struct FAssetManagerRedirect> AssetPathRedirects; /* Ofs: 0x98 Size: 0x10 - ArrayProperty Engine.AssetManagerSettings.AssetPathRedirects */


	inline bool SetPrimaryAssetTypesToScan(t_structHelper inst, TArray<struct FPrimaryAssetTypeInfo> value) { inst.WriteOffset(0x40, value); }
	inline bool SetDirectoriesToExclude(t_structHelper inst, TArray<struct FDirectoryPath> value) { inst.WriteOffset(0x50, value); }
	inline bool SetPrimaryAssetRules(t_structHelper inst, TArray<struct FPrimaryAssetRulesOverride> value) { inst.WriteOffset(0x60, value); }
	inline bool bOnlyCookProductionAssets()
	{
		return boolField70& 0x1;
	}
	inline bool SetbOnlyCookProductionAssets(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x70, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetPrimaryAssetIdRedirects(t_structHelper inst, TArray<struct FAssetManagerRedirect> value) { inst.WriteOffset(0x78, value); }
	inline bool SetPrimaryAssetTypeRedirects(t_structHelper inst, TArray<struct FAssetManagerRedirect> value) { inst.WriteOffset(0x88, value); }
	inline bool SetAssetPathRedirects(t_structHelper inst, TArray<struct FAssetManagerRedirect> value) { inst.WriteOffset(0x98, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAssetManagerSettings = sizeof(UAssetManagerSettings); // 168
    static_assert(sizeof(UAssetManagerSettings) == 0xA8, "Size of UAssetManagerSettings is not correct.");
	auto constexpr UAssetManagerSettings_PrimaryAssetTypesToScan_Offset = offsetof(UAssetManagerSettings, PrimaryAssetTypesToScan);
	static_assert(UAssetManagerSettings_PrimaryAssetTypesToScan_Offset == 0x40, "UAssetManagerSettings::PrimaryAssetTypesToScan offset is not 40");
	auto constexpr UAssetManagerSettings_DirectoriesToExclude_Offset = offsetof(UAssetManagerSettings, DirectoriesToExclude);
	static_assert(UAssetManagerSettings_DirectoriesToExclude_Offset == 0x50, "UAssetManagerSettings::DirectoriesToExclude offset is not 50");
	auto constexpr UAssetManagerSettings_PrimaryAssetRules_Offset = offsetof(UAssetManagerSettings, PrimaryAssetRules);
	static_assert(UAssetManagerSettings_PrimaryAssetRules_Offset == 0x60, "UAssetManagerSettings::PrimaryAssetRules offset is not 60");
	auto constexpr UAssetManagerSettings_boolField70_Offset = offsetof(UAssetManagerSettings, boolField70);
	static_assert(UAssetManagerSettings_boolField70_Offset == 0x70, "UAssetManagerSettings::boolField70 offset is not 70");
	auto constexpr UAssetManagerSettings_PrimaryAssetIdRedirects_Offset = offsetof(UAssetManagerSettings, PrimaryAssetIdRedirects);
	static_assert(UAssetManagerSettings_PrimaryAssetIdRedirects_Offset == 0x78, "UAssetManagerSettings::PrimaryAssetIdRedirects offset is not 78");
	auto constexpr UAssetManagerSettings_PrimaryAssetTypeRedirects_Offset = offsetof(UAssetManagerSettings, PrimaryAssetTypeRedirects);
	static_assert(UAssetManagerSettings_PrimaryAssetTypeRedirects_Offset == 0x88, "UAssetManagerSettings::PrimaryAssetTypeRedirects offset is not 88");
	auto constexpr UAssetManagerSettings_AssetPathRedirects_Offset = offsetof(UAssetManagerSettings, AssetPathRedirects);
	static_assert(UAssetManagerSettings_AssetPathRedirects_Offset == 0x98, "UAssetManagerSettings::AssetPathRedirects offset is not 98");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
