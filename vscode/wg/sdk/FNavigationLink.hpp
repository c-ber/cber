#pragma once
#include "FNavigationLinkBase.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNavigationLink // Size: 0x50
 : public FNavigationLinkBase // Size: 0x38
{
public:
    FVector Left; /* Ofs: 0x38 Size: 0xC StructProperty Engine.NavigationLink.Left */
    FVector Right; /* Ofs: 0x44 Size: 0xC StructProperty Engine.NavigationLink.Right */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNavigationLink = sizeof(FNavigationLink); // 80
    static_assert(sizeof(FNavigationLink) == 0x50, "Size of FNavigationLink is not correct.");
	auto constexpr FNavigationLink_Left_Offset = offsetof(FNavigationLink, Left);
	static_assert(FNavigationLink_Left_Offset == 0x38, "FNavigationLink::Left offset is not 38");
	auto constexpr FNavigationLink_Right_Offset = offsetof(FNavigationLink, Right);
	static_assert(FNavigationLink_Right_Offset == 0x44, "FNavigationLink::Right offset is not 44");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
