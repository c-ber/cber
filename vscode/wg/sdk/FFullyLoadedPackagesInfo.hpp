#pragma once
#include "EFullyLoadPackageType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FFullyLoadedPackagesInfo // Size: 0x38
{
public:
    TEnumAsByte<enum EFullyLoadPackageType> FullyLoadType; /* Ofs: 0x0 Size: 0x1 ByteProperty Engine.FullyLoadedPackagesInfo.FullyLoadType */
    uint8_t UnknownData1[0x7];
    FString Tag; /* Ofs: 0x8 Size: 0x10 StrProperty Engine.FullyLoadedPackagesInfo.Tag */
    TArray<struct FName> PackagesToLoad; /* Ofs: 0x18 Size: 0x10 ArrayProperty Engine.FullyLoadedPackagesInfo.PackagesToLoad */
    TArray<ExternalPtr<struct UObject>> LoadedObjects; /* Ofs: 0x28 Size: 0x10 ArrayProperty Engine.FullyLoadedPackagesInfo.LoadedObjects */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFFullyLoadedPackagesInfo = sizeof(FFullyLoadedPackagesInfo); // 56
    static_assert(sizeof(FFullyLoadedPackagesInfo) == 0x38, "Size of FFullyLoadedPackagesInfo is not correct.");
	auto constexpr FFullyLoadedPackagesInfo_FullyLoadType_Offset = offsetof(FFullyLoadedPackagesInfo, FullyLoadType);
	static_assert(FFullyLoadedPackagesInfo_FullyLoadType_Offset == 0x0, "FFullyLoadedPackagesInfo::FullyLoadType offset is not 0");
	auto constexpr FFullyLoadedPackagesInfo_Tag_Offset = offsetof(FFullyLoadedPackagesInfo, Tag);
	static_assert(FFullyLoadedPackagesInfo_Tag_Offset == 0x8, "FFullyLoadedPackagesInfo::Tag offset is not 8");
	auto constexpr FFullyLoadedPackagesInfo_PackagesToLoad_Offset = offsetof(FFullyLoadedPackagesInfo, PackagesToLoad);
	static_assert(FFullyLoadedPackagesInfo_PackagesToLoad_Offset == 0x18, "FFullyLoadedPackagesInfo::PackagesToLoad offset is not 18");
	auto constexpr FFullyLoadedPackagesInfo_LoadedObjects_Offset = offsetof(FFullyLoadedPackagesInfo, LoadedObjects);
	static_assert(FFullyLoadedPackagesInfo_LoadedObjects_Offset == 0x28, "FFullyLoadedPackagesInfo::LoadedObjects offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
