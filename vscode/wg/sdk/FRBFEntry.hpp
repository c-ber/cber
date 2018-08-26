#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRBFEntry // Size: 0x10
{
public:
    TArray<float> Values; /* Ofs: 0x0 Size: 0x10 ArrayProperty AnimGraphRuntime.RBFEntry.Values */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRBFEntry = sizeof(FRBFEntry); // 16
    static_assert(sizeof(FRBFEntry) == 0x10, "Size of FRBFEntry is not correct.");
	auto constexpr FRBFEntry_Values_Offset = offsetof(FRBFEntry, Values);
	static_assert(FRBFEntry_Values_Offset == 0x0, "FRBFEntry::Values offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
