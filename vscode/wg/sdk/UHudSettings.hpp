#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UHudSettings // Size: 0x48
	: public UObject // Size: 0x30
{
private:
	typedef UHudSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1279); // id32("Class EngineSettings.HudSettings")
		return ptr;
	}
	uint8_t boolField30;
	uint8_t UnknownData31[0x7];
	TArray<struct FName> DebugDisplay; /* Ofs: 0x38 Size: 0x10 - ArrayProperty EngineSettings.HudSettings.DebugDisplay */


	inline bool bShowHUD()
	{
		return boolField30& 0x1;
	}
	inline bool SetbShowHUD(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x30, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetDebugDisplay(t_structHelper inst, TArray<struct FName> value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUHudSettings = sizeof(UHudSettings); // 72
    static_assert(sizeof(UHudSettings) == 0x48, "Size of UHudSettings is not correct.");
	auto constexpr UHudSettings_boolField30_Offset = offsetof(UHudSettings, boolField30);
	static_assert(UHudSettings_boolField30_Offset == 0x30, "UHudSettings::boolField30 offset is not 30");
	auto constexpr UHudSettings_DebugDisplay_Offset = offsetof(UHudSettings, DebugDisplay);
	static_assert(UHudSettings_DebugDisplay_Offset == 0x38, "UHudSettings::DebugDisplay offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
