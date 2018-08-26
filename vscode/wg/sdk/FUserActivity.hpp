#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FUserActivity // Size: 0x18
{
public:
    FString ActionName; /* Ofs: 0x0 Size: 0x10 StrProperty Engine.UserActivity.ActionName */
    uint8_t UnknownData10[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFUserActivity = sizeof(FUserActivity); // 24
    static_assert(sizeof(FUserActivity) == 0x18, "Size of FUserActivity is not correct.");
	auto constexpr FUserActivity_ActionName_Offset = offsetof(FUserActivity, ActionName);
	static_assert(FUserActivity_ActionName_Offset == 0x0, "FUserActivity::ActionName offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
