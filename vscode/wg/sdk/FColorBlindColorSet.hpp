#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FColorBlindColorSet // Size: 0x10
{
public:
    TArray<struct FColorBlindColorData> ColorSet; /* Ofs: 0x0 Size: 0x10 ArrayProperty TslGame.ColorBlindColorSet.ColorSet */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFColorBlindColorSet = sizeof(FColorBlindColorSet); // 16
    static_assert(sizeof(FColorBlindColorSet) == 0x10, "Size of FColorBlindColorSet is not correct.");
	auto constexpr FColorBlindColorSet_ColorSet_Offset = offsetof(FColorBlindColorSet, ColorSet);
	static_assert(FColorBlindColorSet_ColorSet_Offset == 0x0, "FColorBlindColorSet::ColorSet offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
