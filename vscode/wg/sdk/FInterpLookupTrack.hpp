#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FInterpLookupTrack // Size: 0x10
{
public:
    TArray<struct FInterpLookupPoint> Points; /* Ofs: 0x0 Size: 0x10 ArrayProperty Engine.InterpLookupTrack.Points */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFInterpLookupTrack = sizeof(FInterpLookupTrack); // 16
    static_assert(sizeof(FInterpLookupTrack) == 0x10, "Size of FInterpLookupTrack is not correct.");
	auto constexpr FInterpLookupTrack_Points_Offset = offsetof(FInterpLookupTrack, Points);
	static_assert(FInterpLookupTrack_Points_Offset == 0x0, "FInterpLookupTrack::Points offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
