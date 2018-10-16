#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuStringStringPair // Size: 0x20
{
public:
    FString First; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.WuStringStringPair.First */
    FString second; /* Ofs: 0x10 Size: 0x10 StrProperty TslGame.WuStringStringPair.second */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuStringStringPair = sizeof(FWuStringStringPair); // 32
    static_assert(sizeof(FWuStringStringPair) == 0x20, "Size of FWuStringStringPair is not correct.");
	auto constexpr FWuStringStringPair_First_Offset = offsetof(FWuStringStringPair, First);
	static_assert(FWuStringStringPair_First_Offset == 0x0, "FWuStringStringPair::First offset is not 0");
	auto constexpr FWuStringStringPair_second_Offset = offsetof(FWuStringStringPair, second);
	static_assert(FWuStringStringPair_second_Offset == 0x10, "FWuStringStringPair::second offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
