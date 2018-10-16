#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPluginRedirect // Size: 0x20
{
public:
    FString OldPluginName; /* Ofs: 0x0 Size: 0x10 StrProperty Engine.PluginRedirect.OldPluginName */
    FString NewPluginName; /* Ofs: 0x10 Size: 0x10 StrProperty Engine.PluginRedirect.NewPluginName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPluginRedirect = sizeof(FPluginRedirect); // 32
    static_assert(sizeof(FPluginRedirect) == 0x20, "Size of FPluginRedirect is not correct.");
	auto constexpr FPluginRedirect_OldPluginName_Offset = offsetof(FPluginRedirect, OldPluginName);
	static_assert(FPluginRedirect_OldPluginName_Offset == 0x0, "FPluginRedirect::OldPluginName offset is not 0");
	auto constexpr FPluginRedirect_NewPluginName_Offset = offsetof(FPluginRedirect, NewPluginName);
	static_assert(FPluginRedirect_NewPluginName_Offset == 0x10, "FPluginRedirect::NewPluginName offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
