#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRedirector // Size: 0x10
{
public:
    FName OldName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.Redirector.OldName */
    FName NewName; /* Ofs: 0x8 Size: 0x8 NameProperty Engine.Redirector.NewName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRedirector = sizeof(FRedirector); // 16
    static_assert(sizeof(FRedirector) == 0x10, "Size of FRedirector is not correct.");
	auto constexpr FRedirector_OldName_Offset = offsetof(FRedirector, OldName);
	static_assert(FRedirector_OldName_Offset == 0x0, "FRedirector::OldName offset is not 0");
	auto constexpr FRedirector_NewName_Offset = offsetof(FRedirector, NewName);
	static_assert(FRedirector_NewName_Offset == 0x8, "FRedirector::NewName offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
