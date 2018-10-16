#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBoolTrackKey // Size: 0x8
{
public:
    float Time; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.BoolTrackKey.Time */
    bool Value; /* Ofs: 0x4 Size: 0x1 BitMask: 01 BoolProperty Engine.BoolTrackKey.Value */
    uint8_t UnknownData5[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBoolTrackKey = sizeof(FBoolTrackKey); // 8
    static_assert(sizeof(FBoolTrackKey) == 0x8, "Size of FBoolTrackKey is not correct.");
	auto constexpr FBoolTrackKey_Time_Offset = offsetof(FBoolTrackKey, Time);
	static_assert(FBoolTrackKey_Time_Offset == 0x0, "FBoolTrackKey::Time offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
