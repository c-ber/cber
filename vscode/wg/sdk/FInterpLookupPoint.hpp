#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FInterpLookupPoint // Size: 0x10
{
public:
    FName GroupName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.InterpLookupPoint.GroupName */
    float Time; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.InterpLookupPoint.Time */
    uint8_t UnknownDataC[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFInterpLookupPoint = sizeof(FInterpLookupPoint); // 16
    static_assert(sizeof(FInterpLookupPoint) == 0x10, "Size of FInterpLookupPoint is not correct.");
	auto constexpr FInterpLookupPoint_GroupName_Offset = offsetof(FInterpLookupPoint, GroupName);
	static_assert(FInterpLookupPoint_GroupName_Offset == 0x0, "FInterpLookupPoint::GroupName offset is not 0");
	auto constexpr FInterpLookupPoint_Time_Offset = offsetof(FInterpLookupPoint, Time);
	static_assert(FInterpLookupPoint_Time_Offset == 0x8, "FInterpLookupPoint::Time offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
