#pragma once
#include "FDirectoryPath.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBuildPromotionNewProjectSettings // Size: 0x20
{
public:
    FDirectoryPath NewProjectFolderOverride; /* Ofs: 0x0 Size: 0x10 StructProperty Engine.BuildPromotionNewProjectSettings.NewProjectFolderOverride */
    FString NewProjectNameOverride; /* Ofs: 0x10 Size: 0x10 StrProperty Engine.BuildPromotionNewProjectSettings.NewProjectNameOverride */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBuildPromotionNewProjectSettings = sizeof(FBuildPromotionNewProjectSettings); // 32
    static_assert(sizeof(FBuildPromotionNewProjectSettings) == 0x20, "Size of FBuildPromotionNewProjectSettings is not correct.");
	auto constexpr FBuildPromotionNewProjectSettings_NewProjectFolderOverride_Offset = offsetof(FBuildPromotionNewProjectSettings, NewProjectFolderOverride);
	static_assert(FBuildPromotionNewProjectSettings_NewProjectFolderOverride_Offset == 0x0, "FBuildPromotionNewProjectSettings::NewProjectFolderOverride offset is not 0");
	auto constexpr FBuildPromotionNewProjectSettings_NewProjectNameOverride_Offset = offsetof(FBuildPromotionNewProjectSettings, NewProjectNameOverride);
	static_assert(FBuildPromotionNewProjectSettings_NewProjectNameOverride_Offset == 0x10, "FBuildPromotionNewProjectSettings::NewProjectNameOverride offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
