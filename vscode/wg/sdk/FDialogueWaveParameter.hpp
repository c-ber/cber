#pragma once
#include "FDialogueContext.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDialogueWaveParameter // Size: 0x20
{
public:
    ExternalPtr<struct UDialogueWave> DialogueWave; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.DialogueWaveParameter.DialogueWave */
    FDialogueContext Context; /* Ofs: 0x8 Size: 0x18 StructProperty Engine.DialogueWaveParameter.Context */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDialogueWaveParameter = sizeof(FDialogueWaveParameter); // 32
    static_assert(sizeof(FDialogueWaveParameter) == 0x20, "Size of FDialogueWaveParameter is not correct.");
	auto constexpr FDialogueWaveParameter_DialogueWave_Offset = offsetof(FDialogueWaveParameter, DialogueWave);
	static_assert(FDialogueWaveParameter_DialogueWave_Offset == 0x0, "FDialogueWaveParameter::DialogueWave offset is not 0");
	auto constexpr FDialogueWaveParameter_Context_Offset = offsetof(FDialogueWaveParameter, Context);
	static_assert(FDialogueWaveParameter_Context_Offset == 0x8, "FDialogueWaveParameter::Context offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
