#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWeightedBlendables // Size: 0x10
{
public:
    TArray<struct FWeightedBlendable> Array; /* Ofs: 0x0 Size: 0x10 ArrayProperty Engine.WeightedBlendables.Array */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWeightedBlendables = sizeof(FWeightedBlendables); // 16
    static_assert(sizeof(FWeightedBlendables) == 0x10, "Size of FWeightedBlendables is not correct.");
	auto constexpr FWeightedBlendables_Array_Offset = offsetof(FWeightedBlendables, Array);
	static_assert(FWeightedBlendables_Array_Offset == 0x0, "FWeightedBlendables::Array offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
