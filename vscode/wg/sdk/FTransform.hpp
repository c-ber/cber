#pragma once
#include "FQuat.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTransform // Size: 0x30
{
public:
    FQuat Rotation; /* Ofs: 0x0 Size: 0x10 StructProperty CoreUObject.Transform.Rotation */
    FVector Translation; /* Ofs: 0x10 Size: 0xC StructProperty CoreUObject.Transform.Translation */
    uint8_t UnknownData1C[0x4];
    FVector Scale3D; /* Ofs: 0x20 Size: 0xC StructProperty CoreUObject.Transform.Scale3D */
    uint8_t UnknownData2C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTransform = sizeof(FTransform); // 48
    static_assert(sizeof(FTransform) == 0x30, "Size of FTransform is not correct.");
	auto constexpr FTransform_Rotation_Offset = offsetof(FTransform, Rotation);
	static_assert(FTransform_Rotation_Offset == 0x0, "FTransform::Rotation offset is not 0");
	auto constexpr FTransform_Translation_Offset = offsetof(FTransform, Translation);
	static_assert(FTransform_Translation_Offset == 0x10, "FTransform::Translation offset is not 10");
	auto constexpr FTransform_Scale3D_Offset = offsetof(FTransform, Scale3D);
	static_assert(FTransform_Scale3D_Offset == 0x20, "FTransform::Scale3D offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
