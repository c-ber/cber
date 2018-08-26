#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRandomStream // Size: 0x8
{
public:
    int32_t InitialSeed; /* Ofs: 0x0 Size: 0x4 IntProperty CoreUObject.RandomStream.InitialSeed */
    int32_t Seed; /* Ofs: 0x4 Size: 0x4 IntProperty CoreUObject.RandomStream.Seed */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRandomStream = sizeof(FRandomStream); // 8
    static_assert(sizeof(FRandomStream) == 0x8, "Size of FRandomStream is not correct.");
	auto constexpr FRandomStream_InitialSeed_Offset = offsetof(FRandomStream, InitialSeed);
	static_assert(FRandomStream_InitialSeed_Offset == 0x0, "FRandomStream::InitialSeed offset is not 0");
	auto constexpr FRandomStream_Seed_Offset = offsetof(FRandomStream, Seed);
	static_assert(FRandomStream_Seed_Offset == 0x4, "FRandomStream::Seed offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
