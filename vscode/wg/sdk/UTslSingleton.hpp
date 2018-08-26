#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslSingleton // Size: 0x158
	: public UObject // Size: 0x30
{
private:
	typedef UTslSingleton t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1495); // id32("Class TslGame.TslSingleton")
		return ptr;
	}
	uint8_t UnknownData30[0x110];
	ExternalPtr<struct UWeaponsPenetrationConfig> WeaponsPenetrationConfig; /* Ofs: 0x140 Size: 0x8 - ObjectProperty TslGame.TslSingleton.WeaponsPenetrationConfig */
	ExternalPtr<struct UDataTable> EmoteDataTable; /* Ofs: 0x148 Size: 0x8 - ObjectProperty TslGame.TslSingleton.EmoteDataTable */
	ExternalPtr<struct UClass> TslAchievementClass; /* Ofs: 0x150 Size: 0x8 - ClassProperty TslGame.TslSingleton.TslAchievementClass */


	inline bool SetWeaponsPenetrationConfig(t_structHelper inst, ExternalPtr<struct UWeaponsPenetrationConfig> value) { inst.WriteOffset(0x140, value); }
	inline bool SetEmoteDataTable(t_structHelper inst, ExternalPtr<struct UDataTable> value) { inst.WriteOffset(0x148, value); }
	inline bool SetTslAchievementClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x150, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslSingleton = sizeof(UTslSingleton); // 344
    static_assert(sizeof(UTslSingleton) == 0x158, "Size of UTslSingleton is not correct.");
	auto constexpr UTslSingleton_WeaponsPenetrationConfig_Offset = offsetof(UTslSingleton, WeaponsPenetrationConfig);
	static_assert(UTslSingleton_WeaponsPenetrationConfig_Offset == 0x140, "UTslSingleton::WeaponsPenetrationConfig offset is not 140");
	auto constexpr UTslSingleton_EmoteDataTable_Offset = offsetof(UTslSingleton, EmoteDataTable);
	static_assert(UTslSingleton_EmoteDataTable_Offset == 0x148, "UTslSingleton::EmoteDataTable offset is not 148");
	auto constexpr UTslSingleton_TslAchievementClass_Offset = offsetof(UTslSingleton, TslAchievementClass);
	static_assert(UTslSingleton_TslAchievementClass_Offset == 0x150, "UTslSingleton::TslAchievementClass offset is not 150");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
