#pragma once
#include "EPhysicalSurface.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPhysicalSurfaceName // Size: 0x10
{
public:
    TEnumAsByte<enum EPhysicalSurface> Type; /* Ofs: 0x0 Size: 0x1 ByteProperty Engine.PhysicalSurfaceName.Type */
    uint8_t UnknownData1[0x7];
    FName Name; /* Ofs: 0x8 Size: 0x8 NameProperty Engine.PhysicalSurfaceName.Name */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPhysicalSurfaceName = sizeof(FPhysicalSurfaceName); // 16
    static_assert(sizeof(FPhysicalSurfaceName) == 0x10, "Size of FPhysicalSurfaceName is not correct.");
	auto constexpr FPhysicalSurfaceName_Type_Offset = offsetof(FPhysicalSurfaceName, Type);
	static_assert(FPhysicalSurfaceName_Type_Offset == 0x0, "FPhysicalSurfaceName::Type offset is not 0");
	auto constexpr FPhysicalSurfaceName_Name_Offset = offsetof(FPhysicalSurfaceName, Name);
	static_assert(FPhysicalSurfaceName_Name_Offset == 0x8, "FPhysicalSurfaceName::Name offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
