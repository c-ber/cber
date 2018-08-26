#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAssetManagerRedirect // Size: 0x20
{
public:
    FString Old; /* Ofs: 0x0 Size: 0x10 StrProperty Engine.AssetManagerRedirect.Old */
    FString New; /* Ofs: 0x10 Size: 0x10 StrProperty Engine.AssetManagerRedirect.New */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAssetManagerRedirect = sizeof(FAssetManagerRedirect); // 32
    static_assert(sizeof(FAssetManagerRedirect) == 0x20, "Size of FAssetManagerRedirect is not correct.");
	auto constexpr FAssetManagerRedirect_Old_Offset = offsetof(FAssetManagerRedirect, Old);
	static_assert(FAssetManagerRedirect_Old_Offset == 0x0, "FAssetManagerRedirect::Old offset is not 0");
	auto constexpr FAssetManagerRedirect_New_Offset = offsetof(FAssetManagerRedirect, New);
	static_assert(FAssetManagerRedirect_New_Offset == 0x10, "FAssetManagerRedirect::New offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
