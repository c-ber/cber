#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRawAnimSequenceTrack // Size: 0x30
{
public:
    TArray<struct FVector> PosKeys; /* Ofs: 0x0 Size: 0x10 ArrayProperty Engine.RawAnimSequenceTrack.PosKeys */
    TArray<struct FQuat> RotKeys; /* Ofs: 0x10 Size: 0x10 ArrayProperty Engine.RawAnimSequenceTrack.RotKeys */
    TArray<struct FVector> ScaleKeys; /* Ofs: 0x20 Size: 0x10 ArrayProperty Engine.RawAnimSequenceTrack.ScaleKeys */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRawAnimSequenceTrack = sizeof(FRawAnimSequenceTrack); // 48
    static_assert(sizeof(FRawAnimSequenceTrack) == 0x30, "Size of FRawAnimSequenceTrack is not correct.");
	auto constexpr FRawAnimSequenceTrack_PosKeys_Offset = offsetof(FRawAnimSequenceTrack, PosKeys);
	static_assert(FRawAnimSequenceTrack_PosKeys_Offset == 0x0, "FRawAnimSequenceTrack::PosKeys offset is not 0");
	auto constexpr FRawAnimSequenceTrack_RotKeys_Offset = offsetof(FRawAnimSequenceTrack, RotKeys);
	static_assert(FRawAnimSequenceTrack_RotKeys_Offset == 0x10, "FRawAnimSequenceTrack::RotKeys offset is not 10");
	auto constexpr FRawAnimSequenceTrack_ScaleKeys_Offset = offsetof(FRawAnimSequenceTrack, ScaleKeys);
	static_assert(FRawAnimSequenceTrack_ScaleKeys_Offset == 0x20, "FRawAnimSequenceTrack::ScaleKeys offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
