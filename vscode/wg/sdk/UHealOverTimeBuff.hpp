#pragma once
#include "UTslBuff.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UHealOverTimeBuff // Size: 0x480
	: public UTslBuff // Size: 0x470
{
private:
	typedef UHealOverTimeBuff t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1336); // id32("Class TslGame.HealOverTimeBuff")
		return ptr;
	}
//	float HealPerTick; /* Ofs: 0x468 Size: 0x4 - FloatProperty TslGame.HealOverTimeBuff.HealPerTick */
//	float HealLimit; /* Ofs: 0x46C Size: 0x4 - FloatProperty TslGame.HealOverTimeBuff.HealLimit */
	int32_t BuffCount; /* Ofs: 0x470 Size: 0x4 - IntProperty TslGame.HealOverTimeBuff.BuffCount */
	uint8_t UnknownData474[0xC];


//	inline bool SetHealPerTick(t_structHelper inst, float value) { inst.WriteOffset(0x468, value); }
//	inline bool SetHealLimit(t_structHelper inst, float value) { inst.WriteOffset(0x46C, value); }
	inline bool SetBuffCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x470, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUHealOverTimeBuff = sizeof(UHealOverTimeBuff); // 1152
    static_assert(sizeof(UHealOverTimeBuff) == 0x480, "Size of UHealOverTimeBuff is not correct.");
//	auto constexpr UHealOverTimeBuff_HealPerTick_Offset = offsetof(UHealOverTimeBuff, HealPerTick);
//	static_assert(UHealOverTimeBuff_HealPerTick_Offset == 0x468, "UHealOverTimeBuff::HealPerTick offset is not 468");
//	auto constexpr UHealOverTimeBuff_HealLimit_Offset = offsetof(UHealOverTimeBuff, HealLimit);
//	static_assert(UHealOverTimeBuff_HealLimit_Offset == 0x46c, "UHealOverTimeBuff::HealLimit offset is not 46c");
	auto constexpr UHealOverTimeBuff_BuffCount_Offset = offsetof(UHealOverTimeBuff, BuffCount);
	static_assert(UHealOverTimeBuff_BuffCount_Offset == 0x470, "UHealOverTimeBuff::BuffCount offset is not 470");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
