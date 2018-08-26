#pragma once
#include "UCastableItem.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UItem_JerryCan_C // Size: 0x210
	: public UCastableItem // Size: 0x208
{
private:
	typedef UItem_JerryCan_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(126170); // id32("BlueprintGeneratedClass Item_JerryCan.Item_JerryCan_C")
		return ptr;
	}
	uint8_t boolField208;
	uint8_t UnknownData209[0x3];
	float Fuel; /* Ofs: 0x20C Size: 0x4 - FloatProperty Item_JerryCan.Item_JerryCan_C.Fuel */


	inline bool bIsProcessing()
	{
		return boolField208& 0x1;
	}
	inline bool SetbIsProcessing(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x208, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetFuel(t_structHelper inst, float value) { inst.WriteOffset(0x20C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUItem_JerryCan_C = sizeof(UItem_JerryCan_C); // 528
    static_assert(sizeof(UItem_JerryCan_C) == 0x210, "Size of UItem_JerryCan_C is not correct.");
	auto constexpr UItem_JerryCan_C_boolField208_Offset = offsetof(UItem_JerryCan_C, boolField208);
	static_assert(UItem_JerryCan_C_boolField208_Offset == 0x208, "UItem_JerryCan_C::boolField208 offset is not 208");
	auto constexpr UItem_JerryCan_C_Fuel_Offset = offsetof(UItem_JerryCan_C, Fuel);
	static_assert(UItem_JerryCan_C_Fuel_Offset == 0x20c, "UItem_JerryCan_C::Fuel offset is not 20c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
