#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FHoldInputHelper // Size: 0x18
{
public:
    uint8_t UnknownData0[0x8];
    FName ActionName; /* Ofs: 0x8 Size: 0x8 NameProperty TslGame.HoldInputHelper.ActionName */
    uint8_t UnknownData10[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFHoldInputHelper = sizeof(FHoldInputHelper); // 24
    static_assert(sizeof(FHoldInputHelper) == 0x18, "Size of FHoldInputHelper is not correct.");
	auto constexpr FHoldInputHelper_ActionName_Offset = offsetof(FHoldInputHelper, ActionName);
	static_assert(FHoldInputHelper_ActionName_Offset == 0x8, "FHoldInputHelper::ActionName offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
