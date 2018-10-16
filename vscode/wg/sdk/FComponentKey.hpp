#pragma once
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FComponentKey // Size: 0x20
{
public:
    ExternalPtr<struct UClass> OwnerClass; /* Ofs: 0x0 Size: 0x8 ClassProperty Engine.ComponentKey.OwnerClass */
    FName SCSVariableName; /* Ofs: 0x8 Size: 0x8 NameProperty Engine.ComponentKey.SCSVariableName */
    FGuid AssociatedGuid; /* Ofs: 0x10 Size: 0x10 StructProperty Engine.ComponentKey.AssociatedGuid */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFComponentKey = sizeof(FComponentKey); // 32
    static_assert(sizeof(FComponentKey) == 0x20, "Size of FComponentKey is not correct.");
	auto constexpr FComponentKey_OwnerClass_Offset = offsetof(FComponentKey, OwnerClass);
	static_assert(FComponentKey_OwnerClass_Offset == 0x0, "FComponentKey::OwnerClass offset is not 0");
	auto constexpr FComponentKey_SCSVariableName_Offset = offsetof(FComponentKey, SCSVariableName);
	static_assert(FComponentKey_SCSVariableName_Offset == 0x8, "FComponentKey::SCSVariableName offset is not 8");
	auto constexpr FComponentKey_AssociatedGuid_Offset = offsetof(FComponentKey, AssociatedGuid);
	static_assert(FComponentKey_AssociatedGuid_Offset == 0x10, "FComponentKey::AssociatedGuid offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
