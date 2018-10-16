#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FStructBoneOverride // Size: 0x10
{
public:
    FName BoneName; /* Ofs: 0x0 Size: 0x8 NameProperty OceanPlugin.StructBoneOverride.BoneName */
    float Density; /* Ofs: 0x8 Size: 0x4 FloatProperty OceanPlugin.StructBoneOverride.Density */
    float TestRadius; /* Ofs: 0xC Size: 0x4 FloatProperty OceanPlugin.StructBoneOverride.TestRadius */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFStructBoneOverride = sizeof(FStructBoneOverride); // 16
    static_assert(sizeof(FStructBoneOverride) == 0x10, "Size of FStructBoneOverride is not correct.");
	auto constexpr FStructBoneOverride_BoneName_Offset = offsetof(FStructBoneOverride, BoneName);
	static_assert(FStructBoneOverride_BoneName_Offset == 0x0, "FStructBoneOverride::BoneName offset is not 0");
	auto constexpr FStructBoneOverride_Density_Offset = offsetof(FStructBoneOverride, Density);
	static_assert(FStructBoneOverride_Density_Offset == 0x8, "FStructBoneOverride::Density offset is not 8");
	auto constexpr FStructBoneOverride_TestRadius_Offset = offsetof(FStructBoneOverride, TestRadius);
	static_assert(FStructBoneOverride_TestRadius_Offset == 0xc, "FStructBoneOverride::TestRadius offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
