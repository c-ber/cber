#pragma once
#include "FColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FStatColorMapEntry // Size: 0x8
{
public:
    float In; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.StatColorMapEntry.In */
    FColor Out; /* Ofs: 0x4 Size: 0x4 StructProperty Engine.StatColorMapEntry.Out */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFStatColorMapEntry = sizeof(FStatColorMapEntry); // 8
    static_assert(sizeof(FStatColorMapEntry) == 0x8, "Size of FStatColorMapEntry is not correct.");
	auto constexpr FStatColorMapEntry_In_Offset = offsetof(FStatColorMapEntry, In);
	static_assert(FStatColorMapEntry_In_Offset == 0x0, "FStatColorMapEntry::In offset is not 0");
	auto constexpr FStatColorMapEntry_Out_Offset = offsetof(FStatColorMapEntry, Out);
	static_assert(FStatColorMapEntry_Out_Offset == 0x4, "FStatColorMapEntry::Out offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
