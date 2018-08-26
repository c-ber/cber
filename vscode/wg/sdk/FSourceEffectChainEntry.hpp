#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSourceEffectChainEntry // Size: 0x10
{
public:
    ExternalPtr<struct USoundEffectSourcePreset> Preset; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.SourceEffectChainEntry.Preset */
    bool bBypass; /* Ofs: 0x8 Size: 0x1 BitMask: 01 BoolProperty Engine.SourceEffectChainEntry.bBypass */
    uint8_t UnknownData9[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSourceEffectChainEntry = sizeof(FSourceEffectChainEntry); // 16
    static_assert(sizeof(FSourceEffectChainEntry) == 0x10, "Size of FSourceEffectChainEntry is not correct.");
	auto constexpr FSourceEffectChainEntry_Preset_Offset = offsetof(FSourceEffectChainEntry, Preset);
	static_assert(FSourceEffectChainEntry_Preset_Offset == 0x0, "FSourceEffectChainEntry::Preset offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
