#pragma once
#include "EEnvDirection.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FEnvDirection // Size: 0x20
{
public:
    ExternalPtr<struct UClass> LineFrom; /* Ofs: 0x0 Size: 0x8 ClassProperty AIModule.EnvDirection.LineFrom */
    ExternalPtr<struct UClass> LineTo; /* Ofs: 0x8 Size: 0x8 ClassProperty AIModule.EnvDirection.LineTo */
    ExternalPtr<struct UClass> Rotation; /* Ofs: 0x10 Size: 0x8 ClassProperty AIModule.EnvDirection.Rotation */
    TEnumAsByte<enum EEnvDirection> DirMode; /* Ofs: 0x18 Size: 0x1 ByteProperty AIModule.EnvDirection.DirMode */
    uint8_t UnknownData19[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFEnvDirection = sizeof(FEnvDirection); // 32
    static_assert(sizeof(FEnvDirection) == 0x20, "Size of FEnvDirection is not correct.");
	auto constexpr FEnvDirection_LineFrom_Offset = offsetof(FEnvDirection, LineFrom);
	static_assert(FEnvDirection_LineFrom_Offset == 0x0, "FEnvDirection::LineFrom offset is not 0");
	auto constexpr FEnvDirection_LineTo_Offset = offsetof(FEnvDirection, LineTo);
	static_assert(FEnvDirection_LineTo_Offset == 0x8, "FEnvDirection::LineTo offset is not 8");
	auto constexpr FEnvDirection_Rotation_Offset = offsetof(FEnvDirection, Rotation);
	static_assert(FEnvDirection_Rotation_Offset == 0x10, "FEnvDirection::Rotation offset is not 10");
	auto constexpr FEnvDirection_DirMode_Offset = offsetof(FEnvDirection, DirMode);
	static_assert(FEnvDirection_DirMode_Offset == 0x18, "FEnvDirection::DirMode offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
