#pragma once
#include "UBTDecorator.hpp"
#include "FGameplayTag.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTDecorator_TagCooldown // Size: 0x80
	: public UBTDecorator // Size: 0x70
{
private:
	typedef UBTDecorator_TagCooldown t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(586); // id32("Class AIModule.BTDecorator_TagCooldown")
		return ptr;
	}
	FGameplayTag CooldownTag; /* Ofs: 0x70 Size: 0x8 - StructProperty AIModule.BTDecorator_TagCooldown.CooldownTag */
	float CooldownDuration; /* Ofs: 0x78 Size: 0x4 - FloatProperty AIModule.BTDecorator_TagCooldown.CooldownDuration */
	uint8_t boolField7C;
	uint8_t boolField7D;
	uint8_t UnknownData7E[0x2];


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
	inline bool bActivatesCooldown()
	{
		return boolField7D& 0x1;
	}
	inline bool SetbActivatesCooldown(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x7D, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTDecorator_TagCooldown = sizeof(UBTDecorator_TagCooldown); // 128
    static_assert(sizeof(UBTDecorator_TagCooldown) == 0x80, "Size of UBTDecorator_TagCooldown is not correct.");
	auto constexpr UBTDecorator_TagCooldown_CooldownTag_Offset = offsetof(UBTDecorator_TagCooldown, CooldownTag);
	static_assert(UBTDecorator_TagCooldown_CooldownTag_Offset == 0x70, "UBTDecorator_TagCooldown::CooldownTag offset is not 70");
	auto constexpr UBTDecorator_TagCooldown_CooldownDuration_Offset = offsetof(UBTDecorator_TagCooldown, CooldownDuration);
	static_assert(UBTDecorator_TagCooldown_CooldownDuration_Offset == 0x78, "UBTDecorator_TagCooldown::CooldownDuration offset is not 78");
	auto constexpr UBTDecorator_TagCooldown_boolField7C_Offset = offsetof(UBTDecorator_TagCooldown, boolField7C);
	static_assert(UBTDecorator_TagCooldown_boolField7C_Offset == 0x7c, "UBTDecorator_TagCooldown::boolField7C offset is not 7c");
	auto constexpr UBTDecorator_TagCooldown_boolField7D_Offset = offsetof(UBTDecorator_TagCooldown, boolField7D);
	static_assert(UBTDecorator_TagCooldown_boolField7D_Offset == 0x7d, "UBTDecorator_TagCooldown::boolField7D offset is not 7d");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
