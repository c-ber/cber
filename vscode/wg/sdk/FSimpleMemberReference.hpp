#pragma once
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSimpleMemberReference // Size: 0x20
{
public:
    ExternalPtr<struct UObject> MemberParent; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.SimpleMemberReference.MemberParent */
    FName MemberName; /* Ofs: 0x8 Size: 0x8 NameProperty Engine.SimpleMemberReference.MemberName */
    FGuid MemberGuid; /* Ofs: 0x10 Size: 0x10 StructProperty Engine.SimpleMemberReference.MemberGuid */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSimpleMemberReference = sizeof(FSimpleMemberReference); // 32
    static_assert(sizeof(FSimpleMemberReference) == 0x20, "Size of FSimpleMemberReference is not correct.");
	auto constexpr FSimpleMemberReference_MemberParent_Offset = offsetof(FSimpleMemberReference, MemberParent);
	static_assert(FSimpleMemberReference_MemberParent_Offset == 0x0, "FSimpleMemberReference::MemberParent offset is not 0");
	auto constexpr FSimpleMemberReference_MemberName_Offset = offsetof(FSimpleMemberReference, MemberName);
	static_assert(FSimpleMemberReference_MemberName_Offset == 0x8, "FSimpleMemberReference::MemberName offset is not 8");
	auto constexpr FSimpleMemberReference_MemberGuid_Offset = offsetof(FSimpleMemberReference, MemberGuid);
	static_assert(FSimpleMemberReference_MemberGuid_Offset == 0x10, "FSimpleMemberReference::MemberGuid offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
