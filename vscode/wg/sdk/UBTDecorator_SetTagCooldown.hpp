#pragma once
#include "UBTDecorator.hpp"
#include "FGameplayTag.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTDecorator_SetTagCooldown // Size: 0x80
	: public UBTDecorator // Size: 0x70
{
private:
	typedef UBTDecorator_SetTagCooldown t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(585); // id32("Class AIModule.BTDecorator_SetTagCooldown")
		return ptr;
	}
	FGameplayTag CooldownTag; /* Ofs: 0x70 Size: 0x8 - StructProperty AIModule.BTDecorator_SetTagCooldown.CooldownTag */
	float CooldownDuration; /* Ofs: 0x78 Size: 0x4 - FloatProperty AIModule.BTDecorator_SetTagCooldown.CooldownDuration */
	uint8_t boolField7C;
	uint8_t UnknownData7D[0x3];


	inline bool SetCooldownTag(t_structHelper inst, FGameplayTag value) { inst.WriteOffset(0x70, value); }
	inline bool SetCooldownDuration(t_structHelper inst, float value) { inst.WriteOffset(0x78, value); }
	inline bool bAddToExistingDuration()
	{
		return boolField7C& 0x1;
	}
	inline bool SetbAddToExistingDuration(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x7C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTDecorator_SetTagCooldown = sizeof(UBTDecorator_SetTagCooldown); // 128
    static_assert(sizeof(UBTDecorator_SetTagCooldown) == 0x80, "Size of UBTDecorator_SetTagCooldown is not correct.");
	auto constexpr UBTDecorator_SetTagCooldown_CooldownTag_Offset = offsetof(UBTDecorator_SetTagCooldown, CooldownTag);
	static_assert(UBTDecorator_SetTagCooldown_CooldownTag_Offset == 0x70, "UBTDecorator_SetTagCooldown::CooldownTag offset is not 70");
	auto constexpr UBTDecorator_SetTagCooldown_CooldownDuration_Offset = offsetof(UBTDecorator_SetTagCooldown, CooldownDuration);
	static_assert(UBTDecorator_SetTagCooldown_CooldownDuration_Offset == 0x78, "UBTDecorator_SetTagCooldown::CooldownDuration offset is not 78");
	auto constexpr UBTDecorator_SetTagCooldown_boolField7C_Offset = offsetof(UBTDecorator_SetTagCooldown, boolField7C);
	static_assert(UBTDecorator_SetTagCooldown_boolField7C_Offset == 0x7c, "UBTDecorator_SetTagCooldown::boolField7C offset is not 7c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
