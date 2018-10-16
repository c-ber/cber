#pragma once
#include "UCastableItem.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UItem_Boost_EnergyDrink_C // Size: 0x21C
	: public UCastableItem // Size: 0x208
{
private:
	typedef UItem_Boost_EnergyDrink_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(126172); // id32("BlueprintGeneratedClass Item_Boost_EnergyDrink.Item_Boost_EnergyDrink_C")
		return ptr;
	}
	ExternalPtr<struct UTslCharacter> Character; /* Ofs: 0x208 Size: 0x8 - ObjectProperty Item_Boost_EnergyDrink.Item_Boost_EnergyDrink_C.Character */
	int32_t PrintTime; /* Ofs: 0x210 Size: 0x4 - IntProperty Item_Boost_EnergyDrink.Item_Boost_EnergyDrink_C.PrintTime */
	uint8_t boolField214;
	uint8_t UnknownData215[0x3];
	float BoostGaugeAmount; /* Ofs: 0x218 Size: 0x4 - FloatProperty Item_Boost_EnergyDrink.Item_Boost_EnergyDrink_C.BoostGaugeAmount */


	inline bool SetCharacter(t_structHelper inst, ExternalPtr<struct UTslCharacter> value) { inst.WriteOffset(0x208, value); }
	inline bool SetPrintTime(t_structHelper inst, int32_t value) { inst.WriteOffset(0x210, value); }
	inline bool isProcessing()
	{
		return boolField214& 0x1;
	}
	inline bool SetisProcessing(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x214, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetBoostGaugeAmount(t_structHelper inst, float value) { inst.WriteOffset(0x218, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUItem_Boost_EnergyDrink_C = sizeof(UItem_Boost_EnergyDrink_C); // 540
    static_assert(sizeof(UItem_Boost_EnergyDrink_C) == 0x21C, "Size of UItem_Boost_EnergyDrink_C is not correct.");
	auto constexpr UItem_Boost_EnergyDrink_C_Character_Offset = offsetof(UItem_Boost_EnergyDrink_C, Character);
	static_assert(UItem_Boost_EnergyDrink_C_Character_Offset == 0x208, "UItem_Boost_EnergyDrink_C::Character offset is not 208");
	auto constexpr UItem_Boost_EnergyDrink_C_PrintTime_Offset = offsetof(UItem_Boost_EnergyDrink_C, PrintTime);
	static_assert(UItem_Boost_EnergyDrink_C_PrintTime_Offset == 0x210, "UItem_Boost_EnergyDrink_C::PrintTime offset is not 210");
	auto constexpr UItem_Boost_EnergyDrink_C_boolField214_Offset = offsetof(UItem_Boost_EnergyDrink_C, boolField214);
	static_assert(UItem_Boost_EnergyDrink_C_boolField214_Offset == 0x214, "UItem_Boost_EnergyDrink_C::boolField214 offset is not 214");
	auto constexpr UItem_Boost_EnergyDrink_C_BoostGaugeAmount_Offset = offsetof(UItem_Boost_EnergyDrink_C, BoostGaugeAmount);
	static_assert(UItem_Boost_EnergyDrink_C_BoostGaugeAmount_Offset == 0x218, "UItem_Boost_EnergyDrink_C::BoostGaugeAmount offset is not 218");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
