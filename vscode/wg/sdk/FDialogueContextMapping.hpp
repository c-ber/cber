#pragma once
#include "FDialogueContext.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDialogueContextMapping // Size: 0x38
{
public:
    FDialogueContext Context; /* Ofs: 0x0 Size: 0x18 StructProperty Engine.DialogueContextMapping.Context */
    ExternalPtr<struct USoundWave> SoundWave; /* Ofs: 0x18 Size: 0x8 ObjectProperty Engine.DialogueContextMapping.SoundWave */
    FString LocalizationKeyFormat; /* Ofs: 0x20 Size: 0x10 StrProperty Engine.DialogueContextMapping.LocalizationKeyFormat */
    ExternalPtr<struct UDialogueSoundWaveProxy> Proxy; /* Ofs: 0x30 Size: 0x8 ObjectProperty Engine.DialogueContextMapping.Proxy */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDialogueContextMapping = sizeof(FDialogueContextMapping); // 56
    static_assert(sizeof(FDialogueContextMapping) == 0x38, "Size of FDialogueContextMapping is not correct.");
	auto constexpr FDialogueContextMapping_Context_Offset = offsetof(FDialogueContextMapping, Context);
	static_assert(FDialogueContextMapping_Context_Offset == 0x0, "FDialogueContextMapping::Context offset is not 0");
	auto constexpr FDialogueContextMapping_SoundWave_Offset = offsetof(FDialogueContextMapping, SoundWave);
	static_assert(FDialogueContextMapping_SoundWave_Offset == 0x18, "FDialogueContextMapping::SoundWave offset is not 18");
	auto constexpr FDialogueContextMapping_LocalizationKeyFormat_Offset = offsetof(FDialogueContextMapping, LocalizationKeyFormat);
	static_assert(FDialogueContextMapping_LocalizationKeyFormat_Offset == 0x20, "FDialogueContextMapping::LocalizationKeyFormat offset is not 20");
	auto constexpr FDialogueContextMapping_Proxy_Offset = offsetof(FDialogueContextMapping, Proxy);
	static_assert(FDialogueContextMapping_Proxy_Offset == 0x30, "FDialogueContextMapping::Proxy offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
