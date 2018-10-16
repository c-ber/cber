#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDialogueContext // Size: 0x18
{
public:
    ExternalPtr<struct UDialogueVoice> Speaker; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.DialogueContext.Speaker */
    TArray<ExternalPtr<struct UDialogueVoice>> Targets; /* Ofs: 0x8 Size: 0x10 ArrayProperty Engine.DialogueContext.Targets */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDialogueContext = sizeof(FDialogueContext); // 24
    static_assert(sizeof(FDialogueContext) == 0x18, "Size of FDialogueContext is not correct.");
	auto constexpr FDialogueContext_Speaker_Offset = offsetof(FDialogueContext, Speaker);
	static_assert(FDialogueContext_Speaker_Offset == 0x0, "FDialogueContext::Speaker offset is not 0");
	auto constexpr FDialogueContext_Targets_Offset = offsetof(FDialogueContext, Targets);
	static_assert(FDialogueContext_Targets_Offset == 0x8, "FDialogueContext::Targets offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
