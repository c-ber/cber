#pragma once
#include "FInputAxisProperties.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FInputAxisConfigEntry // Size: 0x28
{
public:
    FName AxisKeyName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.InputAxisConfigEntry.AxisKeyName */
    FInputAxisProperties AxisProperties; /* Ofs: 0x8 Size: 0x20 StructProperty Engine.InputAxisConfigEntry.AxisProperties */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFInputAxisConfigEntry = sizeof(FInputAxisConfigEntry); // 40
    static_assert(sizeof(FInputAxisConfigEntry) == 0x28, "Size of FInputAxisConfigEntry is not correct.");
	auto constexpr FInputAxisConfigEntry_AxisKeyName_Offset = offsetof(FInputAxisConfigEntry, AxisKeyName);
	static_assert(FInputAxisConfigEntry_AxisKeyName_Offset == 0x0, "FInputAxisConfigEntry::AxisKeyName offset is not 0");
	auto constexpr FInputAxisConfigEntry_AxisProperties_Offset = offsetof(FInputAxisConfigEntry, AxisProperties);
	static_assert(FInputAxisConfigEntry_AxisProperties_Offset == 0x8, "FInputAxisConfigEntry::AxisProperties offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
