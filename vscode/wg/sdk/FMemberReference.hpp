#pragma once
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMemberReference // Size: 0x38
{
public:
    ExternalPtr<struct UObject> MemberParent; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.MemberReference.MemberParent */
    FString MemberScope; /* Ofs: 0x8 Size: 0x10 StrProperty Engine.MemberReference.MemberScope */
    FName MemberName; /* Ofs: 0x18 Size: 0x8 NameProperty Engine.MemberReference.MemberName */
    FGuid MemberGuid; /* Ofs: 0x20 Size: 0x10 StructProperty Engine.MemberReference.MemberGuid */
    bool bSelfContext; /* Ofs: 0x30 Size: 0x1 BitMask: 01 BoolProperty Engine.MemberReference.bSelfContext */
    bool bWasDeprecated; /* Ofs: 0x31 Size: 0x1 BitMask: 01 BoolProperty Engine.MemberReference.bWasDeprecated */
    uint8_t UnknownData32[0x6];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMemberReference = sizeof(FMemberReference); // 56
    static_assert(sizeof(FMemberReference) == 0x38, "Size of FMemberReference is not correct.");
	auto constexpr FMemberReference_MemberParent_Offset = offsetof(FMemberReference, MemberParent);
	static_assert(FMemberReference_MemberParent_Offset == 0x0, "FMemberReference::MemberParent offset is not 0");
	auto constexpr FMemberReference_MemberScope_Offset = offsetof(FMemberReference, MemberScope);
	static_assert(FMemberReference_MemberScope_Offset == 0x8, "FMemberReference::MemberScope offset is not 8");
	auto constexpr FMemberReference_MemberName_Offset = offsetof(FMemberReference, MemberName);
	static_assert(FMemberReference_MemberName_Offset == 0x18, "FMemberReference::MemberName offset is not 18");
	auto constexpr FMemberReference_MemberGuid_Offset = offsetof(FMemberReference, MemberGuid);
	static_assert(FMemberReference_MemberGuid_Offset == 0x20, "FMemberReference::MemberGuid offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
