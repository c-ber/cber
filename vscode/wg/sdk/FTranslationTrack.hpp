#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTranslationTrack // Size: 0x20
{
public:
    TArray<struct FVector> PosKeys; /* Ofs: 0x0 Size: 0x10 ArrayProperty Engine.TranslationTrack.PosKeys */
    TArray<float> Times; /* Ofs: 0x10 Size: 0x10 ArrayProperty Engine.TranslationTrack.Times */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTranslationTrack = sizeof(FTranslationTrack); // 32
    static_assert(sizeof(FTranslationTrack) == 0x20, "Size of FTranslationTrack is not correct.");
	auto constexpr FTranslationTrack_PosKeys_Offset = offsetof(FTranslationTrack, PosKeys);
	static_assert(FTranslationTrack_PosKeys_Offset == 0x0, "FTranslationTrack::PosKeys offset is not 0");
	auto constexpr FTranslationTrack_Times_Offset = offsetof(FTranslationTrack, Times);
	static_assert(FTranslationTrack_Times_Offset == 0x10, "FTranslationTrack::Times offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
