#pragma once
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSubsurfaceProfileStruct // Size: 0x24
{
public:
    float ScatterRadius; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.SubsurfaceProfileStruct.ScatterRadius */
    FLinearColor SubsurfaceColor; /* Ofs: 0x4 Size: 0x10 StructProperty Engine.SubsurfaceProfileStruct.SubsurfaceColor */
    FLinearColor FalloffColor; /* Ofs: 0x14 Size: 0x10 StructProperty Engine.SubsurfaceProfileStruct.FalloffColor */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSubsurfaceProfileStruct = sizeof(FSubsurfaceProfileStruct); // 36
    static_assert(sizeof(FSubsurfaceProfileStruct) == 0x24, "Size of FSubsurfaceProfileStruct is not correct.");
	auto constexpr FSubsurfaceProfileStruct_ScatterRadius_Offset = offsetof(FSubsurfaceProfileStruct, ScatterRadius);
	static_assert(FSubsurfaceProfileStruct_ScatterRadius_Offset == 0x0, "FSubsurfaceProfileStruct::ScatterRadius offset is not 0");
	auto constexpr FSubsurfaceProfileStruct_SubsurfaceColor_Offset = offsetof(FSubsurfaceProfileStruct, SubsurfaceColor);
	static_assert(FSubsurfaceProfileStruct_SubsurfaceColor_Offset == 0x4, "FSubsurfaceProfileStruct::SubsurfaceColor offset is not 4");
	auto constexpr FSubsurfaceProfileStruct_FalloffColor_Offset = offsetof(FSubsurfaceProfileStruct, FalloffColor);
	static_assert(FSubsurfaceProfileStruct_FalloffColor_Offset == 0x14, "FSubsurfaceProfileStruct::FalloffColor offset is not 14");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
