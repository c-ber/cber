#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCompressedTrack // Size: 0x38
{
public:
    TArray<uint8_t> ByteStream; /* Ofs: 0x0 Size: 0x10 ArrayProperty Engine.CompressedTrack.ByteStream */
    TArray<float> Times; /* Ofs: 0x10 Size: 0x10 ArrayProperty Engine.CompressedTrack.Times */
    float Mins[3]; /* Ofs: 0x20 Size: 0x4 FloatProperty Engine.CompressedTrack.Mins */
    float Ranges[3]; /* Ofs: 0x2C Size: 0x4 FloatProperty Engine.CompressedTrack.Ranges */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCompressedTrack = sizeof(FCompressedTrack); // 56
    static_assert(sizeof(FCompressedTrack) == 0x38, "Size of FCompressedTrack is not correct.");
	auto constexpr FCompressedTrack_ByteStream_Offset = offsetof(FCompressedTrack, ByteStream);
	static_assert(FCompressedTrack_ByteStream_Offset == 0x0, "FCompressedTrack::ByteStream offset is not 0");
	auto constexpr FCompressedTrack_Times_Offset = offsetof(FCompressedTrack, Times);
	static_assert(FCompressedTrack_Times_Offset == 0x10, "FCompressedTrack::Times offset is not 10");
	auto constexpr FCompressedTrack_Mins_Offset = offsetof(FCompressedTrack, Mins);
	static_assert(FCompressedTrack_Mins_Offset == 0x20, "FCompressedTrack::Mins offset is not 20");
	auto constexpr FCompressedTrack_Ranges_Offset = offsetof(FCompressedTrack, Ranges);
	static_assert(FCompressedTrack_Ranges_Offset == 0x2c, "FCompressedTrack::Ranges offset is not 2c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
