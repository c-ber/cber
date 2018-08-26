#pragma once
#include "FNavAgentProperties.hpp"
#include "FColor.hpp"
#include "FVector.hpp"
#include "FStringClassReference.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNavDataConfig // Size: 0x50
 : public FNavAgentProperties // Size: 0x20
{
public:
    FName Name; /* Ofs: 0x20 Size: 0x8 NameProperty Engine.NavDataConfig.Name */
    FColor Color; /* Ofs: 0x28 Size: 0x4 StructProperty Engine.NavDataConfig.Color */
    FVector DefaultQueryExtent; /* Ofs: 0x2C Size: 0xC StructProperty Engine.NavDataConfig.DefaultQueryExtent */
    ExternalPtr<struct UClass> NavigationDataClass; /* Ofs: 0x38 Size: 0x8 ClassProperty Engine.NavDataConfig.NavigationDataClass */
    FStringClassReference NavigationDataClassName; /* Ofs: 0x40 Size: 0x10 StructProperty Engine.NavDataConfig.NavigationDataClassName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNavDataConfig = sizeof(FNavDataConfig); // 80
    static_assert(sizeof(FNavDataConfig) == 0x50, "Size of FNavDataConfig is not correct.");
	auto constexpr FNavDataConfig_Name_Offset = offsetof(FNavDataConfig, Name);
	static_assert(FNavDataConfig_Name_Offset == 0x20, "FNavDataConfig::Name offset is not 20");
	auto constexpr FNavDataConfig_Color_Offset = offsetof(FNavDataConfig, Color);
	static_assert(FNavDataConfig_Color_Offset == 0x28, "FNavDataConfig::Color offset is not 28");
	auto constexpr FNavDataConfig_DefaultQueryExtent_Offset = offsetof(FNavDataConfig, DefaultQueryExtent);
	static_assert(FNavDataConfig_DefaultQueryExtent_Offset == 0x2c, "FNavDataConfig::DefaultQueryExtent offset is not 2c");
	auto constexpr FNavDataConfig_NavigationDataClass_Offset = offsetof(FNavDataConfig, NavigationDataClass);
	static_assert(FNavDataConfig_NavigationDataClass_Offset == 0x38, "FNavDataConfig::NavigationDataClass offset is not 38");
	auto constexpr FNavDataConfig_NavigationDataClassName_Offset = offsetof(FNavDataConfig, NavigationDataClassName);
	static_assert(FNavDataConfig_NavigationDataClassName_Offset == 0x40, "FNavDataConfig::NavigationDataClassName offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
