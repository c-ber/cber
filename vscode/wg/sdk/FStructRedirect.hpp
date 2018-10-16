#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FStructRedirect // Size: 0x10
{
public:
    FName OldStructName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.StructRedirect.OldStructName */
    FName NewStructName; /* Ofs: 0x8 Size: 0x8 NameProperty Engine.StructRedirect.NewStructName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFStructRedirect = sizeof(FStructRedirect); // 16
    static_assert(sizeof(FStructRedirect) == 0x10, "Size of FStructRedirect is not correct.");
	auto constexpr FStructRedirect_OldStructName_Offset = offsetof(FStructRedirect, OldStructName);
	static_assert(FStructRedirect_OldStructName_Offset == 0x0, "FStructRedirect::OldStructName offset is not 0");
	auto constexpr FStructRedirect_NewStructName_Offset = offsetof(FStructRedirect, NewStructName);
	static_assert(FStructRedirect_NewStructName_Offset == 0x8, "FStructRedirect::NewStructName offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
