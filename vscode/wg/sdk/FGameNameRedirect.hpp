#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FGameNameRedirect // Size: 0x10
{
public:
    FName OldGameName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.GameNameRedirect.OldGameName */
    FName NewGameName; /* Ofs: 0x8 Size: 0x8 NameProperty Engine.GameNameRedirect.NewGameName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFGameNameRedirect = sizeof(FGameNameRedirect); // 16
    static_assert(sizeof(FGameNameRedirect) == 0x10, "Size of FGameNameRedirect is not correct.");
	auto constexpr FGameNameRedirect_OldGameName_Offset = offsetof(FGameNameRedirect, OldGameName);
	static_assert(FGameNameRedirect_OldGameName_Offset == 0x0, "FGameNameRedirect::OldGameName offset is not 0");
	auto constexpr FGameNameRedirect_NewGameName_Offset = offsetof(FGameNameRedirect, NewGameName);
	static_assert(FGameNameRedirect_NewGameName_Offset == 0x8, "FGameNameRedirect::NewGameName offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
