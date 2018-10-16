#pragma once
#include "ETwoPlayerSplitScreenType.hpp"
#include "EThreePlayerSplitScreenType.hpp"
#include "FStringClassReference.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGameMapsSettings // Size: 0xD8
	: public UObject // Size: 0x30
{
private:
	typedef UGameMapsSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1274); // id32("Class EngineSettings.GameMapsSettings")
		return ptr;
	}
	FStringAssetReference EditorStartupMap; /* Ofs: 0x30 Size: 0x10 - StructProperty EngineSettings.GameMapsSettings.EditorStartupMap */
	FString LocalMapOptions; /* Ofs: 0x40 Size: 0x10 - StrProperty EngineSettings.GameMapsSettings.LocalMapOptions */
	FStringAssetReference TransitionMap; /* Ofs: 0x50 Size: 0x10 - StructProperty EngineSettings.GameMapsSettings.TransitionMap */
	uint8_t boolField60;
	TEnumAsByte<enum ETwoPlayerSplitScreenType> TwoPlayerSplitscreenLayout; /* Ofs: 0x61 Size: 0x1 - ByteProperty EngineSettings.GameMapsSettings.TwoPlayerSplitscreenLayout */
	TEnumAsByte<enum EThreePlayerSplitScreenType> ThreePlayerSplitscreenLayout; /* Ofs: 0x62 Size: 0x1 - ByteProperty EngineSettings.GameMapsSettings.ThreePlayerSplitscreenLayout */
	uint8_t boolField63;
	uint8_t UnknownData64[0x4];
	FStringClassReference GameInstanceClass; /* Ofs: 0x68 Size: 0x10 - StructProperty EngineSettings.GameMapsSettings.GameInstanceClass */
	FStringAssetReference GameDefaultMap; /* Ofs: 0x78 Size: 0x10 - StructProperty EngineSettings.GameMapsSettings.GameDefaultMap */
	FStringAssetReference ServerDefaultMap; /* Ofs: 0x88 Size: 0x10 - StructProperty EngineSettings.GameMapsSettings.ServerDefaultMap */
	FStringClassReference GlobalDefaultGameMode; /* Ofs: 0x98 Size: 0x10 - StructProperty EngineSettings.GameMapsSettings.GlobalDefaultGameMode */
	FStringClassReference GlobalDefaultServerGameMode; /* Ofs: 0xA8 Size: 0x10 - StructProperty EngineSettings.GameMapsSettings.GlobalDefaultServerGameMode */
	TArray<struct FGameModeName> GameModeMapPrefixes; /* Ofs: 0xB8 Size: 0x10 - ArrayProperty EngineSettings.GameMapsSettings.GameModeMapPrefixes */
	TArray<struct FGameModeName> GameModeClassAliases; /* Ofs: 0xC8 Size: 0x10 - ArrayProperty EngineSettings.GameMapsSettings.GameModeClassAliases */


	inline bool SetEditorStartupMap(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x30, value); }
	inline bool SetLocalMapOptions(t_structHelper inst, FString value) { inst.WriteOffset(0x40, value); }
	inline bool SetTransitionMap(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x50, value); }
	inline bool bUseSplitscreen()
	{
		return boolField60& 0x1;
	}
	inline bool SetbUseSplitscreen(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x60, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTwoPlayerSplitscreenLayout(t_structHelper inst, TEnumAsByte<enum ETwoPlayerSplitScreenType> value) { inst.WriteOffset(0x61, value); }
	inline bool SetThreePlayerSplitscreenLayout(t_structHelper inst, TEnumAsByte<enum EThreePlayerSplitScreenType> value) { inst.WriteOffset(0x62, value); }
	inline bool bOffsetPlayerGamepadIds()
	{
		return boolField63& 0x1;
	}
	inline bool SetbOffsetPlayerGamepadIds(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x63, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetGameInstanceClass(t_structHelper inst, FStringClassReference value) { inst.WriteOffset(0x68, value); }
	inline bool SetGameDefaultMap(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x78, value); }
	inline bool SetServerDefaultMap(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x88, value); }
	inline bool SetGlobalDefaultGameMode(t_structHelper inst, FStringClassReference value) { inst.WriteOffset(0x98, value); }
	inline bool SetGlobalDefaultServerGameMode(t_structHelper inst, FStringClassReference value) { inst.WriteOffset(0xA8, value); }
	inline bool SetGameModeMapPrefixes(t_structHelper inst, TArray<struct FGameModeName> value) { inst.WriteOffset(0xB8, value); }
	inline bool SetGameModeClassAliases(t_structHelper inst, TArray<struct FGameModeName> value) { inst.WriteOffset(0xC8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGameMapsSettings = sizeof(UGameMapsSettings); // 216
    static_assert(sizeof(UGameMapsSettings) == 0xD8, "Size of UGameMapsSettings is not correct.");
	auto constexpr UGameMapsSettings_EditorStartupMap_Offset = offsetof(UGameMapsSettings, EditorStartupMap);
	static_assert(UGameMapsSettings_EditorStartupMap_Offset == 0x30, "UGameMapsSettings::EditorStartupMap offset is not 30");
	auto constexpr UGameMapsSettings_LocalMapOptions_Offset = offsetof(UGameMapsSettings, LocalMapOptions);
	static_assert(UGameMapsSettings_LocalMapOptions_Offset == 0x40, "UGameMapsSettings::LocalMapOptions offset is not 40");
	auto constexpr UGameMapsSettings_TransitionMap_Offset = offsetof(UGameMapsSettings, TransitionMap);
	static_assert(UGameMapsSettings_TransitionMap_Offset == 0x50, "UGameMapsSettings::TransitionMap offset is not 50");
	auto constexpr UGameMapsSettings_boolField60_Offset = offsetof(UGameMapsSettings, boolField60);
	static_assert(UGameMapsSettings_boolField60_Offset == 0x60, "UGameMapsSettings::boolField60 offset is not 60");
	auto constexpr UGameMapsSettings_TwoPlayerSplitscreenLayout_Offset = offsetof(UGameMapsSettings, TwoPlayerSplitscreenLayout);
	static_assert(UGameMapsSettings_TwoPlayerSplitscreenLayout_Offset == 0x61, "UGameMapsSettings::TwoPlayerSplitscreenLayout offset is not 61");
	auto constexpr UGameMapsSettings_ThreePlayerSplitscreenLayout_Offset = offsetof(UGameMapsSettings, ThreePlayerSplitscreenLayout);
	static_assert(UGameMapsSettings_ThreePlayerSplitscreenLayout_Offset == 0x62, "UGameMapsSettings::ThreePlayerSplitscreenLayout offset is not 62");
	auto constexpr UGameMapsSettings_boolField63_Offset = offsetof(UGameMapsSettings, boolField63);
	static_assert(UGameMapsSettings_boolField63_Offset == 0x63, "UGameMapsSettings::boolField63 offset is not 63");
	auto constexpr UGameMapsSettings_GameInstanceClass_Offset = offsetof(UGameMapsSettings, GameInstanceClass);
	static_assert(UGameMapsSettings_GameInstanceClass_Offset == 0x68, "UGameMapsSettings::GameInstanceClass offset is not 68");
	auto constexpr UGameMapsSettings_GameDefaultMap_Offset = offsetof(UGameMapsSettings, GameDefaultMap);
	static_assert(UGameMapsSettings_GameDefaultMap_Offset == 0x78, "UGameMapsSettings::GameDefaultMap offset is not 78");
	auto constexpr UGameMapsSettings_ServerDefaultMap_Offset = offsetof(UGameMapsSettings, ServerDefaultMap);
	static_assert(UGameMapsSettings_ServerDefaultMap_Offset == 0x88, "UGameMapsSettings::ServerDefaultMap offset is not 88");
	auto constexpr UGameMapsSettings_GlobalDefaultGameMode_Offset = offsetof(UGameMapsSettings, GlobalDefaultGameMode);
	static_assert(UGameMapsSettings_GlobalDefaultGameMode_Offset == 0x98, "UGameMapsSettings::GlobalDefaultGameMode offset is not 98");
	auto constexpr UGameMapsSettings_GlobalDefaultServerGameMode_Offset = offsetof(UGameMapsSettings, GlobalDefaultServerGameMode);
	static_assert(UGameMapsSettings_GlobalDefaultServerGameMode_Offset == 0xa8, "UGameMapsSettings::GlobalDefaultServerGameMode offset is not a8");
	auto constexpr UGameMapsSettings_GameModeMapPrefixes_Offset = offsetof(UGameMapsSettings, GameModeMapPrefixes);
	static_assert(UGameMapsSettings_GameModeMapPrefixes_Offset == 0xb8, "UGameMapsSettings::GameModeMapPrefixes offset is not b8");
	auto constexpr UGameMapsSettings_GameModeClassAliases_Offset = offsetof(UGameMapsSettings, GameModeClassAliases);
	static_assert(UGameMapsSettings_GameModeClassAliases_Offset == 0xc8, "UGameMapsSettings::GameModeClassAliases offset is not c8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
