#pragma once
#include "EKeyHintType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslKeyHintData // Size: 0x18
{
public:
    TEnumAsByte<enum EKeyHintType> KeyHintType; /* Ofs: 0x0 Size: 0x1 EnumProperty TslGame.TslKeyHintData.KeyHintType */
    uint8_t UnknownData1[0x3];
    int32_t Priority; /* Ofs: 0x4 Size: 0x4 IntProperty TslGame.TslKeyHintData.Priority */
    float MaximumShowTime; /* Ofs: 0x8 Size: 0x4 FloatProperty TslGame.TslKeyHintData.MaximumShowTime */
    float ElapsedTime; /* Ofs: 0xC Size: 0x4 FloatProperty TslGame.TslKeyHintData.ElapsedTime */
    ExternalPtr<struct UTslKeyHintChecker> KeyHintChecker; /* Ofs: 0x10 Size: 0x8 ObjectProperty TslGame.TslKeyHintData.KeyHintChecker */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslKeyHintData = sizeof(FTslKeyHintData); // 24
    static_assert(sizeof(FTslKeyHintData) == 0x18, "Size of FTslKeyHintData is not correct.");
	auto constexpr FTslKeyHintData_KeyHintType_Offset = offsetof(FTslKeyHintData, KeyHintType);
	static_assert(FTslKeyHintData_KeyHintType_Offset == 0x0, "FTslKeyHintData::KeyHintType offset is not 0");
	auto constexpr FTslKeyHintData_Priority_Offset = offsetof(FTslKeyHintData, Priority);
	static_assert(FTslKeyHintData_Priority_Offset == 0x4, "FTslKeyHintData::Priority offset is not 4");
	auto constexpr FTslKeyHintData_MaximumShowTime_Offset = offsetof(FTslKeyHintData, MaximumShowTime);
	static_assert(FTslKeyHintData_MaximumShowTime_Offset == 0x8, "FTslKeyHintData::MaximumShowTime offset is not 8");
	auto constexpr FTslKeyHintData_ElapsedTime_Offset = offsetof(FTslKeyHintData, ElapsedTime);
	static_assert(FTslKeyHintData_ElapsedTime_Offset == 0xc, "FTslKeyHintData::ElapsedTime offset is not c");
	auto constexpr FTslKeyHintData_KeyHintChecker_Offset = offsetof(FTslKeyHintData, KeyHintChecker);
	static_assert(FTslKeyHintData_KeyHintChecker_Offset == 0x10, "FTslKeyHintData::KeyHintChecker offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
