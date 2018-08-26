#pragma once
#include "UBTTaskNode.hpp"
#include "FGameplayTag.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTTask_SetTagCooldown // Size: 0x88
	: public UBTTaskNode // Size: 0x78
{
private:
	typedef UBTTask_SetTagCooldown t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(609); // id32("Class AIModule.BTTask_SetTagCooldown")
		return ptr;
	}
	FGameplayTag CooldownTag; /* Ofs: 0x78 Size: 0x8 - StructProperty AIModule.BTTask_SetTagCooldown.CooldownTag */
	uint8_t boolField80;
	uint8_t UnknownData81[0x3];
	float CooldownDuration; /* Ofs: 0x84 Size: 0x4 - FloatProperty AIModule.BTTask_SetTagCooldown.CooldownDuration */


	inline bool SetCooldownTag(t_structHelper inst, FGameplayTag value) { inst.WriteOffset(0x78, value); }
	inline bool bAddToExistingDuration()
	{
		return boolField80& 0x1;
	}
	inline bool SetbAddToExistingDuration(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x80, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCooldownDuration(t_structHelper inst, float value) { inst.WriteOffset(0x84, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTTask_SetTagCooldown = sizeof(UBTTask_SetTagCooldown); // 136
    static_assert(sizeof(UBTTask_SetTagCooldown) == 0x88, "Size of UBTTask_SetTagCooldown is not correct.");
	auto constexpr UBTTask_SetTagCooldown_CooldownTag_Offset = offsetof(UBTTask_SetTagCooldown, CooldownTag);
	static_assert(UBTTask_SetTagCooldown_CooldownTag_Offset == 0x78, "UBTTask_SetTagCooldown::CooldownTag offset is not 78");
	auto constexpr UBTTask_SetTagCooldown_boolField80_Offset = offsetof(UBTTask_SetTagCooldown, boolField80);
	static_assert(UBTTask_SetTagCooldown_boolField80_Offset == 0x80, "UBTTask_SetTagCooldown::boolField80 offset is not 80");
	auto constexpr UBTTask_SetTagCooldown_CooldownDuration_Offset = offsetof(UBTTask_SetTagCooldown, CooldownDuration);
	static_assert(UBTTask_SetTagCooldown_CooldownDuration_Offset == 0x84, "UBTTask_SetTagCooldown::CooldownDuration offset is not 84");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
