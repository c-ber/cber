#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FClothConstraintSetup // Size: 0x10
{
public:
    float Stiffness; /* Ofs: 0x0 Size: 0x4 FloatProperty ClothingSystemRuntime.ClothConstraintSetup.Stiffness */
    float StiffnessMultiplier; /* Ofs: 0x4 Size: 0x4 FloatProperty ClothingSystemRuntime.ClothConstraintSetup.StiffnessMultiplier */
    float StretchLimit; /* Ofs: 0x8 Size: 0x4 FloatProperty ClothingSystemRuntime.ClothConstraintSetup.StretchLimit */
    float CompressionLimit; /* Ofs: 0xC Size: 0x4 FloatProperty ClothingSystemRuntime.ClothConstraintSetup.CompressionLimit */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFClothConstraintSetup = sizeof(FClothConstraintSetup); // 16
    static_assert(sizeof(FClothConstraintSetup) == 0x10, "Size of FClothConstraintSetup is not correct.");
	auto constexpr FClothConstraintSetup_Stiffness_Offset = offsetof(FClothConstraintSetup, Stiffness);
	static_assert(FClothConstraintSetup_Stiffness_Offset == 0x0, "FClothConstraintSetup::Stiffness offset is not 0");
	auto constexpr FClothConstraintSetup_StiffnessMultiplier_Offset = offsetof(FClothConstraintSetup, StiffnessMultiplier);
	static_assert(FClothConstraintSetup_StiffnessMultiplier_Offset == 0x4, "FClothConstraintSetup::StiffnessMultiplier offset is not 4");
	auto constexpr FClothConstraintSetup_StretchLimit_Offset = offsetof(FClothConstraintSetup, StretchLimit);
	static_assert(FClothConstraintSetup_StretchLimit_Offset == 0x8, "FClothConstraintSetup::StretchLimit offset is not 8");
	auto constexpr FClothConstraintSetup_CompressionLimit_Offset = offsetof(FClothConstraintSetup, CompressionLimit);
	static_assert(FClothConstraintSetup_CompressionLimit_Offset == 0xc, "FClothConstraintSetup::CompressionLimit offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
