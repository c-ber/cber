#pragma once
#include "FFilterOptionPerAxis.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FConstraintDescription // Size: 0xD
{
public:
    bool bTranslation; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty AnimationCore.ConstraintDescription.bTranslation */
    bool bRotation; /* Ofs: 0x1 Size: 0x1 BitMask: 01 BoolProperty AnimationCore.ConstraintDescription.bRotation */
    bool bScale; /* Ofs: 0x2 Size: 0x1 BitMask: 01 BoolProperty AnimationCore.ConstraintDescription.bScale */
    bool bParent; /* Ofs: 0x3 Size: 0x1 BitMask: 01 BoolProperty AnimationCore.ConstraintDescription.bParent */
    FFilterOptionPerAxis TranslationAxes; /* Ofs: 0x4 Size: 0x3 StructProperty AnimationCore.ConstraintDescription.TranslationAxes */
    FFilterOptionPerAxis RotationAxes; /* Ofs: 0x7 Size: 0x3 StructProperty AnimationCore.ConstraintDescription.RotationAxes */
    FFilterOptionPerAxis ScaleAxes; /* Ofs: 0xA Size: 0x3 StructProperty AnimationCore.ConstraintDescription.ScaleAxes */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFConstraintDescription = sizeof(FConstraintDescription); // 13
    static_assert(sizeof(FConstraintDescription) == 0xD, "Size of FConstraintDescription is not correct.");
	auto constexpr FConstraintDescription_TranslationAxes_Offset = offsetof(FConstraintDescription, TranslationAxes);
	static_assert(FConstraintDescription_TranslationAxes_Offset == 0x4, "FConstraintDescription::TranslationAxes offset is not 4");
	auto constexpr FConstraintDescription_RotationAxes_Offset = offsetof(FConstraintDescription, RotationAxes);
	static_assert(FConstraintDescription_RotationAxes_Offset == 0x7, "FConstraintDescription::RotationAxes offset is not 7");
	auto constexpr FConstraintDescription_ScaleAxes_Offset = offsetof(FConstraintDescription, ScaleAxes);
	static_assert(FConstraintDescription_ScaleAxes_Offset == 0xa, "FConstraintDescription::ScaleAxes offset is not a");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
