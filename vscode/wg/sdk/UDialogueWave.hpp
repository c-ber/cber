#pragma once
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDialogueWave // Size: 0x78
	: public UObject // Size: 0x30
{
private:
	typedef UDialogueWave t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(737); // id32("Class Engine.DialogueWave")
		return ptr;
	}
	uint8_t boolField30;
	uint8_t UnknownData31[0x7];
	FString SpokenText; /* Ofs: 0x38 Size: 0x10 - StrProperty Engine.DialogueWave.SpokenText */
	FString SubtitleOverride; /* Ofs: 0x48 Size: 0x10 - StrProperty Engine.DialogueWave.SubtitleOverride */
	TArray<struct FDialogueContextMapping> ContextMappings; /* Ofs: 0x58 Size: 0x10 - ArrayProperty Engine.DialogueWave.ContextMappings */
	FGuid LocalizationGUID; /* Ofs: 0x68 Size: 0x10 - StructProperty Engine.DialogueWave.LocalizationGUID */


	inline bool bMature()
	{
		return boolField30& 0x1;
	}
	inline bool SetbMature(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x30, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bOverride_SubtitleOverride()
	{
		return boolField30& 0x2;
	}
	inline bool SetbOverride_SubtitleOverride(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x30, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetSpokenText(t_structHelper inst, FString value) { inst.WriteOffset(0x38, value); }
	inline bool SetSubtitleOverride(t_structHelper inst, FString value) { inst.WriteOffset(0x48, value); }
	inline bool SetContextMappings(t_structHelper inst, TArray<struct FDialogueContextMapping> value) { inst.WriteOffset(0x58, value); }
	inline bool SetLocalizationGUID(t_structHelper inst, FGuid value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDialogueWave = sizeof(UDialogueWave); // 120
    static_assert(sizeof(UDialogueWave) == 0x78, "Size of UDialogueWave is not correct.");
	auto constexpr UDialogueWave_boolField30_Offset = offsetof(UDialogueWave, boolField30);
	static_assert(UDialogueWave_boolField30_Offset == 0x30, "UDialogueWave::boolField30 offset is not 30");
	auto constexpr UDialogueWave_SpokenText_Offset = offsetof(UDialogueWave, SpokenText);
	static_assert(UDialogueWave_SpokenText_Offset == 0x38, "UDialogueWave::SpokenText offset is not 38");
	auto constexpr UDialogueWave_SubtitleOverride_Offset = offsetof(UDialogueWave, SubtitleOverride);
	static_assert(UDialogueWave_SubtitleOverride_Offset == 0x48, "UDialogueWave::SubtitleOverride offset is not 48");
	auto constexpr UDialogueWave_ContextMappings_Offset = offsetof(UDialogueWave, ContextMappings);
	static_assert(UDialogueWave_ContextMappings_Offset == 0x58, "UDialogueWave::ContextMappings offset is not 58");
	auto constexpr UDialogueWave_LocalizationGUID_Offset = offsetof(UDialogueWave, LocalizationGUID);
	static_assert(UDialogueWave_LocalizationGUID_Offset == 0x68, "UDialogueWave::LocalizationGUID offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
