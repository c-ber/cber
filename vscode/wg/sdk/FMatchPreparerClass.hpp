#pragma once
#include "EMatchStartType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMatchPreparerClass // Size: 0x10
{
public:
    TEnumAsByte<enum EMatchStartType> Type; /* Ofs: 0x0 Size: 0x1 EnumProperty TslGame.MatchPreparerClass.Type */
    uint8_t UnknownData1[0x7];
    ExternalPtr<struct UClass> Class; /* Ofs: 0x8 Size: 0x8 ClassProperty TslGame.MatchPreparerClass.Class */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMatchPreparerClass = sizeof(FMatchPreparerClass); // 16
    static_assert(sizeof(FMatchPreparerClass) == 0x10, "Size of FMatchPreparerClass is not correct.");
	auto constexpr FMatchPreparerClass_Type_Offset = offsetof(FMatchPreparerClass, Type);
	static_assert(FMatchPreparerClass_Type_Offset == 0x0, "FMatchPreparerClass::Type offset is not 0");
	auto constexpr FMatchPreparerClass_Class_Offset = offsetof(FMatchPreparerClass, Class);
	static_assert(FMatchPreparerClass_Class_Offset == 0x8, "FMatchPreparerClass::Class offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
