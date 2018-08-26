#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDurabilityColorSet // Size: 0x10
{
public:
    TArray<struct FDurabilityColor> Colors; /* Ofs: 0x0 Size: 0x10 ArrayProperty TslGame.DurabilityColorSet.Colors */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDurabilityColorSet = sizeof(FDurabilityColorSet); // 16
    static_assert(sizeof(FDurabilityColorSet) == 0x10, "Size of FDurabilityColorSet is not correct.");
	auto constexpr FDurabilityColorSet_Colors_Offset = offsetof(FDurabilityColorSet, Colors);
	static_assert(FDurabilityColorSet_Colors_Offset == 0x0, "FDurabilityColorSet::Colors offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
