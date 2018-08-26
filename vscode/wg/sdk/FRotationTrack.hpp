#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRotationTrack // Size: 0x20
{
public:
    TArray<struct FQuat> RotKeys; /* Ofs: 0x0 Size: 0x10 ArrayProperty Engine.RotationTrack.RotKeys */
    TArray<float> Times; /* Ofs: 0x10 Size: 0x10 ArrayProperty Engine.RotationTrack.Times */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRotationTrack = sizeof(FRotationTrack); // 32
    static_assert(sizeof(FRotationTrack) == 0x20, "Size of FRotationTrack is not correct.");
	auto constexpr FRotationTrack_RotKeys_Offset = offsetof(FRotationTrack, RotKeys);
	static_assert(FRotationTrack_RotKeys_Offset == 0x0, "FRotationTrack::RotKeys offset is not 0");
	auto constexpr FRotationTrack_Times_Offset = offsetof(FRotationTrack, Times);
	static_assert(FRotationTrack_Times_Offset == 0x10, "FRotationTrack::Times offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
