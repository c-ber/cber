#pragma once
#include "FLogBase.hpp"
#include "FWuLogCharacter.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogCheat // Size: 0xE8
 : public FLogBase // Size: 0x58
{
public:
    FWuLogCharacter Character; /* Ofs: 0x58 Size: 0x48 StructProperty TslGame.WuLogCheat.Character */
    FString CheatType; /* Ofs: 0xA0 Size: 0x10 StrProperty TslGame.WuLogCheat.CheatType */
    FString Description; /* Ofs: 0xB0 Size: 0x10 StrProperty TslGame.WuLogCheat.Description */
    float ParamFloat1; /* Ofs: 0xC0 Size: 0x4 FloatProperty TslGame.WuLogCheat.ParamFloat1 */
    float ParamFloat2; /* Ofs: 0xC4 Size: 0x4 FloatProperty TslGame.WuLogCheat.ParamFloat2 */
    FString ParamString1; /* Ofs: 0xC8 Size: 0x10 StrProperty TslGame.WuLogCheat.ParamString1 */
    FString ParamString2; /* Ofs: 0xD8 Size: 0x10 StrProperty TslGame.WuLogCheat.ParamString2 */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogCheat = sizeof(FWuLogCheat); // 232
    static_assert(sizeof(FWuLogCheat) == 0xE8, "Size of FWuLogCheat is not correct.");
	auto constexpr FWuLogCheat_Character_Offset = offsetof(FWuLogCheat, Character);
	static_assert(FWuLogCheat_Character_Offset == 0x58, "FWuLogCheat::Character offset is not 58");
	auto constexpr FWuLogCheat_CheatType_Offset = offsetof(FWuLogCheat, CheatType);
	static_assert(FWuLogCheat_CheatType_Offset == 0xa0, "FWuLogCheat::CheatType offset is not a0");
	auto constexpr FWuLogCheat_Description_Offset = offsetof(FWuLogCheat, Description);
	static_assert(FWuLogCheat_Description_Offset == 0xb0, "FWuLogCheat::Description offset is not b0");
	auto constexpr FWuLogCheat_ParamFloat1_Offset = offsetof(FWuLogCheat, ParamFloat1);
	static_assert(FWuLogCheat_ParamFloat1_Offset == 0xc0, "FWuLogCheat::ParamFloat1 offset is not c0");
	auto constexpr FWuLogCheat_ParamFloat2_Offset = offsetof(FWuLogCheat, ParamFloat2);
	static_assert(FWuLogCheat_ParamFloat2_Offset == 0xc4, "FWuLogCheat::ParamFloat2 offset is not c4");
	auto constexpr FWuLogCheat_ParamString1_Offset = offsetof(FWuLogCheat, ParamString1);
	static_assert(FWuLogCheat_ParamString1_Offset == 0xc8, "FWuLogCheat::ParamString1 offset is not c8");
	auto constexpr FWuLogCheat_ParamString2_Offset = offsetof(FWuLogCheat, ParamString2);
	static_assert(FWuLogCheat_ParamString2_Offset == 0xd8, "FWuLogCheat::ParamString2 offset is not d8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
